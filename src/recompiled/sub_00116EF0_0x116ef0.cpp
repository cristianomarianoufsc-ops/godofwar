#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116EF0
// Address: 0x116ef0 - 0x117438
void sub_00116EF0_0x116ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116EF0_0x116ef0");
#endif

    ctx->pc = 0x116ef0u;

    // 0x116ef0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x116ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x116ef4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x116ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x116ef8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x116ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x116efc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x116f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x116f04: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x116f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x116f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116f0c: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x116f0cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x116f10: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x116f10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x116f14: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x116f14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x116f18: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x116f18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x116f1c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x116f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x116f20: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x116f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x116f24: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x116f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x116f28: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116F28u;
    {
        const bool branch_taken_0x116f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x116F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116F28u;
            // 0x116f2c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f28) {
            ctx->pc = 0x116F4Cu;
            goto label_116f4c;
        }
    }
    ctx->pc = 0x116F30u;
    // 0x116f30: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x116f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x116f34: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x116f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x116f38: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x116f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x116f3c: 0x40f809  jalr        $v0
    ctx->pc = 0x116F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116F44u);
        ctx->pc = 0x116F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116F3Cu;
            // 0x116f40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x116F44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F84u: goto label_116f84;
            case 0x116FD4u: goto label_116fd4;
            case 0x117000u: goto label_117000;
            case 0x11704Cu: goto label_11704c;
            case 0x117054u: goto label_117054;
            case 0x11706Cu: goto label_11706c;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170CCu: goto label_1170cc;
            case 0x117114u: goto label_117114;
            case 0x117140u: goto label_117140;
            case 0x117168u: goto label_117168;
            case 0x117180u: goto label_117180;
            case 0x11719Cu: goto label_11719c;
            case 0x1171B4u: goto label_1171b4;
            case 0x1171C8u: goto label_1171c8;
            case 0x1171CCu: goto label_1171cc;
            case 0x117208u: goto label_117208;
            case 0x11720Cu: goto label_11720c;
            case 0x117220u: goto label_117220;
            case 0x117270u: goto label_117270;
            case 0x1172F8u: goto label_1172f8;
            case 0x117314u: goto label_117314;
            case 0x117334u: goto label_117334;
            case 0x117358u: goto label_117358;
            case 0x117374u: goto label_117374;
            case 0x11738Cu: goto label_11738c;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F4u: goto label_1173f4;
            case 0x117408u: goto label_117408;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116F44u; }
            if (ctx->pc != 0x116F44u) { return; }
        }
        }
    }
    ctx->pc = 0x116F44u;
    // 0x116f44: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x116f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x116f48: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x116f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_116f4c:
    // 0x116f4c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x116f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x116f50: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x116f50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x116f54: 0xc603c658  lwc1        $f3, -0x39A8($s0)
    ctx->pc = 0x116f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116f58: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x116f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x116f5c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x116f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116f60: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x116f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116f64: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x116f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116f68: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x116f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x116f6c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x116f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x116f70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x116f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x116f74: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x116f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x116f78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x116F78u;
    {
        const bool branch_taken_0x116f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116F78u;
            // 0x116f7c: 0x46011540  add.s       $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f78) {
            ctx->pc = 0x116F84u;
            goto label_116f84;
        }
    }
    ctx->pc = 0x116F80u;
    // 0x116f80: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x116f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_116f84:
    // 0x116f84: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x116f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x116f88: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x116F88u;
    SET_GPR_U32(ctx, 31, 0x116F90u);
    ctx->pc = 0x116F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116F88u;
            // 0x116f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F90u; }
        if (ctx->pc != 0x116F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116F90u; }
        if (ctx->pc != 0x116F90u) { return; }
    }
    ctx->pc = 0x116F90u;
    // 0x116f90: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x116f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x116f94: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x116f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x116f98: 0x4600a8a9  min.s       $f2, $f21, $f0
    ctx->pc = 0x116f98u;
    ctx->f[2] = std::min(ctx->f[21], ctx->f[0]);
    // 0x116f9c: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x116f9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x116fa0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x116fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116fa4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x116fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x116fa8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x116fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116fac: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x116FACu;
    {
        const bool branch_taken_0x116fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116fac) {
            ctx->pc = 0x117114u;
            goto label_117114;
        }
    }
    ctx->pc = 0x116FB4u;
    // 0x116fb4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x116fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x116fb8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x116FB8u;
    {
        const bool branch_taken_0x116fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FB8u;
            // 0x116fbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fb8) {
            ctx->pc = 0x116FD4u;
            goto label_116fd4;
        }
    }
    ctx->pc = 0x116FC0u;
    // 0x116fc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116fc4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x116fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x116fc8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x116fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116fcc: 0x40f809  jalr        $v0
    ctx->pc = 0x116FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116FD4u);
        ctx->pc = 0x116FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FCCu;
            // 0x116fd0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x116FD4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F84u: goto label_116f84;
            case 0x116FD4u: goto label_116fd4;
            case 0x117000u: goto label_117000;
            case 0x11704Cu: goto label_11704c;
            case 0x117054u: goto label_117054;
            case 0x11706Cu: goto label_11706c;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170CCu: goto label_1170cc;
            case 0x117114u: goto label_117114;
            case 0x117140u: goto label_117140;
            case 0x117168u: goto label_117168;
            case 0x117180u: goto label_117180;
            case 0x11719Cu: goto label_11719c;
            case 0x1171B4u: goto label_1171b4;
            case 0x1171C8u: goto label_1171c8;
            case 0x1171CCu: goto label_1171cc;
            case 0x117208u: goto label_117208;
            case 0x11720Cu: goto label_11720c;
            case 0x117220u: goto label_117220;
            case 0x117270u: goto label_117270;
            case 0x1172F8u: goto label_1172f8;
            case 0x117314u: goto label_117314;
            case 0x117334u: goto label_117334;
            case 0x117358u: goto label_117358;
            case 0x117374u: goto label_117374;
            case 0x11738Cu: goto label_11738c;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F4u: goto label_1173f4;
            case 0x117408u: goto label_117408;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x116FD4u; }
            if (ctx->pc != 0x116FD4u) { return; }
        }
        }
    }
    ctx->pc = 0x116FD4u;
label_116fd4:
    // 0x116fd4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x116fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x116fd8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x116fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x116fdc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x116FDCu;
    {
        const bool branch_taken_0x116fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FDCu;
            // 0x116fe0: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fdc) {
            ctx->pc = 0x117054u;
            goto label_117054;
        }
    }
    ctx->pc = 0x116FE4u;
    // 0x116fe4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x116fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x116fe8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x116fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116fec: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x116fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116ff0: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x116ff0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x116ff4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x116FF4u;
    {
        const bool branch_taken_0x116ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116FF4u;
            // 0x116ff8: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ff4) {
            ctx->pc = 0x117000u;
            goto label_117000;
        }
    }
    ctx->pc = 0x116FFCu;
    // 0x116ffc: 0x46001546  mov.s       $f21, $f2
    ctx->pc = 0x116ffcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
label_117000:
    // 0x117000: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x117000u;
    SET_GPR_U32(ctx, 31, 0x117008u);
    ctx->pc = 0x117004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117000u;
            // 0x117004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117008u; }
        if (ctx->pc != 0x117008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117008u; }
        if (ctx->pc != 0x117008u) { return; }
    }
    ctx->pc = 0x117008u;
    // 0x117008: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x117008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x11700c: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x11700cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x117010: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x117010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x117014: 0x4600a029  min.s       $f0, $f20, $f0
    ctx->pc = 0x117014u;
    ctx->f[0] = std::min(ctx->f[20], ctx->f[0]);
    // 0x117018: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x117018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x11701c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x11701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x117020: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x117020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x117024: 0x40f809  jalr        $v0
    ctx->pc = 0x117024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11702Cu);
        ctx->pc = 0x117028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117024u;
            // 0x117028: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11702Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F84u: goto label_116f84;
            case 0x116FD4u: goto label_116fd4;
            case 0x117000u: goto label_117000;
            case 0x11704Cu: goto label_11704c;
            case 0x117054u: goto label_117054;
            case 0x11706Cu: goto label_11706c;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170CCu: goto label_1170cc;
            case 0x117114u: goto label_117114;
            case 0x117140u: goto label_117140;
            case 0x117168u: goto label_117168;
            case 0x117180u: goto label_117180;
            case 0x11719Cu: goto label_11719c;
            case 0x1171B4u: goto label_1171b4;
            case 0x1171C8u: goto label_1171c8;
            case 0x1171CCu: goto label_1171cc;
            case 0x117208u: goto label_117208;
            case 0x11720Cu: goto label_11720c;
            case 0x117220u: goto label_117220;
            case 0x117270u: goto label_117270;
            case 0x1172F8u: goto label_1172f8;
            case 0x117314u: goto label_117314;
            case 0x117334u: goto label_117334;
            case 0x117358u: goto label_117358;
            case 0x117374u: goto label_117374;
            case 0x11738Cu: goto label_11738c;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F4u: goto label_1173f4;
            case 0x117408u: goto label_117408;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11702Cu; }
            if (ctx->pc != 0x11702Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11702Cu;
    // 0x11702c: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x11702Cu;
    {
        const bool branch_taken_0x11702c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11702c) {
            ctx->pc = 0x117030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11702Cu;
            // 0x117030: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11720Cu;
            goto label_11720c;
        }
    }
    ctx->pc = 0x117034u;
    // 0x117034: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x117034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x117038: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x117038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x11703c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11703cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x117040: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x117040u;
    {
        const bool branch_taken_0x117040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117040u;
            // 0x117044: 0x34620010  ori         $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117040) {
            ctx->pc = 0x11704Cu;
            goto label_11704c;
        }
    }
    ctx->pc = 0x117048u;
    // 0x117048: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x117048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_11704c:
    // 0x11704c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x11704Cu;
    {
        const bool branch_taken_0x11704c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11704Cu;
            // 0x117050: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11704c) {
            ctx->pc = 0x11720Cu;
            goto label_11720c;
        }
    }
    ctx->pc = 0x117054u;
label_117054:
    // 0x117054: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x117054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x117058: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x117058u;
    {
        const bool branch_taken_0x117058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117058u;
            // 0x11705c: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117058) {
            ctx->pc = 0x1170B0u;
            goto label_1170b0;
        }
    }
    ctx->pc = 0x117060u;
    // 0x117060: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x117060u;
    {
        const bool branch_taken_0x117060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117060u;
            // 0x117064: 0xc454001c  lwc1        $f20, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117060) {
            ctx->pc = 0x11706Cu;
            goto label_11706c;
        }
    }
    ctx->pc = 0x117068u;
    // 0x117068: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x117068u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_11706c:
    // 0x11706c: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x11706Cu;
    SET_GPR_U32(ctx, 31, 0x117074u);
    ctx->pc = 0x117070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11706Cu;
            // 0x117070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117074u; }
        if (ctx->pc != 0x117074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117074u; }
        if (ctx->pc != 0x117074u) { return; }
    }
    ctx->pc = 0x117074u;
    // 0x117074: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x117074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x117078: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x117078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x11707c: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x11707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x117080: 0x4600a029  min.s       $f0, $f20, $f0
    ctx->pc = 0x117080u;
    ctx->f[0] = std::min(ctx->f[20], ctx->f[0]);
    // 0x117084: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x117084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x117088: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x117088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x11708c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x11708cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x117090: 0x40f809  jalr        $v0
    ctx->pc = 0x117090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117098u);
        ctx->pc = 0x117094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117090u;
            // 0x117094: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117098u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F84u: goto label_116f84;
            case 0x116FD4u: goto label_116fd4;
            case 0x117000u: goto label_117000;
            case 0x11704Cu: goto label_11704c;
            case 0x117054u: goto label_117054;
            case 0x11706Cu: goto label_11706c;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170CCu: goto label_1170cc;
            case 0x117114u: goto label_117114;
            case 0x117140u: goto label_117140;
            case 0x117168u: goto label_117168;
            case 0x117180u: goto label_117180;
            case 0x11719Cu: goto label_11719c;
            case 0x1171B4u: goto label_1171b4;
            case 0x1171C8u: goto label_1171c8;
            case 0x1171CCu: goto label_1171cc;
            case 0x117208u: goto label_117208;
            case 0x11720Cu: goto label_11720c;
            case 0x117220u: goto label_117220;
            case 0x117270u: goto label_117270;
            case 0x1172F8u: goto label_1172f8;
            case 0x117314u: goto label_117314;
            case 0x117334u: goto label_117334;
            case 0x117358u: goto label_117358;
            case 0x117374u: goto label_117374;
            case 0x11738Cu: goto label_11738c;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F4u: goto label_1173f4;
            case 0x117408u: goto label_117408;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117098u; }
            if (ctx->pc != 0x117098u) { return; }
        }
        }
    }
    ctx->pc = 0x117098u;
    // 0x117098: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x117098u;
    {
        const bool branch_taken_0x117098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117098) {
            ctx->pc = 0x11720Cu;
            goto label_11720c;
        }
    }
    ctx->pc = 0x1170A0u;
    // 0x1170a0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1170a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1170a4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1170a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1170a8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1170A8u;
    {
        const bool branch_taken_0x1170a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1170A8u;
            // 0x1170ac: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170a8) {
            ctx->pc = 0x11720Cu;
            goto label_11720c;
        }
    }
    ctx->pc = 0x1170B0u;
label_1170b0:
    // 0x1170b0: 0x4600b546  mov.s       $f21, $f22
    ctx->pc = 0x1170b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
    // 0x1170b4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1170b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1170b8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1170b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1170bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1170bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1170c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1170C0u;
    {
        const bool branch_taken_0x1170c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1170C0u;
            // 0x1170c4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170c0) {
            ctx->pc = 0x1170CCu;
            goto label_1170cc;
        }
    }
    ctx->pc = 0x1170C8u;
    // 0x1170c8: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x1170c8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_1170cc:
    // 0x1170cc: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x1170CCu;
    SET_GPR_U32(ctx, 31, 0x1170D4u);
    ctx->pc = 0x1170D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1170CCu;
            // 0x1170d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1170D4u; }
        if (ctx->pc != 0x1170D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1170D4u; }
        if (ctx->pc != 0x1170D4u) { return; }
    }
    ctx->pc = 0x1170D4u;
    // 0x1170d4: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x1170d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1170d8: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x1170d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1170dc: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1170dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1170e0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1170e0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1170e4: 0xc603c658  lwc1        $f3, -0x39A8($s0)
    ctx->pc = 0x1170e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1170e8: 0x4600a029  min.s       $f0, $f20, $f0
    ctx->pc = 0x1170e8u;
    ctx->f[0] = std::min(ctx->f[20], ctx->f[0]);
    // 0x1170ec: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1170ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1170f0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1170f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1170f4: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x1170f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1170f8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1170f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1170fc: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1170fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117100: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x117100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117104: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x117104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x117108: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x117108u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11710c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x11710Cu;
    {
        const bool branch_taken_0x11710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11710Cu;
            // 0x117110: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11710c) {
            ctx->pc = 0x117208u;
            goto label_117208;
        }
    }
    ctx->pc = 0x117114u;
label_117114:
    // 0x117114: 0x46161034  c.lt.s      $f2, $f22
    ctx->pc = 0x117114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117118: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x117118u;
    {
        const bool branch_taken_0x117118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x117118) {
            ctx->pc = 0x11720Cu;
            goto label_11720c;
        }
    }
    ctx->pc = 0x117120u;
    // 0x117120: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x117120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x117124: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x117124u;
    {
        const bool branch_taken_0x117124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117124u;
            // 0x117128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117124) {
            ctx->pc = 0x117140u;
            goto label_117140;
        }
    }
    ctx->pc = 0x11712Cu;
    // 0x11712c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117130: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x117130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x117134: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x117134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x117138: 0x40f809  jalr        $v0
    ctx->pc = 0x117138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117140u);
        ctx->pc = 0x11713Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117138u;
            // 0x11713c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117140u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F84u: goto label_116f84;
            case 0x116FD4u: goto label_116fd4;
            case 0x117000u: goto label_117000;
            case 0x11704Cu: goto label_11704c;
            case 0x117054u: goto label_117054;
            case 0x11706Cu: goto label_11706c;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170CCu: goto label_1170cc;
            case 0x117114u: goto label_117114;
            case 0x117140u: goto label_117140;
            case 0x117168u: goto label_117168;
            case 0x117180u: goto label_117180;
            case 0x11719Cu: goto label_11719c;
            case 0x1171B4u: goto label_1171b4;
            case 0x1171C8u: goto label_1171c8;
            case 0x1171CCu: goto label_1171cc;
            case 0x117208u: goto label_117208;
            case 0x11720Cu: goto label_11720c;
            case 0x117220u: goto label_117220;
            case 0x117270u: goto label_117270;
            case 0x1172F8u: goto label_1172f8;
            case 0x117314u: goto label_117314;
            case 0x117334u: goto label_117334;
            case 0x117358u: goto label_117358;
            case 0x117374u: goto label_117374;
            case 0x11738Cu: goto label_11738c;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F4u: goto label_1173f4;
            case 0x117408u: goto label_117408;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117140u; }
            if (ctx->pc != 0x117140u) { return; }
        }
        }
    }
    ctx->pc = 0x117140u;
label_117140:
    // 0x117140: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x117140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x117144: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x117144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x117148: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x117148u;
    {
        const bool branch_taken_0x117148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11714Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117148u;
            // 0x11714c: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117148) {
            ctx->pc = 0x117180u;
            goto label_117180;
        }
    }
    ctx->pc = 0x117150u;
    // 0x117150: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x117150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x117154: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x117154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117158: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x117158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11715c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11715Cu;
    {
        const bool branch_taken_0x11715c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11715Cu;
            // 0x117160: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11715c) {
            ctx->pc = 0x117168u;
            goto label_117168;
        }
    }
    ctx->pc = 0x117164u;
    // 0x117164: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x117164u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_117168:
    // 0x117168: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x117168u;
    SET_GPR_U32(ctx, 31, 0x117170u);
    ctx->pc = 0x11716Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117168u;
            // 0x11716c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117170u; }
        if (ctx->pc != 0x117170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117170u; }
        if (ctx->pc != 0x117170u) { return; }
    }
    ctx->pc = 0x117170u;
    // 0x117170: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x117170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x117174: 0x4600a029  min.s       $f0, $f20, $f0
    ctx->pc = 0x117174u;
    ctx->f[0] = std::min(ctx->f[20], ctx->f[0]);
    // 0x117178: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x117178u;
    {
        const bool branch_taken_0x117178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11717Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117178u;
            // 0x11717c: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117178) {
            ctx->pc = 0x11720Cu;
            goto label_11720c;
        }
    }
    ctx->pc = 0x117180u;
label_117180:
    // 0x117180: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x117180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x117184: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x117184u;
    {
        const bool branch_taken_0x117184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117184) {
            ctx->pc = 0x117188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117184u;
            // 0x117188: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1171B4u;
            goto label_1171b4;
        }
    }
    ctx->pc = 0x11718Cu;
    // 0x11718c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x11718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x117190: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x117190u;
    {
        const bool branch_taken_0x117190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117190u;
            // 0x117194: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117190) {
            ctx->pc = 0x11719Cu;
            goto label_11719c;
        }
    }
    ctx->pc = 0x117198u;
    // 0x117198: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x117198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11719c:
    // 0x11719c: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x11719Cu;
    SET_GPR_U32(ctx, 31, 0x1171A4u);
    ctx->pc = 0x1171A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11719Cu;
            // 0x1171a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171A4u; }
        if (ctx->pc != 0x1171A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171A4u; }
        if (ctx->pc != 0x1171A4u) { return; }
    }
    ctx->pc = 0x1171A4u;
    // 0x1171a4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1171a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1171a8: 0x4600b029  min.s       $f0, $f22, $f0
    ctx->pc = 0x1171a8u;
    ctx->f[0] = std::min(ctx->f[22], ctx->f[0]);
    // 0x1171ac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1171ACu;
    {
        const bool branch_taken_0x1171ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1171ACu;
            // 0x1171b0: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171ac) {
            ctx->pc = 0x11720Cu;
            goto label_11720c;
        }
    }
    ctx->pc = 0x1171B4u;
label_1171b4:
    // 0x1171b4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1171b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1171b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1171B8u;
    {
        const bool branch_taken_0x1171b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1171B8u;
            // 0x1171bc: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171b8) {
            ctx->pc = 0x1171C8u;
            goto label_1171c8;
        }
    }
    ctx->pc = 0x1171C0u;
    // 0x1171c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1171C0u;
    {
        const bool branch_taken_0x1171c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1171C0u;
            // 0x1171c4: 0xc454001c  lwc1        $f20, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171c0) {
            ctx->pc = 0x1171CCu;
            goto label_1171cc;
        }
    }
    ctx->pc = 0x1171C8u;
label_1171c8:
    // 0x1171c8: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x1171c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_1171cc:
    // 0x1171cc: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x1171CCu;
    SET_GPR_U32(ctx, 31, 0x1171D4u);
    ctx->pc = 0x1171D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1171CCu;
            // 0x1171d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171D4u; }
        if (ctx->pc != 0x1171D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171D4u; }
        if (ctx->pc != 0x1171D4u) { return; }
    }
    ctx->pc = 0x1171D4u;
    // 0x1171d4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1171d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1171d8: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1171d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1171dc: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1171dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1171e0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1171e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1171e4: 0xc602c658  lwc1        $f2, -0x39A8($s0)
    ctx->pc = 0x1171e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1171e8: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x1171e8u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x1171ec: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1171ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1171f0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1171f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1171f4: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x1171f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1171f8: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1171f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1171fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1171fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x117200: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x117200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x117204: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x117204u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_117208:
    // 0x117208: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x117208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_11720c:
    // 0x11720c: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11720Cu;
    {
        const bool branch_taken_0x11720c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11720c) {
            ctx->pc = 0x117210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11720Cu;
            // 0x117210: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117220u;
            goto label_117220;
        }
    }
    ctx->pc = 0x117214u;
    // 0x117214: 0xc045b9e  jal         func_116E78
    ctx->pc = 0x117214u;
    SET_GPR_U32(ctx, 31, 0x11721Cu);
    ctx->pc = 0x117218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117214u;
            // 0x117218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E78u;
    if (runtime->hasFunction(0x116E78u)) {
        auto targetFn = runtime->lookupFunction(0x116E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11721Cu; }
        if (ctx->pc != 0x11721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116e78_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11721Cu; }
        if (ctx->pc != 0x11721Cu) { return; }
    }
    ctx->pc = 0x11721Cu;
    // 0x11721c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x11721cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_117220:
    // 0x117220: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x117220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x117224: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x117224u;
    {
        const bool branch_taken_0x117224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117224u;
            // 0x117228: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117224) {
            ctx->pc = 0x117270u;
            goto label_117270;
        }
    }
    ctx->pc = 0x11722Cu;
    // 0x11722c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x11722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x117230: 0xc443c658  lwc1        $f3, -0x39A8($v0)
    ctx->pc = 0x117230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x117234: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x117234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x117238: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x117238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11723c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x11723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117240: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x117240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x117244: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x117244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x117248: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x117248u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11724c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x11724cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117250: 0x0  nop
    ctx->pc = 0x117250u;
    // NOP
    // 0x117254: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x117254u;
    {
        const bool branch_taken_0x117254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x117258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117254u;
            // 0x117258: 0xe6210034  swc1        $f1, 0x34($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117254) {
            ctx->pc = 0x117270u;
            goto label_117270;
        }
    }
    ctx->pc = 0x11725Cu;
    // 0x11725c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11725cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117260: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x117260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
    // 0x117264: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x117264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x117268: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x117268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x11726c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x11726cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_117270:
    // 0x117270: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x117270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117274: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x117274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117278: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x117278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11727c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11727cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x117280: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x117280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x117284: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x117284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x117288: 0x460205c2  mul.s       $f23, $f0, $f2
    ctx->pc = 0x117288u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11728c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x11728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x117290: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x117290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x117294: 0x40f809  jalr        $v0
    ctx->pc = 0x117294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11729Cu);
        ctx->pc = 0x117298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117294u;
            // 0x117298: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11729Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F84u: goto label_116f84;
            case 0x116FD4u: goto label_116fd4;
            case 0x117000u: goto label_117000;
            case 0x11704Cu: goto label_11704c;
            case 0x117054u: goto label_117054;
            case 0x11706Cu: goto label_11706c;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170CCu: goto label_1170cc;
            case 0x117114u: goto label_117114;
            case 0x117140u: goto label_117140;
            case 0x117168u: goto label_117168;
            case 0x117180u: goto label_117180;
            case 0x11719Cu: goto label_11719c;
            case 0x1171B4u: goto label_1171b4;
            case 0x1171C8u: goto label_1171c8;
            case 0x1171CCu: goto label_1171cc;
            case 0x117208u: goto label_117208;
            case 0x11720Cu: goto label_11720c;
            case 0x117220u: goto label_117220;
            case 0x117270u: goto label_117270;
            case 0x1172F8u: goto label_1172f8;
            case 0x117314u: goto label_117314;
            case 0x117334u: goto label_117334;
            case 0x117358u: goto label_117358;
            case 0x117374u: goto label_117374;
            case 0x11738Cu: goto label_11738c;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F4u: goto label_1173f4;
            case 0x117408u: goto label_117408;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11729Cu; }
            if (ctx->pc != 0x11729Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11729Cu;
    // 0x11729c: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x11729Cu;
    {
        const bool branch_taken_0x11729c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11729c) {
            ctx->pc = 0x1172A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11729Cu;
            // 0x1172a0: 0xc6200028  lwc1        $f0, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1173F4u;
            goto label_1173f4;
        }
    }
    ctx->pc = 0x1172A4u;
    // 0x1172a4: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x1172a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1172a8: 0xc6360008  lwc1        $f22, 0x8($s1)
    ctx->pc = 0x1172a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1172ac: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1172acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1172b0: 0xc4550070  lwc1        $f21, 0x70($v0)
    ctx->pc = 0x1172b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1172b4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1172b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1172b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1172b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1172bc: 0x46166034  c.lt.s      $f12, $f22
    ctx->pc = 0x1172bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1172c0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1172c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1172c4: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1172c4u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x1172c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1172c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1172cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1172ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1172d0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1172D0u;
    {
        const bool branch_taken_0x1172d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1172D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1172D0u;
            // 0x1172d4: 0x4600ae06  mov.s       $f24, $f21 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172d0) {
            ctx->pc = 0x1172F8u;
            goto label_1172f8;
        }
    }
    ctx->pc = 0x1172D8u;
    // 0x1172d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1172d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1172dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1172dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1172e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1172e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1172e4: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x1172e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1172e8: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x1172e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1172ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1172ECu;
    {
        const bool branch_taken_0x1172ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1172ec) {
            ctx->pc = 0x117314u;
            goto label_117314;
        }
    }
    ctx->pc = 0x1172F4u;
    // 0x1172f4: 0x0  nop
    ctx->pc = 0x1172f4u;
    // NOP
label_1172f8:
    // 0x1172f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1172f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1172fc: 0x4600ae07  neg.s       $f24, $f21
    ctx->pc = 0x1172fcu;
    ctx->f[24] = FPU_NEG_S(ctx->f[21]);
    // 0x117300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x117300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117304: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x117304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x117308: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x117308u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11730c: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x11730cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117310: 0x0  nop
    ctx->pc = 0x117310u;
    // NOP
label_117314:
    // 0x117314: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x117314u;
    {
        const bool branch_taken_0x117314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x117318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117314u;
            // 0x117318: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117314) {
            ctx->pc = 0x117334u;
            goto label_117334;
        }
    }
    ctx->pc = 0x11731Cu;
    // 0x11731c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x11731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x117320: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x117320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x117324: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x117324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x117328: 0x40f809  jalr        $v0
    ctx->pc = 0x117328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117330u);
        ctx->pc = 0x11732Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117328u;
            // 0x11732c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117330u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F84u: goto label_116f84;
            case 0x116FD4u: goto label_116fd4;
            case 0x117000u: goto label_117000;
            case 0x11704Cu: goto label_11704c;
            case 0x117054u: goto label_117054;
            case 0x11706Cu: goto label_11706c;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170CCu: goto label_1170cc;
            case 0x117114u: goto label_117114;
            case 0x117140u: goto label_117140;
            case 0x117168u: goto label_117168;
            case 0x117180u: goto label_117180;
            case 0x11719Cu: goto label_11719c;
            case 0x1171B4u: goto label_1171b4;
            case 0x1171C8u: goto label_1171c8;
            case 0x1171CCu: goto label_1171cc;
            case 0x117208u: goto label_117208;
            case 0x11720Cu: goto label_11720c;
            case 0x117220u: goto label_117220;
            case 0x117270u: goto label_117270;
            case 0x1172F8u: goto label_1172f8;
            case 0x117314u: goto label_117314;
            case 0x117334u: goto label_117334;
            case 0x117358u: goto label_117358;
            case 0x117374u: goto label_117374;
            case 0x11738Cu: goto label_11738c;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F4u: goto label_1173f4;
            case 0x117408u: goto label_117408;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117330u; }
            if (ctx->pc != 0x117330u) { return; }
        }
        }
    }
    ctx->pc = 0x117330u;
    // 0x117330: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x117330u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_117334:
    // 0x117334: 0x460cb001  sub.s       $f0, $f22, $f12
    ctx->pc = 0x117334u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
    // 0x117338: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x117338u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x11733c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x11733cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117340: 0x0  nop
    ctx->pc = 0x117340u;
    // NOP
    // 0x117344: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x117344u;
    {
        const bool branch_taken_0x117344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x117344) {
            ctx->pc = 0x117348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117344u;
            // 0x117348: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11738Cu;
            goto label_11738c;
        }
    }
    ctx->pc = 0x11734Cu;
    // 0x11734c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11734Cu;
    {
        const bool branch_taken_0x11734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11734Cu;
            // 0x117350: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11734c) {
            ctx->pc = 0x117374u;
            goto label_117374;
        }
    }
    ctx->pc = 0x117354u;
    // 0x117354: 0x0  nop
    ctx->pc = 0x117354u;
    // NOP
label_117358:
    // 0x117358: 0x4618a500  add.s       $f20, $f20, $f24
    ctx->pc = 0x117358u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x11735c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x11735cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x117360: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x117360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x117364: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x117364u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x117368: 0x40f809  jalr        $v0
    ctx->pc = 0x117368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117370u);
        ctx->pc = 0x11736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117368u;
            // 0x11736c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117370u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F84u: goto label_116f84;
            case 0x116FD4u: goto label_116fd4;
            case 0x117000u: goto label_117000;
            case 0x11704Cu: goto label_11704c;
            case 0x117054u: goto label_117054;
            case 0x11706Cu: goto label_11706c;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170CCu: goto label_1170cc;
            case 0x117114u: goto label_117114;
            case 0x117140u: goto label_117140;
            case 0x117168u: goto label_117168;
            case 0x117180u: goto label_117180;
            case 0x11719Cu: goto label_11719c;
            case 0x1171B4u: goto label_1171b4;
            case 0x1171C8u: goto label_1171c8;
            case 0x1171CCu: goto label_1171cc;
            case 0x117208u: goto label_117208;
            case 0x11720Cu: goto label_11720c;
            case 0x117220u: goto label_117220;
            case 0x117270u: goto label_117270;
            case 0x1172F8u: goto label_1172f8;
            case 0x117314u: goto label_117314;
            case 0x117334u: goto label_117334;
            case 0x117358u: goto label_117358;
            case 0x117374u: goto label_117374;
            case 0x11738Cu: goto label_11738c;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F4u: goto label_1173f4;
            case 0x117408u: goto label_117408;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117370u; }
            if (ctx->pc != 0x117370u) { return; }
        }
        }
    }
    ctx->pc = 0x117370u;
    // 0x117370: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x117370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_117374:
    // 0x117374: 0x4614b001  sub.s       $f0, $f22, $f20
    ctx->pc = 0x117374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x117378: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x117378u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x11737c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x11737cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117380: 0x0  nop
    ctx->pc = 0x117380u;
    // NOP
    // 0x117384: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x117384u;
    {
        const bool branch_taken_0x117384 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x117388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117384u;
            // 0x117388: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117384) {
            ctx->pc = 0x117358u;
            runtime->cooperativeGuestYield();
            goto label_117358;
        }
    }
    ctx->pc = 0x11738Cu;
label_11738c:
    // 0x11738c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x11738cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x117390: 0x26330044  addiu       $s3, $s1, 0x44
    ctx->pc = 0x117390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x117394: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x117394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x117398: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x117398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x11739c: 0x40f809  jalr        $v0
    ctx->pc = 0x11739Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1173A4u);
        ctx->pc = 0x1173A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11739Cu;
            // 0x1173a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1173A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F84u: goto label_116f84;
            case 0x116FD4u: goto label_116fd4;
            case 0x117000u: goto label_117000;
            case 0x11704Cu: goto label_11704c;
            case 0x117054u: goto label_117054;
            case 0x11706Cu: goto label_11706c;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170CCu: goto label_1170cc;
            case 0x117114u: goto label_117114;
            case 0x117140u: goto label_117140;
            case 0x117168u: goto label_117168;
            case 0x117180u: goto label_117180;
            case 0x11719Cu: goto label_11719c;
            case 0x1171B4u: goto label_1171b4;
            case 0x1171C8u: goto label_1171c8;
            case 0x1171CCu: goto label_1171cc;
            case 0x117208u: goto label_117208;
            case 0x11720Cu: goto label_11720c;
            case 0x117220u: goto label_117220;
            case 0x117270u: goto label_117270;
            case 0x1172F8u: goto label_1172f8;
            case 0x117314u: goto label_117314;
            case 0x117334u: goto label_117334;
            case 0x117358u: goto label_117358;
            case 0x117374u: goto label_117374;
            case 0x11738Cu: goto label_11738c;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F4u: goto label_1173f4;
            case 0x117408u: goto label_117408;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1173A4u; }
            if (ctx->pc != 0x1173A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1173A4u;
    // 0x1173a4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1173a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1173a8: 0x8e320044  lw          $s2, 0x44($s1)
    ctx->pc = 0x1173a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1173ac: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x1173acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1173b0: 0xe6370028  swc1        $f23, 0x28($s1)
    ctx->pc = 0x1173b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1173b4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1173b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1173b8: 0x1253000c  beq         $s2, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1173B8u;
    {
        const bool branch_taken_0x1173b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x1173BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1173B8u;
            // 0x1173bc: 0xe6360010  swc1        $f22, 0x10($s1) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173b8) {
            ctx->pc = 0x1173ECu;
            goto label_1173ec;
        }
    }
    ctx->pc = 0x1173C0u;
    // 0x1173c0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1173c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1173c4: 0x0  nop
    ctx->pc = 0x1173c4u;
    // NOP
label_1173c8:
    // 0x1173c8: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x1173c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1173cc: 0x8c50005c  lw          $s0, 0x5C($v0)
    ctx->pc = 0x1173ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1173d0: 0xc04015e  jal         func_100578
    ctx->pc = 0x1173D0u;
    SET_GPR_U32(ctx, 31, 0x1173D8u);
    ctx->pc = 0x1173D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1173D0u;
            // 0x1173d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173D8u; }
        if (ctx->pc != 0x1173D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173D8u; }
        if (ctx->pc != 0x1173D8u) { return; }
    }
    ctx->pc = 0x1173D8u;
    // 0x1173d8: 0xc040622  jal         func_101888
    ctx->pc = 0x1173D8u;
    SET_GPR_U32(ctx, 31, 0x1173E0u);
    ctx->pc = 0x1173DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1173D8u;
            // 0x1173dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101888u;
    if (runtime->hasFunction(0x101888u)) {
        auto targetFn = runtime->lookupFunction(0x101888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173E0u; }
        if (ctx->pc != 0x1173E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101888_0x101888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173E0u; }
        if (ctx->pc != 0x1173E0u) { return; }
    }
    ctx->pc = 0x1173E0u;
    // 0x1173e0: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1173e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1173e4: 0x5653fff8  bnel        $s2, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1173E4u;
    {
        const bool branch_taken_0x1173e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x1173e4) {
            ctx->pc = 0x1173E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1173E4u;
            // 0x1173e8: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1173C8u;
            runtime->cooperativeGuestYield();
            goto label_1173c8;
        }
    }
    ctx->pc = 0x1173ECu;
label_1173ec:
    // 0x1173ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1173ECu;
    {
        const bool branch_taken_0x1173ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1173ECu;
            // 0x1173f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173ec) {
            ctx->pc = 0x117408u;
            goto label_117408;
        }
    }
    ctx->pc = 0x1173F4u;
label_1173f4:
    // 0x1173f4: 0x4600b832  c.eq.s      $f23, $f0
    ctx->pc = 0x1173f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1173f8: 0x0  nop
    ctx->pc = 0x1173f8u;
    // NOP
    // 0x1173fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1173FCu;
    {
        const bool branch_taken_0x1173fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x117400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1173FCu;
            // 0x117400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173fc) {
            ctx->pc = 0x117408u;
            goto label_117408;
        }
    }
    ctx->pc = 0x117404u;
    // 0x117404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117408:
    // 0x117408: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x117408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11740c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11740cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x117410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117414: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x117414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11741c: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x11741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x117420: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x117420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x117424: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x117424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x117428: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x117428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11742c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x117430: 0x3e00008  jr          $ra
    ctx->pc = 0x117430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117430u;
            // 0x117434: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116F4Cu: goto label_116f4c;
            case 0x116F84u: goto label_116f84;
            case 0x116FD4u: goto label_116fd4;
            case 0x117000u: goto label_117000;
            case 0x11704Cu: goto label_11704c;
            case 0x117054u: goto label_117054;
            case 0x11706Cu: goto label_11706c;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170CCu: goto label_1170cc;
            case 0x117114u: goto label_117114;
            case 0x117140u: goto label_117140;
            case 0x117168u: goto label_117168;
            case 0x117180u: goto label_117180;
            case 0x11719Cu: goto label_11719c;
            case 0x1171B4u: goto label_1171b4;
            case 0x1171C8u: goto label_1171c8;
            case 0x1171CCu: goto label_1171cc;
            case 0x117208u: goto label_117208;
            case 0x11720Cu: goto label_11720c;
            case 0x117220u: goto label_117220;
            case 0x117270u: goto label_117270;
            case 0x1172F8u: goto label_1172f8;
            case 0x117314u: goto label_117314;
            case 0x117334u: goto label_117334;
            case 0x117358u: goto label_117358;
            case 0x117374u: goto label_117374;
            case 0x11738Cu: goto label_11738c;
            case 0x1173C8u: goto label_1173c8;
            case 0x1173ECu: goto label_1173ec;
            case 0x1173F4u: goto label_1173f4;
            case 0x117408u: goto label_117408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117438u;
}
