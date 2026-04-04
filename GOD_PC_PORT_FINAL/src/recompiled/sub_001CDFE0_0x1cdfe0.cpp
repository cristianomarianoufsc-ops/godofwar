#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDFE0
// Address: 0x1cdfe0 - 0x1ce3a8
void sub_001CDFE0_0x1cdfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDFE0_0x1cdfe0");
#endif

    ctx->pc = 0x1cdfe0u;

    // 0x1cdfe0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cdfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cdfe4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1cdfe4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1cdfe8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1cdfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1cdfec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cdfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdff0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1cdff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1cdff4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1cdff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdff8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1cdff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1cdffc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cdffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce000: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1ce000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1ce004: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ce004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce008: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1ce008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1ce00c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1ce00cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce010: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1ce010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1ce014: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1ce014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1ce018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce01c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x1ce01cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ce020: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1ce020u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ce024: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1ce024u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ce028: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ce028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ce02c: 0x8e740018  lw          $s4, 0x18($s3)
    ctx->pc = 0x1ce02cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1ce030: 0x86830060  lh          $v1, 0x60($s4)
    ctx->pc = 0x1ce030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x1ce034: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE034u;
    {
        const bool branch_taken_0x1ce034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE034u;
            // 0x1ce038: 0x8bc03  sra         $s7, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce034) {
            ctx->pc = 0x1CE044u;
            goto label_1ce044;
        }
    }
    ctx->pc = 0x1CE03Cu;
    // 0x1ce03c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE03Cu;
    {
        const bool branch_taken_0x1ce03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE03Cu;
            // 0x1ce040: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce03c) {
            ctx->pc = 0x1CE064u;
            goto label_1ce064;
        }
    }
    ctx->pc = 0x1CE044u;
label_1ce044:
    // 0x1ce044: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ce044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ce048: 0xde830068  ld          $v1, 0x68($s4)
    ctx->pc = 0x1ce048u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x1ce04c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ce04cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ce050: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE050u;
    {
        const bool branch_taken_0x1ce050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ce050) {
            ctx->pc = 0x1CE054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE050u;
            // 0x1ce054: 0x26850070  addiu       $a1, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE064u;
            goto label_1ce064;
        }
    }
    ctx->pc = 0x1CE058u;
    // 0x1ce058: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CE058u;
    SET_GPR_U32(ctx, 31, 0x1CE060u);
    ctx->pc = 0x1CE05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE058u;
            // 0x1ce05c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE060u; }
        if (ctx->pc != 0x1CE060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE060u; }
        if (ctx->pc != 0x1CE060u) { return; }
    }
    ctx->pc = 0x1CE060u;
    // 0x1ce060: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x1ce060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_1ce064:
    // 0x1ce064: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ce064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ce068: 0x78b50030  lq          $s5, 0x30($a1)
    ctx->pc = 0x1ce068u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1ce06c: 0x8c44c874  lw          $a0, -0x378C($v0)
    ctx->pc = 0x1ce06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953076)));
    // 0x1ce070: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ce070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce074: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1CE074u;
    SET_GPR_U32(ctx, 31, 0x1CE07Cu);
    ctx->pc = 0x1CE078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE074u;
            // 0x1ce078: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE07Cu; }
        if (ctx->pc != 0x1CE07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE07Cu; }
        if (ctx->pc != 0x1CE07Cu) { return; }
    }
    ctx->pc = 0x1CE07Cu;
    // 0x1ce07c: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1ce07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce080: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1ce080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1ce084: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x1ce084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x1ce088: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1ce088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce08c: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x1ce08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x1ce090: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ce090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce094: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CE094u;
    SET_GPR_U32(ctx, 31, 0x1CE09Cu);
    ctx->pc = 0x1CE098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE094u;
            // 0x1ce098: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE09Cu; }
        if (ctx->pc != 0x1CE09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE09Cu; }
        if (ctx->pc != 0x1CE09Cu) { return; }
    }
    ctx->pc = 0x1CE09Cu;
    // 0x1ce09c: 0x84430080  lh          $v1, 0x80($v0)
    ctx->pc = 0x1ce09cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1ce0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce0a4: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CE0A4u;
    {
        const bool branch_taken_0x1ce0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0A4u;
            // 0x1ce0a8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0a4) {
            ctx->pc = 0x1CE11Cu;
            goto label_1ce11c;
        }
    }
    ctx->pc = 0x1CE0ACu;
    // 0x1ce0ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE0ACu;
    {
        const bool branch_taken_0x1ce0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0ACu;
            // 0x1ce0b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0ac) {
            ctx->pc = 0x1CE0C8u;
            goto label_1ce0c8;
        }
    }
    ctx->pc = 0x1CE0B4u;
    // 0x1ce0b4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE0B4u;
    {
        const bool branch_taken_0x1ce0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0b4) {
            ctx->pc = 0x1CE0D8u;
            goto label_1ce0d8;
        }
    }
    ctx->pc = 0x1CE0BCu;
    // 0x1ce0bc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1CE0BCu;
    {
        const bool branch_taken_0x1ce0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0BCu;
            // 0x1ce0c0: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0bc) {
            ctx->pc = 0x1CE19Cu;
            goto label_1ce19c;
        }
    }
    ctx->pc = 0x1CE0C4u;
    // 0x1ce0c4: 0x0  nop
    ctx->pc = 0x1ce0c4u;
    // NOP
label_1ce0c8:
    // 0x1ce0c8: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CE0C8u;
    {
        const bool branch_taken_0x1ce0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce0c8) {
            ctx->pc = 0x1CE15Cu;
            goto label_1ce15c;
        }
    }
    ctx->pc = 0x1CE0D0u;
    // 0x1ce0d0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1CE0D0u;
    {
        const bool branch_taken_0x1ce0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0D0u;
            // 0x1ce0d4: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0d0) {
            ctx->pc = 0x1CE19Cu;
            goto label_1ce19c;
        }
    }
    ctx->pc = 0x1CE0D8u;
label_1ce0d8:
    // 0x1ce0d8: 0xc079838  jal         func_1E60E0
    ctx->pc = 0x1CE0D8u;
    SET_GPR_U32(ctx, 31, 0x1CE0E0u);
    ctx->pc = 0x1CE0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0D8u;
            // 0x1ce0dc: 0x24040360  addiu       $a0, $zero, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E60E0u;
    if (runtime->hasFunction(0x1E60E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0E0u; }
        if (ctx->pc != 0x1CE0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e60e0_0x1e6120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0E0u; }
        if (ctx->pc != 0x1CE0E0u) { return; }
    }
    ctx->pc = 0x1CE0E0u;
    // 0x1ce0e0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1ce0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ce0e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0e8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1ce0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ce0ec: 0xc07f498  jal         func_1FD260
    ctx->pc = 0x1CE0ECu;
    SET_GPR_U32(ctx, 31, 0x1CE0F4u);
    ctx->pc = 0x1CE0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0ECu;
            // 0x1ce0f0: 0x8c710018  lw          $s1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD260u;
    if (runtime->hasFunction(0x1FD260u)) {
        auto targetFn = runtime->lookupFunction(0x1FD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0F4u; }
        if (ctx->pc != 0x1CE0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1fd260_0x1fd2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0F4u; }
        if (ctx->pc != 0x1CE0F4u) { return; }
    }
    ctx->pc = 0x1CE0F4u;
    // 0x1ce0f4: 0xc07f826  jal         func_1FE098
    ctx->pc = 0x1CE0F4u;
    SET_GPR_U32(ctx, 31, 0x1CE0FCu);
    ctx->pc = 0x1CE0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0F4u;
            // 0x1ce0f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE098u;
    if (runtime->hasFunction(0x1FE098u)) {
        auto targetFn = runtime->lookupFunction(0x1FE098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0FCu; }
        if (ctx->pc != 0x1CE0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE098_0x1fe098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0FCu; }
        if (ctx->pc != 0x1CE0FCu) { return; }
    }
    ctx->pc = 0x1CE0FCu;
    // 0x1ce0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce100: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ce100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce104: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ce104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce108: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ce108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce10c: 0xc079c9a  jal         func_1E7268
    ctx->pc = 0x1CE10Cu;
    SET_GPR_U32(ctx, 31, 0x1CE114u);
    ctx->pc = 0x1CE110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE10Cu;
            // 0x1ce110: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7268u;
    if (runtime->hasFunction(0x1E7268u)) {
        auto targetFn = runtime->lookupFunction(0x1E7268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE114u; }
        if (ctx->pc != 0x1CE114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7268_0x1e7268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE114u; }
        if (ctx->pc != 0x1CE114u) { return; }
    }
    ctx->pc = 0x1CE114u;
    // 0x1ce114: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1CE114u;
    {
        const bool branch_taken_0x1ce114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE114u;
            // 0x1ce118: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce114) {
            ctx->pc = 0x1CE198u;
            goto label_1ce198;
        }
    }
    ctx->pc = 0x1CE11Cu;
label_1ce11c:
    // 0x1ce11c: 0xc06fdbc  jal         func_1BF6F0
    ctx->pc = 0x1CE11Cu;
    SET_GPR_U32(ctx, 31, 0x1CE124u);
    ctx->pc = 0x1CE120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE11Cu;
            // 0x1ce120: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF6F0u;
    if (runtime->hasFunction(0x1BF6F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE124u; }
        if (ctx->pc != 0x1CE124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF6F0_0x1bf6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE124u; }
        if (ctx->pc != 0x1CE124u) { return; }
    }
    ctx->pc = 0x1CE124u;
    // 0x1ce124: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1ce124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ce128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce12c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1ce12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ce130: 0xc07f498  jal         func_1FD260
    ctx->pc = 0x1CE130u;
    SET_GPR_U32(ctx, 31, 0x1CE138u);
    ctx->pc = 0x1CE134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE130u;
            // 0x1ce134: 0x8c710018  lw          $s1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD260u;
    if (runtime->hasFunction(0x1FD260u)) {
        auto targetFn = runtime->lookupFunction(0x1FD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE138u; }
        if (ctx->pc != 0x1CE138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1fd260_0x1fd2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE138u; }
        if (ctx->pc != 0x1CE138u) { return; }
    }
    ctx->pc = 0x1CE138u;
    // 0x1ce138: 0xc07f826  jal         func_1FE098
    ctx->pc = 0x1CE138u;
    SET_GPR_U32(ctx, 31, 0x1CE140u);
    ctx->pc = 0x1CE13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE138u;
            // 0x1ce13c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE098u;
    if (runtime->hasFunction(0x1FE098u)) {
        auto targetFn = runtime->lookupFunction(0x1FE098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE140u; }
        if (ctx->pc != 0x1CE140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE098_0x1fe098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE140u; }
        if (ctx->pc != 0x1CE140u) { return; }
    }
    ctx->pc = 0x1CE140u;
    // 0x1ce140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ce144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce148: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ce148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce14c: 0xc06fdec  jal         func_1BF7B0
    ctx->pc = 0x1CE14Cu;
    SET_GPR_U32(ctx, 31, 0x1CE154u);
    ctx->pc = 0x1CE150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE14Cu;
            // 0x1ce150: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF7B0u;
    if (runtime->hasFunction(0x1BF7B0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE154u; }
        if (ctx->pc != 0x1CE154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bf7b0_0x1bfb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE154u; }
        if (ctx->pc != 0x1CE154u) { return; }
    }
    ctx->pc = 0x1CE154u;
    // 0x1ce154: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CE154u;
    {
        const bool branch_taken_0x1ce154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE154u;
            // 0x1ce158: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce154) {
            ctx->pc = 0x1CE198u;
            goto label_1ce198;
        }
    }
    ctx->pc = 0x1CE15Cu;
label_1ce15c:
    // 0x1ce15c: 0xc07081c  jal         func_1C2070
    ctx->pc = 0x1CE15Cu;
    SET_GPR_U32(ctx, 31, 0x1CE164u);
    ctx->pc = 0x1CE160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE15Cu;
            // 0x1ce160: 0x24040370  addiu       $a0, $zero, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2070u;
    if (runtime->hasFunction(0x1C2070u)) {
        auto targetFn = runtime->lookupFunction(0x1C2070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE164u; }
        if (ctx->pc != 0x1CE164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2070_0x1c2070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE164u; }
        if (ctx->pc != 0x1CE164u) { return; }
    }
    ctx->pc = 0x1CE164u;
    // 0x1ce164: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1ce164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ce168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce16c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1ce16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ce170: 0xc07f498  jal         func_1FD260
    ctx->pc = 0x1CE170u;
    SET_GPR_U32(ctx, 31, 0x1CE178u);
    ctx->pc = 0x1CE174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE170u;
            // 0x1ce174: 0x8c710018  lw          $s1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD260u;
    if (runtime->hasFunction(0x1FD260u)) {
        auto targetFn = runtime->lookupFunction(0x1FD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE178u; }
        if (ctx->pc != 0x1CE178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1fd260_0x1fd2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE178u; }
        if (ctx->pc != 0x1CE178u) { return; }
    }
    ctx->pc = 0x1CE178u;
    // 0x1ce178: 0xc07f826  jal         func_1FE098
    ctx->pc = 0x1CE178u;
    SET_GPR_U32(ctx, 31, 0x1CE180u);
    ctx->pc = 0x1CE17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE178u;
            // 0x1ce17c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE098u;
    if (runtime->hasFunction(0x1FE098u)) {
        auto targetFn = runtime->lookupFunction(0x1FE098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE180u; }
        if (ctx->pc != 0x1CE180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE098_0x1fe098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE180u; }
        if (ctx->pc != 0x1CE180u) { return; }
    }
    ctx->pc = 0x1CE180u;
    // 0x1ce180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce184: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ce184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce188: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ce188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce18c: 0xc07084c  jal         func_1C2130
    ctx->pc = 0x1CE18Cu;
    SET_GPR_U32(ctx, 31, 0x1CE194u);
    ctx->pc = 0x1CE190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE18Cu;
            // 0x1ce190: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2130u;
    if (runtime->hasFunction(0x1C2130u)) {
        auto targetFn = runtime->lookupFunction(0x1C2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE194u; }
        if (ctx->pc != 0x1CE194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c2130_0x1c21d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE194u; }
        if (ctx->pc != 0x1CE194u) { return; }
    }
    ctx->pc = 0x1CE194u;
    // 0x1ce194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce198:
    // 0x1ce198: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1ce198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1ce19c:
    // 0x1ce19c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ce19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce1a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ce1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ce1a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ce1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce1a8: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x1ce1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x1ce1ac: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1ce1acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1ce1b0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1ce1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ce1b4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1ce1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1ce1b8: 0xa3880b  movn        $s1, $a1, $v1
    ctx->pc = 0x1ce1b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x1ce1bc: 0x40f809  jalr        $v0
    ctx->pc = 0x1CE1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE1C4u);
        ctx->pc = 0x1CE1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1BCu;
            // 0x1ce1c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE1C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE044u: goto label_1ce044;
            case 0x1CE064u: goto label_1ce064;
            case 0x1CE0C8u: goto label_1ce0c8;
            case 0x1CE0D8u: goto label_1ce0d8;
            case 0x1CE11Cu: goto label_1ce11c;
            case 0x1CE15Cu: goto label_1ce15c;
            case 0x1CE198u: goto label_1ce198;
            case 0x1CE19Cu: goto label_1ce19c;
            case 0x1CE1D8u: goto label_1ce1d8;
            case 0x1CE224u: goto label_1ce224;
            case 0x1CE22Cu: goto label_1ce22c;
            case 0x1CE2F8u: goto label_1ce2f8;
            case 0x1CE348u: goto label_1ce348;
            case 0x1CE370u: goto label_1ce370;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1C4u; }
            if (ctx->pc != 0x1CE1C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CE1C4u;
    // 0x1ce1c4: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x1ce1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1ce1c8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x1ce1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x1ce1cc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE1CCu;
    {
        const bool branch_taken_0x1ce1cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1CCu;
            // 0x1ce1d0: 0xac430038  sw          $v1, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1cc) {
            ctx->pc = 0x1CE1D8u;
            goto label_1ce1d8;
        }
    }
    ctx->pc = 0x1CE1D4u;
    // 0x1ce1d4: 0xae1201b0  sw          $s2, 0x1B0($s0)
    ctx->pc = 0x1ce1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 18));
label_1ce1d8:
    // 0x1ce1d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce1dc: 0x12c20011  beq         $s6, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CE1DCu;
    {
        const bool branch_taken_0x1ce1dc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1DCu;
            // 0x1ce1e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1dc) {
            ctx->pc = 0x1CE224u;
            goto label_1ce224;
        }
    }
    ctx->pc = 0x1CE1E4u;
    // 0x1ce1e4: 0xc0736da  jal         func_1CDB68
    ctx->pc = 0x1CE1E4u;
    SET_GPR_U32(ctx, 31, 0x1CE1ECu);
    ctx->pc = 0x1CE1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1E4u;
            // 0x1ce1e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB68u;
    if (runtime->hasFunction(0x1CDB68u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1ECu; }
        if (ctx->pc != 0x1CE1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB68_0x1cdb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1ECu; }
        if (ctx->pc != 0x1CE1ECu) { return; }
    }
    ctx->pc = 0x1CE1ECu;
    // 0x1ce1ec: 0xc07439e  jal         func_1D0E78
    ctx->pc = 0x1CE1ECu;
    SET_GPR_U32(ctx, 31, 0x1CE1F4u);
    ctx->pc = 0x1CE1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1ECu;
            // 0x1ce1f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E78u;
    if (runtime->hasFunction(0x1D0E78u)) {
        auto targetFn = runtime->lookupFunction(0x1D0E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1F4u; }
        if (ctx->pc != 0x1CE1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0E78_0x1d0e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1F4u; }
        if (ctx->pc != 0x1CE1F4u) { return; }
    }
    ctx->pc = 0x1CE1F4u;
    // 0x1ce1f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ce1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ce1f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ce1fc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1ce1fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1ce200: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1ce200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1ce204: 0x40f809  jalr        $v0
    ctx->pc = 0x1CE204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE20Cu);
        ctx->pc = 0x1CE208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE204u;
            // 0x1ce208: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE20Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE044u: goto label_1ce044;
            case 0x1CE064u: goto label_1ce064;
            case 0x1CE0C8u: goto label_1ce0c8;
            case 0x1CE0D8u: goto label_1ce0d8;
            case 0x1CE11Cu: goto label_1ce11c;
            case 0x1CE15Cu: goto label_1ce15c;
            case 0x1CE198u: goto label_1ce198;
            case 0x1CE19Cu: goto label_1ce19c;
            case 0x1CE1D8u: goto label_1ce1d8;
            case 0x1CE224u: goto label_1ce224;
            case 0x1CE22Cu: goto label_1ce22c;
            case 0x1CE2F8u: goto label_1ce2f8;
            case 0x1CE348u: goto label_1ce348;
            case 0x1CE370u: goto label_1ce370;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE20Cu; }
            if (ctx->pc != 0x1CE20Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CE20Cu;
    // 0x1ce20c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1ce20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1ce210: 0x70152ca9  por         $a1, $zero, $s5
    ctx->pc = 0x1ce210u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 21)));
    // 0x1ce214: 0xc074ce4  jal         func_1D3390
    ctx->pc = 0x1CE214u;
    SET_GPR_U32(ctx, 31, 0x1CE21Cu);
    ctx->pc = 0x1CE218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE214u;
            // 0x1ce218: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3390u;
    if (runtime->hasFunction(0x1D3390u)) {
        auto targetFn = runtime->lookupFunction(0x1D3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE21Cu; }
        if (ctx->pc != 0x1CE21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3390_0x1d3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE21Cu; }
        if (ctx->pc != 0x1CE21Cu) { return; }
    }
    ctx->pc = 0x1CE21Cu;
    // 0x1ce21c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE21Cu;
    {
        const bool branch_taken_0x1ce21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE21Cu;
            // 0x1ce220: 0xa6420070  sh          $v0, 0x70($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 112), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce21c) {
            ctx->pc = 0x1CE22Cu;
            goto label_1ce22c;
        }
    }
    ctx->pc = 0x1CE224u;
label_1ce224:
    // 0x1ce224: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ce224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ce228: 0xa6420070  sh          $v0, 0x70($s2)
    ctx->pc = 0x1ce228u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 112), (uint16_t)GPR_U32(ctx, 2));
label_1ce22c:
    // 0x1ce22c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1ce22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ce230: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ce230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1ce234: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1ce234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1ce238: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1ce238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1ce23c: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x1ce23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
    // 0x1ce240: 0xc454005c  lwc1        $f20, 0x5C($v0)
    ctx->pc = 0x1ce240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce244: 0x4616a503  div.s       $f20, $f20, $f22
    ctx->pc = 0x1ce244u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[22];
    // 0x1ce248: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x1CE248u;
    SET_GPR_U32(ctx, 31, 0x1CE250u);
    ctx->pc = 0x1CE24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE248u;
            // 0x1ce24c: 0xc4550060  lwc1        $f21, 0x60($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE250u; }
        if (ctx->pc != 0x1CE250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE250u; }
        if (ctx->pc != 0x1CE250u) { return; }
    }
    ctx->pc = 0x1CE250u;
    // 0x1ce250: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ce254: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce258: 0x4616ad43  div.s       $f21, $f21, $f22
    ctx->pc = 0x1ce258u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[22];
    // 0x1ce25c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1ce25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1ce260: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ce260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ce264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce268: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ce268u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ce26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce270: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x1ce270u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1ce274: 0xc079a62  jal         func_1E6988
    ctx->pc = 0x1CE274u;
    SET_GPR_U32(ctx, 31, 0x1CE27Cu);
    ctx->pc = 0x1CE278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE274u;
            // 0x1ce278: 0x4614ab00  add.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6988u;
    if (runtime->hasFunction(0x1E6988u)) {
        auto targetFn = runtime->lookupFunction(0x1E6988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE27Cu; }
        if (ctx->pc != 0x1CE27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6988_0x1e6988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE27Cu; }
        if (ctx->pc != 0x1CE27Cu) { return; }
    }
    ctx->pc = 0x1CE27Cu;
    // 0x1ce27c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1ce27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ce280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ce280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce284: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ce284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ce288: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1ce288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1ce28c: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1ce290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce294: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce298: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ce298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ce29c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ce29cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ce2a0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ce2a4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1ce2a4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1ce2a8: 0xe600017c  swc1        $f0, 0x17C($s0)
    ctx->pc = 0x1ce2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
    // 0x1ce2ac: 0x84840018  lh          $a0, 0x18($a0)
    ctx->pc = 0x1ce2acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1ce2b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1CE2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE2B8u);
        ctx->pc = 0x1CE2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2B0u;
            // 0x1ce2b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE2B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE044u: goto label_1ce044;
            case 0x1CE064u: goto label_1ce064;
            case 0x1CE0C8u: goto label_1ce0c8;
            case 0x1CE0D8u: goto label_1ce0d8;
            case 0x1CE11Cu: goto label_1ce11c;
            case 0x1CE15Cu: goto label_1ce15c;
            case 0x1CE198u: goto label_1ce198;
            case 0x1CE19Cu: goto label_1ce19c;
            case 0x1CE1D8u: goto label_1ce1d8;
            case 0x1CE224u: goto label_1ce224;
            case 0x1CE22Cu: goto label_1ce22c;
            case 0x1CE2F8u: goto label_1ce2f8;
            case 0x1CE348u: goto label_1ce348;
            case 0x1CE370u: goto label_1ce370;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2B8u; }
            if (ctx->pc != 0x1CE2B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1CE2B8u;
    // 0x1ce2b8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1ce2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ce2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2c0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1ce2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1ce2c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ce2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce2c8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1ce2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ce2cc: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1CE2CCu;
    SET_GPR_U32(ctx, 31, 0x1CE2D4u);
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2D4u; }
        if (ctx->pc != 0x1CE2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2D4u; }
        if (ctx->pc != 0x1CE2D4u) { return; }
    }
    ctx->pc = 0x1CE2D4u;
    // 0x1ce2d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ce2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ce2d8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1ce2d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ce2dc: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1ce2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1ce2e0: 0x40f809  jalr        $v0
    ctx->pc = 0x1CE2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE2E8u);
        ctx->pc = 0x1CE2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2E0u;
            // 0x1ce2e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE2E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE044u: goto label_1ce044;
            case 0x1CE064u: goto label_1ce064;
            case 0x1CE0C8u: goto label_1ce0c8;
            case 0x1CE0D8u: goto label_1ce0d8;
            case 0x1CE11Cu: goto label_1ce11c;
            case 0x1CE15Cu: goto label_1ce15c;
            case 0x1CE198u: goto label_1ce198;
            case 0x1CE19Cu: goto label_1ce19c;
            case 0x1CE1D8u: goto label_1ce1d8;
            case 0x1CE224u: goto label_1ce224;
            case 0x1CE22Cu: goto label_1ce22c;
            case 0x1CE2F8u: goto label_1ce2f8;
            case 0x1CE348u: goto label_1ce348;
            case 0x1CE370u: goto label_1ce370;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2E8u; }
            if (ctx->pc != 0x1CE2E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1CE2E8u;
    // 0x1ce2e8: 0xa45700a8  sh          $s7, 0xA8($v0)
    ctx->pc = 0x1ce2e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 23));
    // 0x1ce2ec: 0x3c0200a0  lui         $v0, 0xA0
    ctx->pc = 0x1ce2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)160 << 16));
    // 0x1ce2f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ce2f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2f4: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1ce2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
label_1ce2f8:
    // 0x1ce2f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ce2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ce2fc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ce2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ce300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ce300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ce304: 0x0  nop
    ctx->pc = 0x1ce304u;
    // NOP
    // 0x1ce308: 0x0  nop
    ctx->pc = 0x1ce308u;
    // NOP
    // 0x1ce30c: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CE30Cu;
    {
        const bool branch_taken_0x1ce30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE30Cu;
            // 0x1ce310: 0xac400100  sw          $zero, 0x100($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce30c) {
            ctx->pc = 0x1CE2F8u;
            runtime->cooperativeGuestYield();
            goto label_1ce2f8;
        }
    }
    ctx->pc = 0x1CE314u;
    // 0x1ce314: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1ce314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ce318: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1ce318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1ce31c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1ce31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1ce320: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE320u;
    {
        const bool branch_taken_0x1ce320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce320) {
            ctx->pc = 0x1CE348u;
            goto label_1ce348;
        }
    }
    ctx->pc = 0x1CE328u;
    // 0x1ce328: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ce328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ce32c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1ce330: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1ce330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1ce334: 0x40f809  jalr        $v0
    ctx->pc = 0x1CE334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE33Cu);
        ctx->pc = 0x1CE338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE334u;
            // 0x1ce338: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE33Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE044u: goto label_1ce044;
            case 0x1CE064u: goto label_1ce064;
            case 0x1CE0C8u: goto label_1ce0c8;
            case 0x1CE0D8u: goto label_1ce0d8;
            case 0x1CE11Cu: goto label_1ce11c;
            case 0x1CE15Cu: goto label_1ce15c;
            case 0x1CE198u: goto label_1ce198;
            case 0x1CE19Cu: goto label_1ce19c;
            case 0x1CE1D8u: goto label_1ce1d8;
            case 0x1CE224u: goto label_1ce224;
            case 0x1CE22Cu: goto label_1ce22c;
            case 0x1CE2F8u: goto label_1ce2f8;
            case 0x1CE348u: goto label_1ce348;
            case 0x1CE370u: goto label_1ce370;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE33Cu; }
            if (ctx->pc != 0x1CE33Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CE33Cu;
    // 0x1ce33c: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x1ce33cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1ce340: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1ce340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1ce344: 0xa0430016  sb          $v1, 0x16($v0)
    ctx->pc = 0x1ce344u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22), (uint8_t)GPR_U32(ctx, 3));
label_1ce348:
    // 0x1ce348: 0xc073f16  jal         func_1CFC58
    ctx->pc = 0x1CE348u;
    SET_GPR_U32(ctx, 31, 0x1CE350u);
    ctx->pc = 0x1CE34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE348u;
            // 0x1ce34c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC58u;
    if (runtime->hasFunction(0x1CFC58u)) {
        auto targetFn = runtime->lookupFunction(0x1CFC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE350u; }
        if (ctx->pc != 0x1CE350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFC58_0x1cfc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE350u; }
        if (ctx->pc != 0x1CE350u) { return; }
    }
    ctx->pc = 0x1CE350u;
    // 0x1ce350: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1ce350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ce354: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1ce354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1ce358: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1ce358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1ce35c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE35Cu;
    {
        const bool branch_taken_0x1ce35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE35Cu;
            // 0x1ce360: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce35c) {
            ctx->pc = 0x1CE370u;
            goto label_1ce370;
        }
    }
    ctx->pc = 0x1CE364u;
    // 0x1ce364: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1ce364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1ce368: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1ce368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1ce36c: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x1ce36cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_1ce370:
    // 0x1ce370: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1ce370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ce374: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1ce374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce378: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ce378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce37c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ce37cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce380: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1ce380u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce384: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1ce384u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce388: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1ce388u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce390: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x1ce390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ce394: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1ce394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce398: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1ce398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce39c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE39Cu;
            // 0x1ce3a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE044u: goto label_1ce044;
            case 0x1CE064u: goto label_1ce064;
            case 0x1CE0C8u: goto label_1ce0c8;
            case 0x1CE0D8u: goto label_1ce0d8;
            case 0x1CE11Cu: goto label_1ce11c;
            case 0x1CE15Cu: goto label_1ce15c;
            case 0x1CE198u: goto label_1ce198;
            case 0x1CE19Cu: goto label_1ce19c;
            case 0x1CE1D8u: goto label_1ce1d8;
            case 0x1CE224u: goto label_1ce224;
            case 0x1CE22Cu: goto label_1ce22c;
            case 0x1CE2F8u: goto label_1ce2f8;
            case 0x1CE348u: goto label_1ce348;
            case 0x1CE370u: goto label_1ce370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE3A4u;
    // 0x1ce3a4: 0x0  nop
    ctx->pc = 0x1ce3a4u;
    // NOP
}
