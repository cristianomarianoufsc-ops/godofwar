#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29af38
// Address: 0x29af38 - 0x29afd0
void entry_29af38_0x29afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29af38_0x29afd0");
#endif

    ctx->pc = 0x29af38u;

    // 0x29af38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29af38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29af3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29af3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29af40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29af40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29af44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29af48: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x29af48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x29af4c: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x29af4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x29af50: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x29af50u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x29af54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29af54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29af58: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x29AF58u;
    SET_GPR_U32(ctx, 31, 0x29AF60u);
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF60u; }
        if (ctx->pc != 0x29AF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF60u; }
        if (ctx->pc != 0x29AF60u) { return; }
    }
    ctx->pc = 0x29AF60u;
    // 0x29af60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29af60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af64: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x29AF64u;
    SET_GPR_U32(ctx, 31, 0x29AF6Cu);
    ctx->pc = 0x29AF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF64u;
            // 0x29af68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF6Cu; }
        if (ctx->pc != 0x29AF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF6Cu; }
        if (ctx->pc != 0x29AF6Cu) { return; }
    }
    ctx->pc = 0x29AF6Cu;
    // 0x29af6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29af6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af70: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x29AF70u;
    SET_GPR_U32(ctx, 31, 0x29AF78u);
    ctx->pc = 0x29AF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF70u;
            // 0x29af74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF78u; }
        if (ctx->pc != 0x29AF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF78u; }
        if (ctx->pc != 0x29AF78u) { return; }
    }
    ctx->pc = 0x29AF78u;
    // 0x29af78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29af78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x29af80: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29af84: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x29af84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x29af88: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x29af88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x29af8c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29af8cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x29af90: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x29AF90u;
    SET_GPR_U32(ctx, 31, 0x29AF98u);
    ctx->pc = 0x29AF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF90u;
            // 0x29af94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF98u; }
        if (ctx->pc != 0x29AF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF98u; }
        if (ctx->pc != 0x29AF98u) { return; }
    }
    ctx->pc = 0x29AF98u;
    // 0x29af98: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29AF98u;
    {
        const bool branch_taken_0x29af98 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x29AF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF98u;
            // 0x29af9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af98) {
            ctx->pc = 0x29AFB4u;
            goto label_29afb4;
        }
    }
    ctx->pc = 0x29AFA0u;
    // 0x29afa0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x29afa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x29afa4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x29afa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x29afa8: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x29AFA8u;
    SET_GPR_U32(ctx, 31, 0x29AFB0u);
    ctx->pc = 0x29AFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AFA8u;
            // 0x29afac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AFB0u; }
        if (ctx->pc != 0x29AFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AFB0u; }
        if (ctx->pc != 0x29AFB0u) { return; }
    }
    ctx->pc = 0x29AFB0u;
    // 0x29afb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29afb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29afb4:
    // 0x29afb4: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x29AFB4u;
    SET_GPR_U32(ctx, 31, 0x29AFBCu);
    ctx->pc = 0x29AFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AFB4u;
            // 0x29afb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AFBCu; }
        if (ctx->pc != 0x29AFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AFBCu; }
        if (ctx->pc != 0x29AFBCu) { return; }
    }
    ctx->pc = 0x29AFBCu;
    // 0x29afbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29afbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29afc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29afc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29afc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29afc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29afc8: 0x3e00008  jr          $ra
    ctx->pc = 0x29AFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AFC8u;
            // 0x29afcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29AFB4u: goto label_29afb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29AFD0u;
}
