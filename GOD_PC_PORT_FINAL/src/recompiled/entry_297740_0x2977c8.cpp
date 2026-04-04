#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_297740
// Address: 0x297740 - 0x2977c8
void entry_297740_0x2977c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_297740_0x2977c8");
#endif

    ctx->pc = 0x297740u;

    // 0x297740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x297740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x297744: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29774c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x297750: 0xc0a5db2  jal         func_2976C8
    ctx->pc = 0x297750u;
    SET_GPR_U32(ctx, 31, 0x297758u);
    ctx->pc = 0x297754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297750u;
            // 0x297754: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2976C8u;
    if (runtime->hasFunction(0x2976C8u)) {
        auto targetFn = runtime->lookupFunction(0x2976C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297758u; }
        if (ctx->pc != 0x297758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2976c8_0x297740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297758u; }
        if (ctx->pc != 0x297758u) { return; }
    }
    ctx->pc = 0x297758u;
    // 0x297758: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x297758u;
    SET_GPR_U32(ctx, 31, 0x297760u);
    ctx->pc = 0x29775Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297758u;
            // 0x29775c: 0x8e244b50  lw          $a0, 0x4B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297760u; }
        if (ctx->pc != 0x297760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297760u; }
        if (ctx->pc != 0x297760u) { return; }
    }
    ctx->pc = 0x297760u;
    // 0x297760: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x297760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x297764: 0x2470a840  addiu       $s0, $v1, -0x57C0
    ctx->pc = 0x297764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944832));
    // 0x297768: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x297768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x29776c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x29776cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x297770: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x297770u;
    {
        const bool branch_taken_0x297770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297770u;
            // 0x297774: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297770) {
            ctx->pc = 0x2977A8u;
            goto label_2977a8;
        }
    }
    ctx->pc = 0x297778u;
    // 0x297778: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x297778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29777c: 0x0  nop
    ctx->pc = 0x29777cu;
    // NOP
label_297780:
    // 0x297780: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x297780u;
    {
        const bool branch_taken_0x297780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297780) {
            ctx->pc = 0x297784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x297780u;
            // 0x297784: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29779Cu;
            goto label_29779c;
        }
    }
    ctx->pc = 0x297788u;
    // 0x297788: 0x8e244b50  lw          $a0, 0x4B50($s1)
    ctx->pc = 0x297788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19280)));
    // 0x29778c: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x29778Cu;
    SET_GPR_U32(ctx, 31, 0x297794u);
    ctx->pc = 0x297790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29778Cu;
            // 0x297790: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297794u; }
        if (ctx->pc != 0x297794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297794u; }
        if (ctx->pc != 0x297794u) { return; }
    }
    ctx->pc = 0x297794u;
    // 0x297794: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297794u;
    {
        const bool branch_taken_0x297794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297794u;
            // 0x297798: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297794) {
            ctx->pc = 0x2977B4u;
            goto label_2977b4;
        }
    }
    ctx->pc = 0x29779Cu;
label_29779c:
    // 0x29779c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x29779cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2977a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2977A0u;
    {
        const bool branch_taken_0x2977a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2977a0) {
            ctx->pc = 0x2977A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2977A0u;
            // 0x2977a4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x297780u;
            runtime->cooperativeGuestYield();
            goto label_297780;
        }
    }
    ctx->pc = 0x2977A8u;
label_2977a8:
    // 0x2977a8: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x2977A8u;
    SET_GPR_U32(ctx, 31, 0x2977B0u);
    ctx->pc = 0x2977ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2977A8u;
            // 0x2977ac: 0x8e244b50  lw          $a0, 0x4B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2977B0u; }
        if (ctx->pc != 0x2977B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2977B0u; }
        if (ctx->pc != 0x2977B0u) { return; }
    }
    ctx->pc = 0x2977B0u;
    // 0x2977b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2977b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2977b4:
    // 0x2977b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2977b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2977b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2977b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2977bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2977bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2977c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2977C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2977C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2977C0u;
            // 0x2977c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297780u: goto label_297780;
            case 0x29779Cu: goto label_29779c;
            case 0x2977A8u: goto label_2977a8;
            case 0x2977B4u: goto label_2977b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2977C8u;
}
