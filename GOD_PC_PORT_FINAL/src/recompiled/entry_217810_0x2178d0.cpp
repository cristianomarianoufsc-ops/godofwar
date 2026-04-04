#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_217810
// Address: 0x217810 - 0x2178d0
void entry_217810_0x2178d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_217810_0x2178d0");
#endif

    ctx->pc = 0x217810u;

    // 0x217810: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x217810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x217814: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x217814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x217818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21781c: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x21781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x217820: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x217820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x217824: 0xc4a4001c  lwc1        $f4, 0x1C($a1)
    ctx->pc = 0x217824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x217828: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x217828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x21782c: 0x0  nop
    ctx->pc = 0x21782cu;
    // NOP
label_217830:
    // 0x217830: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x217830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x217834: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x217834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x217838: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x217838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21783c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x217840: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x217840u;
    {
        const bool branch_taken_0x217840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217840) {
            ctx->pc = 0x217844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217840u;
            // 0x217844: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217890u;
            goto label_217890;
        }
    }
    ctx->pc = 0x217848u;
    // 0x217848: 0x50650011  beql        $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x217848u;
    {
        const bool branch_taken_0x217848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x217848) {
            ctx->pc = 0x21784Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217848u;
            // 0x21784c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217890u;
            goto label_217890;
        }
    }
    ctx->pc = 0x217850u;
    // 0x217850: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x217850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217854: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x217854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x217858: 0x46002040  add.s       $f1, $f4, $f0
    ctx->pc = 0x217858u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x21785c: 0x460c10c1  sub.s       $f3, $f2, $f12
    ctx->pc = 0x21785cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x217860: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x217860u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x217864: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x217864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217868: 0x0  nop
    ctx->pc = 0x217868u;
    // NOP
    // 0x21786c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x21786Cu;
    {
        const bool branch_taken_0x21786c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21786c) {
            ctx->pc = 0x217870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21786Cu;
            // 0x217870: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217890u;
            goto label_217890;
        }
    }
    ctx->pc = 0x217874u;
    // 0x217874: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x217874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217878: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x217878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21787c: 0x0  nop
    ctx->pc = 0x21787cu;
    // NOP
    // 0x217880: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x217880u;
    {
        const bool branch_taken_0x217880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217880) {
            ctx->pc = 0x217884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217880u;
            // 0x217884: 0x46011301  sub.s       $f12, $f2, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21788Cu;
            goto label_21788c;
        }
    }
    ctx->pc = 0x217888u;
    // 0x217888: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x217888u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_21788c:
    // 0x21788c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21788cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_217890:
    // 0x217890: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x217890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x217894: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x217894u;
    {
        const bool branch_taken_0x217894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217894u;
            // 0x217898: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217894) {
            ctx->pc = 0x217830u;
            runtime->cooperativeGuestYield();
            goto label_217830;
        }
    }
    ctx->pc = 0x21789Cu;
    // 0x21789c: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x21789cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2178a0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2178a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2178a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2178a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2178a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2178a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2178ac: 0x46006028  max.s       $f0, $f12, $f0
    ctx->pc = 0x2178acu;
    ctx->f[0] = std::max(ctx->f[12], ctx->f[0]);
    // 0x2178b0: 0x46010329  min.s       $f12, $f0, $f1
    ctx->pc = 0x2178b0u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[1]);
    // 0x2178b4: 0xe4ac0010  swc1        $f12, 0x10($a1)
    ctx->pc = 0x2178b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2178b8: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x2178b8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x2178bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2178BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2178C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2178BCu;
            // 0x2178c0: 0xac800378  sw          $zero, 0x378($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 888), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217830u: goto label_217830;
            case 0x21788Cu: goto label_21788c;
            case 0x217890u: goto label_217890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2178C4u;
    // 0x2178c4: 0x0  nop
    ctx->pc = 0x2178c4u;
    // NOP
    // 0x2178c8: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x2178c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2178cc: 0x0  nop
    ctx->pc = 0x2178ccu;
    // NOP
}
