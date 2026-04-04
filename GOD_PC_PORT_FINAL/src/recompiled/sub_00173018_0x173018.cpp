#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173018
// Address: 0x173018 - 0x173080
void sub_00173018_0x173018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173018_0x173018");
#endif

    ctx->pc = 0x173018u;

    // 0x173018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17301c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17301cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x173020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17302c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x17302cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x173030: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x173030u;
    {
        const bool branch_taken_0x173030 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x173034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173030u;
            // 0x173034: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173030) {
            ctx->pc = 0x173058u;
            goto label_173058;
        }
    }
    ctx->pc = 0x173038u;
    // 0x173038: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x173038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x17303c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x17303cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x173040: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x173040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x173044: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173048: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17304c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17304cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173050: 0xc09b260  jal         func_26C980
    ctx->pc = 0x173050u;
    SET_GPR_U32(ctx, 31, 0x173058u);
    ctx->pc = 0x173054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173050u;
            // 0x173054: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173058u; }
        if (ctx->pc != 0x173058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173058u; }
        if (ctx->pc != 0x173058u) { return; }
    }
    ctx->pc = 0x173058u;
label_173058:
    // 0x173058: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x173058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x17305c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17305Cu;
    {
        const bool branch_taken_0x17305c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17305c) {
            ctx->pc = 0x173060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17305Cu;
            // 0x173060: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173070u;
            goto label_173070;
        }
    }
    ctx->pc = 0x173064u;
    // 0x173064: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x173064u;
    SET_GPR_U32(ctx, 31, 0x17306Cu);
    ctx->pc = 0x173068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173064u;
            // 0x173068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17306Cu; }
        if (ctx->pc != 0x17306Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17306Cu; }
        if (ctx->pc != 0x17306Cu) { return; }
    }
    ctx->pc = 0x17306Cu;
    // 0x17306c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17306cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173070:
    // 0x173070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173078: 0x3e00008  jr          $ra
    ctx->pc = 0x173078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173078u;
            // 0x17307c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173058u: goto label_173058;
            case 0x173070u: goto label_173070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173080u;
}
