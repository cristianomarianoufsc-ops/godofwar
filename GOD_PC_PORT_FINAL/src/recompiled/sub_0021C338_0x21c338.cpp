#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021C338
// Address: 0x21c338 - 0x21c3e0
void sub_0021C338_0x21c338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C338_0x21c338");
#endif

    ctx->pc = 0x21c338u;

    // 0x21c338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c33c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x21c33cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x21c340: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C340u;
    {
        const bool branch_taken_0x21c340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C340u;
            // 0x21c344: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c340) {
            ctx->pc = 0x21C350u;
            goto label_21c350;
        }
    }
    ctx->pc = 0x21C348u;
    // 0x21c348: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x21C348u;
    SET_GPR_U32(ctx, 31, 0x21C350u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C350u; }
        if (ctx->pc != 0x21C350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C350u; }
        if (ctx->pc != 0x21C350u) { return; }
    }
    ctx->pc = 0x21C350u;
label_21c350:
    // 0x21c350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c354: 0x3e00008  jr          $ra
    ctx->pc = 0x21C354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C354u;
            // 0x21c358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C350u: goto label_21c350;
            case 0x21C3D0u: goto label_21c3d0;
            case 0x21C3D4u: goto label_21c3d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C35Cu;
    // 0x21c35c: 0x0  nop
    ctx->pc = 0x21c35cu;
    // NOP
    // 0x21c360: 0x3e00008  jr          $ra
    ctx->pc = 0x21C360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C350u: goto label_21c350;
            case 0x21C3D0u: goto label_21c3d0;
            case 0x21C3D4u: goto label_21c3d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C368u;
    // 0x21c368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c36c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21c36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21c370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c374: 0xc04cb8e  jal         func_132E38
    ctx->pc = 0x21C374u;
    SET_GPR_U32(ctx, 31, 0x21C37Cu);
    ctx->pc = 0x21C378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C374u;
            // 0x21c378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E38u;
    if (runtime->hasFunction(0x132E38u)) {
        auto targetFn = runtime->lookupFunction(0x132E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C37Cu; }
        if (ctx->pc != 0x21C37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E38_0x132e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C37Cu; }
        if (ctx->pc != 0x21C37Cu) { return; }
    }
    ctx->pc = 0x21C37Cu;
    // 0x21c37c: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x21c37cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21c380: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x21c380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x21c384: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x21C384u;
    {
        const bool branch_taken_0x21c384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c384) {
            ctx->pc = 0x21C388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C384u;
            // 0x21c388: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C3D4u;
            goto label_21c3d4;
        }
    }
    ctx->pc = 0x21C38Cu;
    // 0x21c38c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x21c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x21c390: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x21c390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x21c394: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x21c394u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21c398: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21c398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x21c39c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21C39Cu;
    {
        const bool branch_taken_0x21c39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C39Cu;
            // 0x21c3a0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c39c) {
            ctx->pc = 0x21C3D0u;
            goto label_21c3d0;
        }
    }
    ctx->pc = 0x21C3A4u;
    // 0x21c3a4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x21c3a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c3a8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x21c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x21c3ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21c3b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c3b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c3b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21c3bc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x21c3bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x21c3c0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x21c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x21c3c4: 0x40f809  jalr        $v0
    ctx->pc = 0x21C3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C3CCu);
        ctx->pc = 0x21C3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3C4u;
            // 0x21c3c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C3CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C350u: goto label_21c350;
            case 0x21C3D0u: goto label_21c3d0;
            case 0x21C3D4u: goto label_21c3d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C3CCu; }
            if (ctx->pc != 0x21C3CCu) { return; }
        }
        }
    }
    ctx->pc = 0x21C3CCu;
    // 0x21c3cc: 0x0  nop
    ctx->pc = 0x21c3ccu;
    // NOP
label_21c3d0:
    // 0x21c3d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21c3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c3d4:
    // 0x21c3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21C3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3D8u;
            // 0x21c3dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C350u: goto label_21c350;
            case 0x21C3D0u: goto label_21c3d0;
            case 0x21C3D4u: goto label_21c3d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C3E0u;
}
