#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211C10
// Address: 0x211c10 - 0x211df8
void sub_00211C10_0x211c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211C10_0x211c10");
#endif

    ctx->pc = 0x211c10u;

    // 0x211c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x211c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x211c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x211c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x211c18: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x211c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x211c1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x211c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x211c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x211c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211c28: 0x8e24026c  lw          $a0, 0x26C($s1)
    ctx->pc = 0x211c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x211c2c: 0xc040314  jal         func_100C50
    ctx->pc = 0x211C2Cu;
    SET_GPR_U32(ctx, 31, 0x211C34u);
    ctx->pc = 0x211C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211C2Cu;
            // 0x211c30: 0x8e300190  lw          $s0, 0x190($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100C50u;
    if (runtime->hasFunction(0x100C50u)) {
        auto targetFn = runtime->lookupFunction(0x100C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C34u; }
        if (ctx->pc != 0x211C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100C50_0x100c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C34u; }
        if (ctx->pc != 0x211C34u) { return; }
    }
    ctx->pc = 0x211C34u;
    // 0x211c34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x211c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211c38: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x211C38u;
    {
        const bool branch_taken_0x211c38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x211C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C38u;
            // 0x211c3c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c38) {
            ctx->pc = 0x211CB0u;
            goto label_211cb0;
        }
    }
    ctx->pc = 0x211C40u;
    // 0x211c40: 0xc6210268  lwc1        $f1, 0x268($s1)
    ctx->pc = 0x211c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211c44: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x211c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x211c48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211c4c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x211c4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211c50: 0x0  nop
    ctx->pc = 0x211c50u;
    // NOP
    // 0x211c54: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x211C54u;
    {
        const bool branch_taken_0x211c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x211c54) {
            ctx->pc = 0x211C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211C54u;
            // 0x211c58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211CB4u;
            goto label_211cb4;
        }
    }
    ctx->pc = 0x211C5Cu;
    // 0x211c5c: 0x8e25026c  lw          $a1, 0x26C($s1)
    ctx->pc = 0x211c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x211c60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x211c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211c68: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x211c68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x211c6c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x211c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x211c70: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x211C70u;
    {
        const bool branch_taken_0x211c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C70u;
            // 0x211c74: 0xe6200268  swc1        $f0, 0x268($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c70) {
            ctx->pc = 0x211CF8u;
            goto label_211cf8;
        }
    }
    ctx->pc = 0x211C78u;
    // 0x211c78: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x211c78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211c7c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x211c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x211c80: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x211c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x211c84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x211c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211c88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211c8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x211c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211c90: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x211c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x211c94: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x211c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x211c98: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x211c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x211c9c: 0x40f809  jalr        $v0
    ctx->pc = 0x211C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211CA4u);
        ctx->pc = 0x211CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C9Cu;
            // 0x211ca0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x211CA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211CB0u: goto label_211cb0;
            case 0x211CB4u: goto label_211cb4;
            case 0x211CF8u: goto label_211cf8;
            case 0x211CFCu: goto label_211cfc;
            case 0x211D3Cu: goto label_211d3c;
            case 0x211D40u: goto label_211d40;
            case 0x211D78u: goto label_211d78;
            case 0x211D8Cu: goto label_211d8c;
            case 0x211D9Cu: goto label_211d9c;
            case 0x211DACu: goto label_211dac;
            case 0x211DBCu: goto label_211dbc;
            case 0x211DC0u: goto label_211dc0;
            case 0x211DDCu: goto label_211ddc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x211CA4u; }
            if (ctx->pc != 0x211CA4u) { return; }
        }
        }
    }
    ctx->pc = 0x211CA4u;
    // 0x211ca4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x211CA4u;
    {
        const bool branch_taken_0x211ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211CA4u;
            // 0x211ca8: 0xc6200274  lwc1        $f0, 0x274($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ca4) {
            ctx->pc = 0x211CFCu;
            goto label_211cfc;
        }
    }
    ctx->pc = 0x211CACu;
    // 0x211cac: 0x0  nop
    ctx->pc = 0x211cacu;
    // NOP
label_211cb0:
    // 0x211cb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x211cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_211cb4:
    // 0x211cb4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x211cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x211cb8: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x211cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x211cbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x211cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x211cc0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x211CC0u;
    {
        const bool branch_taken_0x211cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211cc0) {
            ctx->pc = 0x211CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211CC0u;
            // 0x211cc4: 0xc6200274  lwc1        $f0, 0x274($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x211CFCu;
            goto label_211cfc;
        }
    }
    ctx->pc = 0x211CC8u;
    // 0x211cc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211ccc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x211cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211cd0: 0x0  nop
    ctx->pc = 0x211cd0u;
    // NOP
    // 0x211cd4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x211CD4u;
    {
        const bool branch_taken_0x211cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211cd4) {
            ctx->pc = 0x211CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211CD4u;
            // 0x211cd8: 0xc6200274  lwc1        $f0, 0x274($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x211CFCu;
            goto label_211cfc;
        }
    }
    ctx->pc = 0x211CDCu;
    // 0x211cdc: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x211cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x211ce0: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x211ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x211ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211ce8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x211ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x211cec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x211cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x211cf0: 0xe6200268  swc1        $f0, 0x268($s1)
    ctx->pc = 0x211cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
    // 0x211cf4: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x211cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
label_211cf8:
    // 0x211cf8: 0xc6200274  lwc1        $f0, 0x274($s1)
    ctx->pc = 0x211cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211cfc:
    // 0x211cfc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x211cfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211d00: 0x0  nop
    ctx->pc = 0x211d00u;
    // NOP
    // 0x211d04: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x211D04u;
    {
        const bool branch_taken_0x211d04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D04u;
            // 0x211d08: 0xc6200268  lwc1        $f0, 0x268($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d04) {
            ctx->pc = 0x211D3Cu;
            goto label_211d3c;
        }
    }
    ctx->pc = 0x211D0Cu;
    // 0x211d0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x211d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211d10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x211d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211d14: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x211D14u;
    {
        const bool branch_taken_0x211d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211d14) {
            ctx->pc = 0x211D40u;
            goto label_211d40;
        }
    }
    ctx->pc = 0x211D1Cu;
    // 0x211d1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x211d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211d20: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x211d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x211d24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x211d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x211d28: 0xe6210268  swc1        $f1, 0x268($s1)
    ctx->pc = 0x211d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
    // 0x211d2c: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x211d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x211d30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x211d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x211d34: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x211D34u;
    {
        const bool branch_taken_0x211d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D34u;
            // 0x211d38: 0xac8200f4  sw          $v0, 0xF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d34) {
            ctx->pc = 0x211DBCu;
            goto label_211dbc;
        }
    }
    ctx->pc = 0x211D3Cu;
label_211d3c:
    // 0x211d3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x211d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_211d40:
    // 0x211d40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x211d40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211d44: 0x0  nop
    ctx->pc = 0x211d44u;
    // NOP
    // 0x211d48: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x211D48u;
    {
        const bool branch_taken_0x211d48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211d48) {
            ctx->pc = 0x211D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211D48u;
            // 0x211d4c: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211DC0u;
            goto label_211dc0;
        }
    }
    ctx->pc = 0x211D50u;
    // 0x211d50: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x211d50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211d54: 0x0  nop
    ctx->pc = 0x211d54u;
    // NOP
    // 0x211d58: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x211D58u;
    {
        const bool branch_taken_0x211d58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D58u;
            // 0x211d5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d58) {
            ctx->pc = 0x211DACu;
            goto label_211dac;
        }
    }
    ctx->pc = 0x211D60u;
    // 0x211d60: 0x86230264  lh          $v1, 0x264($s1)
    ctx->pc = 0x211d60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x211d64: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x211D64u;
    {
        const bool branch_taken_0x211d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x211D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D64u;
            // 0x211d68: 0xe6210268  swc1        $f1, 0x268($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d64) {
            ctx->pc = 0x211D78u;
            goto label_211d78;
        }
    }
    ctx->pc = 0x211D6Cu;
    // 0x211d6c: 0x3c038001  lui         $v1, 0x8001
    ctx->pc = 0x211d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32769 << 16));
    // 0x211d70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x211D70u;
    {
        const bool branch_taken_0x211d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211D70u;
            // 0x211d74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d70) {
            ctx->pc = 0x211D8Cu;
            goto label_211d8c;
        }
    }
    ctx->pc = 0x211D78u;
label_211d78:
    // 0x211d78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x211d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x211d7c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x211D7Cu;
    {
        const bool branch_taken_0x211d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x211d7c) {
            ctx->pc = 0x211D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211D7Cu;
            // 0x211d80: 0xc62d0274  lwc1        $f13, 0x274($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x211D9Cu;
            goto label_211d9c;
        }
    }
    ctx->pc = 0x211D84u;
    // 0x211d84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x211d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211d88: 0x3c038002  lui         $v1, 0x8002
    ctx->pc = 0x211d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32770 << 16));
label_211d8c:
    // 0x211d8c: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x211d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x211d90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x211d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x211d94: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x211d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
    // 0x211d98: 0xc62d0274  lwc1        $f13, 0x274($s1)
    ctx->pc = 0x211d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_211d9c:
    // 0x211d9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x211d9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x211da0: 0xc62e0268  lwc1        $f14, 0x268($s1)
    ctx->pc = 0x211da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x211da4: 0xc084352  jal         func_210D48
    ctx->pc = 0x211DA4u;
    SET_GPR_U32(ctx, 31, 0x211DACu);
    ctx->pc = 0x211DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211DA4u;
            // 0x211da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210D48u;
    if (runtime->hasFunction(0x210D48u)) {
        auto targetFn = runtime->lookupFunction(0x210D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DACu; }
        if (ctx->pc != 0x211DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_210d48_0x210e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DACu; }
        if (ctx->pc != 0x211DACu) { return; }
    }
    ctx->pc = 0x211DACu;
label_211dac:
    // 0x211dac: 0xc6200268  lwc1        $f0, 0x268($s1)
    ctx->pc = 0x211dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211db0: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x211db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x211db4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x211DB4u;
    {
        const bool branch_taken_0x211db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211DB4u;
            // 0x211db8: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211db4) {
            ctx->pc = 0x211DDCu;
            goto label_211ddc;
        }
    }
    ctx->pc = 0x211DBCu;
label_211dbc:
    // 0x211dbc: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x211dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
label_211dc0:
    // 0x211dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211dc4: 0xc6200268  lwc1        $f0, 0x268($s1)
    ctx->pc = 0x211dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211dc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x211dc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x211dcc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x211dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x211dd0: 0xc48d0274  lwc1        $f13, 0x274($a0)
    ctx->pc = 0x211dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x211dd4: 0xc084352  jal         func_210D48
    ctx->pc = 0x211DD4u;
    SET_GPR_U32(ctx, 31, 0x211DDCu);
    ctx->pc = 0x211DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211DD4u;
            // 0x211dd8: 0xc48e0268  lwc1        $f14, 0x268($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x210D48u;
    if (runtime->hasFunction(0x210D48u)) {
        auto targetFn = runtime->lookupFunction(0x210D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DDCu; }
        if (ctx->pc != 0x211DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_210d48_0x210e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DDCu; }
        if (ctx->pc != 0x211DDCu) { return; }
    }
    ctx->pc = 0x211DDCu;
label_211ddc:
    // 0x211ddc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x211ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211de0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x211de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211de8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x211de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x211dec: 0x3e00008  jr          $ra
    ctx->pc = 0x211DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211DECu;
            // 0x211df0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211CB0u: goto label_211cb0;
            case 0x211CB4u: goto label_211cb4;
            case 0x211CF8u: goto label_211cf8;
            case 0x211CFCu: goto label_211cfc;
            case 0x211D3Cu: goto label_211d3c;
            case 0x211D40u: goto label_211d40;
            case 0x211D78u: goto label_211d78;
            case 0x211D8Cu: goto label_211d8c;
            case 0x211D9Cu: goto label_211d9c;
            case 0x211DACu: goto label_211dac;
            case 0x211DBCu: goto label_211dbc;
            case 0x211DC0u: goto label_211dc0;
            case 0x211DDCu: goto label_211ddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211DF4u;
    // 0x211df4: 0x0  nop
    ctx->pc = 0x211df4u;
    // NOP
}
