#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107628
// Address: 0x107628 - 0x107730
void sub_00107628_0x107628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107628_0x107628");
#endif

    ctx->pc = 0x107628u;

    // 0x107628: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x107628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10762c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x107630: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x107630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x107634: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x107634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107638: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x107638u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x10763c: 0x26540014  addiu       $s4, $s2, 0x14
    ctx->pc = 0x10763cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x107640: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x107640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x107644: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x107644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x107648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10764c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10764cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x107650: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x107650u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x107654: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x107654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x107658: 0x12340017  beq         $s1, $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x107658u;
    {
        const bool branch_taken_0x107658 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x107658) {
            ctx->pc = 0x1076B8u;
            goto label_1076b8;
        }
    }
    ctx->pc = 0x107660u;
    // 0x107660: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x107660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x107664: 0x0  nop
    ctx->pc = 0x107664u;
    // NOP
label_107668:
    // 0x107668: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x107668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x10766c: 0x52130010  beql        $s0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x10766Cu;
    {
        const bool branch_taken_0x10766c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x10766c) {
            ctx->pc = 0x107670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10766Cu;
            // 0x107670: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1076B0u;
            goto label_1076b0;
        }
    }
    ctx->pc = 0x107674u;
    // 0x107674: 0x0  nop
    ctx->pc = 0x107674u;
    // NOP
label_107678:
    // 0x107678: 0xc045b9e  jal         func_116E78
    ctx->pc = 0x107678u;
    SET_GPR_U32(ctx, 31, 0x107680u);
    ctx->pc = 0x10767Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107678u;
            // 0x10767c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E78u;
    if (runtime->hasFunction(0x116E78u)) {
        auto targetFn = runtime->lookupFunction(0x116E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107680u; }
        if (ctx->pc != 0x107680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116e78_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107680u; }
        if (ctx->pc != 0x107680u) { return; }
    }
    ctx->pc = 0x107680u;
    // 0x107680: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x107680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x107684: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x107684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x107688: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x107688u;
    {
        const bool branch_taken_0x107688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107688) {
            ctx->pc = 0x10768Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107688u;
            // 0x10768c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1076A4u;
            goto label_1076a4;
        }
    }
    ctx->pc = 0x107690u;
    // 0x107690: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x107690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107694: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x107694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107698: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x107698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10769c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x10769cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1076a0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1076a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1076a4:
    // 0x1076a4: 0x1613fff4  bne         $s0, $s3, . + 4 + (-0xC << 2)
    ctx->pc = 0x1076A4u;
    {
        const bool branch_taken_0x1076a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x1076a4) {
            ctx->pc = 0x107678u;
            runtime->cooperativeGuestYield();
            goto label_107678;
        }
    }
    ctx->pc = 0x1076ACu;
    // 0x1076ac: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1076acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1076b0:
    // 0x1076b0: 0x5634ffed  bnel        $s1, $s4, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1076B0u;
    {
        const bool branch_taken_0x1076b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x1076b0) {
            ctx->pc = 0x1076B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1076B0u;
            // 0x1076b4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107668u;
            runtime->cooperativeGuestYield();
            goto label_107668;
        }
    }
    ctx->pc = 0x1076B8u;
label_1076b8:
    // 0x1076b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1076b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1076bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1076bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1076c0: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x1076c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1076c4: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x1076c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1076c8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1076c8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1076cc: 0x52250010  beql        $s1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1076CCu;
    {
        const bool branch_taken_0x1076cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x1076cc) {
            ctx->pc = 0x1076D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1076CCu;
            // 0x1076d0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107710u;
            goto label_107710;
        }
    }
    ctx->pc = 0x1076D4u;
    // 0x1076d4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1076d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1076d8:
    // 0x1076d8: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1076d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1076dc: 0x50640009  beql        $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1076DCu;
    {
        const bool branch_taken_0x1076dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1076dc) {
            ctx->pc = 0x1076E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1076DCu;
            // 0x1076e0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107704u;
            goto label_107704;
        }
    }
    ctx->pc = 0x1076E4u;
    // 0x1076e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1076e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1076e8:
    // 0x1076e8: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x1076e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x1076ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1076ECu;
    {
        const bool branch_taken_0x1076ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1076ec) {
            ctx->pc = 0x1076F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1076ECu;
            // 0x1076f0: 0xe4600024  swc1        $f0, 0x24($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1076F4u;
            goto label_1076f4;
        }
    }
    ctx->pc = 0x1076F4u;
label_1076f4:
    // 0x1076f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1076f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1076f8: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1076F8u;
    {
        const bool branch_taken_0x1076f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1076f8) {
            ctx->pc = 0x1076FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1076F8u;
            // 0x1076fc: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1076E8u;
            runtime->cooperativeGuestYield();
            goto label_1076e8;
        }
    }
    ctx->pc = 0x107700u;
    // 0x107700: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x107700u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_107704:
    // 0x107704: 0x5625fff4  bnel        $s1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x107704u;
    {
        const bool branch_taken_0x107704 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x107704) {
            ctx->pc = 0x107708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107704u;
            // 0x107708: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1076D8u;
            runtime->cooperativeGuestYield();
            goto label_1076d8;
        }
    }
    ctx->pc = 0x10770Cu;
    // 0x10770c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10770cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_107710:
    // 0x107710: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x107710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107714: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x107714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107718: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x107718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10771c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x10771cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107724: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x107724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107728: 0x3e00008  jr          $ra
    ctx->pc = 0x107728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10772Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107728u;
            // 0x10772c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107668u: goto label_107668;
            case 0x107678u: goto label_107678;
            case 0x1076A4u: goto label_1076a4;
            case 0x1076B0u: goto label_1076b0;
            case 0x1076B8u: goto label_1076b8;
            case 0x1076D8u: goto label_1076d8;
            case 0x1076E8u: goto label_1076e8;
            case 0x1076F4u: goto label_1076f4;
            case 0x107704u: goto label_107704;
            case 0x107710u: goto label_107710;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107730u;
}
