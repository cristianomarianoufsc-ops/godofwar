#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173318
// Address: 0x173318 - 0x1733c0
void sub_00173318_0x173318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173318_0x173318");
#endif

    ctx->pc = 0x173318u;

    // 0x173318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17331c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x173320: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17332c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x17332cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x173330: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x173330u;
    {
        const bool branch_taken_0x173330 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x173334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173330u;
            // 0x173334: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173330) {
            ctx->pc = 0x173370u;
            goto label_173370;
        }
    }
    ctx->pc = 0x173338u;
    // 0x173338: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x173338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17333c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17333cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x173340: 0x8c42c398  lw          $v0, -0x3C68($v0)
    ctx->pc = 0x173340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951832)));
    // 0x173344: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x173344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x173348: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x173348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x17334c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17334cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x173350: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173358: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x173358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17335c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17335cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173360: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173360u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173364: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x173364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173368: 0xc09b260  jal         func_26C980
    ctx->pc = 0x173368u;
    SET_GPR_U32(ctx, 31, 0x173370u);
    ctx->pc = 0x17336Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173368u;
            // 0x17336c: 0x8e060024  lw          $a2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173370u; }
        if (ctx->pc != 0x173370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173370u; }
        if (ctx->pc != 0x173370u) { return; }
    }
    ctx->pc = 0x173370u;
label_173370:
    // 0x173370: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x173370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x173374: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x173374u;
    {
        const bool branch_taken_0x173374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173374) {
            ctx->pc = 0x173378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173374u;
            // 0x173378: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173388u;
            goto label_173388;
        }
    }
    ctx->pc = 0x17337Cu;
    // 0x17337c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x17337Cu;
    SET_GPR_U32(ctx, 31, 0x173384u);
    ctx->pc = 0x173380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17337Cu;
            // 0x173380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173384u; }
        if (ctx->pc != 0x173384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173384u; }
        if (ctx->pc != 0x173384u) { return; }
    }
    ctx->pc = 0x173384u;
    // 0x173384: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x173384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173388:
    // 0x173388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17338c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17338cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173390: 0x3e00008  jr          $ra
    ctx->pc = 0x173390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173390u;
            // 0x173394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173370u: goto label_173370;
            case 0x173388u: goto label_173388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173398u;
    // 0x173398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17339c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x17339cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1733a0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1733a0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1733a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1733a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1733a8: 0xc05cb42  jal         func_172D08
    ctx->pc = 0x1733A8u;
    SET_GPR_U32(ctx, 31, 0x1733B0u);
    ctx->pc = 0x1733ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1733A8u;
            // 0x1733ac: 0xaca40024  sw          $a0, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172D08u;
    if (runtime->hasFunction(0x172D08u)) {
        auto targetFn = runtime->lookupFunction(0x172D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733B0u; }
        if (ctx->pc != 0x1733B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172D08_0x172d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733B0u; }
        if (ctx->pc != 0x1733B0u) { return; }
    }
    ctx->pc = 0x1733B0u;
    // 0x1733b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1733b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1733b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1733B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1733B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1733B4u;
            // 0x1733b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173370u: goto label_173370;
            case 0x173388u: goto label_173388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1733BCu;
    // 0x1733bc: 0x0  nop
    ctx->pc = 0x1733bcu;
    // NOP
}
