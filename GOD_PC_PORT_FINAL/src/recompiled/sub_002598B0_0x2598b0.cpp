#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002598B0
// Address: 0x2598b0 - 0x2599f0
void sub_002598B0_0x2598b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002598B0_0x2598b0");
#endif

    ctx->pc = 0x2598b0u;

    // 0x2598b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2598b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2598b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2598b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2598b8: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x2598B8u;
    SET_GPR_U32(ctx, 31, 0x2598C0u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598C0u; }
        if (ctx->pc != 0x2598C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598C0u; }
        if (ctx->pc != 0x2598C0u) { return; }
    }
    ctx->pc = 0x2598C0u;
    // 0x2598c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2598c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2598c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2598C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2598C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2598C4u;
            // 0x2598c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259908u: goto label_259908;
            case 0x259920u: goto label_259920;
            case 0x259968u: goto label_259968;
            case 0x259980u: goto label_259980;
            case 0x2599C8u: goto label_2599c8;
            case 0x2599E0u: goto label_2599e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2598CCu;
    // 0x2598cc: 0x0  nop
    ctx->pc = 0x2598ccu;
    // NOP
    // 0x2598d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2598d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2598d4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2598d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2598d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2598d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2598dc: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x2598dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x2598e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2598e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2598e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2598e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2598e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2598e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2598ec: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2598ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2598f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2598f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2598f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2598F4u;
    {
        const bool branch_taken_0x2598f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2598F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2598F4u;
            // 0x2598f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598f4) {
            ctx->pc = 0x259908u;
            goto label_259908;
        }
    }
    ctx->pc = 0x2598FCu;
    // 0x2598fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2598fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259900: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259900u;
    SET_GPR_U32(ctx, 31, 0x259908u);
    ctx->pc = 0x259904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259900u;
            // 0x259904: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259908u; }
        if (ctx->pc != 0x259908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259908u; }
        if (ctx->pc != 0x259908u) { return; }
    }
    ctx->pc = 0x259908u;
label_259908:
    // 0x259908: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x25990c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25990Cu;
    {
        const bool branch_taken_0x25990c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25990c) {
            ctx->pc = 0x259910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25990Cu;
            // 0x259910: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259920u;
            goto label_259920;
        }
    }
    ctx->pc = 0x259914u;
    // 0x259914: 0xc07b3ae  jal         func_1ECEB8
    ctx->pc = 0x259914u;
    SET_GPR_U32(ctx, 31, 0x25991Cu);
    ctx->pc = 0x259918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259914u;
            // 0x259918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECEB8u;
    if (runtime->hasFunction(0x1ECEB8u)) {
        auto targetFn = runtime->lookupFunction(0x1ECEB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25991Cu; }
        if (ctx->pc != 0x25991Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1eceb8_0x1ecee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25991Cu; }
        if (ctx->pc != 0x25991Cu) { return; }
    }
    ctx->pc = 0x25991Cu;
    // 0x25991c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25991cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259920:
    // 0x259920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259928: 0x3e00008  jr          $ra
    ctx->pc = 0x259928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25992Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259928u;
            // 0x25992c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259908u: goto label_259908;
            case 0x259920u: goto label_259920;
            case 0x259968u: goto label_259968;
            case 0x259980u: goto label_259980;
            case 0x2599C8u: goto label_2599c8;
            case 0x2599E0u: goto label_2599e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259930u;
    // 0x259930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259934: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259938: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25993c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x25993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x259940: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25994c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x25994cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259950: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x259950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259954: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259954u;
    {
        const bool branch_taken_0x259954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259954u;
            // 0x259958: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259954) {
            ctx->pc = 0x259968u;
            goto label_259968;
        }
    }
    ctx->pc = 0x25995Cu;
    // 0x25995c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x25995cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x259960: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x259960u;
    SET_GPR_U32(ctx, 31, 0x259968u);
    ctx->pc = 0x259964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259960u;
            // 0x259964: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259968u; }
        if (ctx->pc != 0x259968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259968u; }
        if (ctx->pc != 0x259968u) { return; }
    }
    ctx->pc = 0x259968u;
label_259968:
    // 0x259968: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x259968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x25996c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25996Cu;
    {
        const bool branch_taken_0x25996c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25996c) {
            ctx->pc = 0x259970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25996Cu;
            // 0x259970: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259980u;
            goto label_259980;
        }
    }
    ctx->pc = 0x259974u;
    // 0x259974: 0xc07503c  jal         func_1D40F0
    ctx->pc = 0x259974u;
    SET_GPR_U32(ctx, 31, 0x25997Cu);
    ctx->pc = 0x259978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259974u;
            // 0x259978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D40F0u;
    if (runtime->hasFunction(0x1D40F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D40F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25997Cu; }
        if (ctx->pc != 0x25997Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d40f0_0x1d4118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25997Cu; }
        if (ctx->pc != 0x25997Cu) { return; }
    }
    ctx->pc = 0x25997Cu;
    // 0x25997c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25997cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259980:
    // 0x259980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259988: 0x3e00008  jr          $ra
    ctx->pc = 0x259988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25998Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259988u;
            // 0x25998c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259908u: goto label_259908;
            case 0x259920u: goto label_259920;
            case 0x259968u: goto label_259968;
            case 0x259980u: goto label_259980;
            case 0x2599C8u: goto label_2599c8;
            case 0x2599E0u: goto label_2599e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259990u;
    // 0x259990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259994: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259998: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25999c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x25999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x2599a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2599a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2599a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2599a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2599a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2599ac: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2599acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2599b0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2599b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2599b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2599B4u;
    {
        const bool branch_taken_0x2599b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2599B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2599B4u;
            // 0x2599b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2599b4) {
            ctx->pc = 0x2599C8u;
            goto label_2599c8;
        }
    }
    ctx->pc = 0x2599BCu;
    // 0x2599bc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2599bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2599c0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2599C0u;
    SET_GPR_U32(ctx, 31, 0x2599C8u);
    ctx->pc = 0x2599C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2599C0u;
            // 0x2599c4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2599C8u; }
        if (ctx->pc != 0x2599C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2599C8u; }
        if (ctx->pc != 0x2599C8u) { return; }
    }
    ctx->pc = 0x2599C8u;
label_2599c8:
    // 0x2599c8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2599c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2599cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2599CCu;
    {
        const bool branch_taken_0x2599cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2599cc) {
            ctx->pc = 0x2599D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2599CCu;
            // 0x2599d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2599E0u;
            goto label_2599e0;
        }
    }
    ctx->pc = 0x2599D4u;
    // 0x2599d4: 0xc0638ce  jal         func_18E338
    ctx->pc = 0x2599D4u;
    SET_GPR_U32(ctx, 31, 0x2599DCu);
    ctx->pc = 0x2599D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2599D4u;
            // 0x2599d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E338u;
    if (runtime->hasFunction(0x18E338u)) {
        auto targetFn = runtime->lookupFunction(0x18E338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2599DCu; }
        if (ctx->pc != 0x2599DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18e338_0x18e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2599DCu; }
        if (ctx->pc != 0x2599DCu) { return; }
    }
    ctx->pc = 0x2599DCu;
    // 0x2599dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2599dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2599e0:
    // 0x2599e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2599e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2599e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2599e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2599e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2599E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2599ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2599E8u;
            // 0x2599ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259908u: goto label_259908;
            case 0x259920u: goto label_259920;
            case 0x259968u: goto label_259968;
            case 0x259980u: goto label_259980;
            case 0x2599C8u: goto label_2599c8;
            case 0x2599E0u: goto label_2599e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2599F0u;
}
