#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F378
// Address: 0x17f378 - 0x17f448
void sub_0017F378_0x17f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F378_0x17f378");
#endif

    ctx->pc = 0x17f378u;

    // 0x17f378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f37c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17f380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f38c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17f38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f390: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17f394: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x17f394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x17f398: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17f398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f39c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F39Cu;
    {
        const bool branch_taken_0x17f39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F39Cu;
            // 0x17f3a0: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f39c) {
            ctx->pc = 0x17F3B0u;
            goto label_17f3b0;
        }
    }
    ctx->pc = 0x17F3A4u;
    // 0x17f3a4: 0xc08e68c  jal         func_239A30
    ctx->pc = 0x17F3A4u;
    SET_GPR_U32(ctx, 31, 0x17F3ACu);
    ctx->pc = 0x239A30u;
    if (runtime->hasFunction(0x239A30u)) {
        auto targetFn = runtime->lookupFunction(0x239A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3ACu; }
        if (ctx->pc != 0x17F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239a30_0x239af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3ACu; }
        if (ctx->pc != 0x17F3ACu) { return; }
    }
    ctx->pc = 0x17F3ACu;
    // 0x17f3ac: 0x0  nop
    ctx->pc = 0x17f3acu;
    // NOP
label_17f3b0:
    // 0x17f3b0: 0x96060020  lhu         $a2, 0x20($s0)
    ctx->pc = 0x17f3b0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17f3b4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x17f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17f3b8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17f3bc: 0xd13023  subu        $a2, $a2, $s1
    ctx->pc = 0x17f3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x17f3c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17f3c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x17f3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x17f3c8: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x17f3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x17f3cc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x17F3CCu;
    SET_GPR_U32(ctx, 31, 0x17F3D4u);
    ctx->pc = 0x17F3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3CCu;
            // 0x17f3d0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3D4u; }
        if (ctx->pc != 0x17F3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3D4u; }
        if (ctx->pc != 0x17F3D4u) { return; }
    }
    ctx->pc = 0x17F3D4u;
    // 0x17f3d4: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x17f3d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17f3d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f3dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17f3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f3e4: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x17f3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f3e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17f3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17F3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3ECu;
            // 0x17f3f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F3B0u: goto label_17f3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F3F4u;
    // 0x17f3f4: 0x0  nop
    ctx->pc = 0x17f3f4u;
    // NOP
    // 0x17f3f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f3fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f408: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17f408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17f40c: 0x96060020  lhu         $a2, 0x20($s0)
    ctx->pc = 0x17f40cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17f410: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x17f410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17f414: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17f414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17f418: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17f41c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x17f41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x17f420: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x17f420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x17f424: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x17F424u;
    SET_GPR_U32(ctx, 31, 0x17F42Cu);
    ctx->pc = 0x17F428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F424u;
            // 0x17f428: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F42Cu; }
        if (ctx->pc != 0x17F42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F42Cu; }
        if (ctx->pc != 0x17F42Cu) { return; }
    }
    ctx->pc = 0x17F42Cu;
    // 0x17f42c: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x17f42cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17f430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f434: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17f438: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x17f438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f43c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f440: 0x3e00008  jr          $ra
    ctx->pc = 0x17F440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F440u;
            // 0x17f444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F3B0u: goto label_17f3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F448u;
}
