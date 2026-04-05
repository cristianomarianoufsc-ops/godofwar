#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224D10
// Address: 0x224d10 - 0x225270
void sub_00224D10_0x224d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224D10_0x224d10");
#endif

    ctx->pc = 0x224d10u;

    // 0x224d10: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x224d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x224d14: 0x7fb10210  sq          $s1, 0x210($sp)
    ctx->pc = 0x224d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 17));
    // 0x224d18: 0x7fb20200  sq          $s2, 0x200($sp)
    ctx->pc = 0x224d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 18));
    // 0x224d1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x224d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d20: 0x7fb401e0  sq          $s4, 0x1E0($sp)
    ctx->pc = 0x224d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 20));
    // 0x224d24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x224d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d28: 0x7fb00220  sq          $s0, 0x220($sp)
    ctx->pc = 0x224d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 16));
    // 0x224d2c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x224d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d30: 0x7fb301f0  sq          $s3, 0x1F0($sp)
    ctx->pc = 0x224d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 19));
    // 0x224d34: 0x7fb501d0  sq          $s5, 0x1D0($sp)
    ctx->pc = 0x224d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 21));
    // 0x224d38: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x224d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x224d3c: 0xe7b90258  swc1        $f25, 0x258($sp)
    ctx->pc = 0x224d3cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x224d40: 0xe7b80250  swc1        $f24, 0x250($sp)
    ctx->pc = 0x224d40u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x224d44: 0xe7b70248  swc1        $f23, 0x248($sp)
    ctx->pc = 0x224d44u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x224d48: 0xe7b60240  swc1        $f22, 0x240($sp)
    ctx->pc = 0x224d48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x224d4c: 0xe7b50238  swc1        $f21, 0x238($sp)
    ctx->pc = 0x224d4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x224d50: 0xe7b40230  swc1        $f20, 0x230($sp)
    ctx->pc = 0x224d50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x224d54: 0x7fa60190  sq          $a2, 0x190($sp)
    ctx->pc = 0x224d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 6));
    // 0x224d58: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
    ctx->pc = 0x224D58u;
    {
        const bool branch_taken_0x224d58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224D58u;
            // 0x224d5c: 0x7fa701a0  sq          $a3, 0x1A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d58) {
            ctx->pc = 0x224E74u;
            goto label_224e74;
        }
    }
    ctx->pc = 0x224D60u;
    // 0x224d60: 0x8e300104  lw          $s0, 0x104($s1)
    ctx->pc = 0x224d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x224d64: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x224D64u;
    {
        const bool branch_taken_0x224d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224D64u;
            // 0x224d68: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d64) {
            ctx->pc = 0x224E78u;
            goto label_224e78;
        }
    }
    ctx->pc = 0x224D6Cu;
    // 0x224d6c: 0x82420024  lb          $v0, 0x24($s2)
    ctx->pc = 0x224d6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x224d70: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x224D70u;
    {
        const bool branch_taken_0x224d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224D70u;
            // 0x224d74: 0x26440024  addiu       $a0, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d70) {
            ctx->pc = 0x224DECu;
            goto label_224dec;
        }
    }
    ctx->pc = 0x224D78u;
    // 0x224d78: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x224D78u;
    SET_GPR_U32(ctx, 31, 0x224D80u);
    ctx->pc = 0x224D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224D78u;
            // 0x224d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D80u; }
        if (ctx->pc != 0x224D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D80u; }
        if (ctx->pc != 0x224D80u) { return; }
    }
    ctx->pc = 0x224D80u;
    // 0x224d80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x224d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d84: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x224D84u;
    SET_GPR_U32(ctx, 31, 0x224D8Cu);
    ctx->pc = 0x224D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224D84u;
            // 0x224d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D8Cu; }
        if (ctx->pc != 0x224D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D8Cu; }
        if (ctx->pc != 0x224D8Cu) { return; }
    }
    ctx->pc = 0x224D8Cu;
    // 0x224d8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x224d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d90: 0x4c00016  bltz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x224D90u;
    {
        const bool branch_taken_0x224d90 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x224D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224D90u;
            // 0x224d94: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d90) {
            ctx->pc = 0x224DECu;
            goto label_224dec;
        }
    }
    ctx->pc = 0x224D98u;
    // 0x224d98: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x224d98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x224d9c: 0xdc42bdf8  ld          $v0, -0x4208($v0)
    ctx->pc = 0x224d9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x224da0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224DA0u;
    {
        const bool branch_taken_0x224da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224DA0u;
            // 0x224da4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224da0) {
            ctx->pc = 0x224DB8u;
            goto label_224db8;
        }
    }
    ctx->pc = 0x224DA8u;
    // 0x224da8: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x224DA8u;
    SET_GPR_U32(ctx, 31, 0x224DB0u);
    ctx->pc = 0x224DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224DA8u;
            // 0x224dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DB0u; }
        if (ctx->pc != 0x224DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DB0u; }
        if (ctx->pc != 0x224DB0u) { return; }
    }
    ctx->pc = 0x224DB0u;
    // 0x224db0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x224DB0u;
    {
        const bool branch_taken_0x224db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224DB0u;
            // 0x224db4: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224db0) {
            ctx->pc = 0x224DE8u;
            goto label_224de8;
        }
    }
    ctx->pc = 0x224DB8u;
label_224db8:
    // 0x224db8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x224db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x224dbc: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x224dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x224dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224dc4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x224dc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224dc8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x224dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x224dcc: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x224dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x224dd0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x224dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x224dd4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x224dd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x224dd8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x224dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x224ddc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x224ddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x224de0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x224de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x224de4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x224de4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_224de8:
    // 0x224de8: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x224de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
label_224dec:
    // 0x224dec: 0x8242003c  lb          $v0, 0x3C($s2)
    ctx->pc = 0x224decu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x224df0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x224DF0u;
    {
        const bool branch_taken_0x224df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224DF0u;
            // 0x224df4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224df0) {
            ctx->pc = 0x224E78u;
            goto label_224e78;
        }
    }
    ctx->pc = 0x224DF8u;
    // 0x224df8: 0x2644003c  addiu       $a0, $s2, 0x3C
    ctx->pc = 0x224df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x224dfc: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x224DFCu;
    SET_GPR_U32(ctx, 31, 0x224E04u);
    ctx->pc = 0x224E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224DFCu;
            // 0x224e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E04u; }
        if (ctx->pc != 0x224E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E04u; }
        if (ctx->pc != 0x224E04u) { return; }
    }
    ctx->pc = 0x224E04u;
    // 0x224e04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x224e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e08: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x224E08u;
    SET_GPR_U32(ctx, 31, 0x224E10u);
    ctx->pc = 0x224E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224E08u;
            // 0x224e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E10u; }
        if (ctx->pc != 0x224E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E10u; }
        if (ctx->pc != 0x224E10u) { return; }
    }
    ctx->pc = 0x224E10u;
    // 0x224e10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x224e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e14: 0x4c00017  bltz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x224E14u;
    {
        const bool branch_taken_0x224e14 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x224E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224E14u;
            // 0x224e18: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e14) {
            ctx->pc = 0x224E74u;
            goto label_224e74;
        }
    }
    ctx->pc = 0x224E1Cu;
    // 0x224e1c: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x224e1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x224e20: 0xdc42bdf8  ld          $v0, -0x4208($v0)
    ctx->pc = 0x224e20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x224e24: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x224E24u;
    {
        const bool branch_taken_0x224e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224E24u;
            // 0x224e28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e24) {
            ctx->pc = 0x224E40u;
            goto label_224e40;
        }
    }
    ctx->pc = 0x224E2Cu;
    // 0x224e2c: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x224E2Cu;
    SET_GPR_U32(ctx, 31, 0x224E34u);
    ctx->pc = 0x224E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224E2Cu;
            // 0x224e30: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E34u; }
        if (ctx->pc != 0x224E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E34u; }
        if (ctx->pc != 0x224E34u) { return; }
    }
    ctx->pc = 0x224E34u;
    // 0x224e34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x224E34u;
    {
        const bool branch_taken_0x224e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224E34u;
            // 0x224e38: 0x7ba30070  lq          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e34) {
            ctx->pc = 0x224E70u;
            goto label_224e70;
        }
    }
    ctx->pc = 0x224E3Cu;
    // 0x224e3c: 0x0  nop
    ctx->pc = 0x224e3cu;
    // NOP
label_224e40:
    // 0x224e40: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x224e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x224e44: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x224e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x224e48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224e4c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x224e4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224e50: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x224e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x224e54: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x224e54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x224e58: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x224e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x224e5c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x224e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x224e60: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x224e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x224e64: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x224e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x224e68: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x224e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x224e6c: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x224e6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_224e70:
    // 0x224e70: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x224e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
label_224e74:
    // 0x224e74: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x224e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_224e78:
    // 0x224e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e7c: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x224e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x224e80: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x224e80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e84: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x224e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x224e88: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x224e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x224e8c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x224e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x224e90: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x224e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x224e94: 0x40f809  jalr        $v0
    ctx->pc = 0x224E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224E9Cu);
        ctx->pc = 0x224E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224E94u;
            // 0x224e98: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224E9Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224DB8u: goto label_224db8;
            case 0x224DE8u: goto label_224de8;
            case 0x224DECu: goto label_224dec;
            case 0x224E40u: goto label_224e40;
            case 0x224E70u: goto label_224e70;
            case 0x224E74u: goto label_224e74;
            case 0x224E78u: goto label_224e78;
            case 0x224EE8u: goto label_224ee8;
            case 0x224F34u: goto label_224f34;
            case 0x224FD0u: goto label_224fd0;
            case 0x224FFCu: goto label_224ffc;
            case 0x225014u: goto label_225014;
            case 0x22501Cu: goto label_22501c;
            case 0x225024u: goto label_225024;
            case 0x225028u: goto label_225028;
            case 0x225070u: goto label_225070;
            case 0x2250A8u: goto label_2250a8;
            case 0x225200u: goto label_225200;
            case 0x22520Cu: goto label_22520c;
            case 0x225230u: goto label_225230;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224E9Cu; }
            if (ctx->pc != 0x224E9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x224E9Cu;
    // 0x224e9c: 0x8c500088  lw          $s0, 0x88($v0)
    ctx->pc = 0x224e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x224ea0: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x224ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x224ea4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x224ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x224ea8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x224ea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x224eac: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x224eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x224eb0: 0x40f809  jalr        $v0
    ctx->pc = 0x224EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224EB8u);
        ctx->pc = 0x224EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224EB0u;
            // 0x224eb4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224EB8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224DB8u: goto label_224db8;
            case 0x224DE8u: goto label_224de8;
            case 0x224DECu: goto label_224dec;
            case 0x224E40u: goto label_224e40;
            case 0x224E70u: goto label_224e70;
            case 0x224E74u: goto label_224e74;
            case 0x224E78u: goto label_224e78;
            case 0x224EE8u: goto label_224ee8;
            case 0x224F34u: goto label_224f34;
            case 0x224FD0u: goto label_224fd0;
            case 0x224FFCu: goto label_224ffc;
            case 0x225014u: goto label_225014;
            case 0x22501Cu: goto label_22501c;
            case 0x225024u: goto label_225024;
            case 0x225028u: goto label_225028;
            case 0x225070u: goto label_225070;
            case 0x2250A8u: goto label_2250a8;
            case 0x225200u: goto label_225200;
            case 0x22520Cu: goto label_22520c;
            case 0x225230u: goto label_225230;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224EB8u; }
            if (ctx->pc != 0x224EB8u) { return; }
        }
        }
    }
    ctx->pc = 0x224EB8u;
    // 0x224eb8: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x224EB8u;
    {
        const bool branch_taken_0x224eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x224EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224EB8u;
            // 0x224ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224eb8) {
            ctx->pc = 0x224EE8u;
            goto label_224ee8;
        }
    }
    ctx->pc = 0x224EC0u;
    // 0x224ec0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x224ec0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x224ec4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x224ec4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224ec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x224ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x224ecc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x224eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x224ed0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x224ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224ed4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x224ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x224ed8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x224ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x224edc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x224edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x224ee0: 0x40f809  jalr        $v0
    ctx->pc = 0x224EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224EE8u);
        ctx->pc = 0x224EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224EE0u;
            // 0x224ee4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224EE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224DB8u: goto label_224db8;
            case 0x224DE8u: goto label_224de8;
            case 0x224DECu: goto label_224dec;
            case 0x224E40u: goto label_224e40;
            case 0x224E70u: goto label_224e70;
            case 0x224E74u: goto label_224e74;
            case 0x224E78u: goto label_224e78;
            case 0x224EE8u: goto label_224ee8;
            case 0x224F34u: goto label_224f34;
            case 0x224FD0u: goto label_224fd0;
            case 0x224FFCu: goto label_224ffc;
            case 0x225014u: goto label_225014;
            case 0x22501Cu: goto label_22501c;
            case 0x225024u: goto label_225024;
            case 0x225028u: goto label_225028;
            case 0x225070u: goto label_225070;
            case 0x2250A8u: goto label_2250a8;
            case 0x225200u: goto label_225200;
            case 0x22520Cu: goto label_22520c;
            case 0x225230u: goto label_225230;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224EE8u; }
            if (ctx->pc != 0x224EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x224EE8u;
label_224ee8:
    // 0x224ee8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x224ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x224eec: 0xc6410074  lwc1        $f1, 0x74($s2)
    ctx->pc = 0x224eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224ef0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x224ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x224ef4: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x224ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x224ef8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x224ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224efc: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x224efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224f00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224f04: 0x0  nop
    ctx->pc = 0x224f04u;
    // NOP
    // 0x224f08: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x224F08u;
    {
        const bool branch_taken_0x224f08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x224F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224F08u;
            // 0x224f0c: 0x26510078  addiu       $s1, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f08) {
            ctx->pc = 0x224F34u;
            goto label_224f34;
        }
    }
    ctx->pc = 0x224F10u;
    // 0x224f10: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x224f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x224f14: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x224f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224f18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x224f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x224f1c: 0xc4402d1c  lwc1        $f0, 0x2D1C($v0)
    ctx->pc = 0x224f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224f20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224f24: 0x0  nop
    ctx->pc = 0x224f24u;
    // NOP
    // 0x224f28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x224F28u;
    {
        const bool branch_taken_0x224f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224F28u;
            // 0x224f2c: 0x2651005c  addiu       $s1, $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f28) {
            ctx->pc = 0x224F34u;
            goto label_224f34;
        }
    }
    ctx->pc = 0x224F30u;
    // 0x224f30: 0x26510094  addiu       $s1, $s2, 0x94
    ctx->pc = 0x224f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
label_224f34:
    // 0x224f34: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x224f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x224f38: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x224f38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x224f3c: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x224f3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x224f40: 0xc089326  jal         func_224C98
    ctx->pc = 0x224F40u;
    SET_GPR_U32(ctx, 31, 0x224F48u);
    ctx->pc = 0x224F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224F40u;
            // 0x224f44: 0x86250006  lh          $a1, 0x6($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224C98u;
    if (runtime->hasFunction(0x224C98u)) {
        auto targetFn = runtime->lookupFunction(0x224C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F48u; }
        if (ctx->pc != 0x224F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224C98_0x224c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F48u; }
        if (ctx->pc != 0x224F48u) { return; }
    }
    ctx->pc = 0x224F48u;
    // 0x224f48: 0xa7a20080  sh          $v0, 0x80($sp)
    ctx->pc = 0x224f48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x224f4c: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x224f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x224f50: 0x8624000c  lh          $a0, 0xC($s1)
    ctx->pc = 0x224f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x224f54: 0xc089326  jal         func_224C98
    ctx->pc = 0x224F54u;
    SET_GPR_U32(ctx, 31, 0x224F5Cu);
    ctx->pc = 0x224F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224F54u;
            // 0x224f58: 0x8625000e  lh          $a1, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224C98u;
    if (runtime->hasFunction(0x224C98u)) {
        auto targetFn = runtime->lookupFunction(0x224C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F5Cu; }
        if (ctx->pc != 0x224F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224C98_0x224c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F5Cu; }
        if (ctx->pc != 0x224F5Cu) { return; }
    }
    ctx->pc = 0x224F5Cu;
    // 0x224f5c: 0xa7a20082  sh          $v0, 0x82($sp)
    ctx->pc = 0x224f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x224f60: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x224f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x224f64: 0x86250016  lh          $a1, 0x16($s1)
    ctx->pc = 0x224f64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x224f68: 0xc089326  jal         func_224C98
    ctx->pc = 0x224F68u;
    SET_GPR_U32(ctx, 31, 0x224F70u);
    ctx->pc = 0x224F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224F68u;
            // 0x224f6c: 0x86240014  lh          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224C98u;
    if (runtime->hasFunction(0x224C98u)) {
        auto targetFn = runtime->lookupFunction(0x224C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F70u; }
        if (ctx->pc != 0x224F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224C98_0x224c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F70u; }
        if (ctx->pc != 0x224F70u) { return; }
    }
    ctx->pc = 0x224F70u;
    // 0x224f70: 0xa7a20084  sh          $v0, 0x84($sp)
    ctx->pc = 0x224f70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x224f74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x224f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224f78: 0x8e04119c  lw          $a0, 0x119C($s0)
    ctx->pc = 0x224f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4508)));
    // 0x224f7c: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x224F7Cu;
    SET_GPR_U32(ctx, 31, 0x224F84u);
    ctx->pc = 0x224F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224F7Cu;
            // 0x224f80: 0x8e450018  lw          $a1, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F84u; }
        if (ctx->pc != 0x224F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F84u; }
        if (ctx->pc != 0x224F84u) { return; }
    }
    ctx->pc = 0x224F84u;
    // 0x224f84: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x224f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x224f88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x224f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224f8c: 0x8e04119c  lw          $a0, 0x119C($s0)
    ctx->pc = 0x224f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4508)));
    // 0x224f90: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x224F90u;
    SET_GPR_U32(ctx, 31, 0x224F98u);
    ctx->pc = 0x224F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224F90u;
            // 0x224f94: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F98u; }
        if (ctx->pc != 0x224F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F98u; }
        if (ctx->pc != 0x224F98u) { return; }
    }
    ctx->pc = 0x224F98u;
    // 0x224f98: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x224f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x224f9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x224f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224fa0: 0x8e04119c  lw          $a0, 0x119C($s0)
    ctx->pc = 0x224fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4508)));
    // 0x224fa4: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x224FA4u;
    SET_GPR_U32(ctx, 31, 0x224FACu);
    ctx->pc = 0x224FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224FA4u;
            // 0x224fa8: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224FACu; }
        if (ctx->pc != 0x224FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224FACu; }
        if (ctx->pc != 0x224FACu) { return; }
    }
    ctx->pc = 0x224FACu;
    // 0x224fac: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x224facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x224fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fb4: 0x6ba400a7  ldl         $a0, 0xA7($sp)
    ctx->pc = 0x224fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x224fb8: 0x6fa400a0  ldr         $a0, 0xA0($sp)
    ctx->pc = 0x224fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x224fbc: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x224fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x224fc0: 0xb3a40097  sdl         $a0, 0x97($sp)
    ctx->pc = 0x224fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224fc4: 0xb7a40090  sdr         $a0, 0x90($sp)
    ctx->pc = 0x224fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224fc8: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x224fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x224fcc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x224fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_224fd0:
    // 0x224fd0: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x224fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x224fd4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x224fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x224fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224fdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x224fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224fe0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x224fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x224fe4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x224FE4u;
    {
        const bool branch_taken_0x224fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x224FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224FE4u;
            // 0x224fe8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fe4) {
            ctx->pc = 0x224FFCu;
            goto label_224ffc;
        }
    }
    ctx->pc = 0x224FECu;
    // 0x224fec: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x224FECu;
    {
        const bool branch_taken_0x224fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x224fec) {
            ctx->pc = 0x225014u;
            goto label_225014;
        }
    }
    ctx->pc = 0x224FF4u;
    // 0x224ff4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x224FF4u;
    {
        const bool branch_taken_0x224ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224FF4u;
            // 0x224ff8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ff4) {
            ctx->pc = 0x225028u;
            goto label_225028;
        }
    }
    ctx->pc = 0x224FFCu;
label_224ffc:
    // 0x224ffc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x224ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x225000: 0x90422d37  lbu         $v0, 0x2D37($v0)
    ctx->pc = 0x225000u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11575)));
    // 0x225004: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x225004u;
    {
        const bool branch_taken_0x225004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225004) {
            ctx->pc = 0x225008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225004u;
            // 0x225008: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x225028u;
            goto label_225028;
        }
    }
    ctx->pc = 0x22500Cu;
    // 0x22500c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22500Cu;
    {
        const bool branch_taken_0x22500c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22500Cu;
            // 0x225010: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22500c) {
            ctx->pc = 0x22501Cu;
            goto label_22501c;
        }
    }
    ctx->pc = 0x225014u;
label_225014:
    // 0x225014: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x225014u;
    {
        const bool branch_taken_0x225014 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x225018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225014u;
            // 0x225018: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225014) {
            ctx->pc = 0x225024u;
            goto label_225024;
        }
    }
    ctx->pc = 0x22501Cu;
label_22501c:
    // 0x22501c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x22501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x225020: 0xa4400080  sh          $zero, 0x80($v0)
    ctx->pc = 0x225020u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 0));
label_225024:
    // 0x225024: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x225024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_225028:
    // 0x225028: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x225028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22502c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x22502Cu;
    {
        const bool branch_taken_0x22502c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22502Cu;
            // 0x225030: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22502c) {
            ctx->pc = 0x224FD0u;
            runtime->cooperativeGuestYield();
            goto label_224fd0;
        }
    }
    ctx->pc = 0x225034u;
    // 0x225034: 0x87a30082  lh          $v1, 0x82($sp)
    ctx->pc = 0x225034u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 130)));
    // 0x225038: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x225038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22503c: 0x87a40084  lh          $a0, 0x84($sp)
    ctx->pc = 0x22503cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x225040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225044: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x225044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x225048: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x225048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22504c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x22504cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x225050: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225050u;
    {
        const bool branch_taken_0x225050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225050u;
            // 0x225054: 0x4600c646  mov.s       $f25, $f24 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225050) {
            ctx->pc = 0x225070u;
            goto label_225070;
        }
    }
    ctx->pc = 0x225058u;
    // 0x225058: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22505c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x22505cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x225060: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x225060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x225064: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225068: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22506c: 0x46000e43  div.s       $f25, $f1, $f0
    ctx->pc = 0x22506cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[25] = ctx->f[1] / ctx->f[0];
label_225070:
    // 0x225070: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x225070u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x225074: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x225074u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x225078: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x225078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x22507c: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x22507cu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x225080: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x225080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x225084: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x225084u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x225088: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x225088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22508c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x22508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x225090: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x225090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x225094: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x225094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x225098: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x225098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22509c: 0x1860005b  blez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x22509Cu;
    {
        const bool branch_taken_0x22509c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2250A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22509Cu;
            // 0x2250a0: 0xfba40120  sqc2        $vf4, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22509c) {
            ctx->pc = 0x22520Cu;
            goto label_22520c;
        }
    }
    ctx->pc = 0x2250A4u;
    // 0x2250a4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2250a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2250a8:
    // 0x2250a8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x2250a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x2250ac: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x2250ACu;
    SET_GPR_U32(ctx, 31, 0x2250B4u);
    ctx->pc = 0x2250B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2250ACu;
            // 0x2250b0: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250B4u; }
        if (ctx->pc != 0x2250B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250B4u; }
        if (ctx->pc != 0x2250B4u) { return; }
    }
    ctx->pc = 0x2250B4u;
    // 0x2250b4: 0xdba200b0  lqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x2250b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2250b8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2250b8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2250bc: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x2250bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2250c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2250c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2250c4: 0xfba20150  sqc2        $vf2, 0x150($sp)
    ctx->pc = 0x2250c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2250c8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x2250c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2250cc: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2250ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2250d0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2250d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2250d4: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x2250d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2250d8: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2250d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2250dc: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x2250dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2250e0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x2250e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2250e4: 0xfba20170  sqc2        $vf2, 0x170($sp)
    ctx->pc = 0x2250e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2250e8: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x2250e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x2250ec: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2250ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2250f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2250f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2250f4: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x2250F4u;
    SET_GPR_U32(ctx, 31, 0x2250FCu);
    ctx->pc = 0x2250F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2250F4u;
            // 0x2250f8: 0x2604b950  addiu       $a0, $s0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250FCu; }
        if (ctx->pc != 0x2250FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250FCu; }
        if (ctx->pc != 0x2250FCu) { return; }
    }
    ctx->pc = 0x2250FCu;
    // 0x2250fc: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x2250fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225100: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x225100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x225104: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x225104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x225108: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x225108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x22510c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x22510cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x225110: 0xdba10170  lqc2        $vf1, 0x170($sp)
    ctx->pc = 0x225110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x225114: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x225114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x225118: 0xdba201a0  lqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x225118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x22511c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x22511cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x225120: 0xfba201b0  sqc2        $vf2, 0x1B0($sp)
    ctx->pc = 0x225120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x225124: 0x2610b950  addiu       $s0, $s0, -0x46B0
    ctx->pc = 0x225124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949200));
    // 0x225128: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x225128u;
    SET_GPR_U32(ctx, 31, 0x225130u);
    ctx->pc = 0x22512Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225128u;
            // 0x22512c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225130u; }
        if (ctx->pc != 0x225130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225130u; }
        if (ctx->pc != 0x225130u) { return; }
    }
    ctx->pc = 0x225130u;
    // 0x225130: 0xc6540054  lwc1        $f20, 0x54($s2)
    ctx->pc = 0x225130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x225134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225138: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x225138u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x22513c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x22513Cu;
    SET_GPR_U32(ctx, 31, 0x225144u);
    ctx->pc = 0x225140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22513Cu;
            // 0x225140: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225144u; }
        if (ctx->pc != 0x225144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225144u; }
        if (ctx->pc != 0x225144u) { return; }
    }
    ctx->pc = 0x225144u;
    // 0x225144: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x225144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225148: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x225148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22514c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22514cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x225150: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x225150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x225154: 0x4614b5c2  mul.s       $f23, $f22, $f20
    ctx->pc = 0x225154u;
    ctx->f[23] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x225158: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x225158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x22515c: 0xc7a30140  lwc1        $f3, 0x140($sp)
    ctx->pc = 0x22515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x225160: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x225160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x225164: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x225164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225168: 0x46141d02  mul.s       $f20, $f3, $f20
    ctx->pc = 0x225168u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x22516c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22516cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x225170: 0xc0892fe  jal         func_224BF8
    ctx->pc = 0x225170u;
    SET_GPR_U32(ctx, 31, 0x225178u);
    ctx->pc = 0x225174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225170u;
            // 0x225174: 0x46010d80  add.s       $f22, $f1, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x224BF8u;
    if (runtime->hasFunction(0x224BF8u)) {
        auto targetFn = runtime->lookupFunction(0x224BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225178u; }
        if (ctx->pc != 0x225178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224BF8_0x224bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225178u; }
        if (ctx->pc != 0x225178u) { return; }
    }
    ctx->pc = 0x225178u;
    // 0x225178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x225178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22517c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x22517cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x225180: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x225180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x225184: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x225184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x225188: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x225188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22518c: 0x8c4311a0  lw          $v1, 0x11A0($v0)
    ctx->pc = 0x22518cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
    // 0x225190: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x225190u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225194: 0x2863001e  slti        $v1, $v1, 0x1E
    ctx->pc = 0x225194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x225198: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x225198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22519c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x22519Cu;
    {
        const bool branch_taken_0x22519c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2251A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22519Cu;
            // 0x2251a0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22519c) {
            ctx->pc = 0x225200u;
            goto label_225200;
        }
    }
    ctx->pc = 0x2251A4u;
    // 0x2251a4: 0xc089270  jal         func_2249C0
    ctx->pc = 0x2251A4u;
    SET_GPR_U32(ctx, 31, 0x2251ACu);
    ctx->pc = 0x2251A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2251A4u;
            // 0x2251a8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2249C0u;
    if (runtime->hasFunction(0x2249C0u)) {
        auto targetFn = runtime->lookupFunction(0x2249C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2251ACu; }
        if (ctx->pc != 0x2251ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002249C0_0x2249c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2251ACu; }
        if (ctx->pc != 0x2251ACu) { return; }
    }
    ctx->pc = 0x2251ACu;
    // 0x2251ac: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2251acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2251b0: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2251b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2251b4: 0x4406b000  mfc1        $a2, $f22
    ctx->pc = 0x2251b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2251b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2251b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251bc: 0x4408b800  mfc1        $t0, $f23
    ctx->pc = 0x2251bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2251c0: 0x70c81b89  pcpyld      $v1, $a2, $t0
    ctx->pc = 0x2251c0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x2251c4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2251c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2251c8: 0x71283389  pcpyld      $a2, $t1, $t0
    ctx->pc = 0x2251c8u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2251cc: 0x70c334c8  ppacw       $a2, $a2, $v1
    ctx->pc = 0x2251ccu;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x2251d0: 0x7fa60130  sq          $a2, 0x130($sp)
    ctx->pc = 0x2251d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 6));
    // 0x2251d4: 0x7fa60180  sq          $a2, 0x180($sp)
    ctx->pc = 0x2251d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 6));
    // 0x2251d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2251d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251dc: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2251dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2251e0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2251e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2251e4: 0xdba10190  lqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2251e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2251e8: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2251e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2251ec: 0x7ba701b0  lq          $a3, 0x1B0($sp)
    ctx->pc = 0x2251ecu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2251f0: 0xc089654  jal         func_225950
    ctx->pc = 0x2251F0u;
    SET_GPR_U32(ctx, 31, 0x2251F8u);
    ctx->pc = 0x2251F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2251F0u;
            // 0x2251f4: 0x48260800  qmfc2.ni    $a2, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225950u;
    if (runtime->hasFunction(0x225950u)) {
        auto targetFn = runtime->lookupFunction(0x225950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2251F8u; }
        if (ctx->pc != 0x2251F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225950_0x225950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2251F8u; }
        if (ctx->pc != 0x2251F8u) { return; }
    }
    ctx->pc = 0x2251F8u;
    // 0x2251f8: 0xc089192  jal         func_224648
    ctx->pc = 0x2251F8u;
    SET_GPR_U32(ctx, 31, 0x225200u);
    ctx->pc = 0x2251FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2251F8u;
            // 0x2251fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224648u;
    if (runtime->hasFunction(0x224648u)) {
        auto targetFn = runtime->lookupFunction(0x224648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225200u; }
        if (ctx->pc != 0x225200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224648_0x224648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225200u; }
        if (ctx->pc != 0x225200u) { return; }
    }
    ctx->pc = 0x225200u;
label_225200:
    // 0x225200: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x225200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x225204: 0x1620ffa8  bnez        $s1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x225204u;
    {
        const bool branch_taken_0x225204 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x225208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225204u;
            // 0x225208: 0x4619c600  add.s       $f24, $f24, $f25 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225204) {
            ctx->pc = 0x2250A8u;
            runtime->cooperativeGuestYield();
            goto label_2250a8;
        }
    }
    ctx->pc = 0x22520Cu;
label_22520c:
    // 0x22520c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x22520Cu;
    {
        const bool branch_taken_0x22520c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x225210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22520Cu;
            // 0x225210: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22520c) {
            ctx->pc = 0x225230u;
            goto label_225230;
        }
    }
    ctx->pc = 0x225214u;
    // 0x225214: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x225214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x225218: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x225218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x22521c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x22521cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x225220: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x225220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x225224: 0x40f809  jalr        $v0
    ctx->pc = 0x225224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22522Cu);
        ctx->pc = 0x225228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225224u;
            // 0x225228: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22522Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224DB8u: goto label_224db8;
            case 0x224DE8u: goto label_224de8;
            case 0x224DECu: goto label_224dec;
            case 0x224E40u: goto label_224e40;
            case 0x224E70u: goto label_224e70;
            case 0x224E74u: goto label_224e74;
            case 0x224E78u: goto label_224e78;
            case 0x224EE8u: goto label_224ee8;
            case 0x224F34u: goto label_224f34;
            case 0x224FD0u: goto label_224fd0;
            case 0x224FFCu: goto label_224ffc;
            case 0x225014u: goto label_225014;
            case 0x22501Cu: goto label_22501c;
            case 0x225024u: goto label_225024;
            case 0x225028u: goto label_225028;
            case 0x225070u: goto label_225070;
            case 0x2250A8u: goto label_2250a8;
            case 0x225200u: goto label_225200;
            case 0x22520Cu: goto label_22520c;
            case 0x225230u: goto label_225230;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22522Cu; }
            if (ctx->pc != 0x22522Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22522Cu;
    // 0x22522c: 0x0  nop
    ctx->pc = 0x22522cu;
    // NOP
label_225230:
    // 0x225230: 0x7bb00220  lq          $s0, 0x220($sp)
    ctx->pc = 0x225230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x225234: 0x7bb10210  lq          $s1, 0x210($sp)
    ctx->pc = 0x225234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x225238: 0x7bb20200  lq          $s2, 0x200($sp)
    ctx->pc = 0x225238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x22523c: 0x7bb301f0  lq          $s3, 0x1F0($sp)
    ctx->pc = 0x22523cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x225240: 0x7bb401e0  lq          $s4, 0x1E0($sp)
    ctx->pc = 0x225240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x225244: 0x7bb501d0  lq          $s5, 0x1D0($sp)
    ctx->pc = 0x225244u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x225248: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x225248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x22524c: 0xc7b90258  lwc1        $f25, 0x258($sp)
    ctx->pc = 0x22524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x225250: 0xc7b80250  lwc1        $f24, 0x250($sp)
    ctx->pc = 0x225250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x225254: 0xc7b70248  lwc1        $f23, 0x248($sp)
    ctx->pc = 0x225254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x225258: 0xc7b60240  lwc1        $f22, 0x240($sp)
    ctx->pc = 0x225258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22525c: 0xc7b50238  lwc1        $f21, 0x238($sp)
    ctx->pc = 0x22525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x225260: 0xc7b40230  lwc1        $f20, 0x230($sp)
    ctx->pc = 0x225260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x225264: 0x3e00008  jr          $ra
    ctx->pc = 0x225264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225264u;
            // 0x225268: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224DB8u: goto label_224db8;
            case 0x224DE8u: goto label_224de8;
            case 0x224DECu: goto label_224dec;
            case 0x224E40u: goto label_224e40;
            case 0x224E70u: goto label_224e70;
            case 0x224E74u: goto label_224e74;
            case 0x224E78u: goto label_224e78;
            case 0x224EE8u: goto label_224ee8;
            case 0x224F34u: goto label_224f34;
            case 0x224FD0u: goto label_224fd0;
            case 0x224FFCu: goto label_224ffc;
            case 0x225014u: goto label_225014;
            case 0x22501Cu: goto label_22501c;
            case 0x225024u: goto label_225024;
            case 0x225028u: goto label_225028;
            case 0x225070u: goto label_225070;
            case 0x2250A8u: goto label_2250a8;
            case 0x225200u: goto label_225200;
            case 0x22520Cu: goto label_22520c;
            case 0x225230u: goto label_225230;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22526Cu;
    // 0x22526c: 0x0  nop
    ctx->pc = 0x22526cu;
    // NOP
}
