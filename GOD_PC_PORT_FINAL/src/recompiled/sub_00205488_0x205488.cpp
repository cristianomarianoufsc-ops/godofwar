#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00205488
// Address: 0x205488 - 0x2065c0
void sub_00205488_0x205488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205488_0x205488");
#endif

    ctx->pc = 0x205488u;

    // 0x205488: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x205488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x20548c: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x20548cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
    // 0x205490: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x205490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
    // 0x205494: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x205494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205498: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x205498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
    // 0x20549c: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x20549cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
    // 0x2054a0: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x2054a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
    // 0x2054a4: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x2054a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
    // 0x2054a8: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x2054a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
    // 0x2054ac: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x2054acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
    // 0x2054b0: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x2054b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
    // 0x2054b4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x2054b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2054b8: 0xe7b401e0  swc1        $f20, 0x1E0($sp)
    ctx->pc = 0x2054b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2054bc: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2054bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2054c0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2054c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2054c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2054c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2054c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2054C8u;
    {
        const bool branch_taken_0x2054c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2054C8u;
            // 0x2054cc: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054c8) {
            ctx->pc = 0x2054D8u;
            goto label_2054d8;
        }
    }
    ctx->pc = 0x2054D0u;
    // 0x2054d0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x2054d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2054d4: 0x0  nop
    ctx->pc = 0x2054d4u;
    // NOP
label_2054d8:
    // 0x2054d8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2054d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x2054dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2054dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2054e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2054e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2054e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2054e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2054e8: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x2054e8u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2054ec: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x2054ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2054f0: 0x26420088  addiu       $v0, $s2, 0x88
    ctx->pc = 0x2054f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 136));
    // 0x2054f4: 0x46020d29  min.s       $f20, $f1, $f2
    ctx->pc = 0x2054f4u;
    ctx->f[20] = std::min(ctx->f[1], ctx->f[2]);
    // 0x2054f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2054f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2054fc: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2054FCu;
    {
        const bool branch_taken_0x2054fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x205500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2054FCu;
            // 0x205500: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054fc) {
            ctx->pc = 0x2055ACu;
            goto label_2055ac;
        }
    }
    ctx->pc = 0x205504u;
    // 0x205504: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x205504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_205508:
    // 0x205508: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x205508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20550c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x20550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x205510: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x205510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x205514: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x205514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x205518: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x205518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x20551c: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x20551cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x205520: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205524: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x205524u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x205528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20552c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20552cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x205530: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x205530u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x205534: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x205534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205538: 0x0  nop
    ctx->pc = 0x205538u;
    // NOP
    // 0x20553c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x20553Cu;
    {
        const bool branch_taken_0x20553c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20553c) {
            ctx->pc = 0x205540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20553Cu;
            // 0x205540: 0x94620004  lhu         $v0, 0x4($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205568u;
            goto label_205568;
        }
    }
    ctx->pc = 0x205544u;
    // 0x205544: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x205544u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x205548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20554c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20554cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x205550: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x205550u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x205554: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x205554u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205558: 0x0  nop
    ctx->pc = 0x205558u;
    // NOP
    // 0x20555c: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x20555Cu;
    {
        const bool branch_taken_0x20555c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20555c) {
            ctx->pc = 0x205560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20555Cu;
            // 0x205560: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2055A0u;
            goto label_2055a0;
        }
    }
    ctx->pc = 0x205564u;
    // 0x205564: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x205564u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_205568:
    // 0x205568: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x205568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x20556c: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x20556cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x205570: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x205570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x205574: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x205574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x205578: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x205578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x20557c: 0x8c647910  lw          $a0, 0x7910($v1)
    ctx->pc = 0x20557cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
    // 0x205580: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x205580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205584: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x205584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x205588: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x205588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20558c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x20558cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x205590: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x205590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x205594: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x205594u;
    SET_GPR_U32(ctx, 31, 0x20559Cu);
    ctx->pc = 0x205598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205594u;
            // 0x205598: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20559Cu; }
        if (ctx->pc != 0x20559Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20559Cu; }
        if (ctx->pc != 0x20559Cu) { return; }
    }
    ctx->pc = 0x20559Cu;
    // 0x20559c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2055a0:
    // 0x2055a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2055a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2055a4: 0x1462ffd8  bne         $v1, $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2055A4u;
    {
        const bool branch_taken_0x2055a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2055A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2055A4u;
            // 0x2055a8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055a4) {
            ctx->pc = 0x205508u;
            runtime->cooperativeGuestYield();
            goto label_205508;
        }
    }
    ctx->pc = 0x2055ACu;
label_2055ac:
    // 0x2055ac: 0xc081be6  jal         func_206F98
    ctx->pc = 0x2055ACu;
    SET_GPR_U32(ctx, 31, 0x2055B4u);
    ctx->pc = 0x2055B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2055ACu;
            // 0x2055b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206F98u;
    if (runtime->hasFunction(0x206F98u)) {
        auto targetFn = runtime->lookupFunction(0x206F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2055B4u; }
        if (ctx->pc != 0x2055B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206F98_0x206f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2055B4u; }
        if (ctx->pc != 0x2055B4u) { return; }
    }
    ctx->pc = 0x2055B4u;
    // 0x2055b4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2055b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2055b8: 0x53c0000f  beql        $fp, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2055B8u;
    {
        const bool branch_taken_0x2055b8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2055b8) {
            ctx->pc = 0x2055BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2055B8u;
            // 0x2055bc: 0x8e4301ac  lw          $v1, 0x1AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2055F8u;
            goto label_2055f8;
        }
    }
    ctx->pc = 0x2055C0u;
    // 0x2055c0: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x2055c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x2055c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2055c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2055c8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2055C8u;
    {
        const bool branch_taken_0x2055c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2055c8) {
            ctx->pc = 0x2055CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2055C8u;
            // 0x2055cc: 0x8e4301ac  lw          $v1, 0x1AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2055F8u;
            goto label_2055f8;
        }
    }
    ctx->pc = 0x2055D0u;
    // 0x2055d0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2055d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2055d4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2055d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2055d8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x2055d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2055dc: 0x40f809  jalr        $v0
    ctx->pc = 0x2055DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2055E4u);
        ctx->pc = 0x2055E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2055DCu;
            // 0x2055e0: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2055E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2054D8u: goto label_2054d8;
            case 0x205508u: goto label_205508;
            case 0x205568u: goto label_205568;
            case 0x2055A0u: goto label_2055a0;
            case 0x2055ACu: goto label_2055ac;
            case 0x2055F8u: goto label_2055f8;
            case 0x205660u: goto label_205660;
            case 0x205704u: goto label_205704;
            case 0x20570Cu: goto label_20570c;
            case 0x20572Cu: goto label_20572c;
            case 0x205734u: goto label_205734;
            case 0x205798u: goto label_205798;
            case 0x20579Cu: goto label_20579c;
            case 0x2057B0u: goto label_2057b0;
            case 0x2057B4u: goto label_2057b4;
            case 0x2057D0u: goto label_2057d0;
            case 0x2057ECu: goto label_2057ec;
            case 0x2057F0u: goto label_2057f0;
            case 0x2057FCu: goto label_2057fc;
            case 0x205800u: goto label_205800;
            case 0x205894u: goto label_205894;
            case 0x205928u: goto label_205928;
            case 0x205934u: goto label_205934;
            case 0x205990u: goto label_205990;
            case 0x20599Cu: goto label_20599c;
            case 0x2059CCu: goto label_2059cc;
            case 0x205A08u: goto label_205a08;
            case 0x205A0Cu: goto label_205a0c;
            case 0x205AB8u: goto label_205ab8;
            case 0x205AE8u: goto label_205ae8;
            case 0x205B18u: goto label_205b18;
            case 0x205B1Cu: goto label_205b1c;
            case 0x205B50u: goto label_205b50;
            case 0x205B7Cu: goto label_205b7c;
            case 0x205B88u: goto label_205b88;
            case 0x205BF0u: goto label_205bf0;
            case 0x205C18u: goto label_205c18;
            case 0x205CB0u: goto label_205cb0;
            case 0x205CC4u: goto label_205cc4;
            case 0x205D00u: goto label_205d00;
            case 0x205D1Cu: goto label_205d1c;
            case 0x205D34u: goto label_205d34;
            case 0x205D90u: goto label_205d90;
            case 0x205DACu: goto label_205dac;
            case 0x205E04u: goto label_205e04;
            case 0x205E50u: goto label_205e50;
            case 0x205EA8u: goto label_205ea8;
            case 0x205EC4u: goto label_205ec4;
            case 0x205ED0u: goto label_205ed0;
            case 0x205F24u: goto label_205f24;
            case 0x205F40u: goto label_205f40;
            case 0x205F64u: goto label_205f64;
            case 0x205F80u: goto label_205f80;
            case 0x205F9Cu: goto label_205f9c;
            case 0x205FA8u: goto label_205fa8;
            case 0x205FBCu: goto label_205fbc;
            case 0x205FF8u: goto label_205ff8;
            case 0x206000u: goto label_206000;
            case 0x20602Cu: goto label_20602c;
            case 0x206060u: goto label_206060;
            case 0x206074u: goto label_206074;
            case 0x20608Cu: goto label_20608c;
            case 0x2060A0u: goto label_2060a0;
            case 0x2060B4u: goto label_2060b4;
            case 0x2060CCu: goto label_2060cc;
            case 0x206118u: goto label_206118;
            case 0x206130u: goto label_206130;
            case 0x20614Cu: goto label_20614c;
            case 0x2061A4u: goto label_2061a4;
            case 0x2061F0u: goto label_2061f0;
            case 0x20623Cu: goto label_20623c;
            case 0x206268u: goto label_206268;
            case 0x2062ACu: goto label_2062ac;
            case 0x2062C0u: goto label_2062c0;
            case 0x2062D0u: goto label_2062d0;
            case 0x2062D8u: goto label_2062d8;
            case 0x206310u: goto label_206310;
            case 0x20635Cu: goto label_20635c;
            case 0x206364u: goto label_206364;
            case 0x206378u: goto label_206378;
            case 0x206390u: goto label_206390;
            case 0x2063A0u: goto label_2063a0;
            case 0x2063E4u: goto label_2063e4;
            case 0x20641Cu: goto label_20641c;
            case 0x206420u: goto label_206420;
            case 0x206428u: goto label_206428;
            case 0x206438u: goto label_206438;
            case 0x206444u: goto label_206444;
            case 0x206450u: goto label_206450;
            case 0x20645Cu: goto label_20645c;
            case 0x206464u: goto label_206464;
            case 0x206474u: goto label_206474;
            case 0x206480u: goto label_206480;
            case 0x20648Cu: goto label_20648c;
            case 0x206494u: goto label_206494;
            case 0x2064A4u: goto label_2064a4;
            case 0x2064C0u: goto label_2064c0;
            case 0x2064ECu: goto label_2064ec;
            case 0x2064F4u: goto label_2064f4;
            case 0x2064F8u: goto label_2064f8;
            case 0x206510u: goto label_206510;
            case 0x206540u: goto label_206540;
            case 0x206544u: goto label_206544;
            case 0x206560u: goto label_206560;
            case 0x206564u: goto label_206564;
            case 0x206584u: goto label_206584;
            case 0x206588u: goto label_206588;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2055E4u; }
            if (ctx->pc != 0x2055E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2055E4u;
    // 0x2055e4: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x2055e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x2055e8: 0x2404bfff  addiu       $a0, $zero, -0x4001
    ctx->pc = 0x2055e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2055ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2055ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2055f0: 0xac4301ac  sw          $v1, 0x1AC($v0)
    ctx->pc = 0x2055f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 3));
    // 0x2055f4: 0x8e4301ac  lw          $v1, 0x1AC($s2)
    ctx->pc = 0x2055f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
label_2055f8:
    // 0x2055f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2055f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2055fc: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x2055fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x205600: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x205600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x205604: 0x30635400  andi        $v1, $v1, 0x5400
    ctx->pc = 0x205604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)21504);
    // 0x205608: 0x8c57cd58  lw          $s7, -0x32A8($v0)
    ctx->pc = 0x205608u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x20560c: 0xae4301ac  sw          $v1, 0x1AC($s2)
    ctx->pc = 0x20560cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 3));
    // 0x205610: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x205610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x205614: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x205614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x205618: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x205618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x20561c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x20561cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x205620: 0xae4001b0  sw          $zero, 0x1B0($s2)
    ctx->pc = 0x205620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 0));
    // 0x205624: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x205624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x205628: 0xae4301ac  sw          $v1, 0x1AC($s2)
    ctx->pc = 0x205628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 3));
    // 0x20562c: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x20562cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x205630: 0x90440016  lbu         $a0, 0x16($v0)
    ctx->pc = 0x205630u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x205634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205638: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x205638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x20563c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20563cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x205640: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x205640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x205644: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x205644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x205648: 0xb3a3001b  sdl         $v1, 0x1B($sp)
    ctx->pc = 0x205648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20564c: 0xb7a30014  sdr         $v1, 0x14($sp)
    ctx->pc = 0x20564cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x205650: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x205650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x205654: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x205654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x205658: 0x184003ad  blez        $v0, . + 4 + (0x3AD << 2)
    ctx->pc = 0x205658u;
    {
        const bool branch_taken_0x205658 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20565Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205658u;
            // 0x20565c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205658) {
            ctx->pc = 0x206510u;
            goto label_206510;
        }
    }
    ctx->pc = 0x205660u;
label_205660:
    // 0x205660: 0xde440078  ld          $a0, 0x78($s2)
    ctx->pc = 0x205660u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x205664: 0x2a41016  dsrlv       $v0, $a0, $s5
    ctx->pc = 0x205664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 21) & 0x3F));
    // 0x205668: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x205668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20566c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20566cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x205670: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x205670u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x205674: 0x144003a0  bnez        $v0, . + 4 + (0x3A0 << 2)
    ctx->pc = 0x205674u;
    {
        const bool branch_taken_0x205674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205674u;
            // 0x205678: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205674) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x20567Cu;
    // 0x20567c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x205680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x205684: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x205684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x205688: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x205688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x20568c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20568cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205690: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205694: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x205694u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205698: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x205698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20569c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x20569cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2056a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2056a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2056a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2056a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2056a8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2056a8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2056ac: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2056acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2056b0: 0x0  nop
    ctx->pc = 0x2056b0u;
    // NOP
    // 0x2056b4: 0x45000390  bc1f        . + 4 + (0x390 << 2)
    ctx->pc = 0x2056B4u;
    {
        const bool branch_taken_0x2056b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2056B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2056B4u;
            // 0x2056b8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056b4) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2056BCu;
    // 0x2056bc: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x2056bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2056c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2056c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2056c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2056c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2056c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2056c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2056cc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2056ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2056d0: 0x0  nop
    ctx->pc = 0x2056d0u;
    // NOP
    // 0x2056d4: 0x45000388  bc1f        . + 4 + (0x388 << 2)
    ctx->pc = 0x2056D4u;
    {
        const bool branch_taken_0x2056d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2056D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2056D4u;
            // 0x2056d8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056d4) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2056DCu;
    // 0x2056dc: 0x82230010  lb          $v1, 0x10($s1)
    ctx->pc = 0x2056dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2056e0: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2056e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2056e4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2056E4u;
    {
        const bool branch_taken_0x2056e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2056E4u;
            // 0x2056e8: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056e4) {
            ctx->pc = 0x2057FCu;
            goto label_2057fc;
        }
    }
    ctx->pc = 0x2056ECu;
    // 0x2056ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2056ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2056f0: 0x24427a60  addiu       $v0, $v0, 0x7A60
    ctx->pc = 0x2056f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31328));
    // 0x2056f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2056f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2056f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2056f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2056fc: 0x400008  jr          $v0
    ctx->pc = 0x2056FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205704u: goto label_205704;
            case 0x20570Cu: goto label_20570c;
            case 0x20572Cu: goto label_20572c;
            case 0x205734u: goto label_205734;
            case 0x2057B0u: goto label_2057b0;
            case 0x2057D0u: goto label_2057d0;
            case 0x2057ECu: goto label_2057ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x205704u;
label_205704:
    // 0x205704: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x205704u;
    {
        const bool branch_taken_0x205704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205704u;
            // 0x205708: 0x8e4200a4  lw          $v0, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205704) {
            ctx->pc = 0x2057B4u;
            goto label_2057b4;
        }
    }
    ctx->pc = 0x20570Cu;
label_20570c:
    // 0x20570c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x20570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x205710: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x205710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x205714: 0x8c63ed58  lw          $v1, -0x12A8($v1)
    ctx->pc = 0x205714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962520)));
    // 0x205718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x205718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20571c: 0x14430376  bne         $v0, $v1, . + 4 + (0x376 << 2)
    ctx->pc = 0x20571Cu;
    {
        const bool branch_taken_0x20571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x205720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20571Cu;
            // 0x205720: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20571c) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205724u;
    // 0x205724: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x205724u;
    {
        const bool branch_taken_0x205724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205724u;
            // 0x205728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205724) {
            ctx->pc = 0x2057F0u;
            goto label_2057f0;
        }
    }
    ctx->pc = 0x20572Cu;
label_20572c:
    // 0x20572c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x20572Cu;
    {
        const bool branch_taken_0x20572c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20572Cu;
            // 0x205730: 0x8e4200a0  lw          $v0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20572c) {
            ctx->pc = 0x2057B4u;
            goto label_2057b4;
        }
    }
    ctx->pc = 0x205734u;
label_205734:
    // 0x205734: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x205734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x205738: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x205738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x20573c: 0x8c63ed58  lw          $v1, -0x12A8($v1)
    ctx->pc = 0x20573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962520)));
    // 0x205740: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x205740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x205744: 0x1443036c  bne         $v0, $v1, . + 4 + (0x36C << 2)
    ctx->pc = 0x205744u;
    {
        const bool branch_taken_0x205744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x205748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205744u;
            // 0x205748: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205744) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x20574Cu;
    // 0x20574c: 0x8242009f  lb          $v0, 0x9F($s2)
    ctx->pc = 0x20574cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 159)));
    // 0x205750: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x205750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x205754: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x205754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x205758: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x205758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x20575c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x20575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x205760: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x205760u;
    {
        const bool branch_taken_0x205760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205760u;
            // 0x205764: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205760) {
            ctx->pc = 0x20579Cu;
            goto label_20579c;
        }
    }
    ctx->pc = 0x205768u;
    // 0x205768: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x205768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20576c: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x20576cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x205770: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x205770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x205774: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x205774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x205778: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x205778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x20577c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x205780: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x205780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205784: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x205784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205788: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205788u;
    {
        const bool branch_taken_0x205788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205788u;
            // 0x20578c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205788) {
            ctx->pc = 0x205798u;
            goto label_205798;
        }
    }
    ctx->pc = 0x205790u;
    // 0x205790: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x205790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x205794: 0x0  nop
    ctx->pc = 0x205794u;
    // NOP
label_205798:
    // 0x205798: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x205798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20579c:
    // 0x20579c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x20579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2057a0: 0x14620355  bne         $v1, $v0, . + 4 + (0x355 << 2)
    ctx->pc = 0x2057A0u;
    {
        const bool branch_taken_0x2057a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2057A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2057A0u;
            // 0x2057a4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057a0) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2057A8u;
    // 0x2057a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2057A8u;
    {
        const bool branch_taken_0x2057a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2057A8u;
            // 0x2057ac: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057a8) {
            ctx->pc = 0x205800u;
            goto label_205800;
        }
    }
    ctx->pc = 0x2057B0u;
label_2057b0:
    // 0x2057b0: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x2057b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_2057b4:
    // 0x2057b4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2057b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2057b8: 0x8c63ed58  lw          $v1, -0x12A8($v1)
    ctx->pc = 0x2057b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962520)));
    // 0x2057bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2057bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2057c0: 0x1443034d  bne         $v0, $v1, . + 4 + (0x34D << 2)
    ctx->pc = 0x2057C0u;
    {
        const bool branch_taken_0x2057c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2057C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2057C0u;
            // 0x2057c4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057c0) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2057C8u;
    // 0x2057c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2057C8u;
    {
        const bool branch_taken_0x2057c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2057C8u;
            // 0x2057cc: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057c8) {
            ctx->pc = 0x205800u;
            goto label_205800;
        }
    }
    ctx->pc = 0x2057D0u;
label_2057d0:
    // 0x2057d0: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2057d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2057d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2057d8: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x2057d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2057dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2057dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2057e0: 0x0  nop
    ctx->pc = 0x2057e0u;
    // NOP
    // 0x2057e4: 0x45010344  bc1t        . + 4 + (0x344 << 2)
    ctx->pc = 0x2057E4u;
    {
        const bool branch_taken_0x2057e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2057E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2057E4u;
            // 0x2057e8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057e4) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2057ECu;
label_2057ec:
    // 0x2057ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2057ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2057f0:
    // 0x2057f0: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x2057f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x2057f4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2057f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2057f8: 0xfe420078  sd          $v0, 0x78($s2)
    ctx->pc = 0x2057f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 2));
label_2057fc:
    // 0x2057fc: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x2057fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_205800:
    // 0x205800: 0x8230000e  lb          $s0, 0xE($s1)
    ctx->pc = 0x205800u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x205804: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x205804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
    // 0x205808: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x205808u;
    SET_GPR_U32(ctx, 31, 0x205810u);
    ctx->pc = 0x20580Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205808u;
            // 0x20580c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205810u; }
        if (ctx->pc != 0x205810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205810u; }
        if (ctx->pc != 0x205810u) { return; }
    }
    ctx->pc = 0x205810u;
    // 0x205810: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x205810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x205814: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x205814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x205818: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x205818u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20581c: 0x16000336  bnez        $s0, . + 4 + (0x336 << 2)
    ctx->pc = 0x20581Cu;
    {
        const bool branch_taken_0x20581c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x205820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20581Cu;
            // 0x205820: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20581c) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205824u;
    // 0x205824: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x205824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x205828: 0x82230011  lb          $v1, 0x11($s1)
    ctx->pc = 0x205828u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x20582c: 0x90422d3d  lbu         $v0, 0x2D3D($v0)
    ctx->pc = 0x20582cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11581)));
    // 0x205830: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x205830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x205834: 0x14400330  bnez        $v0, . + 4 + (0x330 << 2)
    ctx->pc = 0x205834u;
    {
        const bool branch_taken_0x205834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205834u;
            // 0x205838: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205834) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x20583Cu;
    // 0x20583c: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x20583cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x205840: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x205840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x205844: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x205844u;
    {
        const bool branch_taken_0x205844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205844u;
            // 0x205848: 0x8634000c  lh          $s4, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205844) {
            ctx->pc = 0x205894u;
            goto label_205894;
        }
    }
    ctx->pc = 0x20584Cu;
    // 0x20584c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20584cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x205850: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x205850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205854: 0x8c441194  lw          $a0, 0x1194($v0)
    ctx->pc = 0x205854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4500)));
    // 0x205858: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x205858u;
    SET_GPR_U32(ctx, 31, 0x205860u);
    ctx->pc = 0x20585Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205858u;
            // 0x20585c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205860u; }
        if (ctx->pc != 0x205860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205860u; }
        if (ctx->pc != 0x205860u) { return; }
    }
    ctx->pc = 0x205860u;
    // 0x205860: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x205860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x205864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205868: 0x8c6301b0  lw          $v1, 0x1B0($v1)
    ctx->pc = 0x205868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x20586c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x205870: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x205870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x205874: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x205874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x205878: 0x40f809  jalr        $v0
    ctx->pc = 0x205878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205880u);
        ctx->pc = 0x20587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205878u;
            // 0x20587c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205880u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2054D8u: goto label_2054d8;
            case 0x205508u: goto label_205508;
            case 0x205568u: goto label_205568;
            case 0x2055A0u: goto label_2055a0;
            case 0x2055ACu: goto label_2055ac;
            case 0x2055F8u: goto label_2055f8;
            case 0x205660u: goto label_205660;
            case 0x205704u: goto label_205704;
            case 0x20570Cu: goto label_20570c;
            case 0x20572Cu: goto label_20572c;
            case 0x205734u: goto label_205734;
            case 0x205798u: goto label_205798;
            case 0x20579Cu: goto label_20579c;
            case 0x2057B0u: goto label_2057b0;
            case 0x2057B4u: goto label_2057b4;
            case 0x2057D0u: goto label_2057d0;
            case 0x2057ECu: goto label_2057ec;
            case 0x2057F0u: goto label_2057f0;
            case 0x2057FCu: goto label_2057fc;
            case 0x205800u: goto label_205800;
            case 0x205894u: goto label_205894;
            case 0x205928u: goto label_205928;
            case 0x205934u: goto label_205934;
            case 0x205990u: goto label_205990;
            case 0x20599Cu: goto label_20599c;
            case 0x2059CCu: goto label_2059cc;
            case 0x205A08u: goto label_205a08;
            case 0x205A0Cu: goto label_205a0c;
            case 0x205AB8u: goto label_205ab8;
            case 0x205AE8u: goto label_205ae8;
            case 0x205B18u: goto label_205b18;
            case 0x205B1Cu: goto label_205b1c;
            case 0x205B50u: goto label_205b50;
            case 0x205B7Cu: goto label_205b7c;
            case 0x205B88u: goto label_205b88;
            case 0x205BF0u: goto label_205bf0;
            case 0x205C18u: goto label_205c18;
            case 0x205CB0u: goto label_205cb0;
            case 0x205CC4u: goto label_205cc4;
            case 0x205D00u: goto label_205d00;
            case 0x205D1Cu: goto label_205d1c;
            case 0x205D34u: goto label_205d34;
            case 0x205D90u: goto label_205d90;
            case 0x205DACu: goto label_205dac;
            case 0x205E04u: goto label_205e04;
            case 0x205E50u: goto label_205e50;
            case 0x205EA8u: goto label_205ea8;
            case 0x205EC4u: goto label_205ec4;
            case 0x205ED0u: goto label_205ed0;
            case 0x205F24u: goto label_205f24;
            case 0x205F40u: goto label_205f40;
            case 0x205F64u: goto label_205f64;
            case 0x205F80u: goto label_205f80;
            case 0x205F9Cu: goto label_205f9c;
            case 0x205FA8u: goto label_205fa8;
            case 0x205FBCu: goto label_205fbc;
            case 0x205FF8u: goto label_205ff8;
            case 0x206000u: goto label_206000;
            case 0x20602Cu: goto label_20602c;
            case 0x206060u: goto label_206060;
            case 0x206074u: goto label_206074;
            case 0x20608Cu: goto label_20608c;
            case 0x2060A0u: goto label_2060a0;
            case 0x2060B4u: goto label_2060b4;
            case 0x2060CCu: goto label_2060cc;
            case 0x206118u: goto label_206118;
            case 0x206130u: goto label_206130;
            case 0x20614Cu: goto label_20614c;
            case 0x2061A4u: goto label_2061a4;
            case 0x2061F0u: goto label_2061f0;
            case 0x20623Cu: goto label_20623c;
            case 0x206268u: goto label_206268;
            case 0x2062ACu: goto label_2062ac;
            case 0x2062C0u: goto label_2062c0;
            case 0x2062D0u: goto label_2062d0;
            case 0x2062D8u: goto label_2062d8;
            case 0x206310u: goto label_206310;
            case 0x20635Cu: goto label_20635c;
            case 0x206364u: goto label_206364;
            case 0x206378u: goto label_206378;
            case 0x206390u: goto label_206390;
            case 0x2063A0u: goto label_2063a0;
            case 0x2063E4u: goto label_2063e4;
            case 0x20641Cu: goto label_20641c;
            case 0x206420u: goto label_206420;
            case 0x206428u: goto label_206428;
            case 0x206438u: goto label_206438;
            case 0x206444u: goto label_206444;
            case 0x206450u: goto label_206450;
            case 0x20645Cu: goto label_20645c;
            case 0x206464u: goto label_206464;
            case 0x206474u: goto label_206474;
            case 0x206480u: goto label_206480;
            case 0x20648Cu: goto label_20648c;
            case 0x206494u: goto label_206494;
            case 0x2064A4u: goto label_2064a4;
            case 0x2064C0u: goto label_2064c0;
            case 0x2064ECu: goto label_2064ec;
            case 0x2064F4u: goto label_2064f4;
            case 0x2064F8u: goto label_2064f8;
            case 0x206510u: goto label_206510;
            case 0x206540u: goto label_206540;
            case 0x206544u: goto label_206544;
            case 0x206560u: goto label_206560;
            case 0x206564u: goto label_206564;
            case 0x206584u: goto label_206584;
            case 0x206588u: goto label_206588;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205880u; }
            if (ctx->pc != 0x205880u) { return; }
        }
        }
    }
    ctx->pc = 0x205880u;
    // 0x205880: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x205880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x205884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205888: 0xc0892f4  jal         func_224BD0
    ctx->pc = 0x205888u;
    SET_GPR_U32(ctx, 31, 0x205890u);
    ctx->pc = 0x20588Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205888u;
            // 0x20588c: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224BD0u;
    if (runtime->hasFunction(0x224BD0u)) {
        auto targetFn = runtime->lookupFunction(0x224BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205890u; }
        if (ctx->pc != 0x205890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_224bd0_0x224be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205890u; }
        if (ctx->pc != 0x205890u) { return; }
    }
    ctx->pc = 0x205890u;
    // 0x205890: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x205890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205894:
    // 0x205894: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x205894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x205898: 0x12820317  beq         $s4, $v0, . + 4 + (0x317 << 2)
    ctx->pc = 0x205898u;
    {
        const bool branch_taken_0x205898 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x20589Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205898u;
            // 0x20589c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205898) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2058A0u;
    // 0x2058a0: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x2058a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2058a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2058a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2058a8: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x2058A8u;
    {
        const bool branch_taken_0x2058a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058a8) {
            ctx->pc = 0x2058ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2058A8u;
            // 0x2058ac: 0x8222000f  lb          $v0, 0xF($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20599Cu;
            goto label_20599c;
        }
    }
    ctx->pc = 0x2058B0u;
    // 0x2058b0: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x2058b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2058b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2058b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2058b8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2058b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2058bc: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x2058bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2058c0: 0x40f809  jalr        $v0
    ctx->pc = 0x2058C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2058C8u);
        ctx->pc = 0x2058C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2058C0u;
            // 0x2058c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2058C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2054D8u: goto label_2054d8;
            case 0x205508u: goto label_205508;
            case 0x205568u: goto label_205568;
            case 0x2055A0u: goto label_2055a0;
            case 0x2055ACu: goto label_2055ac;
            case 0x2055F8u: goto label_2055f8;
            case 0x205660u: goto label_205660;
            case 0x205704u: goto label_205704;
            case 0x20570Cu: goto label_20570c;
            case 0x20572Cu: goto label_20572c;
            case 0x205734u: goto label_205734;
            case 0x205798u: goto label_205798;
            case 0x20579Cu: goto label_20579c;
            case 0x2057B0u: goto label_2057b0;
            case 0x2057B4u: goto label_2057b4;
            case 0x2057D0u: goto label_2057d0;
            case 0x2057ECu: goto label_2057ec;
            case 0x2057F0u: goto label_2057f0;
            case 0x2057FCu: goto label_2057fc;
            case 0x205800u: goto label_205800;
            case 0x205894u: goto label_205894;
            case 0x205928u: goto label_205928;
            case 0x205934u: goto label_205934;
            case 0x205990u: goto label_205990;
            case 0x20599Cu: goto label_20599c;
            case 0x2059CCu: goto label_2059cc;
            case 0x205A08u: goto label_205a08;
            case 0x205A0Cu: goto label_205a0c;
            case 0x205AB8u: goto label_205ab8;
            case 0x205AE8u: goto label_205ae8;
            case 0x205B18u: goto label_205b18;
            case 0x205B1Cu: goto label_205b1c;
            case 0x205B50u: goto label_205b50;
            case 0x205B7Cu: goto label_205b7c;
            case 0x205B88u: goto label_205b88;
            case 0x205BF0u: goto label_205bf0;
            case 0x205C18u: goto label_205c18;
            case 0x205CB0u: goto label_205cb0;
            case 0x205CC4u: goto label_205cc4;
            case 0x205D00u: goto label_205d00;
            case 0x205D1Cu: goto label_205d1c;
            case 0x205D34u: goto label_205d34;
            case 0x205D90u: goto label_205d90;
            case 0x205DACu: goto label_205dac;
            case 0x205E04u: goto label_205e04;
            case 0x205E50u: goto label_205e50;
            case 0x205EA8u: goto label_205ea8;
            case 0x205EC4u: goto label_205ec4;
            case 0x205ED0u: goto label_205ed0;
            case 0x205F24u: goto label_205f24;
            case 0x205F40u: goto label_205f40;
            case 0x205F64u: goto label_205f64;
            case 0x205F80u: goto label_205f80;
            case 0x205F9Cu: goto label_205f9c;
            case 0x205FA8u: goto label_205fa8;
            case 0x205FBCu: goto label_205fbc;
            case 0x205FF8u: goto label_205ff8;
            case 0x206000u: goto label_206000;
            case 0x20602Cu: goto label_20602c;
            case 0x206060u: goto label_206060;
            case 0x206074u: goto label_206074;
            case 0x20608Cu: goto label_20608c;
            case 0x2060A0u: goto label_2060a0;
            case 0x2060B4u: goto label_2060b4;
            case 0x2060CCu: goto label_2060cc;
            case 0x206118u: goto label_206118;
            case 0x206130u: goto label_206130;
            case 0x20614Cu: goto label_20614c;
            case 0x2061A4u: goto label_2061a4;
            case 0x2061F0u: goto label_2061f0;
            case 0x20623Cu: goto label_20623c;
            case 0x206268u: goto label_206268;
            case 0x2062ACu: goto label_2062ac;
            case 0x2062C0u: goto label_2062c0;
            case 0x2062D0u: goto label_2062d0;
            case 0x2062D8u: goto label_2062d8;
            case 0x206310u: goto label_206310;
            case 0x20635Cu: goto label_20635c;
            case 0x206364u: goto label_206364;
            case 0x206378u: goto label_206378;
            case 0x206390u: goto label_206390;
            case 0x2063A0u: goto label_2063a0;
            case 0x2063E4u: goto label_2063e4;
            case 0x20641Cu: goto label_20641c;
            case 0x206420u: goto label_206420;
            case 0x206428u: goto label_206428;
            case 0x206438u: goto label_206438;
            case 0x206444u: goto label_206444;
            case 0x206450u: goto label_206450;
            case 0x20645Cu: goto label_20645c;
            case 0x206464u: goto label_206464;
            case 0x206474u: goto label_206474;
            case 0x206480u: goto label_206480;
            case 0x20648Cu: goto label_20648c;
            case 0x206494u: goto label_206494;
            case 0x2064A4u: goto label_2064a4;
            case 0x2064C0u: goto label_2064c0;
            case 0x2064ECu: goto label_2064ec;
            case 0x2064F4u: goto label_2064f4;
            case 0x2064F8u: goto label_2064f8;
            case 0x206510u: goto label_206510;
            case 0x206540u: goto label_206540;
            case 0x206544u: goto label_206544;
            case 0x206560u: goto label_206560;
            case 0x206564u: goto label_206564;
            case 0x206584u: goto label_206584;
            case 0x206588u: goto label_206588;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2058C8u; }
            if (ctx->pc != 0x2058C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2058C8u;
    // 0x2058c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2058c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2058cc: 0x50600033  beql        $v1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2058CCu;
    {
        const bool branch_taken_0x2058cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058cc) {
            ctx->pc = 0x2058D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2058CCu;
            // 0x2058d0: 0x8222000f  lb          $v0, 0xF($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20599Cu;
            goto label_20599c;
        }
    }
    ctx->pc = 0x2058D4u;
    // 0x2058d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2058d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2058d8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2058D8u;
    {
        const bool branch_taken_0x2058d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058d8) {
            ctx->pc = 0x2058DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2058D8u;
            // 0x2058dc: 0x24620034  addiu       $v0, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205934u;
            goto label_205934;
        }
    }
    ctx->pc = 0x2058E0u;
    // 0x2058e0: 0xd8410050  lqc2        $vf1, 0x50($v0)
    ctx->pc = 0x2058e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2058e4: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x2058e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2058e8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x2058e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2058ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2058ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2058f0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2058f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2058f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2058f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2058f8: 0xc440e3dc  lwc1        $f0, -0x1C24($v0)
    ctx->pc = 0x2058f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2058fc: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x2058fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x205900: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x205900u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x205904: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x205904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x205908: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x205908u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20590c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20590cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x205910: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x205910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205914: 0x0  nop
    ctx->pc = 0x205914u;
    // NOP
    // 0x205918: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x205918u;
    {
        const bool branch_taken_0x205918 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205918u;
            // 0x20591c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205918) {
            ctx->pc = 0x205928u;
            goto label_205928;
        }
    }
    ctx->pc = 0x205920u;
    // 0x205920: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x205920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205924: 0x0  nop
    ctx->pc = 0x205924u;
    // NOP
label_205928:
    // 0x205928: 0x144002f3  bnez        $v0, . + 4 + (0x2F3 << 2)
    ctx->pc = 0x205928u;
    {
        const bool branch_taken_0x205928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20592Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205928u;
            // 0x20592c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205928) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205930u;
    // 0x205930: 0x24620034  addiu       $v0, $v1, 0x34
    ctx->pc = 0x205930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_205934:
    // 0x205934: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x205934u;
    {
        const bool branch_taken_0x205934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205934) {
            ctx->pc = 0x205938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205934u;
            // 0x205938: 0x8222000f  lb          $v0, 0xF($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20599Cu;
            goto label_20599c;
        }
    }
    ctx->pc = 0x20593Cu;
    // 0x20593c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x20593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x205940: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x205940u;
    {
        const bool branch_taken_0x205940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205940) {
            ctx->pc = 0x205944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205940u;
            // 0x205944: 0x8222000f  lb          $v0, 0xF($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20599Cu;
            goto label_20599c;
        }
    }
    ctx->pc = 0x205948u;
    // 0x205948: 0xd8410050  lqc2        $vf1, 0x50($v0)
    ctx->pc = 0x205948u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20594c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x20594cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x205950: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x205950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x205954: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x205954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x205958: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x205958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x20595c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20595cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x205960: 0xc440e3dc  lwc1        $f0, -0x1C24($v0)
    ctx->pc = 0x205960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205964: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x205964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x205968: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x205968u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20596c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20596cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x205970: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x205970u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205974: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x205974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x205978: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x205978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20597c: 0x0  nop
    ctx->pc = 0x20597cu;
    // NOP
    // 0x205980: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x205980u;
    {
        const bool branch_taken_0x205980 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x205984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205980u;
            // 0x205984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205980) {
            ctx->pc = 0x205990u;
            goto label_205990;
        }
    }
    ctx->pc = 0x205988u;
    // 0x205988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x205988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20598c: 0x0  nop
    ctx->pc = 0x20598cu;
    // NOP
label_205990:
    // 0x205990: 0x144002d9  bnez        $v0, . + 4 + (0x2D9 << 2)
    ctx->pc = 0x205990u;
    {
        const bool branch_taken_0x205990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205990u;
            // 0x205994: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205990) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205998u;
    // 0x205998: 0x8222000f  lb          $v0, 0xF($s1)
    ctx->pc = 0x205998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
label_20599c:
    // 0x20599c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2059a0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2059a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2059a4: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x2059a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2059a8: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x2059a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x2059ac: 0x104002d1  beqz        $v0, . + 4 + (0x2D1 << 2)
    ctx->pc = 0x2059ACu;
    {
        const bool branch_taken_0x2059ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2059ACu;
            // 0x2059b0: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059ac) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x2059B4u;
    // 0x2059b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2059b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2059b8: 0x24427a80  addiu       $v0, $v0, 0x7A80
    ctx->pc = 0x2059b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
    // 0x2059bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2059bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2059c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2059c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2059c4: 0x400008  jr          $v0
    ctx->pc = 0x2059C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2059CCu: goto label_2059cc;
            case 0x205BF0u: goto label_205bf0;
            case 0x205CB0u: goto label_205cb0;
            case 0x205CC4u: goto label_205cc4;
            case 0x205D00u: goto label_205d00;
            case 0x205D1Cu: goto label_205d1c;
            case 0x205D34u: goto label_205d34;
            case 0x205D90u: goto label_205d90;
            case 0x205DACu: goto label_205dac;
            case 0x205E04u: goto label_205e04;
            case 0x205E50u: goto label_205e50;
            case 0x205EA8u: goto label_205ea8;
            case 0x205EC4u: goto label_205ec4;
            case 0x205ED0u: goto label_205ed0;
            case 0x205F24u: goto label_205f24;
            case 0x205F40u: goto label_205f40;
            case 0x205F64u: goto label_205f64;
            case 0x205F80u: goto label_205f80;
            case 0x205F9Cu: goto label_205f9c;
            case 0x205FA8u: goto label_205fa8;
            case 0x205FBCu: goto label_205fbc;
            case 0x205FF8u: goto label_205ff8;
            case 0x20602Cu: goto label_20602c;
            case 0x206060u: goto label_206060;
            case 0x206074u: goto label_206074;
            case 0x20608Cu: goto label_20608c;
            case 0x2060A0u: goto label_2060a0;
            case 0x2060B4u: goto label_2060b4;
            case 0x2060CCu: goto label_2060cc;
            case 0x206130u: goto label_206130;
            case 0x20614Cu: goto label_20614c;
            case 0x2061A4u: goto label_2061a4;
            case 0x2061F0u: goto label_2061f0;
            case 0x206268u: goto label_206268;
            case 0x2062D8u: goto label_2062d8;
            case 0x206310u: goto label_206310;
            case 0x206364u: goto label_206364;
            case 0x206378u: goto label_206378;
            case 0x2063A0u: goto label_2063a0;
            case 0x2063E4u: goto label_2063e4;
            case 0x206438u: goto label_206438;
            case 0x206444u: goto label_206444;
            case 0x206450u: goto label_206450;
            case 0x20645Cu: goto label_20645c;
            case 0x206474u: goto label_206474;
            case 0x206480u: goto label_206480;
            case 0x20648Cu: goto label_20648c;
            case 0x2064A4u: goto label_2064a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2059CCu;
label_2059cc:
    // 0x2059cc: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x2059ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2059d0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2059d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2059d4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2059D4u;
    {
        const bool branch_taken_0x2059d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2059D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2059D4u;
            // 0x2059d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059d4) {
            ctx->pc = 0x205A0Cu;
            goto label_205a0c;
        }
    }
    ctx->pc = 0x2059DCu;
    // 0x2059dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2059dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2059e0: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x2059e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x2059e4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2059e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2059e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2059e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2059ec: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x2059ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x2059f0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2059f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2059f4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2059f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2059f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2059f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2059fc: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2059FCu;
    {
        const bool branch_taken_0x2059fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x205A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2059FCu;
            // 0x205a00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059fc) {
            ctx->pc = 0x205A08u;
            goto label_205a08;
        }
    }
    ctx->pc = 0x205A04u;
    // 0x205a04: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x205a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_205a08:
    // 0x205a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205a0c:
    // 0x205a0c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x205a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x205a10: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x205a10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x205a14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x205a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205a18: 0xd8410040  lqc2        $vf1, 0x40($v0)
    ctx->pc = 0x205a18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x205a1c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x205a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x205a20: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x205a20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x205a24: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x205a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x205a28: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x205a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x205a2c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x205a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x205a30: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x205a30u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x205a34: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x205a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x205a38: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x205a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x205a3c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x205a3cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x205a40: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x205a40u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x205a44: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x205a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x205a48: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x205A48u;
    {
        const bool branch_taken_0x205a48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205A48u;
            // 0x205a4c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a48) {
            ctx->pc = 0x205AB8u;
            goto label_205ab8;
        }
    }
    ctx->pc = 0x205A50u;
    // 0x205a50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x205a54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x205a54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x205a58: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x205a58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x205a5c: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x205a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x205a60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x205a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x205a64: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x205a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x205a68: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x205a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x205a6c: 0x40f809  jalr        $v0
    ctx->pc = 0x205A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205A74u);
        ctx->pc = 0x205A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205A6Cu;
            // 0x205a70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205A74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2054D8u: goto label_2054d8;
            case 0x205508u: goto label_205508;
            case 0x205568u: goto label_205568;
            case 0x2055A0u: goto label_2055a0;
            case 0x2055ACu: goto label_2055ac;
            case 0x2055F8u: goto label_2055f8;
            case 0x205660u: goto label_205660;
            case 0x205704u: goto label_205704;
            case 0x20570Cu: goto label_20570c;
            case 0x20572Cu: goto label_20572c;
            case 0x205734u: goto label_205734;
            case 0x205798u: goto label_205798;
            case 0x20579Cu: goto label_20579c;
            case 0x2057B0u: goto label_2057b0;
            case 0x2057B4u: goto label_2057b4;
            case 0x2057D0u: goto label_2057d0;
            case 0x2057ECu: goto label_2057ec;
            case 0x2057F0u: goto label_2057f0;
            case 0x2057FCu: goto label_2057fc;
            case 0x205800u: goto label_205800;
            case 0x205894u: goto label_205894;
            case 0x205928u: goto label_205928;
            case 0x205934u: goto label_205934;
            case 0x205990u: goto label_205990;
            case 0x20599Cu: goto label_20599c;
            case 0x2059CCu: goto label_2059cc;
            case 0x205A08u: goto label_205a08;
            case 0x205A0Cu: goto label_205a0c;
            case 0x205AB8u: goto label_205ab8;
            case 0x205AE8u: goto label_205ae8;
            case 0x205B18u: goto label_205b18;
            case 0x205B1Cu: goto label_205b1c;
            case 0x205B50u: goto label_205b50;
            case 0x205B7Cu: goto label_205b7c;
            case 0x205B88u: goto label_205b88;
            case 0x205BF0u: goto label_205bf0;
            case 0x205C18u: goto label_205c18;
            case 0x205CB0u: goto label_205cb0;
            case 0x205CC4u: goto label_205cc4;
            case 0x205D00u: goto label_205d00;
            case 0x205D1Cu: goto label_205d1c;
            case 0x205D34u: goto label_205d34;
            case 0x205D90u: goto label_205d90;
            case 0x205DACu: goto label_205dac;
            case 0x205E04u: goto label_205e04;
            case 0x205E50u: goto label_205e50;
            case 0x205EA8u: goto label_205ea8;
            case 0x205EC4u: goto label_205ec4;
            case 0x205ED0u: goto label_205ed0;
            case 0x205F24u: goto label_205f24;
            case 0x205F40u: goto label_205f40;
            case 0x205F64u: goto label_205f64;
            case 0x205F80u: goto label_205f80;
            case 0x205F9Cu: goto label_205f9c;
            case 0x205FA8u: goto label_205fa8;
            case 0x205FBCu: goto label_205fbc;
            case 0x205FF8u: goto label_205ff8;
            case 0x206000u: goto label_206000;
            case 0x20602Cu: goto label_20602c;
            case 0x206060u: goto label_206060;
            case 0x206074u: goto label_206074;
            case 0x20608Cu: goto label_20608c;
            case 0x2060A0u: goto label_2060a0;
            case 0x2060B4u: goto label_2060b4;
            case 0x2060CCu: goto label_2060cc;
            case 0x206118u: goto label_206118;
            case 0x206130u: goto label_206130;
            case 0x20614Cu: goto label_20614c;
            case 0x2061A4u: goto label_2061a4;
            case 0x2061F0u: goto label_2061f0;
            case 0x20623Cu: goto label_20623c;
            case 0x206268u: goto label_206268;
            case 0x2062ACu: goto label_2062ac;
            case 0x2062C0u: goto label_2062c0;
            case 0x2062D0u: goto label_2062d0;
            case 0x2062D8u: goto label_2062d8;
            case 0x206310u: goto label_206310;
            case 0x20635Cu: goto label_20635c;
            case 0x206364u: goto label_206364;
            case 0x206378u: goto label_206378;
            case 0x206390u: goto label_206390;
            case 0x2063A0u: goto label_2063a0;
            case 0x2063E4u: goto label_2063e4;
            case 0x20641Cu: goto label_20641c;
            case 0x206420u: goto label_206420;
            case 0x206428u: goto label_206428;
            case 0x206438u: goto label_206438;
            case 0x206444u: goto label_206444;
            case 0x206450u: goto label_206450;
            case 0x20645Cu: goto label_20645c;
            case 0x206464u: goto label_206464;
            case 0x206474u: goto label_206474;
            case 0x206480u: goto label_206480;
            case 0x20648Cu: goto label_20648c;
            case 0x206494u: goto label_206494;
            case 0x2064A4u: goto label_2064a4;
            case 0x2064C0u: goto label_2064c0;
            case 0x2064ECu: goto label_2064ec;
            case 0x2064F4u: goto label_2064f4;
            case 0x2064F8u: goto label_2064f8;
            case 0x206510u: goto label_206510;
            case 0x206540u: goto label_206540;
            case 0x206544u: goto label_206544;
            case 0x206560u: goto label_206560;
            case 0x206564u: goto label_206564;
            case 0x206584u: goto label_206584;
            case 0x206588u: goto label_206588;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205A74u; }
            if (ctx->pc != 0x205A74u) { return; }
        }
        }
    }
    ctx->pc = 0x205A74u;
    // 0x205a74: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x205a74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x205a78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x205a78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x205a7c: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x205a7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x205a80: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x205a80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x205a84: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x205a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x205a88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x205a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x205a8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x205a8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x205a90: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x205a90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x205a94: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x205a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x205a98: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x205a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x205a9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x205a9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x205aa0: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x205aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x205aa4: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x205aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x205aa8: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x205aa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x205aac: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x205aacu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x205ab0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x205AB0u;
    {
        const bool branch_taken_0x205ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205AB0u;
            // 0x205ab4: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ab0) {
            ctx->pc = 0x205B88u;
            goto label_205b88;
        }
    }
    ctx->pc = 0x205AB8u;
label_205ab8:
    // 0x205ab8: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x205ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x205abc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x205abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x205ac0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x205ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x205ac4: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x205ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x205ac8: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x205ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x205acc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x205accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x205ad0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x205ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x205ad4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205ad8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x205ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205adc: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x205ADCu;
    {
        const bool branch_taken_0x205adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x205AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205ADCu;
            // 0x205ae0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205adc) {
            ctx->pc = 0x205AE8u;
            goto label_205ae8;
        }
    }
    ctx->pc = 0x205AE4u;
    // 0x205ae4: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x205ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_205ae8:
    // 0x205ae8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x205ae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205aec: 0x12600026  beqz        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x205AECu;
    {
        const bool branch_taken_0x205aec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205AECu;
            // 0x205af0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205aec) {
            ctx->pc = 0x205B88u;
            goto label_205b88;
        }
    }
    ctx->pc = 0x205AF4u;
    // 0x205af4: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x205af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x205af8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x205af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x205afc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x205afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x205b00: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x205b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x205b04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x205B04u;
    {
        const bool branch_taken_0x205b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205B04u;
            // 0x205b08: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b04) {
            ctx->pc = 0x205B18u;
            goto label_205b18;
        }
    }
    ctx->pc = 0x205B0Cu;
    // 0x205b0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x205B0Cu;
    {
        const bool branch_taken_0x205b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205B0Cu;
            // 0x205b10: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b0c) {
            ctx->pc = 0x205B1Cu;
            goto label_205b1c;
        }
    }
    ctx->pc = 0x205B14u;
    // 0x205b14: 0x0  nop
    ctx->pc = 0x205b14u;
    // NOP
label_205b18:
    // 0x205b18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x205b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205b1c:
    // 0x205b1c: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x205b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x205b20: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x205b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x205b24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x205b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205b28: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x205b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x205b2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x205b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x205b30: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x205b30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x205b34: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x205b34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x205b38: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x205B38u;
    {
        const bool branch_taken_0x205b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x205b38) {
            ctx->pc = 0x205B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205B38u;
            // 0x205b3c: 0x8ca2008c  lw          $v0, 0x8C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205B50u;
            goto label_205b50;
        }
    }
    ctx->pc = 0x205B40u;
    // 0x205b40: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x205B40u;
    SET_GPR_U32(ctx, 31, 0x205B48u);
    ctx->pc = 0x205B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205B40u;
            // 0x205b44: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205B48u; }
        if (ctx->pc != 0x205B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205B48u; }
        if (ctx->pc != 0x205B48u) { return; }
    }
    ctx->pc = 0x205B48u;
    // 0x205b48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x205B48u;
    {
        const bool branch_taken_0x205b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205B48u;
            // 0x205b4c: 0xda020050  lqc2        $vf2, 0x50($s0) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b48) {
            ctx->pc = 0x205B7Cu;
            goto label_205b7c;
        }
    }
    ctx->pc = 0x205B50u;
label_205b50:
    // 0x205b50: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x205b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x205b54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205b58: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x205b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205b5c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x205b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x205b60: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x205b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x205b64: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x205b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x205b68: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x205b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x205b6c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x205b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x205b70: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x205b70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x205b74: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x205b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x205b78: 0xda020050  lqc2        $vf2, 0x50($s0)
    ctx->pc = 0x205b78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_205b7c:
    // 0x205b7c: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x205b7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x205b80: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x205b80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x205b84: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x205b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
label_205b88:
    // 0x205b88: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x205b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x205b8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x205b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b90: 0x8c441188  lw          $a0, 0x1188($v0)
    ctx->pc = 0x205b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4488)));
    // 0x205b94: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x205B94u;
    SET_GPR_U32(ctx, 31, 0x205B9Cu);
    ctx->pc = 0x205B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205B94u;
            // 0x205b98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205B9Cu; }
        if (ctx->pc != 0x205B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205B9Cu; }
        if (ctx->pc != 0x205B9Cu) { return; }
    }
    ctx->pc = 0x205B9Cu;
    // 0x205b9c: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x205b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x205ba0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x205ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ba4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x205ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205ba8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x205ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x205bac: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x205bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x205bb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bb4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x205bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x205bb8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x205bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x205bbc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x205bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x205bc0: 0x40f809  jalr        $v0
    ctx->pc = 0x205BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205BC8u);
        ctx->pc = 0x205BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205BC0u;
            // 0x205bc4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205BC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2054D8u: goto label_2054d8;
            case 0x205508u: goto label_205508;
            case 0x205568u: goto label_205568;
            case 0x2055A0u: goto label_2055a0;
            case 0x2055ACu: goto label_2055ac;
            case 0x2055F8u: goto label_2055f8;
            case 0x205660u: goto label_205660;
            case 0x205704u: goto label_205704;
            case 0x20570Cu: goto label_20570c;
            case 0x20572Cu: goto label_20572c;
            case 0x205734u: goto label_205734;
            case 0x205798u: goto label_205798;
            case 0x20579Cu: goto label_20579c;
            case 0x2057B0u: goto label_2057b0;
            case 0x2057B4u: goto label_2057b4;
            case 0x2057D0u: goto label_2057d0;
            case 0x2057ECu: goto label_2057ec;
            case 0x2057F0u: goto label_2057f0;
            case 0x2057FCu: goto label_2057fc;
            case 0x205800u: goto label_205800;
            case 0x205894u: goto label_205894;
            case 0x205928u: goto label_205928;
            case 0x205934u: goto label_205934;
            case 0x205990u: goto label_205990;
            case 0x20599Cu: goto label_20599c;
            case 0x2059CCu: goto label_2059cc;
            case 0x205A08u: goto label_205a08;
            case 0x205A0Cu: goto label_205a0c;
            case 0x205AB8u: goto label_205ab8;
            case 0x205AE8u: goto label_205ae8;
            case 0x205B18u: goto label_205b18;
            case 0x205B1Cu: goto label_205b1c;
            case 0x205B50u: goto label_205b50;
            case 0x205B7Cu: goto label_205b7c;
            case 0x205B88u: goto label_205b88;
            case 0x205BF0u: goto label_205bf0;
            case 0x205C18u: goto label_205c18;
            case 0x205CB0u: goto label_205cb0;
            case 0x205CC4u: goto label_205cc4;
            case 0x205D00u: goto label_205d00;
            case 0x205D1Cu: goto label_205d1c;
            case 0x205D34u: goto label_205d34;
            case 0x205D90u: goto label_205d90;
            case 0x205DACu: goto label_205dac;
            case 0x205E04u: goto label_205e04;
            case 0x205E50u: goto label_205e50;
            case 0x205EA8u: goto label_205ea8;
            case 0x205EC4u: goto label_205ec4;
            case 0x205ED0u: goto label_205ed0;
            case 0x205F24u: goto label_205f24;
            case 0x205F40u: goto label_205f40;
            case 0x205F64u: goto label_205f64;
            case 0x205F80u: goto label_205f80;
            case 0x205F9Cu: goto label_205f9c;
            case 0x205FA8u: goto label_205fa8;
            case 0x205FBCu: goto label_205fbc;
            case 0x205FF8u: goto label_205ff8;
            case 0x206000u: goto label_206000;
            case 0x20602Cu: goto label_20602c;
            case 0x206060u: goto label_206060;
            case 0x206074u: goto label_206074;
            case 0x20608Cu: goto label_20608c;
            case 0x2060A0u: goto label_2060a0;
            case 0x2060B4u: goto label_2060b4;
            case 0x2060CCu: goto label_2060cc;
            case 0x206118u: goto label_206118;
            case 0x206130u: goto label_206130;
            case 0x20614Cu: goto label_20614c;
            case 0x2061A4u: goto label_2061a4;
            case 0x2061F0u: goto label_2061f0;
            case 0x20623Cu: goto label_20623c;
            case 0x206268u: goto label_206268;
            case 0x2062ACu: goto label_2062ac;
            case 0x2062C0u: goto label_2062c0;
            case 0x2062D0u: goto label_2062d0;
            case 0x2062D8u: goto label_2062d8;
            case 0x206310u: goto label_206310;
            case 0x20635Cu: goto label_20635c;
            case 0x206364u: goto label_206364;
            case 0x206378u: goto label_206378;
            case 0x206390u: goto label_206390;
            case 0x2063A0u: goto label_2063a0;
            case 0x2063E4u: goto label_2063e4;
            case 0x20641Cu: goto label_20641c;
            case 0x206420u: goto label_206420;
            case 0x206428u: goto label_206428;
            case 0x206438u: goto label_206438;
            case 0x206444u: goto label_206444;
            case 0x206450u: goto label_206450;
            case 0x20645Cu: goto label_20645c;
            case 0x206464u: goto label_206464;
            case 0x206474u: goto label_206474;
            case 0x206480u: goto label_206480;
            case 0x20648Cu: goto label_20648c;
            case 0x206494u: goto label_206494;
            case 0x2064A4u: goto label_2064a4;
            case 0x2064C0u: goto label_2064c0;
            case 0x2064ECu: goto label_2064ec;
            case 0x2064F4u: goto label_2064f4;
            case 0x2064F8u: goto label_2064f8;
            case 0x206510u: goto label_206510;
            case 0x206540u: goto label_206540;
            case 0x206544u: goto label_206544;
            case 0x206560u: goto label_206560;
            case 0x206564u: goto label_206564;
            case 0x206584u: goto label_206584;
            case 0x206588u: goto label_206588;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205BC8u; }
            if (ctx->pc != 0x205BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x205BC8u;
    // 0x205bc8: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x205bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x205bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bd0: 0x7ba900b0  lq          $t1, 0xB0($sp)
    ctx->pc = 0x205bd0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x205bd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bd8: 0x7ba80110  lq          $t0, 0x110($sp)
    ctx->pc = 0x205bd8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x205bdc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x205bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205be0: 0xc0886d2  jal         func_221B48
    ctx->pc = 0x205BE0u;
    SET_GPR_U32(ctx, 31, 0x205BE8u);
    ctx->pc = 0x205BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205BE0u;
            // 0x205be4: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221B48u;
    if (runtime->hasFunction(0x221B48u)) {
        auto targetFn = runtime->lookupFunction(0x221B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205BE8u; }
        if (ctx->pc != 0x205BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221B48_0x221b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205BE8u; }
        if (ctx->pc != 0x205BE8u) { return; }
    }
    ctx->pc = 0x205BE8u;
    // 0x205be8: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x205BE8u;
    {
        const bool branch_taken_0x205be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205BE8u;
            // 0x205bec: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205be8) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205BF0u;
label_205bf0:
    // 0x205bf0: 0x8e530048  lw          $s3, 0x48($s2)
    ctx->pc = 0x205bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x205bf4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x205bf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205bf8: 0xc06a1f6  jal         func_1A87D8
    ctx->pc = 0x205BF8u;
    SET_GPR_U32(ctx, 31, 0x205C00u);
    ctx->pc = 0x205BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205BF8u;
            // 0x205bfc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A87D8u;
    if (runtime->hasFunction(0x1A87D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A87D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C00u; }
        if (ctx->pc != 0x205C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A87D8_0x1a87d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C00u; }
        if (ctx->pc != 0x205C00u) { return; }
    }
    ctx->pc = 0x205C00u;
    // 0x205c00: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x205C00u;
    {
        const bool branch_taken_0x205c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205c00) {
            ctx->pc = 0x205C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205C00u;
            // 0x205c04: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205C18u;
            goto label_205c18;
        }
    }
    ctx->pc = 0x205C08u;
    // 0x205c08: 0xc06a258  jal         func_1A8960
    ctx->pc = 0x205C08u;
    SET_GPR_U32(ctx, 31, 0x205C10u);
    ctx->pc = 0x205C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205C08u;
            // 0x205c0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8960u;
    if (runtime->hasFunction(0x1A8960u)) {
        auto targetFn = runtime->lookupFunction(0x1A8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C10u; }
        if (ctx->pc != 0x205C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8960_0x1a8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C10u; }
        if (ctx->pc != 0x205C10u) { return; }
    }
    ctx->pc = 0x205C10u;
    // 0x205c10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x205c10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x205c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_205c18:
    // 0x205c18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x205c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c1c: 0x8c441198  lw          $a0, 0x1198($v0)
    ctx->pc = 0x205c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4504)));
    // 0x205c20: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x205C20u;
    SET_GPR_U32(ctx, 31, 0x205C28u);
    ctx->pc = 0x205C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205C20u;
            // 0x205c24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C28u; }
        if (ctx->pc != 0x205C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C28u; }
        if (ctx->pc != 0x205C28u) { return; }
    }
    ctx->pc = 0x205C28u;
    // 0x205c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c2c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x205c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x205c30: 0xc0909c4  jal         func_242710
    ctx->pc = 0x205C30u;
    SET_GPR_U32(ctx, 31, 0x205C38u);
    ctx->pc = 0x205C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205C30u;
            // 0x205c34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C38u; }
        if (ctx->pc != 0x205C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C38u; }
        if (ctx->pc != 0x205C38u) { return; }
    }
    ctx->pc = 0x205C38u;
    // 0x205c38: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x205c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x205c3c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x205c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x205c40: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x205c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x205c44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x205c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x205c48: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x205c48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x205c4c: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x205c4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x205c50: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x205c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x205c54: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x205c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x205c58: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x205c58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x205c5c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x205c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x205c60: 0x40f809  jalr        $v0
    ctx->pc = 0x205C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205C68u);
        ctx->pc = 0x205C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C60u;
            // 0x205c64: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205C68u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2054D8u: goto label_2054d8;
            case 0x205508u: goto label_205508;
            case 0x205568u: goto label_205568;
            case 0x2055A0u: goto label_2055a0;
            case 0x2055ACu: goto label_2055ac;
            case 0x2055F8u: goto label_2055f8;
            case 0x205660u: goto label_205660;
            case 0x205704u: goto label_205704;
            case 0x20570Cu: goto label_20570c;
            case 0x20572Cu: goto label_20572c;
            case 0x205734u: goto label_205734;
            case 0x205798u: goto label_205798;
            case 0x20579Cu: goto label_20579c;
            case 0x2057B0u: goto label_2057b0;
            case 0x2057B4u: goto label_2057b4;
            case 0x2057D0u: goto label_2057d0;
            case 0x2057ECu: goto label_2057ec;
            case 0x2057F0u: goto label_2057f0;
            case 0x2057FCu: goto label_2057fc;
            case 0x205800u: goto label_205800;
            case 0x205894u: goto label_205894;
            case 0x205928u: goto label_205928;
            case 0x205934u: goto label_205934;
            case 0x205990u: goto label_205990;
            case 0x20599Cu: goto label_20599c;
            case 0x2059CCu: goto label_2059cc;
            case 0x205A08u: goto label_205a08;
            case 0x205A0Cu: goto label_205a0c;
            case 0x205AB8u: goto label_205ab8;
            case 0x205AE8u: goto label_205ae8;
            case 0x205B18u: goto label_205b18;
            case 0x205B1Cu: goto label_205b1c;
            case 0x205B50u: goto label_205b50;
            case 0x205B7Cu: goto label_205b7c;
            case 0x205B88u: goto label_205b88;
            case 0x205BF0u: goto label_205bf0;
            case 0x205C18u: goto label_205c18;
            case 0x205CB0u: goto label_205cb0;
            case 0x205CC4u: goto label_205cc4;
            case 0x205D00u: goto label_205d00;
            case 0x205D1Cu: goto label_205d1c;
            case 0x205D34u: goto label_205d34;
            case 0x205D90u: goto label_205d90;
            case 0x205DACu: goto label_205dac;
            case 0x205E04u: goto label_205e04;
            case 0x205E50u: goto label_205e50;
            case 0x205EA8u: goto label_205ea8;
            case 0x205EC4u: goto label_205ec4;
            case 0x205ED0u: goto label_205ed0;
            case 0x205F24u: goto label_205f24;
            case 0x205F40u: goto label_205f40;
            case 0x205F64u: goto label_205f64;
            case 0x205F80u: goto label_205f80;
            case 0x205F9Cu: goto label_205f9c;
            case 0x205FA8u: goto label_205fa8;
            case 0x205FBCu: goto label_205fbc;
            case 0x205FF8u: goto label_205ff8;
            case 0x206000u: goto label_206000;
            case 0x20602Cu: goto label_20602c;
            case 0x206060u: goto label_206060;
            case 0x206074u: goto label_206074;
            case 0x20608Cu: goto label_20608c;
            case 0x2060A0u: goto label_2060a0;
            case 0x2060B4u: goto label_2060b4;
            case 0x2060CCu: goto label_2060cc;
            case 0x206118u: goto label_206118;
            case 0x206130u: goto label_206130;
            case 0x20614Cu: goto label_20614c;
            case 0x2061A4u: goto label_2061a4;
            case 0x2061F0u: goto label_2061f0;
            case 0x20623Cu: goto label_20623c;
            case 0x206268u: goto label_206268;
            case 0x2062ACu: goto label_2062ac;
            case 0x2062C0u: goto label_2062c0;
            case 0x2062D0u: goto label_2062d0;
            case 0x2062D8u: goto label_2062d8;
            case 0x206310u: goto label_206310;
            case 0x20635Cu: goto label_20635c;
            case 0x206364u: goto label_206364;
            case 0x206378u: goto label_206378;
            case 0x206390u: goto label_206390;
            case 0x2063A0u: goto label_2063a0;
            case 0x2063E4u: goto label_2063e4;
            case 0x20641Cu: goto label_20641c;
            case 0x206420u: goto label_206420;
            case 0x206428u: goto label_206428;
            case 0x206438u: goto label_206438;
            case 0x206444u: goto label_206444;
            case 0x206450u: goto label_206450;
            case 0x20645Cu: goto label_20645c;
            case 0x206464u: goto label_206464;
            case 0x206474u: goto label_206474;
            case 0x206480u: goto label_206480;
            case 0x20648Cu: goto label_20648c;
            case 0x206494u: goto label_206494;
            case 0x2064A4u: goto label_2064a4;
            case 0x2064C0u: goto label_2064c0;
            case 0x2064ECu: goto label_2064ec;
            case 0x2064F4u: goto label_2064f4;
            case 0x2064F8u: goto label_2064f8;
            case 0x206510u: goto label_206510;
            case 0x206540u: goto label_206540;
            case 0x206544u: goto label_206544;
            case 0x206560u: goto label_206560;
            case 0x206564u: goto label_206564;
            case 0x206584u: goto label_206584;
            case 0x206588u: goto label_206588;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205C68u; }
            if (ctx->pc != 0x205C68u) { return; }
        }
        }
    }
    ctx->pc = 0x205C68u;
    // 0x205c68: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x205c68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x205c6c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x205c6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x205c70: 0xdba100f0  lqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x205c70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x205c74: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x205c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x205c78: 0xdba20120  lqc2        $vf2, 0x120($sp)
    ctx->pc = 0x205c78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x205c7c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x205c7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x205c80: 0xfba20130  sqc2        $vf2, 0x130($sp)
    ctx->pc = 0x205c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x205c84: 0xc0909c4  jal         func_242710
    ctx->pc = 0x205C84u;
    SET_GPR_U32(ctx, 31, 0x205C8Cu);
    ctx->pc = 0x205C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205C84u;
            // 0x205c88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C8Cu; }
        if (ctx->pc != 0x205C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C8Cu; }
        if (ctx->pc != 0x205C8Cu) { return; }
    }
    ctx->pc = 0x205C8Cu;
    // 0x205c8c: 0x78470030  lq          $a3, 0x30($v0)
    ctx->pc = 0x205c8cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x205c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c94: 0x7ba60130  lq          $a2, 0x130($sp)
    ctx->pc = 0x205c94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x205c98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x205c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c9c: 0xc089344  jal         func_224D10
    ctx->pc = 0x205C9Cu;
    SET_GPR_U32(ctx, 31, 0x205CA4u);
    ctx->pc = 0x205CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205C9Cu;
            // 0x205ca0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224D10u;
    if (runtime->hasFunction(0x224D10u)) {
        auto targetFn = runtime->lookupFunction(0x224D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205CA4u; }
        if (ctx->pc != 0x205CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224D10_0x224d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205CA4u; }
        if (ctx->pc != 0x205CA4u) { return; }
    }
    ctx->pc = 0x205CA4u;
    // 0x205ca4: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x205CA4u;
    {
        const bool branch_taken_0x205ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205CA4u;
            // 0x205ca8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ca4) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205CACu;
    // 0x205cac: 0x0  nop
    ctx->pc = 0x205cacu;
    // NOP
label_205cb0:
    // 0x205cb0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x205cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x205cb4: 0xc077aa6  jal         func_1DEA98
    ctx->pc = 0x205CB4u;
    SET_GPR_U32(ctx, 31, 0x205CBCu);
    ctx->pc = 0x205CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205CB4u;
            // 0x205cb8: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA98u;
    if (runtime->hasFunction(0x1DEA98u)) {
        auto targetFn = runtime->lookupFunction(0x1DEA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205CBCu; }
        if (ctx->pc != 0x205CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEA98_0x1dea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205CBCu; }
        if (ctx->pc != 0x205CBCu) { return; }
    }
    ctx->pc = 0x205CBCu;
    // 0x205cbc: 0x1000020e  b           . + 4 + (0x20E << 2)
    ctx->pc = 0x205CBCu;
    {
        const bool branch_taken_0x205cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205CBCu;
            // 0x205cc0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205cbc) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205CC4u;
label_205cc4:
    // 0x205cc4: 0x240203fe  addiu       $v0, $zero, 0x3FE
    ctx->pc = 0x205cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x205cc8: 0xafb40084  sw          $s4, 0x84($sp)
    ctx->pc = 0x205cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 20));
    // 0x205ccc: 0xa7a20080  sh          $v0, 0x80($sp)
    ctx->pc = 0x205cccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x205cd0: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x205cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x205cd4: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x205cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x205cd8: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x205cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x205cdc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x205cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x205ce0: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x205ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x205ce4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x205ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x205ce8: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x205ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x205cec: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x205CECu;
    SET_GPR_U32(ctx, 31, 0x205CF4u);
    ctx->pc = 0x205CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205CECu;
            // 0x205cf0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205CF4u; }
        if (ctx->pc != 0x205CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205CF4u; }
        if (ctx->pc != 0x205CF4u) { return; }
    }
    ctx->pc = 0x205CF4u;
    // 0x205cf4: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x205CF4u;
    {
        const bool branch_taken_0x205cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205CF4u;
            // 0x205cf8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205cf4) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205CFCu;
    // 0x205cfc: 0x0  nop
    ctx->pc = 0x205cfcu;
    // NOP
label_205d00:
    // 0x205d00: 0x12e001fc  beqz        $s7, . + 4 + (0x1FC << 2)
    ctx->pc = 0x205D00u;
    {
        const bool branch_taken_0x205d00 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D00u;
            // 0x205d04: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d00) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x205D08u;
    // 0x205d08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x205d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d0c: 0xc07bf84  jal         func_1EFE10
    ctx->pc = 0x205D0Cu;
    SET_GPR_U32(ctx, 31, 0x205D14u);
    ctx->pc = 0x205D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205D0Cu;
            // 0x205d10: 0x8c44e2a4  lw          $a0, -0x1D5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE10u;
    if (runtime->hasFunction(0x1EFE10u)) {
        auto targetFn = runtime->lookupFunction(0x1EFE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205D14u; }
        if (ctx->pc != 0x205D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFE10_0x1efe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205D14u; }
        if (ctx->pc != 0x205D14u) { return; }
    }
    ctx->pc = 0x205D14u;
    // 0x205d14: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x205D14u;
    {
        const bool branch_taken_0x205d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D14u;
            // 0x205d18: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d14) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205D1Cu;
label_205d1c:
    // 0x205d1c: 0x12e001f5  beqz        $s7, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x205D1Cu;
    {
        const bool branch_taken_0x205d1c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D1Cu;
            // 0x205d20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d1c) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x205D24u;
    // 0x205d24: 0xc08a0b4  jal         func_2282D0
    ctx->pc = 0x205D24u;
    SET_GPR_U32(ctx, 31, 0x205D2Cu);
    ctx->pc = 0x205D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205D24u;
            // 0x205d28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2282D0u;
    if (runtime->hasFunction(0x2282D0u)) {
        auto targetFn = runtime->lookupFunction(0x2282D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205D2Cu; }
        if (ctx->pc != 0x205D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002282D0_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205D2Cu; }
        if (ctx->pc != 0x205D2Cu) { return; }
    }
    ctx->pc = 0x205D2Cu;
    // 0x205d2c: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x205D2Cu;
    {
        const bool branch_taken_0x205d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D2Cu;
            // 0x205d30: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d2c) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205D34u;
label_205d34:
    // 0x205d34: 0x3c020780  lui         $v0, 0x780
    ctx->pc = 0x205d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1920 << 16));
    // 0x205d38: 0x96240006  lhu         $a0, 0x6($s1)
    ctx->pc = 0x205d38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x205d3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x205d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x205d40: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x205d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x205d44: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x205d44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x205d48: 0x30857fff  andi        $a1, $a0, 0x7FFF
    ctx->pc = 0x205d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x205d4c: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x205d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x205d50: 0x52b40  sll         $a1, $a1, 13
    ctx->pc = 0x205d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 13));
    // 0x205d54: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x205d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x205d58: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x205d58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x205d5c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x205d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x205d60: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x205d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x205d64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x205d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x205d68: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x205d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x205d6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x205d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x205d70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x205d70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205d74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205d78: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x205d78u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x205d7c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x205d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x205d80: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x205d80u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x205d84: 0xe4406320  swc1        $f0, 0x6320($v0)
    ctx->pc = 0x205d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 25376), bits); }
    // 0x205d88: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x205D88u;
    {
        const bool branch_taken_0x205d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D88u;
            // 0x205d8c: 0xe4c1631c  swc1        $f1, 0x631C($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 25372), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d88) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x205D90u;
label_205d90:
    // 0x205d90: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x205d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x205d94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x205d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d98: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x205d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d9c: 0xc081970  jal         func_2065C0
    ctx->pc = 0x205D9Cu;
    SET_GPR_U32(ctx, 31, 0x205DA4u);
    ctx->pc = 0x205DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205D9Cu;
            // 0x205da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2065C0u;
    if (runtime->hasFunction(0x2065C0u)) {
        auto targetFn = runtime->lookupFunction(0x2065C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205DA4u; }
        if (ctx->pc != 0x205DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002065C0_0x2065c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205DA4u; }
        if (ctx->pc != 0x205DA4u) { return; }
    }
    ctx->pc = 0x205DA4u;
    // 0x205da4: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x205DA4u;
    {
        const bool branch_taken_0x205da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205DA4u;
            // 0x205da8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205da4) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205DACu;
label_205dac:
    // 0x205dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205db0: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x205db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x205db4: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x205db4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x205db8: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x205db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x205dbc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x205dbcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x205dc0: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x205dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x205dc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x205dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x205dc8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x205dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x205dcc: 0xfe430078  sd          $v1, 0x78($s2)
    ctx->pc = 0x205dccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 3));
    // 0x205dd0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x205dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x205dd4: 0xae4401ac  sw          $a0, 0x1AC($s2)
    ctx->pc = 0x205dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 4));
    // 0x205dd8: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x205dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x205ddc: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x205ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x205de0: 0x40f809  jalr        $v0
    ctx->pc = 0x205DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205DE8u);
        ctx->pc = 0x205DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205DE0u;
            // 0x205de4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205DE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2054D8u: goto label_2054d8;
            case 0x205508u: goto label_205508;
            case 0x205568u: goto label_205568;
            case 0x2055A0u: goto label_2055a0;
            case 0x2055ACu: goto label_2055ac;
            case 0x2055F8u: goto label_2055f8;
            case 0x205660u: goto label_205660;
            case 0x205704u: goto label_205704;
            case 0x20570Cu: goto label_20570c;
            case 0x20572Cu: goto label_20572c;
            case 0x205734u: goto label_205734;
            case 0x205798u: goto label_205798;
            case 0x20579Cu: goto label_20579c;
            case 0x2057B0u: goto label_2057b0;
            case 0x2057B4u: goto label_2057b4;
            case 0x2057D0u: goto label_2057d0;
            case 0x2057ECu: goto label_2057ec;
            case 0x2057F0u: goto label_2057f0;
            case 0x2057FCu: goto label_2057fc;
            case 0x205800u: goto label_205800;
            case 0x205894u: goto label_205894;
            case 0x205928u: goto label_205928;
            case 0x205934u: goto label_205934;
            case 0x205990u: goto label_205990;
            case 0x20599Cu: goto label_20599c;
            case 0x2059CCu: goto label_2059cc;
            case 0x205A08u: goto label_205a08;
            case 0x205A0Cu: goto label_205a0c;
            case 0x205AB8u: goto label_205ab8;
            case 0x205AE8u: goto label_205ae8;
            case 0x205B18u: goto label_205b18;
            case 0x205B1Cu: goto label_205b1c;
            case 0x205B50u: goto label_205b50;
            case 0x205B7Cu: goto label_205b7c;
            case 0x205B88u: goto label_205b88;
            case 0x205BF0u: goto label_205bf0;
            case 0x205C18u: goto label_205c18;
            case 0x205CB0u: goto label_205cb0;
            case 0x205CC4u: goto label_205cc4;
            case 0x205D00u: goto label_205d00;
            case 0x205D1Cu: goto label_205d1c;
            case 0x205D34u: goto label_205d34;
            case 0x205D90u: goto label_205d90;
            case 0x205DACu: goto label_205dac;
            case 0x205E04u: goto label_205e04;
            case 0x205E50u: goto label_205e50;
            case 0x205EA8u: goto label_205ea8;
            case 0x205EC4u: goto label_205ec4;
            case 0x205ED0u: goto label_205ed0;
            case 0x205F24u: goto label_205f24;
            case 0x205F40u: goto label_205f40;
            case 0x205F64u: goto label_205f64;
            case 0x205F80u: goto label_205f80;
            case 0x205F9Cu: goto label_205f9c;
            case 0x205FA8u: goto label_205fa8;
            case 0x205FBCu: goto label_205fbc;
            case 0x205FF8u: goto label_205ff8;
            case 0x206000u: goto label_206000;
            case 0x20602Cu: goto label_20602c;
            case 0x206060u: goto label_206060;
            case 0x206074u: goto label_206074;
            case 0x20608Cu: goto label_20608c;
            case 0x2060A0u: goto label_2060a0;
            case 0x2060B4u: goto label_2060b4;
            case 0x2060CCu: goto label_2060cc;
            case 0x206118u: goto label_206118;
            case 0x206130u: goto label_206130;
            case 0x20614Cu: goto label_20614c;
            case 0x2061A4u: goto label_2061a4;
            case 0x2061F0u: goto label_2061f0;
            case 0x20623Cu: goto label_20623c;
            case 0x206268u: goto label_206268;
            case 0x2062ACu: goto label_2062ac;
            case 0x2062C0u: goto label_2062c0;
            case 0x2062D0u: goto label_2062d0;
            case 0x2062D8u: goto label_2062d8;
            case 0x206310u: goto label_206310;
            case 0x20635Cu: goto label_20635c;
            case 0x206364u: goto label_206364;
            case 0x206378u: goto label_206378;
            case 0x206390u: goto label_206390;
            case 0x2063A0u: goto label_2063a0;
            case 0x2063E4u: goto label_2063e4;
            case 0x20641Cu: goto label_20641c;
            case 0x206420u: goto label_206420;
            case 0x206428u: goto label_206428;
            case 0x206438u: goto label_206438;
            case 0x206444u: goto label_206444;
            case 0x206450u: goto label_206450;
            case 0x20645Cu: goto label_20645c;
            case 0x206464u: goto label_206464;
            case 0x206474u: goto label_206474;
            case 0x206480u: goto label_206480;
            case 0x20648Cu: goto label_20648c;
            case 0x206494u: goto label_206494;
            case 0x2064A4u: goto label_2064a4;
            case 0x2064C0u: goto label_2064c0;
            case 0x2064ECu: goto label_2064ec;
            case 0x2064F4u: goto label_2064f4;
            case 0x2064F8u: goto label_2064f8;
            case 0x206510u: goto label_206510;
            case 0x206540u: goto label_206540;
            case 0x206544u: goto label_206544;
            case 0x206560u: goto label_206560;
            case 0x206564u: goto label_206564;
            case 0x206584u: goto label_206584;
            case 0x206588u: goto label_206588;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205DE8u; }
            if (ctx->pc != 0x205DE8u) { return; }
        }
        }
    }
    ctx->pc = 0x205DE8u;
    // 0x205de8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205de8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205dec: 0x106001c2  beqz        $v1, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x205DECu;
    {
        const bool branch_taken_0x205dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205DECu;
            // 0x205df0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205dec) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205DF4u;
    // 0x205df4: 0x90620016  lbu         $v0, 0x16($v1)
    ctx->pc = 0x205df4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x205df8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x205df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x205dfc: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x205DFCu;
    {
        const bool branch_taken_0x205dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205DFCu;
            // 0x205e00: 0xa0620016  sb          $v0, 0x16($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205dfc) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x205E04u;
label_205e04:
    // 0x205e04: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x205e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x205e08: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x205e08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x205e0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x205e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205e10: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x205e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x205e14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x205e14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x205e18: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x205e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x205e1c: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x205e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x205e20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x205e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x205e24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x205e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x205e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205e2c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x205e2cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x205e30: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x205e30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205e34: 0x450101a2  bc1t        . + 4 + (0x1A2 << 2)
    ctx->pc = 0x205E34u;
    {
        const bool branch_taken_0x205e34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205e34) {
            ctx->pc = 0x2064C0u;
            goto label_2064c0;
        }
    }
    ctx->pc = 0x205E3Cu;
    // 0x205e3c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x205e3cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x205e40: 0xc0782e8  jal         func_1E0BA0
    ctx->pc = 0x205E40u;
    SET_GPR_U32(ctx, 31, 0x205E48u);
    ctx->pc = 0x205E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205E40u;
            // 0x205e44: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0BA0u;
    if (runtime->hasFunction(0x1E0BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E48u; }
        if (ctx->pc != 0x205E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0BA0_0x1e0ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E48u; }
        if (ctx->pc != 0x205E48u) { return; }
    }
    ctx->pc = 0x205E48u;
    // 0x205e48: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x205E48u;
    {
        const bool branch_taken_0x205e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205E48u;
            // 0x205e4c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e48) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205E50u;
label_205e50:
    // 0x205e50: 0x12e001a8  beqz        $s7, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x205E50u;
    {
        const bool branch_taken_0x205e50 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205E50u;
            // 0x205e54: 0x3c020780  lui         $v0, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1920 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e50) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x205E58u;
    // 0x205e58: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x205e58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x205e5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205e60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205e64: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x205e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x205e68: 0xde450078  ld          $a1, 0x78($s2)
    ctx->pc = 0x205e68u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x205e6c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x205e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x205e70: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x205e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x205e74: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x205e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x205e78: 0x2a42014  dsllv       $a0, $a0, $s5
    ctx->pc = 0x205e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x205e7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x205e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x205e80: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x205e80u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x205e84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205e88: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x205e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x205e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205e90: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x205e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x205e94: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x205e94u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x205e98: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x205e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x205e9c: 0xe4406324  swc1        $f0, 0x6324($v0)
    ctx->pc = 0x205e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 25380), bits); }
    // 0x205ea0: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x205EA0u;
    {
        const bool branch_taken_0x205ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205EA0u;
            // 0x205ea4: 0xfe450078  sd          $a1, 0x78($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ea0) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x205EA8u;
label_205ea8:
    // 0x205ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205eac: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x205eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x205eb0: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x205eb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x205eb4: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x205eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x205eb8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x205eb8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x205ebc: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x205EBCu;
    {
        const bool branch_taken_0x205ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205EBCu;
            // 0x205ec0: 0x34840040  ori         $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ebc) {
            ctx->pc = 0x206390u;
            goto label_206390;
        }
    }
    ctx->pc = 0x205EC4u;
label_205ec4:
    // 0x205ec4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x205ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x205ec8: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x205EC8u;
    {
        const bool branch_taken_0x205ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205EC8u;
            // 0x205ecc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ec8) {
            ctx->pc = 0x206464u;
            goto label_206464;
        }
    }
    ctx->pc = 0x205ED0u;
label_205ed0:
    // 0x205ed0: 0x3c050780  lui         $a1, 0x780
    ctx->pc = 0x205ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1920 << 16));
    // 0x205ed4: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x205ed4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x205ed8: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x205ed8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x205edc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x205edcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x205ee0: 0x30857fff  andi        $a1, $a0, 0x7FFF
    ctx->pc = 0x205ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x205ee4: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x205ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x205ee8: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x205ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x205eec: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x205eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x205ef0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x205ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x205ef4: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x205ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x205ef8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x205ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x205efc: 0x52b40  sll         $a1, $a1, 13
    ctx->pc = 0x205efcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 13));
    // 0x205f00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x205f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x205f04: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x205f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x205f08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205f0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x205f0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205f10: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x205f10u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x205f14: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x205f14u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x205f18: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x205f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x205f1c: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x205F1Cu;
    {
        const bool branch_taken_0x205f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205F1Cu;
            // 0x205f20: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f1c) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x205F24u;
label_205f24:
    // 0x205f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205f28: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x205f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x205f2c: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x205f2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x205f30: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x205f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x205f34: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x205f34u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x205f38: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x205F38u;
    {
        const bool branch_taken_0x205f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205F38u;
            // 0x205f3c: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f38) {
            ctx->pc = 0x206390u;
            goto label_206390;
        }
    }
    ctx->pc = 0x205F40u;
label_205f40:
    // 0x205f40: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x205f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x205f44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x205f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f48: 0x8c446284  lw          $a0, 0x6284($v0)
    ctx->pc = 0x205f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25220)));
    // 0x205f4c: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x205F4Cu;
    SET_GPR_U32(ctx, 31, 0x205F54u);
    ctx->pc = 0x205F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205F4Cu;
            // 0x205f50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205F54u; }
        if (ctx->pc != 0x205F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205F54u; }
        if (ctx->pc != 0x205F54u) { return; }
    }
    ctx->pc = 0x205F54u;
    // 0x205f54: 0xc050b68  jal         func_142DA0
    ctx->pc = 0x205F54u;
    SET_GPR_U32(ctx, 31, 0x205F5Cu);
    ctx->pc = 0x205F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205F54u;
            // 0x205f58: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142DA0u;
    if (runtime->hasFunction(0x142DA0u)) {
        auto targetFn = runtime->lookupFunction(0x142DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205F5Cu; }
        if (ctx->pc != 0x205F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_142da0_0x142e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205F5Cu; }
        if (ctx->pc != 0x205F5Cu) { return; }
    }
    ctx->pc = 0x205F5Cu;
    // 0x205f5c: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x205F5Cu;
    {
        const bool branch_taken_0x205f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205F5Cu;
            // 0x205f60: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f5c) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205F64u;
label_205f64:
    // 0x205f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205f68: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x205f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x205f6c: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x205f6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x205f70: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x205f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x205f74: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x205f74u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x205f78: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x205F78u;
    {
        const bool branch_taken_0x205f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205F78u;
            // 0x205f7c: 0x34840008  ori         $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f78) {
            ctx->pc = 0x206390u;
            goto label_206390;
        }
    }
    ctx->pc = 0x205F80u;
label_205f80:
    // 0x205f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205f84: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x205f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x205f88: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x205f88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x205f8c: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x205f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x205f90: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x205f90u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x205f94: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x205F94u;
    {
        const bool branch_taken_0x205f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205F94u;
            // 0x205f98: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f94) {
            ctx->pc = 0x206390u;
            goto label_206390;
        }
    }
    ctx->pc = 0x205F9Cu;
label_205f9c:
    // 0x205f9c: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x205f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x205fa0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x205FA0u;
    {
        const bool branch_taken_0x205fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205FA0u;
            // 0x205fa4: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fa0) {
            ctx->pc = 0x206000u;
            goto label_206000;
        }
    }
    ctx->pc = 0x205FA8u;
label_205fa8:
    // 0x205fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205fac: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x205facu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x205fb0: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x205fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x205fb4: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x205FB4u;
    {
        const bool branch_taken_0x205fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205FB4u;
            // 0x205fb8: 0xae5401b0  sw          $s4, 0x1B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fb4) {
            ctx->pc = 0x206428u;
            goto label_206428;
        }
    }
    ctx->pc = 0x205FBCu;
label_205fbc:
    // 0x205fbc: 0x12e0014d  beqz        $s7, . + 4 + (0x14D << 2)
    ctx->pc = 0x205FBCu;
    {
        const bool branch_taken_0x205fbc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205FBCu;
            // 0x205fc0: 0x3c030780  lui         $v1, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fbc) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x205FC4u;
    // 0x205fc4: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x205fc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x205fc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205fcc: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x205fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x205fd0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x205fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x205fd4: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x205fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x205fd8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x205fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x205fdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x205fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x205fe0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205fe4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x205fe4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x205fe8: 0xc076a4e  jal         func_1DA938
    ctx->pc = 0x205FE8u;
    SET_GPR_U32(ctx, 31, 0x205FF0u);
    ctx->pc = 0x205FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205FE8u;
            // 0x205fec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA938u;
    if (runtime->hasFunction(0x1DA938u)) {
        auto targetFn = runtime->lookupFunction(0x1DA938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205FF0u; }
        if (ctx->pc != 0x205FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA938_0x1da938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205FF0u; }
        if (ctx->pc != 0x205FF0u) { return; }
    }
    ctx->pc = 0x205FF0u;
    // 0x205ff0: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x205FF0u;
    {
        const bool branch_taken_0x205ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205FF0u;
            // 0x205ff4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ff0) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x205FF8u;
label_205ff8:
    // 0x205ff8: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x205ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x205ffc: 0x34420024  ori         $v0, $v0, 0x24
    ctx->pc = 0x205ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
label_206000:
    // 0x206000: 0x13c00106  beqz        $fp, . + 4 + (0x106 << 2)
    ctx->pc = 0x206000u;
    {
        const bool branch_taken_0x206000 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x206004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206000u;
            // 0x206004: 0xae4201ac  sw          $v0, 0x1AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206000) {
            ctx->pc = 0x20641Cu;
            goto label_20641c;
        }
    }
    ctx->pc = 0x206008u;
    // 0x206008: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x206008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20600c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x20600cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x206010: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x206010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x206014: 0x40f809  jalr        $v0
    ctx->pc = 0x206014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20601Cu);
        ctx->pc = 0x206018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206014u;
            // 0x206018: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20601Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2054D8u: goto label_2054d8;
            case 0x205508u: goto label_205508;
            case 0x205568u: goto label_205568;
            case 0x2055A0u: goto label_2055a0;
            case 0x2055ACu: goto label_2055ac;
            case 0x2055F8u: goto label_2055f8;
            case 0x205660u: goto label_205660;
            case 0x205704u: goto label_205704;
            case 0x20570Cu: goto label_20570c;
            case 0x20572Cu: goto label_20572c;
            case 0x205734u: goto label_205734;
            case 0x205798u: goto label_205798;
            case 0x20579Cu: goto label_20579c;
            case 0x2057B0u: goto label_2057b0;
            case 0x2057B4u: goto label_2057b4;
            case 0x2057D0u: goto label_2057d0;
            case 0x2057ECu: goto label_2057ec;
            case 0x2057F0u: goto label_2057f0;
            case 0x2057FCu: goto label_2057fc;
            case 0x205800u: goto label_205800;
            case 0x205894u: goto label_205894;
            case 0x205928u: goto label_205928;
            case 0x205934u: goto label_205934;
            case 0x205990u: goto label_205990;
            case 0x20599Cu: goto label_20599c;
            case 0x2059CCu: goto label_2059cc;
            case 0x205A08u: goto label_205a08;
            case 0x205A0Cu: goto label_205a0c;
            case 0x205AB8u: goto label_205ab8;
            case 0x205AE8u: goto label_205ae8;
            case 0x205B18u: goto label_205b18;
            case 0x205B1Cu: goto label_205b1c;
            case 0x205B50u: goto label_205b50;
            case 0x205B7Cu: goto label_205b7c;
            case 0x205B88u: goto label_205b88;
            case 0x205BF0u: goto label_205bf0;
            case 0x205C18u: goto label_205c18;
            case 0x205CB0u: goto label_205cb0;
            case 0x205CC4u: goto label_205cc4;
            case 0x205D00u: goto label_205d00;
            case 0x205D1Cu: goto label_205d1c;
            case 0x205D34u: goto label_205d34;
            case 0x205D90u: goto label_205d90;
            case 0x205DACu: goto label_205dac;
            case 0x205E04u: goto label_205e04;
            case 0x205E50u: goto label_205e50;
            case 0x205EA8u: goto label_205ea8;
            case 0x205EC4u: goto label_205ec4;
            case 0x205ED0u: goto label_205ed0;
            case 0x205F24u: goto label_205f24;
            case 0x205F40u: goto label_205f40;
            case 0x205F64u: goto label_205f64;
            case 0x205F80u: goto label_205f80;
            case 0x205F9Cu: goto label_205f9c;
            case 0x205FA8u: goto label_205fa8;
            case 0x205FBCu: goto label_205fbc;
            case 0x205FF8u: goto label_205ff8;
            case 0x206000u: goto label_206000;
            case 0x20602Cu: goto label_20602c;
            case 0x206060u: goto label_206060;
            case 0x206074u: goto label_206074;
            case 0x20608Cu: goto label_20608c;
            case 0x2060A0u: goto label_2060a0;
            case 0x2060B4u: goto label_2060b4;
            case 0x2060CCu: goto label_2060cc;
            case 0x206118u: goto label_206118;
            case 0x206130u: goto label_206130;
            case 0x20614Cu: goto label_20614c;
            case 0x2061A4u: goto label_2061a4;
            case 0x2061F0u: goto label_2061f0;
            case 0x20623Cu: goto label_20623c;
            case 0x206268u: goto label_206268;
            case 0x2062ACu: goto label_2062ac;
            case 0x2062C0u: goto label_2062c0;
            case 0x2062D0u: goto label_2062d0;
            case 0x2062D8u: goto label_2062d8;
            case 0x206310u: goto label_206310;
            case 0x20635Cu: goto label_20635c;
            case 0x206364u: goto label_206364;
            case 0x206378u: goto label_206378;
            case 0x206390u: goto label_206390;
            case 0x2063A0u: goto label_2063a0;
            case 0x2063E4u: goto label_2063e4;
            case 0x20641Cu: goto label_20641c;
            case 0x206420u: goto label_206420;
            case 0x206428u: goto label_206428;
            case 0x206438u: goto label_206438;
            case 0x206444u: goto label_206444;
            case 0x206450u: goto label_206450;
            case 0x20645Cu: goto label_20645c;
            case 0x206464u: goto label_206464;
            case 0x206474u: goto label_206474;
            case 0x206480u: goto label_206480;
            case 0x20648Cu: goto label_20648c;
            case 0x206494u: goto label_206494;
            case 0x2064A4u: goto label_2064a4;
            case 0x2064C0u: goto label_2064c0;
            case 0x2064ECu: goto label_2064ec;
            case 0x2064F4u: goto label_2064f4;
            case 0x2064F8u: goto label_2064f8;
            case 0x206510u: goto label_206510;
            case 0x206540u: goto label_206540;
            case 0x206544u: goto label_206544;
            case 0x206560u: goto label_206560;
            case 0x206564u: goto label_206564;
            case 0x206584u: goto label_206584;
            case 0x206588u: goto label_206588;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20601Cu; }
            if (ctx->pc != 0x20601Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20601Cu;
    // 0x20601c: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x20601cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x206020: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x206020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x206024: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x206024u;
    {
        const bool branch_taken_0x206024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206024u;
            // 0x206028: 0xac4301ac  sw          $v1, 0x1AC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206024) {
            ctx->pc = 0x20641Cu;
            goto label_20641c;
        }
    }
    ctx->pc = 0x20602Cu;
label_20602c:
    // 0x20602c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206030: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x206030u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x206034: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x206034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x206038: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20603c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x20603cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x206040: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x206040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
    // 0x206044: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x206044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206048: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20604c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206050: 0xc08123e  jal         func_2048F8
    ctx->pc = 0x206050u;
    SET_GPR_U32(ctx, 31, 0x206058u);
    ctx->pc = 0x206054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206050u;
            // 0x206054: 0xfe430078  sd          $v1, 0x78($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2048F8u;
    if (runtime->hasFunction(0x2048F8u)) {
        auto targetFn = runtime->lookupFunction(0x2048F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206058u; }
        if (ctx->pc != 0x206058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002048F8_0x2048f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206058u; }
        if (ctx->pc != 0x206058u) { return; }
    }
    ctx->pc = 0x206058u;
    // 0x206058: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x206058u;
    {
        const bool branch_taken_0x206058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20605Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206058u;
            // 0x20605c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206058) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x206060u;
label_206060:
    // 0x206060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206064: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x206064u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x206068: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x206068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x20606c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x20606Cu;
    {
        const bool branch_taken_0x20606c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20606Cu;
            // 0x206070: 0xae510044  sw          $s1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20606c) {
            ctx->pc = 0x206428u;
            goto label_206428;
        }
    }
    ctx->pc = 0x206074u;
label_206074:
    // 0x206074: 0x12e00120  beqz        $s7, . + 4 + (0x120 << 2)
    ctx->pc = 0x206074u;
    {
        const bool branch_taken_0x206074 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x206078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206074u;
            // 0x206078: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206074) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x20607Cu;
    // 0x20607c: 0xc076a7e  jal         func_1DA9F8
    ctx->pc = 0x20607Cu;
    SET_GPR_U32(ctx, 31, 0x206084u);
    ctx->pc = 0x206080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20607Cu;
            // 0x206080: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA9F8u;
    if (runtime->hasFunction(0x1DA9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1DA9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206084u; }
        if (ctx->pc != 0x206084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1da9f8_0x1daa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206084u; }
        if (ctx->pc != 0x206084u) { return; }
    }
    ctx->pc = 0x206084u;
    // 0x206084: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x206084u;
    {
        const bool branch_taken_0x206084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206084u;
            // 0x206088: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206084) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x20608Cu;
label_20608c:
    // 0x20608c: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x20608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x206090: 0xc07821c  jal         func_1E0870
    ctx->pc = 0x206090u;
    SET_GPR_U32(ctx, 31, 0x206098u);
    ctx->pc = 0x206094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206090u;
            // 0x206094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0870u;
    if (runtime->hasFunction(0x1E0870u)) {
        auto targetFn = runtime->lookupFunction(0x1E0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206098u; }
        if (ctx->pc != 0x206098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0870_0x1e0870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206098u; }
        if (ctx->pc != 0x206098u) { return; }
    }
    ctx->pc = 0x206098u;
    // 0x206098: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x206098u;
    {
        const bool branch_taken_0x206098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20609Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206098u;
            // 0x20609c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206098) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2060A0u;
label_2060a0:
    // 0x2060a0: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x2060a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2060a4: 0xc07821c  jal         func_1E0870
    ctx->pc = 0x2060A4u;
    SET_GPR_U32(ctx, 31, 0x2060ACu);
    ctx->pc = 0x2060A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2060A4u;
            // 0x2060a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0870u;
    if (runtime->hasFunction(0x1E0870u)) {
        auto targetFn = runtime->lookupFunction(0x1E0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060ACu; }
        if (ctx->pc != 0x2060ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0870_0x1e0870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060ACu; }
        if (ctx->pc != 0x2060ACu) { return; }
    }
    ctx->pc = 0x2060ACu;
    // 0x2060ac: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x2060ACu;
    {
        const bool branch_taken_0x2060ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2060ACu;
            // 0x2060b0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060ac) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2060B4u;
label_2060b4:
    // 0x2060b4: 0x12e000d9  beqz        $s7, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2060B4u;
    {
        const bool branch_taken_0x2060b4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2060B4u;
            // 0x2060b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060b4) {
            ctx->pc = 0x20641Cu;
            goto label_20641c;
        }
    }
    ctx->pc = 0x2060BCu;
    // 0x2060bc: 0xc090c58  jal         func_243160
    ctx->pc = 0x2060BCu;
    SET_GPR_U32(ctx, 31, 0x2060C4u);
    ctx->pc = 0x2060C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2060BCu;
            // 0x2060c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243160u;
    if (runtime->hasFunction(0x243160u)) {
        auto targetFn = runtime->lookupFunction(0x243160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060C4u; }
        if (ctx->pc != 0x2060C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243160_0x243170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060C4u; }
        if (ctx->pc != 0x2060C4u) { return; }
    }
    ctx->pc = 0x2060C4u;
    // 0x2060c4: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x2060C4u;
    {
        const bool branch_taken_0x2060c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2060C4u;
            // 0x2060c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060c4) {
            ctx->pc = 0x206420u;
            goto label_206420;
        }
    }
    ctx->pc = 0x2060CCu;
label_2060cc:
    // 0x2060cc: 0x8242009f  lb          $v0, 0x9F($s2)
    ctx->pc = 0x2060ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 159)));
    // 0x2060d0: 0x18400108  blez        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x2060D0u;
    {
        const bool branch_taken_0x2060d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2060D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2060D0u;
            // 0x2060d4: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060d0) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x2060D8u;
    // 0x2060d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2060d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2060dc: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x2060dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x2060e0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2060e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2060e4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2060E4u;
    {
        const bool branch_taken_0x2060e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2060E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2060E4u;
            // 0x2060e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060e4) {
            ctx->pc = 0x206118u;
            goto label_206118;
        }
    }
    ctx->pc = 0x2060ECu;
    // 0x2060ec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2060ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2060f0: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x2060f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x2060f4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2060f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2060f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2060f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2060fc: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x2060fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x206100: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x206100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x206104: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x206104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206108: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x206108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20610c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20610Cu;
    {
        const bool branch_taken_0x20610c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x20610c) {
            ctx->pc = 0x206118u;
            goto label_206118;
        }
    }
    ctx->pc = 0x206114u;
    // 0x206114: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x206114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_206118:
    // 0x206118: 0x108000f7  beqz        $a0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x206118u;
    {
        const bool branch_taken_0x206118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206118u;
            // 0x20611c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206118) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x206120u;
    // 0x206120: 0xc077aa6  jal         func_1DEA98
    ctx->pc = 0x206120u;
    SET_GPR_U32(ctx, 31, 0x206128u);
    ctx->pc = 0x206124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206120u;
            // 0x206124: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA98u;
    if (runtime->hasFunction(0x1DEA98u)) {
        auto targetFn = runtime->lookupFunction(0x1DEA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206128u; }
        if (ctx->pc != 0x206128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEA98_0x1dea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206128u; }
        if (ctx->pc != 0x206128u) { return; }
    }
    ctx->pc = 0x206128u;
    // 0x206128: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x206128u;
    {
        const bool branch_taken_0x206128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206128u;
            // 0x20612c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206128) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x206130u;
label_206130:
    // 0x206130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206134: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x206134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x206138: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x206138u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x20613c: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x20613cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x206140: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x206140u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x206144: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x206144u;
    {
        const bool branch_taken_0x206144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206144u;
            // 0x206148: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206144) {
            ctx->pc = 0x206390u;
            goto label_206390;
        }
    }
    ctx->pc = 0x20614Cu;
label_20614c:
    // 0x20614c: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x20614cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x206150: 0x3c050780  lui         $a1, 0x780
    ctx->pc = 0x206150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1920 << 16));
    // 0x206154: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x206154u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206158: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x206158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x20615c: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x20615cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x206160: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x206160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x206164: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x206164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x206168: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x206168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x20616c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20616cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206170: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x206170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x206174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206178: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x206178u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x20617c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20617cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x206180: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x206180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x206184: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x206184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x206188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20618c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20618cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x206190: 0xe4a0028c  swc1        $f0, 0x28C($a1)
    ctx->pc = 0x206190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 652), bits); }
    // 0x206194: 0xc079f42  jal         func_1E7D08
    ctx->pc = 0x206194u;
    SET_GPR_U32(ctx, 31, 0x20619Cu);
    ctx->pc = 0x206198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206194u;
            // 0x206198: 0xc48c0288  lwc1        $f12, 0x288($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D08u;
    if (runtime->hasFunction(0x1E7D08u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20619Cu; }
        if (ctx->pc != 0x20619Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7D08_0x1e7d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20619Cu; }
        if (ctx->pc != 0x20619Cu) { return; }
    }
    ctx->pc = 0x20619Cu;
    // 0x20619c: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x20619Cu;
    {
        const bool branch_taken_0x20619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20619Cu;
            // 0x2061a0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20619c) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2061A4u;
label_2061a4:
    // 0x2061a4: 0x3c020780  lui         $v0, 0x780
    ctx->pc = 0x2061a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1920 << 16));
    // 0x2061a8: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x2061a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2061ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2061acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2061b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2061b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2061b4: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x2061b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x2061b8: 0xde450078  ld          $a1, 0x78($s2)
    ctx->pc = 0x2061b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2061bc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2061bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2061c0: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x2061c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2061c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2061c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2061c8: 0x2a42014  dsllv       $a0, $a0, $s5
    ctx->pc = 0x2061c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x2061cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2061ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2061d0: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2061d0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2061d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2061d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2061d8: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2061d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2061dc: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2061dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2061e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2061e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2061e4: 0xfe450078  sd          $a1, 0x78($s2)
    ctx->pc = 0x2061e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 5));
    // 0x2061e8: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2061E8u;
    {
        const bool branch_taken_0x2061e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2061E8u;
            // 0x2061ec: 0xe4400358  swc1        $f0, 0x358($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 856), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061e8) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x2061F0u;
label_2061f0:
    // 0x2061f0: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x2061f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x2061f4: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x2061f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2061f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2061f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2061fc: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x2061fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x206200: 0xc64201b4  lwc1        $f2, 0x1B4($s2)
    ctx->pc = 0x206200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x206204: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x206204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x206208: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x206208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x20620c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20620cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x206210: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x206210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x206214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206218: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x206218u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x20621c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x20621cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206220: 0x0  nop
    ctx->pc = 0x206220u;
    // NOP
    // 0x206224: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x206224u;
    {
        const bool branch_taken_0x206224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x206224) {
            ctx->pc = 0x206228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206224u;
            // 0x206228: 0x8e4401ac  lw          $a0, 0x1AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20623Cu;
            goto label_20623c;
        }
    }
    ctx->pc = 0x20622Cu;
    // 0x20622c: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x20622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x206230: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x206230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x206234: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x206234u;
    {
        const bool branch_taken_0x206234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206234u;
            // 0x206238: 0xae4201ac  sw          $v0, 0x1AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206234) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x20623Cu;
label_20623c:
    // 0x20623c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206240: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x206240u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x206244: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x206244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x206248: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x206248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x20624c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x20624cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x206250: 0x2405fbff  addiu       $a1, $zero, -0x401
    ctx->pc = 0x206250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x206254: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x206254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206258: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x206258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x20625c: 0xfe430078  sd          $v1, 0x78($s2)
    ctx->pc = 0x20625cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 3));
    // 0x206260: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x206260u;
    {
        const bool branch_taken_0x206260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206260u;
            // 0x206264: 0xae4401ac  sw          $a0, 0x1AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206260) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x206268u;
label_206268:
    // 0x206268: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x206268u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x20626c: 0x3c040780  lui         $a0, 0x780
    ctx->pc = 0x20626cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1920 << 16));
    // 0x206270: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x206270u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206278: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x206278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x20627c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x20627cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x206280: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x206280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x206284: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x206284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x206288: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x206288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x20628c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20628cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x206290: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x206290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206294: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x206294u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x206298: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x206298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20629c: 0x0  nop
    ctx->pc = 0x20629cu;
    // NOP
    // 0x2062a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2062A0u;
    {
        const bool branch_taken_0x2062a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2062A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2062A0u;
            // 0x2062a4: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062a0) {
            ctx->pc = 0x2062ACu;
            goto label_2062ac;
        }
    }
    ctx->pc = 0x2062A8u;
    // 0x2062a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2062a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2062ac:
    // 0x2062ac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2062ACu;
    {
        const bool branch_taken_0x2062ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2062B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2062ACu;
            // 0x2062b0: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062ac) {
            ctx->pc = 0x2062C0u;
            goto label_2062c0;
        }
    }
    ctx->pc = 0x2062B4u;
    // 0x2062b4: 0x8c8302d8  lw          $v1, 0x2D8($a0)
    ctx->pc = 0x2062b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x2062b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2062B8u;
    {
        const bool branch_taken_0x2062b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2062BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2062B8u;
            // 0x2062bc: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062b8) {
            ctx->pc = 0x2062D0u;
            goto label_2062d0;
        }
    }
    ctx->pc = 0x2062C0u;
label_2062c0:
    // 0x2062c0: 0x8c8302d8  lw          $v1, 0x2D8($a0)
    ctx->pc = 0x2062c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x2062c4: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x2062c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x2062c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2062c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2062cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2062ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2062d0:
    // 0x2062d0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2062D0u;
    {
        const bool branch_taken_0x2062d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2062D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2062D0u;
            // 0x2062d4: 0xac8302d8  sw          $v1, 0x2D8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062d0) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x2062D8u;
label_2062d8:
    // 0x2062d8: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x2062d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2062dc: 0x3c050780  lui         $a1, 0x780
    ctx->pc = 0x2062dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1920 << 16));
    // 0x2062e0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2062e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2062e4: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x2062e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2062e8: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x2062e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2062ec: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2062ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2062f0: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x2062f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x2062f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2062f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2062f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2062f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2062fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2062fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206300: 0x8c8201b0  lw          $v0, 0x1B0($a0)
    ctx->pc = 0x206300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x206304: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x206304u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x206308: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x206308u;
    {
        const bool branch_taken_0x206308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206308u;
            // 0x20630c: 0xe4400064  swc1        $f0, 0x64($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x206308) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x206310u;
label_206310:
    // 0x206310: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x206310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x206314: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x206314u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x206318: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x206318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20631c: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x20631cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x206320: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x206320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206324: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x206324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x206328: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x206328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x20632c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20632cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x206330: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x206330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x206334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206338: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x206338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x20633c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x20633cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x206340: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x206340u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x206344: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206348: 0x0  nop
    ctx->pc = 0x206348u;
    // NOP
    // 0x20634c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20634Cu;
    {
        const bool branch_taken_0x20634c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20634Cu;
            // 0x206350: 0x8c4201b0  lw          $v0, 0x1B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20634c) {
            ctx->pc = 0x20635Cu;
            goto label_20635c;
        }
    }
    ctx->pc = 0x206354u;
    // 0x206354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206358: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x206358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20635c:
    // 0x20635c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x20635Cu;
    {
        const bool branch_taken_0x20635c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20635Cu;
            // 0x206360: 0xe4420068  swc1        $f2, 0x68($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20635c) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x206364u;
label_206364:
    // 0x206364: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x206364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x206368: 0xc07110c  jal         func_1C4430
    ctx->pc = 0x206368u;
    SET_GPR_U32(ctx, 31, 0x206370u);
    ctx->pc = 0x20636Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206368u;
            // 0x20636c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4430u;
    if (runtime->hasFunction(0x1C4430u)) {
        auto targetFn = runtime->lookupFunction(0x1C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206370u; }
        if (ctx->pc != 0x206370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4430_0x1c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206370u; }
        if (ctx->pc != 0x206370u) { return; }
    }
    ctx->pc = 0x206370u;
    // 0x206370: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x206370u;
    {
        const bool branch_taken_0x206370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206370u;
            // 0x206374: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206370) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x206378u;
label_206378:
    // 0x206378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20637c: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x20637cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x206380: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x206380u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x206384: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x206384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
    // 0x206388: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x206388u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x20638c: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x20638cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
label_206390:
    // 0x206390: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x206390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206394: 0xae4401ac  sw          $a0, 0x1AC($s2)
    ctx->pc = 0x206394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 4));
    // 0x206398: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x206398u;
    {
        const bool branch_taken_0x206398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206398u;
            // 0x20639c: 0xfe430078  sd          $v1, 0x78($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206398) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x2063A0u;
label_2063a0:
    // 0x2063a0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2063a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2063a4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2063a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2063a8: 0x8ca4cd58  lw          $a0, -0x32A8($a1)
    ctx->pc = 0x2063a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954328)));
    // 0x2063ac: 0x84432c84  lh          $v1, 0x2C84($v0)
    ctx->pc = 0x2063acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 11396)));
    // 0x2063b0: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2063b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2063b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2063b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2063b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2063b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2063bc: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2063BCu;
    {
        const bool branch_taken_0x2063bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2063C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2063BCu;
            // 0x2063c0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063bc) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x2063C4u;
    // 0x2063c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2063c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063c8: 0x8c44cd64  lw          $a0, -0x329C($v0)
    ctx->pc = 0x2063c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954340)));
    // 0x2063cc: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x2063CCu;
    SET_GPR_U32(ctx, 31, 0x2063D4u);
    ctx->pc = 0x2063D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2063CCu;
            // 0x2063d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2063D4u; }
        if (ctx->pc != 0x2063D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2063D4u; }
        if (ctx->pc != 0x2063D4u) { return; }
    }
    ctx->pc = 0x2063D4u;
    // 0x2063d4: 0xc07507e  jal         func_1D41F8
    ctx->pc = 0x2063D4u;
    SET_GPR_U32(ctx, 31, 0x2063DCu);
    ctx->pc = 0x2063D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2063D4u;
            // 0x2063d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F8u;
    if (runtime->hasFunction(0x1D41F8u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2063DCu; }
        if (ctx->pc != 0x2063DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F8_0x1d41f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2063DCu; }
        if (ctx->pc != 0x2063DCu) { return; }
    }
    ctx->pc = 0x2063DCu;
    // 0x2063dc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2063DCu;
    {
        const bool branch_taken_0x2063dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2063E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2063DCu;
            // 0x2063e0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063dc) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2063E4u;
label_2063e4:
    // 0x2063e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2063e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2063e8: 0xc081a04  jal         func_206810
    ctx->pc = 0x2063E8u;
    SET_GPR_U32(ctx, 31, 0x2063F0u);
    ctx->pc = 0x2063ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2063E8u;
            // 0x2063ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206810u;
    if (runtime->hasFunction(0x206810u)) {
        auto targetFn = runtime->lookupFunction(0x206810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2063F0u; }
        if (ctx->pc != 0x2063F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00206810_0x206810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2063F0u; }
        if (ctx->pc != 0x2063F0u) { return; }
    }
    ctx->pc = 0x2063F0u;
    // 0x2063f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2063F0u;
    {
        const bool branch_taken_0x2063f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2063F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2063F0u;
            // 0x2063f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063f0) {
            ctx->pc = 0x206420u;
            goto label_206420;
        }
    }
    ctx->pc = 0x2063F8u;
    // 0x2063f8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2063f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2063fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2063fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206400: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x206400u;
    SET_GPR_U32(ctx, 31, 0x206408u);
    ctx->pc = 0x206404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206400u;
            // 0x206404: 0x24847a50  addiu       $a0, $a0, 0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206408u; }
        if (ctx->pc != 0x206408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206408u; }
        if (ctx->pc != 0x206408u) { return; }
    }
    ctx->pc = 0x206408u;
    // 0x206408: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20640c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20640cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206410: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x206410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206414: 0xc081970  jal         func_2065C0
    ctx->pc = 0x206414u;
    SET_GPR_U32(ctx, 31, 0x20641Cu);
    ctx->pc = 0x206418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206414u;
            // 0x206418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2065C0u;
    if (runtime->hasFunction(0x2065C0u)) {
        auto targetFn = runtime->lookupFunction(0x2065C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20641Cu; }
        if (ctx->pc != 0x20641Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002065C0_0x2065c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20641Cu; }
        if (ctx->pc != 0x20641Cu) { return; }
    }
    ctx->pc = 0x20641Cu;
label_20641c:
    // 0x20641c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206420:
    // 0x206420: 0xde430078  ld          $v1, 0x78($s2)
    ctx->pc = 0x206420u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x206424: 0x2a21014  dsllv       $v0, $v0, $s5
    ctx->pc = 0x206424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
label_206428:
    // 0x206428: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x206428u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x20642c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206430: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x206430u;
    {
        const bool branch_taken_0x206430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206430u;
            // 0x206434: 0xfe430078  sd          $v1, 0x78($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206430) {
            ctx->pc = 0x2064F4u;
            goto label_2064f4;
        }
    }
    ctx->pc = 0x206438u;
label_206438:
    // 0x206438: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x206438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20643c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20643Cu;
    {
        const bool branch_taken_0x20643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20643Cu;
            // 0x206440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20643c) {
            ctx->pc = 0x206464u;
            goto label_206464;
        }
    }
    ctx->pc = 0x206444u;
label_206444:
    // 0x206444: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x206444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x206448: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x206448u;
    {
        const bool branch_taken_0x206448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206448u;
            // 0x20644c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206448) {
            ctx->pc = 0x206464u;
            goto label_206464;
        }
    }
    ctx->pc = 0x206450u;
label_206450:
    // 0x206450: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x206450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x206454: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x206454u;
    {
        const bool branch_taken_0x206454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206454u;
            // 0x206458: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206454) {
            ctx->pc = 0x206464u;
            goto label_206464;
        }
    }
    ctx->pc = 0x20645Cu;
label_20645c:
    // 0x20645c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20645cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x206460: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x206460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_206464:
    // 0x206464: 0xc08847e  jal         func_2211F8
    ctx->pc = 0x206464u;
    SET_GPR_U32(ctx, 31, 0x20646Cu);
    ctx->pc = 0x206468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206464u;
            // 0x206468: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2211F8u;
    if (runtime->hasFunction(0x2211F8u)) {
        auto targetFn = runtime->lookupFunction(0x2211F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20646Cu; }
        if (ctx->pc != 0x20646Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002211F8_0x2211f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20646Cu; }
        if (ctx->pc != 0x20646Cu) { return; }
    }
    ctx->pc = 0x20646Cu;
    // 0x20646c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x20646Cu;
    {
        const bool branch_taken_0x20646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20646Cu;
            // 0x206470: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20646c) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x206474u;
label_206474:
    // 0x206474: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x206474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x206478: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x206478u;
    {
        const bool branch_taken_0x206478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20647Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206478u;
            // 0x20647c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206478) {
            ctx->pc = 0x206494u;
            goto label_206494;
        }
    }
    ctx->pc = 0x206480u;
label_206480:
    // 0x206480: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x206480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x206484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x206484u;
    {
        const bool branch_taken_0x206484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206484u;
            // 0x206488: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206484) {
            ctx->pc = 0x206494u;
            goto label_206494;
        }
    }
    ctx->pc = 0x20648Cu;
label_20648c:
    // 0x20648c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x206490: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x206490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_206494:
    // 0x206494: 0xc088490  jal         func_221240
    ctx->pc = 0x206494u;
    SET_GPR_U32(ctx, 31, 0x20649Cu);
    ctx->pc = 0x206498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206494u;
            // 0x206498: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221240u;
    if (runtime->hasFunction(0x221240u)) {
        auto targetFn = runtime->lookupFunction(0x221240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20649Cu; }
        if (ctx->pc != 0x20649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221240_0x221240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20649Cu; }
        if (ctx->pc != 0x20649Cu) { return; }
    }
    ctx->pc = 0x20649Cu;
    // 0x20649c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x20649Cu;
    {
        const bool branch_taken_0x20649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2064A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20649Cu;
            // 0x2064a0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20649c) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2064A4u;
label_2064a4:
    // 0x2064a4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2064a4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2064a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2064a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2064ac: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2064acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2064b0: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x2064b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2064b4: 0x0  nop
    ctx->pc = 0x2064b4u;
    // NOP
    // 0x2064b8: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x2064B8u;
    {
        const bool branch_taken_0x2064b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2064b8) {
            ctx->pc = 0x2064BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2064B8u;
            // 0x2064bc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2064ECu;
            goto label_2064ec;
        }
    }
    ctx->pc = 0x2064C0u;
label_2064c0:
    // 0x2064c0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x2064c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2064c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2064c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2064c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2064cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2064ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2064d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2064d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2064d4: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x2064d4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2064d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2064d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064dc: 0xc080eba  jal         func_203AE8
    ctx->pc = 0x2064DCu;
    SET_GPR_U32(ctx, 31, 0x2064E4u);
    ctx->pc = 0x2064E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2064DCu;
            // 0x2064e0: 0x240a0007  addiu       $t2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203AE8u;
    if (runtime->hasFunction(0x203AE8u)) {
        auto targetFn = runtime->lookupFunction(0x203AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064E4u; }
        if (ctx->pc != 0x2064E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203AE8_0x203ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064E4u; }
        if (ctx->pc != 0x2064E4u) { return; }
    }
    ctx->pc = 0x2064E4u;
    // 0x2064e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2064E4u;
    {
        const bool branch_taken_0x2064e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2064E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2064E4u;
            // 0x2064e8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064e4) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2064ECu;
label_2064ec:
    // 0x2064ec: 0xc0782e8  jal         func_1E0BA0
    ctx->pc = 0x2064ECu;
    SET_GPR_U32(ctx, 31, 0x2064F4u);
    ctx->pc = 0x2064F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2064ECu;
            // 0x2064f0: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0BA0u;
    if (runtime->hasFunction(0x1E0BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064F4u; }
        if (ctx->pc != 0x2064F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0BA0_0x1e0ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064F4u; }
        if (ctx->pc != 0x2064F4u) { return; }
    }
    ctx->pc = 0x2064F4u;
label_2064f4:
    // 0x2064f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2064f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2064f8:
    // 0x2064f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2064f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2064fc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2064fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x206500: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x206500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206504: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x206504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x206508: 0x1460fc55  bnez        $v1, . + 4 + (-0x3AB << 2)
    ctx->pc = 0x206508u;
    {
        const bool branch_taken_0x206508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20650Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206508u;
            // 0x20650c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206508) {
            ctx->pc = 0x205660u;
            runtime->cooperativeGuestYield();
            goto label_205660;
        }
    }
    ctx->pc = 0x206510u;
label_206510:
    // 0x206510: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x206510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x206514: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x206514u;
    {
        const bool branch_taken_0x206514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x206518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206514u;
            // 0x206518: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206514) {
            ctx->pc = 0x206540u;
            goto label_206540;
        }
    }
    ctx->pc = 0x20651Cu;
    // 0x20651c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20651Cu;
    {
        const bool branch_taken_0x20651c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20651Cu;
            // 0x206520: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20651c) {
            ctx->pc = 0x206544u;
            goto label_206544;
        }
    }
    ctx->pc = 0x206524u;
    // 0x206524: 0xc04c9da  jal         func_132768
    ctx->pc = 0x206524u;
    SET_GPR_U32(ctx, 31, 0x20652Cu);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20652Cu; }
        if (ctx->pc != 0x20652Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20652Cu; }
        if (ctx->pc != 0x20652Cu) { return; }
    }
    ctx->pc = 0x20652Cu;
    // 0x20652c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x20652cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x206530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x206530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206534: 0xc07ce6a  jal         func_1F39A8
    ctx->pc = 0x206534u;
    SET_GPR_U32(ctx, 31, 0x20653Cu);
    ctx->pc = 0x206538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206534u;
            // 0x206538: 0x24843330  addiu       $a0, $a0, 0x3330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F39A8u;
    if (runtime->hasFunction(0x1F39A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F39A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20653Cu; }
        if (ctx->pc != 0x20653Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F39A8_0x1f39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20653Cu; }
        if (ctx->pc != 0x20653Cu) { return; }
    }
    ctx->pc = 0x20653Cu;
    // 0x20653c: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x20653cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_206540:
    // 0x206540: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x206540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_206544:
    // 0x206544: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x206544u;
    {
        const bool branch_taken_0x206544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206544u;
            // 0x206548: 0x8fa40104  lw          $a0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206544) {
            ctx->pc = 0x206560u;
            goto label_206560;
        }
    }
    ctx->pc = 0x20654Cu;
    // 0x20654c: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20654Cu;
    {
        const bool branch_taken_0x20654c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20654c) {
            ctx->pc = 0x206550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20654Cu;
            // 0x206550: 0x8e4201ac  lw          $v0, 0x1AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206564u;
            goto label_206564;
        }
    }
    ctx->pc = 0x206554u;
    // 0x206554: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x206558: 0xc07b922  jal         func_1EE488
    ctx->pc = 0x206558u;
    SET_GPR_U32(ctx, 31, 0x206560u);
    ctx->pc = 0x20655Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206558u;
            // 0x20655c: 0xc44c6324  lwc1        $f12, 0x6324($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE488u;
    if (runtime->hasFunction(0x1EE488u)) {
        auto targetFn = runtime->lookupFunction(0x1EE488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206560u; }
        if (ctx->pc != 0x206560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ee488_0x1ee4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206560u; }
        if (ctx->pc != 0x206560u) { return; }
    }
    ctx->pc = 0x206560u;
label_206560:
    // 0x206560: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x206560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
label_206564:
    // 0x206564: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x206564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x206568: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206568u;
    {
        const bool branch_taken_0x206568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20656Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206568u;
            // 0x20656c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206568) {
            ctx->pc = 0x206584u;
            goto label_206584;
        }
    }
    ctx->pc = 0x206570u;
    // 0x206570: 0xc64001b4  lwc1        $f0, 0x1B4($s2)
    ctx->pc = 0x206570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206574: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x206574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206578: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20657c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20657Cu;
    {
        const bool branch_taken_0x20657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20657Cu;
            // 0x206580: 0xe64001b4  swc1        $f0, 0x1B4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 436), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20657c) {
            ctx->pc = 0x206588u;
            goto label_206588;
        }
    }
    ctx->pc = 0x206584u;
label_206584:
    // 0x206584: 0xae4001b4  sw          $zero, 0x1B4($s2)
    ctx->pc = 0x206584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 0));
label_206588:
    // 0x206588: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x206588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x20658c: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x20658cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x206590: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x206590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x206594: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x206594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x206598: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x206598u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x20659c: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x20659cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2065a0: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x2065a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2065a4: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x2065a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2065a8: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x2065a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2065ac: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2065acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2065b0: 0xc7b401e0  lwc1        $f20, 0x1E0($sp)
    ctx->pc = 0x2065b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2065b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2065B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2065B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2065B4u;
            // 0x2065b8: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2054D8u: goto label_2054d8;
            case 0x205508u: goto label_205508;
            case 0x205568u: goto label_205568;
            case 0x2055A0u: goto label_2055a0;
            case 0x2055ACu: goto label_2055ac;
            case 0x2055F8u: goto label_2055f8;
            case 0x205660u: goto label_205660;
            case 0x205704u: goto label_205704;
            case 0x20570Cu: goto label_20570c;
            case 0x20572Cu: goto label_20572c;
            case 0x205734u: goto label_205734;
            case 0x205798u: goto label_205798;
            case 0x20579Cu: goto label_20579c;
            case 0x2057B0u: goto label_2057b0;
            case 0x2057B4u: goto label_2057b4;
            case 0x2057D0u: goto label_2057d0;
            case 0x2057ECu: goto label_2057ec;
            case 0x2057F0u: goto label_2057f0;
            case 0x2057FCu: goto label_2057fc;
            case 0x205800u: goto label_205800;
            case 0x205894u: goto label_205894;
            case 0x205928u: goto label_205928;
            case 0x205934u: goto label_205934;
            case 0x205990u: goto label_205990;
            case 0x20599Cu: goto label_20599c;
            case 0x2059CCu: goto label_2059cc;
            case 0x205A08u: goto label_205a08;
            case 0x205A0Cu: goto label_205a0c;
            case 0x205AB8u: goto label_205ab8;
            case 0x205AE8u: goto label_205ae8;
            case 0x205B18u: goto label_205b18;
            case 0x205B1Cu: goto label_205b1c;
            case 0x205B50u: goto label_205b50;
            case 0x205B7Cu: goto label_205b7c;
            case 0x205B88u: goto label_205b88;
            case 0x205BF0u: goto label_205bf0;
            case 0x205C18u: goto label_205c18;
            case 0x205CB0u: goto label_205cb0;
            case 0x205CC4u: goto label_205cc4;
            case 0x205D00u: goto label_205d00;
            case 0x205D1Cu: goto label_205d1c;
            case 0x205D34u: goto label_205d34;
            case 0x205D90u: goto label_205d90;
            case 0x205DACu: goto label_205dac;
            case 0x205E04u: goto label_205e04;
            case 0x205E50u: goto label_205e50;
            case 0x205EA8u: goto label_205ea8;
            case 0x205EC4u: goto label_205ec4;
            case 0x205ED0u: goto label_205ed0;
            case 0x205F24u: goto label_205f24;
            case 0x205F40u: goto label_205f40;
            case 0x205F64u: goto label_205f64;
            case 0x205F80u: goto label_205f80;
            case 0x205F9Cu: goto label_205f9c;
            case 0x205FA8u: goto label_205fa8;
            case 0x205FBCu: goto label_205fbc;
            case 0x205FF8u: goto label_205ff8;
            case 0x206000u: goto label_206000;
            case 0x20602Cu: goto label_20602c;
            case 0x206060u: goto label_206060;
            case 0x206074u: goto label_206074;
            case 0x20608Cu: goto label_20608c;
            case 0x2060A0u: goto label_2060a0;
            case 0x2060B4u: goto label_2060b4;
            case 0x2060CCu: goto label_2060cc;
            case 0x206118u: goto label_206118;
            case 0x206130u: goto label_206130;
            case 0x20614Cu: goto label_20614c;
            case 0x2061A4u: goto label_2061a4;
            case 0x2061F0u: goto label_2061f0;
            case 0x20623Cu: goto label_20623c;
            case 0x206268u: goto label_206268;
            case 0x2062ACu: goto label_2062ac;
            case 0x2062C0u: goto label_2062c0;
            case 0x2062D0u: goto label_2062d0;
            case 0x2062D8u: goto label_2062d8;
            case 0x206310u: goto label_206310;
            case 0x20635Cu: goto label_20635c;
            case 0x206364u: goto label_206364;
            case 0x206378u: goto label_206378;
            case 0x206390u: goto label_206390;
            case 0x2063A0u: goto label_2063a0;
            case 0x2063E4u: goto label_2063e4;
            case 0x20641Cu: goto label_20641c;
            case 0x206420u: goto label_206420;
            case 0x206428u: goto label_206428;
            case 0x206438u: goto label_206438;
            case 0x206444u: goto label_206444;
            case 0x206450u: goto label_206450;
            case 0x20645Cu: goto label_20645c;
            case 0x206464u: goto label_206464;
            case 0x206474u: goto label_206474;
            case 0x206480u: goto label_206480;
            case 0x20648Cu: goto label_20648c;
            case 0x206494u: goto label_206494;
            case 0x2064A4u: goto label_2064a4;
            case 0x2064C0u: goto label_2064c0;
            case 0x2064ECu: goto label_2064ec;
            case 0x2064F4u: goto label_2064f4;
            case 0x2064F8u: goto label_2064f8;
            case 0x206510u: goto label_206510;
            case 0x206540u: goto label_206540;
            case 0x206544u: goto label_206544;
            case 0x206560u: goto label_206560;
            case 0x206564u: goto label_206564;
            case 0x206584u: goto label_206584;
            case 0x206588u: goto label_206588;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2065BCu;
    // 0x2065bc: 0x0  nop
    ctx->pc = 0x2065bcu;
    // NOP
}
