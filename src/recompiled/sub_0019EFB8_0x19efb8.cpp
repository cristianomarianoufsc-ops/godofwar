#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EFB8
// Address: 0x19efb8 - 0x19f380
void sub_0019EFB8_0x19efb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EFB8_0x19efb8");
#endif

    ctx->pc = 0x19efb8u;

    // 0x19efb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19efb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19efbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19efc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19efc4: 0xc05d656  jal         func_175958
    ctx->pc = 0x19EFC4u;
    SET_GPR_U32(ctx, 31, 0x19EFCCu);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFCCu; }
        if (ctx->pc != 0x19EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFCCu; }
        if (ctx->pc != 0x19EFCCu) { return; }
    }
    ctx->pc = 0x19EFCCu;
    // 0x19efcc: 0xc067684  jal         func_19DA10
    ctx->pc = 0x19EFCCu;
    SET_GPR_U32(ctx, 31, 0x19EFD4u);
    ctx->pc = 0x19EFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EFCCu;
            // 0x19efd0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DA10u;
    if (runtime->hasFunction(0x19DA10u)) {
        auto targetFn = runtime->lookupFunction(0x19DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFD4u; }
        if (ctx->pc != 0x19EFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_19da10_0x19db48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFD4u; }
        if (ctx->pc != 0x19EFD4u) { return; }
    }
    ctx->pc = 0x19EFD4u;
    // 0x19efd4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19efd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19efd8: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19efd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19efdc: 0x24a53d58  addiu       $a1, $a1, 0x3D58
    ctx->pc = 0x19efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15704));
    // 0x19efe0: 0x24c6dd90  addiu       $a2, $a2, -0x2270
    ctx->pc = 0x19efe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958480));
    // 0x19efe4: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19EFE4u;
    SET_GPR_U32(ctx, 31, 0x19EFECu);
    ctx->pc = 0x19EFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EFE4u;
            // 0x19efe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFECu; }
        if (ctx->pc != 0x19EFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFECu; }
        if (ctx->pc != 0x19EFECu) { return; }
    }
    ctx->pc = 0x19EFECu;
    // 0x19efec: 0xc067868  jal         func_19E1A0
    ctx->pc = 0x19EFECu;
    SET_GPR_U32(ctx, 31, 0x19EFF4u);
    ctx->pc = 0x19E1A0u;
    if (runtime->hasFunction(0x19E1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19E1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFF4u; }
        if (ctx->pc != 0x19EFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_19e1a0_0x19e4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFF4u; }
        if (ctx->pc != 0x19EFF4u) { return; }
    }
    ctx->pc = 0x19EFF4u;
    // 0x19eff4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19eff8: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19eff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19effc: 0x24a53d70  addiu       $a1, $a1, 0x3D70
    ctx->pc = 0x19effcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15728));
    // 0x19f000: 0x24c6e7e8  addiu       $a2, $a2, -0x1818
    ctx->pc = 0x19f000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961128));
    // 0x19f004: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19F004u;
    SET_GPR_U32(ctx, 31, 0x19F00Cu);
    ctx->pc = 0x19F008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F004u;
            // 0x19f008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F00Cu; }
        if (ctx->pc != 0x19F00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F00Cu; }
        if (ctx->pc != 0x19F00Cu) { return; }
    }
    ctx->pc = 0x19F00Cu;
    // 0x19f00c: 0xc067adc  jal         func_19EB70
    ctx->pc = 0x19F00Cu;
    SET_GPR_U32(ctx, 31, 0x19F014u);
    ctx->pc = 0x19EB70u;
    if (runtime->hasFunction(0x19EB70u)) {
        auto targetFn = runtime->lookupFunction(0x19EB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F014u; }
        if (ctx->pc != 0x19F014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EB70_0x19eb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F014u; }
        if (ctx->pc != 0x19F014u) { return; }
    }
    ctx->pc = 0x19F014u;
    // 0x19f014: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f018: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19f018u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19f01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f020: 0x24a53d80  addiu       $a1, $a1, 0x3D80
    ctx->pc = 0x19f020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15744));
    // 0x19f024: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19F024u;
    SET_GPR_U32(ctx, 31, 0x19F02Cu);
    ctx->pc = 0x19F028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F024u;
            // 0x19f028: 0x24c6ec90  addiu       $a2, $a2, -0x1370 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F02Cu; }
        if (ctx->pc != 0x19F02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F02Cu; }
        if (ctx->pc != 0x19F02Cu) { return; }
    }
    ctx->pc = 0x19F02Cu;
    // 0x19f02c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f034: 0x3e00008  jr          $ra
    ctx->pc = 0x19F034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F034u;
            // 0x19f038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F0F8u: goto label_19f0f8;
            case 0x19F0FCu: goto label_19f0fc;
            case 0x19F110u: goto label_19f110;
            case 0x19F1B8u: goto label_19f1b8;
            case 0x19F1C0u: goto label_19f1c0;
            case 0x19F1C4u: goto label_19f1c4;
            case 0x19F1C8u: goto label_19f1c8;
            case 0x19F1CCu: goto label_19f1cc;
            case 0x19F1D0u: goto label_19f1d0;
            case 0x19F240u: goto label_19f240;
            case 0x19F244u: goto label_19f244;
            case 0x19F258u: goto label_19f258;
            case 0x19F358u: goto label_19f358;
            case 0x19F35Cu: goto label_19f35c;
            case 0x19F364u: goto label_19f364;
            case 0x19F368u: goto label_19f368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F03Cu;
    // 0x19f03c: 0x0  nop
    ctx->pc = 0x19f03cu;
    // NOP
    // 0x19f040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19f044: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19f044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19f048: 0x2403040c  addiu       $v1, $zero, 0x40C
    ctx->pc = 0x19f048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x19f04c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x19f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19f050: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x19f050u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x19f054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f058: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19f05c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x19f05cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f060: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19f060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x19f064: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19f064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19f068: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x19f068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x19f06c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x19f070: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19f070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19f074: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x19f074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x19f078: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19f078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f07c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x19F07Cu;
    SET_GPR_U32(ctx, 31, 0x19F084u);
    ctx->pc = 0x19F080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F07Cu;
            // 0x19f080: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F084u; }
        if (ctx->pc != 0x19F084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F084u; }
        if (ctx->pc != 0x19F084u) { return; }
    }
    ctx->pc = 0x19F084u;
    // 0x19f084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f088: 0xc079fd0  jal         func_1E7F40
    ctx->pc = 0x19F088u;
    SET_GPR_U32(ctx, 31, 0x19F090u);
    ctx->pc = 0x19F08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F088u;
            // 0x19f08c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F40u;
    if (runtime->hasFunction(0x1E7F40u)) {
        auto targetFn = runtime->lookupFunction(0x1E7F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F090u; }
        if (ctx->pc != 0x19F090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7F40_0x1e7f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F090u; }
        if (ctx->pc != 0x19F090u) { return; }
    }
    ctx->pc = 0x19F090u;
    // 0x19f090: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19f090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f094: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f098: 0x3e00008  jr          $ra
    ctx->pc = 0x19F098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F098u;
            // 0x19f09c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F0F8u: goto label_19f0f8;
            case 0x19F0FCu: goto label_19f0fc;
            case 0x19F110u: goto label_19f110;
            case 0x19F1B8u: goto label_19f1b8;
            case 0x19F1C0u: goto label_19f1c0;
            case 0x19F1C4u: goto label_19f1c4;
            case 0x19F1C8u: goto label_19f1c8;
            case 0x19F1CCu: goto label_19f1cc;
            case 0x19F1D0u: goto label_19f1d0;
            case 0x19F240u: goto label_19f240;
            case 0x19F244u: goto label_19f244;
            case 0x19F258u: goto label_19f258;
            case 0x19F358u: goto label_19f358;
            case 0x19F35Cu: goto label_19f35c;
            case 0x19F364u: goto label_19f364;
            case 0x19F368u: goto label_19f368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F0A0u;
    // 0x19f0a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19f0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19f0a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19f0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19f0a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x19f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x19f0ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x19f0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x19f0b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f0b8: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x19f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x19f0bc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19f0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19f0c0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19F0C0u;
    {
        const bool branch_taken_0x19f0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0C0u;
            // 0x19f0c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f0c0) {
            ctx->pc = 0x19F0FCu;
            goto label_19f0fc;
        }
    }
    ctx->pc = 0x19F0C8u;
    // 0x19f0c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19f0cc: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19f0d0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19f0d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19f0d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19f0d8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19f0dc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19f0e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f0e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f0e8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F0E8u;
    {
        const bool branch_taken_0x19f0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19F0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0E8u;
            // 0x19f0ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f0e8) {
            ctx->pc = 0x19F0F8u;
            goto label_19f0f8;
        }
    }
    ctx->pc = 0x19F0F0u;
    // 0x19f0f0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19f0f4: 0x0  nop
    ctx->pc = 0x19f0f4u;
    // NOP
label_19f0f8:
    // 0x19f0f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f0fc:
    // 0x19f0fc: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x19f0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x19f100: 0x8e23cd58  lw          $v1, -0x32A8($s1)
    ctx->pc = 0x19f100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x19f104: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f108: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x19F108u;
    {
        const bool branch_taken_0x19f108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f108) {
            ctx->pc = 0x19F10Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F108u;
            // 0x19f10c: 0xac600050  sw          $zero, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F110u;
            goto label_19f110;
        }
    }
    ctx->pc = 0x19F110u;
label_19f110:
    // 0x19f110: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19f114: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x19f114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19f118: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x19f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x19f11c: 0x40f809  jalr        $v0
    ctx->pc = 0x19F11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F124u);
        ctx->pc = 0x19F120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F11Cu;
            // 0x19f120: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19F124u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F0F8u: goto label_19f0f8;
            case 0x19F0FCu: goto label_19f0fc;
            case 0x19F110u: goto label_19f110;
            case 0x19F1B8u: goto label_19f1b8;
            case 0x19F1C0u: goto label_19f1c0;
            case 0x19F1C4u: goto label_19f1c4;
            case 0x19F1C8u: goto label_19f1c8;
            case 0x19F1CCu: goto label_19f1cc;
            case 0x19F1D0u: goto label_19f1d0;
            case 0x19F240u: goto label_19f240;
            case 0x19F244u: goto label_19f244;
            case 0x19F258u: goto label_19f258;
            case 0x19F358u: goto label_19f358;
            case 0x19F35Cu: goto label_19f35c;
            case 0x19F364u: goto label_19f364;
            case 0x19F368u: goto label_19f368;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F124u; }
            if (ctx->pc != 0x19F124u) { return; }
        }
        }
    }
    ctx->pc = 0x19F124u;
    // 0x19f124: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x19F124u;
    {
        const bool branch_taken_0x19f124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f124) {
            ctx->pc = 0x19F128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F124u;
            // 0x19f128: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F1D0u;
            goto label_19f1d0;
        }
    }
    ctx->pc = 0x19F12Cu;
    // 0x19f12c: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x19f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x19f130: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x19f130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x19f134: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x19f134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x19f138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19f138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f13c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x19f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f140: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19f140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f144: 0x0  nop
    ctx->pc = 0x19f144u;
    // NOP
    // 0x19f148: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x19F148u;
    {
        const bool branch_taken_0x19f148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F148u;
            // 0x19f14c: 0x8e22cd58  lw          $v0, -0x32A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f148) {
            ctx->pc = 0x19F1CCu;
            goto label_19f1cc;
        }
    }
    ctx->pc = 0x19F150u;
    // 0x19f150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f154: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x19f154u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f158: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f15c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f160: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x19f160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x19f164: 0xc079f6a  jal         func_1E7DA8
    ctx->pc = 0x19F164u;
    SET_GPR_U32(ctx, 31, 0x19F16Cu);
    ctx->pc = 0x19F168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F164u;
            // 0x19f168: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DA8u;
    if (runtime->hasFunction(0x1E7DA8u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F16Cu; }
        if (ctx->pc != 0x19F16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7DA8_0x1e7da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F16Cu; }
        if (ctx->pc != 0x19F16Cu) { return; }
    }
    ctx->pc = 0x19F16Cu;
    // 0x19f16c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19f16cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f170: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19F170u;
    {
        const bool branch_taken_0x19f170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f170) {
            ctx->pc = 0x19F1B8u;
            goto label_19f1b8;
        }
    }
    ctx->pc = 0x19F178u;
    // 0x19f178: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19F178u;
    {
        const bool branch_taken_0x19f178 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F178u;
            // 0x19f17c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f178) {
            ctx->pc = 0x19F1C0u;
            goto label_19f1c0;
        }
    }
    ctx->pc = 0x19F180u;
    // 0x19f180: 0x24020405  addiu       $v0, $zero, 0x405
    ctx->pc = 0x19f180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x19f184: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19f184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x19f188: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x19f188u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f18c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19f190: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x19f190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x19f194: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19f194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x19f198: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19f198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19f19c: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x19f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x19f1a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1a4: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x19F1A4u;
    SET_GPR_U32(ctx, 31, 0x19F1ACu);
    ctx->pc = 0x19F1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1A4u;
            // 0x19f1a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1ACu; }
        if (ctx->pc != 0x19F1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1ACu; }
        if (ctx->pc != 0x19F1ACu) { return; }
    }
    ctx->pc = 0x19F1ACu;
    // 0x19f1ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19F1ACu;
    {
        const bool branch_taken_0x19f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1ACu;
            // 0x19f1b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1ac) {
            ctx->pc = 0x19F1C8u;
            goto label_19f1c8;
        }
    }
    ctx->pc = 0x19F1B4u;
    // 0x19f1b4: 0x0  nop
    ctx->pc = 0x19f1b4u;
    // NOP
label_19f1b8:
    // 0x19f1b8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F1B8u;
    {
        const bool branch_taken_0x19f1b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1B8u;
            // 0x19f1bc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1b8) {
            ctx->pc = 0x19F1C4u;
            goto label_19f1c4;
        }
    }
    ctx->pc = 0x19F1C0u;
label_19f1c0:
    // 0x19f1c0: 0xac43c9e8  sw          $v1, -0x3618($v0)
    ctx->pc = 0x19f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953448), GPR_U32(ctx, 3));
label_19f1c4:
    // 0x19f1c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19f1c8:
    // 0x19f1c8: 0xa642002a  sh          $v0, 0x2A($s2)
    ctx->pc = 0x19f1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
label_19f1cc:
    // 0x19f1cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x19f1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19f1d0:
    // 0x19f1d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x19f1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f1d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19f1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f1d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19F1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1DCu;
            // 0x19f1e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F0F8u: goto label_19f0f8;
            case 0x19F0FCu: goto label_19f0fc;
            case 0x19F110u: goto label_19f110;
            case 0x19F1B8u: goto label_19f1b8;
            case 0x19F1C0u: goto label_19f1c0;
            case 0x19F1C4u: goto label_19f1c4;
            case 0x19F1C8u: goto label_19f1c8;
            case 0x19F1CCu: goto label_19f1cc;
            case 0x19F1D0u: goto label_19f1d0;
            case 0x19F240u: goto label_19f240;
            case 0x19F244u: goto label_19f244;
            case 0x19F258u: goto label_19f258;
            case 0x19F358u: goto label_19f358;
            case 0x19F35Cu: goto label_19f35c;
            case 0x19F364u: goto label_19f364;
            case 0x19F368u: goto label_19f368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F1E4u;
    // 0x19f1e4: 0x0  nop
    ctx->pc = 0x19f1e4u;
    // NOP
    // 0x19f1e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f1ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19f1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19f1f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19f1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19f1f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19f1f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19f1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19f1fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f204: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x19f204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x19f208: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19f20c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19F20Cu;
    {
        const bool branch_taken_0x19f20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F20Cu;
            // 0x19f210: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f20c) {
            ctx->pc = 0x19F244u;
            goto label_19f244;
        }
    }
    ctx->pc = 0x19F214u;
    // 0x19f214: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19f214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19f218: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19f218u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19f21c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19f21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19f220: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19f220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19f224: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19f224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19f228: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19f228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19f22c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f230: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f234: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F234u;
    {
        const bool branch_taken_0x19f234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19F238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F234u;
            // 0x19f238: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f234) {
            ctx->pc = 0x19F240u;
            goto label_19f240;
        }
    }
    ctx->pc = 0x19F23Cu;
    // 0x19f23c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19f240:
    // 0x19f240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f244:
    // 0x19f244: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19f244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19f248: 0x8c43cd58  lw          $v1, -0x32A8($v0)
    ctx->pc = 0x19f248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19f24c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f250: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x19F250u;
    {
        const bool branch_taken_0x19f250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f250) {
            ctx->pc = 0x19F254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F250u;
            // 0x19f254: 0xac600050  sw          $zero, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F258u;
            goto label_19f258;
        }
    }
    ctx->pc = 0x19F258u;
label_19f258:
    // 0x19f258: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19f25c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x19f25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19f260: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x19f260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x19f264: 0x40f809  jalr        $v0
    ctx->pc = 0x19F264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F26Cu);
        ctx->pc = 0x19F268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F264u;
            // 0x19f268: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19F26Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F0F8u: goto label_19f0f8;
            case 0x19F0FCu: goto label_19f0fc;
            case 0x19F110u: goto label_19f110;
            case 0x19F1B8u: goto label_19f1b8;
            case 0x19F1C0u: goto label_19f1c0;
            case 0x19F1C4u: goto label_19f1c4;
            case 0x19F1C8u: goto label_19f1c8;
            case 0x19F1CCu: goto label_19f1cc;
            case 0x19F1D0u: goto label_19f1d0;
            case 0x19F240u: goto label_19f240;
            case 0x19F244u: goto label_19f244;
            case 0x19F258u: goto label_19f258;
            case 0x19F358u: goto label_19f358;
            case 0x19F35Cu: goto label_19f35c;
            case 0x19F364u: goto label_19f364;
            case 0x19F368u: goto label_19f368;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F26Cu; }
            if (ctx->pc != 0x19F26Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19F26Cu;
    // 0x19f26c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19f26cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f270: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x19F270u;
    {
        const bool branch_taken_0x19f270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F270u;
            // 0x19f274: 0x3c040780  lui         $a0, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1920 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f270) {
            ctx->pc = 0x19F364u;
            goto label_19f364;
        }
    }
    ctx->pc = 0x19F278u;
    // 0x19f278: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x19f278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x19f27c: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x19f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x19f280: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x19f280u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19f284: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x19f284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f288: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x19f288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x19f28c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x19f28cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19f290: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19f290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x19f294: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x19f294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x19f298: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19f298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x19f29c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19f29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19f2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f2a4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x19f2a4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x19f2a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19f2a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f2ac: 0x0  nop
    ctx->pc = 0x19f2acu;
    // NOP
    // 0x19f2b0: 0x4502002d  bc1fl       . + 4 + (0x2D << 2)
    ctx->pc = 0x19F2B0u;
    {
        const bool branch_taken_0x19f2b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f2b0) {
            ctx->pc = 0x19F2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2B0u;
            // 0x19f2b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F368u;
            goto label_19f368;
        }
    }
    ctx->pc = 0x19F2B8u;
    // 0x19f2b8: 0x8e110320  lw          $s1, 0x320($s0)
    ctx->pc = 0x19f2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x19f2bc: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x19f2bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f2c0: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x19F2C0u;
    SET_GPR_U32(ctx, 31, 0x19F2C8u);
    ctx->pc = 0x19F2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2C0u;
            // 0x19f2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2C8u; }
        if (ctx->pc != 0x19F2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2C8u; }
        if (ctx->pc != 0x19F2C8u) { return; }
    }
    ctx->pc = 0x19F2C8u;
    // 0x19f2c8: 0x80420038  lb          $v0, 0x38($v0)
    ctx->pc = 0x19f2c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x19f2cc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x19F2CCu;
    {
        const bool branch_taken_0x19f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2CCu;
            // 0x19f2d0: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2cc) {
            ctx->pc = 0x19F35Cu;
            goto label_19f35c;
        }
    }
    ctx->pc = 0x19F2D4u;
    // 0x19f2d4: 0xc089990  jal         func_226640
    ctx->pc = 0x19F2D4u;
    SET_GPR_U32(ctx, 31, 0x19F2DCu);
    ctx->pc = 0x19F2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2D4u;
            // 0x19f2d8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2DCu; }
        if (ctx->pc != 0x19F2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2DCu; }
        if (ctx->pc != 0x19F2DCu) { return; }
    }
    ctx->pc = 0x19F2DCu;
    // 0x19f2dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2e0: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x19F2E0u;
    SET_GPR_U32(ctx, 31, 0x19F2E8u);
    ctx->pc = 0x19F2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2E0u;
            // 0x19f2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2E8u; }
        if (ctx->pc != 0x19F2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2E8u; }
        if (ctx->pc != 0x19F2E8u) { return; }
    }
    ctx->pc = 0x19F2E8u;
    // 0x19f2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2ec: 0xc089e18  jal         func_227860
    ctx->pc = 0x19F2ECu;
    SET_GPR_U32(ctx, 31, 0x19F2F4u);
    ctx->pc = 0x19F2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2ECu;
            // 0x19f2f0: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227860u;
    if (runtime->hasFunction(0x227860u)) {
        auto targetFn = runtime->lookupFunction(0x227860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2F4u; }
        if (ctx->pc != 0x19F2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227860_0x227860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2F4u; }
        if (ctx->pc != 0x19F2F4u) { return; }
    }
    ctx->pc = 0x19F2F4u;
    // 0x19f2f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19f2f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f2fc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x19f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x19f300: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19f300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19f304: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19F304u;
    {
        const bool branch_taken_0x19f304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F304u;
            // 0x19f308: 0x3c07002a  lui         $a3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f304) {
            ctx->pc = 0x19F358u;
            goto label_19f358;
        }
    }
    ctx->pc = 0x19F30Cu;
    // 0x19f30c: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x19f30cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x19f310: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x19f310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x19f314: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x19f314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x19f318: 0xdce4bdf8  ld          $a0, -0x4208($a3)
    ctx->pc = 0x19f318u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 4294950392)));
    // 0x19f31c: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x19f31cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x19f320: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x19f320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x19f324: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x19f324u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x19f328: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x19f328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x19f32c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x19f32cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x19f330: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x19f330u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x19f334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f338: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x19f338u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x19f33c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19f33cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f340: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x19f340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x19f344: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x19f344u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x19f348: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x19f348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x19f34c: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x19f34cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x19f350: 0xfce4bdf8  sd          $a0, -0x4208($a3)
    ctx->pc = 0x19f350u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294950392), GPR_U64(ctx, 4));
    // 0x19f354: 0xfca30068  sd          $v1, 0x68($a1)
    ctx->pc = 0x19f354u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
label_19f358:
    // 0x19f358: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19f358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_19f35c:
    // 0x19f35c: 0x2442f0a0  addiu       $v0, $v0, -0xF60
    ctx->pc = 0x19f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963360));
    // 0x19f360: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x19f360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
label_19f364:
    // 0x19f364: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19f364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19f368:
    // 0x19f368: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19f368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f36c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f36cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f370: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19f370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f378: 0x3e00008  jr          $ra
    ctx->pc = 0x19F378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F378u;
            // 0x19f37c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F0F8u: goto label_19f0f8;
            case 0x19F0FCu: goto label_19f0fc;
            case 0x19F110u: goto label_19f110;
            case 0x19F1B8u: goto label_19f1b8;
            case 0x19F1C0u: goto label_19f1c0;
            case 0x19F1C4u: goto label_19f1c4;
            case 0x19F1C8u: goto label_19f1c8;
            case 0x19F1CCu: goto label_19f1cc;
            case 0x19F1D0u: goto label_19f1d0;
            case 0x19F240u: goto label_19f240;
            case 0x19F244u: goto label_19f244;
            case 0x19F258u: goto label_19f258;
            case 0x19F358u: goto label_19f358;
            case 0x19F35Cu: goto label_19f35c;
            case 0x19F364u: goto label_19f364;
            case 0x19F368u: goto label_19f368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F380u;
}
