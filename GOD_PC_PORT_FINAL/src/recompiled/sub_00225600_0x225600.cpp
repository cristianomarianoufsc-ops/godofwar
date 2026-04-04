#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225600
// Address: 0x225600 - 0x2257d8
void sub_00225600_0x225600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225600_0x225600");
#endif

    ctx->pc = 0x225600u;

    // 0x225600: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x225600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x225604: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x225604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x225608: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x225608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x22560c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x22560cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x225610: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x225610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x225614: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x225614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x225618: 0xc04f856  jal         func_13E158
    ctx->pc = 0x225618u;
    SET_GPR_U32(ctx, 31, 0x225620u);
    ctx->pc = 0x22561Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225618u;
            // 0x22561c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225620u; }
        if (ctx->pc != 0x225620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225620u; }
        if (ctx->pc != 0x225620u) { return; }
    }
    ctx->pc = 0x225620u;
    // 0x225620: 0xc090f5c  jal         func_243D70
    ctx->pc = 0x225620u;
    SET_GPR_U32(ctx, 31, 0x225628u);
    ctx->pc = 0x225624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225620u;
            // 0x225624: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243D70u;
    if (runtime->hasFunction(0x243D70u)) {
        auto targetFn = runtime->lookupFunction(0x243D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225628u; }
        if (ctx->pc != 0x225628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243d70_0x243da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225628u; }
        if (ctx->pc != 0x225628u) { return; }
    }
    ctx->pc = 0x225628u;
    // 0x225628: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x225628u;
    SET_GPR_U32(ctx, 31, 0x225630u);
    ctx->pc = 0x22562Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225628u;
            // 0x22562c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225630u; }
        if (ctx->pc != 0x225630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225630u; }
        if (ctx->pc != 0x225630u) { return; }
    }
    ctx->pc = 0x225630u;
    // 0x225630: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x225630u;
    SET_GPR_U32(ctx, 31, 0x225638u);
    ctx->pc = 0x225634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225630u;
            // 0x225634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225638u; }
        if (ctx->pc != 0x225638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225638u; }
        if (ctx->pc != 0x225638u) { return; }
    }
    ctx->pc = 0x225638u;
    // 0x225638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x225638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22563c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22563cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x225640: 0x24a58078  addiu       $a1, $a1, -0x7F88
    ctx->pc = 0x225640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934648));
    // 0x225644: 0xc060978  jal         func_1825E0
    ctx->pc = 0x225644u;
    SET_GPR_U32(ctx, 31, 0x22564Cu);
    ctx->pc = 0x225648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225644u;
            // 0x225648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22564Cu; }
        if (ctx->pc != 0x22564Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22564Cu; }
        if (ctx->pc != 0x22564Cu) { return; }
    }
    ctx->pc = 0x22564Cu;
    // 0x22564c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22564cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x225650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225654: 0x24429940  addiu       $v0, $v0, -0x66C0
    ctx->pc = 0x225654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940992));
    // 0x225658: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x225658u;
    SET_GPR_U32(ctx, 31, 0x225660u);
    ctx->pc = 0x22565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225658u;
            // 0x22565c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225660u; }
        if (ctx->pc != 0x225660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225660u; }
        if (ctx->pc != 0x225660u) { return; }
    }
    ctx->pc = 0x225660u;
    // 0x225660: 0x3c05b6aa  lui         $a1, 0xB6AA
    ctx->pc = 0x225660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46762 << 16));
    // 0x225664: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225668: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x225668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x22566c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225670: 0x34a5b6b0  ori         $a1, $a1, 0xB6B0
    ctx->pc = 0x225670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46768);
    // 0x225674: 0xc060570  jal         func_1815C0
    ctx->pc = 0x225674u;
    SET_GPR_U32(ctx, 31, 0x22567Cu);
    ctx->pc = 0x225678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225674u;
            // 0x225678: 0xae30119c  sw          $s0, 0x119C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4508), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22567Cu; }
        if (ctx->pc != 0x22567Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22567Cu; }
        if (ctx->pc != 0x22567Cu) { return; }
    }
    ctx->pc = 0x22567Cu;
    // 0x22567c: 0x8e24119c  lw          $a0, 0x119C($s1)
    ctx->pc = 0x22567cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
    // 0x225680: 0x3c05b60d  lui         $a1, 0xB60D
    ctx->pc = 0x225680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46605 << 16));
    // 0x225684: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225688: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x225688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22568c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x22568Cu;
    SET_GPR_U32(ctx, 31, 0x225694u);
    ctx->pc = 0x225690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22568Cu;
            // 0x225690: 0x34a539a0  ori         $a1, $a1, 0x39A0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14752);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225694u; }
        if (ctx->pc != 0x225694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225694u; }
        if (ctx->pc != 0x225694u) { return; }
    }
    ctx->pc = 0x225694u;
    // 0x225694: 0x8e24119c  lw          $a0, 0x119C($s1)
    ctx->pc = 0x225694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
    // 0x225698: 0x3c05f086  lui         $a1, 0xF086
    ctx->pc = 0x225698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61574 << 16));
    // 0x22569c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22569cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256a0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2256a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2256a4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2256A4u;
    SET_GPR_U32(ctx, 31, 0x2256ACu);
    ctx->pc = 0x2256A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2256A4u;
            // 0x2256a8: 0x34a54672  ori         $a1, $a1, 0x4672 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18034);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256ACu; }
        if (ctx->pc != 0x2256ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256ACu; }
        if (ctx->pc != 0x2256ACu) { return; }
    }
    ctx->pc = 0x2256ACu;
    // 0x2256ac: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2256ACu;
    SET_GPR_U32(ctx, 31, 0x2256B4u);
    ctx->pc = 0x2256B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2256ACu;
            // 0x2256b0: 0x8e24119c  lw          $a0, 0x119C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256B4u; }
        if (ctx->pc != 0x2256B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256B4u; }
        if (ctx->pc != 0x2256B4u) { return; }
    }
    ctx->pc = 0x2256B4u;
    // 0x2256b4: 0x8e24119c  lw          $a0, 0x119C($s1)
    ctx->pc = 0x2256b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
    // 0x2256b8: 0x3c05117c  lui         $a1, 0x117C
    ctx->pc = 0x2256b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4476 << 16));
    // 0x2256bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2256bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256c0: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x2256c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2256c4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2256C4u;
    SET_GPR_U32(ctx, 31, 0x2256CCu);
    ctx->pc = 0x2256C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2256C4u;
            // 0x2256c8: 0x34a5872e  ori         $a1, $a1, 0x872E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34606);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256CCu; }
        if (ctx->pc != 0x2256CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256CCu; }
        if (ctx->pc != 0x2256CCu) { return; }
    }
    ctx->pc = 0x2256CCu;
    // 0x2256cc: 0x8e24119c  lw          $a0, 0x119C($s1)
    ctx->pc = 0x2256ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
    // 0x2256d0: 0x3c05b93f  lui         $a1, 0xB93F
    ctx->pc = 0x2256d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47423 << 16));
    // 0x2256d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2256d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256d8: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x2256d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2256dc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2256DCu;
    SET_GPR_U32(ctx, 31, 0x2256E4u);
    ctx->pc = 0x2256E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2256DCu;
            // 0x2256e0: 0x34a50272  ori         $a1, $a1, 0x272 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)626);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256E4u; }
        if (ctx->pc != 0x2256E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256E4u; }
        if (ctx->pc != 0x2256E4u) { return; }
    }
    ctx->pc = 0x2256E4u;
    // 0x2256e4: 0x8e24119c  lw          $a0, 0x119C($s1)
    ctx->pc = 0x2256e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
    // 0x2256e8: 0x3c05d005  lui         $a1, 0xD005
    ctx->pc = 0x2256e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53253 << 16));
    // 0x2256ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2256ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256f0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2256f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2256f4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2256F4u;
    SET_GPR_U32(ctx, 31, 0x2256FCu);
    ctx->pc = 0x2256F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2256F4u;
            // 0x2256f8: 0x34a53b6c  ori         $a1, $a1, 0x3B6C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15212);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256FCu; }
        if (ctx->pc != 0x2256FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256FCu; }
        if (ctx->pc != 0x2256FCu) { return; }
    }
    ctx->pc = 0x2256FCu;
    // 0x2256fc: 0x8e24119c  lw          $a0, 0x119C($s1)
    ctx->pc = 0x2256fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
    // 0x225700: 0x3c053a05  lui         $a1, 0x3A05
    ctx->pc = 0x225700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14853 << 16));
    // 0x225704: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225708: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x225708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x22570c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x22570Cu;
    SET_GPR_U32(ctx, 31, 0x225714u);
    ctx->pc = 0x225710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22570Cu;
            // 0x225710: 0x34a5c371  ori         $a1, $a1, 0xC371 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50033);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225714u; }
        if (ctx->pc != 0x225714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225714u; }
        if (ctx->pc != 0x225714u) { return; }
    }
    ctx->pc = 0x225714u;
    // 0x225714: 0x8e24119c  lw          $a0, 0x119C($s1)
    ctx->pc = 0x225714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
    // 0x225718: 0x3c05bb80  lui         $a1, 0xBB80
    ctx->pc = 0x225718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48000 << 16));
    // 0x22571c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22571cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225720: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x225720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x225724: 0xc060570  jal         func_1815C0
    ctx->pc = 0x225724u;
    SET_GPR_U32(ctx, 31, 0x22572Cu);
    ctx->pc = 0x225728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225724u;
            // 0x225728: 0x34a5882e  ori         $a1, $a1, 0x882E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34862);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22572Cu; }
        if (ctx->pc != 0x22572Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22572Cu; }
        if (ctx->pc != 0x22572Cu) { return; }
    }
    ctx->pc = 0x22572Cu;
    // 0x22572c: 0x8e24119c  lw          $a0, 0x119C($s1)
    ctx->pc = 0x22572cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
    // 0x225730: 0x3c050a5f  lui         $a1, 0xA5F
    ctx->pc = 0x225730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2655 << 16));
    // 0x225734: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225738: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x225738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x22573c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22573cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225740: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x225740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225744: 0xc06074a  jal         func_181D28
    ctx->pc = 0x225744u;
    SET_GPR_U32(ctx, 31, 0x22574Cu);
    ctx->pc = 0x225748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225744u;
            // 0x225748: 0x34a57d1a  ori         $a1, $a1, 0x7D1A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32026);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22574Cu; }
        if (ctx->pc != 0x22574Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22574Cu; }
        if (ctx->pc != 0x22574Cu) { return; }
    }
    ctx->pc = 0x22574Cu;
    // 0x22574c: 0x8e24119c  lw          $a0, 0x119C($s1)
    ctx->pc = 0x22574cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
    // 0x225750: 0x3c05294b  lui         $a1, 0x294B
    ctx->pc = 0x225750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10571 << 16));
    // 0x225754: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225758: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x225758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x22575c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x22575Cu;
    SET_GPR_U32(ctx, 31, 0x225764u);
    ctx->pc = 0x225760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22575Cu;
            // 0x225760: 0x34a593a3  ori         $a1, $a1, 0x93A3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37795);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225764u; }
        if (ctx->pc != 0x225764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225764u; }
        if (ctx->pc != 0x225764u) { return; }
    }
    ctx->pc = 0x225764u;
    // 0x225764: 0x8e24119c  lw          $a0, 0x119C($s1)
    ctx->pc = 0x225764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
    // 0x225768: 0x3c0540b7  lui         $a1, 0x40B7
    ctx->pc = 0x225768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16567 << 16));
    // 0x22576c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22576cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225770: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x225770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x225774: 0x34a598cb  ori         $a1, $a1, 0x98CB
    ctx->pc = 0x225774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39115);
    // 0x225778: 0xc06081c  jal         func_182070
    ctx->pc = 0x225778u;
    SET_GPR_U32(ctx, 31, 0x225780u);
    ctx->pc = 0x22577Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225778u;
            // 0x22577c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225780u; }
        if (ctx->pc != 0x225780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225780u; }
        if (ctx->pc != 0x225780u) { return; }
    }
    ctx->pc = 0x225780u;
    // 0x225780: 0x8e24119c  lw          $a0, 0x119C($s1)
    ctx->pc = 0x225780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4508)));
    // 0x225784: 0x3c058b52  lui         $a1, 0x8B52
    ctx->pc = 0x225784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35666 << 16));
    // 0x225788: 0x34a57b23  ori         $a1, $a1, 0x7B23
    ctx->pc = 0x225788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31523);
    // 0x22578c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22578cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225790: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x225790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x225794: 0xc06081c  jal         func_182070
    ctx->pc = 0x225794u;
    SET_GPR_U32(ctx, 31, 0x22579Cu);
    ctx->pc = 0x225798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225794u;
            // 0x225798: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22579Cu; }
        if (ctx->pc != 0x22579Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22579Cu; }
        if (ctx->pc != 0x22579Cu) { return; }
    }
    ctx->pc = 0x22579Cu;
    // 0x22579c: 0xc04f860  jal         func_13E180
    ctx->pc = 0x22579Cu;
    SET_GPR_U32(ctx, 31, 0x2257A4u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2257A4u; }
        if (ctx->pc != 0x2257A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2257A4u; }
        if (ctx->pc != 0x2257A4u) { return; }
    }
    ctx->pc = 0x2257A4u;
    // 0x2257a4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2257a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2257a8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2257a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2257ac: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x2257acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x2257b0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2257B0u;
    {
        const bool branch_taken_0x2257b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2257B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2257B0u;
            // 0x2257b4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2257b0) {
            ctx->pc = 0x2257C0u;
            goto label_2257c0;
        }
    }
    ctx->pc = 0x2257B8u;
    // 0x2257b8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2257B8u;
    SET_GPR_U32(ctx, 31, 0x2257C0u);
    ctx->pc = 0x2257BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2257B8u;
            // 0x2257bc: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2257C0u; }
        if (ctx->pc != 0x2257C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2257C0u; }
        if (ctx->pc != 0x2257C0u) { return; }
    }
    ctx->pc = 0x2257C0u;
label_2257c0:
    // 0x2257c0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2257c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2257c4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2257c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2257c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2257c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2257cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2257CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2257D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2257CCu;
            // 0x2257d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2257C0u: goto label_2257c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2257D4u;
    // 0x2257d4: 0x0  nop
    ctx->pc = 0x2257d4u;
    // NOP
}
