#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221B48
// Address: 0x221b48 - 0x222118
void sub_00221B48_0x221b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221B48_0x221b48");
#endif

    ctx->pc = 0x221b48u;

    // 0x221b48: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x221b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x221b4c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x221b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x221b50: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x221b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
    // 0x221b54: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x221b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
    // 0x221b58: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x221b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b5c: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x221b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
    // 0x221b60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x221b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b64: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x221b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
    // 0x221b68: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x221b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b6c: 0x7fb501c0  sq          $s5, 0x1C0($sp)
    ctx->pc = 0x221b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 21));
    // 0x221b70: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x221b70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b74: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x221b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
    // 0x221b78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x221b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221b7c: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x221b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
    // 0x221b80: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x221b80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b84: 0xe7ba0250  swc1        $f26, 0x250($sp)
    ctx->pc = 0x221b84u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x221b88: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x221b88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b8c: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x221b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
    // 0x221b90: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x221b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x221b94: 0xe7b90248  swc1        $f25, 0x248($sp)
    ctx->pc = 0x221b94u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x221b98: 0xe7b80240  swc1        $f24, 0x240($sp)
    ctx->pc = 0x221b98u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x221b9c: 0xe7b70238  swc1        $f23, 0x238($sp)
    ctx->pc = 0x221b9cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x221ba0: 0xe7b60230  swc1        $f22, 0x230($sp)
    ctx->pc = 0x221ba0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x221ba4: 0xe7b50228  swc1        $f21, 0x228($sp)
    ctx->pc = 0x221ba4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x221ba8: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x221ba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x221bac: 0x8c44118c  lw          $a0, 0x118C($v0)
    ctx->pc = 0x221bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4492)));
    // 0x221bb0: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x221bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x221bb4: 0x7fa80180  sq          $t0, 0x180($sp)
    ctx->pc = 0x221bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 8));
    // 0x221bb8: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x221BB8u;
    SET_GPR_U32(ctx, 31, 0x221BC0u);
    ctx->pc = 0x221BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221BB8u;
            // 0x221bbc: 0x7fa900f0  sq          $t1, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BC0u; }
        if (ctx->pc != 0x221BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BC0u; }
        if (ctx->pc != 0x221BC0u) { return; }
    }
    ctx->pc = 0x221BC0u;
    // 0x221bc0: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x221bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x221bc4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x221bc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bc8: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x221bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x221bcc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x221bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x221bd0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x221BD0u;
    {
        const bool branch_taken_0x221bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221bd0) {
            ctx->pc = 0x221BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221BD0u;
            // 0x221bd4: 0xc6ba0030  lwc1        $f26, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x221BD8u;
            goto label_221bd8;
        }
    }
    ctx->pc = 0x221BD8u;
label_221bd8:
    // 0x221bd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x221bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221bdc: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x221BDCu;
    {
        const bool branch_taken_0x221bdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x221BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221BDCu;
            // 0x221be0: 0x8e700104  lw          $s0, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bdc) {
            ctx->pc = 0x221C18u;
            goto label_221c18;
        }
    }
    ctx->pc = 0x221BE4u;
    // 0x221be4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x221BE4u;
    {
        const bool branch_taken_0x221be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x221BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221BE4u;
            // 0x221be8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221be4) {
            ctx->pc = 0x221C18u;
            goto label_221c18;
        }
    }
    ctx->pc = 0x221BECu;
    // 0x221bec: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x221becu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x221bf0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x221bf0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x221bf4: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221BF4u;
    {
        const bool branch_taken_0x221bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x221bf4) {
            ctx->pc = 0x221BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221BF4u;
            // 0x221bf8: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221C0Cu;
            goto label_221c0c;
        }
    }
    ctx->pc = 0x221BFCu;
    // 0x221bfc: 0x0  nop
    ctx->pc = 0x221bfcu;
    // NOP
label_221c00:
    // 0x221c00: 0xc04da64  jal         func_136990
    ctx->pc = 0x221C00u;
    SET_GPR_U32(ctx, 31, 0x221C08u);
    ctx->pc = 0x221C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221C00u;
            // 0x221c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C08u; }
        if (ctx->pc != 0x221C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C08u; }
        if (ctx->pc != 0x221C08u) { return; }
    }
    ctx->pc = 0x221C08u;
    // 0x221c08: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x221c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_221c0c:
    // 0x221c0c: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x221c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x221c10: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x221C10u;
    {
        const bool branch_taken_0x221c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221C10u;
            // 0x221c14: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c10) {
            ctx->pc = 0x221C94u;
            goto label_221c94;
        }
    }
    ctx->pc = 0x221C18u;
label_221c18:
    // 0x221c18: 0x82420030  lb          $v0, 0x30($s2)
    ctx->pc = 0x221c18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x221c1c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x221C1Cu;
    {
        const bool branch_taken_0x221c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221c1c) {
            ctx->pc = 0x221C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221C1Cu;
            // 0x221c20: 0x86630060  lh          $v1, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221C64u;
            goto label_221c64;
        }
    }
    ctx->pc = 0x221C24u;
    // 0x221c24: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x221C24u;
    {
        const bool branch_taken_0x221c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221C24u;
            // 0x221c28: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c24) {
            ctx->pc = 0x221C60u;
            goto label_221c60;
        }
    }
    ctx->pc = 0x221C2Cu;
    // 0x221c2c: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x221C2Cu;
    SET_GPR_U32(ctx, 31, 0x221C34u);
    ctx->pc = 0x221C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221C2Cu;
            // 0x221c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C34u; }
        if (ctx->pc != 0x221C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C34u; }
        if (ctx->pc != 0x221C34u) { return; }
    }
    ctx->pc = 0x221C34u;
    // 0x221c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x221c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c38: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x221C38u;
    SET_GPR_U32(ctx, 31, 0x221C40u);
    ctx->pc = 0x221C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221C38u;
            // 0x221c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C40u; }
        if (ctx->pc != 0x221C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C40u; }
        if (ctx->pc != 0x221C40u) { return; }
    }
    ctx->pc = 0x221C40u;
    // 0x221c40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x221c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c44: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x221c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x221c48: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x221c48u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x221c4c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x221c4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x221c50: 0x5045ffee  beql        $v0, $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x221C50u;
    {
        const bool branch_taken_0x221c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x221c50) {
            ctx->pc = 0x221C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221C50u;
            // 0x221c54: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221C0Cu;
            runtime->cooperativeGuestYield();
            goto label_221c0c;
        }
    }
    ctx->pc = 0x221C58u;
    // 0x221c58: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x221C58u;
    {
        const bool branch_taken_0x221c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221c58) {
            ctx->pc = 0x221C00u;
            runtime->cooperativeGuestYield();
            goto label_221c00;
        }
    }
    ctx->pc = 0x221C60u;
label_221c60:
    // 0x221c60: 0x86630060  lh          $v1, 0x60($s3)
    ctx->pc = 0x221c60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
label_221c64:
    // 0x221c64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x221c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221c68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x221C68u;
    {
        const bool branch_taken_0x221c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x221C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221C68u;
            // 0x221c6c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c68) {
            ctx->pc = 0x221C78u;
            goto label_221c78;
        }
    }
    ctx->pc = 0x221C70u;
    // 0x221c70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x221C70u;
    {
        const bool branch_taken_0x221c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221C70u;
            // 0x221c74: 0x26630020  addiu       $v1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c70) {
            ctx->pc = 0x221C94u;
            goto label_221c94;
        }
    }
    ctx->pc = 0x221C78u;
label_221c78:
    // 0x221c78: 0xde630068  ld          $v1, 0x68($s3)
    ctx->pc = 0x221c78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x221c7c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x221c7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x221c80: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221C80u;
    {
        const bool branch_taken_0x221c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x221C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221C80u;
            // 0x221c84: 0x26630070  addiu       $v1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c80) {
            ctx->pc = 0x221C94u;
            goto label_221c94;
        }
    }
    ctx->pc = 0x221C88u;
    // 0x221c88: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x221C88u;
    SET_GPR_U32(ctx, 31, 0x221C90u);
    ctx->pc = 0x221C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221C88u;
            // 0x221c8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C90u; }
        if (ctx->pc != 0x221C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C90u; }
        if (ctx->pc != 0x221C90u) { return; }
    }
    ctx->pc = 0x221C90u;
    // 0x221c90: 0x26630070  addiu       $v1, $s3, 0x70
    ctx->pc = 0x221c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_221c94:
    // 0x221c94: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x221c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221c98: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x221c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x221c9c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x221c9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x221ca0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x221ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x221ca4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x221ca4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x221ca8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x221ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x221cac: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x221cacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x221cb0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x221cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x221cb4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x221cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x221cb8: 0x2450e848  addiu       $s0, $v0, -0x17B8
    ctx->pc = 0x221cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x221cbc: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x221cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x221cc0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x221cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x221cc4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x221cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x221cc8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x221cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x221ccc: 0x40f809  jalr        $v0
    ctx->pc = 0x221CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x221CD4u);
        ctx->pc = 0x221CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221CCCu;
            // 0x221cd0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x221CD4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221BD8u: goto label_221bd8;
            case 0x221C00u: goto label_221c00;
            case 0x221C0Cu: goto label_221c0c;
            case 0x221C18u: goto label_221c18;
            case 0x221C60u: goto label_221c60;
            case 0x221C64u: goto label_221c64;
            case 0x221C78u: goto label_221c78;
            case 0x221C94u: goto label_221c94;
            case 0x221D08u: goto label_221d08;
            case 0x221D18u: goto label_221d18;
            case 0x221EF8u: goto label_221ef8;
            case 0x221F28u: goto label_221f28;
            case 0x221FC8u: goto label_221fc8;
            case 0x221FE8u: goto label_221fe8;
            case 0x222000u: goto label_222000;
            case 0x222010u: goto label_222010;
            case 0x222014u: goto label_222014;
            case 0x222018u: goto label_222018;
            case 0x222040u: goto label_222040;
            case 0x222058u: goto label_222058;
            case 0x222068u: goto label_222068;
            case 0x222070u: goto label_222070;
            case 0x2220B0u: goto label_2220b0;
            case 0x2220D0u: goto label_2220d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x221CD4u; }
            if (ctx->pc != 0x221CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x221CD4u;
    // 0x221cd4: 0x1054000c  beq         $v0, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x221CD4u;
    {
        const bool branch_taken_0x221cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x221CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221CD4u;
            // 0x221cd8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221cd4) {
            ctx->pc = 0x221D08u;
            goto label_221d08;
        }
    }
    ctx->pc = 0x221CDCu;
    // 0x221cdc: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x221cdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x221ce0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x221ce0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221ce4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x221ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x221ce8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x221ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x221cec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x221cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221cf0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x221cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x221cf4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x221cf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x221cf8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x221cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x221cfc: 0x40f809  jalr        $v0
    ctx->pc = 0x221CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x221D04u);
        ctx->pc = 0x221D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221CFCu;
            // 0x221d00: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x221D04u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221BD8u: goto label_221bd8;
            case 0x221C00u: goto label_221c00;
            case 0x221C0Cu: goto label_221c0c;
            case 0x221C18u: goto label_221c18;
            case 0x221C60u: goto label_221c60;
            case 0x221C64u: goto label_221c64;
            case 0x221C78u: goto label_221c78;
            case 0x221C94u: goto label_221c94;
            case 0x221D08u: goto label_221d08;
            case 0x221D18u: goto label_221d18;
            case 0x221EF8u: goto label_221ef8;
            case 0x221F28u: goto label_221f28;
            case 0x221FC8u: goto label_221fc8;
            case 0x221FE8u: goto label_221fe8;
            case 0x222000u: goto label_222000;
            case 0x222010u: goto label_222010;
            case 0x222014u: goto label_222014;
            case 0x222018u: goto label_222018;
            case 0x222040u: goto label_222040;
            case 0x222058u: goto label_222058;
            case 0x222068u: goto label_222068;
            case 0x222070u: goto label_222070;
            case 0x2220B0u: goto label_2220b0;
            case 0x2220D0u: goto label_2220d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x221D04u; }
            if (ctx->pc != 0x221D04u) { return; }
        }
        }
    }
    ctx->pc = 0x221D04u;
    // 0x221d04: 0x0  nop
    ctx->pc = 0x221d04u;
    // NOP
label_221d08:
    // 0x221d08: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x221d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x221d0c: 0x184000e8  blez        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x221D0Cu;
    {
        const bool branch_taken_0x221d0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x221D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221D0Cu;
            // 0x221d10: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d0c) {
            ctx->pc = 0x2220B0u;
            goto label_2220b0;
        }
    }
    ctx->pc = 0x221D14u;
    // 0x221d14: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x221d14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
label_221d18:
    // 0x221d18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x221d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x221d1c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x221d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x221d20: 0x2610b950  addiu       $s0, $s0, -0x46B0
    ctx->pc = 0x221d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949200));
    // 0x221d24: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x221d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x221d28: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x221d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x221d2c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x221d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x221d30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221d34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x221d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x221d38: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x221D38u;
    SET_GPR_U32(ctx, 31, 0x221D40u);
    ctx->pc = 0x221D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D38u;
            // 0x221d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D40u; }
        if (ctx->pc != 0x221D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D40u; }
        if (ctx->pc != 0x221D40u) { return; }
    }
    ctx->pc = 0x221D40u;
    // 0x221d40: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x221d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x221d44: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x221d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x221d48: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x221d48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x221d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d50: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x221D50u;
    SET_GPR_U32(ctx, 31, 0x221D58u);
    ctx->pc = 0x221D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D50u;
            // 0x221d54: 0x46000580  add.s       $f22, $f0, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D58u; }
        if (ctx->pc != 0x221D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D58u; }
        if (ctx->pc != 0x221D58u) { return; }
    }
    ctx->pc = 0x221D58u;
    // 0x221d58: 0x46150302  mul.s       $f12, $f0, $f21
    ctx->pc = 0x221d58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x221d5c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x221d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x221d60: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x221d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x221d64: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x221d64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x221d68: 0x460005c4  c1          0x5C4
    ctx->pc = 0x221d68u;
    ctx->f[23] = FPU_SQRT_S(ctx->f[0]);
    // 0x221d6c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x221D6Cu;
    SET_GPR_U32(ctx, 31, 0x221D74u);
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D74u; }
        if (ctx->pc != 0x221D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D74u; }
        if (ctx->pc != 0x221D74u) { return; }
    }
    ctx->pc = 0x221D74u;
    // 0x221d74: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x221d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221d78: 0x46170082  mul.s       $f2, $f0, $f23
    ctx->pc = 0x221d78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x221d7c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x221d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221d80: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x221d80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x221d84: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x221d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x221d88: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x221d88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x221d8c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x221d8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x221d90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x221d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d94: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x221d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x221d98: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x221d98u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x221d9c: 0x4406b000  mfc1        $a2, $f22
    ctx->pc = 0x221d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x221da0: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x221da0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x221da4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x221da4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x221da8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x221da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x221dac: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x221dacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x221db0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x221db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x221db4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x221db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x221db8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x221db8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x221dbc: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x221dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221dc0: 0xfba20150  sqc2        $vf2, 0x150($sp)
    ctx->pc = 0x221dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x221dc4: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x221DC4u;
    SET_GPR_U32(ctx, 31, 0x221DCCu);
    ctx->pc = 0x221DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221DC4u;
            // 0x221dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DCCu; }
        if (ctx->pc != 0x221DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DCCu; }
        if (ctx->pc != 0x221DCCu) { return; }
    }
    ctx->pc = 0x221DCCu;
    // 0x221dcc: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x221dccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x221dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dd4: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x221DD4u;
    SET_GPR_U32(ctx, 31, 0x221DDCu);
    ctx->pc = 0x221DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221DD4u;
            // 0x221dd8: 0x46000580  add.s       $f22, $f0, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DDCu; }
        if (ctx->pc != 0x221DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DDCu; }
        if (ctx->pc != 0x221DDCu) { return; }
    }
    ctx->pc = 0x221DDCu;
    // 0x221ddc: 0x46150302  mul.s       $f12, $f0, $f21
    ctx->pc = 0x221ddcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x221de0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x221de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x221de4: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x221de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x221de8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x221de8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x221dec: 0x461405c4  c1          0x1405C4
    ctx->pc = 0x221decu;
    ctx->f[23] = FPU_SQRT_S(ctx->f[0]);
    // 0x221df0: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x221DF0u;
    SET_GPR_U32(ctx, 31, 0x221DF8u);
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DF8u; }
        if (ctx->pc != 0x221DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DF8u; }
        if (ctx->pc != 0x221DF8u) { return; }
    }
    ctx->pc = 0x221DF8u;
    // 0x221df8: 0x46170082  mul.s       $f2, $f0, $f23
    ctx->pc = 0x221df8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x221dfc: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x221dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221e00: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x221e00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221e04: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x221e04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x221e08: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x221e08u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221e0c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x221e0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x221e10: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x221e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x221e14: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x221e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221e18: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x221e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221e1c: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x221e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x221e20: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x221e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x221e24: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x221e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x221e28: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x221e28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221e2c: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x221e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x221e30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x221e30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x221e34: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x221e34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x221e38: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x221e38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221e3c: 0x4be228a8  vadd.xyzw   $vf2, $vf5, $vf2
    ctx->pc = 0x221e3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221e40: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x221e40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221e44: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x221e44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x221e48: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x221e48u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x221e4c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x221e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221e50: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x221e50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221e54: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x221e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221e58: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x221e58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221e5c: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x221e5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x221e60: 0xfba30170  sqc2        $vf3, 0x170($sp)
    ctx->pc = 0x221e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x221e64: 0xc6a1002c  lwc1        $f1, 0x2C($s5)
    ctx->pc = 0x221e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221e68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x221e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221e6c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x221e6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221e70: 0x0  nop
    ctx->pc = 0x221e70u;
    // NOP
    // 0x221e74: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x221E74u;
    {
        const bool branch_taken_0x221e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221e74) {
            ctx->pc = 0x221E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221E74u;
            // 0x221e78: 0xc64c0024  lwc1        $f12, 0x24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x221F28u;
            goto label_221f28;
        }
    }
    ctx->pc = 0x221E7Cu;
    // 0x221e7c: 0x12c0001e  beqz        $s6, . + 4 + (0x1E << 2)
    ctx->pc = 0x221E7Cu;
    {
        const bool branch_taken_0x221e7c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221E7Cu;
            // 0x221e80: 0xdba20180  lqc2        $vf2, 0x180($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e7c) {
            ctx->pc = 0x221EF8u;
            goto label_221ef8;
        }
    }
    ctx->pc = 0x221E84u;
    // 0x221e84: 0xdac30050  lqc2        $vf3, 0x50($s6)
    ctx->pc = 0x221e84u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x221e88: 0x4be21868  vadd.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x221e88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221e8c: 0x4be5086c  vsub.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x221e8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221e90: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x221e90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221e94: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x221e94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221e98: 0xc6ac0028  lwc1        $f12, 0x28($s5)
    ctx->pc = 0x221e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221e9c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x221e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221ea0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x221ea0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x221ea4: 0x46196042  mul.s       $f1, $f12, $f25
    ctx->pc = 0x221ea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    // 0x221ea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x221ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221eac: 0x46000004  c1          0x4
    ctx->pc = 0x221eacu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x221eb0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x221eb0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x221eb4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x221eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x221eb8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x221eb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x221ebc: 0xdba100f0  lqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x221ebcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x221ec0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x221ec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221ec4: 0xdba20180  lqc2        $vf2, 0x180($sp)
    ctx->pc = 0x221ec4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x221ec8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x221ec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221ecc: 0xfba20180  sqc2        $vf2, 0x180($sp)
    ctx->pc = 0x221eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x221ed0: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x221ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x221ed4: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x221ed4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x221ed8: 0xdba10150  lqc2        $vf1, 0x150($sp)
    ctx->pc = 0x221ed8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x221edc: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x221edcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x221ee0: 0x4be11868  vadd.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x221ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221ee4: 0xc088600  jal         func_221800
    ctx->pc = 0x221EE4u;
    SET_GPR_U32(ctx, 31, 0x221EECu);
    ctx->pc = 0x221EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221EE4u;
            // 0x221ee8: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221800u;
    if (runtime->hasFunction(0x221800u)) {
        auto targetFn = runtime->lookupFunction(0x221800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221EECu; }
        if (ctx->pc != 0x221EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221800_0x221800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221EECu; }
        if (ctx->pc != 0x221EECu) { return; }
    }
    ctx->pc = 0x221EECu;
    // 0x221eec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x221EECu;
    {
        const bool branch_taken_0x221eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221EECu;
            // 0x221ef0: 0x700284a9  por         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221eec) {
            ctx->pc = 0x221FC8u;
            goto label_221fc8;
        }
    }
    ctx->pc = 0x221EF4u;
    // 0x221ef4: 0x0  nop
    ctx->pc = 0x221ef4u;
    // NOP
label_221ef8:
    // 0x221ef8: 0x4be2106a  vmul.xyzw   $vf1, $vf2, $vf2
    ctx->pc = 0x221ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221efc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x221efcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221f00: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x221f00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221f04: 0xdba10180  lqc2        $vf1, 0x180($sp)
    ctx->pc = 0x221f04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x221f08: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x221f08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x221f0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x221f0cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x221f10: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x221f10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221f14: 0x4a0002ff  vnop
    ctx->pc = 0x221f14u;
    // NOP operation, no action needed for VU0
    // 0x221f18: 0x4a0002ff  vnop
    ctx->pc = 0x221f18u;
    // NOP operation, no action needed for VU0
    // 0x221f1c: 0x48300800  qmfc2.ni    $s0, $vf1
    ctx->pc = 0x221f1cu;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221f20: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x221F20u;
    {
        const bool branch_taken_0x221f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221F20u;
            // 0x221f24: 0xfba10050  sqc2        $vf1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f20) {
            ctx->pc = 0x221FC8u;
            goto label_221fc8;
        }
    }
    ctx->pc = 0x221F28u;
label_221f28:
    // 0x221f28: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x221f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x221f2c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x221f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x221f30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x221f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221f34: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x221f34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x221f38: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x221f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x221f3c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x221f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x221f40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221f44: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x221f44u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x221f48: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x221F48u;
    SET_GPR_U32(ctx, 31, 0x221F50u);
    ctx->pc = 0x221F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221F48u;
            // 0x221f4c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F50u; }
        if (ctx->pc != 0x221F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F50u; }
        if (ctx->pc != 0x221F50u) { return; }
    }
    ctx->pc = 0x221F50u;
    // 0x221f50: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x221f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221f54: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x221f54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221f58: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x221f58u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x221f5c: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x221f5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221f60: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x221f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221f64: 0xdba30160  lqc2        $vf3, 0x160($sp)
    ctx->pc = 0x221f64u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x221f68: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x221f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221f6c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x221f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221f70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x221f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x221f74: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x221f74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x221f78: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x221f78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221f7c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x221f7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221f80: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x221f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221f84: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x221f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x221f88: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x221f88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x221f8c: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x221f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221f90: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x221f90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221f94: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x221f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x221f98: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x221f98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221f9c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x221f9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221fa0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x221fa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x221fa4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x221fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221fa8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x221fa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x221fac: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x221facu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x221fb0: 0x4a0003bf  vwaitq
    ctx->pc = 0x221fb0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x221fb4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x221fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x221fb8: 0x4a0002ff  vnop
    ctx->pc = 0x221fb8u;
    // NOP operation, no action needed for VU0
    // 0x221fbc: 0x4a0002ff  vnop
    ctx->pc = 0x221fbcu;
    // NOP operation, no action needed for VU0
    // 0x221fc0: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x221fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x221fc4: 0x48301000  qmfc2.ni    $s0, $vf2
    ctx->pc = 0x221fc4u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[2]));
label_221fc8:
    // 0x221fc8: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x221FC8u;
    {
        const bool branch_taken_0x221fc8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221FC8u;
            // 0x221fcc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fc8) {
            ctx->pc = 0x222018u;
            goto label_222018;
        }
    }
    ctx->pc = 0x221FD0u;
    // 0x221fd0: 0x8ec300fc  lw          $v1, 0xFC($s6)
    ctx->pc = 0x221fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 252)));
    // 0x221fd4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x221FD4u;
    {
        const bool branch_taken_0x221fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221FD4u;
            // 0x221fd8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fd4) {
            ctx->pc = 0x222010u;
            goto label_222010;
        }
    }
    ctx->pc = 0x221FDCu;
    // 0x221fdc: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x221fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x221fe0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x221FE0u;
    {
        const bool branch_taken_0x221fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221FE0u;
            // 0x221fe4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fe0) {
            ctx->pc = 0x222000u;
            goto label_222000;
        }
    }
    ctx->pc = 0x221FE8u;
label_221fe8:
    // 0x221fe8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x221fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x221fec: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x221fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x221ff0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x221FF0u;
    {
        const bool branch_taken_0x221ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221FF0u;
            // 0x221ff4: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ff0) {
            ctx->pc = 0x222014u;
            goto label_222014;
        }
    }
    ctx->pc = 0x221FF8u;
    // 0x221ff8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x221ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x221ffc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x221ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_222000:
    // 0x222000: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x222000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x222004: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x222004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x222008: 0x5443fff7  bnel        $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x222008u;
    {
        const bool branch_taken_0x222008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x222008) {
            ctx->pc = 0x22200Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222008u;
            // 0x22200c: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221FE8u;
            runtime->cooperativeGuestYield();
            goto label_221fe8;
        }
    }
    ctx->pc = 0x222010u;
label_222010:
    // 0x222010: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x222010u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222014:
    // 0x222014: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x222014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_222018:
    // 0x222018: 0xc088598  jal         func_221660
    ctx->pc = 0x222018u;
    SET_GPR_U32(ctx, 31, 0x222020u);
    ctx->pc = 0x22201Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222018u;
            // 0x22201c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221660u;
    if (runtime->hasFunction(0x221660u)) {
        auto targetFn = runtime->lookupFunction(0x221660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222020u; }
        if (ctx->pc != 0x222020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221660_0x221660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222020u; }
        if (ctx->pc != 0x222020u) { return; }
    }
    ctx->pc = 0x222020u;
    // 0x222020: 0x8e6300fc  lw          $v1, 0xFC($s3)
    ctx->pc = 0x222020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x222024: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x222024u;
    {
        const bool branch_taken_0x222024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222024u;
            // 0x222028: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222024) {
            ctx->pc = 0x222068u;
            goto label_222068;
        }
    }
    ctx->pc = 0x22202Cu;
    // 0x22202c: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x22202cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x222030: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x222030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x222034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x222034u;
    {
        const bool branch_taken_0x222034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222034u;
            // 0x222038: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222034) {
            ctx->pc = 0x222058u;
            goto label_222058;
        }
    }
    ctx->pc = 0x22203Cu;
    // 0x22203c: 0x0  nop
    ctx->pc = 0x22203cu;
    // NOP
label_222040:
    // 0x222040: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x222040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x222044: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x222044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x222048: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x222048u;
    {
        const bool branch_taken_0x222048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22204Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222048u;
            // 0x22204c: 0xdba10180  lqc2        $vf1, 0x180($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222048) {
            ctx->pc = 0x222070u;
            goto label_222070;
        }
    }
    ctx->pc = 0x222050u;
    // 0x222050: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x222050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222054: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x222054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_222058:
    // 0x222058: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x222058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x22205c: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x22205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x222060: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x222060u;
    {
        const bool branch_taken_0x222060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x222064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222060u;
            // 0x222064: 0x8fa30084  lw          $v1, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222060) {
            ctx->pc = 0x222040u;
            runtime->cooperativeGuestYield();
            goto label_222040;
        }
    }
    ctx->pc = 0x222068u;
label_222068:
    // 0x222068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22206c: 0xdba10180  lqc2        $vf1, 0x180($sp)
    ctx->pc = 0x22206cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_222070:
    // 0x222070: 0x701044a9  por         $t0, $zero, $s0
    ctx->pc = 0x222070u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x222074: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x222074u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x222078: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x222078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22207c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x22207cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222080: 0x7ba70170  lq          $a3, 0x170($sp)
    ctx->pc = 0x222080u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x222084: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x222084u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x222088: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x222088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22208c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x22208cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x222090: 0xc0889a0  jal         func_222680
    ctx->pc = 0x222090u;
    SET_GPR_U32(ctx, 31, 0x222098u);
    ctx->pc = 0x222094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222090u;
            // 0x222094: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222680u;
    if (runtime->hasFunction(0x222680u)) {
        auto targetFn = runtime->lookupFunction(0x222680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222098u; }
        if (ctx->pc != 0x222098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222680_0x222680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222098u; }
        if (ctx->pc != 0x222098u) { return; }
    }
    ctx->pc = 0x222098u;
    // 0x222098: 0xc089192  jal         func_224648
    ctx->pc = 0x222098u;
    SET_GPR_U32(ctx, 31, 0x2220A0u);
    ctx->pc = 0x22209Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222098u;
            // 0x22209c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224648u;
    if (runtime->hasFunction(0x224648u)) {
        auto targetFn = runtime->lookupFunction(0x224648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2220A0u; }
        if (ctx->pc != 0x2220A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224648_0x224648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2220A0u; }
        if (ctx->pc != 0x2220A0u) { return; }
    }
    ctx->pc = 0x2220A0u;
    // 0x2220a0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2220a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2220a4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2220a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2220a8: 0x1440ff1b  bnez        $v0, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x2220A8u;
    {
        const bool branch_taken_0x2220a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2220ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2220A8u;
            // 0x2220ac: 0x3c10002d  lui         $s0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220a8) {
            ctx->pc = 0x221D18u;
            runtime->cooperativeGuestYield();
            goto label_221d18;
        }
    }
    ctx->pc = 0x2220B0u;
label_2220b0:
    // 0x2220b0: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2220B0u;
    {
        const bool branch_taken_0x2220b0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2220B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2220B0u;
            // 0x2220b4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220b0) {
            ctx->pc = 0x2220D0u;
            goto label_2220d0;
        }
    }
    ctx->pc = 0x2220B8u;
    // 0x2220b8: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x2220b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x2220bc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2220bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2220c0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2220c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2220c4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2220c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2220c8: 0x40f809  jalr        $v0
    ctx->pc = 0x2220C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2220D0u);
        ctx->pc = 0x2220CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2220C8u;
            // 0x2220cc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2220D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221BD8u: goto label_221bd8;
            case 0x221C00u: goto label_221c00;
            case 0x221C0Cu: goto label_221c0c;
            case 0x221C18u: goto label_221c18;
            case 0x221C60u: goto label_221c60;
            case 0x221C64u: goto label_221c64;
            case 0x221C78u: goto label_221c78;
            case 0x221C94u: goto label_221c94;
            case 0x221D08u: goto label_221d08;
            case 0x221D18u: goto label_221d18;
            case 0x221EF8u: goto label_221ef8;
            case 0x221F28u: goto label_221f28;
            case 0x221FC8u: goto label_221fc8;
            case 0x221FE8u: goto label_221fe8;
            case 0x222000u: goto label_222000;
            case 0x222010u: goto label_222010;
            case 0x222014u: goto label_222014;
            case 0x222018u: goto label_222018;
            case 0x222040u: goto label_222040;
            case 0x222058u: goto label_222058;
            case 0x222068u: goto label_222068;
            case 0x222070u: goto label_222070;
            case 0x2220B0u: goto label_2220b0;
            case 0x2220D0u: goto label_2220d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2220D0u; }
            if (ctx->pc != 0x2220D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2220D0u;
label_2220d0:
    // 0x2220d0: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x2220d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2220d4: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x2220d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2220d8: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x2220d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2220dc: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x2220dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2220e0: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x2220e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2220e4: 0x7bb501c0  lq          $s5, 0x1C0($sp)
    ctx->pc = 0x2220e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2220e8: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x2220e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2220ec: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x2220ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2220f0: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x2220f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2220f4: 0xc7ba0250  lwc1        $f26, 0x250($sp)
    ctx->pc = 0x2220f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2220f8: 0xc7b90248  lwc1        $f25, 0x248($sp)
    ctx->pc = 0x2220f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2220fc: 0xc7b80240  lwc1        $f24, 0x240($sp)
    ctx->pc = 0x2220fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x222100: 0xc7b70238  lwc1        $f23, 0x238($sp)
    ctx->pc = 0x222100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x222104: 0xc7b60230  lwc1        $f22, 0x230($sp)
    ctx->pc = 0x222104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x222108: 0xc7b50228  lwc1        $f21, 0x228($sp)
    ctx->pc = 0x222108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22210c: 0xc7b40220  lwc1        $f20, 0x220($sp)
    ctx->pc = 0x22210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222110: 0x3e00008  jr          $ra
    ctx->pc = 0x222110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222110u;
            // 0x222114: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221BD8u: goto label_221bd8;
            case 0x221C00u: goto label_221c00;
            case 0x221C0Cu: goto label_221c0c;
            case 0x221C18u: goto label_221c18;
            case 0x221C60u: goto label_221c60;
            case 0x221C64u: goto label_221c64;
            case 0x221C78u: goto label_221c78;
            case 0x221C94u: goto label_221c94;
            case 0x221D08u: goto label_221d08;
            case 0x221D18u: goto label_221d18;
            case 0x221EF8u: goto label_221ef8;
            case 0x221F28u: goto label_221f28;
            case 0x221FC8u: goto label_221fc8;
            case 0x221FE8u: goto label_221fe8;
            case 0x222000u: goto label_222000;
            case 0x222010u: goto label_222010;
            case 0x222014u: goto label_222014;
            case 0x222018u: goto label_222018;
            case 0x222040u: goto label_222040;
            case 0x222058u: goto label_222058;
            case 0x222068u: goto label_222068;
            case 0x222070u: goto label_222070;
            case 0x2220B0u: goto label_2220b0;
            case 0x2220D0u: goto label_2220d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222118u;
}
