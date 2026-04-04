#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022CF40
// Address: 0x22cf40 - 0x22d060
void sub_0022CF40_0x22cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CF40_0x22cf40");
#endif

    ctx->pc = 0x22cf40u;

    // 0x22cf40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22cf44: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22cf44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x22cf48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22cf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22cf4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22cf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22cf50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22cf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22cf54: 0xc076d5c  jal         func_1DB570
    ctx->pc = 0x22CF54u;
    SET_GPR_U32(ctx, 31, 0x22CF5Cu);
    ctx->pc = 0x22CF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF54u;
            // 0x22cf58: 0x24844f90  addiu       $a0, $a0, 0x4F90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB570u;
    if (runtime->hasFunction(0x1DB570u)) {
        auto targetFn = runtime->lookupFunction(0x1DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF5Cu; }
        if (ctx->pc != 0x22CF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB570_0x1db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF5Cu; }
        if (ctx->pc != 0x22CF5Cu) { return; }
    }
    ctx->pc = 0x22CF5Cu;
    // 0x22cf5c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22cf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x22cf60: 0xc07b64c  jal         func_1ED930
    ctx->pc = 0x22CF60u;
    SET_GPR_U32(ctx, 31, 0x22CF68u);
    ctx->pc = 0x22CF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF60u;
            // 0x22cf64: 0x24845020  addiu       $a0, $a0, 0x5020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED930u;
    if (runtime->hasFunction(0x1ED930u)) {
        auto targetFn = runtime->lookupFunction(0x1ED930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF68u; }
        if (ctx->pc != 0x22CF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ed930_0x1ed958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF68u; }
        if (ctx->pc != 0x22CF68u) { return; }
    }
    ctx->pc = 0x22CF68u;
    // 0x22cf68: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x22cf6c: 0xc08ac8e  jal         func_22B238
    ctx->pc = 0x22CF6Cu;
    SET_GPR_U32(ctx, 31, 0x22CF74u);
    ctx->pc = 0x22CF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF6Cu;
            // 0x22cf70: 0x248450e0  addiu       $a0, $a0, 0x50E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B238u;
    if (runtime->hasFunction(0x22B238u)) {
        auto targetFn = runtime->lookupFunction(0x22B238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF74u; }
        if (ctx->pc != 0x22CF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22b238_0x22b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF74u; }
        if (ctx->pc != 0x22CF74u) { return; }
    }
    ctx->pc = 0x22CF74u;
    // 0x22cf74: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22cf74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x22cf78: 0xc06c3b2  jal         func_1B0EC8
    ctx->pc = 0x22CF78u;
    SET_GPR_U32(ctx, 31, 0x22CF80u);
    ctx->pc = 0x22CF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF78u;
            // 0x22cf7c: 0x248451d0  addiu       $a0, $a0, 0x51D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0EC8u;
    if (runtime->hasFunction(0x1B0EC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B0EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF80u; }
        if (ctx->pc != 0x22CF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0EC8_0x1b0ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF80u; }
        if (ctx->pc != 0x22CF80u) { return; }
    }
    ctx->pc = 0x22CF80u;
    // 0x22cf80: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x22cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x22cf84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22cf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf88: 0x90455398  lbu         $a1, 0x5398($v0)
    ctx->pc = 0x22cf88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21400)));
    // 0x22cf8c: 0xc06f9c6  jal         func_1BE718
    ctx->pc = 0x22CF8Cu;
    SET_GPR_U32(ctx, 31, 0x22CF94u);
    ctx->pc = 0x22CF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF8Cu;
            // 0x22cf90: 0x24515398  addiu       $s1, $v0, 0x5398 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE718u;
    if (runtime->hasFunction(0x1BE718u)) {
        auto targetFn = runtime->lookupFunction(0x1BE718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF94u; }
        if (ctx->pc != 0x22CF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE718_0x1be718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF94u; }
        if (ctx->pc != 0x22CF94u) { return; }
    }
    ctx->pc = 0x22CF94u;
    // 0x22cf94: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22cf98: 0x8c42e57c  lw          $v0, -0x1A84($v0)
    ctx->pc = 0x22cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960508)));
    // 0x22cf9c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22CF9Cu;
    {
        const bool branch_taken_0x22cf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF9Cu;
            // 0x22cfa0: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf9c) {
            ctx->pc = 0x22D000u;
            goto label_22d000;
        }
    }
    ctx->pc = 0x22CFA4u;
    // 0x22cfa4: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x22cfa4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x22cfa8: 0xc06d67e  jal         func_1B59F8
    ctx->pc = 0x22CFA8u;
    SET_GPR_U32(ctx, 31, 0x22CFB0u);
    ctx->pc = 0x22CFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFA8u;
            // 0x22cfac: 0x8e04cb94  lw          $a0, -0x346C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B59F8u;
    if (runtime->hasFunction(0x1B59F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B59F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFB0u; }
        if (ctx->pc != 0x22CFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b59f8_0x1b5a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFB0u; }
        if (ctx->pc != 0x22CFB0u) { return; }
    }
    ctx->pc = 0x22CFB0u;
    // 0x22cfb0: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x22cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x22cfb4: 0xc06d68e  jal         func_1B5A38
    ctx->pc = 0x22CFB4u;
    SET_GPR_U32(ctx, 31, 0x22CFBCu);
    ctx->pc = 0x22CFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFB4u;
            // 0x22cfb8: 0x92250002  lbu         $a1, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A38u;
    if (runtime->hasFunction(0x1B5A38u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFBCu; }
        if (ctx->pc != 0x22CFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b5a38_0x1b5a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFBCu; }
        if (ctx->pc != 0x22CFBCu) { return; }
    }
    ctx->pc = 0x22CFBCu;
    // 0x22cfbc: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x22cfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x22cfc0: 0xc06d69e  jal         func_1B5A78
    ctx->pc = 0x22CFC0u;
    SET_GPR_U32(ctx, 31, 0x22CFC8u);
    ctx->pc = 0x22CFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFC0u;
            // 0x22cfc4: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A78u;
    if (runtime->hasFunction(0x1B5A78u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFC8u; }
        if (ctx->pc != 0x22CFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5A78_0x1b5a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFC8u; }
        if (ctx->pc != 0x22CFC8u) { return; }
    }
    ctx->pc = 0x22CFC8u;
    // 0x22cfc8: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x22cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x22cfcc: 0xc06d6a6  jal         func_1B5A98
    ctx->pc = 0x22CFCCu;
    SET_GPR_U32(ctx, 31, 0x22CFD4u);
    ctx->pc = 0x22CFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFCCu;
            // 0x22cfd0: 0x92250004  lbu         $a1, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A98u;
    if (runtime->hasFunction(0x1B5A98u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFD4u; }
        if (ctx->pc != 0x22CFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5A98_0x1b5a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFD4u; }
        if (ctx->pc != 0x22CFD4u) { return; }
    }
    ctx->pc = 0x22CFD4u;
    // 0x22cfd4: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x22cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x22cfd8: 0xc06d6cc  jal         func_1B5B30
    ctx->pc = 0x22CFD8u;
    SET_GPR_U32(ctx, 31, 0x22CFE0u);
    ctx->pc = 0x22CFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFD8u;
            // 0x22cfdc: 0x92250005  lbu         $a1, 0x5($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B30u;
    if (runtime->hasFunction(0x1B5B30u)) {
        auto targetFn = runtime->lookupFunction(0x1B5B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFE0u; }
        if (ctx->pc != 0x22CFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b5b30_0x1b5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFE0u; }
        if (ctx->pc != 0x22CFE0u) { return; }
    }
    ctx->pc = 0x22CFE0u;
    // 0x22cfe0: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x22cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x22cfe4: 0xc06d6d0  jal         func_1B5B40
    ctx->pc = 0x22CFE4u;
    SET_GPR_U32(ctx, 31, 0x22CFECu);
    ctx->pc = 0x22CFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFE4u;
            // 0x22cfe8: 0x92250006  lbu         $a1, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B40u;
    if (runtime->hasFunction(0x1B5B40u)) {
        auto targetFn = runtime->lookupFunction(0x1B5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFECu; }
        if (ctx->pc != 0x22CFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5B40_0x1b5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFECu; }
        if (ctx->pc != 0x22CFECu) { return; }
    }
    ctx->pc = 0x22CFECu;
    // 0x22cfec: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x22cfecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x22cff0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22cff4: 0x8e03cb94  lw          $v1, -0x346C($s0)
    ctx->pc = 0x22cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x22cff8: 0xac6201c8  sw          $v0, 0x1C8($v1)
    ctx->pc = 0x22cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 456), GPR_U32(ctx, 2));
    // 0x22cffc: 0xac80e5bc  sw          $zero, -0x1A44($a0)
    ctx->pc = 0x22cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960572), GPR_U32(ctx, 0));
label_22d000:
    // 0x22d000: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d004: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x22d004u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22d008: 0x8c45cb94  lw          $a1, -0x346C($v0)
    ctx->pc = 0x22d008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22d00c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d010: 0x8c44e5bc  lw          $a0, -0x1A44($v0)
    ctx->pc = 0x22d010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960572)));
    // 0x22d014: 0xaca301c4  sw          $v1, 0x1C4($a1)
    ctx->pc = 0x22d014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 3));
    // 0x22d018: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x22d018u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x22d01c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D01Cu;
    {
        const bool branch_taken_0x22d01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D01Cu;
            // 0x22d020: 0xaca201b8  sw          $v0, 0x1B8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d01c) {
            ctx->pc = 0x22D034u;
            goto label_22d034;
        }
    }
    ctx->pc = 0x22D024u;
    // 0x22d024: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d028: 0xaca001c0  sw          $zero, 0x1C0($a1)
    ctx->pc = 0x22d028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 448), GPR_U32(ctx, 0));
    // 0x22d02c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22D02Cu;
    {
        const bool branch_taken_0x22d02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D02Cu;
            // 0x22d030: 0xa440cc9c  sh          $zero, -0x3364($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294954140), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d02c) {
            ctx->pc = 0x22D048u;
            goto label_22d048;
        }
    }
    ctx->pc = 0x22D034u;
label_22d034:
    // 0x22d034: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x22d034u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x22d038: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22d038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22d03c: 0xaca201c0  sw          $v0, 0x1C0($a1)
    ctx->pc = 0x22d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 448), GPR_U32(ctx, 2));
    // 0x22d040: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x22d040u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x22d044: 0xa462cc9c  sh          $v0, -0x3364($v1)
    ctx->pc = 0x22d044u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294954140), (uint16_t)GPR_U32(ctx, 2));
label_22d048:
    // 0x22d048: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22d048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d04c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d054: 0x3e00008  jr          $ra
    ctx->pc = 0x22D054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D054u;
            // 0x22d058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D000u: goto label_22d000;
            case 0x22D034u: goto label_22d034;
            case 0x22D048u: goto label_22d048;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D05Cu;
    // 0x22d05c: 0x0  nop
    ctx->pc = 0x22d05cu;
    // NOP
}
