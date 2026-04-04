#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00208D78
// Address: 0x208d78 - 0x208f10
void sub_00208D78_0x208d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208D78_0x208d78");
#endif

    ctx->pc = 0x208d78u;

    // 0x208d78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208d7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x208d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x208d80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x208d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x208d84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208d8c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x208d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x208d90: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x208D90u;
    {
        const bool branch_taken_0x208d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D90u;
            // 0x208d94: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d90) {
            ctx->pc = 0x208E10u;
            goto label_208e10;
        }
    }
    ctx->pc = 0x208D98u;
    // 0x208d98: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x208d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x208d9c: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x208d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x208da0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x208da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x208da4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x208da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208da8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x208da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x208dac: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x208dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x208db0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x208db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208db4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x208db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x208db8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x208db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x208dbc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x208dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x208dc0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x208DC0u;
    {
        const bool branch_taken_0x208dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208DC0u;
            // 0x208dc4: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208dc0) {
            ctx->pc = 0x208DCCu;
            goto label_208dcc;
        }
    }
    ctx->pc = 0x208DC8u;
    // 0x208dc8: 0xc483001c  lwc1        $f3, 0x1C($a0)
    ctx->pc = 0x208dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_208dcc:
    // 0x208dcc: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x208dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x208dd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x208dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x208dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x208dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208dd8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x208dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x208ddc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x208ddcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x208de0: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x208de0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x208de4: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x208de4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x208de8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x208de8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208dec: 0x0  nop
    ctx->pc = 0x208decu;
    // NOP
    // 0x208df0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x208DF0u;
    {
        const bool branch_taken_0x208df0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208DF0u;
            // 0x208df4: 0x24040417  addiu       $a0, $zero, 0x417 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208df0) {
            ctx->pc = 0x208E10u;
            goto label_208e10;
        }
    }
    ctx->pc = 0x208DF8u;
    // 0x208df8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x208df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x208dfc: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x208dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x208e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x208e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e04: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x208e04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208e08: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x208E08u;
    SET_GPR_U32(ctx, 31, 0x208E10u);
    ctx->pc = 0x208E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208E08u;
            // 0x208e0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E10u; }
        if (ctx->pc != 0x208E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E10u; }
        if (ctx->pc != 0x208E10u) { return; }
    }
    ctx->pc = 0x208E10u;
label_208e10:
    // 0x208e10: 0xc081a7a  jal         func_2069E8
    ctx->pc = 0x208E10u;
    SET_GPR_U32(ctx, 31, 0x208E18u);
    ctx->pc = 0x208E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208E10u;
            // 0x208e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2069E8u;
    if (runtime->hasFunction(0x2069E8u)) {
        auto targetFn = runtime->lookupFunction(0x2069E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E18u; }
        if (ctx->pc != 0x208E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002069E8_0x2069e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E18u; }
        if (ctx->pc != 0x208E18u) { return; }
    }
    ctx->pc = 0x208E18u;
    // 0x208e18: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x208e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x208e1c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x208E1Cu;
    {
        const bool branch_taken_0x208e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e1c) {
            ctx->pc = 0x208E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208E1Cu;
            // 0x208e20: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208E44u;
            goto label_208e44;
        }
    }
    ctx->pc = 0x208E24u;
    // 0x208e24: 0xc04c9da  jal         func_132768
    ctx->pc = 0x208E24u;
    SET_GPR_U32(ctx, 31, 0x208E2Cu);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E2Cu; }
        if (ctx->pc != 0x208E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E2Cu; }
        if (ctx->pc != 0x208E2Cu) { return; }
    }
    ctx->pc = 0x208E2Cu;
    // 0x208e2c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x208e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x208e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e34: 0xc07ce6a  jal         func_1F39A8
    ctx->pc = 0x208E34u;
    SET_GPR_U32(ctx, 31, 0x208E3Cu);
    ctx->pc = 0x208E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208E34u;
            // 0x208e38: 0x24843330  addiu       $a0, $a0, 0x3330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F39A8u;
    if (runtime->hasFunction(0x1F39A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F39A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E3Cu; }
        if (ctx->pc != 0x208E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F39A8_0x1f39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208E3Cu; }
        if (ctx->pc != 0x208E3Cu) { return; }
    }
    ctx->pc = 0x208E3Cu;
    // 0x208e3c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x208e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x208e40: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x208e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_208e44:
    // 0x208e44: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x208e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x208e48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x208e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x208e4c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x208e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x208e50: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x208e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x208e54: 0x40f809  jalr        $v0
    ctx->pc = 0x208E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208E5Cu);
        ctx->pc = 0x208E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208E54u;
            // 0x208e58: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x208E5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208DCCu: goto label_208dcc;
            case 0x208E10u: goto label_208e10;
            case 0x208E44u: goto label_208e44;
            case 0x208EC0u: goto label_208ec0;
            case 0x208EF0u: goto label_208ef0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208E5Cu; }
            if (ctx->pc != 0x208E5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x208E5Cu;
    // 0x208e5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x208e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e60: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x208e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x208e64: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x208E64u;
    {
        const bool branch_taken_0x208e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e64) {
            ctx->pc = 0x208E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208E64u;
            // 0x208e68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208EC0u;
            goto label_208ec0;
        }
    }
    ctx->pc = 0x208E6Cu;
    // 0x208e6c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x208e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x208e70: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x208e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x208e74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x208E74u;
    {
        const bool branch_taken_0x208e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208E74u;
            // 0x208e78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e74) {
            ctx->pc = 0x208EC0u;
            goto label_208ec0;
        }
    }
    ctx->pc = 0x208E7Cu;
    // 0x208e7c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x208e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x208e80: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x208e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x208e84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x208e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e8c: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x208e8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x208e90: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x208e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x208e94: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x208e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x208e98: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x208e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x208e9c: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x208e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x208ea0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x208ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x208ea4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208ea8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x208ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x208eac: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x208eacu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x208eb0: 0xc07d904  jal         func_1F6410
    ctx->pc = 0x208EB0u;
    SET_GPR_U32(ctx, 31, 0x208EB8u);
    ctx->pc = 0x208EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208EB0u;
            // 0x208eb4: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6410u;
    if (runtime->hasFunction(0x1F6410u)) {
        auto targetFn = runtime->lookupFunction(0x1F6410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EB8u; }
        if (ctx->pc != 0x208EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6410_0x1f6410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208EB8u; }
        if (ctx->pc != 0x208EB8u) { return; }
    }
    ctx->pc = 0x208EB8u;
    // 0x208eb8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x208eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x208ebc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_208ec0:
    // 0x208ec0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x208ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x208ec4: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x208ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x208ec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x208ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ecc: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x208eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x208ed0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x208ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x208ed4: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x208ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x208ed8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x208ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x208edc: 0x30424004  andi        $v0, $v0, 0x4004
    ctx->pc = 0x208edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16388);
    // 0x208ee0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x208ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x208ee4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x208EE4u;
    {
        const bool branch_taken_0x208ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208EE4u;
            // 0x208ee8: 0xae0201ac  sw          $v0, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ee4) {
            ctx->pc = 0x208EF0u;
            goto label_208ef0;
        }
    }
    ctx->pc = 0x208EECu;
    // 0x208eec: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x208eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_208ef0:
    // 0x208ef0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x208ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x208ef4: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x208ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x208ef8: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x208ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x208efc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x208efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x208f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208f08: 0x3e00008  jr          $ra
    ctx->pc = 0x208F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208F08u;
            // 0x208f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208DCCu: goto label_208dcc;
            case 0x208E10u: goto label_208e10;
            case 0x208E44u: goto label_208e44;
            case 0x208EC0u: goto label_208ec0;
            case 0x208EF0u: goto label_208ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x208F10u;
}
