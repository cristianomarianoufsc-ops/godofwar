#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f0148
// Address: 0x1f0148 - 0x1f0210
void entry_1f0148_0x1f0210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f0148_0x1f0210");
#endif

    ctx->pc = 0x1f0148u;

    // 0x1f0148: 0x460d7001  sub.s       $f0, $f14, $f13
    ctx->pc = 0x1f0148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x1f014c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f014cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f0150: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f0150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f0154: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f0154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0158: 0x0  nop
    ctx->pc = 0x1f0158u;
    // NOP
    // 0x1f015c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F015Cu;
    {
        const bool branch_taken_0x1f015c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f015c) {
            ctx->pc = 0x1F0160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F015Cu;
            // 0x1f0160: 0x460e6840  add.s       $f1, $f13, $f14 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0170u;
            goto label_1f0170;
        }
    }
    ctx->pc = 0x1F0164u;
    // 0x1f0164: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0168: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0170u: goto label_1f0170;
            case 0x1F019Cu: goto label_1f019c;
            case 0x1F01A8u: goto label_1f01a8;
            case 0x1F01C8u: goto label_1f01c8;
            case 0x1F01E0u: goto label_1f01e0;
            case 0x1F0204u: goto label_1f0204;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0170u;
label_1f0170:
    // 0x1f0170: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f0170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f0174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0178: 0x460d7034  c.lt.s      $f14, $f13
    ctx->pc = 0x1f0178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f017c: 0x0  nop
    ctx->pc = 0x1f017cu;
    // NOP
    // 0x1f0180: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0180u;
    {
        const bool branch_taken_0x1f0180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0180u;
            // 0x1f0184: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0180) {
            ctx->pc = 0x1F01A8u;
            goto label_1f01a8;
        }
    }
    ctx->pc = 0x1F0188u;
    // 0x1f0188: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x1f0188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f018c: 0x0  nop
    ctx->pc = 0x1f018cu;
    // NOP
    // 0x1f0190: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0190u;
    {
        const bool branch_taken_0x1f0190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0190) {
            ctx->pc = 0x1F0194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0190u;
            // 0x1f0194: 0x460c6841  sub.s       $f1, $f13, $f12 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F019Cu;
            goto label_1f019c;
        }
    }
    ctx->pc = 0x1F0198u;
    // 0x1f0198: 0x460e6041  sub.s       $f1, $f12, $f14
    ctx->pc = 0x1f0198u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
label_1f019c:
    // 0x1f019c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f019cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f01a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F01A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F01A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01A0u;
            // 0x1f01a4: 0x46010028  max.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0170u: goto label_1f0170;
            case 0x1F019Cu: goto label_1f019c;
            case 0x1F01A8u: goto label_1f01a8;
            case 0x1F01C8u: goto label_1f01c8;
            case 0x1F01E0u: goto label_1f01e0;
            case 0x1F0204u: goto label_1f0204;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F01A8u;
label_1f01a8:
    // 0x1f01a8: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x1f01a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1f01ac: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x1f01acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x1f01b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f01b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f01b4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f01b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f01b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F01B8u;
    {
        const bool branch_taken_0x1f01b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f01b8) {
            ctx->pc = 0x1F01C8u;
            goto label_1f01c8;
        }
    }
    ctx->pc = 0x1F01C0u;
    // 0x1f01c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F01C0u;
    {
        const bool branch_taken_0x1f01c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F01C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01C0u;
            // 0x1f01c4: 0x46026300  add.s       $f12, $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01c0) {
            ctx->pc = 0x1F01E0u;
            goto label_1f01e0;
        }
    }
    ctx->pc = 0x1F01C8u;
label_1f01c8:
    // 0x1f01c8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f01c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f01cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f01ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f01d0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1f01d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f01d4: 0x0  nop
    ctx->pc = 0x1f01d4u;
    // NOP
    // 0x1f01d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F01D8u;
    {
        const bool branch_taken_0x1f01d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f01d8) {
            ctx->pc = 0x1F01DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01D8u;
            // 0x1f01dc: 0x46026301  sub.s       $f12, $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F01E0u;
            goto label_1f01e0;
        }
    }
    ctx->pc = 0x1F01E0u;
label_1f01e0:
    // 0x1f01e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f01e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f01e4: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x1f01e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f01e8: 0x0  nop
    ctx->pc = 0x1f01e8u;
    // NOP
    // 0x1f01ec: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1F01ECu;
    {
        const bool branch_taken_0x1f01ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f01ec) {
            ctx->pc = 0x1F01F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01ECu;
            // 0x1f01f0: 0x46016801  sub.s       $f0, $f13, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0204u;
            goto label_1f0204;
        }
    }
    ctx->pc = 0x1F01F4u;
    // 0x1f01f4: 0x460e6001  sub.s       $f0, $f12, $f14
    ctx->pc = 0x1f01f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x1f01f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f01f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f01fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F01FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01FCu;
            // 0x1f0200: 0x46001028  max.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0170u: goto label_1f0170;
            case 0x1F019Cu: goto label_1f019c;
            case 0x1F01A8u: goto label_1f01a8;
            case 0x1F01C8u: goto label_1f01c8;
            case 0x1F01E0u: goto label_1f01e0;
            case 0x1F0204u: goto label_1f0204;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0204u;
label_1f0204:
    // 0x1f0204: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1f0204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1f0208: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F020Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0208u;
            // 0x1f020c: 0x46001028  max.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0170u: goto label_1f0170;
            case 0x1F019Cu: goto label_1f019c;
            case 0x1F01A8u: goto label_1f01a8;
            case 0x1F01C8u: goto label_1f01c8;
            case 0x1F01E0u: goto label_1f01e0;
            case 0x1F0204u: goto label_1f0204;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0210u;
}
