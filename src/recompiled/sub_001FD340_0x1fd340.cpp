#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD340
// Address: 0x1fd340 - 0x1fd4c8
void sub_001FD340_0x1fd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD340_0x1fd340");
#endif

    ctx->pc = 0x1fd340u;

    // 0x1fd340: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fd340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fd344: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fd344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fd348: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fd348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fd34c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fd34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fd350: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fd350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd354: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x1fd354u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1fd358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd35c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1fd35cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1fd360: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1fd360u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x1fd364: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1fd364u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1fd368: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1fd368u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1fd36c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fd36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fd370: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1fd370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fd374: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fd374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fd378: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1fd378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1fd37c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1fd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1fd380: 0x40f809  jalr        $v0
    ctx->pc = 0x1FD380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD388u);
        ctx->pc = 0x1FD384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD380u;
            // 0x1fd384: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD388u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD3ECu: goto label_1fd3ec;
            case 0x1FD40Cu: goto label_1fd40c;
            case 0x1FD448u: goto label_1fd448;
            case 0x1FD468u: goto label_1fd468;
            case 0x1FD480u: goto label_1fd480;
            case 0x1FD490u: goto label_1fd490;
            case 0x1FD4A8u: goto label_1fd4a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD388u; }
            if (ctx->pc != 0x1FD388u) { return; }
        }
        }
    }
    ctx->pc = 0x1FD388u;
    // 0x1fd388: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1fd388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1fd38c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fd38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd390: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1fd390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1fd394: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fd394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fd398: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fd398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fd39c: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1fd39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fd3a0: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x1fd3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd3a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fd3a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fd3a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fd3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fd3ac: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1fd3acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1fd3b0: 0x46141840  add.s       $f1, $f3, $f20
    ctx->pc = 0x1fd3b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
    // 0x1fd3b4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1fd3b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fd3b8: 0x0  nop
    ctx->pc = 0x1fd3b8u;
    // NOP
    // 0x1fd3bc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1FD3BCu;
    {
        const bool branch_taken_0x1fd3bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FD3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD3BCu;
            // 0x1fd3c0: 0xe6210010  swc1        $f1, 0x10($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3bc) {
            ctx->pc = 0x1FD40Cu;
            goto label_1fd40c;
        }
    }
    ctx->pc = 0x1FD3C4u;
    // 0x1fd3c4: 0x4616a800  add.s       $f0, $f21, $f22
    ctx->pc = 0x1fd3c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x1fd3c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fd3c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fd3cc: 0x0  nop
    ctx->pc = 0x1fd3ccu;
    // NOP
    // 0x1fd3d0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD3D0u;
    {
        const bool branch_taken_0x1fd3d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fd3d0) {
            ctx->pc = 0x1FD3D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD3D0u;
            // 0x1fd3d4: 0x46150b01  sub.s       $f12, $f1, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD3ECu;
            goto label_1fd3ec;
        }
    }
    ctx->pc = 0x1FD3D8u;
    // 0x1fd3d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fd3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fd3dc: 0xc077d94  jal         func_1DF650
    ctx->pc = 0x1FD3DCu;
    SET_GPR_U32(ctx, 31, 0x1FD3E4u);
    ctx->pc = 0x1FD3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD3DCu;
            // 0x1fd3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF650u;
    if (runtime->hasFunction(0x1DF650u)) {
        auto targetFn = runtime->lookupFunction(0x1DF650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3E4u; }
        if (ctx->pc != 0x1FD3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF650_0x1df650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3E4u; }
        if (ctx->pc != 0x1FD3E4u) { return; }
    }
    ctx->pc = 0x1FD3E4u;
    // 0x1fd3e4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1FD3E4u;
    {
        const bool branch_taken_0x1fd3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD3E4u;
            // 0x1fd3e8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3e4) {
            ctx->pc = 0x1FD448u;
            goto label_1fd448;
        }
    }
    ctx->pc = 0x1FD3ECu;
label_1fd3ec:
    // 0x1fd3ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fd3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd3f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fd3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd3f8: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x1fd3f8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x1fd3fc: 0xc077d94  jal         func_1DF650
    ctx->pc = 0x1FD3FCu;
    SET_GPR_U32(ctx, 31, 0x1FD404u);
    ctx->pc = 0x1FD400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD3FCu;
            // 0x1fd400: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF650u;
    if (runtime->hasFunction(0x1DF650u)) {
        auto targetFn = runtime->lookupFunction(0x1DF650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD404u; }
        if (ctx->pc != 0x1FD404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF650_0x1df650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD404u; }
        if (ctx->pc != 0x1FD404u) { return; }
    }
    ctx->pc = 0x1FD404u;
    // 0x1fd404: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FD404u;
    {
        const bool branch_taken_0x1fd404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD404u;
            // 0x1fd408: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd404) {
            ctx->pc = 0x1FD448u;
            goto label_1fd448;
        }
    }
    ctx->pc = 0x1FD40Cu;
label_1fd40c:
    // 0x1fd40c: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x1fd40cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x1fd410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fd410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fd414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd418: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fd418u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1fd41c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fd41cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fd420: 0x70421b89  pcpyld      $v1, $v0, $v0
    ctx->pc = 0x1fd420u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1fd424: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1fd424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd428: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1fd428u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1fd42c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1fd42cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1fd430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd434: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1fd434u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1fd438: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1fd438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1fd43c: 0xc077e14  jal         func_1DF850
    ctx->pc = 0x1FD43Cu;
    SET_GPR_U32(ctx, 31, 0x1FD444u);
    ctx->pc = 0x1FD440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD43Cu;
            // 0x1fd440: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF850u;
    if (runtime->hasFunction(0x1DF850u)) {
        auto targetFn = runtime->lookupFunction(0x1DF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD444u; }
        if (ctx->pc != 0x1FD444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF850_0x1df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD444u; }
        if (ctx->pc != 0x1FD444u) { return; }
    }
    ctx->pc = 0x1FD444u;
    // 0x1fd444: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fd444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fd448:
    // 0x1fd448: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fd448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fd44c: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x1fd44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x1fd450: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd458: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1fd458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1fd45c: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD45Cu;
    {
        const bool branch_taken_0x1fd45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd45c) {
            ctx->pc = 0x1FD460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD45Cu;
            // 0x1fd460: 0x4616a840  add.s       $f1, $f21, $f22 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD490u;
            goto label_1fd490;
        }
    }
    ctx->pc = 0x1FD464u;
    // 0x1fd464: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1fd464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1fd468:
    // 0x1fd468: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd46c: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1fd46cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1fd470: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1fd470u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1fd474: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x1fd474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1fd478: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD478u;
    {
        const bool branch_taken_0x1fd478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd478) {
            ctx->pc = 0x1FD47Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD478u;
            // 0x1fd47c: 0xac8000b4  sw          $zero, 0xB4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD480u;
            goto label_1fd480;
        }
    }
    ctx->pc = 0x1FD480u;
label_1fd480:
    // 0x1fd480: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fd480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd484: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FD484u;
    {
        const bool branch_taken_0x1fd484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD484u;
            // 0x1fd488: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd484) {
            ctx->pc = 0x1FD468u;
            runtime->cooperativeGuestYield();
            goto label_1fd468;
        }
    }
    ctx->pc = 0x1FD48Cu;
    // 0x1fd48c: 0x4616a840  add.s       $f1, $f21, $f22
    ctx->pc = 0x1fd48cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_1fd490:
    // 0x1fd490: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1fd490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd494: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fd494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fd498: 0x0  nop
    ctx->pc = 0x1fd498u;
    // NOP
    // 0x1fd49c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD49Cu;
    {
        const bool branch_taken_0x1fd49c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FD4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD49Cu;
            // 0x1fd4a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd49c) {
            ctx->pc = 0x1FD4A8u;
            goto label_1fd4a8;
        }
    }
    ctx->pc = 0x1FD4A4u;
    // 0x1fd4a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4a8:
    // 0x1fd4a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fd4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd4ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fd4acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd4b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fd4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd4b4: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x1fd4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fd4b8: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1fd4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fd4bc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1fd4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fd4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4C0u;
            // 0x1fd4c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD3ECu: goto label_1fd3ec;
            case 0x1FD40Cu: goto label_1fd40c;
            case 0x1FD448u: goto label_1fd448;
            case 0x1FD468u: goto label_1fd468;
            case 0x1FD480u: goto label_1fd480;
            case 0x1FD490u: goto label_1fd490;
            case 0x1FD4A8u: goto label_1fd4a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD4C8u;
}
