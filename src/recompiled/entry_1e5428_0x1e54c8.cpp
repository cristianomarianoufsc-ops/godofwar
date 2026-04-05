#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1e5428
// Address: 0x1e5428 - 0x1e54c8
void entry_1e5428_0x1e54c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1e5428_0x1e54c8");
#endif

    ctx->pc = 0x1e5428u;

    // 0x1e5428: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1e5428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1e542c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1e542cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1e5430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e5430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5434: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x1e5434u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x1e5438: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e5438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e543c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1E543Cu;
    {
        const bool branch_taken_0x1e543c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e543c) {
            ctx->pc = 0x1E5464u;
            goto label_1e5464;
        }
    }
    ctx->pc = 0x1E5444u;
    // 0x1e5444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5448: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1e5448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e544c: 0x0  nop
    ctx->pc = 0x1e544cu;
    // NOP
    // 0x1e5450: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5450u;
    {
        const bool branch_taken_0x1e5450 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5450) {
            ctx->pc = 0x1E5454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5450u;
            // 0x1e5454: 0x46106328  max.s       $f12, $f12, $f16 (Delay Slot)
        ctx->f[12] = std::max(ctx->f[12], ctx->f[16]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5468u;
            goto label_1e5468;
        }
    }
    ctx->pc = 0x1E5458u;
    // 0x1e5458: 0x46008007  neg.s       $f0, $f16
    ctx->pc = 0x1e5458u;
    ctx->f[0] = FPU_NEG_S(ctx->f[16]);
    // 0x1e545c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E545Cu;
    {
        const bool branch_taken_0x1e545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E545Cu;
            // 0x1e5460: 0x46006329  min.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e545c) {
            ctx->pc = 0x1E5468u;
            goto label_1e5468;
        }
    }
    ctx->pc = 0x1E5464u;
label_1e5464:
    // 0x1e5464: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e5464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e5468:
    // 0x1e5468: 0x460c6834  c.lt.s      $f13, $f12
    ctx->pc = 0x1e5468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e546c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1E546Cu;
    {
        const bool branch_taken_0x1e546c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e546c) {
            ctx->pc = 0x1E549Cu;
            goto label_1e549c;
        }
    }
    ctx->pc = 0x1E5474u;
    // 0x1e5474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5478: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1e5478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e547c: 0x0  nop
    ctx->pc = 0x1e547cu;
    // NOP
    // 0x1e5480: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5480u;
    {
        const bool branch_taken_0x1e5480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5480) {
            ctx->pc = 0x1E5484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5480u;
            // 0x1e5484: 0x460f6800  add.s       $f0, $f13, $f15 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5494u;
            goto label_1e5494;
        }
    }
    ctx->pc = 0x1E5488u;
    // 0x1e5488: 0x460e6800  add.s       $f0, $f13, $f14
    ctx->pc = 0x1e5488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
    // 0x1e548c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E548Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E548Cu;
            // 0x1e5490: 0x46006029  min.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = std::min(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5464u: goto label_1e5464;
            case 0x1E5468u: goto label_1e5468;
            case 0x1E5494u: goto label_1e5494;
            case 0x1E549Cu: goto label_1e549c;
            case 0x1E54BCu: goto label_1e54bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5494u;
label_1e5494:
    // 0x1e5494: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5494u;
            // 0x1e5498: 0x46006029  min.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = std::min(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5464u: goto label_1e5464;
            case 0x1E5468u: goto label_1e5468;
            case 0x1E5494u: goto label_1e5494;
            case 0x1E549Cu: goto label_1e549c;
            case 0x1E54BCu: goto label_1e54bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E549Cu;
label_1e549c:
    // 0x1e549c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e549cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e54a0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1e54a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e54a4: 0x0  nop
    ctx->pc = 0x1e54a4u;
    // NOP
    // 0x1e54a8: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1E54A8u;
    {
        const bool branch_taken_0x1e54a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e54a8) {
            ctx->pc = 0x1E54ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54A8u;
            // 0x1e54ac: 0x460e6801  sub.s       $f0, $f13, $f14 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[14]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E54BCu;
            goto label_1e54bc;
        }
    }
    ctx->pc = 0x1E54B0u;
    // 0x1e54b0: 0x460f6801  sub.s       $f0, $f13, $f15
    ctx->pc = 0x1e54b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x1e54b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E54B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E54B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54B4u;
            // 0x1e54b8: 0x46006028  max.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5464u: goto label_1e5464;
            case 0x1E5468u: goto label_1e5468;
            case 0x1E5494u: goto label_1e5494;
            case 0x1E549Cu: goto label_1e549c;
            case 0x1E54BCu: goto label_1e54bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E54BCu;
label_1e54bc:
    // 0x1e54bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E54BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E54C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54BCu;
            // 0x1e54c0: 0x46006028  max.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5464u: goto label_1e5464;
            case 0x1E5468u: goto label_1e5468;
            case 0x1E5494u: goto label_1e5494;
            case 0x1E549Cu: goto label_1e549c;
            case 0x1E54BCu: goto label_1e54bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E54C4u;
    // 0x1e54c4: 0x0  nop
    ctx->pc = 0x1e54c4u;
    // NOP
}
