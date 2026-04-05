#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022F0F8
// Address: 0x22f0f8 - 0x22f4b0
void sub_0022F0F8_0x22f0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F0F8_0x22f0f8");
#endif

    ctx->pc = 0x22f0f8u;

    // 0x22f0f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22f0fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22f0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22f100: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22f100u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x22f104: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22f104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22f108: 0x8e2312b0  lw          $v1, 0x12B0($s1)
    ctx->pc = 0x22f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x22f10c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22f10cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f110: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22f110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22f114: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x22f114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x22f118: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x22F118u;
    {
        const bool branch_taken_0x22f118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F118u;
            // 0x22f11c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f118) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F120u;
    // 0x22f120: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22f120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22f124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22f124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22f128: 0x244284c0  addiu       $v0, $v0, -0x7B40
    ctx->pc = 0x22f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935744));
    // 0x22f12c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f130: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22f130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f134: 0x400008  jr          $v0
    ctx->pc = 0x22F134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F13Cu: goto label_22f13c;
            case 0x22F158u: goto label_22f158;
            case 0x22F1B0u: goto label_22f1b0;
            case 0x22F1E8u: goto label_22f1e8;
            case 0x22F244u: goto label_22f244;
            case 0x22F27Cu: goto label_22f27c;
            case 0x22F354u: goto label_22f354;
            case 0x22F380u: goto label_22f380;
            case 0x22F3A4u: goto label_22f3a4;
            case 0x22F3E8u: goto label_22f3e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F13Cu;
label_22f13c:
    // 0x22f13c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f140: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x22f140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x22f144: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x22f144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22f148: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x22F148u;
    SET_GPR_U32(ctx, 31, 0x22F150u);
    ctx->pc = 0x22F14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F148u;
            // 0x22f14c: 0xac830274  sw          $v1, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F150u; }
        if (ctx->pc != 0x22F150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F150u; }
        if (ctx->pc != 0x22F150u) { return; }
    }
    ctx->pc = 0x22F150u;
    // 0x22f150: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x22F150u;
    {
        const bool branch_taken_0x22f150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F150u;
            // 0x22f154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f150) {
            ctx->pc = 0x22F418u;
            goto label_22f418;
        }
    }
    ctx->pc = 0x22F158u;
label_22f158:
    // 0x22f158: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22f158u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22f15c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22f15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f160: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22F160u;
    SET_GPR_U32(ctx, 31, 0x22F168u);
    ctx->pc = 0x22F164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F160u;
            // 0x22f164: 0xae0012a4  sw          $zero, 0x12A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F168u; }
        if (ctx->pc != 0x22F168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F168u; }
        if (ctx->pc != 0x22F168u) { return; }
    }
    ctx->pc = 0x22F168u;
    // 0x22f168: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x22F168u;
    {
        const bool branch_taken_0x22f168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F168u;
            // 0x22f16c: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f168) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F170u;
    // 0x22f170: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22f170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22f174: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x22f174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x22f178: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x22f178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f17c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22f180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f184: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F184u;
    {
        const bool branch_taken_0x22f184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F184u;
            // 0x22f188: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f184) {
            ctx->pc = 0x22F1A4u;
            goto label_22f1a4;
        }
    }
    ctx->pc = 0x22F18Cu;
    // 0x22f18c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22f190: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22f190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22f194: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22f194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f198: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f19c: 0x1443008f  bne         $v0, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x22F19Cu;
    {
        const bool branch_taken_0x22f19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F19Cu;
            // 0x22f1a0: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f19c) {
            ctx->pc = 0x22F3DCu;
            goto label_22f3dc;
        }
    }
    ctx->pc = 0x22F1A4u;
label_22f1a4:
    // 0x22f1a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f1a8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x22F1A8u;
    {
        const bool branch_taken_0x22f1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1A8u;
            // 0x22f1ac: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1a8) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F1B0u;
label_22f1b0:
    // 0x22f1b0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22f1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22f1b4: 0xc08ba42  jal         func_22E908
    ctx->pc = 0x22F1B4u;
    SET_GPR_U32(ctx, 31, 0x22F1BCu);
    ctx->pc = 0x22F1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1B4u;
            // 0x22f1b8: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E908u;
    if (runtime->hasFunction(0x22E908u)) {
        auto targetFn = runtime->lookupFunction(0x22E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F1BCu; }
        if (ctx->pc != 0x22F1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E908_0x22e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F1BCu; }
        if (ctx->pc != 0x22F1BCu) { return; }
    }
    ctx->pc = 0x22F1BCu;
    // 0x22f1bc: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x22F1BCu;
    {
        const bool branch_taken_0x22f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1BCu;
            // 0x22f1c0: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1bc) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F1C4u;
    // 0x22f1c4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22f1c8: 0x2463bc78  addiu       $v1, $v1, -0x4388
    ctx->pc = 0x22f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950008));
    // 0x22f1cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f1d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22f1d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f1d8: 0x54400099  bnel        $v0, $zero, . + 4 + (0x99 << 2)
    ctx->pc = 0x22F1D8u;
    {
        const bool branch_taken_0x22f1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f1d8) {
            ctx->pc = 0x22F1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1D8u;
            // 0x22f1dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F1E0u;
    // 0x22f1e0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x22F1E0u;
    {
        const bool branch_taken_0x22f1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1E0u;
            // 0x22f1e4: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1e0) {
            ctx->pc = 0x22F3DCu;
            goto label_22f3dc;
        }
    }
    ctx->pc = 0x22F1E8u;
label_22f1e8:
    // 0x22f1e8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22f1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22f1ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f1f0: 0xae0212a4  sw          $v0, 0x12A4($s0)
    ctx->pc = 0x22f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 2));
    // 0x22f1f4: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22F1F4u;
    SET_GPR_U32(ctx, 31, 0x22F1FCu);
    ctx->pc = 0x22F1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1F4u;
            // 0x22f1f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F1FCu; }
        if (ctx->pc != 0x22F1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F1FCu; }
        if (ctx->pc != 0x22F1FCu) { return; }
    }
    ctx->pc = 0x22F1FCu;
    // 0x22f1fc: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x22F1FCu;
    {
        const bool branch_taken_0x22f1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F1FCu;
            // 0x22f200: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1fc) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F204u;
    // 0x22f204: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22f204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22f208: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x22f208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x22f20c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x22f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f210: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22f210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22f214: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f218: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F218u;
    {
        const bool branch_taken_0x22f218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F218u;
            // 0x22f21c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f218) {
            ctx->pc = 0x22F238u;
            goto label_22f238;
        }
    }
    ctx->pc = 0x22F220u;
    // 0x22f220: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22f224: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22f228: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f22c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f230: 0x1443006a  bne         $v0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x22F230u;
    {
        const bool branch_taken_0x22f230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F230u;
            // 0x22f234: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f230) {
            ctx->pc = 0x22F3DCu;
            goto label_22f3dc;
        }
    }
    ctx->pc = 0x22F238u;
label_22f238:
    // 0x22f238: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22f238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22f23c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x22F23Cu;
    {
        const bool branch_taken_0x22f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F23Cu;
            // 0x22f240: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f23c) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F244u;
label_22f244:
    // 0x22f244: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22f244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22f248: 0xc08ba42  jal         func_22E908
    ctx->pc = 0x22F248u;
    SET_GPR_U32(ctx, 31, 0x22F250u);
    ctx->pc = 0x22F24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F248u;
            // 0x22f24c: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E908u;
    if (runtime->hasFunction(0x22E908u)) {
        auto targetFn = runtime->lookupFunction(0x22E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F250u; }
        if (ctx->pc != 0x22F250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E908_0x22e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F250u; }
        if (ctx->pc != 0x22F250u) { return; }
    }
    ctx->pc = 0x22F250u;
    // 0x22f250: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x22F250u;
    {
        const bool branch_taken_0x22f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F250u;
            // 0x22f254: 0x8e0212a4  lw          $v0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f250) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F258u;
    // 0x22f258: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22f258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x22f25c: 0x2463bc78  addiu       $v1, $v1, -0x4388
    ctx->pc = 0x22f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950008));
    // 0x22f260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22f268: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f26c: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x22F26Cu;
    {
        const bool branch_taken_0x22f26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F26Cu;
            // 0x22f270: 0x8e2212b0  lw          $v0, 0x12B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f26c) {
            ctx->pc = 0x22F3DCu;
            goto label_22f3dc;
        }
    }
    ctx->pc = 0x22F274u;
    // 0x22f274: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x22F274u;
    {
        const bool branch_taken_0x22f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F274u;
            // 0x22f278: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f274) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F27Cu;
label_22f27c:
    // 0x22f27c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x22f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x22f280: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x22f280u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x22f284: 0x8c82bc70  lw          $v0, -0x4390($a0)
    ctx->pc = 0x22f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950000)));
    // 0x22f288: 0x2485bc70  addiu       $a1, $a0, -0x4390
    ctx->pc = 0x22f288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950000));
    // 0x22f28c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F28Cu;
    {
        const bool branch_taken_0x22f28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F28Cu;
            // 0x22f290: 0xace012cc  sw          $zero, 0x12CC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f28c) {
            ctx->pc = 0x22F2A8u;
            goto label_22f2a8;
        }
    }
    ctx->pc = 0x22F294u;
    // 0x22f294: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f298: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22f298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22f29c: 0x8c42bc68  lw          $v0, -0x4398($v0)
    ctx->pc = 0x22f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949992)));
    // 0x22f2a0: 0x50430067  beql        $v0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x22F2A0u;
    {
        const bool branch_taken_0x22f2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f2a0) {
            ctx->pc = 0x22F2A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2A0u;
            // 0x22f2a4: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F2A8u;
label_22f2a8:
    // 0x22f2a8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x22f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22f2ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F2ACu;
    {
        const bool branch_taken_0x22f2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2ACu;
            // 0x22f2b0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2ac) {
            ctx->pc = 0x22F2C4u;
            goto label_22f2c4;
        }
    }
    ctx->pc = 0x22F2B4u;
    // 0x22f2b4: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22f2b8: 0x8c42bc6c  lw          $v0, -0x4394($v0)
    ctx->pc = 0x22f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949996)));
    // 0x22f2bc: 0x50430060  beql        $v0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x22F2BCu;
    {
        const bool branch_taken_0x22f2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f2bc) {
            ctx->pc = 0x22F2C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2BCu;
            // 0x22f2c0: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F2C4u;
label_22f2c4:
    // 0x22f2c4: 0x8c85bc70  lw          $a1, -0x4390($a0)
    ctx->pc = 0x22f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950000)));
    // 0x22f2c8: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F2C8u;
    {
        const bool branch_taken_0x22f2c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2C8u;
            // 0x22f2cc: 0x2483bc70  addiu       $v1, $a0, -0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2c8) {
            ctx->pc = 0x22F2DCu;
            goto label_22f2dc;
        }
    }
    ctx->pc = 0x22F2D0u;
    // 0x22f2d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22f2d4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22F2D4u;
    {
        const bool branch_taken_0x22f2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2D4u;
            // 0x22f2d8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2d4) {
            ctx->pc = 0x22F34Cu;
            goto label_22f34c;
        }
    }
    ctx->pc = 0x22F2DCu;
label_22f2dc:
    // 0x22f2dc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F2DCu;
    {
        const bool branch_taken_0x22f2dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2DCu;
            // 0x22f2e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2dc) {
            ctx->pc = 0x22F2ECu;
            goto label_22f2ec;
        }
    }
    ctx->pc = 0x22F2E4u;
    // 0x22f2e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f2e8: 0x8c44c140  lw          $a0, -0x3EC0($v0)
    ctx->pc = 0x22f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951232)));
label_22f2ec:
    // 0x22f2ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22f2f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F2F0u;
    {
        const bool branch_taken_0x22f2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F2F0u;
            // 0x22f2f4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2f0) {
            ctx->pc = 0x22F304u;
            goto label_22f304;
        }
    }
    ctx->pc = 0x22F2F8u;
    // 0x22f2f8: 0x8c43c14c  lw          $v1, -0x3EB4($v0)
    ctx->pc = 0x22f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951244)));
    // 0x22f2fc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x22f2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22f300: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x22f300u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_22f304:
    // 0x22f304: 0x288201c6  slti        $v0, $a0, 0x1C6
    ctx->pc = 0x22f304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)454) ? 1 : 0);
    // 0x22f308: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x22F308u;
    {
        const bool branch_taken_0x22f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F308u;
            // 0x22f30c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f308) {
            ctx->pc = 0x22F434u;
            goto label_22f434;
        }
    }
    ctx->pc = 0x22F310u;
    // 0x22f310: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F310u;
    {
        const bool branch_taken_0x22f310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F310u;
            // 0x22f314: 0x244612a4  addiu       $a2, $v0, 0x12A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f310) {
            ctx->pc = 0x22F32Cu;
            goto label_22f32c;
        }
    }
    ctx->pc = 0x22F318u;
    // 0x22f318: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f31c: 0x8c42c140  lw          $v0, -0x3EC0($v0)
    ctx->pc = 0x22f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951232)));
    // 0x22f320: 0x284201c6  slti        $v0, $v0, 0x1C6
    ctx->pc = 0x22f320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)454) ? 1 : 0);
    // 0x22f324: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F324u;
    {
        const bool branch_taken_0x22f324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F324u;
            // 0x22f328: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f324) {
            ctx->pc = 0x22F330u;
            goto label_22f330;
        }
    }
    ctx->pc = 0x22F32Cu;
label_22f32c:
    // 0x22f32c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f330:
    // 0x22f330: 0x8e2212b0  lw          $v0, 0x12B0($s1)
    ctx->pc = 0x22f330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
    // 0x22f334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f338: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x22f338u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x22f33c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f340: 0xace312cc  sw          $v1, 0x12CC($a3)
    ctx->pc = 0x22f340u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4812), GPR_U32(ctx, 3));
    // 0x22f344: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x22F344u;
    {
        const bool branch_taken_0x22f344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F344u;
            // 0x22f348: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f344) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F34Cu;
label_22f34c:
    // 0x22f34c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x22F34Cu;
    {
        const bool branch_taken_0x22f34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F34Cu;
            // 0x22f350: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f34c) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F354u;
label_22f354:
    // 0x22f354: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f358: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22f358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22f35c: 0x8c4212a4  lw          $v0, 0x12A4($v0)
    ctx->pc = 0x22f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x22f360: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22f364: 0x8c64cb94  lw          $a0, -0x346C($v1)
    ctx->pc = 0x22f364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x22f368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f36c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f370: 0xaca31290  sw          $v1, 0x1290($a1)
    ctx->pc = 0x22f370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4752), GPR_U32(ctx, 3));
    // 0x22f374: 0xac8200dc  sw          $v0, 0xDC($a0)
    ctx->pc = 0x22f374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
    // 0x22f378: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22F378u;
    {
        const bool branch_taken_0x22f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F378u;
            // 0x22f37c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f378) {
            ctx->pc = 0x22F3D0u;
            goto label_22f3d0;
        }
    }
    ctx->pc = 0x22F380u;
label_22f380:
    // 0x22f380: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f384: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f388: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x22f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x22f38c: 0x5043002c  beql        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x22F38Cu;
    {
        const bool branch_taken_0x22f38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f38c) {
            ctx->pc = 0x22F390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F38Cu;
            // 0x22f390: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F394u;
    // 0x22f394: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x22F394u;
    {
        const bool branch_taken_0x22f394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f394) {
            ctx->pc = 0x22F398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F394u;
            // 0x22f398: 0xae2312b0  sw          $v1, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F39Cu;
    // 0x22f39c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x22F39Cu;
    {
        const bool branch_taken_0x22f39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f39c) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F3A4u;
label_22f3a4:
    // 0x22f3a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f3a8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22f3ac: 0x8c4212a4  lw          $v0, 0x12A4($v0)
    ctx->pc = 0x22f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x22f3b0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22f3b4: 0x8c64cb94  lw          $a0, -0x346C($v1)
    ctx->pc = 0x22f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x22f3b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f3bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f3c0: 0xaca31290  sw          $v1, 0x1290($a1)
    ctx->pc = 0x22f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4752), GPR_U32(ctx, 3));
    // 0x22f3c4: 0xac8200dc  sw          $v0, 0xDC($a0)
    ctx->pc = 0x22f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
    // 0x22f3c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f3cc: 0x0  nop
    ctx->pc = 0x22f3ccu;
    // NOP
label_22f3d0:
    // 0x22f3d0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x22F3D0u;
    SET_GPR_U32(ctx, 31, 0x22F3D8u);
    ctx->pc = 0x22F3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F3D0u;
            // 0x22f3d4: 0xac820274  sw          $v0, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3D8u; }
        if (ctx->pc != 0x22F3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3D8u; }
        if (ctx->pc != 0x22F3D8u) { return; }
    }
    ctx->pc = 0x22F3D8u;
    // 0x22f3d8: 0x8e2212b0  lw          $v0, 0x12B0($s1)
    ctx->pc = 0x22f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4784)));
label_22f3dc:
    // 0x22f3dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f3e0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22F3E0u;
    {
        const bool branch_taken_0x22f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F3E0u;
            // 0x22f3e4: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3e0) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F3E8u;
label_22f3e8:
    // 0x22f3e8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22f3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22f3ec: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22F3ECu;
    SET_GPR_U32(ctx, 31, 0x22F3F4u);
    ctx->pc = 0x22F3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F3ECu;
            // 0x22f3f0: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3F4u; }
        if (ctx->pc != 0x22F3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F3F4u; }
        if (ctx->pc != 0x22F3F4u) { return; }
    }
    ctx->pc = 0x22F3F4u;
    // 0x22f3f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22F3F4u;
    {
        const bool branch_taken_0x22f3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F3F4u;
            // 0x22f3f8: 0x8e0412a4  lw          $a0, 0x12A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3f4) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F3FCu;
    // 0x22f3fc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f400: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x22f400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x22f404: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22f404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22f408: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22f408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f40c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f410: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F410u;
    {
        const bool branch_taken_0x22f410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F410u;
            // 0x22f414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f410) {
            ctx->pc = 0x22F420u;
            goto label_22f420;
        }
    }
    ctx->pc = 0x22F418u;
label_22f418:
    // 0x22f418: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22F418u;
    {
        const bool branch_taken_0x22f418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F418u;
            // 0x22f41c: 0xae2212b0  sw          $v0, 0x12B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f418) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F420u;
label_22f420:
    // 0x22f420: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f428: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x22f428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x22f42c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F42Cu;
    {
        const bool branch_taken_0x22f42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F42Cu;
            // 0x22f430: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f42c) {
            ctx->pc = 0x22F43Cu;
            goto label_22f43c;
        }
    }
    ctx->pc = 0x22F434u;
label_22f434:
    // 0x22f434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22F434u;
    {
        const bool branch_taken_0x22f434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F434u;
            // 0x22f438: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f434) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F43Cu;
label_22f43c:
    // 0x22f43c: 0xae0212a4  sw          $v0, 0x12A4($s0)
    ctx->pc = 0x22f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 2));
label_22f440:
    // 0x22f440: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x22F440u;
    {
        const bool branch_taken_0x22f440 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F440u;
            // 0x22f444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f440) {
            ctx->pc = 0x22F494u;
            goto label_22f494;
        }
    }
    ctx->pc = 0x22F448u;
    // 0x22f448: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F448u;
    {
        const bool branch_taken_0x22f448 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F448u;
            // 0x22f44c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f448) {
            ctx->pc = 0x22F478u;
            goto label_22f478;
        }
    }
    ctx->pc = 0x22F450u;
    // 0x22f450: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22f454: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x22f454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22f458: 0x8c4312a4  lw          $v1, 0x12A4($v0)
    ctx->pc = 0x22f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x22f45c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22f460: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x22f460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22f464: 0x2442be80  addiu       $v0, $v0, -0x4180
    ctx->pc = 0x22f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950528));
    // 0x22f468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22f46c: 0xc08bd2c  jal         func_22F4B0
    ctx->pc = 0x22F46Cu;
    SET_GPR_U32(ctx, 31, 0x22F474u);
    ctx->pc = 0x22F470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F46Cu;
            // 0x22f470: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F4B0u;
    if (runtime->hasFunction(0x22F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x22F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F474u; }
        if (ctx->pc != 0x22F474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22f4b0_0x22f4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F474u; }
        if (ctx->pc != 0x22F474u) { return; }
    }
    ctx->pc = 0x22F474u;
    // 0x22f474: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22f474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_22f478:
    // 0x22f478: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x22f478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x22f47c: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x22f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22f480: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x22F480u;
    SET_GPR_U32(ctx, 31, 0x22F488u);
    ctx->pc = 0x22F484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F480u;
            // 0x22f484: 0xac830274  sw          $v1, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F488u; }
        if (ctx->pc != 0x22F488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F488u; }
        if (ctx->pc != 0x22F488u) { return; }
    }
    ctx->pc = 0x22F488u;
    // 0x22f488: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22f488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22f48c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f490: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x22f490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
label_22f494:
    // 0x22f494: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22f494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f498: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22f498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f49c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22f49cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f4a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22f4a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22F4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F4A8u;
            // 0x22f4ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F13Cu: goto label_22f13c;
            case 0x22F158u: goto label_22f158;
            case 0x22F1A4u: goto label_22f1a4;
            case 0x22F1B0u: goto label_22f1b0;
            case 0x22F1E8u: goto label_22f1e8;
            case 0x22F238u: goto label_22f238;
            case 0x22F244u: goto label_22f244;
            case 0x22F27Cu: goto label_22f27c;
            case 0x22F2A8u: goto label_22f2a8;
            case 0x22F2C4u: goto label_22f2c4;
            case 0x22F2DCu: goto label_22f2dc;
            case 0x22F2ECu: goto label_22f2ec;
            case 0x22F304u: goto label_22f304;
            case 0x22F32Cu: goto label_22f32c;
            case 0x22F330u: goto label_22f330;
            case 0x22F34Cu: goto label_22f34c;
            case 0x22F354u: goto label_22f354;
            case 0x22F380u: goto label_22f380;
            case 0x22F3A4u: goto label_22f3a4;
            case 0x22F3D0u: goto label_22f3d0;
            case 0x22F3DCu: goto label_22f3dc;
            case 0x22F3E8u: goto label_22f3e8;
            case 0x22F418u: goto label_22f418;
            case 0x22F420u: goto label_22f420;
            case 0x22F434u: goto label_22f434;
            case 0x22F43Cu: goto label_22f43c;
            case 0x22F440u: goto label_22f440;
            case 0x22F478u: goto label_22f478;
            case 0x22F494u: goto label_22f494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F4B0u;
}
