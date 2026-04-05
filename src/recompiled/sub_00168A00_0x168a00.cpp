#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168A00
// Address: 0x168a00 - 0x168b90
void sub_00168A00_0x168a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168A00_0x168a00");
#endif

    ctx->pc = 0x168a00u;

    // 0x168a00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x168a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x168a04: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x168a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x168a08: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x168a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x168a0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x168a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a10: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x168a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x168a14: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x168a14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a18: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x168a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x168a1c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x168a1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a20: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x168a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x168a24: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x168a24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a28: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x168a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x168a2c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x168a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x168a30: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x168a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x168a34: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x168a34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x168a38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x168a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x168a3c: 0x34138001  ori         $s3, $zero, 0x8001
    ctx->pc = 0x168a3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x168a40: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x168a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x168a44: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x168a44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x168a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168a4c: 0xc0587bc  jal         func_161EF0
    ctx->pc = 0x168A4Cu;
    SET_GPR_U32(ctx, 31, 0x168A54u);
    ctx->pc = 0x168A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A4Cu;
            // 0x168a50: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161EF0u;
    if (runtime->hasFunction(0x161EF0u)) {
        auto targetFn = runtime->lookupFunction(0x161EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A54u; }
        if (ctx->pc != 0x168A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161EF0_0x161ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A54u; }
        if (ctx->pc != 0x168A54u) { return; }
    }
    ctx->pc = 0x168A54u;
    // 0x168a54: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x168A54u;
    SET_GPR_U32(ctx, 31, 0x168A5Cu);
    ctx->pc = 0x168A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A54u;
            // 0x168a58: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A5Cu; }
        if (ctx->pc != 0x168A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A5Cu; }
        if (ctx->pc != 0x168A5Cu) { return; }
    }
    ctx->pc = 0x168A5Cu;
    // 0x168a5c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x168a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x168a60: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x168a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x168a64: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x168a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x168a68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x168a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x168a6c: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x168A6Cu;
    SET_GPR_U32(ctx, 31, 0x168A74u);
    ctx->pc = 0x168A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A6Cu;
            // 0x168a70: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A74u; }
        if (ctx->pc != 0x168A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A74u; }
        if (ctx->pc != 0x168A74u) { return; }
    }
    ctx->pc = 0x168A74u;
    // 0x168a74: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x168a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x168a78: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x168a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x168a7c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x168a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x168a80: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x168a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x168a84: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x168a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x168a88: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x168a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x168a8c: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x168a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x168a90: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x168a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x168a94: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x168a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x168a98: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x168a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x168a9c: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x168a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x168aa0: 0xae04f168  sw          $a0, -0xE98($s0)
    ctx->pc = 0x168aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 4));
    // 0x168aa4: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x168AA4u;
    SET_GPR_U32(ctx, 31, 0x168AACu);
    ctx->pc = 0x168AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168AA4u;
            // 0x168aa8: 0xfc550018  sd          $s5, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AACu; }
        if (ctx->pc != 0x168AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AACu; }
        if (ctx->pc != 0x168AACu) { return; }
    }
    ctx->pc = 0x168AACu;
    // 0x168aac: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x168AACu;
    SET_GPR_U32(ctx, 31, 0x168AB4u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AB4u; }
        if (ctx->pc != 0x168AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AB4u; }
        if (ctx->pc != 0x168AB4u) { return; }
    }
    ctx->pc = 0x168AB4u;
    // 0x168ab4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x168ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x168ab8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x168ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168abc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x168abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ac0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x168ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ac4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x168ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x168ac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x168ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168acc: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x168accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x168ad0: 0x40f809  jalr        $v0
    ctx->pc = 0x168AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x168AD8u);
        ctx->pc = 0x168AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168AD0u;
            // 0x168ad4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x168AD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168AD8u; }
            if (ctx->pc != 0x168AD8u) { return; }
        }
        }
    }
    ctx->pc = 0x168AD8u;
    // 0x168ad8: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x168AD8u;
    SET_GPR_U32(ctx, 31, 0x168AE0u);
    ctx->pc = 0x168ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168AD8u;
            // 0x168adc: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AE0u; }
        if (ctx->pc != 0x168AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AE0u; }
        if (ctx->pc != 0x168AE0u) { return; }
    }
    ctx->pc = 0x168AE0u;
    // 0x168ae0: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x168ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x168ae4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x168ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x168ae8: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x168ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x168aec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x168aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x168af0: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x168AF0u;
    SET_GPR_U32(ctx, 31, 0x168AF8u);
    ctx->pc = 0x168AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168AF0u;
            // 0x168af4: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AF8u; }
        if (ctx->pc != 0x168AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AF8u; }
        if (ctx->pc != 0x168AF8u) { return; }
    }
    ctx->pc = 0x168AF8u;
    // 0x168af8: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x168af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x168afc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x168afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x168b00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x168b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x168b04: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x168b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x168b08: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x168b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x168b0c: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x168b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x168b10: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x168b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x168b14: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x168b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x168b18: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x168b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x168b1c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x168b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x168b20: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x168b20u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x168b24: 0xae04f168  sw          $a0, -0xE98($s0)
    ctx->pc = 0x168b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 4));
    // 0x168b28: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x168B28u;
    SET_GPR_U32(ctx, 31, 0x168B30u);
    ctx->pc = 0x168B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168B28u;
            // 0x168b2c: 0xfc550018  sd          $s5, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B30u; }
        if (ctx->pc != 0x168B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B30u; }
        if (ctx->pc != 0x168B30u) { return; }
    }
    ctx->pc = 0x168B30u;
    // 0x168b30: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x168B30u;
    SET_GPR_U32(ctx, 31, 0x168B38u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B38u; }
        if (ctx->pc != 0x168B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B38u; }
        if (ctx->pc != 0x168B38u) { return; }
    }
    ctx->pc = 0x168B38u;
    // 0x168b38: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x168b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x168b3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x168b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b40: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x168b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b44: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x168b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b48: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x168b48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x168b4c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x168b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168b50: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x168b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x168b54: 0x40f809  jalr        $v0
    ctx->pc = 0x168B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x168B5Cu);
        ctx->pc = 0x168B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168B54u;
            // 0x168b58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x168B5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168B5Cu; }
            if (ctx->pc != 0x168B5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x168B5Cu;
    // 0x168b5c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x168b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x168b60: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x168b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x168b64: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x168b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x168b68: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x168b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168b6c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x168b6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168b70: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x168b70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168b74: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x168b74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168b78: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x168b78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168b7c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x168b7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168b84: 0x3e00008  jr          $ra
    ctx->pc = 0x168B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168B84u;
            // 0x168b88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168B8Cu;
    // 0x168b8c: 0x0  nop
    ctx->pc = 0x168b8cu;
    // NOP
}
