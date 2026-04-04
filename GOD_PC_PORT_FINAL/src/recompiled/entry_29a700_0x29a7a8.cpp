#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29a700
// Address: 0x29a700 - 0x29a7a8
void entry_29a700_0x29a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29a700_0x29a7a8");
#endif

    ctx->pc = 0x29a700u;

    // 0x29a700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29a700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29a704: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29a704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29a708: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29a708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29a70c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29a70cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a710: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29a710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a714: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a718: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A718u;
    {
        const bool branch_taken_0x29a718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A718u;
            // 0x29a71c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a718) {
            ctx->pc = 0x29A730u;
            goto label_29a730;
        }
    }
    ctx->pc = 0x29A720u;
    // 0x29a720: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x29a720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x29a724: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x29a724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29a728: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29A728u;
    {
        const bool branch_taken_0x29a728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A728u;
            // 0x29a72c: 0x2442d3c8  addiu       $v0, $v0, -0x2C38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a728) {
            ctx->pc = 0x29A740u;
            goto label_29a740;
        }
    }
    ctx->pc = 0x29A730u;
label_29a730:
    // 0x29a730: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29a730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29a734: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x29a734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x29a738: 0x8c425b18  lw          $v0, 0x5B18($v0)
    ctx->pc = 0x29a738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23320)));
    // 0x29a73c: 0x8c635b1c  lw          $v1, 0x5B1C($v1)
    ctx->pc = 0x29a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23324)));
label_29a740:
    // 0x29a740: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x29a740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a744: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x29A744u;
    {
        const bool branch_taken_0x29a744 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x29A748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A744u;
            // 0x29a748: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a744) {
            ctx->pc = 0x29A784u;
            goto label_29a784;
        }
    }
    ctx->pc = 0x29A74Cu;
    // 0x29a74c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x29a74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_29a750:
    // 0x29a750: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a754: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29A754u;
    {
        const bool branch_taken_0x29a754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a754) {
            ctx->pc = 0x29A758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A754u;
            // 0x29a758: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A77Cu;
            goto label_29a77c;
        }
    }
    ctx->pc = 0x29A75Cu;
    // 0x29a75c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29a760: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x29a760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a764: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x29a764u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a768: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x29a768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a76c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29a76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a770: 0xc0f809  jalr        $a2
    ctx->pc = 0x29A770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x29A778u);
        ctx->pc = 0x29A774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A770u;
            // 0x29a774: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29A778u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A730u: goto label_29a730;
            case 0x29A740u: goto label_29a740;
            case 0x29A750u: goto label_29a750;
            case 0x29A77Cu: goto label_29a77c;
            case 0x29A784u: goto label_29a784;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29A778u; }
            if (ctx->pc != 0x29A778u) { return; }
        }
        }
    }
    ctx->pc = 0x29A778u;
    // 0x29a778: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x29a778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_29a77c:
    // 0x29a77c: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x29A77Cu;
    {
        const bool branch_taken_0x29a77c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A77Cu;
            // 0x29a780: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a77c) {
            ctx->pc = 0x29A750u;
            runtime->cooperativeGuestYield();
            goto label_29a750;
        }
    }
    ctx->pc = 0x29A784u;
label_29a784:
    // 0x29a784: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x29a784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a788: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x29a788u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a78c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29a78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a790: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29a790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a794: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29a794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a798: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29a798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x29A7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A7A0u;
            // 0x29a7a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A730u: goto label_29a730;
            case 0x29A740u: goto label_29a740;
            case 0x29A750u: goto label_29a750;
            case 0x29A77Cu: goto label_29a77c;
            case 0x29A784u: goto label_29a784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A7A8u;
}
