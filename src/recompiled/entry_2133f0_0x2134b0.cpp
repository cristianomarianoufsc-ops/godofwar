#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2133f0
// Address: 0x2133f0 - 0x2134b0
void entry_2133f0_0x2134b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2133f0_0x2134b0");
#endif

    ctx->pc = 0x2133f0u;

    // 0x2133f0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2133f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2133f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2133f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2133f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2133f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2133fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2133fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x213400: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213404: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x213404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213408: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x213408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x21340c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x21340cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x213410: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x213410u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x213414: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x213414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x213418: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213418u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x21341c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x21341cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x213420: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x213420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x213424: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x213424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x213428: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x213428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21342c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x21342cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x213430: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x213430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x213434: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x213434u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x213438: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213438u;
    {
        const bool branch_taken_0x213438 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x21343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213438u;
            // 0x21343c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213438) {
            ctx->pc = 0x213450u;
            goto label_213450;
        }
    }
    ctx->pc = 0x213440u;
    // 0x213440: 0x460c6836  c.le.s      $f13, $f12
    ctx->pc = 0x213440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213444: 0x0  nop
    ctx->pc = 0x213444u;
    // NOP
    // 0x213448: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x213448u;
    {
        const bool branch_taken_0x213448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213448) {
            ctx->pc = 0x21344Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213448u;
            // 0x21344c: 0x24050063  addiu       $a1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213450u;
            goto label_213450;
        }
    }
    ctx->pc = 0x213450u;
label_213450:
    // 0x213450: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x213450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x213454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213458: 0x8cc201c8  lw          $v0, 0x1C8($a2)
    ctx->pc = 0x213458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 456)));
    // 0x21345c: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x21345cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x213460: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213460u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x213464: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x213464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x213468: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x213468u;
    {
        const bool branch_taken_0x213468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x213468) {
            ctx->pc = 0x21346Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213468u;
            // 0x21346c: 0x8cc2018c  lw          $v0, 0x18C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 396)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213480u;
            goto label_213480;
        }
    }
    ctx->pc = 0x213470u;
    // 0x213470: 0x8cc201cc  lw          $v0, 0x1CC($a2)
    ctx->pc = 0x213470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 460)));
    // 0x213474: 0x1047000c  beq         $v0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x213474u;
    {
        const bool branch_taken_0x213474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x213478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213474u;
            // 0x213478: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213474) {
            ctx->pc = 0x2134A8u;
            goto label_2134a8;
        }
    }
    ctx->pc = 0x21347Cu;
    // 0x21347c: 0x8cc2018c  lw          $v0, 0x18C($a2)
    ctx->pc = 0x21347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 396)));
label_213480:
    // 0x213480: 0xacc501c8  sw          $a1, 0x1C8($a2)
    ctx->pc = 0x213480u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 456), GPR_U32(ctx, 5));
    // 0x213484: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213484u;
    {
        const bool branch_taken_0x213484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213484u;
            // 0x213488: 0xacc701cc  sw          $a3, 0x1CC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 460), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213484) {
            ctx->pc = 0x213494u;
            goto label_213494;
        }
    }
    ctx->pc = 0x21348Cu;
    // 0x21348c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213490: 0xacc201d8  sw          $v0, 0x1D8($a2)
    ctx->pc = 0x213490u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 472), GPR_U32(ctx, 2));
label_213494:
    // 0x213494: 0x8cc801d8  lw          $t0, 0x1D8($a2)
    ctx->pc = 0x213494u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 472)));
    // 0x213498: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x213498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x21349c: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x21349Cu;
    SET_GPR_U32(ctx, 31, 0x2134A4u);
    ctx->pc = 0x2134A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21349Cu;
            // 0x2134a0: 0x8cc601d0  lw          $a2, 0x1D0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134A4u; }
        if (ctx->pc != 0x2134A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134A4u; }
        if (ctx->pc != 0x2134A4u) { return; }
    }
    ctx->pc = 0x2134A4u;
    // 0x2134a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2134a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2134a8:
    // 0x2134a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2134A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2134ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2134A8u;
            // 0x2134ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213450u: goto label_213450;
            case 0x213480u: goto label_213480;
            case 0x213494u: goto label_213494;
            case 0x2134A8u: goto label_2134a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2134B0u;
}
