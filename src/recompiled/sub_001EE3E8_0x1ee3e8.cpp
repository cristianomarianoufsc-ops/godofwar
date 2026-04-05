#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EE3E8
// Address: 0x1ee3e8 - 0x1ee488
void sub_001EE3E8_0x1ee3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE3E8_0x1ee3e8");
#endif

    ctx->pc = 0x1ee3e8u;

    // 0x1ee3e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee3ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ee3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ee3f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ee3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ee3f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee3f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee3fc: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1ee3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1ee400: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ee400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee404: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ee404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee408: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ee408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ee40c: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1ee40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1ee410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ee410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee414: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ee414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ee418: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1ee418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1ee41c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE41Cu;
    {
        const bool branch_taken_0x1ee41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE41Cu;
            // 0x1ee420: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee41c) {
            ctx->pc = 0x1EE430u;
            goto label_1ee430;
        }
    }
    ctx->pc = 0x1EE424u;
    // 0x1ee424: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE424u;
    {
        const bool branch_taken_0x1ee424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE424u;
            // 0x1ee428: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee424) {
            ctx->pc = 0x1EE434u;
            goto label_1ee434;
        }
    }
    ctx->pc = 0x1EE42Cu;
    // 0x1ee42c: 0x0  nop
    ctx->pc = 0x1ee42cu;
    // NOP
label_1ee430:
    // 0x1ee430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee434:
    // 0x1ee434: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1ee434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1ee438: 0x8c900104  lw          $s0, 0x104($a0)
    ctx->pc = 0x1ee438u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1ee43c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ee43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee440: 0x8c510034  lw          $s1, 0x34($v0)
    ctx->pc = 0x1ee440u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ee444: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ee444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ee448: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ee448u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ee44c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1ee44cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1ee450: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE450u;
    {
        const bool branch_taken_0x1ee450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ee450) {
            ctx->pc = 0x1EE454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE450u;
            // 0x1ee454: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE468u;
            goto label_1ee468;
        }
    }
    ctx->pc = 0x1EE458u;
    // 0x1ee458: 0xc04da64  jal         func_136990
    ctx->pc = 0x1EE458u;
    SET_GPR_U32(ctx, 31, 0x1EE460u);
    ctx->pc = 0x1EE45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE458u;
            // 0x1ee45c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE460u; }
        if (ctx->pc != 0x1EE460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE460u; }
        if (ctx->pc != 0x1EE460u) { return; }
    }
    ctx->pc = 0x1EE460u;
    // 0x1ee460: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1ee460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1ee464: 0x0  nop
    ctx->pc = 0x1ee464u;
    // NOP
label_1ee468:
    // 0x1ee468: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1ee468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1ee46c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ee46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee478: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1ee478u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ee47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee480: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE480u;
            // 0x1ee484: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE430u: goto label_1ee430;
            case 0x1EE434u: goto label_1ee434;
            case 0x1EE468u: goto label_1ee468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE488u;
}
