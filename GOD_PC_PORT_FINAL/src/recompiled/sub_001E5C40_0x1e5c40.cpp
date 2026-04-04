#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5C40
// Address: 0x1e5c40 - 0x1e5d30
void sub_001E5C40_0x1e5c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5C40_0x1e5c40");
#endif

    ctx->pc = 0x1e5c40u;

    // 0x1e5c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e5c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e5c44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e5c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e5c48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e5c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e5c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e5c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e5c54: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x1e5c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1e5c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5c5c: 0x241201ff  addiu       $s2, $zero, 0x1FF
    ctx->pc = 0x1e5c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_1e5c60:
    // 0x1e5c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c64: 0xc0909ca  jal         func_242728
    ctx->pc = 0x1E5C64u;
    SET_GPR_U32(ctx, 31, 0x1E5C6Cu);
    ctx->pc = 0x1E5C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C64u;
            // 0x1e5c68: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242728u;
    if (runtime->hasFunction(0x242728u)) {
        auto targetFn = runtime->lookupFunction(0x242728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5C6Cu; }
        if (ctx->pc != 0x1E5C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242728_0x242730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5C6Cu; }
        if (ctx->pc != 0x1E5C6Cu) { return; }
    }
    ctx->pc = 0x1E5C6Cu;
    // 0x1e5c6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5c70: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E5C70u;
    {
        const bool branch_taken_0x1e5c70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C70u;
            // 0x1e5c74: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c70) {
            ctx->pc = 0x1E5C60u;
            runtime->cooperativeGuestYield();
            goto label_1e5c60;
        }
    }
    ctx->pc = 0x1E5C78u;
    // 0x1e5c78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5c7c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x1e5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x1e5c80: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1e5c84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e5c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e5c88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e5c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e5c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c90: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1e5c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e5c94: 0x0  nop
    ctx->pc = 0x1e5c94u;
    // NOP
label_1e5c98:
    // 0x1e5c98: 0x240201ff  addiu       $v0, $zero, 0x1FF
    ctx->pc = 0x1e5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x1e5c9c: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5C9Cu;
    {
        const bool branch_taken_0x1e5c9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C9Cu;
            // 0x1e5ca0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c9c) {
            ctx->pc = 0x1E5CC0u;
            goto label_1e5cc0;
        }
    }
    ctx->pc = 0x1E5CA4u;
    // 0x1e5ca4: 0x262217f4  addiu       $v0, $s1, 0x17F4
    ctx->pc = 0x1e5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6132));
    // 0x1e5ca8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1e5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1e5cac: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1e5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e5cb0: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x1e5cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x1e5cb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e5cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e5cb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5CB8u;
    {
        const bool branch_taken_0x1e5cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5CB8u;
            // 0x1e5cbc: 0xac440008  sw          $a0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cb8) {
            ctx->pc = 0x1E5CD8u;
            goto label_1e5cd8;
        }
    }
    ctx->pc = 0x1E5CC0u;
label_1e5cc0:
    // 0x1e5cc0: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x1e5cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e5cc4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1e5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e5cc8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e5ccc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1e5cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1e5cd0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1e5cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1e5cd4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1e5cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1e5cd8:
    // 0x1e5cd8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e5cdc: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x1e5cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1e5ce0: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x1e5ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e5ce4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1e5ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1e5ce8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e5ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e5cec: 0x28c40200  slti        $a0, $a2, 0x200
    ctx->pc = 0x1e5cecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1e5cf0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1e5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e5cf4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e5cf8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1e5cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1e5cfc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e5cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1e5d00: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1E5D00u;
    {
        const bool branch_taken_0x1e5d00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D00u;
            // 0x1e5d04: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d00) {
            ctx->pc = 0x1E5C98u;
            runtime->cooperativeGuestYield();
            goto label_1e5c98;
        }
    }
    ctx->pc = 0x1E5D08u;
    // 0x1e5d08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e5d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e5d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5d10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e5d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5d14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e5d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D1Cu;
            // 0x1e5d20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5C60u: goto label_1e5c60;
            case 0x1E5C98u: goto label_1e5c98;
            case 0x1E5CC0u: goto label_1e5cc0;
            case 0x1E5CD8u: goto label_1e5cd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5D24u;
    // 0x1e5d24: 0x0  nop
    ctx->pc = 0x1e5d24u;
    // NOP
    // 0x1e5d28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e5d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e5d2c: 0x0  nop
    ctx->pc = 0x1e5d2cu;
    // NOP
}
