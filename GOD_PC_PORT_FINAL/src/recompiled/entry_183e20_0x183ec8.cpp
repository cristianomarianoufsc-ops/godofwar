#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183e20
// Address: 0x183e20 - 0x183ec8
void entry_183e20_0x183ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183e20_0x183ec8");
#endif

    ctx->pc = 0x183e20u;

    // 0x183e20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x183e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183e24: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x183e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183e28: 0x0  nop
    ctx->pc = 0x183e28u;
    // NOP
    // 0x183e2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x183E2Cu;
    {
        const bool branch_taken_0x183e2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E2Cu;
            // 0x183e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e2c) {
            ctx->pc = 0x183E38u;
            goto label_183e38;
        }
    }
    ctx->pc = 0x183E34u;
    // 0x183e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183e38:
    // 0x183e38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x183e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x183e3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183e40: 0x46006145  abs.s       $f5, $f12
    ctx->pc = 0x183e40u;
    ctx->f[5] = FPU_ABS_S(ctx->f[12]);
    // 0x183e44: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x183e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183e48: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x183E48u;
    {
        const bool branch_taken_0x183e48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183e48) {
            ctx->pc = 0x183EBCu;
            goto label_183ebc;
        }
    }
    ctx->pc = 0x183E50u;
    // 0x183e50: 0x3c01bc99  lui         $at, 0xBC99
    ctx->pc = 0x183e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48281 << 16));
    // 0x183e54: 0x34216e30  ori         $at, $at, 0x6E30
    ctx->pc = 0x183e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28208);
    // 0x183e58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183e5c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x183e5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x183e60: 0x3c013d98  lui         $at, 0x3D98
    ctx->pc = 0x183e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15768 << 16));
    // 0x183e64: 0x34211627  ori         $at, $at, 0x1627
    ctx->pc = 0x183e64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5671);
    // 0x183e68: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x183e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x183e6c: 0x46010044  c1          0x10044
    ctx->pc = 0x183e6cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x183e70: 0x460c2802  mul.s       $f0, $f5, $f12
    ctx->pc = 0x183e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x183e74: 0x3c013e59  lui         $at, 0x3E59
    ctx->pc = 0x183e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15961 << 16));
    // 0x183e78: 0x34213484  ori         $at, $at, 0x3484
    ctx->pc = 0x183e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13444);
    // 0x183e7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x183e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183e80: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x183e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x183e84: 0x34210da4  ori         $at, $at, 0xDA4
    ctx->pc = 0x183e84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3492);
    // 0x183e88: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x183e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x183e8c: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x183e8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x183e90: 0x46056002  mul.s       $f0, $f12, $f5
    ctx->pc = 0x183e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x183e94: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x183e94u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x183e98: 0x46056002  mul.s       $f0, $f12, $f5
    ctx->pc = 0x183e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x183e9c: 0x46040300  add.s       $f12, $f0, $f4
    ctx->pc = 0x183e9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x183ea0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x183EA0u;
    {
        const bool branch_taken_0x183ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183EA0u;
            // 0x183ea4: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ea0) {
            ctx->pc = 0x183EB8u;
            goto label_183eb8;
        }
    }
    ctx->pc = 0x183EA8u;
    // 0x183ea8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x183ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x183eac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183eb4: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x183eb4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_183eb8:
    // 0x183eb8: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x183eb8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_183ebc:
    // 0x183ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x183EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183E38u: goto label_183e38;
            case 0x183EB8u: goto label_183eb8;
            case 0x183EBCu: goto label_183ebc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183EC4u;
    // 0x183ec4: 0x0  nop
    ctx->pc = 0x183ec4u;
    // NOP
}
