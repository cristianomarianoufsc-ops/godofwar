#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283668
// Address: 0x283668 - 0x283770
void sub_00283668_0x283668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283668_0x283668");
#endif

    ctx->pc = 0x283668u;

    // 0x283668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28366c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x28366cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x283670: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283678: 0x8c8239ac  lw          $v0, 0x39AC($a0)
    ctx->pc = 0x283678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14764)));
    // 0x28367c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283680: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x283680u;
    {
        const bool branch_taken_0x283680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283680u;
            // 0x283684: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283680) {
            ctx->pc = 0x2836ACu;
            goto label_2836ac;
        }
    }
    ctx->pc = 0x283688u;
    // 0x283688: 0x8e0239ac  lw          $v0, 0x39AC($s0)
    ctx->pc = 0x283688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14764)));
    // 0x28368c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_283690:
    // 0x283690: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x283690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x283694: 0x60f809  jalr        $v1
    ctx->pc = 0x283694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28369Cu);
        ctx->pc = 0x283698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283694u;
            // 0x283698: 0xae0239ac  sw          $v0, 0x39AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 14764), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28369Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283690u: goto label_283690;
            case 0x2836ACu: goto label_2836ac;
            case 0x283700u: goto label_283700;
            case 0x283724u: goto label_283724;
            case 0x283748u: goto label_283748;
            case 0x28375Cu: goto label_28375c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28369Cu; }
            if (ctx->pc != 0x28369Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28369Cu;
    // 0x28369c: 0x8e0239ac  lw          $v0, 0x39AC($s0)
    ctx->pc = 0x28369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14764)));
    // 0x2836a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2836a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2836a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2836A4u;
    {
        const bool branch_taken_0x2836a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2836A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2836A4u;
            // 0x2836a8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836a4) {
            ctx->pc = 0x283690u;
            runtime->cooperativeGuestYield();
            goto label_283690;
        }
    }
    ctx->pc = 0x2836ACu;
label_2836ac:
    // 0x2836ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2836acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2836b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2836b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2836b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2836B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2836B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2836B4u;
            // 0x2836b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283690u: goto label_283690;
            case 0x2836ACu: goto label_2836ac;
            case 0x283700u: goto label_283700;
            case 0x283724u: goto label_283724;
            case 0x283748u: goto label_283748;
            case 0x28375Cu: goto label_28375c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2836BCu;
    // 0x2836bc: 0x0  nop
    ctx->pc = 0x2836bcu;
    // NOP
    // 0x2836c0: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2836c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x2836c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2836c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2836c8: 0x8ce5616c  lw          $a1, 0x616C($a3)
    ctx->pc = 0x2836c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24940)));
    // 0x2836cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2836ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2836d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2836d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2836d4: 0x24e3616c  addiu       $v1, $a3, 0x616C
    ctx->pc = 0x2836d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 24940));
    // 0x2836d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2836d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2836dc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2836DCu;
    {
        const bool branch_taken_0x2836dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2836E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2836DCu;
            // 0x2836e0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836dc) {
            ctx->pc = 0x283724u;
            goto label_283724;
        }
    }
    ctx->pc = 0x2836E4u;
    // 0x2836e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2836e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2836e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2836E8u;
    {
        const bool branch_taken_0x2836e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2836E8u;
            // 0x2836ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836e8) {
            ctx->pc = 0x283724u;
            goto label_283724;
        }
    }
    ctx->pc = 0x2836F0u;
    // 0x2836f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2836f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2836f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2836f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2836f8: 0x24e4616c  addiu       $a0, $a3, 0x616C
    ctx->pc = 0x2836f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 24940));
    // 0x2836fc: 0x0  nop
    ctx->pc = 0x2836fcu;
    // NOP
label_283700:
    // 0x283700: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x283700u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x283704: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x283704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283708: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x283708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28370c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28370cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x283710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x283710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283714: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x283714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x283718: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x283718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28371c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28371Cu;
    {
        const bool branch_taken_0x28371c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28371c) {
            ctx->pc = 0x283720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28371Cu;
            // 0x283720: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283700u;
            runtime->cooperativeGuestYield();
            goto label_283700;
        }
    }
    ctx->pc = 0x283724u;
label_283724:
    // 0x283724: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x283724u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
    // 0x283728: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x283728u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x28372c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x28372Cu;
    {
        const bool branch_taken_0x28372c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x283730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28372Cu;
            // 0x283730: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28372c) {
            ctx->pc = 0x28375Cu;
            goto label_28375c;
        }
    }
    ctx->pc = 0x283734u;
    // 0x283734: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x283734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x283738: 0x2442616c  addiu       $v0, $v0, 0x616C
    ctx->pc = 0x283738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24940));
    // 0x28373c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x28373cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x283740: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x283740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x283744: 0x0  nop
    ctx->pc = 0x283744u;
    // NOP
label_283748:
    // 0x283748: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x283748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x28374c: 0x40f809  jalr        $v0
    ctx->pc = 0x28374Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283754u);
        ctx->pc = 0x283750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28374Cu;
            // 0x283750: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x283754u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283690u: goto label_283690;
            case 0x2836ACu: goto label_2836ac;
            case 0x283700u: goto label_283700;
            case 0x283724u: goto label_283724;
            case 0x283748u: goto label_283748;
            case 0x28375Cu: goto label_28375c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x283754u; }
            if (ctx->pc != 0x283754u) { return; }
        }
        }
    }
    ctx->pc = 0x283754u;
    // 0x283754: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x283754u;
    {
        const bool branch_taken_0x283754 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x283754) {
            ctx->pc = 0x283758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283754u;
            // 0x283758: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283748u;
            runtime->cooperativeGuestYield();
            goto label_283748;
        }
    }
    ctx->pc = 0x28375Cu;
label_28375c:
    // 0x28375c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28375cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283760: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x283760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283768: 0x3e00008  jr          $ra
    ctx->pc = 0x283768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28376Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283768u;
            // 0x28376c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283690u: goto label_283690;
            case 0x2836ACu: goto label_2836ac;
            case 0x283700u: goto label_283700;
            case 0x283724u: goto label_283724;
            case 0x283748u: goto label_283748;
            case 0x28375Cu: goto label_28375c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283770u;
}
