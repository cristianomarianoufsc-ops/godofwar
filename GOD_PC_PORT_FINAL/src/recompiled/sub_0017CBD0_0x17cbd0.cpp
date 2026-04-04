#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017CBD0
// Address: 0x17cbd0 - 0x17ccb8
void sub_0017CBD0_0x17cbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CBD0_0x17cbd0");
#endif

    ctx->pc = 0x17cbd0u;

    // 0x17cbd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17cbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17cbd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17cbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17cbd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17cbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17cbdc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x17cbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbe0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17cbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17cbe4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x17cbe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbe8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x17cbe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17cbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17cbf0: 0xc05f1e4  jal         func_17C790
    ctx->pc = 0x17CBF0u;
    SET_GPR_U32(ctx, 31, 0x17CBF8u);
    ctx->pc = 0x17CBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBF0u;
            // 0x17cbf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C790u;
    if (runtime->hasFunction(0x17C790u)) {
        auto targetFn = runtime->lookupFunction(0x17C790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBF8u; }
        if (ctx->pc != 0x17CBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C790_0x17c790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBF8u; }
        if (ctx->pc != 0x17CBF8u) { return; }
    }
    ctx->pc = 0x17CBF8u;
    // 0x17cbf8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x17cbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x17cbfc: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x17cbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x17cc00: 0x8ca34718  lw          $v1, 0x4718($a1)
    ctx->pc = 0x17cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17cc04: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x17cc04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x17cc08: 0x8ce24714  lw          $v0, 0x4714($a3)
    ctx->pc = 0x17cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17cc0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17cc10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17cc14: 0x8ca24718  lw          $v0, 0x4718($a1)
    ctx->pc = 0x17cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17cc18: 0x8cc34710  lw          $v1, 0x4710($a2)
    ctx->pc = 0x17cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18192)));
    // 0x17cc1c: 0x8ce44714  lw          $a0, 0x4714($a3)
    ctx->pc = 0x17cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17cc20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cc24: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cc28: 0xaca24718  sw          $v0, 0x4718($a1)
    ctx->pc = 0x17cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 2));
    // 0x17cc2c: 0xacc34710  sw          $v1, 0x4710($a2)
    ctx->pc = 0x17cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18192), GPR_U32(ctx, 3));
    // 0x17cc30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17cc34: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x17cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x17cc38: 0x8ca24718  lw          $v0, 0x4718($a1)
    ctx->pc = 0x17cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17cc3c: 0x8cc34710  lw          $v1, 0x4710($a2)
    ctx->pc = 0x17cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18192)));
    // 0x17cc40: 0x8ce44714  lw          $a0, 0x4714($a3)
    ctx->pc = 0x17cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17cc44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cc48: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cc4c: 0xaca24718  sw          $v0, 0x4718($a1)
    ctx->pc = 0x17cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 2));
    // 0x17cc50: 0xacc34710  sw          $v1, 0x4710($a2)
    ctx->pc = 0x17cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18192), GPR_U32(ctx, 3));
    // 0x17cc54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17cc58: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x17cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x17cc5c: 0x8ca24718  lw          $v0, 0x4718($a1)
    ctx->pc = 0x17cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17cc60: 0x8cc34710  lw          $v1, 0x4710($a2)
    ctx->pc = 0x17cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18192)));
    // 0x17cc64: 0x8ce44714  lw          $a0, 0x4714($a3)
    ctx->pc = 0x17cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17cc68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cc6c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cc70: 0xaca24718  sw          $v0, 0x4718($a1)
    ctx->pc = 0x17cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 2));
    // 0x17cc74: 0xacc34710  sw          $v1, 0x4710($a2)
    ctx->pc = 0x17cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18192), GPR_U32(ctx, 3));
    // 0x17cc78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17cc7c: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x17cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x17cc80: 0x8ca24718  lw          $v0, 0x4718($a1)
    ctx->pc = 0x17cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17cc84: 0x8cc34710  lw          $v1, 0x4710($a2)
    ctx->pc = 0x17cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18192)));
    // 0x17cc88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cc8c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cc90: 0xaca24718  sw          $v0, 0x4718($a1)
    ctx->pc = 0x17cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 2));
    // 0x17cc94: 0xc05f202  jal         func_17C808
    ctx->pc = 0x17CC94u;
    SET_GPR_U32(ctx, 31, 0x17CC9Cu);
    ctx->pc = 0x17CC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC94u;
            // 0x17cc98: 0xacc34710  sw          $v1, 0x4710($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 18192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C808u;
    if (runtime->hasFunction(0x17C808u)) {
        auto targetFn = runtime->lookupFunction(0x17C808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC9Cu; }
        if (ctx->pc != 0x17CC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17c808_0x17c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC9Cu; }
        if (ctx->pc != 0x17CC9Cu) { return; }
    }
    ctx->pc = 0x17CC9Cu;
    // 0x17cc9c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17cc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cca0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17cca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cca4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17cca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ccac: 0x3e00008  jr          $ra
    ctx->pc = 0x17CCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CCACu;
            // 0x17ccb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CCB4u;
    // 0x17ccb4: 0x0  nop
    ctx->pc = 0x17ccb4u;
    // NOP
}
