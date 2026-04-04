#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299298
// Address: 0x299298 - 0x299378
void entry_299298_0x299378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299298_0x299378");
#endif

    ctx->pc = 0x299298u;

    // 0x299298: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x299298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x29929c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x29929cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2992a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2992a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2992a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2992a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2992a8: 0x24426d70  addiu       $v0, $v0, 0x6D70
    ctx->pc = 0x2992a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28016));
    // 0x2992ac: 0x24a56d80  addiu       $a1, $a1, 0x6D80
    ctx->pc = 0x2992acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28032));
    // 0x2992b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2992b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2992b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2992b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992b8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2992b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2992bc: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2992bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2992c0: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x2992c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x2992c4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2992c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2992c8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2992c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2992cc: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x2992CCu;
    SET_GPR_U32(ctx, 31, 0x2992D4u);
    ctx->pc = 0x2992D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2992CCu;
            // 0x2992d0: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992D4u; }
        if (ctx->pc != 0x2992D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992D4u; }
        if (ctx->pc != 0x2992D4u) { return; }
    }
    ctx->pc = 0x2992D4u;
    // 0x2992d4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2992d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2992d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2992dc: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x2992DCu;
    SET_GPR_U32(ctx, 31, 0x2992E4u);
    ctx->pc = 0x2992E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2992DCu;
            // 0x2992e0: 0xac624b80  sw          $v0, 0x4B80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 19328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992E4u; }
        if (ctx->pc != 0x2992E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992E4u; }
        if (ctx->pc != 0x2992E4u) { return; }
    }
    ctx->pc = 0x2992E4u;
    // 0x2992e4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2992e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2992e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2992e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2992ec: 0xac624b84  sw          $v0, 0x4B84($v1)
    ctx->pc = 0x2992ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19332), GPR_U32(ctx, 2));
    // 0x2992f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2992F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2992F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2992F0u;
            // 0x2992f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299310u: goto label_299310;
            case 0x299330u: goto label_299330;
            case 0x299350u: goto label_299350;
            case 0x29936Cu: goto label_29936c;
            case 0x299370u: goto label_299370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2992F8u;
    // 0x2992f8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2992f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2992fc: 0x0  nop
    ctx->pc = 0x2992fcu;
    // NOP
    // 0x299300: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x299300u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x299304: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x299304u;
    {
        const bool branch_taken_0x299304 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x299308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299304u;
            // 0x299308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299304) {
            ctx->pc = 0x299330u;
            goto label_299330;
        }
    }
    ctx->pc = 0x29930Cu;
    // 0x29930c: 0x0  nop
    ctx->pc = 0x29930cu;
    // NOP
label_299310:
    // 0x299310: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x299310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x299314: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x299314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x299318: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x299318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x29931c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x29931cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x299320: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x299320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x299324: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x299324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x299328: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299328u;
    {
        const bool branch_taken_0x299328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299328) {
            ctx->pc = 0x299310u;
            runtime->cooperativeGuestYield();
            goto label_299310;
        }
    }
    ctx->pc = 0x299330u;
label_299330:
    // 0x299330: 0x3e00008  jr          $ra
    ctx->pc = 0x299330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299330u;
            // 0x299334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299310u: goto label_299310;
            case 0x299330u: goto label_299330;
            case 0x299350u: goto label_299350;
            case 0x29936Cu: goto label_29936c;
            case 0x299370u: goto label_299370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299338u;
    // 0x299338: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29933c: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x29933Cu;
    {
        const bool branch_taken_0x29933c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x299340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29933Cu;
            // 0x299340: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29933c) {
            ctx->pc = 0x29936Cu;
            goto label_29936c;
        }
    }
    ctx->pc = 0x299344u;
    // 0x299344: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x299344u;
    {
        const bool branch_taken_0x299344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299344) {
            ctx->pc = 0x299348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x299344u;
            // 0x299348: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x299370u;
            goto label_299370;
        }
    }
    ctx->pc = 0x29934Cu;
    // 0x29934c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x29934cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_299350:
    // 0x299350: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299354: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x299354u;
    {
        const bool branch_taken_0x299354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x299358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299354u;
            // 0x299358: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299354) {
            ctx->pc = 0x29936Cu;
            goto label_29936c;
        }
    }
    ctx->pc = 0x29935Cu;
    // 0x29935c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x29935Cu;
    {
        const bool branch_taken_0x29935c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29935c) {
            ctx->pc = 0x299360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29935Cu;
            // 0x299360: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x299350u;
            runtime->cooperativeGuestYield();
            goto label_299350;
        }
    }
    ctx->pc = 0x299364u;
    // 0x299364: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x299364u;
    {
        const bool branch_taken_0x299364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299364u;
            // 0x299368: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299364) {
            ctx->pc = 0x299370u;
            goto label_299370;
        }
    }
    ctx->pc = 0x29936Cu;
label_29936c:
    // 0x29936c: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x29936cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_299370:
    // 0x299370: 0x3e00008  jr          $ra
    ctx->pc = 0x299370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299370u;
            // 0x299374: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299310u: goto label_299310;
            case 0x299330u: goto label_299330;
            case 0x299350u: goto label_299350;
            case 0x29936Cu: goto label_29936c;
            case 0x299370u: goto label_299370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299378u;
}
