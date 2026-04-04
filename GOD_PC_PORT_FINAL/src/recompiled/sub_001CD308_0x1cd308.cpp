#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD308
// Address: 0x1cd308 - 0x1cd680
void sub_001CD308_0x1cd308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD308_0x1cd308");
#endif

    ctx->pc = 0x1cd308u;

    // 0x1cd308: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1cd308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1cd30c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1cd30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1cd310: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cd310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cd314: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cd314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd318: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1cd318u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1cd31c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cd31cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd320: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1cd320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1cd324: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1cd324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1cd328: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1cd328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1cd32c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1cd32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1cd330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd334: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1cd334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1cd338: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1cd338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x1cd33c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1cd33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1cd340: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1CD340u;
    {
        const bool branch_taken_0x1cd340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD340u;
            // 0x1cd344: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd340) {
            ctx->pc = 0x1CD654u;
            goto label_1cd654;
        }
    }
    ctx->pc = 0x1CD348u;
    // 0x1cd348: 0x84630044  lh          $v1, 0x44($v1)
    ctx->pc = 0x1cd348u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1cd34c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD34Cu;
    {
        const bool branch_taken_0x1cd34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD34Cu;
            // 0x1cd350: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd34c) {
            ctx->pc = 0x1CD368u;
            goto label_1cd368;
        }
    }
    ctx->pc = 0x1CD354u;
    // 0x1cd354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cd354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd358: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD358u;
    {
        const bool branch_taken_0x1cd358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD358u;
            // 0x1cd35c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd358) {
            ctx->pc = 0x1CD368u;
            goto label_1cd368;
        }
    }
    ctx->pc = 0x1CD360u;
    // 0x1cd360: 0x146200bd  bne         $v1, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x1CD360u;
    {
        const bool branch_taken_0x1cd360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD360u;
            // 0x1cd364: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd360) {
            ctx->pc = 0x1CD658u;
            goto label_1cd658;
        }
    }
    ctx->pc = 0x1CD368u;
label_1cd368:
    // 0x1cd368: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cd368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cd36c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cd36cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cd370: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cd370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cd374: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD37Cu);
        ctx->pc = 0x1CD378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD374u;
            // 0x1cd378: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD37Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD37Cu; }
            if (ctx->pc != 0x1CD37Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CD37Cu;
    // 0x1cd37c: 0x90420016  lbu         $v0, 0x16($v0)
    ctx->pc = 0x1cd37cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1cd380: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cd380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cd384: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x1CD384u;
    {
        const bool branch_taken_0x1cd384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd384) {
            ctx->pc = 0x1CD388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD384u;
            // 0x1cd388: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD4E8u;
            goto label_1cd4e8;
        }
    }
    ctx->pc = 0x1CD38Cu;
    // 0x1cd38c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1cd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1cd390: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cd390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cd394: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cd394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cd398: 0x94420096  lhu         $v0, 0x96($v0)
    ctx->pc = 0x1cd398u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x1cd39c: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1cd39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1cd3a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cd3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cd3a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd3a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd3ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cd3acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cd3b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cd3b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1cd3b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd3b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd3b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1cd3b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd3bc: 0x0  nop
    ctx->pc = 0x1cd3bcu;
    // NOP
    // 0x1cd3c0: 0x450000a5  bc1f        . + 4 + (0xA5 << 2)
    ctx->pc = 0x1CD3C0u;
    {
        const bool branch_taken_0x1cd3c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3C0u;
            // 0x1cd3c4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3c0) {
            ctx->pc = 0x1CD658u;
            goto label_1cd658;
        }
    }
    ctx->pc = 0x1CD3C8u;
    // 0x1cd3c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cd3cc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cd3ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cd3d0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cd3d4: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD3DCu);
        ctx->pc = 0x1CD3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3D4u;
            // 0x1cd3d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD3DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3DCu; }
            if (ctx->pc != 0x1CD3DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1CD3DCu;
    // 0x1cd3dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3e0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1cd3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1cd3e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD3E4u;
    {
        const bool branch_taken_0x1cd3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3E4u;
            // 0x1cd3e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3e4) {
            ctx->pc = 0x1CD400u;
            goto label_1cd400;
        }
    }
    ctx->pc = 0x1CD3ECu;
    // 0x1cd3ec: 0xc090d56  jal         func_243558
    ctx->pc = 0x1CD3ECu;
    SET_GPR_U32(ctx, 31, 0x1CD3F4u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3F4u; }
        if (ctx->pc != 0x1CD3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3F4u; }
        if (ctx->pc != 0x1CD3F4u) { return; }
    }
    ctx->pc = 0x1CD3F4u;
    // 0x1cd3f4: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1cd3f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1cd3f8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1cd3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1cd3fc: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1cd3fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cd400:
    // 0x1cd400: 0x14600095  bnez        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x1CD400u;
    {
        const bool branch_taken_0x1cd400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD400u;
            // 0x1cd404: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd400) {
            ctx->pc = 0x1CD658u;
            goto label_1cd658;
        }
    }
    ctx->pc = 0x1CD408u;
    // 0x1cd408: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1cd408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1cd40c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cd40cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cd410: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cd410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cd414: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD41Cu);
        ctx->pc = 0x1CD418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD414u;
            // 0x1cd418: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD41Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD41Cu; }
            if (ctx->pc != 0x1CD41Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CD41Cu;
    // 0x1cd41c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd420: 0x5200008d  beql        $s0, $zero, . + 4 + (0x8D << 2)
    ctx->pc = 0x1CD420u;
    {
        const bool branch_taken_0x1cd420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd420) {
            ctx->pc = 0x1CD424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD420u;
            // 0x1cd424: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD658u;
            goto label_1cd658;
        }
    }
    ctx->pc = 0x1CD428u;
    // 0x1cd428: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1cd428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1cd42c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD42Cu;
    {
        const bool branch_taken_0x1cd42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD42Cu;
            // 0x1cd430: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd42c) {
            ctx->pc = 0x1CD450u;
            goto label_1cd450;
        }
    }
    ctx->pc = 0x1CD434u;
    // 0x1cd434: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1cd434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1cd438: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x1cd438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1cd43c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD43Cu;
    {
        const bool branch_taken_0x1cd43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD43Cu;
            // 0x1cd440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd43c) {
            ctx->pc = 0x1CD454u;
            goto label_1cd454;
        }
    }
    ctx->pc = 0x1CD444u;
    // 0x1cd444: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1cd444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1cd448: 0xc081522  jal         func_205488
    ctx->pc = 0x1CD448u;
    SET_GPR_U32(ctx, 31, 0x1CD450u);
    ctx->pc = 0x1CD44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD448u;
            // 0x1cd44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD450u; }
        if (ctx->pc != 0x1CD450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD450u; }
        if (ctx->pc != 0x1CD450u) { return; }
    }
    ctx->pc = 0x1CD450u;
label_1cd450:
    // 0x1cd450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd454:
    // 0x1cd454: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cd454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd458: 0xc090d5c  jal         func_243570
    ctx->pc = 0x1CD458u;
    SET_GPR_U32(ctx, 31, 0x1CD460u);
    ctx->pc = 0x1CD45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD458u;
            // 0x1cd45c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD460u; }
        if (ctx->pc != 0x1CD460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD460u; }
        if (ctx->pc != 0x1CD460u) { return; }
    }
    ctx->pc = 0x1CD460u;
    // 0x1cd460: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD460u;
    {
        const bool branch_taken_0x1cd460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd460) {
            ctx->pc = 0x1CD464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD460u;
            // 0x1cd464: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD478u;
            goto label_1cd478;
        }
    }
    ctx->pc = 0x1CD468u;
    // 0x1cd468: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1CD468u;
    SET_GPR_U32(ctx, 31, 0x1CD470u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD470u; }
        if (ctx->pc != 0x1CD470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD470u; }
        if (ctx->pc != 0x1CD470u) { return; }
    }
    ctx->pc = 0x1CD470u;
    // 0x1cd470: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD470u;
    {
        const bool branch_taken_0x1cd470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd470) {
            ctx->pc = 0x1CD474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD470u;
            // 0x1cd474: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD478u;
            goto label_1cd478;
        }
    }
    ctx->pc = 0x1CD478u;
label_1cd478:
    // 0x1cd478: 0x16000077  bnez        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1CD478u;
    {
        const bool branch_taken_0x1cd478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD478u;
            // 0x1cd47c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd478) {
            ctx->pc = 0x1CD658u;
            goto label_1cd658;
        }
    }
    ctx->pc = 0x1CD480u;
    // 0x1cd480: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1cd480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1cd484: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cd484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cd488: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cd488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cd48c: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD494u);
        ctx->pc = 0x1CD490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD48Cu;
            // 0x1cd490: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD494u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD494u; }
            if (ctx->pc != 0x1CD494u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD494u;
    // 0x1cd494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd498: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cd498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cd49c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cd49cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cd4a0: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cd4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cd4a4: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD4ACu);
        ctx->pc = 0x1CD4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4A4u;
            // 0x1cd4a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD4ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4ACu; }
            if (ctx->pc != 0x1CD4ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1CD4ACu;
    // 0x1cd4ac: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1cd4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1cd4b0: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CD4B0u;
    SET_GPR_U32(ctx, 31, 0x1CD4B8u);
    ctx->pc = 0x1CD4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4B0u;
            // 0x1cd4b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4B8u; }
        if (ctx->pc != 0x1CD4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4B8u; }
        if (ctx->pc != 0x1CD4B8u) { return; }
    }
    ctx->pc = 0x1CD4B8u;
    // 0x1cd4b8: 0x94510244  lhu         $s1, 0x244($v0)
    ctx->pc = 0x1cd4b8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x1cd4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd4c0: 0xc07fd5e  jal         func_1FF578
    ctx->pc = 0x1CD4C0u;
    SET_GPR_U32(ctx, 31, 0x1CD4C8u);
    ctx->pc = 0x1CD4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4C0u;
            // 0x1cd4c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF578u;
    if (runtime->hasFunction(0x1FF578u)) {
        auto targetFn = runtime->lookupFunction(0x1FF578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4C8u; }
        if (ctx->pc != 0x1CD4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF578_0x1ff578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4C8u; }
        if (ctx->pc != 0x1CD4C8u) { return; }
    }
    ctx->pc = 0x1CD4C8u;
    // 0x1cd4c8: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x1CD4C8u;
    {
        const bool branch_taken_0x1cd4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd4c8) {
            ctx->pc = 0x1CD4CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4C8u;
            // 0x1cd4cc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD658u;
            goto label_1cd658;
        }
    }
    ctx->pc = 0x1CD4D0u;
    // 0x1cd4d0: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x1cd4d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x1cd4d4: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x1cd4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x1cd4d8: 0xa2420016  sb          $v0, 0x16($s2)
    ctx->pc = 0x1cd4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd4dc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1cd4dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cd4e0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1CD4E0u;
    {
        const bool branch_taken_0x1cd4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4E0u;
            // 0x1cd4e4: 0x2221021  addu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4e0) {
            ctx->pc = 0x1CD650u;
            goto label_1cd650;
        }
    }
    ctx->pc = 0x1CD4E8u;
label_1cd4e8:
    // 0x1cd4e8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1cd4e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd4ec: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cd4ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cd4f0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cd4f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD4FCu);
        ctx->pc = 0x1CD4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4F4u;
            // 0x1cd4f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD4FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4FCu; }
            if (ctx->pc != 0x1CD4FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1CD4FCu;
    // 0x1cd4fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd500: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cd500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cd504: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cd504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cd508: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1cd508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1cd50c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1cd50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1cd510: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd514: 0x94420096  lhu         $v0, 0x96($v0)
    ctx->pc = 0x1cd514u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x1cd518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd51c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cd51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cd520: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cd520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1cd524: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd528: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1cd528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd52c: 0x0  nop
    ctx->pc = 0x1cd52cu;
    // NOP
    // 0x1cd530: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD530u;
    {
        const bool branch_taken_0x1cd530 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd530) {
            ctx->pc = 0x1CD534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD530u;
            // 0x1cd534: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD538u;
            goto label_1cd538;
        }
    }
    ctx->pc = 0x1CD538u;
label_1cd538:
    // 0x1cd538: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cd538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cd53c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cd53cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd540: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cd540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cd544: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cd544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cd548: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD550u);
        ctx->pc = 0x1CD54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD548u;
            // 0x1cd54c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD550u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD550u; }
            if (ctx->pc != 0x1CD550u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD550u;
    // 0x1cd550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd554: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1cd554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1cd558: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD558u;
    {
        const bool branch_taken_0x1cd558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd558) {
            ctx->pc = 0x1CD574u;
            goto label_1cd574;
        }
    }
    ctx->pc = 0x1CD560u;
    // 0x1cd560: 0xc090d56  jal         func_243558
    ctx->pc = 0x1CD560u;
    SET_GPR_U32(ctx, 31, 0x1CD568u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD568u; }
        if (ctx->pc != 0x1CD568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD568u; }
        if (ctx->pc != 0x1CD568u) { return; }
    }
    ctx->pc = 0x1CD568u;
    // 0x1cd568: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1cd568u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1cd56c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1cd56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1cd570: 0x2c540001  sltiu       $s4, $v0, 0x1
    ctx->pc = 0x1cd570u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cd574:
    // 0x1cd574: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CD574u;
    {
        const bool branch_taken_0x1cd574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD574u;
            // 0x1cd578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd574) {
            ctx->pc = 0x1CD5D4u;
            goto label_1cd5d4;
        }
    }
    ctx->pc = 0x1CD57Cu;
    // 0x1cd57c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1cd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1cd580: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD580u;
    {
        const bool branch_taken_0x1cd580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD580u;
            // 0x1cd584: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd580) {
            ctx->pc = 0x1CD5A4u;
            goto label_1cd5a4;
        }
    }
    ctx->pc = 0x1CD588u;
    // 0x1cd588: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1cd588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1cd58c: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x1cd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1cd590: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD590u;
    {
        const bool branch_taken_0x1cd590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD590u;
            // 0x1cd594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd590) {
            ctx->pc = 0x1CD5A8u;
            goto label_1cd5a8;
        }
    }
    ctx->pc = 0x1CD598u;
    // 0x1cd598: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1cd598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1cd59c: 0xc081522  jal         func_205488
    ctx->pc = 0x1CD59Cu;
    SET_GPR_U32(ctx, 31, 0x1CD5A4u);
    ctx->pc = 0x1CD5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD59Cu;
            // 0x1cd5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5A4u; }
        if (ctx->pc != 0x1CD5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5A4u; }
        if (ctx->pc != 0x1CD5A4u) { return; }
    }
    ctx->pc = 0x1CD5A4u;
label_1cd5a4:
    // 0x1cd5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5a8:
    // 0x1cd5a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cd5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd5ac: 0xc090d5c  jal         func_243570
    ctx->pc = 0x1CD5ACu;
    SET_GPR_U32(ctx, 31, 0x1CD5B4u);
    ctx->pc = 0x1CD5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5ACu;
            // 0x1cd5b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5B4u; }
        if (ctx->pc != 0x1CD5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5B4u; }
        if (ctx->pc != 0x1CD5B4u) { return; }
    }
    ctx->pc = 0x1CD5B4u;
    // 0x1cd5b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD5B4u;
    {
        const bool branch_taken_0x1cd5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5b4) {
            ctx->pc = 0x1CD5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5B4u;
            // 0x1cd5b8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD5D0u;
            goto label_1cd5d0;
        }
    }
    ctx->pc = 0x1CD5BCu;
    // 0x1cd5bc: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1CD5BCu;
    SET_GPR_U32(ctx, 31, 0x1CD5C4u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5C4u; }
        if (ctx->pc != 0x1CD5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5C4u; }
        if (ctx->pc != 0x1CD5C4u) { return; }
    }
    ctx->pc = 0x1CD5C4u;
    // 0x1cd5c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD5C4u;
    {
        const bool branch_taken_0x1cd5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5C4u;
            // 0x1cd5c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5c4) {
            ctx->pc = 0x1CD5D4u;
            goto label_1cd5d4;
        }
    }
    ctx->pc = 0x1CD5CCu;
    // 0x1cd5cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1cd5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd5d0:
    // 0x1cd5d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cd5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5d4:
    // 0x1cd5d4: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD5D4u;
    {
        const bool branch_taken_0x1cd5d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5d4) {
            ctx->pc = 0x1CD5D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5D4u;
            // 0x1cd5d8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD5F0u;
            goto label_1cd5f0;
        }
    }
    ctx->pc = 0x1CD5DCu;
    // 0x1cd5dc: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD5DCu;
    {
        const bool branch_taken_0x1cd5dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5dc) {
            ctx->pc = 0x1CD5E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5DCu;
            // 0x1cd5e0: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD5F0u;
            goto label_1cd5f0;
        }
    }
    ctx->pc = 0x1CD5E4u;
    // 0x1cd5e4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CD5E4u;
    {
        const bool branch_taken_0x1cd5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5E4u;
            // 0x1cd5e8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5e4) {
            ctx->pc = 0x1CD658u;
            goto label_1cd658;
        }
    }
    ctx->pc = 0x1CD5ECu;
    // 0x1cd5ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1cd5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1cd5f0:
    // 0x1cd5f0: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cd5f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cd5f4: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cd5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cd5f8: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD600u);
        ctx->pc = 0x1CD5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5F8u;
            // 0x1cd5fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD600u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD600u; }
            if (ctx->pc != 0x1CD600u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD600u;
    // 0x1cd600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd604: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cd604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cd608: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cd608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cd60c: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cd610: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD618u);
        ctx->pc = 0x1CD614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD610u;
            // 0x1cd614: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD618u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD618u; }
            if (ctx->pc != 0x1CD618u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD618u;
    // 0x1cd618: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1cd618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1cd61c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1cd61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cd620: 0xa2630088  sb          $v1, 0x88($s3)
    ctx->pc = 0x1cd620u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 136), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd624: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x1cd624u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1cd628: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1cd628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1cd62c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CD62Cu;
    SET_GPR_U32(ctx, 31, 0x1CD634u);
    ctx->pc = 0x1CD630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD62Cu;
            // 0x1cd630: 0xa0430016  sb          $v1, 0x16($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD634u; }
        if (ctx->pc != 0x1CD634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD634u; }
        if (ctx->pc != 0x1CD634u) { return; }
    }
    ctx->pc = 0x1CD634u;
    // 0x1cd634: 0x94440244  lhu         $a0, 0x244($v0)
    ctx->pc = 0x1cd634u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x1cd638: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1cd638u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cd63c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1cd63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1cd640: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD640u;
    {
        const bool branch_taken_0x1cd640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD640u;
            // 0x1cd644: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd640) {
            ctx->pc = 0x1CD650u;
            goto label_1cd650;
        }
    }
    ctx->pc = 0x1CD648u;
    // 0x1cd648: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD648u;
    {
        const bool branch_taken_0x1cd648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD648u;
            // 0x1cd64c: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd648) {
            ctx->pc = 0x1CD654u;
            goto label_1cd654;
        }
    }
    ctx->pc = 0x1CD650u;
label_1cd650:
    // 0x1cd650: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1cd650u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_1cd654:
    // 0x1cd654: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1cd654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cd658:
    // 0x1cd658: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1cd658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cd65c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1cd65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd660: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cd660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd664: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1cd664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd668: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1cd668u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd66c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd670: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1cd670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd674: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD674u;
            // 0x1cd678: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD67Cu;
    // 0x1cd67c: 0x0  nop
    ctx->pc = 0x1cd67cu;
    // NOP
}
