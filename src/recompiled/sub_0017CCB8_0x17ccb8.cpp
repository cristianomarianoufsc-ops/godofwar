#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017CCB8
// Address: 0x17ccb8 - 0x17ce00
void sub_0017CCB8_0x17ccb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CCB8_0x17ccb8");
#endif

    ctx->pc = 0x17ccb8u;

    // 0x17ccb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17ccb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17ccbc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17ccbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17ccc0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17ccc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17ccc4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x17ccc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ccc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17cccc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x17ccccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ccd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17ccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17ccd4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x17ccd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ccd8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x17ccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x17ccdc: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x17ccdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cce0: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x17cce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17cce8: 0xc05f1e4  jal         func_17C790
    ctx->pc = 0x17CCE8u;
    SET_GPR_U32(ctx, 31, 0x17CCF0u);
    ctx->pc = 0x17CCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CCE8u;
            // 0x17ccec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C790u;
    if (runtime->hasFunction(0x17C790u)) {
        auto targetFn = runtime->lookupFunction(0x17C790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCF0u; }
        if (ctx->pc != 0x17CCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C790_0x17c790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCF0u; }
        if (ctx->pc != 0x17CCF0u) { return; }
    }
    ctx->pc = 0x17CCF0u;
    // 0x17ccf0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x17ccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x17ccf4: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x17ccf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x17ccf8: 0x8ca34718  lw          $v1, 0x4718($a1)
    ctx->pc = 0x17ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17ccfc: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x17ccfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x17cd00: 0x8ce24714  lw          $v0, 0x4714($a3)
    ctx->pc = 0x17cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17cd04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17cd08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17cd0c: 0x8ca24718  lw          $v0, 0x4718($a1)
    ctx->pc = 0x17cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17cd10: 0x8cc34710  lw          $v1, 0x4710($a2)
    ctx->pc = 0x17cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18192)));
    // 0x17cd14: 0x8ce44714  lw          $a0, 0x4714($a3)
    ctx->pc = 0x17cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17cd18: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cd1c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cd20: 0xaca24718  sw          $v0, 0x4718($a1)
    ctx->pc = 0x17cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 2));
    // 0x17cd24: 0xacc34710  sw          $v1, 0x4710($a2)
    ctx->pc = 0x17cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18192), GPR_U32(ctx, 3));
    // 0x17cd28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17cd2c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x17cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x17cd30: 0x8ca24718  lw          $v0, 0x4718($a1)
    ctx->pc = 0x17cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17cd34: 0x8cc34710  lw          $v1, 0x4710($a2)
    ctx->pc = 0x17cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18192)));
    // 0x17cd38: 0x8ce44714  lw          $a0, 0x4714($a3)
    ctx->pc = 0x17cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17cd3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cd40: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cd44: 0xaca24718  sw          $v0, 0x4718($a1)
    ctx->pc = 0x17cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 2));
    // 0x17cd48: 0xacc34710  sw          $v1, 0x4710($a2)
    ctx->pc = 0x17cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18192), GPR_U32(ctx, 3));
    // 0x17cd4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17cd50: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x17cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x17cd54: 0x8ca24718  lw          $v0, 0x4718($a1)
    ctx->pc = 0x17cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17cd58: 0x8cc34710  lw          $v1, 0x4710($a2)
    ctx->pc = 0x17cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18192)));
    // 0x17cd5c: 0x8ce44714  lw          $a0, 0x4714($a3)
    ctx->pc = 0x17cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17cd60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cd64: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cd68: 0xaca24718  sw          $v0, 0x4718($a1)
    ctx->pc = 0x17cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 2));
    // 0x17cd6c: 0xacc34710  sw          $v1, 0x4710($a2)
    ctx->pc = 0x17cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18192), GPR_U32(ctx, 3));
    // 0x17cd70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17cd74: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x17cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x17cd78: 0x8ca24718  lw          $v0, 0x4718($a1)
    ctx->pc = 0x17cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17cd7c: 0x8cc34710  lw          $v1, 0x4710($a2)
    ctx->pc = 0x17cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18192)));
    // 0x17cd80: 0x8ce44714  lw          $a0, 0x4714($a3)
    ctx->pc = 0x17cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17cd84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cd88: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cd8c: 0xaca24718  sw          $v0, 0x4718($a1)
    ctx->pc = 0x17cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 2));
    // 0x17cd90: 0xacc34710  sw          $v1, 0x4710($a2)
    ctx->pc = 0x17cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18192), GPR_U32(ctx, 3));
    // 0x17cd94: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17cd98: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x17cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x17cd9c: 0x8ca24718  lw          $v0, 0x4718($a1)
    ctx->pc = 0x17cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17cda0: 0x8cc34710  lw          $v1, 0x4710($a2)
    ctx->pc = 0x17cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18192)));
    // 0x17cda4: 0x8ce44714  lw          $a0, 0x4714($a3)
    ctx->pc = 0x17cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17cda8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cdac: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cdb0: 0xaca24718  sw          $v0, 0x4718($a1)
    ctx->pc = 0x17cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 2));
    // 0x17cdb4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17cdb8: 0xacc34710  sw          $v1, 0x4710($a2)
    ctx->pc = 0x17cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18192), GPR_U32(ctx, 3));
    // 0x17cdbc: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x17cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
    // 0x17cdc0: 0x8ca24718  lw          $v0, 0x4718($a1)
    ctx->pc = 0x17cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17cdc4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cdc8: 0xaca24718  sw          $v0, 0x4718($a1)
    ctx->pc = 0x17cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 2));
    // 0x17cdcc: 0x8cc24710  lw          $v0, 0x4710($a2)
    ctx->pc = 0x17cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18192)));
    // 0x17cdd0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cdd4: 0xc05f202  jal         func_17C808
    ctx->pc = 0x17CDD4u;
    SET_GPR_U32(ctx, 31, 0x17CDDCu);
    ctx->pc = 0x17CDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDD4u;
            // 0x17cdd8: 0xacc24710  sw          $v0, 0x4710($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 18192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C808u;
    if (runtime->hasFunction(0x17C808u)) {
        auto targetFn = runtime->lookupFunction(0x17C808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDDCu; }
        if (ctx->pc != 0x17CDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17c808_0x17c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDDCu; }
        if (ctx->pc != 0x17CDDCu) { return; }
    }
    ctx->pc = 0x17CDDCu;
    // 0x17cddc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17cddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17cde0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17cde0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cde4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17cde4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cde8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17cde8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cdec: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17cdecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cdf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x17CDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDF4u;
            // 0x17cdf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CDFCu;
    // 0x17cdfc: 0x0  nop
    ctx->pc = 0x17cdfcu;
    // NOP
}
