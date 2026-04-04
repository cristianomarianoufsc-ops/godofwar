#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212E98
// Address: 0x212e98 - 0x212f88
void sub_00212E98_0x212e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212E98_0x212e98");
#endif

    ctx->pc = 0x212e98u;

label_212e98:
    // 0x212e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212e9c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x212e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x212ea0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212ea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x212ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212eac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x212eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212eb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x212eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x212eb4: 0x8e3001c0  lw          $s0, 0x1C0($s1)
    ctx->pc = 0x212eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x212eb8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x212eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x212ebc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x212ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x212ec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212ec4: 0xc60c0164  lwc1        $f12, 0x164($s0)
    ctx->pc = 0x212ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x212ec8: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x212ec8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x212ecc: 0xc060e52  jal         func_183948
    ctx->pc = 0x212ECCu;
    SET_GPR_U32(ctx, 31, 0x212ED4u);
    ctx->pc = 0x212ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212ECCu;
            // 0x212ed0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212ED4u; }
        if (ctx->pc != 0x212ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212ED4u; }
        if (ctx->pc != 0x212ED4u) { return; }
    }
    ctx->pc = 0x212ED4u;
    // 0x212ed4: 0x8e2401c0  lw          $a0, 0x1C0($s1)
    ctx->pc = 0x212ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x212ed8: 0xc6030160  lwc1        $f3, 0x160($s0)
    ctx->pc = 0x212ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212edc: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x212edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x212ee0: 0xc601015c  lwc1        $f1, 0x15C($s0)
    ctx->pc = 0x212ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212ee4: 0xc4820168  lwc1        $f2, 0x168($a0)
    ctx->pc = 0x212ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212ee8: 0x8e2301dc  lw          $v1, 0x1DC($s1)
    ctx->pc = 0x212ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x212eec: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x212eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x212ef0: 0xe4420030  swc1        $f2, 0x30($v0)
    ctx->pc = 0x212ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x212ef4: 0xe4430028  swc1        $f3, 0x28($v0)
    ctx->pc = 0x212ef4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x212ef8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x212EF8u;
    {
        const bool branch_taken_0x212ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212EF8u;
            // 0x212efc: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ef8) {
            ctx->pc = 0x212F3Cu;
            goto label_212f3c;
        }
    }
    ctx->pc = 0x212F00u;
    // 0x212f00: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x212f00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x212f04: 0x24840104  addiu       $a0, $a0, 0x104
    ctx->pc = 0x212f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
    // 0x212f08: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x212F08u;
    SET_GPR_U32(ctx, 31, 0x212F10u);
    ctx->pc = 0x212F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F08u;
            // 0x212f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F10u; }
        if (ctx->pc != 0x212F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F10u; }
        if (ctx->pc != 0x212F10u) { return; }
    }
    ctx->pc = 0x212F10u;
    // 0x212f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x212f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f18: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x212F18u;
    SET_GPR_U32(ctx, 31, 0x212F20u);
    ctx->pc = 0x212F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F18u;
            // 0x212f1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F20u; }
        if (ctx->pc != 0x212F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F20u; }
        if (ctx->pc != 0x212F20u) { return; }
    }
    ctx->pc = 0x212F20u;
    // 0x212f20: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x212f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x212f24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x212f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x212f28: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x212F28u;
    {
        const bool branch_taken_0x212f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x212F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212F28u;
            // 0x212f2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f28) {
            ctx->pc = 0x212F40u;
            goto label_212f40;
        }
    }
    ctx->pc = 0x212F30u;
    // 0x212f30: 0x8e2201f4  lw          $v0, 0x1F4($s1)
    ctx->pc = 0x212f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x212f34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x212f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x212f38: 0xae2201f4  sw          $v0, 0x1F4($s1)
    ctx->pc = 0x212f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 2));
label_212f3c:
    // 0x212f3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x212f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_212f40:
    // 0x212f40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x212f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212f44: 0xae2201d4  sw          $v0, 0x1D4($s1)
    ctx->pc = 0x212f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 2));
    // 0x212f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x212f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f50: 0x3e00008  jr          $ra
    ctx->pc = 0x212F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212F50u;
            // 0x212f54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212E98u: goto label_212e98;
            case 0x212F3Cu: goto label_212f3c;
            case 0x212F40u: goto label_212f40;
            case 0x212F74u: goto label_212f74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212F58u;
    // 0x212f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212f5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x212f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x212f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212f64: 0xc0779c6  jal         func_1DE718
    ctx->pc = 0x212F64u;
    SET_GPR_U32(ctx, 31, 0x212F6Cu);
    ctx->pc = 0x212F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F64u;
            // 0x212f68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE718u;
    if (runtime->hasFunction(0x1DE718u)) {
        auto targetFn = runtime->lookupFunction(0x1DE718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F6Cu; }
        if (ctx->pc != 0x212F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE718_0x1de718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F6Cu; }
        if (ctx->pc != 0x212F6Cu) { return; }
    }
    ctx->pc = 0x212F6Cu;
    // 0x212f6c: 0xc084ba6  jal         func_212E98
    ctx->pc = 0x212F6Cu;
    SET_GPR_U32(ctx, 31, 0x212F74u);
    ctx->pc = 0x212F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212F6Cu;
            // 0x212f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212E98u;
    runtime->cooperativeGuestYield();
    goto label_212e98;
    ctx->pc = 0x212F74u;
label_212f74:
    // 0x212f74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x212f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x212F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212F7Cu;
            // 0x212f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212E98u: goto label_212e98;
            case 0x212F3Cu: goto label_212f3c;
            case 0x212F40u: goto label_212f40;
            case 0x212F74u: goto label_212f74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212F84u;
    // 0x212f84: 0x0  nop
    ctx->pc = 0x212f84u;
    // NOP
}
