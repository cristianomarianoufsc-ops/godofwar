#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183ca8
// Address: 0x183ca8 - 0x183d78
void entry_183ca8_0x183d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183ca8_0x183d78");
#endif

    ctx->pc = 0x183ca8u;

    // 0x183ca8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x183ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183cac: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x183cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183cb0: 0x0  nop
    ctx->pc = 0x183cb0u;
    // NOP
    // 0x183cb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x183CB4u;
    {
        const bool branch_taken_0x183cb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183CB4u;
            // 0x183cb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183cb4) {
            ctx->pc = 0x183CC0u;
            goto label_183cc0;
        }
    }
    ctx->pc = 0x183CBCu;
    // 0x183cbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x183cbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183cc0:
    // 0x183cc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x183cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x183cc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183cc8: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x183cc8u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x183ccc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x183cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183cd0: 0x0  nop
    ctx->pc = 0x183cd0u;
    // NOP
    // 0x183cd4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x183CD4u;
    {
        const bool branch_taken_0x183cd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183CD4u;
            // 0x183cd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183cd4) {
            ctx->pc = 0x183CE0u;
            goto label_183ce0;
        }
    }
    ctx->pc = 0x183CDCu;
    // 0x183cdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183ce0:
    // 0x183ce0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x183CE0u;
    {
        const bool branch_taken_0x183ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183ce0) {
            ctx->pc = 0x183CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183CE0u;
            // 0x183ce4: 0x460c6042  mul.s       $f1, $f12, $f12 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x183CF0u;
            goto label_183cf0;
        }
    }
    ctx->pc = 0x183CE8u;
    // 0x183ce8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x183ce8u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x183cec: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x183cecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_183cf0:
    // 0x183cf0: 0x3c013caa  lui         $at, 0x3CAA
    ctx->pc = 0x183cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15530 << 16));
    // 0x183cf4: 0x3421ae5f  ori         $at, $at, 0xAE5F
    ctx->pc = 0x183cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44639);
    // 0x183cf8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x183cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x183cfc: 0x3c013dae  lui         $at, 0x3DAE
    ctx->pc = 0x183cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15790 << 16));
    // 0x183d00: 0x34215a36  ori         $at, $at, 0x5A36
    ctx->pc = 0x183d00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23094);
    // 0x183d04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x183d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183d08: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x183d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x183d0c: 0x342176e2  ori         $at, $at, 0x76E2
    ctx->pc = 0x183d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30434);
    // 0x183d10: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x183d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x183d14: 0x46060802  mul.s       $f0, $f1, $f6
    ctx->pc = 0x183d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x183d18: 0x3c013ea9  lui         $at, 0x3EA9
    ctx->pc = 0x183d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16041 << 16));
    // 0x183d1c: 0x34211d04  ori         $at, $at, 0x1D04
    ctx->pc = 0x183d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7428);
    // 0x183d20: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x183d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x183d24: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x183d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x183d28: 0x3421f738  ori         $at, $at, 0xF738
    ctx->pc = 0x183d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63288);
    // 0x183d2c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x183d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x183d30: 0x46020181  sub.s       $f6, $f0, $f2
    ctx->pc = 0x183d30u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x183d34: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x183d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x183d38: 0x46030180  add.s       $f6, $f0, $f3
    ctx->pc = 0x183d38u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x183d3c: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x183d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x183d40: 0x46040181  sub.s       $f6, $f0, $f4
    ctx->pc = 0x183d40u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x183d44: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x183d44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x183d48: 0x46050980  add.s       $f6, $f1, $f5
    ctx->pc = 0x183d48u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x183d4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x183D4Cu;
    {
        const bool branch_taken_0x183d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D4Cu;
            // 0x183d50: 0x460c3182  mul.s       $f6, $f6, $f12 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d4c) {
            ctx->pc = 0x183D64u;
            goto label_183d64;
        }
    }
    ctx->pc = 0x183D54u;
    // 0x183d54: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x183d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x183d58: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183d58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183d5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183d60: 0x46060181  sub.s       $f6, $f0, $f6
    ctx->pc = 0x183d60u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_183d64:
    // 0x183d64: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x183D64u;
    {
        const bool branch_taken_0x183d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x183d64) {
            ctx->pc = 0x183D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183D64u;
            // 0x183d68: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
        ctx->f[6] = FPU_NEG_S(ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x183D6Cu;
            goto label_183d6c;
        }
    }
    ctx->pc = 0x183D6Cu;
label_183d6c:
    // 0x183d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x183D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D6Cu;
            // 0x183d70: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183CC0u: goto label_183cc0;
            case 0x183CE0u: goto label_183ce0;
            case 0x183CF0u: goto label_183cf0;
            case 0x183D64u: goto label_183d64;
            case 0x183D6Cu: goto label_183d6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183D74u;
    // 0x183d74: 0x0  nop
    ctx->pc = 0x183d74u;
    // NOP
}
