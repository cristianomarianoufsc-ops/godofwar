#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6C60
// Address: 0x1c6c60 - 0x1c7b30
void sub_001C6C60_0x1c6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6C60_0x1c6c60");
#endif

    ctx->pc = 0x1c6c60u;

    // 0x1c6c60: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x1c6c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x1c6c64: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x1c6c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
    // 0x1c6c68: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x1c6c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
    // 0x1c6c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c70: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x1c6c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
    // 0x1c6c74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c6c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c78: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x1c6c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
    // 0x1c6c7c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c6c7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c80: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x1c6c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
    // 0x1c6c84: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x1c6c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x1c6c88: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x1c6c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x1c6c8c: 0x7fa50110  sq          $a1, 0x110($sp)
    ctx->pc = 0x1c6c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 5));
    // 0x1c6c90: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c6c94: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x1c6c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1c6c98: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6C98u;
    {
        const bool branch_taken_0x1c6c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C98u;
            // 0x1c6c9c: 0x7fa601b0  sq          $a2, 0x1B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c98) {
            ctx->pc = 0x1C6CACu;
            goto label_1c6cac;
        }
    }
    ctx->pc = 0x1C6CA0u;
    // 0x1c6ca0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1c6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1c6ca4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c6ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6ca8: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x1c6ca8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c6cac:
    // 0x1c6cac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c6cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c6cb0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6CB0u;
    {
        const bool branch_taken_0x1c6cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6cb0) {
            ctx->pc = 0x1C6CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6CB0u;
            // 0x1c6cb4: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6CDCu;
            goto label_1c6cdc;
        }
    }
    ctx->pc = 0x1C6CB8u;
    // 0x1c6cb8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c6cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c6cbc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6CBCu;
    {
        const bool branch_taken_0x1c6cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6cbc) {
            ctx->pc = 0x1C6CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6CBCu;
            // 0x1c6cc0: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6CDCu;
            goto label_1c6cdc;
        }
    }
    ctx->pc = 0x1C6CC4u;
    // 0x1c6cc4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1c6cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1c6cc8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6CC8u;
    {
        const bool branch_taken_0x1c6cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6cc8) {
            ctx->pc = 0x1C6CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6CC8u;
            // 0x1c6ccc: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6CDCu;
            goto label_1c6cdc;
        }
    }
    ctx->pc = 0x1C6CD0u;
    // 0x1c6cd0: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6CD0u;
    {
        const bool branch_taken_0x1c6cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6cd0) {
            ctx->pc = 0x1C6CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6CD0u;
            // 0x1c6cd4: 0x8e030174  lw          $v1, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6CFCu;
            goto label_1c6cfc;
        }
    }
    ctx->pc = 0x1C6CD8u;
    // 0x1c6cd8: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1c6cdc:
    // 0x1c6cdc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6ce0: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x1c6ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x1c6ce4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1c6ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1c6ce8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c6ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6cec: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c6cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1c6cf0: 0xc4806304  lwc1        $f0, 0x6304($a0)
    ctx->pc = 0x1c6cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 25348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6cf4: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x1c6cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x1c6cf8: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c6cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1c6cfc:
    // 0x1c6cfc: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x1c6cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1c6d00: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1C6D00u;
    {
        const bool branch_taken_0x1c6d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D00u;
            // 0x1c6d04: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d00) {
            ctx->pc = 0x1C7060u;
            goto label_1c7060;
        }
    }
    ctx->pc = 0x1C6D08u;
    // 0x1c6d08: 0x5040008c  beql        $v0, $zero, . + 4 + (0x8C << 2)
    ctx->pc = 0x1C6D08u;
    {
        const bool branch_taken_0x1c6d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d08) {
            ctx->pc = 0x1C6D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D08u;
            // 0x1c6d0c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6F3Cu;
            goto label_1c6f3c;
        }
    }
    ctx->pc = 0x1C6D10u;
    // 0x1c6d10: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1c6d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c6d14: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1c6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1c6d18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6D18u;
    {
        const bool branch_taken_0x1c6d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D18u;
            // 0x1c6d1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d18) {
            ctx->pc = 0x1C6D34u;
            goto label_1c6d34;
        }
    }
    ctx->pc = 0x1C6D20u;
    // 0x1c6d20: 0xc090d5a  jal         func_243568
    ctx->pc = 0x1C6D20u;
    SET_GPR_U32(ctx, 31, 0x1C6D28u);
    ctx->pc = 0x243568u;
    if (runtime->hasFunction(0x243568u)) {
        auto targetFn = runtime->lookupFunction(0x243568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D28u; }
        if (ctx->pc != 0x1C6D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243568_0x243570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D28u; }
        if (ctx->pc != 0x1C6D28u) { return; }
    }
    ctx->pc = 0x1C6D28u;
    // 0x1c6d28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6d2c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c6d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1c6d30: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1c6d30u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c6d34:
    // 0x1c6d34: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1c6d34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c6d38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c6d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6d40: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c6d40u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c6d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6d48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6d4c: 0x0  nop
    ctx->pc = 0x1c6d4cu;
    // NOP
    // 0x1c6d50: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6D50u;
    {
        const bool branch_taken_0x1c6d50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6d50) {
            ctx->pc = 0x1C6D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D50u;
            // 0x1c6d54: 0x8e020174  lw          $v0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6D64u;
            goto label_1c6d64;
        }
    }
    ctx->pc = 0x1C6D58u;
    // 0x1c6d58: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6D58u;
    {
        const bool branch_taken_0x1c6d58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d58) {
            ctx->pc = 0x1C6D88u;
            goto label_1c6d88;
        }
    }
    ctx->pc = 0x1C6D60u;
    // 0x1c6d60: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1c6d64:
    // 0x1c6d64: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c6d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c6d68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c6d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c6d6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6D6Cu;
    {
        const bool branch_taken_0x1c6d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d6c) {
            ctx->pc = 0x1C6D88u;
            goto label_1c6d88;
        }
    }
    ctx->pc = 0x1C6D74u;
    // 0x1c6d74: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c6d74u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c6d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d7c: 0xc078bb2  jal         func_1E2EC8
    ctx->pc = 0x1C6D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D84u);
    ctx->pc = 0x1C6D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D7Cu;
            // 0x1c6d80: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EC8u;
    if (runtime->hasFunction(0x1E2EC8u)) {
        auto targetFn = runtime->lookupFunction(0x1E2EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D84u; }
        if (ctx->pc != 0x1C6D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2EC8_0x1e2ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D84u; }
        if (ctx->pc != 0x1C6D84u) { return; }
    }
    ctx->pc = 0x1C6D84u;
    // 0x1c6d84: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1c6d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c6d88:
    // 0x1c6d88: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C6D88u;
    {
        const bool branch_taken_0x1c6d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D88u;
            // 0x1c6d8c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d88) {
            ctx->pc = 0x1C6E5Cu;
            goto label_1c6e5c;
        }
    }
    ctx->pc = 0x1C6D90u;
    // 0x1c6d90: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c6d94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c6d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6d98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6D98u;
    {
        const bool branch_taken_0x1c6d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d98) {
            ctx->pc = 0x1C6DA8u;
            goto label_1c6da8;
        }
    }
    ctx->pc = 0x1C6DA0u;
    // 0x1c6da0: 0x5220001d  beql        $s1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C6DA0u;
    {
        const bool branch_taken_0x1c6da0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6da0) {
            ctx->pc = 0x1C6DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DA0u;
            // 0x1c6da4: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6E18u;
            goto label_1c6e18;
        }
    }
    ctx->pc = 0x1C6DA8u;
label_1c6da8:
    // 0x1c6da8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6dac: 0x8e040328  lw          $a0, 0x328($s0)
    ctx->pc = 0x1c6dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1c6db0: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1c6db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1c6db4: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x1c6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x1c6db8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c6db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6dbc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c6dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c6dc0: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x1c6dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1c6dc4: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1c6dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1c6dc8: 0xa48300e0  sh          $v1, 0xE0($a0)
    ctx->pc = 0x1c6dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 224), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c6dcc: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c6dd0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c6dd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c6dd4: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c6dd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c6dd8: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c6dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6ddc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1c6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1c6de0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c6de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c6de4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c6de4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c6de8: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c6de8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6dec: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c6decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c6df0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1c6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1c6df4: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c6df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6df8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c6dfc: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1c6dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c6e00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c6e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c6e04: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c6e04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6e08: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1C6E08u;
    SET_GPR_U32(ctx, 31, 0x1C6E10u);
    ctx->pc = 0x1C6E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E08u;
            // 0x1c6e0c: 0xae0202d8  sw          $v0, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E10u; }
        if (ctx->pc != 0x1C6E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E10u; }
        if (ctx->pc != 0x1C6E10u) { return; }
    }
    ctx->pc = 0x1C6E10u;
    // 0x1c6e10: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x1C6E10u;
    {
        const bool branch_taken_0x1c6e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E10u;
            // 0x1c6e14: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e10) {
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C6E18u;
label_1c6e18:
    // 0x1c6e18: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c6e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c6e1c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c6e1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c6e20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6e24: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1c6e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1c6e28: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1c6e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6e2c: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c6e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c6e30: 0x3421353f  ori         $at, $at, 0x353F
    ctx->pc = 0x1c6e30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13631);
    // 0x1c6e34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e3c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c6e40: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c6e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c6e44: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c6e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c6e48: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1c6e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1c6e4c: 0xc071a8c  jal         func_1C6A30
    ctx->pc = 0x1C6E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E54u);
    ctx->pc = 0x1C6E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E4Cu;
            // 0x1c6e50: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A30u;
    if (runtime->hasFunction(0x1C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E54u; }
        if (ctx->pc != 0x1C6E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c6a30_0x1c6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E54u; }
        if (ctx->pc != 0x1C6E54u) { return; }
    }
    ctx->pc = 0x1C6E54u;
    // 0x1c6e54: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x1C6E54u;
    {
        const bool branch_taken_0x1c6e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E54u;
            // 0x1c6e58: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e54) {
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C6E5Cu;
label_1c6e5c:
    // 0x1c6e5c: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c6e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c6e60: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1c6e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1c6e64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6E64u;
    {
        const bool branch_taken_0x1c6e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E64u;
            // 0x1c6e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e64) {
            ctx->pc = 0x1C6E84u;
            goto label_1c6e84;
        }
    }
    ctx->pc = 0x1C6E6Cu;
    // 0x1c6e6c: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c6e6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c6e70: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6e78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6e7c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1C6E7Cu;
    {
        const bool branch_taken_0x1c6e7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6e7c) {
            ctx->pc = 0x1C6EACu;
            goto label_1c6eac;
        }
    }
    ctx->pc = 0x1C6E84u;
label_1c6e84:
    // 0x1c6e84: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1c6e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1c6e88: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6E88u;
    {
        const bool branch_taken_0x1c6e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e88) {
            ctx->pc = 0x1C6E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E88u;
            // 0x1c6e8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6EACu;
            goto label_1c6eac;
        }
    }
    ctx->pc = 0x1C6E90u;
    // 0x1c6e90: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c6e90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c6e94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6e9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6ea0: 0x0  nop
    ctx->pc = 0x1c6ea0u;
    // NOP
    // 0x1c6ea4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C6EA4u;
    {
        const bool branch_taken_0x1c6ea4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6ea4) {
            ctx->pc = 0x1C6EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EA4u;
            // 0x1c6ea8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6EACu;
            goto label_1c6eac;
        }
    }
    ctx->pc = 0x1C6EACu;
label_1c6eac:
    // 0x1c6eac: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C6EACu;
    {
        const bool branch_taken_0x1c6eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EACu;
            // 0x1c6eb0: 0x27b10110  addiu       $s1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6eac) {
            ctx->pc = 0x1C6F34u;
            goto label_1c6f34;
        }
    }
    ctx->pc = 0x1C6EB4u;
    // 0x1c6eb4: 0x8e080174  lw          $t0, 0x174($s0)
    ctx->pc = 0x1c6eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c6eb8: 0x3c130020  lui         $s3, 0x20
    ctx->pc = 0x1c6eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32 << 16));
    // 0x1c6ebc: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c6ebcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c6ec0: 0x1134024  and         $t0, $t0, $s3
    ctx->pc = 0x1c6ec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 19));
    // 0x1c6ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ecc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6ed0: 0xc078f0a  jal         func_1E3C28
    ctx->pc = 0x1C6ED0u;
    SET_GPR_U32(ctx, 31, 0x1C6ED8u);
    ctx->pc = 0x1C6ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6ED0u;
            // 0x1c6ed4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C28u;
    if (runtime->hasFunction(0x1E3C28u)) {
        auto targetFn = runtime->lookupFunction(0x1E3C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6ED8u; }
        if (ctx->pc != 0x1C6ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3C28_0x1e3c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6ED8u; }
        if (ctx->pc != 0x1C6ED8u) { return; }
    }
    ctx->pc = 0x1C6ED8u;
    // 0x1c6ed8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6edc: 0x32420006  andi        $v0, $s2, 0x6
    ctx->pc = 0x1c6edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6);
    // 0x1c6ee0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6EE0u;
    {
        const bool branch_taken_0x1c6ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EE0u;
            // 0x1c6ee4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ee0) {
            ctx->pc = 0x1C6F0Cu;
            goto label_1c6f0c;
        }
    }
    ctx->pc = 0x1C6EE8u;
    // 0x1c6ee8: 0x8e080174  lw          $t0, 0x174($s0)
    ctx->pc = 0x1c6ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c6eec: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c6eecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c6ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ef4: 0x1134024  and         $t0, $t0, $s3
    ctx->pc = 0x1c6ef4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 19));
    // 0x1c6ef8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6efc: 0xc078f0a  jal         func_1E3C28
    ctx->pc = 0x1C6EFCu;
    SET_GPR_U32(ctx, 31, 0x1C6F04u);
    ctx->pc = 0x1C6F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EFCu;
            // 0x1c6f00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C28u;
    if (runtime->hasFunction(0x1E3C28u)) {
        auto targetFn = runtime->lookupFunction(0x1E3C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F04u; }
        if (ctx->pc != 0x1C6F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3C28_0x1e3c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F04u; }
        if (ctx->pc != 0x1C6F04u) { return; }
    }
    ctx->pc = 0x1C6F04u;
    // 0x1c6f04: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x1c6f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x1c6f08: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x1c6f08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_1c6f0c:
    // 0x1c6f0c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1c6f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1c6f10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6F10u;
    {
        const bool branch_taken_0x1c6f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F10u;
            // 0x1c6f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f10) {
            ctx->pc = 0x1C6F20u;
            goto label_1c6f20;
        }
    }
    ctx->pc = 0x1C6F18u;
    // 0x1c6f18: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C6F18u;
    {
        const bool branch_taken_0x1c6f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F18u;
            // 0x1c6f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f18) {
            ctx->pc = 0x1C7040u;
            goto label_1c7040;
        }
    }
    ctx->pc = 0x1C6F20u;
label_1c6f20:
    // 0x1c6f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6f24:
    // 0x1c6f24: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1C6F24u;
    SET_GPR_U32(ctx, 31, 0x1C6F2Cu);
    ctx->pc = 0x1C6F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F24u;
            // 0x1c6f28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F2Cu; }
        if (ctx->pc != 0x1C6F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F2Cu; }
        if (ctx->pc != 0x1C6F2Cu) { return; }
    }
    ctx->pc = 0x1C6F2Cu;
    // 0x1c6f2c: 0x100002f7  b           . + 4 + (0x2F7 << 2)
    ctx->pc = 0x1C6F2Cu;
    {
        const bool branch_taken_0x1c6f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F2Cu;
            // 0x1c6f30: 0x7ba20110  lq          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f2c) {
            ctx->pc = 0x1C7B0Cu;
            goto label_1c7b0c;
        }
    }
    ctx->pc = 0x1C6F34u;
label_1c6f34:
    // 0x1c6f34: 0x100002f5  b           . + 4 + (0x2F5 << 2)
    ctx->pc = 0x1C6F34u;
    {
        const bool branch_taken_0x1c6f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F34u;
            // 0x1c6f38: 0x7a020110  lq          $v0, 0x110($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f34) {
            ctx->pc = 0x1C7B0Cu;
            goto label_1c7b0c;
        }
    }
    ctx->pc = 0x1C6F3Cu;
label_1c6f3c:
    // 0x1c6f3c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c6f40: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1c6f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c6f44: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c6f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c6f48: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c6f4c: 0x40f809  jalr        $v0
    ctx->pc = 0x1C6F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C6F54u);
        ctx->pc = 0x1C6F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F4Cu;
            // 0x1c6f50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C6F54u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6CACu: goto label_1c6cac;
            case 0x1C6CDCu: goto label_1c6cdc;
            case 0x1C6CFCu: goto label_1c6cfc;
            case 0x1C6D34u: goto label_1c6d34;
            case 0x1C6D64u: goto label_1c6d64;
            case 0x1C6D88u: goto label_1c6d88;
            case 0x1C6DA8u: goto label_1c6da8;
            case 0x1C6E18u: goto label_1c6e18;
            case 0x1C6E5Cu: goto label_1c6e5c;
            case 0x1C6E84u: goto label_1c6e84;
            case 0x1C6EACu: goto label_1c6eac;
            case 0x1C6F0Cu: goto label_1c6f0c;
            case 0x1C6F20u: goto label_1c6f20;
            case 0x1C6F24u: goto label_1c6f24;
            case 0x1C6F34u: goto label_1c6f34;
            case 0x1C6F3Cu: goto label_1c6f3c;
            case 0x1C700Cu: goto label_1c700c;
            case 0x1C7040u: goto label_1c7040;
            case 0x1C7050u: goto label_1c7050;
            case 0x1C7060u: goto label_1c7060;
            case 0x1C7090u: goto label_1c7090;
            case 0x1C7148u: goto label_1c7148;
            case 0x1C71E0u: goto label_1c71e0;
            case 0x1C71F8u: goto label_1c71f8;
            case 0x1C7240u: goto label_1c7240;
            case 0x1C72F8u: goto label_1c72f8;
            case 0x1C7380u: goto label_1c7380;
            case 0x1C738Cu: goto label_1c738c;
            case 0x1C7414u: goto label_1c7414;
            case 0x1C7420u: goto label_1c7420;
            case 0x1C7424u: goto label_1c7424;
            case 0x1C7468u: goto label_1c7468;
            case 0x1C7470u: goto label_1c7470;
            case 0x1C7550u: goto label_1c7550;
            case 0x1C760Cu: goto label_1c760c;
            case 0x1C77D0u: goto label_1c77d0;
            case 0x1C7808u: goto label_1c7808;
            case 0x1C780Cu: goto label_1c780c;
            case 0x1C781Cu: goto label_1c781c;
            case 0x1C7820u: goto label_1c7820;
            case 0x1C7960u: goto label_1c7960;
            case 0x1C7964u: goto label_1c7964;
            case 0x1C7980u: goto label_1c7980;
            case 0x1C79B0u: goto label_1c79b0;
            case 0x1C7A70u: goto label_1c7a70;
            case 0x1C7B00u: goto label_1c7b00;
            case 0x1C7B08u: goto label_1c7b08;
            case 0x1C7B0Cu: goto label_1c7b0c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F54u; }
            if (ctx->pc != 0x1C6F54u) { return; }
        }
        }
    }
    ctx->pc = 0x1C6F54u;
    // 0x1c6f54: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c6f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c6f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6f5c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c6f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c6f60: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c6f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c6f64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6f68: 0xc603016c  lwc1        $f3, 0x16C($s0)
    ctx->pc = 0x1c6f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6f6c: 0xc60102a4  lwc1        $f1, 0x2A4($s0)
    ctx->pc = 0x1c6f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6f70: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c6f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6f74: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1c6f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1c6f78: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1c6f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1c6f7c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1c6f7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c6f80: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1c6f80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1c6f84: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x1c6f84u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
    // 0x1c6f88: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1c6f88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6f8c: 0x0  nop
    ctx->pc = 0x1c6f8cu;
    // NOP
    // 0x1c6f90: 0x4501ffe3  bc1t        . + 4 + (-0x1D << 2)
    ctx->pc = 0x1C6F90u;
    {
        const bool branch_taken_0x1c6f90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F90u;
            // 0x1c6f94: 0xe60102a4  swc1        $f1, 0x2A4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f90) {
            ctx->pc = 0x1C6F20u;
            runtime->cooperativeGuestYield();
            goto label_1c6f20;
        }
    }
    ctx->pc = 0x1C6F98u;
    // 0x1c6f98: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x1c6f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c6f9c: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c6f9cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c6fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fa4: 0xc078bb2  jal         func_1E2EC8
    ctx->pc = 0x1C6FA4u;
    SET_GPR_U32(ctx, 31, 0x1C6FACu);
    ctx->pc = 0x1C6FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FA4u;
            // 0x1c6fa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EC8u;
    if (runtime->hasFunction(0x1E2EC8u)) {
        auto targetFn = runtime->lookupFunction(0x1E2EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FACu; }
        if (ctx->pc != 0x1C6FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2EC8_0x1e2ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FACu; }
        if (ctx->pc != 0x1C6FACu) { return; }
    }
    ctx->pc = 0x1C6FACu;
    // 0x1c6fac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c6facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c6fb0: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1C6FB0u;
    {
        const bool branch_taken_0x1c6fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FB0u;
            // 0x1c6fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fb0) {
            ctx->pc = 0x1C6F24u;
            runtime->cooperativeGuestYield();
            goto label_1c6f24;
        }
    }
    ctx->pc = 0x1C6FB8u;
    // 0x1c6fb8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c6fbc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c6fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c6fc0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C6FC0u;
    {
        const bool branch_taken_0x1c6fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FC0u;
            // 0x1c6fc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fc0) {
            ctx->pc = 0x1C7050u;
            goto label_1c7050;
        }
    }
    ctx->pc = 0x1C6FC8u;
    // 0x1c6fc8: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1c6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1c6fcc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c6fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c6fd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6fd4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6fd8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c6fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c6fdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c6fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6fe0: 0xc440011c  lwc1        $f0, 0x11C($v0)
    ctx->pc = 0x1c6fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6fe4: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c6fe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c6fe8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6fec: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1c6fecu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c6ff0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6ff4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c6ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c6ff8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c6ff8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c6ffc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6ffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7000: 0x0  nop
    ctx->pc = 0x1c7000u;
    // NOP
    // 0x1c7004: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C7004u;
    {
        const bool branch_taken_0x1c7004 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7004) {
            ctx->pc = 0x1C7008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7004u;
            // 0x1c7008: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C700Cu;
            goto label_1c700c;
        }
    }
    ctx->pc = 0x1C700Cu;
label_1c700c:
    // 0x1c700c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C700Cu;
    {
        const bool branch_taken_0x1c700c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C700Cu;
            // 0x1c7010: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c700c) {
            ctx->pc = 0x1C7050u;
            goto label_1c7050;
        }
    }
    ctx->pc = 0x1C7014u;
    // 0x1c7014: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c7014u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c7018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c701c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c701cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7020: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7020u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7024: 0xc078f0a  jal         func_1E3C28
    ctx->pc = 0x1C7024u;
    SET_GPR_U32(ctx, 31, 0x1C702Cu);
    ctx->pc = 0x1C7028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7024u;
            // 0x1c7028: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C28u;
    if (runtime->hasFunction(0x1E3C28u)) {
        auto targetFn = runtime->lookupFunction(0x1E3C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C702Cu; }
        if (ctx->pc != 0x1C702Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3C28_0x1e3c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C702Cu; }
        if (ctx->pc != 0x1C702Cu) { return; }
    }
    ctx->pc = 0x1C702Cu;
    // 0x1c702c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c702cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7030: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1c7030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1c7034: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7034u;
    {
        const bool branch_taken_0x1c7034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7034u;
            // 0x1c7038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7034) {
            ctx->pc = 0x1C7050u;
            goto label_1c7050;
        }
    }
    ctx->pc = 0x1C703Cu;
    // 0x1c703c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c703cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7040:
    // 0x1c7040: 0xc0719ae  jal         func_1C66B8
    ctx->pc = 0x1C7040u;
    SET_GPR_U32(ctx, 31, 0x1C7048u);
    ctx->pc = 0x1C7044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7040u;
            // 0x1c7044: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C66B8u;
    if (runtime->hasFunction(0x1C66B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C66B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7048u; }
        if (ctx->pc != 0x1C7048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c66b8_0x1c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7048u; }
        if (ctx->pc != 0x1C7048u) { return; }
    }
    ctx->pc = 0x1C7048u;
    // 0x1c7048: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x1C7048u;
    {
        const bool branch_taken_0x1c7048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7048u;
            // 0x1c704c: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7048) {
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C7050u;
label_1c7050:
    // 0x1c7050: 0xc071a8c  jal         func_1C6A30
    ctx->pc = 0x1C7050u;
    SET_GPR_U32(ctx, 31, 0x1C7058u);
    ctx->pc = 0x1C7054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7050u;
            // 0x1c7054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A30u;
    if (runtime->hasFunction(0x1C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7058u; }
        if (ctx->pc != 0x1C7058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c6a30_0x1c6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7058u; }
        if (ctx->pc != 0x1C7058u) { return; }
    }
    ctx->pc = 0x1C7058u;
    // 0x1c7058: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x1C7058u;
    {
        const bool branch_taken_0x1c7058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7058u;
            // 0x1c705c: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7058) {
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C7060u;
label_1c7060:
    // 0x1c7060: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1c7060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c7064: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c7064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7068: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c7068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c706c: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c706cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c7070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7074: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c7074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7078: 0x0  nop
    ctx->pc = 0x1c7078u;
    // NOP
    // 0x1c707c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1C707Cu;
    {
        const bool branch_taken_0x1c707c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c707c) {
            ctx->pc = 0x1C7080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C707Cu;
            // 0x1c7080: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7090u;
            goto label_1c7090;
        }
    }
    ctx->pc = 0x1C7084u;
    // 0x1c7084: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1c7084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1c7088: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C7088u;
    {
        const bool branch_taken_0x1c7088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7088) {
            ctx->pc = 0x1C708Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7088u;
            // 0x1c708c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7090u;
            goto label_1c7090;
        }
    }
    ctx->pc = 0x1C7090u;
label_1c7090:
    // 0x1c7090: 0x508000e4  beql        $a0, $zero, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1C7090u;
    {
        const bool branch_taken_0x1c7090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7090) {
            ctx->pc = 0x1C7094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7090u;
            // 0x1c7094: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C7098u;
    // 0x1c7098: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c7098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c709c: 0x3062004c  andi        $v0, $v1, 0x4C
    ctx->pc = 0x1c709cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
    // 0x1c70a0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C70A0u;
    {
        const bool branch_taken_0x1c70a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70A0u;
            // 0x1c70a4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70a0) {
            ctx->pc = 0x1C71E0u;
            goto label_1c71e0;
        }
    }
    ctx->pc = 0x1C70A8u;
    // 0x1c70a8: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1c70a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c70ac: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1c70acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c70b0: 0x544000dc  bnel        $v0, $zero, . + 4 + (0xDC << 2)
    ctx->pc = 0x1C70B0u;
    {
        const bool branch_taken_0x1c70b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c70b0) {
            ctx->pc = 0x1C70B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70B0u;
            // 0x1c70b4: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C70B8u;
    // 0x1c70b8: 0xc60102a4  lwc1        $f1, 0x2A4($s0)
    ctx->pc = 0x1c70b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c70bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c70bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c70c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c70c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c70c4: 0x0  nop
    ctx->pc = 0x1c70c4u;
    // NOP
    // 0x1c70c8: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1C70C8u;
    {
        const bool branch_taken_0x1c70c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C70CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70C8u;
            // 0x1c70cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70c8) {
            ctx->pc = 0x1C7148u;
            goto label_1c7148;
        }
    }
    ctx->pc = 0x1C70D0u;
    // 0x1c70d0: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c70d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c70d4: 0xc078bb2  jal         func_1E2EC8
    ctx->pc = 0x1C70D4u;
    SET_GPR_U32(ctx, 31, 0x1C70DCu);
    ctx->pc = 0x1C70D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70D4u;
            // 0x1c70d8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EC8u;
    if (runtime->hasFunction(0x1E2EC8u)) {
        auto targetFn = runtime->lookupFunction(0x1E2EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70DCu; }
        if (ctx->pc != 0x1C70DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2EC8_0x1e2ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70DCu; }
        if (ctx->pc != 0x1C70DCu) { return; }
    }
    ctx->pc = 0x1C70DCu;
    // 0x1c70dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c70dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70e0: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C70E0u;
    {
        const bool branch_taken_0x1c70e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70E0u;
            // 0x1c70e4: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70e0) {
            ctx->pc = 0x1C7148u;
            goto label_1c7148;
        }
    }
    ctx->pc = 0x1C70E8u;
    // 0x1c70e8: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1C70E8u;
    {
        const bool branch_taken_0x1c70e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70E8u;
            // 0x1c70ec: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70e8) {
            ctx->pc = 0x1C7420u;
            goto label_1c7420;
        }
    }
    ctx->pc = 0x1C70F0u;
    // 0x1c70f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c70f4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1c70f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1c70f8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1c70f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1c70fc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c70fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c7100: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c7100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c7104: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c710c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c7110: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c7110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c7114: 0x3421353f  ori         $at, $at, 0x353F
    ctx->pc = 0x1c7114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13631);
    // 0x1c7118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c711c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c7120: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c7120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c7124: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1c7124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1c7128: 0xc071a8c  jal         func_1C6A30
    ctx->pc = 0x1C7128u;
    SET_GPR_U32(ctx, 31, 0x1C7130u);
    ctx->pc = 0x1C712Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7128u;
            // 0x1c712c: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A30u;
    if (runtime->hasFunction(0x1C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7130u; }
        if (ctx->pc != 0x1C7130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c6a30_0x1c6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7130u; }
        if (ctx->pc != 0x1C7130u) { return; }
    }
    ctx->pc = 0x1C7130u;
    // 0x1c7130: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c7130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c7134: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7134u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c7138: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1c7138u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c713c: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c713cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7140: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1C7140u;
    {
        const bool branch_taken_0x1c7140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7140u;
            // 0x1c7144: 0xfa010260  sqc2        $vf1, 0x260($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7140) {
            ctx->pc = 0x1C7420u;
            goto label_1c7420;
        }
    }
    ctx->pc = 0x1C7148u;
label_1c7148:
    // 0x1c7148: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c7148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c714c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1c714cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1c7150: 0x544000b4  bnel        $v0, $zero, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1C7150u;
    {
        const bool branch_taken_0x1c7150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7150) {
            ctx->pc = 0x1C7154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7150u;
            // 0x1c7154: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C7158u;
    // 0x1c7158: 0x30620300  andi        $v0, $v1, 0x300
    ctx->pc = 0x1c7158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)768);
    // 0x1c715c: 0x544000b1  bnel        $v0, $zero, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1C715Cu;
    {
        const bool branch_taken_0x1c715c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c715c) {
            ctx->pc = 0x1C7160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C715Cu;
            // 0x1c7160: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C7164u;
    // 0x1c7164: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c7164u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c7168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c716c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1c716cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c7170: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c7170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7174: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7178: 0xc078f0a  jal         func_1E3C28
    ctx->pc = 0x1C7178u;
    SET_GPR_U32(ctx, 31, 0x1C7180u);
    ctx->pc = 0x1C717Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7178u;
            // 0x1c717c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C28u;
    if (runtime->hasFunction(0x1E3C28u)) {
        auto targetFn = runtime->lookupFunction(0x1E3C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7180u; }
        if (ctx->pc != 0x1C7180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3C28_0x1e3c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7180u; }
        if (ctx->pc != 0x1C7180u) { return; }
    }
    ctx->pc = 0x1C7180u;
    // 0x1c7180: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c7180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7184: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1c7184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1c7188: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1C7188u;
    {
        const bool branch_taken_0x1c7188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C718Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7188u;
            // 0x1c718c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7188) {
            ctx->pc = 0x1C7420u;
            goto label_1c7420;
        }
    }
    ctx->pc = 0x1C7190u;
    // 0x1c7190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7194: 0xc0719ae  jal         func_1C66B8
    ctx->pc = 0x1C7194u;
    SET_GPR_U32(ctx, 31, 0x1C719Cu);
    ctx->pc = 0x1C7198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7194u;
            // 0x1c7198: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C66B8u;
    if (runtime->hasFunction(0x1C66B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C66B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C719Cu; }
        if (ctx->pc != 0x1C719Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c66b8_0x1c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C719Cu; }
        if (ctx->pc != 0x1C719Cu) { return; }
    }
    ctx->pc = 0x1C719Cu;
    // 0x1c719c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c71a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1c71a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1c71a4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1c71a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1c71a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c71a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c71ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c71acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c71b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c71b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c71b4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c71b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c71b8: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c71b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c71bc: 0x3421353f  ori         $at, $at, 0x353F
    ctx->pc = 0x1c71bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13631);
    // 0x1c71c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c71c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c71c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c71c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c71c8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c71c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c71cc: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1c71ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1c71d0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c71d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c71d4: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c71d8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1C71D8u;
    {
        const bool branch_taken_0x1c71d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C71DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71D8u;
            // 0x1c71dc: 0xe461000c  swc1        $f1, 0xC($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71d8) {
            ctx->pc = 0x1C7380u;
            goto label_1c7380;
        }
    }
    ctx->pc = 0x1C71E0u;
label_1c71e0:
    // 0x1c71e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C71E0u;
    {
        const bool branch_taken_0x1c71e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c71e0) {
            ctx->pc = 0x1C71E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71E0u;
            // 0x1c71e4: 0x8e020324  lw          $v0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C71F8u;
            goto label_1c71f8;
        }
    }
    ctx->pc = 0x1C71E8u;
    // 0x1c71e8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1c71e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1c71ec: 0x5040008d  beql        $v0, $zero, . + 4 + (0x8D << 2)
    ctx->pc = 0x1C71ECu;
    {
        const bool branch_taken_0x1c71ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c71ec) {
            ctx->pc = 0x1C71F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71ECu;
            // 0x1c71f0: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C71F4u;
    // 0x1c71f4: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1c71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_1c71f8:
    // 0x1c71f8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1c71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c71fc: 0x54400089  bnel        $v0, $zero, . + 4 + (0x89 << 2)
    ctx->pc = 0x1C71FCu;
    {
        const bool branch_taken_0x1c71fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c71fc) {
            ctx->pc = 0x1C7200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71FCu;
            // 0x1c7200: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C7204u;
    // 0x1c7204: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c7204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c7208: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1c7208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1c720c: 0x54400085  bnel        $v0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x1C720Cu;
    {
        const bool branch_taken_0x1c720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c720c) {
            ctx->pc = 0x1C7210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C720Cu;
            // 0x1c7210: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C7214u;
    // 0x1c7214: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1c7214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1c7218: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7218u;
    {
        const bool branch_taken_0x1c7218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C721Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7218u;
            // 0x1c721c: 0x27b10110  addiu       $s1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7218) {
            ctx->pc = 0x1C7240u;
            goto label_1c7240;
        }
    }
    ctx->pc = 0x1C7220u;
    // 0x1c7220: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c7220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c7224: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c7224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7228: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1c7228u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c722c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c722cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7234: 0x0  nop
    ctx->pc = 0x1c7234u;
    // NOP
    // 0x1c7238: 0x4502007a  bc1fl       . + 4 + (0x7A << 2)
    ctx->pc = 0x1C7238u;
    {
        const bool branch_taken_0x1c7238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7238) {
            ctx->pc = 0x1C723Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7238u;
            // 0x1c723c: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C7240u;
label_1c7240:
    // 0x1c7240: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c7240u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c7244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c724c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c724cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7250: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7254: 0xc078f0a  jal         func_1E3C28
    ctx->pc = 0x1C7254u;
    SET_GPR_U32(ctx, 31, 0x1C725Cu);
    ctx->pc = 0x1C7258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7254u;
            // 0x1c7258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C28u;
    if (runtime->hasFunction(0x1E3C28u)) {
        auto targetFn = runtime->lookupFunction(0x1E3C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C725Cu; }
        if (ctx->pc != 0x1C725Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3C28_0x1e3c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C725Cu; }
        if (ctx->pc != 0x1C725Cu) { return; }
    }
    ctx->pc = 0x1C725Cu;
    // 0x1c725c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c725cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7260: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1c7260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1c7264: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C7264u;
    {
        const bool branch_taken_0x1c7264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7264u;
            // 0x1c7268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7264) {
            ctx->pc = 0x1C72F8u;
            goto label_1c72f8;
        }
    }
    ctx->pc = 0x1C726Cu;
    // 0x1c726c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7270: 0xc0719ae  jal         func_1C66B8
    ctx->pc = 0x1C7270u;
    SET_GPR_U32(ctx, 31, 0x1C7278u);
    ctx->pc = 0x1C7274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7270u;
            // 0x1c7274: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C66B8u;
    if (runtime->hasFunction(0x1C66B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C66B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7278u; }
        if (ctx->pc != 0x1C7278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c66b8_0x1c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7278u; }
        if (ctx->pc != 0x1C7278u) { return; }
    }
    ctx->pc = 0x1C7278u;
    // 0x1c7278: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1c7278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1c727c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c7280: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c7284: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c7284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c7288: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c7288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c728c: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1c728cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1c7290: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c7290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c7294: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7294u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c7298: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c7298u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c729c: 0xdba10110  lqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1c729cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c72a0: 0x4a820880  vaddx.y     $vf2, $vf1, $vf2x
    ctx->pc = 0x1c72a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c72a4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1c72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1c72a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c72a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c72ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c72acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c72b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c72b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c72b4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1c72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1c72b8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c72b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c72bc: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c72bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c72c0: 0x3421353f  ori         $at, $at, 0x353F
    ctx->pc = 0x1c72c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13631);
    // 0x1c72c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c72c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c72c8: 0x4a820041  vaddy.y     $vf1, $vf0, $vf2y
    ctx->pc = 0x1c72c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c72cc: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c72d0: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1c72d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c72d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c72d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c72d8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c72d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c72dc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1c72dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1c72e0: 0x441004f  bgez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C72E0u;
    {
        const bool branch_taken_0x1c72e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C72E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72E0u;
            // 0x1c72e4: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72e0) {
            ctx->pc = 0x1C7420u;
            goto label_1c7420;
        }
    }
    ctx->pc = 0x1C72E8u;
    // 0x1c72e8: 0xc079868  jal         func_1E61A0
    ctx->pc = 0x1C72E8u;
    SET_GPR_U32(ctx, 31, 0x1C72F0u);
    ctx->pc = 0x1C72ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72E8u;
            // 0x1c72ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E61A0u;
    if (runtime->hasFunction(0x1E61A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E61A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72F0u; }
        if (ctx->pc != 0x1C72F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e61a0_0x1e6238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72F0u; }
        if (ctx->pc != 0x1C72F0u) { return; }
    }
    ctx->pc = 0x1C72F0u;
    // 0x1c72f0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1C72F0u;
    {
        const bool branch_taken_0x1c72f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72F0u;
            // 0x1c72f4: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72f0) {
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C72F8u;
label_1c72f8:
    // 0x1c72f8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c72fc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c72fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c7300: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C7300u;
    {
        const bool branch_taken_0x1c7300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7300u;
            // 0x1c7304: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7300) {
            ctx->pc = 0x1C738Cu;
            goto label_1c738c;
        }
    }
    ctx->pc = 0x1C7308u;
    // 0x1c7308: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c7308u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c730c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7310: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7314: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c7314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7318: 0xc078f0a  jal         func_1E3C28
    ctx->pc = 0x1C7318u;
    SET_GPR_U32(ctx, 31, 0x1C7320u);
    ctx->pc = 0x1C731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7318u;
            // 0x1c731c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C28u;
    if (runtime->hasFunction(0x1E3C28u)) {
        auto targetFn = runtime->lookupFunction(0x1E3C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7320u; }
        if (ctx->pc != 0x1C7320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3C28_0x1e3c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7320u; }
        if (ctx->pc != 0x1C7320u) { return; }
    }
    ctx->pc = 0x1C7320u;
    // 0x1c7320: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c7320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7324: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1c7324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1c7328: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C7328u;
    {
        const bool branch_taken_0x1c7328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C732Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7328u;
            // 0x1c732c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7328) {
            ctx->pc = 0x1C7420u;
            goto label_1c7420;
        }
    }
    ctx->pc = 0x1C7330u;
    // 0x1c7330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7334: 0xc0719ae  jal         func_1C66B8
    ctx->pc = 0x1C7334u;
    SET_GPR_U32(ctx, 31, 0x1C733Cu);
    ctx->pc = 0x1C7338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7334u;
            // 0x1c7338: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C66B8u;
    if (runtime->hasFunction(0x1C66B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C66B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C733Cu; }
        if (ctx->pc != 0x1C733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c66b8_0x1c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C733Cu; }
        if (ctx->pc != 0x1C733Cu) { return; }
    }
    ctx->pc = 0x1C733Cu;
    // 0x1c733c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1c733cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1c7340: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c7340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c7344: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7344u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c7348: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c7348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c734c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c734cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c7350: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c7350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c7354: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7358: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c7358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c735c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c735cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7364: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c7364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7368: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1c7368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1c736c: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c736cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7370: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1c7370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1c7374: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c7374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c7378: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c7378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c737c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1c737cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1c7380:
    // 0x1c7380: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c7380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c7384: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C7384u;
    {
        const bool branch_taken_0x1c7384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7384u;
            // 0x1c7388: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7384) {
            ctx->pc = 0x1C7420u;
            goto label_1c7420;
        }
    }
    ctx->pc = 0x1C738Cu;
label_1c738c:
    // 0x1c738c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c7390: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c7390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c7394: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C7394u;
    {
        const bool branch_taken_0x1c7394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7394) {
            ctx->pc = 0x1C7398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7394u;
            // 0x1c7398: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C739Cu;
    // 0x1c739c: 0x56400021  bnel        $s2, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C739Cu;
    {
        const bool branch_taken_0x1c739c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c739c) {
            ctx->pc = 0x1C73A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C739Cu;
            // 0x1c73a0: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7424u;
            goto label_1c7424;
        }
    }
    ctx->pc = 0x1C73A4u;
    // 0x1c73a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c73a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73a8: 0xc0792a0  jal         func_1E4A80
    ctx->pc = 0x1C73A8u;
    SET_GPR_U32(ctx, 31, 0x1C73B0u);
    ctx->pc = 0x1C73ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C73A8u;
            // 0x1c73ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4A80u;
    if (runtime->hasFunction(0x1E4A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E4A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73B0u; }
        if (ctx->pc != 0x1C73B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4A80_0x1e4a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73B0u; }
        if (ctx->pc != 0x1C73B0u) { return; }
    }
    ctx->pc = 0x1C73B0u;
    // 0x1c73b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c73b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73b4: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C73B4u;
    {
        const bool branch_taken_0x1c73b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C73B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C73B4u;
            // 0x1c73b8: 0x7ba20110  lq          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73b4) {
            ctx->pc = 0x1C7420u;
            goto label_1c7420;
        }
    }
    ctx->pc = 0x1C73BCu;
    // 0x1c73bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c73c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c73c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c73c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73c8: 0xc0719ae  jal         func_1C66B8
    ctx->pc = 0x1C73C8u;
    SET_GPR_U32(ctx, 31, 0x1C73D0u);
    ctx->pc = 0x1C73CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C73C8u;
            // 0x1c73cc: 0x7e020110  sq          $v0, 0x110($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C66B8u;
    if (runtime->hasFunction(0x1C66B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C66B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73D0u; }
        if (ctx->pc != 0x1C73D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c66b8_0x1c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73D0u; }
        if (ctx->pc != 0x1C73D0u) { return; }
    }
    ctx->pc = 0x1C73D0u;
    // 0x1c73d0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1c73d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1c73d4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1c73d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1c73d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c73d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c73dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c73dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c73e0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1c73e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1c73e4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c73e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c73e8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1c73e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x1c73ec: 0x3421a7f0  ori         $at, $at, 0xA7F0
    ctx->pc = 0x1c73ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42992);
    // 0x1c73f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c73f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c73f4: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c73f8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c73f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c73fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c73fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c7400: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1c7400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1c7404: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7404u;
    {
        const bool branch_taken_0x1c7404 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C7408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7404u;
            // 0x1c7408: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7404) {
            ctx->pc = 0x1C7414u;
            goto label_1c7414;
        }
    }
    ctx->pc = 0x1C740Cu;
    // 0x1c740c: 0xc079868  jal         func_1E61A0
    ctx->pc = 0x1C740Cu;
    SET_GPR_U32(ctx, 31, 0x1C7414u);
    ctx->pc = 0x1C7410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C740Cu;
            // 0x1c7410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E61A0u;
    if (runtime->hasFunction(0x1E61A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E61A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7414u; }
        if (ctx->pc != 0x1C7414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e61a0_0x1e6238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7414u; }
        if (ctx->pc != 0x1C7414u) { return; }
    }
    ctx->pc = 0x1C7414u;
label_1c7414:
    // 0x1c7414: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c7414u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7418: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c7418u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c741c: 0x0  nop
    ctx->pc = 0x1c741cu;
    // NOP
label_1c7420:
    // 0x1c7420: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x1c7420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1c7424:
    // 0x1c7424: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c7424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c7428: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x1c7428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
    // 0x1c742c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c742cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c7430: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c7430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c7434: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c7434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c7438: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x1c7438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1c743c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1C743Cu;
    {
        const bool branch_taken_0x1c743c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C743Cu;
            // 0x1c7440: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c743c) {
            ctx->pc = 0x1C7550u;
            goto label_1c7550;
        }
    }
    ctx->pc = 0x1C7444u;
    // 0x1c7444: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c7444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c7448: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7448u;
    {
        const bool branch_taken_0x1c7448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7448u;
            // 0x1c744c: 0xae0002b8  sw          $zero, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7448) {
            ctx->pc = 0x1C7468u;
            goto label_1c7468;
        }
    }
    ctx->pc = 0x1C7450u;
    // 0x1c7450: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c7450u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7454: 0xda020220  lqc2        $vf2, 0x220($s0)
    ctx->pc = 0x1c7454u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1c7458: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1c7458u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c745c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C745Cu;
    {
        const bool branch_taken_0x1c745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C745Cu;
            // 0x1c7460: 0xfa010070  sqc2        $vf1, 0x70($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c745c) {
            ctx->pc = 0x1C7470u;
            goto label_1c7470;
        }
    }
    ctx->pc = 0x1C7464u;
    // 0x1c7464: 0x0  nop
    ctx->pc = 0x1c7464u;
    // NOP
label_1c7468:
    // 0x1c7468: 0x7a020220  lq          $v0, 0x220($s0)
    ctx->pc = 0x1c7468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1c746c: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x1c746cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
label_1c7470:
    // 0x1c7470: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x1c7470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c7474: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x1c7474u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1c7478: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c7478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c747c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c747cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c7480: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c7480u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7484: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c7484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7488: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x1c7488u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x1c748c: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x1c748cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c7490: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c7490u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7494: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1c7494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c7498: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1c7498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c749c: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1c749cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c74a0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c74a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c74a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c74a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c74a8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c74a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c74ac: 0x4a0002ff  vnop
    ctx->pc = 0x1c74acu;
    // NOP operation, no action needed for VU0
    // 0x1c74b0: 0x4a0002ff  vnop
    ctx->pc = 0x1c74b0u;
    // NOP operation, no action needed for VU0
    // 0x1c74b4: 0x4bc30afe  vopmula.xyz $ACC, $vf1, $vf3
    ctx->pc = 0x1c74b4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]);
    // 0x1c74b8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c74b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c74bc: 0x4bc1186e  vopmsub.xyz $vf1, $vf3, $vf1
    ctx->pc = 0x1c74bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c74c0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c74c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c74c4: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1c74c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c74c8: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1c74c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c74cc: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1c74ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c74d0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c74d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c74d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c74d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c74d8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c74d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c74dc: 0x4a0002ff  vnop
    ctx->pc = 0x1c74dcu;
    // NOP operation, no action needed for VU0
    // 0x1c74e0: 0x4a0002ff  vnop
    ctx->pc = 0x1c74e0u;
    // NOP operation, no action needed for VU0
    // 0x1c74e4: 0x4bc30afe  vopmula.xyz $ACC, $vf1, $vf3
    ctx->pc = 0x1c74e4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]);
    // 0x1c74e8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c74e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c74ec: 0x4bc118ee  vopmsub.xyz $vf3, $vf3, $vf1
    ctx->pc = 0x1c74ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c74f0: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1c74f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c74f4: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1c74f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c74f8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c74f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c74fc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c74fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7500: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c7500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7504: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c7504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c7508: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c7508u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c750c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c750cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c7510: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c7510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c7514: 0x4a0002ff  vnop
    ctx->pc = 0x1c7514u;
    // NOP operation, no action needed for VU0
    // 0x1c7518: 0x4a0002ff  vnop
    ctx->pc = 0x1c7518u;
    // NOP operation, no action needed for VU0
    // 0x1c751c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1c751cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1c7520: 0xfa030050  sqc2        $vf3, 0x50($s0)
    ctx->pc = 0x1c7520u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c7524: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c7524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c7528: 0x1060010d  beqz        $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x1C7528u;
    {
        const bool branch_taken_0x1c7528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C752Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7528u;
            // 0x1c752c: 0xfba30020  sqc2        $vf3, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7528) {
            ctx->pc = 0x1C7960u;
            goto label_1c7960;
        }
    }
    ctx->pc = 0x1C7530u;
    // 0x1c7530: 0x5680010c  bnel        $s4, $zero, . + 4 + (0x10C << 2)
    ctx->pc = 0x1C7530u;
    {
        const bool branch_taken_0x1c7530 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7530) {
            ctx->pc = 0x1C7534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7530u;
            // 0x1c7534: 0x8e030174  lw          $v1, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7964u;
            goto label_1c7964;
        }
    }
    ctx->pc = 0x1C7538u;
    // 0x1c7538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c753c: 0xc079472  jal         func_1E51C8
    ctx->pc = 0x1C753Cu;
    SET_GPR_U32(ctx, 31, 0x1C7544u);
    ctx->pc = 0x1C7540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C753Cu;
            // 0x1c7540: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E51C8u;
    if (runtime->hasFunction(0x1E51C8u)) {
        auto targetFn = runtime->lookupFunction(0x1E51C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7544u; }
        if (ctx->pc != 0x1C7544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E51C8_0x1e51c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7544u; }
        if (ctx->pc != 0x1C7544u) { return; }
    }
    ctx->pc = 0x1C7544u;
    // 0x1c7544: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x1C7544u;
    {
        const bool branch_taken_0x1c7544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7544u;
            // 0x1c7548: 0x8e030174  lw          $v1, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7544) {
            ctx->pc = 0x1C7964u;
            goto label_1c7964;
        }
    }
    ctx->pc = 0x1C754Cu;
    // 0x1c754c: 0x0  nop
    ctx->pc = 0x1c754cu;
    // NOP
label_1c7550:
    // 0x1c7550: 0x30820300  andi        $v0, $a0, 0x300
    ctx->pc = 0x1c7550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
    // 0x1c7554: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1C7554u;
    {
        const bool branch_taken_0x1c7554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7554u;
            // 0x1c7558: 0x32420008  andi        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7554) {
            ctx->pc = 0x1C7808u;
            goto label_1c7808;
        }
    }
    ctx->pc = 0x1C755Cu;
    // 0x1c755c: 0x544000ab  bnel        $v0, $zero, . + 4 + (0xAB << 2)
    ctx->pc = 0x1C755Cu;
    {
        const bool branch_taken_0x1c755c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c755c) {
            ctx->pc = 0x1C7560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C755Cu;
            // 0x1c7560: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C780Cu;
            goto label_1c780c;
        }
    }
    ctx->pc = 0x1C7564u;
    // 0x1c7564: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c7564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c7568: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c7568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c756c: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1c756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7570: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c7570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c7574: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c7574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c7578: 0x40f809  jalr        $v0
    ctx->pc = 0x1C7578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7580u);
        ctx->pc = 0x1C757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7578u;
            // 0x1c757c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C7580u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6CACu: goto label_1c6cac;
            case 0x1C6CDCu: goto label_1c6cdc;
            case 0x1C6CFCu: goto label_1c6cfc;
            case 0x1C6D34u: goto label_1c6d34;
            case 0x1C6D64u: goto label_1c6d64;
            case 0x1C6D88u: goto label_1c6d88;
            case 0x1C6DA8u: goto label_1c6da8;
            case 0x1C6E18u: goto label_1c6e18;
            case 0x1C6E5Cu: goto label_1c6e5c;
            case 0x1C6E84u: goto label_1c6e84;
            case 0x1C6EACu: goto label_1c6eac;
            case 0x1C6F0Cu: goto label_1c6f0c;
            case 0x1C6F20u: goto label_1c6f20;
            case 0x1C6F24u: goto label_1c6f24;
            case 0x1C6F34u: goto label_1c6f34;
            case 0x1C6F3Cu: goto label_1c6f3c;
            case 0x1C700Cu: goto label_1c700c;
            case 0x1C7040u: goto label_1c7040;
            case 0x1C7050u: goto label_1c7050;
            case 0x1C7060u: goto label_1c7060;
            case 0x1C7090u: goto label_1c7090;
            case 0x1C7148u: goto label_1c7148;
            case 0x1C71E0u: goto label_1c71e0;
            case 0x1C71F8u: goto label_1c71f8;
            case 0x1C7240u: goto label_1c7240;
            case 0x1C72F8u: goto label_1c72f8;
            case 0x1C7380u: goto label_1c7380;
            case 0x1C738Cu: goto label_1c738c;
            case 0x1C7414u: goto label_1c7414;
            case 0x1C7420u: goto label_1c7420;
            case 0x1C7424u: goto label_1c7424;
            case 0x1C7468u: goto label_1c7468;
            case 0x1C7470u: goto label_1c7470;
            case 0x1C7550u: goto label_1c7550;
            case 0x1C760Cu: goto label_1c760c;
            case 0x1C77D0u: goto label_1c77d0;
            case 0x1C7808u: goto label_1c7808;
            case 0x1C780Cu: goto label_1c780c;
            case 0x1C781Cu: goto label_1c781c;
            case 0x1C7820u: goto label_1c7820;
            case 0x1C7960u: goto label_1c7960;
            case 0x1C7964u: goto label_1c7964;
            case 0x1C7980u: goto label_1c7980;
            case 0x1C79B0u: goto label_1c79b0;
            case 0x1C7A70u: goto label_1c7a70;
            case 0x1C7B00u: goto label_1c7b00;
            case 0x1C7B08u: goto label_1c7b08;
            case 0x1C7B0Cu: goto label_1c7b0c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C7580u; }
            if (ctx->pc != 0x1C7580u) { return; }
        }
        }
    }
    ctx->pc = 0x1C7580u;
    // 0x1c7580: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c7580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c7584: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7588: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c7588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c758c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c758cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c7590: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7594: 0xc602016c  lwc1        $f2, 0x16C($s0)
    ctx->pc = 0x1c7594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7598: 0xc60102b8  lwc1        $f1, 0x2B8($s0)
    ctx->pc = 0x1c7598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c759c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c759cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c75a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c75a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c75a4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c75a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c75a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c75a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c75ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c75acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c75b0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1c75b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c75b4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1c75b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1c75b8: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1c75b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c75bc: 0x0  nop
    ctx->pc = 0x1c75bcu;
    // NOP
    // 0x1c75c0: 0x45000096  bc1f        . + 4 + (0x96 << 2)
    ctx->pc = 0x1C75C0u;
    {
        const bool branch_taken_0x1c75c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C75C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75C0u;
            // 0x1c75c4: 0xe60102b8  swc1        $f1, 0x2B8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75c0) {
            ctx->pc = 0x1C781Cu;
            goto label_1c781c;
        }
    }
    ctx->pc = 0x1C75C8u;
    // 0x1c75c8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c75cc: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x1c75ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c75d0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1c75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c75d4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c75d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c75d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1c75d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1c75dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c75dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75e0: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x1c75e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1c75e4: 0xc07920e  jal         func_1E4838
    ctx->pc = 0x1C75E4u;
    SET_GPR_U32(ctx, 31, 0x1C75ECu);
    ctx->pc = 0x1C75E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75E4u;
            // 0x1c75e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4838u;
    if (runtime->hasFunction(0x1E4838u)) {
        auto targetFn = runtime->lookupFunction(0x1E4838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75ECu; }
        if (ctx->pc != 0x1C75ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4838_0x1e4838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75ECu; }
        if (ctx->pc != 0x1C75ECu) { return; }
    }
    ctx->pc = 0x1C75ECu;
    // 0x1c75ec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1c75ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1c75f0: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1C75F0u;
    {
        const bool branch_taken_0x1c75f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75F0u;
            // 0x1c75f4: 0x32420008  andi        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75f0) {
            ctx->pc = 0x1C7820u;
            goto label_1c7820;
        }
    }
    ctx->pc = 0x1C75F8u;
    // 0x1c75f8: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c75f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c75fc: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1c75fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1c7600: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7600u;
    {
        const bool branch_taken_0x1c7600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7600u;
            // 0x1c7604: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7600) {
            ctx->pc = 0x1C760Cu;
            goto label_1c760c;
        }
    }
    ctx->pc = 0x1C7608u;
    // 0x1c7608: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x1c7608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_1c760c:
    // 0x1c760c: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c760cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c7610: 0x7a030060  lq          $v1, 0x60($s0)
    ctx->pc = 0x1c7610u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c7614: 0x26080050  addiu       $t0, $s0, 0x50
    ctx->pc = 0x1c7614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c7618: 0x7a020220  lq          $v0, 0x220($s0)
    ctx->pc = 0x1c7618u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1c761c: 0x7a050050  lq          $a1, 0x50($s0)
    ctx->pc = 0x1c761cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c7620: 0x70024f89  pexew       $t1, $v0
    ctx->pc = 0x1c7620u;
    SET_GPR_VEC(ctx, 9, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c7624: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1c7624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7628: 0x7a060070  lq          $a2, 0x70($s0)
    ctx->pc = 0x1c7628u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c762c: 0x7a070080  lq          $a3, 0x80($s0)
    ctx->pc = 0x1c762cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1c7630: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1c7630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1c7634: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x1c7634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x1c7638: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1c7638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c763c: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x1c763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x1c7640: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x1c7640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
    // 0x1c7644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7648: 0x70e21b89  pcpyld      $v1, $a3, $v0
    ctx->pc = 0x1c7648u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1c764c: 0x70e41389  pcpyld      $v0, $a3, $a0
    ctx->pc = 0x1c764cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x1c7650: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1c7650u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1c7654: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1c7654u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c7658: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1c7658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c765c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c765cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c7660: 0xfba30120  sqc2        $vf3, 0x120($sp)
    ctx->pc = 0x1c7660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c7664: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c7664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7668: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c7668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c766c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c766cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c7670: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c7670u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c7674: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c7674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c7678: 0x4a0002ff  vnop
    ctx->pc = 0x1c7678u;
    // NOP operation, no action needed for VU0
    // 0x1c767c: 0x4a0002ff  vnop
    ctx->pc = 0x1c767cu;
    // NOP operation, no action needed for VU0
    // 0x1c7680: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1c7680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c7684: 0xfba30120  sqc2        $vf3, 0x120($sp)
    ctx->pc = 0x1c7684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c7688: 0xf9030020  sqc2        $vf3, 0x20($t0)
    ctx->pc = 0x1c7688u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c768c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c768cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7690: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7690u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c7694: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c7694u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7698: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c7698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c769c: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x1c769cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x1c76a0: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x1c76a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c76a4: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c76a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c76a8: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1c76a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c76ac: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1c76acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c76b0: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1c76b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c76b4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c76b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c76b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c76b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c76bc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c76bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c76c0: 0x4a0002ff  vnop
    ctx->pc = 0x1c76c0u;
    // NOP operation, no action needed for VU0
    // 0x1c76c4: 0x4a0002ff  vnop
    ctx->pc = 0x1c76c4u;
    // NOP operation, no action needed for VU0
    // 0x1c76c8: 0x4bc30afe  vopmula.xyz $ACC, $vf1, $vf3
    ctx->pc = 0x1c76c8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]);
    // 0x1c76cc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1c76ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c76d0: 0x4bc1186e  vopmsub.xyz $vf1, $vf3, $vf1
    ctx->pc = 0x1c76d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c76d4: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c76d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c76d8: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1c76d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c76dc: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1c76dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c76e0: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1c76e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c76e4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c76e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c76e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c76e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c76ec: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c76ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c76f0: 0x4a0002ff  vnop
    ctx->pc = 0x1c76f0u;
    // NOP operation, no action needed for VU0
    // 0x1c76f4: 0x4a0002ff  vnop
    ctx->pc = 0x1c76f4u;
    // NOP operation, no action needed for VU0
    // 0x1c76f8: 0x4bc30afe  vopmula.xyz $ACC, $vf1, $vf3
    ctx->pc = 0x1c76f8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]);
    // 0x1c76fc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1c76fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7700: 0x4bc118ee  vopmsub.xyz $vf3, $vf3, $vf1
    ctx->pc = 0x1c7700u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c7704: 0xf9010010  sqc2        $vf1, 0x10($t0)
    ctx->pc = 0x1c7704u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7708: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1c7708u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c770c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c770cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c7710: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c7710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7714: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c7714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7718: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c7718u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c771c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c771cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c7720: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c7720u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c7724: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c7724u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c7728: 0x4a0002ff  vnop
    ctx->pc = 0x1c7728u;
    // NOP operation, no action needed for VU0
    // 0x1c772c: 0x4a0002ff  vnop
    ctx->pc = 0x1c772cu;
    // NOP operation, no action needed for VU0
    // 0x1c7730: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7734: 0xfa030050  sqc2        $vf3, 0x50($s0)
    ctx->pc = 0x1c7734u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c7738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c773c: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1c773cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c7740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c7740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7744: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7748: 0xc078f0a  jal         func_1E3C28
    ctx->pc = 0x1C7748u;
    SET_GPR_U32(ctx, 31, 0x1C7750u);
    ctx->pc = 0x1C774Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7748u;
            // 0x1c774c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C28u;
    if (runtime->hasFunction(0x1E3C28u)) {
        auto targetFn = runtime->lookupFunction(0x1E3C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7750u; }
        if (ctx->pc != 0x1C7750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3C28_0x1e3c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7750u; }
        if (ctx->pc != 0x1C7750u) { return; }
    }
    ctx->pc = 0x1C7750u;
    // 0x1c7750: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c7750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7754: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1c7754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1c7758: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C7758u;
    {
        const bool branch_taken_0x1c7758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C775Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7758u;
            // 0x1c775c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7758) {
            ctx->pc = 0x1C77D0u;
            goto label_1c77d0;
        }
    }
    ctx->pc = 0x1C7760u;
    // 0x1c7760: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c7760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c7764: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c7764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c7768: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x1c7768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x1c776c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c776cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c7770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7774: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c7774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1c7778: 0xc0719ae  jal         func_1C66B8
    ctx->pc = 0x1C7778u;
    SET_GPR_U32(ctx, 31, 0x1C7780u);
    ctx->pc = 0x1C777Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7778u;
            // 0x1c777c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C66B8u;
    if (runtime->hasFunction(0x1C66B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C66B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7780u; }
        if (ctx->pc != 0x1C7780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c66b8_0x1c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7780u; }
        if (ctx->pc != 0x1C7780u) { return; }
    }
    ctx->pc = 0x1C7780u;
    // 0x1c7780: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1c7780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1c7784: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c7784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c7788: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c778c: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c778cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c7790: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c7790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c7794: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c7794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c7798: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c779c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c779cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c77a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c77a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c77a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c77a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c77a8: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c77a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c77ac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1c77acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1c77b0: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c77b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c77b4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1c77b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1c77b8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c77b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c77bc: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c77c0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1c77c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1c77c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c77c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c77c8: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1C77C8u;
    {
        const bool branch_taken_0x1c77c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77C8u;
            // 0x1c77cc: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77c8) {
            ctx->pc = 0x1C7B08u;
            goto label_1c7b08;
        }
    }
    ctx->pc = 0x1C77D0u;
label_1c77d0:
    // 0x1c77d0: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c77d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c77d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c77d8: 0x3442e7ff  ori         $v0, $v0, 0xE7FF
    ctx->pc = 0x1c77d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59391);
    // 0x1c77dc: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x1c77dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c77e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c77e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c77e4: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x1c77e4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c77e8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1c77e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c77ec: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x1c77ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c77f0: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1c77f4: 0x7e060050  sq          $a2, 0x50($s0)
    ctx->pc = 0x1c77f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 6));
    // 0x1c77f8: 0x7e050060  sq          $a1, 0x60($s0)
    ctx->pc = 0x1c77f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 5));
    // 0x1c77fc: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x1c77fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    // 0x1c7800: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1C7800u;
    {
        const bool branch_taken_0x1c7800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7800u;
            // 0x1c7804: 0x7e040080  sq          $a0, 0x80($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7800) {
            ctx->pc = 0x1C7B08u;
            goto label_1c7b08;
        }
    }
    ctx->pc = 0x1C7808u;
label_1c7808:
    // 0x1c7808: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c7808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1c780c:
    // 0x1c780c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c780cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c7810: 0x3442e7ff  ori         $v0, $v0, 0xE7FF
    ctx->pc = 0x1c7810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59391);
    // 0x1c7814: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c7814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c7818: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1c7818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
label_1c781c:
    // 0x1c781c: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x1c781cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
label_1c7820:
    // 0x1c7820: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x1C7820u;
    {
        const bool branch_taken_0x1c7820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7820u;
            // 0x1c7824: 0x7ba20110  lq          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7820) {
            ctx->pc = 0x1C7B0Cu;
            goto label_1c7b0c;
        }
    }
    ctx->pc = 0x1C7828u;
    // 0x1c7828: 0xda030220  lqc2        $vf3, 0x220($s0)
    ctx->pc = 0x1c7828u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1c782c: 0xdba101b0  lqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x1c782cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c7830: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1c7830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c7834: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c7834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7838: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c7838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c783c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c783cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7840: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c7840u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7848: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c7848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c784c: 0x0  nop
    ctx->pc = 0x1c784cu;
    // NOP
    // 0x1c7850: 0x450000ae  bc1f        . + 4 + (0xAE << 2)
    ctx->pc = 0x1C7850u;
    {
        const bool branch_taken_0x1c7850 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7850u;
            // 0x1c7854: 0x7ba20110  lq          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7850) {
            ctx->pc = 0x1C7B0Cu;
            goto label_1c7b0c;
        }
    }
    ctx->pc = 0x1C7858u;
    // 0x1c7858: 0x4b030042  vaddz.x     $vf1, $vf0, $vf3z
    ctx->pc = 0x1c7858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c785c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1c785cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7860: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c7860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7864: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x1c7864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c7868: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1c7868u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c786c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c786cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7870: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1c7870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c7874: 0x71022389  pcpyld      $a0, $t0, $v0
    ctx->pc = 0x1c7874u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1c7878: 0x71031389  pcpyld      $v0, $t0, $v1
    ctx->pc = 0x1c7878u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x1c787c: 0x70441cc8  ppacw       $v1, $v0, $a0
    ctx->pc = 0x1c787cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1c7880: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1c7880u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c7884: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x1c7884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c7888: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c7888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c788c: 0xfba30130  sqc2        $vf3, 0x130($sp)
    ctx->pc = 0x1c788cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c7890: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c7890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7894: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c7894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7898: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c7898u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c789c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c789cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c78a0: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c78a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c78a4: 0x4a0002ff  vnop
    ctx->pc = 0x1c78a4u;
    // NOP operation, no action needed for VU0
    // 0x1c78a8: 0x4a0002ff  vnop
    ctx->pc = 0x1c78a8u;
    // NOP operation, no action needed for VU0
    // 0x1c78ac: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1c78acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c78b0: 0xfba30130  sqc2        $vf3, 0x130($sp)
    ctx->pc = 0x1c78b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c78b4: 0xf8a30020  sqc2        $vf3, 0x20($a1)
    ctx->pc = 0x1c78b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c78b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c78bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c78bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c78c0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c78c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c78c4: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c78c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c78c8: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x1c78c8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x1c78cc: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x1c78ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c78d0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c78d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c78d4: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1c78d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c78d8: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1c78d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c78dc: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1c78dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c78e0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c78e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c78e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c78e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c78e8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c78e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c78ec: 0x4a0002ff  vnop
    ctx->pc = 0x1c78ecu;
    // NOP operation, no action needed for VU0
    // 0x1c78f0: 0x4a0002ff  vnop
    ctx->pc = 0x1c78f0u;
    // NOP operation, no action needed for VU0
    // 0x1c78f4: 0x4bc30afe  vopmula.xyz $ACC, $vf1, $vf3
    ctx->pc = 0x1c78f4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]);
    // 0x1c78f8: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1c78f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c78fc: 0x4bc1186e  vopmsub.xyz $vf1, $vf3, $vf1
    ctx->pc = 0x1c78fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c7900: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c7900u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7904: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1c7904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c7908: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x1c7908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c790c: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x1c790cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c7910: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c7910u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c7914: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c7914u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c7918: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c7918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c791c: 0x4a0002ff  vnop
    ctx->pc = 0x1c791cu;
    // NOP operation, no action needed for VU0
    // 0x1c7920: 0x4a0002ff  vnop
    ctx->pc = 0x1c7920u;
    // NOP operation, no action needed for VU0
    // 0x1c7924: 0x4bc30afe  vopmula.xyz $ACC, $vf1, $vf3
    ctx->pc = 0x1c7924u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]);
    // 0x1c7928: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1c7928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c792c: 0x4bc118ee  vopmsub.xyz $vf3, $vf3, $vf1
    ctx->pc = 0x1c792cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c7930: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x1c7930u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7934: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1c7934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c7938: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c7938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c793c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c793cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7940: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c7940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7944: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c7944u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c7948: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c7948u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c794c: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c794cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c7950: 0x4a0002ff  vnop
    ctx->pc = 0x1c7950u;
    // NOP operation, no action needed for VU0
    // 0x1c7954: 0x4a0002ff  vnop
    ctx->pc = 0x1c7954u;
    // NOP operation, no action needed for VU0
    // 0x1c7958: 0xfa030050  sqc2        $vf3, 0x50($s0)
    ctx->pc = 0x1c7958u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c795c: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x1c795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
label_1c7960:
    // 0x1c7960: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c7960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1c7964:
    // 0x1c7964: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1c7964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c7968: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7968u;
    {
        const bool branch_taken_0x1c7968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7968) {
            ctx->pc = 0x1C7980u;
            goto label_1c7980;
        }
    }
    ctx->pc = 0x1C7970u;
    // 0x1c7970: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c7970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c7974: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c7974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c7978: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7978u;
    {
        const bool branch_taken_0x1c7978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7978) {
            ctx->pc = 0x1C797Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7978u;
            // 0x1c797c: 0x8e020174  lw          $v0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C79B0u;
            goto label_1c79b0;
        }
    }
    ctx->pc = 0x1C7980u;
label_1c7980:
    // 0x1c7980: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c7980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c7984: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c7984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c7988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c798c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c798cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c7990: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c7990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c7994: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1c7994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1c7998: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c799c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c799cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c79a0: 0xe6000150  swc1        $f0, 0x150($s0)
    ctx->pc = 0x1c79a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1c79a4: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x1c79a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1c79a8: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1c79a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1c79ac: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c79acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1c79b0:
    // 0x1c79b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1c79b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c79b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c79b8: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1C79B8u;
    {
        const bool branch_taken_0x1c79b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C79BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C79B8u;
            // 0x1c79bc: 0x7ba20110  lq          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79b8) {
            ctx->pc = 0x1C7B0Cu;
            goto label_1c7b0c;
        }
    }
    ctx->pc = 0x1C79C0u;
    // 0x1c79c0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1c79c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1c79c4: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x1c79c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x1c79c8: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x1c79c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1c79cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c79d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c79d4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1c79d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1c79d8: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1C79D8u;
    {
        const bool branch_taken_0x1c79d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C79D8u;
            // 0x1c79dc: 0x7ba20110  lq          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79d8) {
            ctx->pc = 0x1C7B0Cu;
            goto label_1c7b0c;
        }
    }
    ctx->pc = 0x1C79E0u;
    // 0x1c79e0: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x1c79e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x1c79e4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C79E4u;
    {
        const bool branch_taken_0x1c79e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C79E4u;
            // 0x1c79e8: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79e4) {
            ctx->pc = 0x1C7A70u;
            goto label_1c7a70;
        }
    }
    ctx->pc = 0x1C79ECu;
    // 0x1c79ec: 0xda010050  lqc2        $vf1, 0x50($s0)
    ctx->pc = 0x1c79ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c79f0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c79f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c79f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c79f8: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1c79f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c79fc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c79fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7a00: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1c7a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7a04: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c7a08: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7a08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c7a0c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c7a0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7a10: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x1c7a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7a14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c7a18: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1c7a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7a1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c7a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c7a20: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c7a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c7a24: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c7a28: 0x40f809  jalr        $v0
    ctx->pc = 0x1C7A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7A30u);
        ctx->pc = 0x1C7A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A28u;
            // 0x1c7a2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C7A30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6CACu: goto label_1c6cac;
            case 0x1C6CDCu: goto label_1c6cdc;
            case 0x1C6CFCu: goto label_1c6cfc;
            case 0x1C6D34u: goto label_1c6d34;
            case 0x1C6D64u: goto label_1c6d64;
            case 0x1C6D88u: goto label_1c6d88;
            case 0x1C6DA8u: goto label_1c6da8;
            case 0x1C6E18u: goto label_1c6e18;
            case 0x1C6E5Cu: goto label_1c6e5c;
            case 0x1C6E84u: goto label_1c6e84;
            case 0x1C6EACu: goto label_1c6eac;
            case 0x1C6F0Cu: goto label_1c6f0c;
            case 0x1C6F20u: goto label_1c6f20;
            case 0x1C6F24u: goto label_1c6f24;
            case 0x1C6F34u: goto label_1c6f34;
            case 0x1C6F3Cu: goto label_1c6f3c;
            case 0x1C700Cu: goto label_1c700c;
            case 0x1C7040u: goto label_1c7040;
            case 0x1C7050u: goto label_1c7050;
            case 0x1C7060u: goto label_1c7060;
            case 0x1C7090u: goto label_1c7090;
            case 0x1C7148u: goto label_1c7148;
            case 0x1C71E0u: goto label_1c71e0;
            case 0x1C71F8u: goto label_1c71f8;
            case 0x1C7240u: goto label_1c7240;
            case 0x1C72F8u: goto label_1c72f8;
            case 0x1C7380u: goto label_1c7380;
            case 0x1C738Cu: goto label_1c738c;
            case 0x1C7414u: goto label_1c7414;
            case 0x1C7420u: goto label_1c7420;
            case 0x1C7424u: goto label_1c7424;
            case 0x1C7468u: goto label_1c7468;
            case 0x1C7470u: goto label_1c7470;
            case 0x1C7550u: goto label_1c7550;
            case 0x1C760Cu: goto label_1c760c;
            case 0x1C77D0u: goto label_1c77d0;
            case 0x1C7808u: goto label_1c7808;
            case 0x1C780Cu: goto label_1c780c;
            case 0x1C781Cu: goto label_1c781c;
            case 0x1C7820u: goto label_1c7820;
            case 0x1C7960u: goto label_1c7960;
            case 0x1C7964u: goto label_1c7964;
            case 0x1C7980u: goto label_1c7980;
            case 0x1C79B0u: goto label_1c79b0;
            case 0x1C7A70u: goto label_1c7a70;
            case 0x1C7B00u: goto label_1c7b00;
            case 0x1C7B08u: goto label_1c7b08;
            case 0x1C7B0Cu: goto label_1c7b0c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C7A30u; }
            if (ctx->pc != 0x1C7A30u) { return; }
        }
        }
    }
    ctx->pc = 0x1C7A30u;
    // 0x1c7a30: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c7a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c7a34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7a38: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c7a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c7a3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c7a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7a40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7a40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7a44: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x1c7a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7a48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c7a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c7a4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7a50: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1c7a50u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c7a54: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x1c7a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c7a58: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1c7a58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c7a5c: 0xdba20160  lqc2        $vf2, 0x160($sp)
    ctx->pc = 0x1c7a5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1c7a60: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1c7a60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c7a64: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C7A64u;
    {
        const bool branch_taken_0x1c7a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A64u;
            // 0x1c7a68: 0xdba10110  lqc2        $vf1, 0x110($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a64) {
            ctx->pc = 0x1C7B00u;
            goto label_1c7b00;
        }
    }
    ctx->pc = 0x1C7A6Cu;
    // 0x1c7a6c: 0x0  nop
    ctx->pc = 0x1c7a6cu;
    // NOP
label_1c7a70:
    // 0x1c7a70: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C7A70u;
    {
        const bool branch_taken_0x1c7a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A70u;
            // 0x1c7a74: 0x7ba20110  lq          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a70) {
            ctx->pc = 0x1C7B0Cu;
            goto label_1c7b0c;
        }
    }
    ctx->pc = 0x1C7A78u;
    // 0x1c7a78: 0xda010050  lqc2        $vf1, 0x50($s0)
    ctx->pc = 0x1c7a78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c7a7c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c7a80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7a80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c7a84: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x1c7a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7a88: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c7a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7a8c: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x1c7a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7a90: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c7a94: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7a94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c7a98: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c7a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7a9c: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x1c7a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7aa0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c7aa4: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1c7aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7aa8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c7aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c7aac: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c7aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c7ab0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c7ab4: 0x40f809  jalr        $v0
    ctx->pc = 0x1C7AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7ABCu);
        ctx->pc = 0x1C7AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7AB4u;
            // 0x1c7ab8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C7ABCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6CACu: goto label_1c6cac;
            case 0x1C6CDCu: goto label_1c6cdc;
            case 0x1C6CFCu: goto label_1c6cfc;
            case 0x1C6D34u: goto label_1c6d34;
            case 0x1C6D64u: goto label_1c6d64;
            case 0x1C6D88u: goto label_1c6d88;
            case 0x1C6DA8u: goto label_1c6da8;
            case 0x1C6E18u: goto label_1c6e18;
            case 0x1C6E5Cu: goto label_1c6e5c;
            case 0x1C6E84u: goto label_1c6e84;
            case 0x1C6EACu: goto label_1c6eac;
            case 0x1C6F0Cu: goto label_1c6f0c;
            case 0x1C6F20u: goto label_1c6f20;
            case 0x1C6F24u: goto label_1c6f24;
            case 0x1C6F34u: goto label_1c6f34;
            case 0x1C6F3Cu: goto label_1c6f3c;
            case 0x1C700Cu: goto label_1c700c;
            case 0x1C7040u: goto label_1c7040;
            case 0x1C7050u: goto label_1c7050;
            case 0x1C7060u: goto label_1c7060;
            case 0x1C7090u: goto label_1c7090;
            case 0x1C7148u: goto label_1c7148;
            case 0x1C71E0u: goto label_1c71e0;
            case 0x1C71F8u: goto label_1c71f8;
            case 0x1C7240u: goto label_1c7240;
            case 0x1C72F8u: goto label_1c72f8;
            case 0x1C7380u: goto label_1c7380;
            case 0x1C738Cu: goto label_1c738c;
            case 0x1C7414u: goto label_1c7414;
            case 0x1C7420u: goto label_1c7420;
            case 0x1C7424u: goto label_1c7424;
            case 0x1C7468u: goto label_1c7468;
            case 0x1C7470u: goto label_1c7470;
            case 0x1C7550u: goto label_1c7550;
            case 0x1C760Cu: goto label_1c760c;
            case 0x1C77D0u: goto label_1c77d0;
            case 0x1C7808u: goto label_1c7808;
            case 0x1C780Cu: goto label_1c780c;
            case 0x1C781Cu: goto label_1c781c;
            case 0x1C7820u: goto label_1c7820;
            case 0x1C7960u: goto label_1c7960;
            case 0x1C7964u: goto label_1c7964;
            case 0x1C7980u: goto label_1c7980;
            case 0x1C79B0u: goto label_1c79b0;
            case 0x1C7A70u: goto label_1c7a70;
            case 0x1C7B00u: goto label_1c7b00;
            case 0x1C7B08u: goto label_1c7b08;
            case 0x1C7B0Cu: goto label_1c7b0c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C7ABCu; }
            if (ctx->pc != 0x1C7ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x1C7ABCu;
    // 0x1c7abc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c7abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c7ac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7ac4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c7ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c7ac8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c7ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7acc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7ad0: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x1c7ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7ad4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c7ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c7ad8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7ad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7adc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1c7adcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c7ae0: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x1c7ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1c7ae4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1c7ae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1c7ae8: 0xdba10190  lqc2        $vf1, 0x190($sp)
    ctx->pc = 0x1c7ae8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c7aec: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c7aecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7af0: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x1c7af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7af4: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1c7af4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c7af8: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c7af8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c7afc: 0xdba10110  lqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1c7afcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1c7b00:
    // 0x1c7b00: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1c7b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7b04: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1c7b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c7b08:
    // 0x1c7b08: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1c7b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1c7b0c:
    // 0x1c7b0c: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x1c7b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1c7b10: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x1c7b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1c7b14: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x1c7b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1c7b18: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x1c7b18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1c7b1c: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x1c7b1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1c7b20: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x1c7b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c7b24: 0xc7b40220  lwc1        $f20, 0x220($sp)
    ctx->pc = 0x1c7b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7b28: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B28u;
            // 0x1c7b2c: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6CACu: goto label_1c6cac;
            case 0x1C6CDCu: goto label_1c6cdc;
            case 0x1C6CFCu: goto label_1c6cfc;
            case 0x1C6D34u: goto label_1c6d34;
            case 0x1C6D64u: goto label_1c6d64;
            case 0x1C6D88u: goto label_1c6d88;
            case 0x1C6DA8u: goto label_1c6da8;
            case 0x1C6E18u: goto label_1c6e18;
            case 0x1C6E5Cu: goto label_1c6e5c;
            case 0x1C6E84u: goto label_1c6e84;
            case 0x1C6EACu: goto label_1c6eac;
            case 0x1C6F0Cu: goto label_1c6f0c;
            case 0x1C6F20u: goto label_1c6f20;
            case 0x1C6F24u: goto label_1c6f24;
            case 0x1C6F34u: goto label_1c6f34;
            case 0x1C6F3Cu: goto label_1c6f3c;
            case 0x1C700Cu: goto label_1c700c;
            case 0x1C7040u: goto label_1c7040;
            case 0x1C7050u: goto label_1c7050;
            case 0x1C7060u: goto label_1c7060;
            case 0x1C7090u: goto label_1c7090;
            case 0x1C7148u: goto label_1c7148;
            case 0x1C71E0u: goto label_1c71e0;
            case 0x1C71F8u: goto label_1c71f8;
            case 0x1C7240u: goto label_1c7240;
            case 0x1C72F8u: goto label_1c72f8;
            case 0x1C7380u: goto label_1c7380;
            case 0x1C738Cu: goto label_1c738c;
            case 0x1C7414u: goto label_1c7414;
            case 0x1C7420u: goto label_1c7420;
            case 0x1C7424u: goto label_1c7424;
            case 0x1C7468u: goto label_1c7468;
            case 0x1C7470u: goto label_1c7470;
            case 0x1C7550u: goto label_1c7550;
            case 0x1C760Cu: goto label_1c760c;
            case 0x1C77D0u: goto label_1c77d0;
            case 0x1C7808u: goto label_1c7808;
            case 0x1C780Cu: goto label_1c780c;
            case 0x1C781Cu: goto label_1c781c;
            case 0x1C7820u: goto label_1c7820;
            case 0x1C7960u: goto label_1c7960;
            case 0x1C7964u: goto label_1c7964;
            case 0x1C7980u: goto label_1c7980;
            case 0x1C79B0u: goto label_1c79b0;
            case 0x1C7A70u: goto label_1c7a70;
            case 0x1C7B00u: goto label_1c7b00;
            case 0x1C7B08u: goto label_1c7b08;
            case 0x1C7B0Cu: goto label_1c7b0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7B30u;
}
