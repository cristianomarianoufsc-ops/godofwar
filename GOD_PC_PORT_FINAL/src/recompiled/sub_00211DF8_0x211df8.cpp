#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211DF8
// Address: 0x211df8 - 0x212900
void sub_00211DF8_0x211df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211DF8_0x211df8");
#endif

    ctx->pc = 0x211df8u;

    // 0x211df8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x211df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x211dfc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x211dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x211e00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x211e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x211e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e08: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x211e08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x211e0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x211e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x211e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x211e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211e18: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x211e18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x211e1c: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x211e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x211e20: 0xc040314  jal         func_100C50
    ctx->pc = 0x211E20u;
    SET_GPR_U32(ctx, 31, 0x211E28u);
    ctx->pc = 0x211E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211E20u;
            // 0x211e24: 0x8e110190  lw          $s1, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100C50u;
    if (runtime->hasFunction(0x100C50u)) {
        auto targetFn = runtime->lookupFunction(0x100C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211E28u; }
        if (ctx->pc != 0x211E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100C50_0x100c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211E28u; }
        if (ctx->pc != 0x211E28u) { return; }
    }
    ctx->pc = 0x211E28u;
    // 0x211e28: 0x8e05026c  lw          $a1, 0x26C($s0)
    ctx->pc = 0x211e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x211e2c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x211e2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x211e30: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x211e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x211e34: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x211E34u;
    {
        const bool branch_taken_0x211e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211E34u;
            // 0x211e38: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e34) {
            ctx->pc = 0x211E68u;
            goto label_211e68;
        }
    }
    ctx->pc = 0x211E3Cu;
    // 0x211e3c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x211e3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211e40: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x211e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x211e44: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x211e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x211e48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x211e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211e4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211e50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x211e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211e54: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x211e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x211e58: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x211e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x211e5c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x211e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x211e60: 0x40f809  jalr        $v0
    ctx->pc = 0x211E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211E68u);
        ctx->pc = 0x211E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211E60u;
            // 0x211e64: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x211E68u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211E68u: goto label_211e68;
            case 0x211E78u: goto label_211e78;
            case 0x211EF0u: goto label_211ef0;
            case 0x211F28u: goto label_211f28;
            case 0x211F30u: goto label_211f30;
            case 0x211F68u: goto label_211f68;
            case 0x211FA8u: goto label_211fa8;
            case 0x211FC8u: goto label_211fc8;
            case 0x211FCCu: goto label_211fcc;
            case 0x211FD0u: goto label_211fd0;
            case 0x212008u: goto label_212008;
            case 0x21204Cu: goto label_21204c;
            case 0x212068u: goto label_212068;
            case 0x21206Cu: goto label_21206c;
            case 0x212094u: goto label_212094;
            case 0x2120BCu: goto label_2120bc;
            case 0x2120FCu: goto label_2120fc;
            case 0x212124u: goto label_212124;
            case 0x21214Cu: goto label_21214c;
            case 0x212168u: goto label_212168;
            case 0x212178u: goto label_212178;
            case 0x2121B0u: goto label_2121b0;
            case 0x2121C0u: goto label_2121c0;
            case 0x2121F0u: goto label_2121f0;
            case 0x212204u: goto label_212204;
            case 0x21220Cu: goto label_21220c;
            case 0x212240u: goto label_212240;
            case 0x212270u: goto label_212270;
            case 0x21228Cu: goto label_21228c;
            case 0x2122A4u: goto label_2122a4;
            case 0x2122F8u: goto label_2122f8;
            case 0x2122FCu: goto label_2122fc;
            case 0x212300u: goto label_212300;
            case 0x21233Cu: goto label_21233c;
            case 0x212358u: goto label_212358;
            case 0x212368u: goto label_212368;
            case 0x21239Cu: goto label_21239c;
            case 0x2123B8u: goto label_2123b8;
            case 0x2123E0u: goto label_2123e0;
            case 0x212408u: goto label_212408;
            case 0x212438u: goto label_212438;
            case 0x212488u: goto label_212488;
            case 0x21248Cu: goto label_21248c;
            case 0x2124D0u: goto label_2124d0;
            case 0x2124D4u: goto label_2124d4;
            case 0x212508u: goto label_212508;
            case 0x21250Cu: goto label_21250c;
            case 0x212540u: goto label_212540;
            case 0x212544u: goto label_212544;
            case 0x212578u: goto label_212578;
            case 0x21257Cu: goto label_21257c;
            case 0x2125BCu: goto label_2125bc;
            case 0x2125CCu: goto label_2125cc;
            case 0x2125D8u: goto label_2125d8;
            case 0x2125E4u: goto label_2125e4;
            case 0x212618u: goto label_212618;
            case 0x212624u: goto label_212624;
            case 0x212628u: goto label_212628;
            case 0x21263Cu: goto label_21263c;
            case 0x212640u: goto label_212640;
            case 0x21265Cu: goto label_21265c;
            case 0x2126C4u: goto label_2126c4;
            case 0x2126D4u: goto label_2126d4;
            case 0x212708u: goto label_212708;
            case 0x21270Cu: goto label_21270c;
            case 0x212738u: goto label_212738;
            case 0x21273Cu: goto label_21273c;
            case 0x2127F4u: goto label_2127f4;
            case 0x212818u: goto label_212818;
            case 0x21287Cu: goto label_21287c;
            case 0x2128ACu: goto label_2128ac;
            case 0x2128DCu: goto label_2128dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x211E68u; }
            if (ctx->pc != 0x211E68u) { return; }
        }
        }
    }
    ctx->pc = 0x211E68u;
label_211e68:
    // 0x211e68: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x211E68u;
    {
        const bool branch_taken_0x211e68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211E68u;
            // 0x211e6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e68) {
            ctx->pc = 0x211E78u;
            goto label_211e78;
        }
    }
    ctx->pc = 0x211E70u;
    // 0x211e70: 0x164200bd  bne         $s2, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x211E70u;
    {
        const bool branch_taken_0x211e70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x211E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211E70u;
            // 0x211e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e70) {
            ctx->pc = 0x212168u;
            goto label_212168;
        }
    }
    ctx->pc = 0x211E78u;
label_211e78:
    // 0x211e78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x211e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211e7c: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x211e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x211e80: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x211e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x211e84: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x211E84u;
    {
        const bool branch_taken_0x211e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211E84u;
            // 0x211e88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e84) {
            ctx->pc = 0x21204Cu;
            goto label_21204c;
        }
    }
    ctx->pc = 0x211E8Cu;
    // 0x211e8c: 0x12220036  beq         $s1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x211E8Cu;
    {
        const bool branch_taken_0x211e8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x211e8c) {
            ctx->pc = 0x211F68u;
            goto label_211f68;
        }
    }
    ctx->pc = 0x211E94u;
    // 0x211e94: 0xc6010274  lwc1        $f1, 0x274($s0)
    ctx->pc = 0x211e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211e98: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x211e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211e9c: 0x0  nop
    ctx->pc = 0x211e9cu;
    // NOP
    // 0x211ea0: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x211EA0u;
    {
        const bool branch_taken_0x211ea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211EA0u;
            // 0x211ea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ea0) {
            ctx->pc = 0x211F30u;
            goto label_211f30;
        }
    }
    ctx->pc = 0x211EA8u;
    // 0x211ea8: 0xc084310  jal         func_210C40
    ctx->pc = 0x211EA8u;
    SET_GPR_U32(ctx, 31, 0x211EB0u);
    ctx->pc = 0x211EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211EA8u;
            // 0x211eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210C40u;
    if (runtime->hasFunction(0x210C40u)) {
        auto targetFn = runtime->lookupFunction(0x210C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211EB0u; }
        if (ctx->pc != 0x211EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210C40_0x210c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211EB0u; }
        if (ctx->pc != 0x211EB0u) { return; }
    }
    ctx->pc = 0x211EB0u;
    // 0x211eb0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x211eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x211eb4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x211eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211eb8: 0x0  nop
    ctx->pc = 0x211eb8u;
    // NOP
    // 0x211ebc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x211EBCu;
    {
        const bool branch_taken_0x211ebc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211EBCu;
            // 0x211ec0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ebc) {
            ctx->pc = 0x211EF0u;
            goto label_211ef0;
        }
    }
    ctx->pc = 0x211EC4u;
    // 0x211ec4: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x211ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x211ec8: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x211ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211ecc: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x211eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211ed0: 0xc6000268  lwc1        $f0, 0x268($s0)
    ctx->pc = 0x211ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211ed4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x211ed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x211ed8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x211ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x211edc: 0xe6000268  swc1        $f0, 0x268($s0)
    ctx->pc = 0x211edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x211ee0: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x211ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211ee4: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x211ee4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x211ee8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x211EE8u;
    {
        const bool branch_taken_0x211ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211EE8u;
            // 0x211eec: 0xe6000268  swc1        $f0, 0x268($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ee8) {
            ctx->pc = 0x211FCCu;
            goto label_211fcc;
        }
    }
    ctx->pc = 0x211EF0u;
label_211ef0:
    // 0x211ef0: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x211ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211ef4: 0x0  nop
    ctx->pc = 0x211ef4u;
    // NOP
    // 0x211ef8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x211EF8u;
    {
        const bool branch_taken_0x211ef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211EF8u;
            // 0x211efc: 0xc442c658  lwc1        $f2, -0x39A8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ef8) {
            ctx->pc = 0x211F28u;
            goto label_211f28;
        }
    }
    ctx->pc = 0x211F00u;
    // 0x211f00: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x211f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x211f04: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x211f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211f08: 0xc6000268  lwc1        $f0, 0x268($s0)
    ctx->pc = 0x211f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f0c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x211f0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x211f10: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x211f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211f14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x211f14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x211f18: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x211f18u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x211f1c: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x211f1cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x211f20: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x211F20u;
    {
        const bool branch_taken_0x211f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211F20u;
            // 0x211f24: 0xe6000268  swc1        $f0, 0x268($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f20) {
            ctx->pc = 0x211FCCu;
            goto label_211fcc;
        }
    }
    ctx->pc = 0x211F28u;
label_211f28:
    // 0x211f28: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x211F28u;
    {
        const bool branch_taken_0x211f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211F28u;
            // 0x211f2c: 0xe6030268  swc1        $f3, 0x268($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f28) {
            ctx->pc = 0x211FCCu;
            goto label_211fcc;
        }
    }
    ctx->pc = 0x211F30u;
label_211f30:
    // 0x211f30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x211f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x211f34: 0x56420026  bnel        $s2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x211F34u;
    {
        const bool branch_taken_0x211f34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x211f34) {
            ctx->pc = 0x211F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211F34u;
            // 0x211f38: 0xc6010274  lwc1        $f1, 0x274($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x211FD0u;
            goto label_211fd0;
        }
    }
    ctx->pc = 0x211F3Cu;
    // 0x211f3c: 0x8e03018c  lw          $v1, 0x18C($s0)
    ctx->pc = 0x211f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x211f40: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x211f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x211f44: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x211f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x211f48: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x211f48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x211f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211f50: 0x8c6202d8  lw          $v0, 0x2D8($v1)
    ctx->pc = 0x211f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 728)));
    // 0x211f54: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x211f54u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211f58: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x211f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x211f5c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x211f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x211f60: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x211F60u;
    {
        const bool branch_taken_0x211f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211F60u;
            // 0x211f64: 0xac6202d8  sw          $v0, 0x2D8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f60) {
            ctx->pc = 0x211FCCu;
            goto label_211fcc;
        }
    }
    ctx->pc = 0x211F68u;
label_211f68:
    // 0x211f68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x211f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211f6c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x211f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211f70: 0x0  nop
    ctx->pc = 0x211f70u;
    // NOP
    // 0x211f74: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x211F74u;
    {
        const bool branch_taken_0x211f74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211F74u;
            // 0x211f78: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f74) {
            ctx->pc = 0x211FA8u;
            goto label_211fa8;
        }
    }
    ctx->pc = 0x211F7Cu;
    // 0x211f7c: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x211f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x211f80: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x211f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211f84: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x211f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f88: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x211f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211f8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x211f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x211f90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x211f90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211f94: 0xe6010268  swc1        $f1, 0x268($s0)
    ctx->pc = 0x211f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x211f98: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x211f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x211f9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x211fa0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x211FA0u;
    {
        const bool branch_taken_0x211fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211FA0u;
            // 0x211fa4: 0x46000868  max.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fa0) {
            ctx->pc = 0x211FC8u;
            goto label_211fc8;
        }
    }
    ctx->pc = 0x211FA8u;
label_211fa8:
    // 0x211fa8: 0xc6000270  lwc1        $f0, 0x270($s0)
    ctx->pc = 0x211fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211fac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x211facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211fb0: 0x0  nop
    ctx->pc = 0x211fb0u;
    // NOP
    // 0x211fb4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x211FB4u;
    {
        const bool branch_taken_0x211fb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211fb4) {
            ctx->pc = 0x211FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211FB4u;
            // 0x211fb8: 0xe6010268  swc1        $f1, 0x268($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x211FCCu;
            goto label_211fcc;
        }
    }
    ctx->pc = 0x211FBCu;
    // 0x211fbc: 0x96020298  lhu         $v0, 0x298($s0)
    ctx->pc = 0x211fbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x211fc0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x211fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x211fc4: 0xa6020298  sh          $v0, 0x298($s0)
    ctx->pc = 0x211fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 664), (uint16_t)GPR_U32(ctx, 2));
label_211fc8:
    // 0x211fc8: 0xe6010268  swc1        $f1, 0x268($s0)
    ctx->pc = 0x211fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
label_211fcc:
    // 0x211fcc: 0xc6010274  lwc1        $f1, 0x274($s0)
    ctx->pc = 0x211fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_211fd0:
    // 0x211fd0: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x211fd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211fd4: 0x0  nop
    ctx->pc = 0x211fd4u;
    // NOP
    // 0x211fd8: 0x450001d7  bc1f        . + 4 + (0x1D7 << 2)
    ctx->pc = 0x211FD8u;
    {
        const bool branch_taken_0x211fd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211FD8u;
            // 0x211fdc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fd8) {
            ctx->pc = 0x212738u;
            goto label_212738;
        }
    }
    ctx->pc = 0x211FE0u;
    // 0x211fe0: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211FE0u;
    {
        const bool branch_taken_0x211fe0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x211FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211FE0u;
            // 0x211fe4: 0x9202029a  lbu         $v0, 0x29A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fe0) {
            ctx->pc = 0x212008u;
            goto label_212008;
        }
    }
    ctx->pc = 0x211FE8u;
    // 0x211fe8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x211fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x211fec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x211FECu;
    {
        const bool branch_taken_0x211fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211fec) {
            ctx->pc = 0x211FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211FECu;
            // 0x211ff0: 0x9202029a  lbu         $v0, 0x29A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x212008u;
            goto label_212008;
        }
    }
    ctx->pc = 0x211FF4u;
    // 0x211ff4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x211ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x211ff8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x211ff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x211ffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212000: 0x100001cd  b           . + 4 + (0x1CD << 2)
    ctx->pc = 0x212000u;
    {
        const bool branch_taken_0x212000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212000u;
            // 0x212004: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212000) {
            ctx->pc = 0x212738u;
            goto label_212738;
        }
    }
    ctx->pc = 0x212008u;
label_212008:
    // 0x212008: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x212008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x21200c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x21200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x212010: 0xa202029a  sb          $v0, 0x29A($s0)
    ctx->pc = 0x212010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
    // 0x212014: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x212014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x212018: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x212018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x21201c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21201cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x212020: 0x104001c5  beqz        $v0, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x212020u;
    {
        const bool branch_taken_0x212020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212020u;
            // 0x212024: 0x2404efff  addiu       $a0, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212020) {
            ctx->pc = 0x212738u;
            goto label_212738;
        }
    }
    ctx->pc = 0x212028u;
    // 0x212028: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x212028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21202c: 0x96020298  lhu         $v0, 0x298($s0)
    ctx->pc = 0x21202cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x212030: 0x8ca300f4  lw          $v1, 0xF4($a1)
    ctx->pc = 0x212030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x212034: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x212034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x212038: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x212038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x21203c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21203cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x212040: 0xa6020298  sh          $v0, 0x298($s0)
    ctx->pc = 0x212040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 664), (uint16_t)GPR_U32(ctx, 2));
    // 0x212044: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x212044u;
    {
        const bool branch_taken_0x212044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212044u;
            // 0x212048: 0xaca300f4  sw          $v1, 0xF4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212044) {
            ctx->pc = 0x212738u;
            goto label_212738;
        }
    }
    ctx->pc = 0x21204Cu;
label_21204c:
    // 0x21204c: 0x9202029a  lbu         $v0, 0x29A($s0)
    ctx->pc = 0x21204cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
    // 0x212050: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x212050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x212054: 0x504001b9  beql        $v0, $zero, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x212054u;
    {
        const bool branch_taken_0x212054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212054) {
            ctx->pc = 0x212058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212054u;
            // 0x212058: 0xc6000268  lwc1        $f0, 0x268($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x21273Cu;
            goto label_21273c;
        }
    }
    ctx->pc = 0x21205Cu;
    // 0x21205c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21205Cu;
    {
        const bool branch_taken_0x21205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21205Cu;
            // 0x212060: 0x8e030260  lw          $v1, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21205c) {
            ctx->pc = 0x212094u;
            goto label_212094;
        }
    }
    ctx->pc = 0x212064u;
    // 0x212064: 0x0  nop
    ctx->pc = 0x212064u;
    // NOP
label_212068:
    // 0x212068: 0x9202029a  lbu         $v0, 0x29A($s0)
    ctx->pc = 0x212068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
label_21206c:
    // 0x21206c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x21206cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x212070: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x212070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212074: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x212074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x212078: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x212078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x21207c: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x21207cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x212080: 0xa202029a  sb          $v0, 0x29A($s0)
    ctx->pc = 0x212080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
    // 0x212084: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x212084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x212088: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x212088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21208c: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x21208Cu;
    {
        const bool branch_taken_0x21208c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21208Cu;
            // 0x212090: 0xac8200f4  sw          $v0, 0xF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21208c) {
            ctx->pc = 0x212738u;
            goto label_212738;
        }
    }
    ctx->pc = 0x212094u;
label_212094:
    // 0x212094: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x212094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x212098: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x212098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x21209c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21209Cu;
    {
        const bool branch_taken_0x21209c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21209c) {
            ctx->pc = 0x2120BCu;
            goto label_2120bc;
        }
    }
    ctx->pc = 0x2120A4u;
    // 0x2120a4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2120a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2120a8: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x2120a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x2120ac: 0xc04015e  jal         func_100578
    ctx->pc = 0x2120ACu;
    SET_GPR_U32(ctx, 31, 0x2120B4u);
    ctx->pc = 0x2120B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2120ACu;
            // 0x2120b0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120B4u; }
        if (ctx->pc != 0x2120B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120B4u; }
        if (ctx->pc != 0x2120B4u) { return; }
    }
    ctx->pc = 0x2120B4u;
    // 0x2120b4: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2120B4u;
    {
        const bool branch_taken_0x2120b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2120B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2120B4u;
            // 0x2120b8: 0x9202029a  lbu         $v0, 0x29A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2120b4) {
            ctx->pc = 0x21206Cu;
            runtime->cooperativeGuestYield();
            goto label_21206c;
        }
    }
    ctx->pc = 0x2120BCu;
label_2120bc:
    // 0x2120bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2120bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2120c0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2120c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2120c4: 0x0  nop
    ctx->pc = 0x2120c4u;
    // NOP
    // 0x2120c8: 0x4500ffe7  bc1f        . + 4 + (-0x19 << 2)
    ctx->pc = 0x2120C8u;
    {
        const bool branch_taken_0x2120c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2120CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2120C8u;
            // 0x2120cc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2120c8) {
            ctx->pc = 0x212068u;
            runtime->cooperativeGuestYield();
            goto label_212068;
        }
    }
    ctx->pc = 0x2120D0u;
    // 0x2120d0: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x2120d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2120d4: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x2120d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2120d8: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x2120d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2120dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2120dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2120e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2120e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2120e4: 0xe6010268  swc1        $f1, 0x268($s0)
    ctx->pc = 0x2120e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x2120e8: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2120e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2120ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2120ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2120f0: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x2120f0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2120f4: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x2120F4u;
    {
        const bool branch_taken_0x2120f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2120F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2120F4u;
            // 0x2120f8: 0xe6010268  swc1        $f1, 0x268($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2120f4) {
            ctx->pc = 0x212738u;
            goto label_212738;
        }
    }
    ctx->pc = 0x2120FCu;
label_2120fc:
    // 0x2120fc: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x2120fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x212100: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x212100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x212104: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x212104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212108: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x212108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21210c: 0xc6000268  lwc1        $f0, 0x268($s0)
    ctx->pc = 0x21210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212110: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x212110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x212114: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x212114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x212118: 0xe6000268  swc1        $f0, 0x268($s0)
    ctx->pc = 0x212118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x21211c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x21211Cu;
    {
        const bool branch_taken_0x21211c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21211Cu;
            // 0x212120: 0xc461003c  lwc1        $f1, 0x3C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21211c) {
            ctx->pc = 0x2122F8u;
            goto label_2122f8;
        }
    }
    ctx->pc = 0x212124u;
label_212124:
    // 0x212124: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x212124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x212128: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x212128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21212c: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x21212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212130: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x212130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212134: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x212134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212138: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x212138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21213c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x21213cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x212140: 0xe6010268  swc1        $f1, 0x268($s0)
    ctx->pc = 0x212140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x212144: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x212144u;
    {
        const bool branch_taken_0x212144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212144u;
            // 0x212148: 0xc460003c  lwc1        $f0, 0x3C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212144) {
            ctx->pc = 0x2121B0u;
            goto label_2121b0;
        }
    }
    ctx->pc = 0x21214Cu;
label_21214c:
    // 0x21214c: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x21214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x212150: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x212150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212154: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x212154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212158: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x212158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21215c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x21215cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x212160: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x212160u;
    {
        const bool branch_taken_0x212160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212160u;
            // 0x212164: 0x46001828  max.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212160) {
            ctx->pc = 0x2122FCu;
            goto label_2122fc;
        }
    }
    ctx->pc = 0x212168u;
label_212168:
    // 0x212168: 0x56420093  bnel        $s2, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x212168u;
    {
        const bool branch_taken_0x212168 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x212168) {
            ctx->pc = 0x21216Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212168u;
            // 0x21216c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2123B8u;
            goto label_2123b8;
        }
    }
    ctx->pc = 0x212170u;
    // 0x212170: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x212170u;
    {
        const bool branch_taken_0x212170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212170u;
            // 0x212174: 0x8e020260  lw          $v0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212170) {
            ctx->pc = 0x212240u;
            goto label_212240;
        }
    }
    ctx->pc = 0x212178u;
label_212178:
    // 0x212178: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x212178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x21217c: 0xc4407d94  lwc1        $f0, 0x7D94($v0)
    ctx->pc = 0x21217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212180: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x212180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212184: 0x0  nop
    ctx->pc = 0x212184u;
    // NOP
    // 0x212188: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x212188u;
    {
        const bool branch_taken_0x212188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21218Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212188u;
            // 0x21218c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212188) {
            ctx->pc = 0x21220Cu;
            goto label_21220c;
        }
    }
    ctx->pc = 0x212190u;
    // 0x212190: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x212190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x212194: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x212194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212198: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x212198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21219c: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x21219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2121a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2121a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2121a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2121a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2121a8: 0xe6010268  swc1        $f1, 0x268($s0)
    ctx->pc = 0x2121a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x2121ac: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x2121acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2121b0:
    // 0x2121b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2121b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2121b4: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x2121b4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2121b8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2121B8u;
    {
        const bool branch_taken_0x2121b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2121BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2121B8u;
            // 0x2121bc: 0xe6010268  swc1        $f1, 0x268($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121b8) {
            ctx->pc = 0x212300u;
            goto label_212300;
        }
    }
    ctx->pc = 0x2121C0u;
label_2121c0:
    // 0x2121c0: 0x9203029a  lbu         $v1, 0x29A($s0)
    ctx->pc = 0x2121c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
    // 0x2121c4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2121c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2121c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2121C8u;
    {
        const bool branch_taken_0x2121c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2121CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2121C8u;
            // 0x2121cc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121c8) {
            ctx->pc = 0x21220Cu;
            goto label_21220c;
        }
    }
    ctx->pc = 0x2121D0u;
    // 0x2121d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2121D0u;
    {
        const bool branch_taken_0x2121d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2121D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2121D0u;
            // 0x2121d4: 0xc6000278  lwc1        $f0, 0x278($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121d0) {
            ctx->pc = 0x2121F0u;
            goto label_2121f0;
        }
    }
    ctx->pc = 0x2121D8u;
    // 0x2121d8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2121d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2121dc: 0x0  nop
    ctx->pc = 0x2121dcu;
    // NOP
    // 0x2121e0: 0x4501ffc6  bc1t        . + 4 + (-0x3A << 2)
    ctx->pc = 0x2121E0u;
    {
        const bool branch_taken_0x2121e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2121E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2121E0u;
            // 0x2121e4: 0x306200f7  andi        $v0, $v1, 0xF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)247);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121e0) {
            ctx->pc = 0x2120FCu;
            runtime->cooperativeGuestYield();
            goto label_2120fc;
        }
    }
    ctx->pc = 0x2121E8u;
    // 0x2121e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2121E8u;
    {
        const bool branch_taken_0x2121e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2121ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2121E8u;
            // 0x2121ec: 0xae000268  sw          $zero, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121e8) {
            ctx->pc = 0x212204u;
            goto label_212204;
        }
    }
    ctx->pc = 0x2121F0u;
label_2121f0:
    // 0x2121f0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2121f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2121f4: 0x0  nop
    ctx->pc = 0x2121f4u;
    // NOP
    // 0x2121f8: 0x4501ffca  bc1t        . + 4 + (-0x36 << 2)
    ctx->pc = 0x2121F8u;
    {
        const bool branch_taken_0x2121f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2121FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2121F8u;
            // 0x2121fc: 0x306200f7  andi        $v0, $v1, 0xF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)247);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121f8) {
            ctx->pc = 0x212124u;
            runtime->cooperativeGuestYield();
            goto label_212124;
        }
    }
    ctx->pc = 0x212200u;
    // 0x212200: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x212200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
label_212204:
    // 0x212204: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x212204u;
    {
        const bool branch_taken_0x212204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212204u;
            // 0x212208: 0xa202029a  sb          $v0, 0x29A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212204) {
            ctx->pc = 0x212300u;
            goto label_212300;
        }
    }
    ctx->pc = 0x21220Cu;
label_21220c:
    // 0x21220c: 0xc6020268  lwc1        $f2, 0x268($s0)
    ctx->pc = 0x21220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212210: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x212210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x212214: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x212214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212218: 0x0  nop
    ctx->pc = 0x212218u;
    // NOP
    // 0x21221c: 0x4501ffcb  bc1t        . + 4 + (-0x35 << 2)
    ctx->pc = 0x21221Cu;
    {
        const bool branch_taken_0x21221c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x212220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21221Cu;
            // 0x212220: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21221c) {
            ctx->pc = 0x21214Cu;
            runtime->cooperativeGuestYield();
            goto label_21214c;
        }
    }
    ctx->pc = 0x212224u;
    // 0x212224: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x212224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x212228: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x212228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21222c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x21222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212230: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x212230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x212234: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x212234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x212238: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x212238u;
    {
        const bool branch_taken_0x212238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212238u;
            // 0x21223c: 0x46001829  min.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = std::min(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212238) {
            ctx->pc = 0x2122FCu;
            goto label_2122fc;
        }
    }
    ctx->pc = 0x212240u;
label_212240:
    // 0x212240: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x212240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x212244: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x212244u;
    {
        const bool branch_taken_0x212244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212244) {
            ctx->pc = 0x212248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212244u;
            // 0x212248: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2122A4u;
            goto label_2122a4;
        }
    }
    ctx->pc = 0x21224Cu;
    // 0x21224c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21224cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212250: 0x4601a832  c.eq.s      $f21, $f1
    ctx->pc = 0x212250u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212254: 0x0  nop
    ctx->pc = 0x212254u;
    // NOP
    // 0x212258: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x212258u;
    {
        const bool branch_taken_0x212258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212258) {
            ctx->pc = 0x21225Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212258u;
            // 0x21225c: 0xc6010274  lwc1        $f1, 0x274($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x212270u;
            goto label_212270;
        }
    }
    ctx->pc = 0x212260u;
    // 0x212260: 0xc6000270  lwc1        $f0, 0x270($s0)
    ctx->pc = 0x212260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x212264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212268: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x212268u;
    {
        const bool branch_taken_0x212268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212268) {
            ctx->pc = 0x21228Cu;
            goto label_21228c;
        }
    }
    ctx->pc = 0x212270u;
label_212270:
    // 0x212270: 0x4601a832  c.eq.s      $f21, $f1
    ctx->pc = 0x212270u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212274: 0x0  nop
    ctx->pc = 0x212274u;
    // NOP
    // 0x212278: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x212278u;
    {
        const bool branch_taken_0x212278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212278u;
            // 0x21227c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212278) {
            ctx->pc = 0x2122A4u;
            goto label_2122a4;
        }
    }
    ctx->pc = 0x212280u;
    // 0x212280: 0xc6000270  lwc1        $f0, 0x270($s0)
    ctx->pc = 0x212280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212284: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x212284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212288: 0x0  nop
    ctx->pc = 0x212288u;
    // NOP
label_21228c:
    // 0x21228c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x21228Cu;
    {
        const bool branch_taken_0x21228c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21228Cu;
            // 0x212290: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21228c) {
            ctx->pc = 0x2122A4u;
            goto label_2122a4;
        }
    }
    ctx->pc = 0x212294u;
    // 0x212294: 0x96020298  lhu         $v0, 0x298($s0)
    ctx->pc = 0x212294u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x212298: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x212298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x21229c: 0xa6020298  sh          $v0, 0x298($s0)
    ctx->pc = 0x21229cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 664), (uint16_t)GPR_U32(ctx, 2));
    // 0x2122a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2122a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2122a4:
    // 0x2122a4: 0x1222ffc6  beq         $s1, $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2122A4u;
    {
        const bool branch_taken_0x2122a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2122A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2122A4u;
            // 0x2122a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122a4) {
            ctx->pc = 0x2121C0u;
            runtime->cooperativeGuestYield();
            goto label_2121c0;
        }
    }
    ctx->pc = 0x2122ACu;
    // 0x2122ac: 0x9202029a  lbu         $v0, 0x29A($s0)
    ctx->pc = 0x2122acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
    // 0x2122b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2122b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122b4: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x2122b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x2122b8: 0xc084310  jal         func_210C40
    ctx->pc = 0x2122B8u;
    SET_GPR_U32(ctx, 31, 0x2122C0u);
    ctx->pc = 0x2122BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2122B8u;
            // 0x2122bc: 0xa202029a  sb          $v0, 0x29A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210C40u;
    if (runtime->hasFunction(0x210C40u)) {
        auto targetFn = runtime->lookupFunction(0x210C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122C0u; }
        if (ctx->pc != 0x2122C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210C40_0x210c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122C0u; }
        if (ctx->pc != 0x2122C0u) { return; }
    }
    ctx->pc = 0x2122C0u;
    // 0x2122c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2122c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2122c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2122c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2122c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2122c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2122cc: 0x0  nop
    ctx->pc = 0x2122ccu;
    // NOP
    // 0x2122d0: 0x4500ffa9  bc1f        . + 4 + (-0x57 << 2)
    ctx->pc = 0x2122D0u;
    {
        const bool branch_taken_0x2122d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2122D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2122D0u;
            // 0x2122d4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122d0) {
            ctx->pc = 0x212178u;
            runtime->cooperativeGuestYield();
            goto label_212178;
        }
    }
    ctx->pc = 0x2122D8u;
    // 0x2122d8: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x2122d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x2122dc: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x2122dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2122e0: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x2122e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2122e4: 0xc6000268  lwc1        $f0, 0x268($s0)
    ctx->pc = 0x2122e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2122e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2122e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2122ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2122ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2122f0: 0xe6000268  swc1        $f0, 0x268($s0)
    ctx->pc = 0x2122f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x2122f4: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x2122f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2122f8:
    // 0x2122f8: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x2122f8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_2122fc:
    // 0x2122fc: 0xe6000268  swc1        $f0, 0x268($s0)
    ctx->pc = 0x2122fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
label_212300:
    // 0x212300: 0xc0402ae  jal         func_100AB8
    ctx->pc = 0x212300u;
    SET_GPR_U32(ctx, 31, 0x212308u);
    ctx->pc = 0x212304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212300u;
            // 0x212304: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AB8u;
    if (runtime->hasFunction(0x100AB8u)) {
        auto targetFn = runtime->lookupFunction(0x100AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212308u; }
        if (ctx->pc != 0x212308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100AB8_0x100ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212308u; }
        if (ctx->pc != 0x212308u) { return; }
    }
    ctx->pc = 0x212308u;
    // 0x212308: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x212308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x21230c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21230cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x212310: 0x5040010a  beql        $v0, $zero, . + 4 + (0x10A << 2)
    ctx->pc = 0x212310u;
    {
        const bool branch_taken_0x212310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212310) {
            ctx->pc = 0x212314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212310u;
            // 0x212314: 0xc6000268  lwc1        $f0, 0x268($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x21273Cu;
            goto label_21273c;
        }
    }
    ctx->pc = 0x212318u;
    // 0x212318: 0xc6000274  lwc1        $f0, 0x274($s0)
    ctx->pc = 0x212318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21231c: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x21231cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212320: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x212320u;
    {
        const bool branch_taken_0x212320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212320) {
            ctx->pc = 0x21233Cu;
            goto label_21233c;
        }
    }
    ctx->pc = 0x212328u;
    // 0x212328: 0xc6000268  lwc1        $f0, 0x268($s0)
    ctx->pc = 0x212328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21232c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21232cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212330: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x212330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212334: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x212334u;
    {
        const bool branch_taken_0x212334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212334) {
            ctx->pc = 0x212358u;
            goto label_212358;
        }
    }
    ctx->pc = 0x21233Cu;
label_21233c:
    // 0x21233c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21233cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212340: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x212340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212344: 0x0  nop
    ctx->pc = 0x212344u;
    // NOP
    // 0x212348: 0x450000fc  bc1f        . + 4 + (0xFC << 2)
    ctx->pc = 0x212348u;
    {
        const bool branch_taken_0x212348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212348u;
            // 0x21234c: 0xc6000268  lwc1        $f0, 0x268($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212348) {
            ctx->pc = 0x21273Cu;
            goto label_21273c;
        }
    }
    ctx->pc = 0x212350u;
    // 0x212350: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x212350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212354: 0x0  nop
    ctx->pc = 0x212354u;
    // NOP
label_212358:
    // 0x212358: 0x450300f7  bc1tl       . + 4 + (0xF7 << 2)
    ctx->pc = 0x212358u;
    {
        const bool branch_taken_0x212358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x212358) {
            ctx->pc = 0x21235Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212358u;
            // 0x21235c: 0xe6010268  swc1        $f1, 0x268($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x212738u;
            goto label_212738;
        }
    }
    ctx->pc = 0x212360u;
    // 0x212360: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x212360u;
    {
        const bool branch_taken_0x212360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212360u;
            // 0x212364: 0xc6000268  lwc1        $f0, 0x268($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212360) {
            ctx->pc = 0x21273Cu;
            goto label_21273c;
        }
    }
    ctx->pc = 0x212368u;
label_212368:
    // 0x212368: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x212368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21236c: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x21236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212370: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x212370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212374: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x212374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x212378: 0x96020298  lhu         $v0, 0x298($s0)
    ctx->pc = 0x212378u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x21237c: 0x3042faff  andi        $v0, $v0, 0xFAFF
    ctx->pc = 0x21237cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64255);
    // 0x212380: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x212380u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x212384: 0xa6020298  sh          $v0, 0x298($s0)
    ctx->pc = 0x212384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 664), (uint16_t)GPR_U32(ctx, 2));
    // 0x212388: 0xe6010268  swc1        $f1, 0x268($s0)
    ctx->pc = 0x212388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x21238c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x21238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212390: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x212390u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x212394: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x212394u;
    {
        const bool branch_taken_0x212394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212394u;
            // 0x212398: 0x46000868  max.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212394) {
            ctx->pc = 0x212488u;
            goto label_212488;
        }
    }
    ctx->pc = 0x21239Cu;
label_21239c:
    // 0x21239c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x21239cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2123a0: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x2123a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2123a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2123a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2123a8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2123a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2123ac: 0x46001828  max.s       $f0, $f3, $f0
    ctx->pc = 0x2123acu;
    ctx->f[0] = std::max(ctx->f[3], ctx->f[0]);
    // 0x2123b0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2123B0u;
    {
        const bool branch_taken_0x2123b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2123B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2123B0u;
            // 0x2123b4: 0xe6000268  swc1        $f0, 0x268($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123b0) {
            ctx->pc = 0x21248Cu;
            goto label_21248c;
        }
    }
    ctx->pc = 0x2123B8u;
label_2123b8:
    // 0x2123b8: 0x564200e0  bnel        $s2, $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2123B8u;
    {
        const bool branch_taken_0x2123b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2123b8) {
            ctx->pc = 0x2123BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2123B8u;
            // 0x2123bc: 0xc6000268  lwc1        $f0, 0x268($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x21273Cu;
            goto label_21273c;
        }
    }
    ctx->pc = 0x2123C0u;
    // 0x2123c0: 0xc6000274  lwc1        $f0, 0x274($s0)
    ctx->pc = 0x2123c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2123c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2123c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2123c8: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x2123c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[20] = ctx->f[21] / ctx->f[0];
    // 0x2123cc: 0x122200a3  beq         $s1, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2123CCu;
    {
        const bool branch_taken_0x2123cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2123D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2123CCu;
            // 0x2123d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123cc) {
            ctx->pc = 0x21265Cu;
            goto label_21265c;
        }
    }
    ctx->pc = 0x2123D4u;
    // 0x2123d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2123D4u;
    {
        const bool branch_taken_0x2123d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2123d4) {
            ctx->pc = 0x212438u;
            goto label_212438;
        }
    }
    ctx->pc = 0x2123DCu;
    // 0x2123dc: 0x0  nop
    ctx->pc = 0x2123dcu;
    // NOP
label_2123e0:
    // 0x2123e0: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x2123e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x2123e4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x2123e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x2123e8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2123e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2123ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2123ECu;
    {
        const bool branch_taken_0x2123ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2123F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2123ECu;
            // 0x2123f0: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123ec) {
            ctx->pc = 0x212408u;
            goto label_212408;
        }
    }
    ctx->pc = 0x2123F4u;
    // 0x2123f4: 0xc4407d94  lwc1        $f0, 0x7D94($v0)
    ctx->pc = 0x2123f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2123f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2123f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2123fc: 0x0  nop
    ctx->pc = 0x2123fcu;
    // NOP
    // 0x212400: 0x4501ffd9  bc1t        . + 4 + (-0x27 << 2)
    ctx->pc = 0x212400u;
    {
        const bool branch_taken_0x212400 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x212404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212400u;
            // 0x212404: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212400) {
            ctx->pc = 0x212368u;
            runtime->cooperativeGuestYield();
            goto label_212368;
        }
    }
    ctx->pc = 0x212408u;
label_212408:
    // 0x212408: 0xc6020268  lwc1        $f2, 0x268($s0)
    ctx->pc = 0x212408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21240c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x21240cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212410: 0x0  nop
    ctx->pc = 0x212410u;
    // NOP
    // 0x212414: 0x4501ffe1  bc1t        . + 4 + (-0x1F << 2)
    ctx->pc = 0x212414u;
    {
        const bool branch_taken_0x212414 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x212418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212414u;
            // 0x212418: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212414) {
            ctx->pc = 0x21239Cu;
            runtime->cooperativeGuestYield();
            goto label_21239c;
        }
    }
    ctx->pc = 0x21241Cu;
    // 0x21241c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x21241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212420: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x212420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212424: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x212424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x212428: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x212428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21242c: 0x46001829  min.s       $f0, $f3, $f0
    ctx->pc = 0x21242cu;
    ctx->f[0] = std::min(ctx->f[3], ctx->f[0]);
    // 0x212430: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x212430u;
    {
        const bool branch_taken_0x212430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212430u;
            // 0x212434: 0xe6000268  swc1        $f0, 0x268($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212430) {
            ctx->pc = 0x21248Cu;
            goto label_21248c;
        }
    }
    ctx->pc = 0x212438u;
label_212438:
    // 0x212438: 0xc084310  jal         func_210C40
    ctx->pc = 0x212438u;
    SET_GPR_U32(ctx, 31, 0x212440u);
    ctx->pc = 0x21243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212438u;
            // 0x21243c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210C40u;
    if (runtime->hasFunction(0x210C40u)) {
        auto targetFn = runtime->lookupFunction(0x210C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212440u; }
        if (ctx->pc != 0x212440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210C40_0x210c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212440u; }
        if (ctx->pc != 0x212440u) { return; }
    }
    ctx->pc = 0x212440u;
    // 0x212440: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x212440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x212444: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x212444u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x212448: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x212448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21244c: 0x0  nop
    ctx->pc = 0x21244cu;
    // NOP
    // 0x212450: 0x4500ffe3  bc1f        . + 4 + (-0x1D << 2)
    ctx->pc = 0x212450u;
    {
        const bool branch_taken_0x212450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212450u;
            // 0x212454: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212450) {
            ctx->pc = 0x2123E0u;
            runtime->cooperativeGuestYield();
            goto label_2123e0;
        }
    }
    ctx->pc = 0x212458u;
    // 0x212458: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x212458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x21245c: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x21245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212460: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x212460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212464: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x212464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212468: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x212468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21246c: 0x96020298  lhu         $v0, 0x298($s0)
    ctx->pc = 0x21246cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x212470: 0x3042faff  andi        $v0, $v0, 0xFAFF
    ctx->pc = 0x212470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64255);
    // 0x212474: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x212474u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x212478: 0xa6020298  sh          $v0, 0x298($s0)
    ctx->pc = 0x212478u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 664), (uint16_t)GPR_U32(ctx, 2));
    // 0x21247c: 0xe6010268  swc1        $f1, 0x268($s0)
    ctx->pc = 0x21247cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x212480: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x212480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212484: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x212484u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
label_212488:
    // 0x212488: 0xe6010268  swc1        $f1, 0x268($s0)
    ctx->pc = 0x212488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
label_21248c:
    // 0x21248c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x21248cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x212490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212494: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x212494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x212498: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x212498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x21249c: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x21249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2124a0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2124a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2124a4: 0x0  nop
    ctx->pc = 0x2124a4u;
    // NOP
    // 0x2124a8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2124A8u;
    {
        const bool branch_taken_0x2124a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2124a8) {
            ctx->pc = 0x2124ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2124A8u;
            // 0x2124ac: 0xae000278  sw          $zero, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2124D0u;
            goto label_2124d0;
        }
    }
    ctx->pc = 0x2124B0u;
    // 0x2124b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2124b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2124b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2124b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2124b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2124b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2124bc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2124bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2124c0: 0x0  nop
    ctx->pc = 0x2124c0u;
    // NOP
    // 0x2124c4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2124C4u;
    {
        const bool branch_taken_0x2124c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2124c4) {
            ctx->pc = 0x2124C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2124C4u;
            // 0x2124c8: 0x8e020260  lw          $v0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2124D4u;
            goto label_2124d4;
        }
    }
    ctx->pc = 0x2124CCu;
    // 0x2124cc: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x2124ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_2124d0:
    // 0x2124d0: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x2124d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_2124d4:
    // 0x2124d4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2124d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2124d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2124d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2124dc: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2124dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2124e0: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2124e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2124e4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2124e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2124e8: 0x0  nop
    ctx->pc = 0x2124e8u;
    // NOP
    // 0x2124ec: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2124ECu;
    {
        const bool branch_taken_0x2124ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2124ec) {
            ctx->pc = 0x2124F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2124ECu;
            // 0x2124f0: 0x8e020260  lw          $v0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21250Cu;
            goto label_21250c;
        }
    }
    ctx->pc = 0x2124F4u;
    // 0x2124f4: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x2124f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2124f8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2124f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2124fc: 0x0  nop
    ctx->pc = 0x2124fcu;
    // NOP
    // 0x212500: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x212500u;
    {
        const bool branch_taken_0x212500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x212500) {
            ctx->pc = 0x212504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212500u;
            // 0x212504: 0xe6020278  swc1        $f2, 0x278($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x212508u;
            goto label_212508;
        }
    }
    ctx->pc = 0x212508u;
label_212508:
    // 0x212508: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x212508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_21250c:
    // 0x21250c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21250cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x212510: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x212510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212514: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x212514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212518: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x212518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21251c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x21251cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212520: 0x0  nop
    ctx->pc = 0x212520u;
    // NOP
    // 0x212524: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x212524u;
    {
        const bool branch_taken_0x212524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212524) {
            ctx->pc = 0x212528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212524u;
            // 0x212528: 0x8e020260  lw          $v0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x212544u;
            goto label_212544;
        }
    }
    ctx->pc = 0x21252Cu;
    // 0x21252c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x21252cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x212530: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x212530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212534: 0x0  nop
    ctx->pc = 0x212534u;
    // NOP
    // 0x212538: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x212538u;
    {
        const bool branch_taken_0x212538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x212538) {
            ctx->pc = 0x21253Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212538u;
            // 0x21253c: 0xe6020278  swc1        $f2, 0x278($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x212540u;
            goto label_212540;
        }
    }
    ctx->pc = 0x212540u;
label_212540:
    // 0x212540: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x212540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_212544:
    // 0x212544: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x212544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x212548: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x212548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21254c: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x21254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212550: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x212550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x212554: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x212554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212558: 0x0  nop
    ctx->pc = 0x212558u;
    // NOP
    // 0x21255c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x21255Cu;
    {
        const bool branch_taken_0x21255c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21255c) {
            ctx->pc = 0x212560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21255Cu;
            // 0x212560: 0xc6010278  lwc1        $f1, 0x278($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x21257Cu;
            goto label_21257c;
        }
    }
    ctx->pc = 0x212564u;
    // 0x212564: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x212564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x212568: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x212568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21256c: 0x0  nop
    ctx->pc = 0x21256cu;
    // NOP
    // 0x212570: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x212570u;
    {
        const bool branch_taken_0x212570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x212570) {
            ctx->pc = 0x212574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212570u;
            // 0x212574: 0xe6020278  swc1        $f2, 0x278($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x212578u;
            goto label_212578;
        }
    }
    ctx->pc = 0x212578u;
label_212578:
    // 0x212578: 0xc6010278  lwc1        $f1, 0x278($s0)
    ctx->pc = 0x212578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21257c:
    // 0x21257c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x21257cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x212580: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212584: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x212584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212588: 0x0  nop
    ctx->pc = 0x212588u;
    // NOP
    // 0x21258c: 0x4502005f  bc1fl       . + 4 + (0x5F << 2)
    ctx->pc = 0x21258Cu;
    {
        const bool branch_taken_0x21258c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21258c) {
            ctx->pc = 0x212590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21258Cu;
            // 0x212590: 0xc6010268  lwc1        $f1, 0x268($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x21270Cu;
            goto label_21270c;
        }
    }
    ctx->pc = 0x212594u;
    // 0x212594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212598: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x212598u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21259c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x21259Cu;
    {
        const bool branch_taken_0x21259c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21259c) {
            ctx->pc = 0x2125BCu;
            goto label_2125bc;
        }
    }
    ctx->pc = 0x2125A4u;
    // 0x2125a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2125a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2125a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2125a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2125ac: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2125acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2125b0: 0x0  nop
    ctx->pc = 0x2125b0u;
    // NOP
    // 0x2125b4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2125B4u;
    {
        const bool branch_taken_0x2125b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2125b4) {
            ctx->pc = 0x2125B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2125B4u;
            // 0x2125b8: 0x9202029a  lbu         $v0, 0x29A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2125CCu;
            goto label_2125cc;
        }
    }
    ctx->pc = 0x2125BCu;
label_2125bc:
    // 0x2125bc: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2125bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2125c0: 0x0  nop
    ctx->pc = 0x2125c0u;
    // NOP
    // 0x2125c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2125C4u;
    {
        const bool branch_taken_0x2125c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2125C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2125C4u;
            // 0x2125c8: 0x9202029a  lbu         $v0, 0x29A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125c4) {
            ctx->pc = 0x2125D8u;
            goto label_2125d8;
        }
    }
    ctx->pc = 0x2125CCu;
label_2125cc:
    // 0x2125cc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2125ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2125d0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2125D0u;
    {
        const bool branch_taken_0x2125d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2125D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2125D0u;
            // 0x2125d4: 0xa202029a  sb          $v0, 0x29A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125d0) {
            ctx->pc = 0x212708u;
            goto label_212708;
        }
    }
    ctx->pc = 0x2125D8u;
label_2125d8:
    // 0x2125d8: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x2125d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x2125dc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2125DCu;
    {
        const bool branch_taken_0x2125dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2125E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2125DCu;
            // 0x2125e0: 0xa202029a  sb          $v0, 0x29A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125dc) {
            ctx->pc = 0x212708u;
            goto label_212708;
        }
    }
    ctx->pc = 0x2125E4u;
label_2125e4:
    // 0x2125e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2125e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2125e8: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x2125e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2125ec: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x2125ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2125f0: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x2125f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2125f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2125f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2125f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2125f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2125fc: 0xe6010268  swc1        $f1, 0x268($s0)
    ctx->pc = 0x2125fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x212600: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x212600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212604: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x212604u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x212608: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x212608u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x21260c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x21260Cu;
    {
        const bool branch_taken_0x21260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21260Cu;
            // 0x212610: 0xe6010268  swc1        $f1, 0x268($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21260c) {
            ctx->pc = 0x212708u;
            goto label_212708;
        }
    }
    ctx->pc = 0x212614u;
    // 0x212614: 0x0  nop
    ctx->pc = 0x212614u;
    // NOP
label_212618:
    // 0x212618: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x212618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x21261c: 0x5040fff1  beql        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x21261Cu;
    {
        const bool branch_taken_0x21261c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21261c) {
            ctx->pc = 0x212620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21261Cu;
            // 0x212620: 0x8e030260  lw          $v1, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2125E4u;
            runtime->cooperativeGuestYield();
            goto label_2125e4;
        }
    }
    ctx->pc = 0x212624u;
label_212624:
    // 0x212624: 0x96030298  lhu         $v1, 0x298($s0)
    ctx->pc = 0x212624u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
label_212628:
    // 0x212628: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x212628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x21262c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21262Cu;
    {
        const bool branch_taken_0x21262c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21262Cu;
            // 0x212630: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21262c) {
            ctx->pc = 0x21263Cu;
            goto label_21263c;
        }
    }
    ctx->pc = 0x212634u;
    // 0x212634: 0x34620700  ori         $v0, $v1, 0x700
    ctx->pc = 0x212634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x212638: 0xa6020298  sh          $v0, 0x298($s0)
    ctx->pc = 0x212638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 664), (uint16_t)GPR_U32(ctx, 2));
label_21263c:
    // 0x21263c: 0xc6000274  lwc1        $f0, 0x274($s0)
    ctx->pc = 0x21263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_212640:
    // 0x212640: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x212640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x212644: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x212644u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x212648: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x212648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x21264c: 0xc04015e  jal         func_100578
    ctx->pc = 0x21264Cu;
    SET_GPR_U32(ctx, 31, 0x212654u);
    ctx->pc = 0x212650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21264Cu;
            // 0x212650: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212654u; }
        if (ctx->pc != 0x212654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212654u; }
        if (ctx->pc != 0x212654u) { return; }
    }
    ctx->pc = 0x212654u;
    // 0x212654: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x212654u;
    {
        const bool branch_taken_0x212654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212654u;
            // 0x212658: 0xc6010268  lwc1        $f1, 0x268($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212654) {
            ctx->pc = 0x21270Cu;
            goto label_21270c;
        }
    }
    ctx->pc = 0x21265Cu;
label_21265c:
    // 0x21265c: 0xc6020278  lwc1        $f2, 0x278($s0)
    ctx->pc = 0x21265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212660: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x212660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x212664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212668: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x212668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21266c: 0x0  nop
    ctx->pc = 0x21266cu;
    // NOP
    // 0x212670: 0x4502fff3  bc1fl       . + 4 + (-0xD << 2)
    ctx->pc = 0x212670u;
    {
        const bool branch_taken_0x212670 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212670) {
            ctx->pc = 0x212674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212670u;
            // 0x212674: 0xc6000274  lwc1        $f0, 0x274($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x212640u;
            runtime->cooperativeGuestYield();
            goto label_212640;
        }
    }
    ctx->pc = 0x212678u;
    // 0x212678: 0x46141001  sub.s       $f0, $f2, $f20
    ctx->pc = 0x212678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x21267c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x21267cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x212680: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x212680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x212684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212688: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x212688u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x21268c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21268cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212690: 0x0  nop
    ctx->pc = 0x212690u;
    // NOP
    // 0x212694: 0x4502ffe4  bc1fl       . + 4 + (-0x1C << 2)
    ctx->pc = 0x212694u;
    {
        const bool branch_taken_0x212694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212694) {
            ctx->pc = 0x212698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212694u;
            // 0x212698: 0x96030298  lhu         $v1, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x212628u;
            runtime->cooperativeGuestYield();
            goto label_212628;
        }
    }
    ctx->pc = 0x21269Cu;
    // 0x21269c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21269cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2126a0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2126a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2126a4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2126A4u;
    {
        const bool branch_taken_0x2126a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2126a4) {
            ctx->pc = 0x2126C4u;
            goto label_2126c4;
        }
    }
    ctx->pc = 0x2126ACu;
    // 0x2126ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2126acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2126b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2126b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2126b4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2126b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2126b8: 0x0  nop
    ctx->pc = 0x2126b8u;
    // NOP
    // 0x2126bc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2126BCu;
    {
        const bool branch_taken_0x2126bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2126bc) {
            ctx->pc = 0x2126C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2126BCu;
            // 0x2126c0: 0x9202029a  lbu         $v0, 0x29A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2126D4u;
            goto label_2126d4;
        }
    }
    ctx->pc = 0x2126C4u;
label_2126c4:
    // 0x2126c4: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x2126c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2126c8: 0x0  nop
    ctx->pc = 0x2126c8u;
    // NOP
    // 0x2126cc: 0x4500ffd2  bc1f        . + 4 + (-0x2E << 2)
    ctx->pc = 0x2126CCu;
    {
        const bool branch_taken_0x2126cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2126D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2126CCu;
            // 0x2126d0: 0x9202029a  lbu         $v0, 0x29A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126cc) {
            ctx->pc = 0x212618u;
            runtime->cooperativeGuestYield();
            goto label_212618;
        }
    }
    ctx->pc = 0x2126D4u;
label_2126d4:
    // 0x2126d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2126d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2126d8: 0x1040ffd2  beqz        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2126D8u;
    {
        const bool branch_taken_0x2126d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2126DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2126D8u;
            // 0x2126dc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126d8) {
            ctx->pc = 0x212624u;
            runtime->cooperativeGuestYield();
            goto label_212624;
        }
    }
    ctx->pc = 0x2126E0u;
    // 0x2126e0: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x2126e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x2126e4: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x2126e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2126e8: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x2126e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2126ec: 0xc6000268  lwc1        $f0, 0x268($s0)
    ctx->pc = 0x2126ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2126f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2126f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2126f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2126f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2126f8: 0xe6000268  swc1        $f0, 0x268($s0)
    ctx->pc = 0x2126f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x2126fc: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x2126fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212700: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x212700u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x212704: 0xe6000268  swc1        $f0, 0x268($s0)
    ctx->pc = 0x212704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
label_212708:
    // 0x212708: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x212708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21270c:
    // 0x21270c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21270cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212710: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x212710u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212714: 0x0  nop
    ctx->pc = 0x212714u;
    // NOP
    // 0x212718: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x212718u;
    {
        const bool branch_taken_0x212718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212718) {
            ctx->pc = 0x21271Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212718u;
            // 0x21271c: 0xc6000268  lwc1        $f0, 0x268($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x21273Cu;
            goto label_21273c;
        }
    }
    ctx->pc = 0x212720u;
    // 0x212720: 0x96030298  lhu         $v1, 0x298($s0)
    ctx->pc = 0x212720u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x212724: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x212724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x212728: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x212728u;
    {
        const bool branch_taken_0x212728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212728) {
            ctx->pc = 0x21272Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212728u;
            // 0x21272c: 0xc6000268  lwc1        $f0, 0x268($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x21273Cu;
            goto label_21273c;
        }
    }
    ctx->pc = 0x212730u;
    // 0x212730: 0x34620180  ori         $v0, $v1, 0x180
    ctx->pc = 0x212730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
    // 0x212734: 0xa6020298  sh          $v0, 0x298($s0)
    ctx->pc = 0x212734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 664), (uint16_t)GPR_U32(ctx, 2));
label_212738:
    // 0x212738: 0xc6000268  lwc1        $f0, 0x268($s0)
    ctx->pc = 0x212738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21273c:
    // 0x21273c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21273cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212744: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x212744u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x212748: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x212748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21274c: 0x70451b89  pcpyld      $v1, $v0, $a1
    ctx->pc = 0x21274cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x212750: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x212750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x212754: 0x24070000  addiu       $a3, $zero, 0x0
    ctx->pc = 0x212754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x212758: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x212758u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x21275c: 0x8e05026c  lw          $a1, 0x26C($s0)
    ctx->pc = 0x21275cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x212760: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x212760u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x212764: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x212764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x212768: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x212768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x21276c: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x21276cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x212770: 0xc60d0274  lwc1        $f13, 0x274($s0)
    ctx->pc = 0x212770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x212774: 0xc084352  jal         func_210D48
    ctx->pc = 0x212774u;
    SET_GPR_U32(ctx, 31, 0x21277Cu);
    ctx->pc = 0x212778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212774u;
            // 0x212778: 0xc60e0268  lwc1        $f14, 0x268($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x210D48u;
    if (runtime->hasFunction(0x210D48u)) {
        auto targetFn = runtime->lookupFunction(0x210D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21277Cu; }
        if (ctx->pc != 0x21277Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_210d48_0x210e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21277Cu; }
        if (ctx->pc != 0x21277Cu) { return; }
    }
    ctx->pc = 0x21277Cu;
    // 0x21277c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x21277cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x212780: 0xc6000268  lwc1        $f0, 0x268($s0)
    ctx->pc = 0x212780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212784: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x212784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212788: 0x0  nop
    ctx->pc = 0x212788u;
    // NOP
    // 0x21278c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x21278Cu;
    {
        const bool branch_taken_0x21278c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21278Cu;
            // 0x212790: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21278c) {
            ctx->pc = 0x212818u;
            goto label_212818;
        }
    }
    ctx->pc = 0x212794u;
    // 0x212794: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x212794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x212798: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x212798u;
    {
        const bool branch_taken_0x212798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212798) {
            ctx->pc = 0x21279Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212798u;
            // 0x21279c: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21287Cu;
            goto label_21287c;
        }
    }
    ctx->pc = 0x2127A0u;
    // 0x2127a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2127a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2127a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2127a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2127a8: 0xc6000274  lwc1        $f0, 0x274($s0)
    ctx->pc = 0x2127a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2127ac: 0xc6020270  lwc1        $f2, 0x270($s0)
    ctx->pc = 0x2127acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2127b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2127b0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2127b4: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x2127b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x2127b8: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2127b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2127bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2127bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2127c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2127c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2127c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2127c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2127c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2127c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2127cc: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2127CCu;
    {
        const bool branch_taken_0x2127cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2127cc) {
            ctx->pc = 0x2127F4u;
            goto label_2127f4;
        }
    }
    ctx->pc = 0x2127D4u;
    // 0x2127d4: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x2127d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2127d8: 0x0  nop
    ctx->pc = 0x2127d8u;
    // NOP
    // 0x2127dc: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
    ctx->pc = 0x2127DCu;
    {
        const bool branch_taken_0x2127dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2127dc) {
            ctx->pc = 0x2127E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2127DCu;
            // 0x2127e0: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21287Cu;
            goto label_21287c;
        }
    }
    ctx->pc = 0x2127E4u;
    // 0x2127e4: 0x4603a832  c.eq.s      $f21, $f3
    ctx->pc = 0x2127e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2127e8: 0x0  nop
    ctx->pc = 0x2127e8u;
    // NOP
    // 0x2127ec: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
    ctx->pc = 0x2127ECu;
    {
        const bool branch_taken_0x2127ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2127ec) {
            ctx->pc = 0x2127F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2127ECu;
            // 0x2127f0: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21287Cu;
            goto label_21287c;
        }
    }
    ctx->pc = 0x2127F4u;
label_2127f4:
    // 0x2127f4: 0xc05e996  jal         func_17A658
    ctx->pc = 0x2127F4u;
    SET_GPR_U32(ctx, 31, 0x2127FCu);
    ctx->pc = 0x2127F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2127F4u;
            // 0x2127f8: 0x248400a8  addiu       $a0, $a0, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2127FCu; }
        if (ctx->pc != 0x2127FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2127FCu; }
        if (ctx->pc != 0x2127FCu) { return; }
    }
    ctx->pc = 0x2127FCu;
    // 0x2127fc: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2127FCu;
    {
        const bool branch_taken_0x2127fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2127fc) {
            ctx->pc = 0x212800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2127FCu;
            // 0x212800: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21287Cu;
            goto label_21287c;
        }
    }
    ctx->pc = 0x212804u;
    // 0x212804: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x212804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x212808: 0xc05c294  jal         func_170A50
    ctx->pc = 0x212808u;
    SET_GPR_U32(ctx, 31, 0x212810u);
    ctx->pc = 0x21280Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212808u;
            // 0x21280c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212810u; }
        if (ctx->pc != 0x212810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212810u; }
        if (ctx->pc != 0x212810u) { return; }
    }
    ctx->pc = 0x212810u;
    // 0x212810: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x212810u;
    {
        const bool branch_taken_0x212810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212810u;
            // 0x212814: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212810) {
            ctx->pc = 0x21287Cu;
            goto label_21287c;
        }
    }
    ctx->pc = 0x212818u;
label_212818:
    // 0x212818: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x212818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x21281c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x21281Cu;
    {
        const bool branch_taken_0x21281c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21281c) {
            ctx->pc = 0x212820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21281Cu;
            // 0x212820: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21287Cu;
            goto label_21287c;
        }
    }
    ctx->pc = 0x212824u;
    // 0x212824: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x212824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212828: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x212828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x21282c: 0xc6000274  lwc1        $f0, 0x274($s0)
    ctx->pc = 0x21282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212830: 0xc6010270  lwc1        $f1, 0x270($s0)
    ctx->pc = 0x212830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212834: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x212834u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x212838: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x212838u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x21283c: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x21283cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
    // 0x212840: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x212840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x212844: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x212844u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x212848: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x212848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21284c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x21284cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212850: 0x0  nop
    ctx->pc = 0x212850u;
    // NOP
    // 0x212854: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x212854u;
    {
        const bool branch_taken_0x212854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x212854) {
            ctx->pc = 0x212858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212854u;
            // 0x212858: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21287Cu;
            goto label_21287c;
        }
    }
    ctx->pc = 0x21285Cu;
    // 0x21285c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x21285Cu;
    SET_GPR_U32(ctx, 31, 0x212864u);
    ctx->pc = 0x212860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21285Cu;
            // 0x212860: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212864u; }
        if (ctx->pc != 0x212864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212864u; }
        if (ctx->pc != 0x212864u) { return; }
    }
    ctx->pc = 0x212864u;
    // 0x212864: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x212864u;
    {
        const bool branch_taken_0x212864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212864) {
            ctx->pc = 0x212868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212864u;
            // 0x212868: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21287Cu;
            goto label_21287c;
        }
    }
    ctx->pc = 0x21286Cu;
    // 0x21286c: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x21286cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x212870: 0xc05c294  jal         func_170A50
    ctx->pc = 0x212870u;
    SET_GPR_U32(ctx, 31, 0x212878u);
    ctx->pc = 0x212874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212870u;
            // 0x212874: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212878u; }
        if (ctx->pc != 0x212878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212878u; }
        if (ctx->pc != 0x212878u) { return; }
    }
    ctx->pc = 0x212878u;
    // 0x212878: 0x96020298  lhu         $v0, 0x298($s0)
    ctx->pc = 0x212878u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
label_21287c:
    // 0x21287c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x21287cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x212880: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x212880u;
    {
        const bool branch_taken_0x212880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212880) {
            ctx->pc = 0x212884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212880u;
            // 0x212884: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2128ACu;
            goto label_2128ac;
        }
    }
    ctx->pc = 0x212888u;
    // 0x212888: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x212888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x21288c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x21288Cu;
    SET_GPR_U32(ctx, 31, 0x212894u);
    ctx->pc = 0x212890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21288Cu;
            // 0x212890: 0x248400d8  addiu       $a0, $a0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212894u; }
        if (ctx->pc != 0x212894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212894u; }
        if (ctx->pc != 0x212894u) { return; }
    }
    ctx->pc = 0x212894u;
    // 0x212894: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x212894u;
    {
        const bool branch_taken_0x212894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212894) {
            ctx->pc = 0x212898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x212894u;
            // 0x212898: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2128ACu;
            goto label_2128ac;
        }
    }
    ctx->pc = 0x21289Cu;
    // 0x21289c: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x21289cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x2128a0: 0xc05c294  jal         func_170A50
    ctx->pc = 0x2128A0u;
    SET_GPR_U32(ctx, 31, 0x2128A8u);
    ctx->pc = 0x2128A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2128A0u;
            // 0x2128a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128A8u; }
        if (ctx->pc != 0x2128A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128A8u; }
        if (ctx->pc != 0x2128A8u) { return; }
    }
    ctx->pc = 0x2128A8u;
    // 0x2128a8: 0x96020298  lhu         $v0, 0x298($s0)
    ctx->pc = 0x2128a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
label_2128ac:
    // 0x2128ac: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2128acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2128b0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2128B0u;
    {
        const bool branch_taken_0x2128b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2128b0) {
            ctx->pc = 0x2128B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2128B0u;
            // 0x2128b4: 0xe6150270  swc1        $f21, 0x270($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2128DCu;
            goto label_2128dc;
        }
    }
    ctx->pc = 0x2128B8u;
    // 0x2128b8: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x2128b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x2128bc: 0xc05e996  jal         func_17A658
    ctx->pc = 0x2128BCu;
    SET_GPR_U32(ctx, 31, 0x2128C4u);
    ctx->pc = 0x2128C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2128BCu;
            // 0x2128c0: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128C4u; }
        if (ctx->pc != 0x2128C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128C4u; }
        if (ctx->pc != 0x2128C4u) { return; }
    }
    ctx->pc = 0x2128C4u;
    // 0x2128c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2128C4u;
    {
        const bool branch_taken_0x2128c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2128c4) {
            ctx->pc = 0x2128C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2128C4u;
            // 0x2128c8: 0xe6150270  swc1        $f21, 0x270($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2128DCu;
            goto label_2128dc;
        }
    }
    ctx->pc = 0x2128CCu;
    // 0x2128cc: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x2128ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x2128d0: 0xc05c294  jal         func_170A50
    ctx->pc = 0x2128D0u;
    SET_GPR_U32(ctx, 31, 0x2128D8u);
    ctx->pc = 0x2128D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2128D0u;
            // 0x2128d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128D8u; }
        if (ctx->pc != 0x2128D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128D8u; }
        if (ctx->pc != 0x2128D8u) { return; }
    }
    ctx->pc = 0x2128D8u;
    // 0x2128d8: 0xe6150270  swc1        $f21, 0x270($s0)
    ctx->pc = 0x2128d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2128dc:
    // 0x2128dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2128dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2128e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2128e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2128e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2128e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2128e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2128e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2128ec: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2128ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2128f0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2128f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2128f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2128F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2128F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2128F4u;
            // 0x2128f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211E68u: goto label_211e68;
            case 0x211E78u: goto label_211e78;
            case 0x211EF0u: goto label_211ef0;
            case 0x211F28u: goto label_211f28;
            case 0x211F30u: goto label_211f30;
            case 0x211F68u: goto label_211f68;
            case 0x211FA8u: goto label_211fa8;
            case 0x211FC8u: goto label_211fc8;
            case 0x211FCCu: goto label_211fcc;
            case 0x211FD0u: goto label_211fd0;
            case 0x212008u: goto label_212008;
            case 0x21204Cu: goto label_21204c;
            case 0x212068u: goto label_212068;
            case 0x21206Cu: goto label_21206c;
            case 0x212094u: goto label_212094;
            case 0x2120BCu: goto label_2120bc;
            case 0x2120FCu: goto label_2120fc;
            case 0x212124u: goto label_212124;
            case 0x21214Cu: goto label_21214c;
            case 0x212168u: goto label_212168;
            case 0x212178u: goto label_212178;
            case 0x2121B0u: goto label_2121b0;
            case 0x2121C0u: goto label_2121c0;
            case 0x2121F0u: goto label_2121f0;
            case 0x212204u: goto label_212204;
            case 0x21220Cu: goto label_21220c;
            case 0x212240u: goto label_212240;
            case 0x212270u: goto label_212270;
            case 0x21228Cu: goto label_21228c;
            case 0x2122A4u: goto label_2122a4;
            case 0x2122F8u: goto label_2122f8;
            case 0x2122FCu: goto label_2122fc;
            case 0x212300u: goto label_212300;
            case 0x21233Cu: goto label_21233c;
            case 0x212358u: goto label_212358;
            case 0x212368u: goto label_212368;
            case 0x21239Cu: goto label_21239c;
            case 0x2123B8u: goto label_2123b8;
            case 0x2123E0u: goto label_2123e0;
            case 0x212408u: goto label_212408;
            case 0x212438u: goto label_212438;
            case 0x212488u: goto label_212488;
            case 0x21248Cu: goto label_21248c;
            case 0x2124D0u: goto label_2124d0;
            case 0x2124D4u: goto label_2124d4;
            case 0x212508u: goto label_212508;
            case 0x21250Cu: goto label_21250c;
            case 0x212540u: goto label_212540;
            case 0x212544u: goto label_212544;
            case 0x212578u: goto label_212578;
            case 0x21257Cu: goto label_21257c;
            case 0x2125BCu: goto label_2125bc;
            case 0x2125CCu: goto label_2125cc;
            case 0x2125D8u: goto label_2125d8;
            case 0x2125E4u: goto label_2125e4;
            case 0x212618u: goto label_212618;
            case 0x212624u: goto label_212624;
            case 0x212628u: goto label_212628;
            case 0x21263Cu: goto label_21263c;
            case 0x212640u: goto label_212640;
            case 0x21265Cu: goto label_21265c;
            case 0x2126C4u: goto label_2126c4;
            case 0x2126D4u: goto label_2126d4;
            case 0x212708u: goto label_212708;
            case 0x21270Cu: goto label_21270c;
            case 0x212738u: goto label_212738;
            case 0x21273Cu: goto label_21273c;
            case 0x2127F4u: goto label_2127f4;
            case 0x212818u: goto label_212818;
            case 0x21287Cu: goto label_21287c;
            case 0x2128ACu: goto label_2128ac;
            case 0x2128DCu: goto label_2128dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2128FCu;
    // 0x2128fc: 0x0  nop
    ctx->pc = 0x2128fcu;
    // NOP
}
