#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017CF78
// Address: 0x17cf78 - 0x17d0a0
void sub_0017CF78_0x17cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CF78_0x17cf78");
#endif

    ctx->pc = 0x17cf78u;

    // 0x17cf78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17cf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17cf7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17cf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17cf80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17cf80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf84: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17cf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17cf88: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17cf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17cf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17cf90: 0xc0a2644  jal         func_289910
    ctx->pc = 0x17CF90u;
    SET_GPR_U32(ctx, 31, 0x17CF98u);
    ctx->pc = 0x17CF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF90u;
            // 0x17cf94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF98u; }
        if (ctx->pc != 0x17CF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF98u; }
        if (ctx->pc != 0x17CF98u) { return; }
    }
    ctx->pc = 0x17CF98u;
    // 0x17cf98: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17cf98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x17cf9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17cf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfa0: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x17CFA0u;
    SET_GPR_U32(ctx, 31, 0x17CFA8u);
    ctx->pc = 0x17CFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFA0u;
            // 0x17cfa4: 0x24a52a38  addiu       $a1, $a1, 0x2A38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFA8u; }
        if (ctx->pc != 0x17CFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFA8u; }
        if (ctx->pc != 0x17CFA8u) { return; }
    }
    ctx->pc = 0x17CFA8u;
    // 0x17cfa8: 0x3c0a002b  lui         $t2, 0x2B
    ctx->pc = 0x17cfa8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43 << 16));
    // 0x17cfac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17cfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfb0: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x17cfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x17cfb4: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x17cfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x17cfb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17cfb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17cfbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfc0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17cfc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfc8: 0xc05f380  jal         func_17CE00
    ctx->pc = 0x17CFC8u;
    SET_GPR_U32(ctx, 31, 0x17CFD0u);
    ctx->pc = 0x17CFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFC8u;
            // 0x17cfcc: 0x254a1300  addiu       $t2, $t2, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CE00u;
    if (runtime->hasFunction(0x17CE00u)) {
        auto targetFn = runtime->lookupFunction(0x17CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFD0u; }
        if (ctx->pc != 0x17CFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CE00_0x17ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFD0u; }
        if (ctx->pc != 0x17CFD0u) { return; }
    }
    ctx->pc = 0x17CFD0u;
    // 0x17cfd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17cfd4: 0xc05f3ca  jal         func_17CF28
    ctx->pc = 0x17CFD4u;
    SET_GPR_U32(ctx, 31, 0x17CFDCu);
    ctx->pc = 0x17CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFD4u;
            // 0x17cfd8: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CF28u;
    if (runtime->hasFunction(0x17CF28u)) {
        auto targetFn = runtime->lookupFunction(0x17CF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFDCu; }
        if (ctx->pc != 0x17CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17cf28_0x17cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFDCu; }
        if (ctx->pc != 0x17CFDCu) { return; }
    }
    ctx->pc = 0x17CFDCu;
    // 0x17cfdc: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x17cfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17cfe0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x17cfe0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17cfe4: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x17cfe4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x17cfe8: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x17cfe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x17cfec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17cff0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17cff4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cff8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17cffc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17d000: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x17d000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x17d004: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x17d004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x17d008: 0x40f809  jalr        $v0
    ctx->pc = 0x17D008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D010u);
        ctx->pc = 0x17D00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D008u;
            // 0x17d00c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17D010u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D010u; }
            if (ctx->pc != 0x17D010u) { return; }
        }
        }
    }
    ctx->pc = 0x17D010u;
    // 0x17d010: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x17d010u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17d014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17d018: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17d018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17d01c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d020: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d024: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17d028: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x17d028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17d02c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x17d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x17d030: 0x40f809  jalr        $v0
    ctx->pc = 0x17D030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D038u);
        ctx->pc = 0x17D034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D030u;
            // 0x17d034: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17D038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D038u; }
            if (ctx->pc != 0x17D038u) { return; }
        }
        }
    }
    ctx->pc = 0x17D038u;
    // 0x17d038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17d038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d03c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x17d03cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17d040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17d044: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17d044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17d048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d04c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d050: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17d050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17d054: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x17d054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x17d058: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x17d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17d05c: 0x40f809  jalr        $v0
    ctx->pc = 0x17D05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D064u);
        ctx->pc = 0x17D060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D05Cu;
            // 0x17d060: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17D064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D064u; }
            if (ctx->pc != 0x17D064u) { return; }
        }
        }
    }
    ctx->pc = 0x17D064u;
    // 0x17d064: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x17d064u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17d068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17d06c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17d070: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d074: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17d074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d078: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17d078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17d07c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x17d07cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x17d080: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x17d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x17d084: 0x40f809  jalr        $v0
    ctx->pc = 0x17D084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D08Cu);
        ctx->pc = 0x17D088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D084u;
            // 0x17d088: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17D08Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D08Cu; }
            if (ctx->pc != 0x17D08Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17D08Cu;
    // 0x17d08c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17d08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d090: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17d090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d094: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17d094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d098: 0x3e00008  jr          $ra
    ctx->pc = 0x17D098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D098u;
            // 0x17d09c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D0A0u;
}
