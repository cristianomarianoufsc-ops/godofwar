#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183d78
// Address: 0x183d78 - 0x183e20
void entry_183d78_0x183e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183d78_0x183e20");
#endif

    ctx->pc = 0x183d78u;

    // 0x183d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x183d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183d7c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x183d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183d80: 0x0  nop
    ctx->pc = 0x183d80u;
    // NOP
    // 0x183d84: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x183D84u;
    {
        const bool branch_taken_0x183d84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D84u;
            // 0x183d88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d84) {
            ctx->pc = 0x183D90u;
            goto label_183d90;
        }
    }
    ctx->pc = 0x183D8Cu;
    // 0x183d8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183d90:
    // 0x183d90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x183d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x183d94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183d98: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x183d98u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x183d9c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x183d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183da0: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x183DA0u;
    {
        const bool branch_taken_0x183da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183da0) {
            ctx->pc = 0x183E14u;
            goto label_183e14;
        }
    }
    ctx->pc = 0x183DA8u;
    // 0x183da8: 0x3c01bc99  lui         $at, 0xBC99
    ctx->pc = 0x183da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48281 << 16));
    // 0x183dac: 0x34216e30  ori         $at, $at, 0x6E30
    ctx->pc = 0x183dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28208);
    // 0x183db0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183db4: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x183db4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x183db8: 0x3c013d98  lui         $at, 0x3D98
    ctx->pc = 0x183db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15768 << 16));
    // 0x183dbc: 0x34211627  ori         $at, $at, 0x1627
    ctx->pc = 0x183dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5671);
    // 0x183dc0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x183dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x183dc4: 0x46010044  c1          0x10044
    ctx->pc = 0x183dc4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x183dc8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x183dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x183dcc: 0x3c013e59  lui         $at, 0x3E59
    ctx->pc = 0x183dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15961 << 16));
    // 0x183dd0: 0x34213484  ori         $at, $at, 0x3484
    ctx->pc = 0x183dd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13444);
    // 0x183dd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x183dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183dd8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x183dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x183ddc: 0x34210da4  ori         $at, $at, 0xDA4
    ctx->pc = 0x183ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3492);
    // 0x183de0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x183de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x183de4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x183de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x183de8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183dec: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x183decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x183df0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x183df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x183df4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x183df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x183df8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x183df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x183dfc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x183dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x183e00: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x183e00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x183e04: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x183e04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x183e08: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x183E08u;
    {
        const bool branch_taken_0x183e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E08u;
            // 0x183e0c: 0x46012801  sub.s       $f0, $f5, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e08) {
            ctx->pc = 0x183E14u;
            goto label_183e14;
        }
    }
    ctx->pc = 0x183E10u;
    // 0x183e10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x183e10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_183e14:
    // 0x183e14: 0x3e00008  jr          $ra
    ctx->pc = 0x183E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183D90u: goto label_183d90;
            case 0x183E14u: goto label_183e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183E1Cu;
    // 0x183e1c: 0x0  nop
    ctx->pc = 0x183e1cu;
    // NOP
}
