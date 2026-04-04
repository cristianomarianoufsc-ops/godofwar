#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002398B0
// Address: 0x2398b0 - 0x239918
void sub_002398B0_0x2398b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002398B0_0x2398b0");
#endif

    ctx->pc = 0x2398b0u;

    // 0x2398b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2398b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2398b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2398b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2398b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2398b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2398bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2398bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2398c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2398c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2398c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2398c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2398C8u;
    {
        const bool branch_taken_0x2398c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2398CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2398C8u;
            // 0x2398cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398c8) {
            ctx->pc = 0x2398D8u;
            goto label_2398d8;
        }
    }
    ctx->pc = 0x2398D0u;
    // 0x2398d0: 0xc08c2c6  jal         func_230B18
    ctx->pc = 0x2398D0u;
    SET_GPR_U32(ctx, 31, 0x2398D8u);
    ctx->pc = 0x230B18u;
    if (runtime->hasFunction(0x230B18u)) {
        auto targetFn = runtime->lookupFunction(0x230B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398D8u; }
        if (ctx->pc != 0x2398D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230B18_0x230b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398D8u; }
        if (ctx->pc != 0x2398D8u) { return; }
    }
    ctx->pc = 0x2398D8u;
label_2398d8:
    // 0x2398d8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2398d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2398dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2398DCu;
    {
        const bool branch_taken_0x2398dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2398dc) {
            ctx->pc = 0x2398E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2398DCu;
            // 0x2398e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2398F0u;
            goto label_2398f0;
        }
    }
    ctx->pc = 0x2398E4u;
    // 0x2398e4: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x2398E4u;
    SET_GPR_U32(ctx, 31, 0x2398ECu);
    ctx->pc = 0x2398E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2398E4u;
            // 0x2398e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398ECu; }
        if (ctx->pc != 0x2398ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398ECu; }
        if (ctx->pc != 0x2398ECu) { return; }
    }
    ctx->pc = 0x2398ECu;
    // 0x2398ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2398ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2398f0:
    // 0x2398f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2398f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2398f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2398f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2398f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2398F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2398FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2398F8u;
            // 0x2398fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2398D8u: goto label_2398d8;
            case 0x2398F0u: goto label_2398f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239900u;
    // 0x239900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x239900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x239904: 0x0  nop
    ctx->pc = 0x239904u;
    // NOP
    // 0x239908: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x239908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x23990c: 0x0  nop
    ctx->pc = 0x23990cu;
    // NOP
    // 0x239910: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x239914: 0x0  nop
    ctx->pc = 0x239914u;
    // NOP
}
