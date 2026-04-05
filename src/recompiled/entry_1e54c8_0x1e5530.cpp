#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1e54c8
// Address: 0x1e54c8 - 0x1e5530
void entry_1e54c8_0x1e5530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1e54c8_0x1e5530");
#endif

    ctx->pc = 0x1e54c8u;

    // 0x1e54c8: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1e54c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1e54cc: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1e54ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1e54d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e54d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e54d4: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x1e54d4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x1e54d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e54d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e54dc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1E54DCu;
    {
        const bool branch_taken_0x1e54dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e54dc) {
            ctx->pc = 0x1E551Cu;
            goto label_1e551c;
        }
    }
    ctx->pc = 0x1E54E4u;
    // 0x1e54e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e54e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e54e8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1e54e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e54ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E54ECu;
    {
        const bool branch_taken_0x1e54ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e54ec) {
            ctx->pc = 0x1E5504u;
            goto label_1e5504;
        }
    }
    ctx->pc = 0x1E54F4u;
    // 0x1e54f4: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x1e54f4u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x1e54f8: 0x460c6834  c.lt.s      $f13, $f12
    ctx->pc = 0x1e54f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e54fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E54FCu;
    {
        const bool branch_taken_0x1e54fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e54fc) {
            ctx->pc = 0x1E550Cu;
            goto label_1e550c;
        }
    }
    ctx->pc = 0x1E5504u;
label_1e5504:
    // 0x1e5504: 0x460d6034  c.lt.s      $f12, $f13
    ctx->pc = 0x1e5504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5508: 0x0  nop
    ctx->pc = 0x1e5508u;
    // NOP
label_1e550c:
    // 0x1e550c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1E550Cu;
    {
        const bool branch_taken_0x1e550c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e550c) {
            ctx->pc = 0x1E5510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E550Cu;
            // 0x1e5510: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5520u;
            goto label_1e5520;
        }
    }
    ctx->pc = 0x1E5514u;
    // 0x1e5514: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5514u;
            // 0x1e5518: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5504u: goto label_1e5504;
            case 0x1E550Cu: goto label_1e550c;
            case 0x1E551Cu: goto label_1e551c;
            case 0x1E5520u: goto label_1e5520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E551Cu;
label_1e551c:
    // 0x1e551c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e551cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e5520:
    // 0x1e5520: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1e5520u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1e5524: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5504u: goto label_1e5504;
            case 0x1E550Cu: goto label_1e550c;
            case 0x1E551Cu: goto label_1e551c;
            case 0x1E5520u: goto label_1e5520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E552Cu;
    // 0x1e552c: 0x0  nop
    ctx->pc = 0x1e552cu;
    // NOP
}
