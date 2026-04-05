#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020CF30
// Address: 0x20cf30 - 0x20cf98
void sub_0020CF30_0x20cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CF30_0x20cf30");
#endif

    ctx->pc = 0x20cf30u;

    // 0x20cf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20cf34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20cf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20cf38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cf3c: 0xc08362c  jal         func_20D8B0
    ctx->pc = 0x20CF3Cu;
    SET_GPR_U32(ctx, 31, 0x20CF44u);
    ctx->pc = 0x20CF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF3Cu;
            // 0x20cf40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D8B0u;
    if (runtime->hasFunction(0x20D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x20D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CF44u; }
        if (ctx->pc != 0x20CF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D8B0_0x20d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CF44u; }
        if (ctx->pc != 0x20CF44u) { return; }
    }
    ctx->pc = 0x20CF44u;
    // 0x20cf44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20cf48: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20cf4c: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x20cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x20cf50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20cf54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cf58: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x20cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x20cf5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CF5Cu;
    {
        const bool branch_taken_0x20cf5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF5Cu;
            // 0x20cf60: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf5c) {
            ctx->pc = 0x20CF70u;
            goto label_20cf70;
        }
    }
    ctx->pc = 0x20CF64u;
    // 0x20cf64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20CF64u;
    {
        const bool branch_taken_0x20cf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF64u;
            // 0x20cf68: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf64) {
            ctx->pc = 0x20CF74u;
            goto label_20cf74;
        }
    }
    ctx->pc = 0x20CF6Cu;
    // 0x20cf6c: 0x0  nop
    ctx->pc = 0x20cf6cu;
    // NOP
label_20cf70:
    // 0x20cf70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20cf70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cf74:
    // 0x20cf74: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x20cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cf78: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x20cf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x20cf7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20cf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20cf80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20cf80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cf84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20cf84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20cf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cf8c: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x20cf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x20cf90: 0x3e00008  jr          $ra
    ctx->pc = 0x20CF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF90u;
            // 0x20cf94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CF70u: goto label_20cf70;
            case 0x20CF74u: goto label_20cf74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20CF98u;
}
