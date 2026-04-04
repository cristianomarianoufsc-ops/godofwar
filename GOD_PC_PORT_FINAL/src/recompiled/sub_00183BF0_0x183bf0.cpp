#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183BF0
// Address: 0x183bf0 - 0x183ca8
void sub_00183BF0_0x183bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183BF0_0x183bf0");
#endif

    ctx->pc = 0x183bf0u;

    // 0x183bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x183bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183bf8: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x183bf8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x183bfc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x183bfcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x183c00: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x183c00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x183c04: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x183c04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183c0c: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x183c0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x183c10: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x183C10u;
    {
        const bool branch_taken_0x183c10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x183C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C10u;
            // 0x183c14: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c10) {
            ctx->pc = 0x183C34u;
            goto label_183c34;
        }
    }
    ctx->pc = 0x183C18u;
    // 0x183c18: 0xc060ef0  jal         func_183BC0
    ctx->pc = 0x183C18u;
    SET_GPR_U32(ctx, 31, 0x183C20u);
    ctx->pc = 0x183BC0u;
    if (runtime->hasFunction(0x183BC0u)) {
        auto targetFn = runtime->lookupFunction(0x183BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C20u; }
        if (ctx->pc != 0x183C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183bc0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C20u; }
        if (ctx->pc != 0x183C20u) { return; }
    }
    ctx->pc = 0x183C20u;
    // 0x183c20: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x183c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x183c24: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183c28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183c2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x183C2Cu;
    {
        const bool branch_taken_0x183c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C2Cu;
            // 0x183c30: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c2c) {
            ctx->pc = 0x183C90u;
            goto label_183c90;
        }
    }
    ctx->pc = 0x183C34u;
label_183c34:
    // 0x183c34: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x183c34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x183c38: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x183c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183c3c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x183C3Cu;
    {
        const bool branch_taken_0x183c3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183c3c) {
            ctx->pc = 0x183C80u;
            goto label_183c80;
        }
    }
    ctx->pc = 0x183C44u;
    // 0x183c44: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x183c44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183c48: 0x0  nop
    ctx->pc = 0x183c48u;
    // NOP
    // 0x183c4c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x183C4Cu;
    {
        const bool branch_taken_0x183c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x183C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C4Cu;
            // 0x183c50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c4c) {
            ctx->pc = 0x183C68u;
            goto label_183c68;
        }
    }
    ctx->pc = 0x183C54u;
    // 0x183c54: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x183c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x183c58: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183c58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183c60: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x183C60u;
    {
        const bool branch_taken_0x183c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C60u;
            // 0x183c64: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c60) {
            ctx->pc = 0x183C98u;
            goto label_183c98;
        }
    }
    ctx->pc = 0x183C68u;
label_183c68:
    // 0x183c68: 0xc060ef0  jal         func_183BC0
    ctx->pc = 0x183C68u;
    SET_GPR_U32(ctx, 31, 0x183C70u);
    ctx->pc = 0x183C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183C68u;
            // 0x183c6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183BC0u;
    if (runtime->hasFunction(0x183BC0u)) {
        auto targetFn = runtime->lookupFunction(0x183BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C70u; }
        if (ctx->pc != 0x183C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183bc0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C70u; }
        if (ctx->pc != 0x183C70u) { return; }
    }
    ctx->pc = 0x183C70u;
    // 0x183c70: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x183c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x183c74: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183c78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183c7c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x183c7cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_183c80:
    // 0x183c80: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x183c80u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x183c84: 0xc060f2a  jal         func_183CA8
    ctx->pc = 0x183C84u;
    SET_GPR_U32(ctx, 31, 0x183C8Cu);
    ctx->pc = 0x183CA8u;
    if (runtime->hasFunction(0x183CA8u)) {
        auto targetFn = runtime->lookupFunction(0x183CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C8Cu; }
        if (ctx->pc != 0x183C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183ca8_0x183d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C8Cu; }
        if (ctx->pc != 0x183C8Cu) { return; }
    }
    ctx->pc = 0x183C8Cu;
    // 0x183c8c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x183c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_183c90:
    // 0x183c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183c94: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x183c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_183c98:
    // 0x183c98: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x183c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x183c9c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x183c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x183ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x183CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183CA0u;
            // 0x183ca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183C34u: goto label_183c34;
            case 0x183C68u: goto label_183c68;
            case 0x183C80u: goto label_183c80;
            case 0x183C90u: goto label_183c90;
            case 0x183C98u: goto label_183c98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183CA8u;
}
