#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_295300
// Address: 0x295300 - 0x295390
void entry_295300_0x295390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_295300_0x295390");
#endif

    ctx->pc = 0x295300u;

    // 0x295300: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x295300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295304: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x295304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x295308: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x295308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x29530c: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x29530cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x295310: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x295310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x295314: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295314u;
    {
        const bool branch_taken_0x295314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295314u;
            // 0x295318: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295314) {
            ctx->pc = 0x295324u;
            goto label_295324;
        }
    }
    ctx->pc = 0x29531Cu;
    // 0x29531c: 0x3e00008  jr          $ra
    ctx->pc = 0x29531Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29531Cu;
            // 0x295320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295324u: goto label_295324;
            case 0x295334u: goto label_295334;
            case 0x295378u: goto label_295378;
            case 0x295384u: goto label_295384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x295324u;
label_295324:
    // 0x295324: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295324u;
    {
        const bool branch_taken_0x295324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295324u;
            // 0x295328: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295324) {
            ctx->pc = 0x295334u;
            goto label_295334;
        }
    }
    ctx->pc = 0x29532Cu;
    // 0x29532c: 0x3e00008  jr          $ra
    ctx->pc = 0x29532Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29532Cu;
            // 0x295330: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295324u: goto label_295324;
            case 0x295334u: goto label_295334;
            case 0x295378u: goto label_295378;
            case 0x295384u: goto label_295384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x295334u;
label_295334:
    // 0x295334: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x295334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x295338: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x295338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x29533c: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x29533cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x295340: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x295340u;
    {
        const bool branch_taken_0x295340 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x295344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295340u;
            // 0x295344: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295340) {
            ctx->pc = 0x295378u;
            goto label_295378;
        }
    }
    ctx->pc = 0x295348u;
    // 0x295348: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x295348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x29534c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295350: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x295350u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x295354: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x295354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x295358: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x295358u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29535c: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x29535cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x295360: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x295360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x295364: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x295364u;
    {
        const bool branch_taken_0x295364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x295364) {
            ctx->pc = 0x295368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x295364u;
            // 0x295368: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x295384u;
            goto label_295384;
        }
    }
    ctx->pc = 0x29536Cu;
    // 0x29536c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x29536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x295370: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295370u;
    {
        const bool branch_taken_0x295370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295370u;
            // 0x295374: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295370) {
            ctx->pc = 0x295384u;
            goto label_295384;
        }
    }
    ctx->pc = 0x295378u;
label_295378:
    // 0x295378: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x295378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29537c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29537cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x295380: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x295380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_295384:
    // 0x295384: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x295384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x295388: 0x3e00008  jr          $ra
    ctx->pc = 0x295388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29538Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295388u;
            // 0x29538c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295324u: goto label_295324;
            case 0x295334u: goto label_295334;
            case 0x295378u: goto label_295378;
            case 0x295384u: goto label_295384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x295390u;
}
