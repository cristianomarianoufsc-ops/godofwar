#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144680
// Address: 0x144680 - 0x144730
void sub_00144680_0x144680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144680_0x144680");
#endif

    ctx->pc = 0x144680u;

    // 0x144680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x144680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x144684: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x144684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x144688: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x144688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14468c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14468cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144694: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x144694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144698: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x144698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14469c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14469cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446a0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1446A0u;
    {
        const bool branch_taken_0x1446a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446A0u;
            // 0x1446a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446a0) {
            ctx->pc = 0x1446D8u;
            goto label_1446d8;
        }
    }
    ctx->pc = 0x1446A8u;
    // 0x1446a8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1446a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1446ac: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1446ACu;
    SET_GPR_U32(ctx, 31, 0x1446B4u);
    ctx->pc = 0x1446B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1446ACu;
            // 0x1446b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1446B4u; }
        if (ctx->pc != 0x1446B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1446B4u; }
        if (ctx->pc != 0x1446B4u) { return; }
    }
    ctx->pc = 0x1446B4u;
    // 0x1446b4: 0x8e430ce0  lw          $v1, 0xCE0($s2)
    ctx->pc = 0x1446b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3296)));
    // 0x1446b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1446b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1446bc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1446bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1446c0: 0xae500ce0  sw          $s0, 0xCE0($s2)
    ctx->pc = 0x1446c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3296), GPR_U32(ctx, 16));
    // 0x1446c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1446C4u;
    {
        const bool branch_taken_0x1446c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446C4u;
            // 0x1446c8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446c4) {
            ctx->pc = 0x144714u;
            goto label_144714;
        }
    }
    ctx->pc = 0x1446CCu;
    // 0x1446cc: 0x0  nop
    ctx->pc = 0x1446ccu;
    // NOP
label_1446d0:
    // 0x1446d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1446D0u;
    {
        const bool branch_taken_0x1446d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446D0u;
            // 0x1446d4: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446d0) {
            ctx->pc = 0x144714u;
            goto label_144714;
        }
    }
    ctx->pc = 0x1446D8u;
label_1446d8:
    // 0x1446d8: 0x8e500ce0  lw          $s0, 0xCE0($s2)
    ctx->pc = 0x1446d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3296)));
    // 0x1446dc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1446DCu;
    {
        const bool branch_taken_0x1446dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446DCu;
            // 0x1446e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446dc) {
            ctx->pc = 0x144714u;
            goto label_144714;
        }
    }
    ctx->pc = 0x1446E4u;
    // 0x1446e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1446e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1446e8:
    // 0x1446e8: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x1446E8u;
    SET_GPR_U32(ctx, 31, 0x1446F0u);
    ctx->pc = 0x1446ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1446E8u;
            // 0x1446ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1446F0u; }
        if (ctx->pc != 0x1446F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1446F0u; }
        if (ctx->pc != 0x1446F0u) { return; }
    }
    ctx->pc = 0x1446F0u;
    // 0x1446f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1446F0u;
    {
        const bool branch_taken_0x1446f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1446f0) {
            ctx->pc = 0x1446F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1446F0u;
            // 0x1446f4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144708u;
            goto label_144708;
        }
    }
    ctx->pc = 0x1446F8u;
    // 0x1446f8: 0x1660fff5  bnez        $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x1446F8u;
    {
        const bool branch_taken_0x1446f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1446FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446F8u;
            // 0x1446fc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446f8) {
            ctx->pc = 0x1446D0u;
            runtime->cooperativeGuestYield();
            goto label_1446d0;
        }
    }
    ctx->pc = 0x144700u;
    // 0x144700: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x144700u;
    {
        const bool branch_taken_0x144700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144700u;
            // 0x144704: 0xae420ce0  sw          $v0, 0xCE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144700) {
            ctx->pc = 0x144714u;
            goto label_144714;
        }
    }
    ctx->pc = 0x144708u;
label_144708:
    // 0x144708: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x144708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14470c: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x14470Cu;
    {
        const bool branch_taken_0x14470c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14470c) {
            ctx->pc = 0x144710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14470Cu;
            // 0x144710: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1446E8u;
            runtime->cooperativeGuestYield();
            goto label_1446e8;
        }
    }
    ctx->pc = 0x144714u;
label_144714:
    // 0x144714: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x144714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144718: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x144718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14471c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14471cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144720: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x144720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144728: 0x3e00008  jr          $ra
    ctx->pc = 0x144728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144728u;
            // 0x14472c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1446D0u: goto label_1446d0;
            case 0x1446D8u: goto label_1446d8;
            case 0x1446E8u: goto label_1446e8;
            case 0x144708u: goto label_144708;
            case 0x144714u: goto label_144714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144730u;
}
