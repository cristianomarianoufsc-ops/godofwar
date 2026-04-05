#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7D08
// Address: 0x1e7d08 - 0x1e7da8
void sub_001E7D08_0x1e7d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7D08_0x1e7d08");
#endif

    ctx->pc = 0x1e7d08u;

    // 0x1e7d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7d0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e7d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e7d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7d1c: 0xc600028c  lwc1        $f0, 0x28C($s0)
    ctx->pc = 0x1e7d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7d20: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1e7d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7d24: 0x0  nop
    ctx->pc = 0x1e7d24u;
    // NOP
    // 0x1e7d28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7D28u;
    {
        const bool branch_taken_0x1e7d28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D28u;
            // 0x1e7d2c: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d28) {
            ctx->pc = 0x1E7D34u;
            goto label_1e7d34;
        }
    }
    ctx->pc = 0x1E7D30u;
    // 0x1e7d30: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1e7d30u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1e7d34:
    // 0x1e7d34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7d38: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E7D38u;
    {
        const bool branch_taken_0x1e7d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D38u;
            // 0x1e7d3c: 0xe6010288  swc1        $f1, 0x288($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d38) {
            ctx->pc = 0x1E7D90u;
            goto label_1e7d90;
        }
    }
    ctx->pc = 0x1E7D40u;
    // 0x1e7d40: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1e7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1e7d44: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E7D44u;
    {
        const bool branch_taken_0x1e7d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d44) {
            ctx->pc = 0x1E7D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D44u;
            // 0x1e7d48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7D94u;
            goto label_1e7d94;
        }
    }
    ctx->pc = 0x1E7D4Cu;
    // 0x1e7d4c: 0x8c510088  lw          $s1, 0x88($v0)
    ctx->pc = 0x1e7d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1e7d50: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E7D50u;
    {
        const bool branch_taken_0x1e7d50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d50) {
            ctx->pc = 0x1E7D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D50u;
            // 0x1e7d54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7D94u;
            goto label_1e7d94;
        }
    }
    ctx->pc = 0x1E7D58u;
    // 0x1e7d58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e7d5c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1e7d5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1e7d60: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1e7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1e7d64: 0x40f809  jalr        $v0
    ctx->pc = 0x1E7D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E7D6Cu);
        ctx->pc = 0x1E7D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D64u;
            // 0x1e7d68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7D6Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7D34u: goto label_1e7d34;
            case 0x1E7D90u: goto label_1e7d90;
            case 0x1E7D94u: goto label_1e7d94;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D6Cu; }
            if (ctx->pc != 0x1E7D6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E7D6Cu;
    // 0x1e7d6c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1e7d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1e7d70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7d74: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1e7d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1e7d78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e7d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e7d7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e7d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e7d80: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x1e7d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7d84: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e7d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e7d88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e7d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e7d8c: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1e7d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_1e7d90:
    // 0x1e7d90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e7d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e7d94:
    // 0x1e7d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D9Cu;
            // 0x1e7da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7D34u: goto label_1e7d34;
            case 0x1E7D90u: goto label_1e7d90;
            case 0x1E7D94u: goto label_1e7d94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7DA4u;
    // 0x1e7da4: 0x0  nop
    ctx->pc = 0x1e7da4u;
    // NOP
}
