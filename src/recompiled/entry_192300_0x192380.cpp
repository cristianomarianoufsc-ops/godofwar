#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_192300
// Address: 0x192300 - 0x192380
void entry_192300_0x192380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_192300_0x192380");
#endif

    ctx->pc = 0x192300u;

    // 0x192300: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x192300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192304: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x192304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192308: 0x460010c5  abs.s       $f3, $f2
    ctx->pc = 0x192308u;
    ctx->f[3] = FPU_ABS_S(ctx->f[2]);
    // 0x19230c: 0x46000905  abs.s       $f4, $f1
    ctx->pc = 0x19230cu;
    ctx->f[4] = FPU_ABS_S(ctx->f[1]);
    // 0x192310: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x192310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192314: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x192314u;
    {
        const bool branch_taken_0x192314 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192314) {
            ctx->pc = 0x192338u;
            goto label_192338;
        }
    }
    ctx->pc = 0x19231Cu;
    // 0x19231c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19231cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192320: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x192320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192324: 0x0  nop
    ctx->pc = 0x192324u;
    // NOP
    // 0x192328: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x192328u;
    {
        const bool branch_taken_0x192328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19232Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192328u;
            // 0x19232c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192328) {
            ctx->pc = 0x192350u;
            goto label_192350;
        }
    }
    ctx->pc = 0x192330u;
    // 0x192330: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x192330u;
    {
        const bool branch_taken_0x192330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192330u;
            // 0x192334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192330) {
            ctx->pc = 0x192350u;
            goto label_192350;
        }
    }
    ctx->pc = 0x192338u;
label_192338:
    // 0x192338: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19233c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x19233cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192340: 0x0  nop
    ctx->pc = 0x192340u;
    // NOP
    // 0x192344: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x192344u;
    {
        const bool branch_taken_0x192344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192344u;
            // 0x192348: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192344) {
            ctx->pc = 0x192350u;
            goto label_192350;
        }
    }
    ctx->pc = 0x19234Cu;
    // 0x19234c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_192350:
    // 0x192350: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x192350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x192354: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x192354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x192358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19235c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x19235cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192360: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x192360u;
    {
        const bool branch_taken_0x192360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192360) {
            ctx->pc = 0x192378u;
            goto label_192378;
        }
    }
    ctx->pc = 0x192368u;
    // 0x192368: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x192368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19236c: 0x0  nop
    ctx->pc = 0x19236cu;
    // NOP
    // 0x192370: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x192370u;
    {
        const bool branch_taken_0x192370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192370) {
            ctx->pc = 0x192374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192370u;
            // 0x192374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192378u;
            goto label_192378;
        }
    }
    ctx->pc = 0x192378u;
label_192378:
    // 0x192378: 0x3e00008  jr          $ra
    ctx->pc = 0x192378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192338u: goto label_192338;
            case 0x192350u: goto label_192350;
            case 0x192378u: goto label_192378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192380u;
}
