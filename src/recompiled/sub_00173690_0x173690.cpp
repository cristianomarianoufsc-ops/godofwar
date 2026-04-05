#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173690
// Address: 0x173690 - 0x173710
void sub_00173690_0x173690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173690_0x173690");
#endif

    ctx->pc = 0x173690u;

    // 0x173690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173694: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x173694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x173698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17369c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17369cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1736a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1736a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1736a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736a8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1736ac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1736acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1736b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1736b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1736b4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1736b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1736b8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1736b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1736bc: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x1736bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1736c0: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1736c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1736c4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1736c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1736c8: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x1736c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x1736cc: 0xc08f3c6  jal         func_23CF18
    ctx->pc = 0x1736CCu;
    SET_GPR_U32(ctx, 31, 0x1736D4u);
    ctx->pc = 0x1736D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736CCu;
            // 0x1736d0: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CF18u;
    if (runtime->hasFunction(0x23CF18u)) {
        auto targetFn = runtime->lookupFunction(0x23CF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736D4u; }
        if (ctx->pc != 0x1736D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cf18_0x23cf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736D4u; }
        if (ctx->pc != 0x1736D4u) { return; }
    }
    ctx->pc = 0x1736D4u;
    // 0x1736d4: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x1736d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x1736d8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1736d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1736dc: 0xa2000019  sb          $zero, 0x19($s0)
    ctx->pc = 0x1736dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x1736e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1736e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736e4: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x1736e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1736e8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1736e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1736ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1736ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1736f0: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1736F0u;
    SET_GPR_U32(ctx, 31, 0x1736F8u);
    ctx->pc = 0x1736F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736F0u;
            // 0x1736f4: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736F8u; }
        if (ctx->pc != 0x1736F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736F8u; }
        if (ctx->pc != 0x1736F8u) { return; }
    }
    ctx->pc = 0x1736F8u;
    // 0x1736f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1736f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1736fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173700: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x173700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173708: 0x3e00008  jr          $ra
    ctx->pc = 0x173708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17370Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173708u;
            // 0x17370c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173710u;
}
