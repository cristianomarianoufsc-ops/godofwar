#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_143008
// Address: 0x143008 - 0x1431f8
void entry_143008_0x1431f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_143008_0x1431f8");
#endif

    ctx->pc = 0x143008u;

    // 0x143008: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x143008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x14300c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x14300cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143010: 0xc4a1bfe4  lwc1        $f1, -0x401C($a1)
    ctx->pc = 0x143010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294950884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143014: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143018: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x143018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14301c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x14301cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143020: 0x0  nop
    ctx->pc = 0x143020u;
    // NOP
    // 0x143024: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x143024u;
    {
        const bool branch_taken_0x143024 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x143028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143024u;
            // 0x143028: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143024) {
            ctx->pc = 0x143050u;
            goto label_143050;
        }
    }
    ctx->pc = 0x14302Cu;
    // 0x14302c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x14302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x143030: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x143030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x143034: 0xc440c64c  lwc1        $f0, -0x39B4($v0)
    ctx->pc = 0x143034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14303c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14303cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x143040: 0xac62bfec  sw          $v0, -0x4014($v1)
    ctx->pc = 0x143040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950892), GPR_U32(ctx, 2));
    // 0x143044: 0x46001028  max.s       $f0, $f2, $f0
    ctx->pc = 0x143044u;
    ctx->f[0] = std::max(ctx->f[2], ctx->f[0]);
    // 0x143048: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x143048u;
    {
        const bool branch_taken_0x143048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143048u;
            // 0x14304c: 0xe4a0bfe4  swc1        $f0, -0x401C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294950884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143048) {
            ctx->pc = 0x143078u;
            goto label_143078;
        }
    }
    ctx->pc = 0x143050u;
label_143050:
    // 0x143050: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x143050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x143054: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x143054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x143058: 0x8444bfe8  lh          $a0, -0x4018($v0)
    ctx->pc = 0x143058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950888)));
    // 0x14305c: 0x8cc2bfe0  lw          $v0, -0x4020($a2)
    ctx->pc = 0x14305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950880)));
    // 0x143060: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143060u;
    {
        const bool branch_taken_0x143060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x143064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143060u;
            // 0x143064: 0xe4a2bfe4  swc1        $f2, -0x401C($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294950884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143060) {
            ctx->pc = 0x143078u;
            goto label_143078;
        }
    }
    ctx->pc = 0x143068u;
    // 0x143068: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x143068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x14306c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143070: 0xac62bfec  sw          $v0, -0x4014($v1)
    ctx->pc = 0x143070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950892), GPR_U32(ctx, 2));
    // 0x143074: 0xacc4bfe0  sw          $a0, -0x4020($a2)
    ctx->pc = 0x143074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294950880), GPR_U32(ctx, 4));
label_143078:
    // 0x143078: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x143078u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x14307c: 0x8e02bfec  lw          $v0, -0x4014($s0)
    ctx->pc = 0x14307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950892)));
    // 0x143080: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x143080u;
    {
        const bool branch_taken_0x143080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143080u;
            // 0x143084: 0x3c070033  lui         $a3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143080) {
            ctx->pc = 0x1431E8u;
            goto label_1431e8;
        }
    }
    ctx->pc = 0x143088u;
    // 0x143088: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x143088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x14308c: 0x8ce2ed60  lw          $v0, -0x12A0($a3)
    ctx->pc = 0x14308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294962528)));
    // 0x143090: 0x24c3ed68  addiu       $v1, $a2, -0x1298
    ctx->pc = 0x143090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962536));
    // 0x143094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143098: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x143098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14309c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1430a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1430a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1430a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1430a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1430a8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x1430a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1430ac: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1430acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1430b0:
    // 0x1430b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1430b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1430b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1430b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1430b8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1430b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1430bc: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x1430bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x1430c0: 0x0  nop
    ctx->pc = 0x1430c0u;
    // NOP
    // 0x1430c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1430C4u;
    {
        const bool branch_taken_0x1430c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1430C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1430C4u;
            // 0x1430c8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430c4) {
            ctx->pc = 0x1430B0u;
            runtime->cooperativeGuestYield();
            goto label_1430b0;
        }
    }
    ctx->pc = 0x1430CCu;
    // 0x1430cc: 0x8ce2ed60  lw          $v0, -0x12A0($a3)
    ctx->pc = 0x1430ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294962528)));
    // 0x1430d0: 0x24c3ed68  addiu       $v1, $a2, -0x1298
    ctx->pc = 0x1430d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962536));
    // 0x1430d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1430d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1430d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1430d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1430dc: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1430DCu;
    SET_GPR_U32(ctx, 31, 0x1430E4u);
    ctx->pc = 0x1430E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1430DCu;
            // 0x1430e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1430E4u; }
        if (ctx->pc != 0x1430E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1430E4u; }
        if (ctx->pc != 0x1430E4u) { return; }
    }
    ctx->pc = 0x1430E4u;
    // 0x1430e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1430e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1430e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1430e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1430ec: 0xc440bfc8  lwc1        $f0, -0x4038($v0)
    ctx->pc = 0x1430ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1430f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1430f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1430f4: 0x0  nop
    ctx->pc = 0x1430f4u;
    // NOP
    // 0x1430f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1430F8u;
    {
        const bool branch_taken_0x1430f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1430FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1430F8u;
            // 0x1430fc: 0xae00bfec  sw          $zero, -0x4014($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430f8) {
            ctx->pc = 0x143110u;
            goto label_143110;
        }
    }
    ctx->pc = 0x143100u;
    // 0x143100: 0xc050b80  jal         func_142E00
    ctx->pc = 0x143100u;
    SET_GPR_U32(ctx, 31, 0x143108u);
    ctx->pc = 0x142E00u;
    if (runtime->hasFunction(0x142E00u)) {
        auto targetFn = runtime->lookupFunction(0x142E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143108u; }
        if (ctx->pc != 0x143108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_142e00_0x143008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143108u; }
        if (ctx->pc != 0x143108u) { return; }
    }
    ctx->pc = 0x143108u;
    // 0x143108: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x143108u;
    {
        const bool branch_taken_0x143108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14310Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143108u;
            // 0x14310c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143108) {
            ctx->pc = 0x143120u;
            goto label_143120;
        }
    }
    ctx->pc = 0x143110u;
label_143110:
    // 0x143110: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x143110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x143114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143118: 0xe440bfc8  swc1        $f0, -0x4038($v0)
    ctx->pc = 0x143118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294950856), bits); }
    // 0x14311c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x14311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_143120:
    // 0x143120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x143120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143124: 0x8c43bfe0  lw          $v1, -0x4020($v0)
    ctx->pc = 0x143124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950880)));
    // 0x143128: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x143128u;
    {
        const bool branch_taken_0x143128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143128u;
            // 0x14312c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143128) {
            ctx->pc = 0x143160u;
            goto label_143160;
        }
    }
    ctx->pc = 0x143130u;
    // 0x143130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143130u;
    {
        const bool branch_taken_0x143130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143130u;
            // 0x143134: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143130) {
            ctx->pc = 0x143148u;
            goto label_143148;
        }
    }
    ctx->pc = 0x143138u;
    // 0x143138: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x143138u;
    {
        const bool branch_taken_0x143138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143138) {
            ctx->pc = 0x143174u;
            goto label_143174;
        }
    }
    ctx->pc = 0x143140u;
    // 0x143140: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x143140u;
    {
        const bool branch_taken_0x143140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143140) {
            ctx->pc = 0x1431D8u;
            goto label_1431d8;
        }
    }
    ctx->pc = 0x143148u;
label_143148:
    // 0x143148: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x143148u;
    {
        const bool branch_taken_0x143148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143148u;
            // 0x14314c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143148) {
            ctx->pc = 0x143194u;
            goto label_143194;
        }
    }
    ctx->pc = 0x143150u;
    // 0x143150: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x143150u;
    {
        const bool branch_taken_0x143150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x143150) {
            ctx->pc = 0x1431D0u;
            goto label_1431d0;
        }
    }
    ctx->pc = 0x143158u;
    // 0x143158: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x143158u;
    {
        const bool branch_taken_0x143158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143158) {
            ctx->pc = 0x1431D8u;
            goto label_1431d8;
        }
    }
    ctx->pc = 0x143160u;
label_143160:
    // 0x143160: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x143164: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x143164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x143168: 0x8c421078  lw          $v0, 0x1078($v0)
    ctx->pc = 0x143168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4216)));
    // 0x14316c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14316Cu;
    {
        const bool branch_taken_0x14316c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14316c) {
            ctx->pc = 0x143184u;
            goto label_143184;
        }
    }
    ctx->pc = 0x143174u;
label_143174:
    // 0x143174: 0xc0509b0  jal         func_1426C0
    ctx->pc = 0x143174u;
    SET_GPR_U32(ctx, 31, 0x14317Cu);
    ctx->pc = 0x143178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143174u;
            // 0x143178: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1426C0u;
    if (runtime->hasFunction(0x1426C0u)) {
        auto targetFn = runtime->lookupFunction(0x1426C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14317Cu; }
        if (ctx->pc != 0x14317Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001426C0_0x1426c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14317Cu; }
        if (ctx->pc != 0x14317Cu) { return; }
    }
    ctx->pc = 0x14317Cu;
    // 0x14317c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14317Cu;
    {
        const bool branch_taken_0x14317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14317c) {
            ctx->pc = 0x1431D8u;
            goto label_1431d8;
        }
    }
    ctx->pc = 0x143184u;
label_143184:
    // 0x143184: 0xc050878  jal         func_1421E0
    ctx->pc = 0x143184u;
    SET_GPR_U32(ctx, 31, 0x14318Cu);
    ctx->pc = 0x1421E0u;
    if (runtime->hasFunction(0x1421E0u)) {
        auto targetFn = runtime->lookupFunction(0x1421E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14318Cu; }
        if (ctx->pc != 0x14318Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001421E0_0x1421e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14318Cu; }
        if (ctx->pc != 0x14318Cu) { return; }
    }
    ctx->pc = 0x14318Cu;
    // 0x14318c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14318Cu;
    {
        const bool branch_taken_0x14318c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14318c) {
            ctx->pc = 0x1431D8u;
            goto label_1431d8;
        }
    }
    ctx->pc = 0x143194u;
label_143194:
    // 0x143194: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x143194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x143198: 0x8442bfe8  lh          $v0, -0x4018($v0)
    ctx->pc = 0x143198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950888)));
    // 0x14319c: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14319Cu;
    {
        const bool branch_taken_0x14319c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1431A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14319Cu;
            // 0x1431a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14319c) {
            ctx->pc = 0x1431BCu;
            goto label_1431bc;
        }
    }
    ctx->pc = 0x1431A4u;
    // 0x1431a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1431a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1431a8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1431a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1431ac: 0x8c421078  lw          $v0, 0x1078($v0)
    ctx->pc = 0x1431acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4216)));
    // 0x1431b0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1431B0u;
    {
        const bool branch_taken_0x1431b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1431B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1431B0u;
            // 0x1431b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431b0) {
            ctx->pc = 0x1431BCu;
            goto label_1431bc;
        }
    }
    ctx->pc = 0x1431B8u;
    // 0x1431b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1431b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1431bc:
    // 0x1431bc: 0xc050a7a  jal         func_1429E8
    ctx->pc = 0x1431BCu;
    SET_GPR_U32(ctx, 31, 0x1431C4u);
    ctx->pc = 0x1429E8u;
    if (runtime->hasFunction(0x1429E8u)) {
        auto targetFn = runtime->lookupFunction(0x1429E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431C4u; }
        if (ctx->pc != 0x1431C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001429E8_0x1429e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431C4u; }
        if (ctx->pc != 0x1431C4u) { return; }
    }
    ctx->pc = 0x1431C4u;
    // 0x1431c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1431c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1431c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1431C8u;
    {
        const bool branch_taken_0x1431c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1431C8u;
            // 0x1431cc: 0xae02bfec  sw          $v0, -0x4014($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431c8) {
            ctx->pc = 0x1431D8u;
            goto label_1431d8;
        }
    }
    ctx->pc = 0x1431D0u;
label_1431d0:
    // 0x1431d0: 0xc0509b0  jal         func_1426C0
    ctx->pc = 0x1431D0u;
    SET_GPR_U32(ctx, 31, 0x1431D8u);
    ctx->pc = 0x1431D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1431D0u;
            // 0x1431d4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1426C0u;
    if (runtime->hasFunction(0x1426C0u)) {
        auto targetFn = runtime->lookupFunction(0x1426C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431D8u; }
        if (ctx->pc != 0x1431D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001426C0_0x1426c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431D8u; }
        if (ctx->pc != 0x1431D8u) { return; }
    }
    ctx->pc = 0x1431D8u;
label_1431d8:
    // 0x1431d8: 0xc05021e  jal         func_140878
    ctx->pc = 0x1431D8u;
    SET_GPR_U32(ctx, 31, 0x1431E0u);
    ctx->pc = 0x140878u;
    if (runtime->hasFunction(0x140878u)) {
        auto targetFn = runtime->lookupFunction(0x140878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431E0u; }
        if (ctx->pc != 0x1431E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140878_0x140878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431E0u; }
        if (ctx->pc != 0x1431E0u) { return; }
    }
    ctx->pc = 0x1431E0u;
    // 0x1431e0: 0xc04fd92  jal         func_13F648
    ctx->pc = 0x1431E0u;
    SET_GPR_U32(ctx, 31, 0x1431E8u);
    ctx->pc = 0x13F648u;
    if (runtime->hasFunction(0x13F648u)) {
        auto targetFn = runtime->lookupFunction(0x13F648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431E8u; }
        if (ctx->pc != 0x1431E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f648_0x13f6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1431E8u; }
        if (ctx->pc != 0x1431E8u) { return; }
    }
    ctx->pc = 0x1431E8u;
label_1431e8:
    // 0x1431e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1431e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1431ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1431ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1431f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1431F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1431F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1431F0u;
            // 0x1431f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143050u: goto label_143050;
            case 0x143078u: goto label_143078;
            case 0x1430B0u: goto label_1430b0;
            case 0x143110u: goto label_143110;
            case 0x143120u: goto label_143120;
            case 0x143148u: goto label_143148;
            case 0x143160u: goto label_143160;
            case 0x143174u: goto label_143174;
            case 0x143184u: goto label_143184;
            case 0x143194u: goto label_143194;
            case 0x1431BCu: goto label_1431bc;
            case 0x1431D0u: goto label_1431d0;
            case 0x1431D8u: goto label_1431d8;
            case 0x1431E8u: goto label_1431e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1431F8u;
}
