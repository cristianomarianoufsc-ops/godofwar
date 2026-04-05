#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227648
// Address: 0x227648 - 0x227788
void sub_00227648_0x227648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227648_0x227648");
#endif

    ctx->pc = 0x227648u;

    // 0x227648: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x227648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x22764c: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x22764cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x227650: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x227650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x227654: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x227654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227658: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x227658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x22765c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x22765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x227660: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x227660u;
    {
        const bool branch_taken_0x227660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x227664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227660u;
            // 0x227664: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227660) {
            ctx->pc = 0x2276F0u;
            goto label_2276f0;
        }
    }
    ctx->pc = 0x227668u;
    // 0x227668: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x227668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x22766c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22766cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227674: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x227674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x227678: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227678u;
    {
        const bool branch_taken_0x227678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22767Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227678u;
            // 0x22767c: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227678) {
            ctx->pc = 0x227690u;
            goto label_227690;
        }
    }
    ctx->pc = 0x227680u;
    // 0x227680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227684: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227684u;
    {
        const bool branch_taken_0x227684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227684u;
            // 0x227688: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227684) {
            ctx->pc = 0x227694u;
            goto label_227694;
        }
    }
    ctx->pc = 0x22768Cu;
    // 0x22768c: 0x0  nop
    ctx->pc = 0x22768cu;
    // NOP
label_227690:
    // 0x227690: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227694:
    // 0x227694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22769c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22769cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2276a0: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2276a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2276a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2276a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2276a8: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x2276A8u;
    SET_GPR_U32(ctx, 31, 0x2276B0u);
    ctx->pc = 0x2276ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2276A8u;
            // 0x2276ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2276B0u; }
        if (ctx->pc != 0x2276B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2276B0u; }
        if (ctx->pc != 0x2276B0u) { return; }
    }
    ctx->pc = 0x2276B0u;
    // 0x2276b0: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x2276b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2276b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2276b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2276b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2276B8u;
    {
        const bool branch_taken_0x2276b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2276BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2276B8u;
            // 0x2276bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276b8) {
            ctx->pc = 0x2276E4u;
            goto label_2276e4;
        }
    }
    ctx->pc = 0x2276C0u;
    // 0x2276c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2276c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2276c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2276c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2276c8:
    // 0x2276c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2276c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2276cc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2276ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2276d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2276d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2276d4: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x2276d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x2276d8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2276d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2276dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2276DCu;
    {
        const bool branch_taken_0x2276dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2276E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2276DCu;
            // 0x2276e0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276dc) {
            ctx->pc = 0x2276C8u;
            runtime->cooperativeGuestYield();
            goto label_2276c8;
        }
    }
    ctx->pc = 0x2276E4u;
label_2276e4:
    // 0x2276e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2276e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2276e8: 0xc04015e  jal         func_100578
    ctx->pc = 0x2276E8u;
    SET_GPR_U32(ctx, 31, 0x2276F0u);
    ctx->pc = 0x2276ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2276E8u;
            // 0x2276ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2276F0u; }
        if (ctx->pc != 0x2276F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2276F0u; }
        if (ctx->pc != 0x2276F0u) { return; }
    }
    ctx->pc = 0x2276F0u;
label_2276f0:
    // 0x2276f0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2276f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2276f4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2276f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2276f8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2276f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2276fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2276FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2276FCu;
            // 0x227700: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227690u: goto label_227690;
            case 0x227694u: goto label_227694;
            case 0x2276C8u: goto label_2276c8;
            case 0x2276E4u: goto label_2276e4;
            case 0x2276F0u: goto label_2276f0;
            case 0x227748u: goto label_227748;
            case 0x227750u: goto label_227750;
            case 0x227778u: goto label_227778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227704u;
    // 0x227704: 0x0  nop
    ctx->pc = 0x227704u;
    // NOP
    // 0x227708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22770c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227718: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x227718u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x22771c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22771Cu;
    {
        const bool branch_taken_0x22771c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22771Cu;
            // 0x227720: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22771c) {
            ctx->pc = 0x227778u;
            goto label_227778;
        }
    }
    ctx->pc = 0x227724u;
    // 0x227724: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x227724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x227728: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x227728u;
    {
        const bool branch_taken_0x227728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22772Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227728u;
            // 0x22772c: 0xa6020018  sh          $v0, 0x18($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227728) {
            ctx->pc = 0x227778u;
            goto label_227778;
        }
    }
    ctx->pc = 0x227730u;
    // 0x227730: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x227730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x227734: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227734u;
    {
        const bool branch_taken_0x227734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227734u;
            // 0x227738: 0xaca00040  sw          $zero, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227734) {
            ctx->pc = 0x227748u;
            goto label_227748;
        }
    }
    ctx->pc = 0x22773Cu;
    // 0x22773c: 0x40f809  jalr        $v0
    ctx->pc = 0x22773Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227744u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x227744u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227690u: goto label_227690;
            case 0x227694u: goto label_227694;
            case 0x2276C8u: goto label_2276c8;
            case 0x2276E4u: goto label_2276e4;
            case 0x2276F0u: goto label_2276f0;
            case 0x227748u: goto label_227748;
            case 0x227750u: goto label_227750;
            case 0x227778u: goto label_227778;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x227744u; }
            if (ctx->pc != 0x227744u) { return; }
        }
        }
    }
    ctx->pc = 0x227744u;
    // 0x227744: 0x0  nop
    ctx->pc = 0x227744u;
    // NOP
label_227748:
    // 0x227748: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x227748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22774c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22774cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227750:
    // 0x227750: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x227750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x227754: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x227754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x227758: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x227758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22775c: 0x0  nop
    ctx->pc = 0x22775cu;
    // NOP
    // 0x227760: 0x0  nop
    ctx->pc = 0x227760u;
    // NOP
    // 0x227764: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x227764u;
    {
        const bool branch_taken_0x227764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x227768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227764u;
            // 0x227768: 0xac400100  sw          $zero, 0x100($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227764) {
            ctx->pc = 0x227750u;
            runtime->cooperativeGuestYield();
            goto label_227750;
        }
    }
    ctx->pc = 0x22776Cu;
    // 0x22776c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227770: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x227770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x227774: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x227774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_227778:
    // 0x227778: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22777c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22777cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227780: 0x3e00008  jr          $ra
    ctx->pc = 0x227780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227780u;
            // 0x227784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227690u: goto label_227690;
            case 0x227694u: goto label_227694;
            case 0x2276C8u: goto label_2276c8;
            case 0x2276E4u: goto label_2276e4;
            case 0x2276F0u: goto label_2276f0;
            case 0x227748u: goto label_227748;
            case 0x227750u: goto label_227750;
            case 0x227778u: goto label_227778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227788u;
}
