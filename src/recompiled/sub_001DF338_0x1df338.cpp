#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF338
// Address: 0x1df338 - 0x1df3e8
void sub_001DF338_0x1df338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF338_0x1df338");
#endif

    ctx->pc = 0x1df338u;

    // 0x1df338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df33c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1df33cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df340: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df34c: 0x0  nop
    ctx->pc = 0x1df34cu;
    // NOP
label_1df350:
    // 0x1df350: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1df350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1df354: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1df354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1df358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1df358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df35c: 0x0  nop
    ctx->pc = 0x1df35cu;
    // NOP
    // 0x1df360: 0x0  nop
    ctx->pc = 0x1df360u;
    // NOP
    // 0x1df364: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DF364u;
    {
        const bool branch_taken_0x1df364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF364u;
            // 0x1df368: 0xac400100  sw          $zero, 0x100($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df364) {
            ctx->pc = 0x1DF350u;
            runtime->cooperativeGuestYield();
            goto label_1df350;
        }
    }
    ctx->pc = 0x1DF36Cu;
    // 0x1df36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df370: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x1DF370u;
    SET_GPR_U32(ctx, 31, 0x1DF378u);
    ctx->pc = 0x1DF374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF370u;
            // 0x1df374: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF378u; }
        if (ctx->pc != 0x1DF378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF378u; }
        if (ctx->pc != 0x1DF378u) { return; }
    }
    ctx->pc = 0x1DF378u;
    // 0x1df378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df37c: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x1DF37Cu;
    SET_GPR_U32(ctx, 31, 0x1DF384u);
    ctx->pc = 0x1DF380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF37Cu;
            // 0x1df380: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF384u; }
        if (ctx->pc != 0x1DF384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF384u; }
        if (ctx->pc != 0x1DF384u) { return; }
    }
    ctx->pc = 0x1DF384u;
    // 0x1df384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df388: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x1DF388u;
    SET_GPR_U32(ctx, 31, 0x1DF390u);
    ctx->pc = 0x1DF38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF388u;
            // 0x1df38c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF390u; }
        if (ctx->pc != 0x1DF390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF390u; }
        if (ctx->pc != 0x1DF390u) { return; }
    }
    ctx->pc = 0x1DF390u;
    // 0x1df390: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1df390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1df394: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x1df394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x1df398: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1df398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1df39c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1df39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1df3a0: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1df3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1df3a4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DF3A4u;
    {
        const bool branch_taken_0x1df3a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF3A4u;
            // 0x1df3a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3a4) {
            ctx->pc = 0x1DF3D8u;
            goto label_1df3d8;
        }
    }
    ctx->pc = 0x1DF3ACu;
    // 0x1df3ac: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x1df3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1df3b0:
    // 0x1df3b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1df3b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3b4: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x1df3b4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1df3b8: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1df3b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1df3bc: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x1df3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1df3c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DF3C0u;
    {
        const bool branch_taken_0x1df3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df3c0) {
            ctx->pc = 0x1DF3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF3C0u;
            // 0x1df3c4: 0xac6000b4  sw          $zero, 0xB4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF3C8u;
            goto label_1df3c8;
        }
    }
    ctx->pc = 0x1DF3C8u;
label_1df3c8:
    // 0x1df3c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1df3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df3cc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DF3CCu;
    {
        const bool branch_taken_0x1df3cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF3CCu;
            // 0x1df3d0: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3cc) {
            ctx->pc = 0x1DF3B0u;
            runtime->cooperativeGuestYield();
            goto label_1df3b0;
        }
    }
    ctx->pc = 0x1DF3D4u;
    // 0x1df3d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df3d8:
    // 0x1df3d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF3DCu;
            // 0x1df3e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF350u: goto label_1df350;
            case 0x1DF3B0u: goto label_1df3b0;
            case 0x1DF3C8u: goto label_1df3c8;
            case 0x1DF3D8u: goto label_1df3d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF3E4u;
    // 0x1df3e4: 0x0  nop
    ctx->pc = 0x1df3e4u;
    // NOP
}
