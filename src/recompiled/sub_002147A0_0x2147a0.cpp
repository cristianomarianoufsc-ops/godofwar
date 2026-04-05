#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002147A0
// Address: 0x2147a0 - 0x214890
void sub_002147A0_0x2147a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002147A0_0x2147a0");
#endif

    ctx->pc = 0x2147a0u;

label_2147a0:
    // 0x2147a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2147a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2147a4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2147a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2147a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2147a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2147ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2147acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2147b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2147b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2147b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2147b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2147b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2147bc: 0x8e3001c0  lw          $s0, 0x1C0($s1)
    ctx->pc = 0x2147bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x2147c0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2147c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2147c4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x2147c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x2147c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2147c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2147cc: 0xc60c00b0  lwc1        $f12, 0xB0($s0)
    ctx->pc = 0x2147ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2147d0: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x2147d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x2147d4: 0xc060e52  jal         func_183948
    ctx->pc = 0x2147D4u;
    SET_GPR_U32(ctx, 31, 0x2147DCu);
    ctx->pc = 0x2147D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2147D4u;
            // 0x2147d8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2147DCu; }
        if (ctx->pc != 0x2147DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2147DCu; }
        if (ctx->pc != 0x2147DCu) { return; }
    }
    ctx->pc = 0x2147DCu;
    // 0x2147dc: 0x8e2401c0  lw          $a0, 0x1C0($s1)
    ctx->pc = 0x2147dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x2147e0: 0xc60300ac  lwc1        $f3, 0xAC($s0)
    ctx->pc = 0x2147e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2147e4: 0x8e2201dc  lw          $v0, 0x1DC($s1)
    ctx->pc = 0x2147e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x2147e8: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x2147e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2147ec: 0xc48200b4  lwc1        $f2, 0xB4($a0)
    ctx->pc = 0x2147ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2147f0: 0x8e2301d8  lw          $v1, 0x1D8($s1)
    ctx->pc = 0x2147f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x2147f4: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x2147f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2147f8: 0xe4420030  swc1        $f2, 0x30($v0)
    ctx->pc = 0x2147f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2147fc: 0xe4430028  swc1        $f3, 0x28($v0)
    ctx->pc = 0x2147fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x214800: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x214800u;
    {
        const bool branch_taken_0x214800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214800u;
            // 0x214804: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214800) {
            ctx->pc = 0x214844u;
            goto label_214844;
        }
    }
    ctx->pc = 0x214808u;
    // 0x214808: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x214808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x21480c: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x21480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x214810: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x214810u;
    SET_GPR_U32(ctx, 31, 0x214818u);
    ctx->pc = 0x214814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214810u;
            // 0x214814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214818u; }
        if (ctx->pc != 0x214818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214818u; }
        if (ctx->pc != 0x214818u) { return; }
    }
    ctx->pc = 0x214818u;
    // 0x214818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21481c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21481cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214820: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x214820u;
    SET_GPR_U32(ctx, 31, 0x214828u);
    ctx->pc = 0x214824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214820u;
            // 0x214824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214828u; }
        if (ctx->pc != 0x214828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214828u; }
        if (ctx->pc != 0x214828u) { return; }
    }
    ctx->pc = 0x214828u;
    // 0x214828: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x214828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x21482c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21482cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x214830: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214830u;
    {
        const bool branch_taken_0x214830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x214834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214830u;
            // 0x214834: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214830) {
            ctx->pc = 0x214848u;
            goto label_214848;
        }
    }
    ctx->pc = 0x214838u;
    // 0x214838: 0x8e2201f0  lw          $v0, 0x1F0($s1)
    ctx->pc = 0x214838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x21483c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21483cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x214840: 0xae2201f0  sw          $v0, 0x1F0($s1)
    ctx->pc = 0x214840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 2));
label_214844:
    // 0x214844: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x214844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_214848:
    // 0x214848: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x214848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21484c: 0xae2201d0  sw          $v0, 0x1D0($s1)
    ctx->pc = 0x21484cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 2));
    // 0x214850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x214850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214858: 0x3e00008  jr          $ra
    ctx->pc = 0x214858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21485Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214858u;
            // 0x21485c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2147A0u: goto label_2147a0;
            case 0x214844u: goto label_214844;
            case 0x214848u: goto label_214848;
            case 0x21487Cu: goto label_21487c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214860u;
    // 0x214860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214864: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x214864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x214868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21486c: 0xc0779c6  jal         func_1DE718
    ctx->pc = 0x21486Cu;
    SET_GPR_U32(ctx, 31, 0x214874u);
    ctx->pc = 0x214870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21486Cu;
            // 0x214870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE718u;
    if (runtime->hasFunction(0x1DE718u)) {
        auto targetFn = runtime->lookupFunction(0x1DE718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214874u; }
        if (ctx->pc != 0x214874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE718_0x1de718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214874u; }
        if (ctx->pc != 0x214874u) { return; }
    }
    ctx->pc = 0x214874u;
    // 0x214874: 0xc0851e8  jal         func_2147A0
    ctx->pc = 0x214874u;
    SET_GPR_U32(ctx, 31, 0x21487Cu);
    ctx->pc = 0x214878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214874u;
            // 0x214878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2147A0u;
    runtime->cooperativeGuestYield();
    goto label_2147a0;
    ctx->pc = 0x21487Cu;
label_21487c:
    // 0x21487c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21487cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214884: 0x3e00008  jr          $ra
    ctx->pc = 0x214884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214884u;
            // 0x214888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2147A0u: goto label_2147a0;
            case 0x214844u: goto label_214844;
            case 0x214848u: goto label_214848;
            case 0x21487Cu: goto label_21487c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21488Cu;
    // 0x21488c: 0x0  nop
    ctx->pc = 0x21488cu;
    // NOP
}
