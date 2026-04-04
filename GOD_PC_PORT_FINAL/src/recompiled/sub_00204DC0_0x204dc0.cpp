#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00204DC0
// Address: 0x204dc0 - 0x205410
void sub_00204DC0_0x204dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204DC0_0x204dc0");
#endif

    ctx->pc = 0x204dc0u;

    // 0x204dc0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x204dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x204dc4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x204dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x204dc8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x204dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x204dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dd0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x204dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x204dd4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x204dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x204dd8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x204dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x204ddc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x204ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x204de0: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x204de0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x204de4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x204de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x204de8: 0x8c420174  lw          $v0, 0x174($v0)
    ctx->pc = 0x204de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x204dec: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204DECu;
    {
        const bool branch_taken_0x204dec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x204DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204DECu;
            // 0x204df0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204dec) {
            ctx->pc = 0x204E04u;
            goto label_204e04;
        }
    }
    ctx->pc = 0x204DF4u;
    // 0x204df4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x204df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x204df8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x204df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x204dfc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x204dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x204e00: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x204e00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204e04:
    // 0x204e04: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x204e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x204e08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x204E08u;
    {
        const bool branch_taken_0x204e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e08) {
            ctx->pc = 0x204E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204E08u;
            // 0x204e0c: 0xc602002c  lwc1        $f2, 0x2C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x204E1Cu;
            goto label_204e1c;
        }
    }
    ctx->pc = 0x204E10u;
    // 0x204e10: 0xc0811b6  jal         func_2046D8
    ctx->pc = 0x204E10u;
    SET_GPR_U32(ctx, 31, 0x204E18u);
    ctx->pc = 0x204E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204E10u;
            // 0x204e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2046D8u;
    if (runtime->hasFunction(0x2046D8u)) {
        auto targetFn = runtime->lookupFunction(0x2046D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204E18u; }
        if (ctx->pc != 0x204E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002046D8_0x2046d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204E18u; }
        if (ctx->pc != 0x204E18u) { return; }
    }
    ctx->pc = 0x204E18u;
    // 0x204e18: 0xc602002c  lwc1        $f2, 0x2C($s0)
    ctx->pc = 0x204e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_204e1c:
    // 0x204e1c: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x204e1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x204e20: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x204e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204e24: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x204e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x204e28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x204e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x204e2c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x204e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x204e30: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x204e30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x204e34: 0xc683c658  lwc1        $f3, -0x39A8($s4)
    ctx->pc = 0x204e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x204e38: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x204e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204e3c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x204e3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x204e40: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x204e40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x204e44: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x204e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x204e48: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x204e48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x204e4c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x204e4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204e50: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x204e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x204e54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x204E54u;
    {
        const bool branch_taken_0x204e54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x204E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E54u;
            // 0x204e58: 0xe602002c  swc1        $f2, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e54) {
            ctx->pc = 0x204E68u;
            goto label_204e68;
        }
    }
    ctx->pc = 0x204E5Cu;
    // 0x204e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x204e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x204e60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x204e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204e64: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x204e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_204e68:
    // 0x204e68: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x204e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x204e6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x204e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x204e70: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x204e70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x204e74: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x204e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x204e78: 0x40f809  jalr        $v0
    ctx->pc = 0x204E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204E80u);
        ctx->pc = 0x204E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E78u;
            // 0x204e7c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204E80u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204E04u: goto label_204e04;
            case 0x204E1Cu: goto label_204e1c;
            case 0x204E68u: goto label_204e68;
            case 0x204EACu: goto label_204eac;
            case 0x204EB0u: goto label_204eb0;
            case 0x204ED4u: goto label_204ed4;
            case 0x204EF4u: goto label_204ef4;
            case 0x204F18u: goto label_204f18;
            case 0x204F5Cu: goto label_204f5c;
            case 0x204F7Cu: goto label_204f7c;
            case 0x204F80u: goto label_204f80;
            case 0x204F98u: goto label_204f98;
            case 0x204F9Cu: goto label_204f9c;
            case 0x205010u: goto label_205010;
            case 0x205030u: goto label_205030;
            case 0x2050C0u: goto label_2050c0;
            case 0x205168u: goto label_205168;
            case 0x20519Cu: goto label_20519c;
            case 0x2051D0u: goto label_2051d0;
            case 0x205218u: goto label_205218;
            case 0x20522Cu: goto label_20522c;
            case 0x205234u: goto label_205234;
            case 0x205238u: goto label_205238;
            case 0x205260u: goto label_205260;
            case 0x205300u: goto label_205300;
            case 0x2053D0u: goto label_2053d0;
            case 0x2053D8u: goto label_2053d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204E80u; }
            if (ctx->pc != 0x204E80u) { return; }
        }
        }
    }
    ctx->pc = 0x204E80u;
    // 0x204e80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x204e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e84: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x204e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x204e88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204E88u;
    {
        const bool branch_taken_0x204e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E88u;
            // 0x204e8c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e88) {
            ctx->pc = 0x204EACu;
            goto label_204eac;
        }
    }
    ctx->pc = 0x204E90u;
    // 0x204e90: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x204e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x204e94: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x204e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x204e98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204E98u;
    {
        const bool branch_taken_0x204e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x204E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E98u;
            // 0x204e9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e98) {
            ctx->pc = 0x204EB0u;
            goto label_204eb0;
        }
    }
    ctx->pc = 0x204EA0u;
    // 0x204ea0: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x204ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x204ea4: 0xc081522  jal         func_205488
    ctx->pc = 0x204EA4u;
    SET_GPR_U32(ctx, 31, 0x204EACu);
    ctx->pc = 0x204EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204EA4u;
            // 0x204ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EACu; }
        if (ctx->pc != 0x204EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EACu; }
        if (ctx->pc != 0x204EACu) { return; }
    }
    ctx->pc = 0x204EACu;
label_204eac:
    // 0x204eac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x204eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204eb0:
    // 0x204eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204eb4: 0xc090d5c  jal         func_243570
    ctx->pc = 0x204EB4u;
    SET_GPR_U32(ctx, 31, 0x204EBCu);
    ctx->pc = 0x204EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204EB4u;
            // 0x204eb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EBCu; }
        if (ctx->pc != 0x204EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EBCu; }
        if (ctx->pc != 0x204EBCu) { return; }
    }
    ctx->pc = 0x204EBCu;
    // 0x204ebc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x204EBCu;
    {
        const bool branch_taken_0x204ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204ebc) {
            ctx->pc = 0x204EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204EBCu;
            // 0x204ec0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204ED4u;
            goto label_204ed4;
        }
    }
    ctx->pc = 0x204EC4u;
    // 0x204ec4: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x204EC4u;
    SET_GPR_U32(ctx, 31, 0x204ECCu);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204ECCu; }
        if (ctx->pc != 0x204ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204ECCu; }
        if (ctx->pc != 0x204ECCu) { return; }
    }
    ctx->pc = 0x204ECCu;
    // 0x204ecc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204ECCu;
    {
        const bool branch_taken_0x204ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204ecc) {
            ctx->pc = 0x204ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204ECCu;
            // 0x204ed0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204ED4u;
            goto label_204ed4;
        }
    }
    ctx->pc = 0x204ED4u;
label_204ed4:
    // 0x204ed4: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x204ED4u;
    {
        const bool branch_taken_0x204ed4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x204ed4) {
            ctx->pc = 0x204ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204ED4u;
            // 0x204ed8: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204EF4u;
            goto label_204ef4;
        }
    }
    ctx->pc = 0x204EDCu;
    // 0x204edc: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x204EDCu;
    {
        const bool branch_taken_0x204edc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x204edc) {
            ctx->pc = 0x204EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204EDCu;
            // 0x204ee0: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204EF4u;
            goto label_204ef4;
        }
    }
    ctx->pc = 0x204EE4u;
    // 0x204ee4: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x204ee4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x204ee8: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x204ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x204eec: 0xa2220016  sb          $v0, 0x16($s1)
    ctx->pc = 0x204eecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x204ef0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x204ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_204ef4:
    // 0x204ef4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x204EF4u;
    {
        const bool branch_taken_0x204ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204EF4u;
            // 0x204ef8: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ef4) {
            ctx->pc = 0x204F98u;
            goto label_204f98;
        }
    }
    ctx->pc = 0x204EFCu;
    // 0x204efc: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x204efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x204f00: 0x8e23ed58  lw          $v1, -0x12A8($s1)
    ctx->pc = 0x204f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962520)));
    // 0x204f04: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x204F04u;
    {
        const bool branch_taken_0x204f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x204f04) {
            ctx->pc = 0x204F18u;
            goto label_204f18;
        }
    }
    ctx->pc = 0x204F0Cu;
    // 0x204f0c: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x204f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x204f10: 0xc081522  jal         func_205488
    ctx->pc = 0x204F10u;
    SET_GPR_U32(ctx, 31, 0x204F18u);
    ctx->pc = 0x204F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204F10u;
            // 0x204f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F18u; }
        if (ctx->pc != 0x204F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F18u; }
        if (ctx->pc != 0x204F18u) { return; }
    }
    ctx->pc = 0x204F18u;
label_204f18:
    // 0x204f18: 0xc081afe  jal         func_206BF8
    ctx->pc = 0x204F18u;
    SET_GPR_U32(ctx, 31, 0x204F20u);
    ctx->pc = 0x204F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204F18u;
            // 0x204f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206BF8u;
    if (runtime->hasFunction(0x206BF8u)) {
        auto targetFn = runtime->lookupFunction(0x206BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F20u; }
        if (ctx->pc != 0x204F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206BF8_0x206bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F20u; }
        if (ctx->pc != 0x204F20u) { return; }
    }
    ctx->pc = 0x204F20u;
    // 0x204f20: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x204f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x204f24: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x204f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x204f28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x204f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204f2c: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x204f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x204f30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x204f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x204f34: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x204F34u;
    {
        const bool branch_taken_0x204f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204f34) {
            ctx->pc = 0x204F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204F34u;
            // 0x204f38: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204F5Cu;
            goto label_204f5c;
        }
    }
    ctx->pc = 0x204F3Cu;
    // 0x204f3c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x204f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x204f40: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x204f40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x204f44: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x204f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x204f48: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x204F48u;
    {
        const bool branch_taken_0x204f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204f48) {
            ctx->pc = 0x204F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204F48u;
            // 0x204f4c: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204F5Cu;
            goto label_204f5c;
        }
    }
    ctx->pc = 0x204F50u;
    // 0x204f50: 0xc079f42  jal         func_1E7D08
    ctx->pc = 0x204F50u;
    SET_GPR_U32(ctx, 31, 0x204F58u);
    ctx->pc = 0x204F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204F50u;
            // 0x204f54: 0xc48c028c  lwc1        $f12, 0x28C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D08u;
    if (runtime->hasFunction(0x1E7D08u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F58u; }
        if (ctx->pc != 0x204F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7D08_0x1e7d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F58u; }
        if (ctx->pc != 0x204F58u) { return; }
    }
    ctx->pc = 0x204F58u;
    // 0x204f58: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x204f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_204f5c:
    // 0x204f5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204F5Cu;
    {
        const bool branch_taken_0x204f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204F5Cu;
            // 0x204f60: 0x8e23ed58  lw          $v1, -0x12A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f5c) {
            ctx->pc = 0x204F7Cu;
            goto label_204f7c;
        }
    }
    ctx->pc = 0x204F64u;
    // 0x204f64: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x204f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x204f68: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x204F68u;
    {
        const bool branch_taken_0x204f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x204F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204F68u;
            // 0x204f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f68) {
            ctx->pc = 0x204F80u;
            goto label_204f80;
        }
    }
    ctx->pc = 0x204F70u;
    // 0x204f70: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x204f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x204f74: 0xc081522  jal         func_205488
    ctx->pc = 0x204F74u;
    SET_GPR_U32(ctx, 31, 0x204F7Cu);
    ctx->pc = 0x204F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204F74u;
            // 0x204f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F7Cu; }
        if (ctx->pc != 0x204F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F7Cu; }
        if (ctx->pc != 0x204F7Cu) { return; }
    }
    ctx->pc = 0x204F7Cu;
label_204f7c:
    // 0x204f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_204f80:
    // 0x204f80: 0xc090d5c  jal         func_243570
    ctx->pc = 0x204F80u;
    SET_GPR_U32(ctx, 31, 0x204F88u);
    ctx->pc = 0x204F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204F80u;
            // 0x204f84: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F88u; }
        if (ctx->pc != 0x204F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F88u; }
        if (ctx->pc != 0x204F88u) { return; }
    }
    ctx->pc = 0x204F88u;
    // 0x204f88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x204F88u;
    {
        const bool branch_taken_0x204f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204f88) {
            ctx->pc = 0x204F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204F88u;
            // 0x204f8c: 0x8e0601ac  lw          $a2, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204F9Cu;
            goto label_204f9c;
        }
    }
    ctx->pc = 0x204F90u;
    // 0x204f90: 0xc081012  jal         func_204048
    ctx->pc = 0x204F90u;
    SET_GPR_U32(ctx, 31, 0x204F98u);
    ctx->pc = 0x204F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204F90u;
            // 0x204f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204048u;
    if (runtime->hasFunction(0x204048u)) {
        auto targetFn = runtime->lookupFunction(0x204048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F98u; }
        if (ctx->pc != 0x204F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204048_0x204048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F98u; }
        if (ctx->pc != 0x204F98u) { return; }
    }
    ctx->pc = 0x204F98u;
label_204f98:
    // 0x204f98: 0x8e0601ac  lw          $a2, 0x1AC($s0)
    ctx->pc = 0x204f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_204f9c:
    // 0x204f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fa4: 0x261101c0  addiu       $s1, $s0, 0x1C0
    ctx->pc = 0x204fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x204fa8: 0x630c3  sra         $a2, $a2, 3
    ctx->pc = 0x204fa8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
    // 0x204fac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x204facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x204fb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x204fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x204fb4: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x204FB4u;
    SET_GPR_U32(ctx, 31, 0x204FBCu);
    ctx->pc = 0x204FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204FB4u;
            // 0x204fb8: 0x30c60001  andi        $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (runtime->hasFunction(0x203F90u)) {
        auto targetFn = runtime->lookupFunction(0x203F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FBCu; }
        if (ctx->pc != 0x204FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203F90_0x203f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FBCu; }
        if (ctx->pc != 0x204FBCu) { return; }
    }
    ctx->pc = 0x204FBCu;
    // 0x204fbc: 0x8e0601ac  lw          $a2, 0x1AC($s0)
    ctx->pc = 0x204fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x204fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x204fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204fc8: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x204fc8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x204fcc: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x204FCCu;
    SET_GPR_U32(ctx, 31, 0x204FD4u);
    ctx->pc = 0x204FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204FCCu;
            // 0x204fd0: 0x30c60001  andi        $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (runtime->hasFunction(0x203F90u)) {
        auto targetFn = runtime->lookupFunction(0x203F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FD4u; }
        if (ctx->pc != 0x204FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203F90_0x203f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FD4u; }
        if (ctx->pc != 0x204FD4u) { return; }
    }
    ctx->pc = 0x204FD4u;
    // 0x204fd4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x204fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x204fd8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x204FD8u;
    {
        const bool branch_taken_0x204fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204FD8u;
            // 0x204fdc: 0xc682c658  lwc1        $f2, -0x39A8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fd8) {
            ctx->pc = 0x205030u;
            goto label_205030;
        }
    }
    ctx->pc = 0x204FE0u;
    // 0x204fe0: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x204fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x204fe4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x204fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x204fe8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x204fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204fec: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x204fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x204ff0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x204ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x204ff4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x204ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x204ff8: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x204ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204ffc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x204ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x205000: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x205000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x205004: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x205004u;
    {
        const bool branch_taken_0x205004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205004u;
            // 0x205008: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205004) {
            ctx->pc = 0x205010u;
            goto label_205010;
        }
    }
    ctx->pc = 0x20500Cu;
    // 0x20500c: 0xc483001c  lwc1        $f3, 0x1C($a0)
    ctx->pc = 0x20500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_205010:
    // 0x205010: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x205010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x205014: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x205014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x205018: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x205018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20501c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20501cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205020: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x205020u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x205024: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x205024u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x205028: 0x46020529  min.s       $f20, $f0, $f2
    ctx->pc = 0x205028u;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[2]);
    // 0x20502c: 0x0  nop
    ctx->pc = 0x20502cu;
    // NOP
label_205030:
    // 0x205030: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x205030u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x205034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x205034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x205038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x205038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20503c: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x20503cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x205040: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x205040u;
    {
        const bool branch_taken_0x205040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205040) {
            ctx->pc = 0x2050C0u;
            goto label_2050c0;
        }
    }
    ctx->pc = 0x205048u;
    // 0x205048: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x205048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x20504c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x205050: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x205050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x205054: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x205054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x205058: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x205058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x20505c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20505cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x205060: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x205060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x205064: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x205064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x205068: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x205068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x20506c: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x20506cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x205070: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x205070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x205074: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x205074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x205078: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x205078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x20507c: 0x9fa40010  lwu         $a0, 0x10($sp)
    ctx->pc = 0x20507cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205080: 0x9fa20014  lwu         $v0, 0x14($sp)
    ctx->pc = 0x205080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x205084: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x205084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x205088: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x205088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20508c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x20508cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x205090: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x205090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x205094: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x205094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x205098: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x205098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x20509c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20509cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2050a0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2050a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2050a4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2050a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2050a8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x2050a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2050ac: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x2050acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2050b0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2050b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2050b4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2050b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2050b8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2050b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2050bc: 0x0  nop
    ctx->pc = 0x2050bcu;
    // NOP
label_2050c0:
    // 0x2050c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2050c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2050c4: 0x0  nop
    ctx->pc = 0x2050c4u;
    // NOP
    // 0x2050c8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x2050C8u;
    {
        const bool branch_taken_0x2050c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2050CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2050C8u;
            // 0x2050cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050c8) {
            ctx->pc = 0x205168u;
            goto label_205168;
        }
    }
    ctx->pc = 0x2050D0u;
    // 0x2050d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2050d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2050d4: 0xc081fbe  jal         func_207EF8
    ctx->pc = 0x2050D4u;
    SET_GPR_U32(ctx, 31, 0x2050DCu);
    ctx->pc = 0x2050D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2050D4u;
            // 0x2050d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x207EF8u;
    if (runtime->hasFunction(0x207EF8u)) {
        auto targetFn = runtime->lookupFunction(0x207EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2050DCu; }
        if (ctx->pc != 0x2050DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207EF8_0x207ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2050DCu; }
        if (ctx->pc != 0x2050DCu) { return; }
    }
    ctx->pc = 0x2050DCu;
    // 0x2050dc: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x2050dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x2050e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2050e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2050e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2050e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2050e8: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x2050e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x2050ec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2050ECu;
    {
        const bool branch_taken_0x2050ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2050ec) {
            ctx->pc = 0x205168u;
            goto label_205168;
        }
    }
    ctx->pc = 0x2050F4u;
    // 0x2050f4: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x2050f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x2050f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2050f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2050fc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2050fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x205100: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x205100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x205104: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x205104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x205108: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x205108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x20510c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x205110: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x205110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x205114: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x205114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x205118: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x205118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20511c: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x20511cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x205120: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x205120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x205124: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x205124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x205128: 0x9fa40040  lwu         $a0, 0x40($sp)
    ctx->pc = 0x205128u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20512c: 0x9fa20044  lwu         $v0, 0x44($sp)
    ctx->pc = 0x20512cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x205130: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x205130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x205134: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x205134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x205138: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x205138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x20513c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20513cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x205140: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x205140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x205144: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x205144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x205148: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x205148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x20514c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x20514cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x205150: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x205150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x205154: 0x6ba50057  ldl         $a1, 0x57($sp)
    ctx->pc = 0x205154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x205158: 0x6fa50050  ldr         $a1, 0x50($sp)
    ctx->pc = 0x205158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x20515c: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x20515cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x205160: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x205160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x205164: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x205164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205168:
    // 0x205168: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x205168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20516c: 0x0  nop
    ctx->pc = 0x20516cu;
    // NOP
    // 0x205170: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x205170u;
    {
        const bool branch_taken_0x205170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205170u;
            // 0x205174: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205170) {
            ctx->pc = 0x205234u;
            goto label_205234;
        }
    }
    ctx->pc = 0x205178u;
    // 0x205178: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x205178u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x20517c: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x20517cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x205180: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x205180u;
    {
        const bool branch_taken_0x205180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205180) {
            ctx->pc = 0x205184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205180u;
            // 0x205184: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20519Cu;
            goto label_20519c;
        }
    }
    ctx->pc = 0x205188u;
    // 0x205188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20518c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20518cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205190: 0xc081fbe  jal         func_207EF8
    ctx->pc = 0x205190u;
    SET_GPR_U32(ctx, 31, 0x205198u);
    ctx->pc = 0x205194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205190u;
            // 0x205194: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x207EF8u;
    if (runtime->hasFunction(0x207EF8u)) {
        auto targetFn = runtime->lookupFunction(0x207EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205198u; }
        if (ctx->pc != 0x205198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207EF8_0x207ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205198u; }
        if (ctx->pc != 0x205198u) { return; }
    }
    ctx->pc = 0x205198u;
    // 0x205198: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x205198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_20519c:
    // 0x20519c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x20519Cu;
    {
        const bool branch_taken_0x20519c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20519c) {
            ctx->pc = 0x2051A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20519Cu;
            // 0x2051a0: 0x92260005  lbu         $a2, 0x5($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205238u;
            goto label_205238;
        }
    }
    ctx->pc = 0x2051A4u;
    // 0x2051a4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2051a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2051a8: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x2051a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2051ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2051acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2051b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2051b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2051b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2051B4u;
    {
        const bool branch_taken_0x2051b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2051b4) {
            ctx->pc = 0x2051B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2051B4u;
            // 0x2051b8: 0x8e0201ac  lw          $v0, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2051D0u;
            goto label_2051d0;
        }
    }
    ctx->pc = 0x2051BCu;
    // 0x2051bc: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x2051bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x2051c0: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x2051c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x2051c4: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2051C4u;
    {
        const bool branch_taken_0x2051c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2051c4) {
            ctx->pc = 0x2053D8u;
            goto label_2053d8;
        }
    }
    ctx->pc = 0x2051CCu;
    // 0x2051cc: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x2051ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_2051d0:
    // 0x2051d0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2051d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2051d4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2051D4u;
    {
        const bool branch_taken_0x2051d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2051d4) {
            ctx->pc = 0x2051D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2051D4u;
            // 0x2051d8: 0x92220005  lbu         $v0, 0x5($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205218u;
            goto label_205218;
        }
    }
    ctx->pc = 0x2051DCu;
    // 0x2051dc: 0xc081be6  jal         func_206F98
    ctx->pc = 0x2051DCu;
    SET_GPR_U32(ctx, 31, 0x2051E4u);
    ctx->pc = 0x2051E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2051DCu;
            // 0x2051e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206F98u;
    if (runtime->hasFunction(0x206F98u)) {
        auto targetFn = runtime->lookupFunction(0x206F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2051E4u; }
        if (ctx->pc != 0x2051E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206F98_0x206f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2051E4u; }
        if (ctx->pc != 0x2051E4u) { return; }
    }
    ctx->pc = 0x2051E4u;
    // 0x2051e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2051e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051e8: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2051E8u;
    {
        const bool branch_taken_0x2051e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2051e8) {
            ctx->pc = 0x2051ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2051E8u;
            // 0x2051ec: 0x92220005  lbu         $v0, 0x5($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205218u;
            goto label_205218;
        }
    }
    ctx->pc = 0x2051F0u;
    // 0x2051f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2051f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2051f4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2051f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2051f8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x2051f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2051fc: 0x40f809  jalr        $v0
    ctx->pc = 0x2051FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205204u);
        ctx->pc = 0x205200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2051FCu;
            // 0x205200: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205204u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204E04u: goto label_204e04;
            case 0x204E1Cu: goto label_204e1c;
            case 0x204E68u: goto label_204e68;
            case 0x204EACu: goto label_204eac;
            case 0x204EB0u: goto label_204eb0;
            case 0x204ED4u: goto label_204ed4;
            case 0x204EF4u: goto label_204ef4;
            case 0x204F18u: goto label_204f18;
            case 0x204F5Cu: goto label_204f5c;
            case 0x204F7Cu: goto label_204f7c;
            case 0x204F80u: goto label_204f80;
            case 0x204F98u: goto label_204f98;
            case 0x204F9Cu: goto label_204f9c;
            case 0x205010u: goto label_205010;
            case 0x205030u: goto label_205030;
            case 0x2050C0u: goto label_2050c0;
            case 0x205168u: goto label_205168;
            case 0x20519Cu: goto label_20519c;
            case 0x2051D0u: goto label_2051d0;
            case 0x205218u: goto label_205218;
            case 0x20522Cu: goto label_20522c;
            case 0x205234u: goto label_205234;
            case 0x205238u: goto label_205238;
            case 0x205260u: goto label_205260;
            case 0x205300u: goto label_205300;
            case 0x2053D0u: goto label_2053d0;
            case 0x2053D8u: goto label_2053d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205204u; }
            if (ctx->pc != 0x205204u) { return; }
        }
        }
    }
    ctx->pc = 0x205204u;
    // 0x205204: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x205204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x205208: 0x2404bfff  addiu       $a0, $zero, -0x4001
    ctx->pc = 0x205208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x20520c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x20520cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x205210: 0xac4301ac  sw          $v1, 0x1AC($v0)
    ctx->pc = 0x205210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 3));
    // 0x205214: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x205214u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_205218:
    // 0x205218: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x205218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x20521c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20521Cu;
    {
        const bool branch_taken_0x20521c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20521c) {
            ctx->pc = 0x20522Cu;
            goto label_20522c;
        }
    }
    ctx->pc = 0x205224u;
    // 0x205224: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x205224u;
    {
        const bool branch_taken_0x205224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205224u;
            // 0x205228: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205224) {
            ctx->pc = 0x205234u;
            goto label_205234;
        }
    }
    ctx->pc = 0x20522Cu;
label_20522c:
    // 0x20522c: 0xc08235e  jal         func_208D78
    ctx->pc = 0x20522Cu;
    SET_GPR_U32(ctx, 31, 0x205234u);
    ctx->pc = 0x205230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20522Cu;
            // 0x205230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205234u; }
        if (ctx->pc != 0x205234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205234u; }
        if (ctx->pc != 0x205234u) { return; }
    }
    ctx->pc = 0x205234u;
label_205234:
    // 0x205234: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x205234u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_205238:
    // 0x205238: 0x38c200ff  xori        $v0, $a2, 0xFF
    ctx->pc = 0x205238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)255);
    // 0x20523c: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x20523Cu;
    {
        const bool branch_taken_0x20523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20523c) {
            ctx->pc = 0x2053D8u;
            goto label_2053d8;
        }
    }
    ctx->pc = 0x205244u;
    // 0x205244: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x205244u;
    {
        const bool branch_taken_0x205244 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x205244) {
            ctx->pc = 0x205248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205244u;
            // 0x205248: 0x92220005  lbu         $v0, 0x5($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205260u;
            goto label_205260;
        }
    }
    ctx->pc = 0x20524Cu;
    // 0x20524c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x20524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x205250: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x205250u;
    {
        const bool branch_taken_0x205250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205250) {
            ctx->pc = 0x2053D8u;
            goto label_2053d8;
        }
    }
    ctx->pc = 0x205258u;
    // 0x205258: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x205258u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x20525c: 0x0  nop
    ctx->pc = 0x20525cu;
    // NOP
label_205260:
    // 0x205260: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x205260u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x205264: 0x14a03c  dsll32      $s4, $s4, 0
    ctx->pc = 0x205264u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
    // 0x205268: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x205268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20526c: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x20526cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x205270: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x205270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x205274: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x205274u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x205278: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x205278u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x20527c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x205280: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x205280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x205284: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x205284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x205288: 0xb3a40077  sdl         $a0, 0x77($sp)
    ctx->pc = 0x205288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20528c: 0xb7a40070  sdr         $a0, 0x70($sp)
    ctx->pc = 0x20528cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x205290: 0x9fa40070  lwu         $a0, 0x70($sp)
    ctx->pc = 0x205290u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x205294: 0x9fa20074  lwu         $v0, 0x74($sp)
    ctx->pc = 0x205294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x205298: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x205298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20529c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20529cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2052a0: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2052a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x2052a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2052a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2052a8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2052a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2052ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2052acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2052b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2052b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2052b4: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2052b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x2052b8: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x2052b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x2052bc: 0x6ba20087  ldl         $v0, 0x87($sp)
    ctx->pc = 0x2052bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2052c0: 0x6fa20080  ldr         $v0, 0x80($sp)
    ctx->pc = 0x2052c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2052c4: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x2052c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2052c8: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x2052c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2052cc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2052ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2052d0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2052d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2052d4: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x2052d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2052d8: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x2052d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2052dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2052dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2052e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2052e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2052e4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2052e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2052e8: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2052E8u;
    {
        const bool branch_taken_0x2052e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2052ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2052E8u;
            // 0x2052ec: 0xa2230005  sb          $v1, 0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052e8) {
            ctx->pc = 0x205300u;
            goto label_205300;
        }
    }
    ctx->pc = 0x2052F0u;
    // 0x2052f0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2052f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2052f4: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x2052f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2052f8: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x2052f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2052fc: 0x0  nop
    ctx->pc = 0x2052fcu;
    // NOP
label_205300:
    // 0x205300: 0xc08223a  jal         func_2088E8
    ctx->pc = 0x205300u;
    SET_GPR_U32(ctx, 31, 0x205308u);
    ctx->pc = 0x205304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205300u;
            // 0x205304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2088E8u;
    if (runtime->hasFunction(0x2088E8u)) {
        auto targetFn = runtime->lookupFunction(0x2088E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205308u; }
        if (ctx->pc != 0x205308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002088E8_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205308u; }
        if (ctx->pc != 0x205308u) { return; }
    }
    ctx->pc = 0x205308u;
    // 0x205308: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x205308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x20530c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x20530Cu;
    {
        const bool branch_taken_0x20530c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20530c) {
            ctx->pc = 0x2053D8u;
            goto label_2053d8;
        }
    }
    ctx->pc = 0x205314u;
    // 0x205314: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x205314u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x205318: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x205318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x20531c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x20531Cu;
    {
        const bool branch_taken_0x20531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20531Cu;
            // 0x205320: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20531c) {
            ctx->pc = 0x2053D8u;
            goto label_2053d8;
        }
    }
    ctx->pc = 0x205324u;
    // 0x205324: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x205324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x205328: 0xc081fbe  jal         func_207EF8
    ctx->pc = 0x205328u;
    SET_GPR_U32(ctx, 31, 0x205330u);
    ctx->pc = 0x20532Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205328u;
            // 0x20532c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207EF8u;
    if (runtime->hasFunction(0x207EF8u)) {
        auto targetFn = runtime->lookupFunction(0x207EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205330u; }
        if (ctx->pc != 0x205330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207EF8_0x207ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205330u; }
        if (ctx->pc != 0x205330u) { return; }
    }
    ctx->pc = 0x205330u;
    // 0x205330: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x205330u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x205334: 0x38c200ff  xori        $v0, $a2, 0xFF
    ctx->pc = 0x205334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)255);
    // 0x205338: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x205338u;
    {
        const bool branch_taken_0x205338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20533Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205338u;
            // 0x20533c: 0x30c200ff  andi        $v0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205338) {
            ctx->pc = 0x2053D8u;
            goto label_2053d8;
        }
    }
    ctx->pc = 0x205340u;
    // 0x205340: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x205340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x205344: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x205344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x205348: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x205348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x20534c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x205350: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x205350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x205354: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x205354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x205358: 0xb3a700a7  sdl         $a3, 0xA7($sp)
    ctx->pc = 0x205358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20535c: 0xb7a700a0  sdr         $a3, 0xA0($sp)
    ctx->pc = 0x20535cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x205360: 0x9fa200a0  lwu         $v0, 0xA0($sp)
    ctx->pc = 0x205360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x205364: 0x9fa400a4  lwu         $a0, 0xA4($sp)
    ctx->pc = 0x205364u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x205368: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x205368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x20536c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20536cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x205370: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x205370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x205374: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x205374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x205378: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x205378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20537c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x20537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x205380: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x205380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x205384: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x205384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x205388: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x205388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x20538c: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x20538cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x205390: 0x6ba700b7  ldl         $a3, 0xB7($sp)
    ctx->pc = 0x205390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x205394: 0x6fa700b0  ldr         $a3, 0xB0($sp)
    ctx->pc = 0x205394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x205398: 0xb3a70097  sdl         $a3, 0x97($sp)
    ctx->pc = 0x205398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20539c: 0xb7a70090  sdr         $a3, 0x90($sp)
    ctx->pc = 0x20539cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2053a0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2053a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2053a4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2053a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2053a8: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x2053a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2053ac: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x2053acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2053b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2053b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2053b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2053b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2053b8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2053b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2053bc: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2053BCu;
    {
        const bool branch_taken_0x2053bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2053C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2053BCu;
            // 0x2053c0: 0xa2230005  sb          $v1, 0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053bc) {
            ctx->pc = 0x2053D0u;
            goto label_2053d0;
        }
    }
    ctx->pc = 0x2053C4u;
    // 0x2053c4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2053c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2053c8: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x2053c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2053cc: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x2053ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_2053d0:
    // 0x2053d0: 0xc08223a  jal         func_2088E8
    ctx->pc = 0x2053D0u;
    SET_GPR_U32(ctx, 31, 0x2053D8u);
    ctx->pc = 0x2053D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2053D0u;
            // 0x2053d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2088E8u;
    if (runtime->hasFunction(0x2088E8u)) {
        auto targetFn = runtime->lookupFunction(0x2088E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053D8u; }
        if (ctx->pc != 0x2053D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002088E8_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053D8u; }
        if (ctx->pc != 0x2053D8u) { return; }
    }
    ctx->pc = 0x2053D8u;
label_2053d8:
    // 0x2053d8: 0xc08114c  jal         func_204530
    ctx->pc = 0x2053D8u;
    SET_GPR_U32(ctx, 31, 0x2053E0u);
    ctx->pc = 0x2053DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2053D8u;
            // 0x2053dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204530u;
    if (runtime->hasFunction(0x204530u)) {
        auto targetFn = runtime->lookupFunction(0x204530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053E0u; }
        if (ctx->pc != 0x2053E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204530_0x204530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053E0u; }
        if (ctx->pc != 0x2053E0u) { return; }
    }
    ctx->pc = 0x2053E0u;
    // 0x2053e0: 0xc081504  jal         func_205410
    ctx->pc = 0x2053E0u;
    SET_GPR_U32(ctx, 31, 0x2053E8u);
    ctx->pc = 0x2053E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2053E0u;
            // 0x2053e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205410u;
    if (runtime->hasFunction(0x205410u)) {
        auto targetFn = runtime->lookupFunction(0x205410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053E8u; }
        if (ctx->pc != 0x2053E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205410_0x205410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053E8u; }
        if (ctx->pc != 0x2053E8u) { return; }
    }
    ctx->pc = 0x2053E8u;
    // 0x2053e8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2053e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2053ec: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2053ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2053f0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2053f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2053f4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2053f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2053f8: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2053f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2053fc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2053fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x205400: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x205400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x205404: 0x3e00008  jr          $ra
    ctx->pc = 0x205404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205404u;
            // 0x205408: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204E04u: goto label_204e04;
            case 0x204E1Cu: goto label_204e1c;
            case 0x204E68u: goto label_204e68;
            case 0x204EACu: goto label_204eac;
            case 0x204EB0u: goto label_204eb0;
            case 0x204ED4u: goto label_204ed4;
            case 0x204EF4u: goto label_204ef4;
            case 0x204F18u: goto label_204f18;
            case 0x204F5Cu: goto label_204f5c;
            case 0x204F7Cu: goto label_204f7c;
            case 0x204F80u: goto label_204f80;
            case 0x204F98u: goto label_204f98;
            case 0x204F9Cu: goto label_204f9c;
            case 0x205010u: goto label_205010;
            case 0x205030u: goto label_205030;
            case 0x2050C0u: goto label_2050c0;
            case 0x205168u: goto label_205168;
            case 0x20519Cu: goto label_20519c;
            case 0x2051D0u: goto label_2051d0;
            case 0x205218u: goto label_205218;
            case 0x20522Cu: goto label_20522c;
            case 0x205234u: goto label_205234;
            case 0x205238u: goto label_205238;
            case 0x205260u: goto label_205260;
            case 0x205300u: goto label_205300;
            case 0x2053D0u: goto label_2053d0;
            case 0x2053D8u: goto label_2053d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20540Cu;
    // 0x20540c: 0x0  nop
    ctx->pc = 0x20540cu;
    // NOP
}
