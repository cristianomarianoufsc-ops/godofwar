#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9CC8
// Address: 0x1a9cc8 - 0x1aa408
void sub_001A9CC8_0x1a9cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9CC8_0x1a9cc8");
#endif

    ctx->pc = 0x1a9cc8u;

    // 0x1a9cc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9ccc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9cd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9cd8: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x1a9cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1a9cdc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9CDCu;
    {
        const bool branch_taken_0x1a9cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CDCu;
            // 0x1a9ce0: 0x2490009c  addiu       $s0, $a0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9cdc) {
            ctx->pc = 0x1A9D04u;
            goto label_1a9d04;
        }
    }
    ctx->pc = 0x1A9CE4u;
    // 0x1a9ce4: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x1a9ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1a9ce8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a9cec: 0xac44cac8  sw          $a0, -0x3538($v0)
    ctx->pc = 0x1a9cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 4));
    // 0x1a9cf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9cf4: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x1a9cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x1a9cf8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A9CF8u;
    SET_GPR_U32(ctx, 31, 0x1A9D00u);
    ctx->pc = 0x1A9CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CF8u;
            // 0x1a9cfc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D00u; }
        if (ctx->pc != 0x1A9D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D00u; }
        if (ctx->pc != 0x1A9D00u) { return; }
    }
    ctx->pc = 0x1A9D00u;
    // 0x1a9d00: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a9d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a9d04:
    // 0x1a9d04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a9d08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9d10: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D10u;
            // 0x1a9d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9D18u;
    // 0x1a9d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9d1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d28: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9D28u;
    {
        const bool branch_taken_0x1a9d28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D28u;
            // 0x1a9d2c: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d28) {
            ctx->pc = 0x1A9D4Cu;
            goto label_1a9d4c;
        }
    }
    ctx->pc = 0x1A9D30u;
    // 0x1a9d30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9d34: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9D34u;
    {
        const bool branch_taken_0x1a9d34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D34u;
            // 0x1a9d38: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d34) {
            ctx->pc = 0x1A9D50u;
            goto label_1a9d50;
        }
    }
    ctx->pc = 0x1A9D3Cu;
    // 0x1a9d3c: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1A9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A9D44u);
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D44u; }
        if (ctx->pc != 0x1A9D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D44u; }
        if (ctx->pc != 0x1A9D44u) { return; }
    }
    ctx->pc = 0x1A9D44u;
    // 0x1a9d44: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A9D44u;
    {
        const bool branch_taken_0x1a9d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D44u;
            // 0x1a9d48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d44) {
            ctx->pc = 0x1A9DB4u;
            goto label_1a9db4;
        }
    }
    ctx->pc = 0x1A9D4Cu;
label_1a9d4c:
    // 0x1a9d4c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a9d50:
    // 0x1a9d50: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9D50u;
    {
        const bool branch_taken_0x1a9d50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D50u;
            // 0x1a9d54: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d50) {
            ctx->pc = 0x1A9DA0u;
            goto label_1a9da0;
        }
    }
    ctx->pc = 0x1A9D58u;
    // 0x1a9d58: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x1a9d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9d5c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a9d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a9d60: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a9d60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9d64: 0x0  nop
    ctx->pc = 0x1a9d64u;
    // NOP
    // 0x1a9d68: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1A9D68u;
    {
        const bool branch_taken_0x1a9d68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9d68) {
            ctx->pc = 0x1A9D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D68u;
            // 0x1a9d6c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9DB4u;
            goto label_1a9db4;
        }
    }
    ctx->pc = 0x1A9D70u;
    // 0x1a9d70: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1A9D70u;
    SET_GPR_U32(ctx, 31, 0x1A9D78u);
    ctx->pc = 0x1A9D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D70u;
            // 0x1a9d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D78u; }
        if (ctx->pc != 0x1A9D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D78u; }
        if (ctx->pc != 0x1A9D78u) { return; }
    }
    ctx->pc = 0x1A9D78u;
    // 0x1a9d78: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a9d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9d7c: 0x0  nop
    ctx->pc = 0x1a9d7cu;
    // NOP
    // 0x1a9d80: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1A9D80u;
    {
        const bool branch_taken_0x1a9d80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D80u;
            // 0x1a9d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d80) {
            ctx->pc = 0x1A9DB0u;
            goto label_1a9db0;
        }
    }
    ctx->pc = 0x1A9D88u;
    // 0x1a9d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d8c: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1a9d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a9d90: 0xc06c6da  jal         func_1B1B68
    ctx->pc = 0x1A9D90u;
    SET_GPR_U32(ctx, 31, 0x1A9D98u);
    ctx->pc = 0x1A9D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D90u;
            // 0x1a9d94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B68u;
    if (runtime->hasFunction(0x1B1B68u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D98u; }
        if (ctx->pc != 0x1A9D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B68_0x1b1b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D98u; }
        if (ctx->pc != 0x1A9D98u) { return; }
    }
    ctx->pc = 0x1A9D98u;
    // 0x1a9d98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9D98u;
    {
        const bool branch_taken_0x1a9d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D98u;
            // 0x1a9d9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d98) {
            ctx->pc = 0x1A9DB4u;
            goto label_1a9db4;
        }
    }
    ctx->pc = 0x1A9DA0u;
label_1a9da0:
    // 0x1a9da0: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9DA0u;
    {
        const bool branch_taken_0x1a9da0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9da0) {
            ctx->pc = 0x1A9DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DA0u;
            // 0x1a9da4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9DB4u;
            goto label_1a9db4;
        }
    }
    ctx->pc = 0x1A9DA8u;
    // 0x1a9da8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1a9da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9dac: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x1a9dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_1a9db0:
    // 0x1a9db0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9db4:
    // 0x1a9db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9db8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a9db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a9dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DBCu;
            // 0x1a9dc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9DC4u;
    // 0x1a9dc4: 0x0  nop
    ctx->pc = 0x1a9dc4u;
    // NOP
    // 0x1a9dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9dcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9dd0: 0xc06a548  jal         func_1A9520
    ctx->pc = 0x1A9DD0u;
    SET_GPR_U32(ctx, 31, 0x1A9DD8u);
    ctx->pc = 0x1A9520u;
    if (runtime->hasFunction(0x1A9520u)) {
        auto targetFn = runtime->lookupFunction(0x1A9520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DD8u; }
        if (ctx->pc != 0x1A9DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9520_0x1a9520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DD8u; }
        if (ctx->pc != 0x1A9DD8u) { return; }
    }
    ctx->pc = 0x1A9DD8u;
    // 0x1a9dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DDCu;
            // 0x1a9de0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9DE4u;
    // 0x1a9de4: 0x0  nop
    ctx->pc = 0x1a9de4u;
    // NOP
    // 0x1a9de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9DF0u;
    // 0x1a9df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9df4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e00: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9E00u;
    {
        const bool branch_taken_0x1a9e00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E00u;
            // 0x1a9e04: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e00) {
            ctx->pc = 0x1A9E24u;
            goto label_1a9e24;
        }
    }
    ctx->pc = 0x1A9E08u;
    // 0x1a9e08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9e0c: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9E0Cu;
    {
        const bool branch_taken_0x1a9e0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E0Cu;
            // 0x1a9e10: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e0c) {
            ctx->pc = 0x1A9E28u;
            goto label_1a9e28;
        }
    }
    ctx->pc = 0x1A9E14u;
    // 0x1a9e14: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1A9E14u;
    SET_GPR_U32(ctx, 31, 0x1A9E1Cu);
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E1Cu; }
        if (ctx->pc != 0x1A9E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E1Cu; }
        if (ctx->pc != 0x1A9E1Cu) { return; }
    }
    ctx->pc = 0x1A9E1Cu;
    // 0x1a9e1c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A9E1Cu;
    {
        const bool branch_taken_0x1a9e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E1Cu;
            // 0x1a9e20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e1c) {
            ctx->pc = 0x1A9E8Cu;
            goto label_1a9e8c;
        }
    }
    ctx->pc = 0x1A9E24u;
label_1a9e24:
    // 0x1a9e24: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a9e28:
    // 0x1a9e28: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9E28u;
    {
        const bool branch_taken_0x1a9e28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E28u;
            // 0x1a9e2c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e28) {
            ctx->pc = 0x1A9E78u;
            goto label_1a9e78;
        }
    }
    ctx->pc = 0x1A9E30u;
    // 0x1a9e30: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x1a9e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9e34: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a9e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a9e38: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a9e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9e3c: 0x0  nop
    ctx->pc = 0x1a9e3cu;
    // NOP
    // 0x1a9e40: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1A9E40u;
    {
        const bool branch_taken_0x1a9e40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9e40) {
            ctx->pc = 0x1A9E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E40u;
            // 0x1a9e44: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9E8Cu;
            goto label_1a9e8c;
        }
    }
    ctx->pc = 0x1A9E48u;
    // 0x1a9e48: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1A9E48u;
    SET_GPR_U32(ctx, 31, 0x1A9E50u);
    ctx->pc = 0x1A9E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E48u;
            // 0x1a9e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E50u; }
        if (ctx->pc != 0x1A9E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E50u; }
        if (ctx->pc != 0x1A9E50u) { return; }
    }
    ctx->pc = 0x1A9E50u;
    // 0x1a9e50: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a9e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9e54: 0x0  nop
    ctx->pc = 0x1a9e54u;
    // NOP
    // 0x1a9e58: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1A9E58u;
    {
        const bool branch_taken_0x1a9e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E58u;
            // 0x1a9e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e58) {
            ctx->pc = 0x1A9E88u;
            goto label_1a9e88;
        }
    }
    ctx->pc = 0x1A9E60u;
    // 0x1a9e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e64: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1a9e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a9e68: 0xc06c6da  jal         func_1B1B68
    ctx->pc = 0x1A9E68u;
    SET_GPR_U32(ctx, 31, 0x1A9E70u);
    ctx->pc = 0x1A9E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E68u;
            // 0x1a9e6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B68u;
    if (runtime->hasFunction(0x1B1B68u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E70u; }
        if (ctx->pc != 0x1A9E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B68_0x1b1b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E70u; }
        if (ctx->pc != 0x1A9E70u) { return; }
    }
    ctx->pc = 0x1A9E70u;
    // 0x1a9e70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9E70u;
    {
        const bool branch_taken_0x1a9e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E70u;
            // 0x1a9e74: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e70) {
            ctx->pc = 0x1A9E8Cu;
            goto label_1a9e8c;
        }
    }
    ctx->pc = 0x1A9E78u;
label_1a9e78:
    // 0x1a9e78: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9E78u;
    {
        const bool branch_taken_0x1a9e78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9e78) {
            ctx->pc = 0x1A9E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E78u;
            // 0x1a9e7c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9E8Cu;
            goto label_1a9e8c;
        }
    }
    ctx->pc = 0x1A9E80u;
    // 0x1a9e80: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1a9e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9e84: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x1a9e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_1a9e88:
    // 0x1a9e88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9e8c:
    // 0x1a9e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9e90: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a9e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a9e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E94u;
            // 0x1a9e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9E9Cu;
    // 0x1a9e9c: 0x0  nop
    ctx->pc = 0x1a9e9cu;
    // NOP
    // 0x1a9ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9ea8: 0xc06a548  jal         func_1A9520
    ctx->pc = 0x1A9EA8u;
    SET_GPR_U32(ctx, 31, 0x1A9EB0u);
    ctx->pc = 0x1A9520u;
    if (runtime->hasFunction(0x1A9520u)) {
        auto targetFn = runtime->lookupFunction(0x1A9520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EB0u; }
        if (ctx->pc != 0x1A9EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9520_0x1a9520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EB0u; }
        if (ctx->pc != 0x1A9EB0u) { return; }
    }
    ctx->pc = 0x1A9EB0u;
    // 0x1a9eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EB4u;
            // 0x1a9eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9EBCu;
    // 0x1a9ebc: 0x0  nop
    ctx->pc = 0x1a9ebcu;
    // NOP
    // 0x1a9ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9EC8u;
    // 0x1a9ec8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a9ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a9ecc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a9eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a9ed0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a9ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a9ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a9ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a9edc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a9edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ee0: 0x14c00018  bnez        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A9EE0u;
    {
        const bool branch_taken_0x1a9ee0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EE0u;
            // 0x1a9ee4: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ee0) {
            ctx->pc = 0x1A9F44u;
            goto label_1a9f44;
        }
    }
    ctx->pc = 0x1A9EE8u;
    // 0x1a9ee8: 0x96030046  lhu         $v1, 0x46($s0)
    ctx->pc = 0x1a9ee8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x1a9eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9ef0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A9EF0u;
    {
        const bool branch_taken_0x1a9ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EF0u;
            // 0x1a9ef4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ef0) {
            ctx->pc = 0x1A9F30u;
            goto label_1a9f30;
        }
    }
    ctx->pc = 0x1A9EF8u;
    // 0x1a9ef8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A9EF8u;
    {
        const bool branch_taken_0x1a9ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EF8u;
            // 0x1a9efc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ef8) {
            ctx->pc = 0x1A9F30u;
            goto label_1a9f30;
        }
    }
    ctx->pc = 0x1A9F00u;
    // 0x1a9f00: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A9F00u;
    SET_GPR_U32(ctx, 31, 0x1A9F08u);
    ctx->pc = 0x1A9F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F00u;
            // 0x1a9f04: 0x8c44ca0c  lw          $a0, -0x35F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F08u; }
        if (ctx->pc != 0x1A9F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F08u; }
        if (ctx->pc != 0x1A9F08u) { return; }
    }
    ctx->pc = 0x1A9F08u;
    // 0x1a9f08: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1a9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1a9f0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a9f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a9f10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a9f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a9f14: 0x24632608  addiu       $v1, $v1, 0x2608
    ctx->pc = 0x1a9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9736));
    // 0x1a9f18: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1a9f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x1a9f1c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a9f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a9f20: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a9f24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a9f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a9f28: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1a9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1a9f2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a9f30:
    // 0x1a9f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f34: 0xc06a3bc  jal         func_1A8EF0
    ctx->pc = 0x1A9F34u;
    SET_GPR_U32(ctx, 31, 0x1A9F3Cu);
    ctx->pc = 0x1A9F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F34u;
            // 0x1a9f38: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EF0u;
    if (runtime->hasFunction(0x1A8EF0u)) {
        auto targetFn = runtime->lookupFunction(0x1A8EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F3Cu; }
        if (ctx->pc != 0x1A9F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8EF0_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F3Cu; }
        if (ctx->pc != 0x1A9F3Cu) { return; }
    }
    ctx->pc = 0x1A9F3Cu;
    // 0x1a9f3c: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1A9F3Cu;
    {
        const bool branch_taken_0x1a9f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F3Cu;
            // 0x1a9f40: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f3c) {
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1A9F44u;
label_1a9f44:
    // 0x1a9f44: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a9f48: 0x14c20014  bne         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A9F48u;
    {
        const bool branch_taken_0x1a9f48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F48u;
            // 0x1a9f4c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f48) {
            ctx->pc = 0x1A9F9Cu;
            goto label_1a9f9c;
        }
    }
    ctx->pc = 0x1A9F50u;
    // 0x1a9f50: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x1a9f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9f54: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a9f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a9f58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a9f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9f5c: 0x0  nop
    ctx->pc = 0x1a9f5cu;
    // NOP
    // 0x1a9f60: 0x45020076  bc1fl       . + 4 + (0x76 << 2)
    ctx->pc = 0x1A9F60u;
    {
        const bool branch_taken_0x1a9f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9f60) {
            ctx->pc = 0x1A9F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F60u;
            // 0x1a9f64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1A9F68u;
    // 0x1a9f68: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1A9F68u;
    SET_GPR_U32(ctx, 31, 0x1A9F70u);
    ctx->pc = 0x1A9F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F68u;
            // 0x1a9f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F70u; }
        if (ctx->pc != 0x1A9F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F70u; }
        if (ctx->pc != 0x1A9F70u) { return; }
    }
    ctx->pc = 0x1A9F70u;
    // 0x1a9f70: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a9f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9f74: 0x0  nop
    ctx->pc = 0x1a9f74u;
    // NOP
    // 0x1a9f78: 0x45020070  bc1fl       . + 4 + (0x70 << 2)
    ctx->pc = 0x1A9F78u;
    {
        const bool branch_taken_0x1a9f78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9f78) {
            ctx->pc = 0x1A9F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F78u;
            // 0x1a9f7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1A9F80u;
    // 0x1a9f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f88: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1a9f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a9f8c: 0xc06c6da  jal         func_1B1B68
    ctx->pc = 0x1A9F8Cu;
    SET_GPR_U32(ctx, 31, 0x1A9F94u);
    ctx->pc = 0x1A9F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F8Cu;
            // 0x1a9f90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B68u;
    if (runtime->hasFunction(0x1B1B68u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F94u; }
        if (ctx->pc != 0x1A9F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B68_0x1b1b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F94u; }
        if (ctx->pc != 0x1A9F94u) { return; }
    }
    ctx->pc = 0x1A9F94u;
    // 0x1a9f94: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1A9F94u;
    {
        const bool branch_taken_0x1a9f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F94u;
            // 0x1a9f98: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f94) {
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1A9F9Cu;
label_1a9f9c:
    // 0x1a9f9c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9F9Cu;
    {
        const bool branch_taken_0x1a9f9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F9Cu;
            // 0x1a9fa0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f9c) {
            ctx->pc = 0x1A9FB0u;
            goto label_1a9fb0;
        }
    }
    ctx->pc = 0x1A9FA4u;
    // 0x1a9fa4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1a9fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9fa8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1A9FA8u;
    {
        const bool branch_taken_0x1a9fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FA8u;
            // 0x1a9fac: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fa8) {
            ctx->pc = 0x1AA138u;
            goto label_1aa138;
        }
    }
    ctx->pc = 0x1A9FB0u;
label_1a9fb0:
    // 0x1a9fb0: 0x54c20020  bnel        $a2, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A9FB0u;
    {
        const bool branch_taken_0x1a9fb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9fb0) {
            ctx->pc = 0x1A9FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FB0u;
            // 0x1a9fb4: 0x96020046  lhu         $v0, 0x46($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA034u;
            goto label_1aa034;
        }
    }
    ctx->pc = 0x1A9FB8u;
    // 0x1a9fb8: 0x5620001e  bnel        $s1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A9FB8u;
    {
        const bool branch_taken_0x1a9fb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9fb8) {
            ctx->pc = 0x1A9FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FB8u;
            // 0x1a9fbc: 0x96020046  lhu         $v0, 0x46($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA034u;
            goto label_1aa034;
        }
    }
    ctx->pc = 0x1A9FC0u;
    // 0x1a9fc0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1a9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1a9fc4: 0x8c432608  lw          $v1, 0x2608($v0)
    ctx->pc = 0x1a9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9736)));
    // 0x1a9fc8: 0x24422608  addiu       $v0, $v0, 0x2608
    ctx->pc = 0x1a9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9736));
    // 0x1a9fcc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a9fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a9fd0: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1A9FD0u;
    {
        const bool branch_taken_0x1a9fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FD0u;
            // 0x1a9fd4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fd0) {
            ctx->pc = 0x1AA138u;
            goto label_1aa138;
        }
    }
    ctx->pc = 0x1A9FD8u;
label_1a9fd8:
    // 0x1a9fd8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1a9fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a9fdc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1a9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a9fe0: 0x5450000f  bnel        $v0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A9FE0u;
    {
        const bool branch_taken_0x1a9fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1a9fe0) {
            ctx->pc = 0x1A9FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FE0u;
            // 0x1a9fe4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA020u;
            goto label_1aa020;
        }
    }
    ctx->pc = 0x1A9FE8u;
    // 0x1a9fe8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a9fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a9fec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a9ff0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1a9ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a9ff4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1a9ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ff8: 0x8c44ca0c  lw          $a0, -0x35F4($v0)
    ctx->pc = 0x1a9ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
    // 0x1a9ffc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1aa000: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1aa000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1aa004: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1aa004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1aa008: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1aa008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1aa00c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1aa00cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1aa010: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1AA010u;
    SET_GPR_U32(ctx, 31, 0x1AA018u);
    ctx->pc = 0x1AA014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA010u;
            // 0x1aa014: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA018u; }
        if (ctx->pc != 0x1AA018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA018u; }
        if (ctx->pc != 0x1AA018u) { return; }
    }
    ctx->pc = 0x1AA018u;
    // 0x1aa018: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1AA018u;
    {
        const bool branch_taken_0x1aa018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA018u;
            // 0x1aa01c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa018) {
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA020u;
label_1aa020:
    // 0x1aa020: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1aa020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa024: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1AA024u;
    {
        const bool branch_taken_0x1aa024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AA028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA024u;
            // 0x1aa028: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa024) {
            ctx->pc = 0x1A9FD8u;
            runtime->cooperativeGuestYield();
            goto label_1a9fd8;
        }
    }
    ctx->pc = 0x1AA02Cu;
    // 0x1aa02c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1AA02Cu;
    {
        const bool branch_taken_0x1aa02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA02Cu;
            // 0x1aa030: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa02c) {
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA034u;
label_1aa034:
    // 0x1aa034: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1aa034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aa038: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1aa038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1aa03c: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x1AA03Cu;
    {
        const bool branch_taken_0x1aa03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa03c) {
            ctx->pc = 0x1AA040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA03Cu;
            // 0x1aa040: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA044u;
    // 0x1aa044: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1aa044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1aa048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aa04c: 0x24424290  addiu       $v0, $v0, 0x4290
    ctx->pc = 0x1aa04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17040));
    // 0x1aa050: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aa050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa054: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aa054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa058: 0x400008  jr          $v0
    ctx->pc = 0x1AA058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA100u: goto label_1aa100;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA060u;
label_1aa060:
    // 0x1aa060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa064: 0x54c20035  bnel        $a2, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1AA064u;
    {
        const bool branch_taken_0x1aa064 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa064) {
            ctx->pc = 0x1AA068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA064u;
            // 0x1aa068: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA06Cu;
    // 0x1aa06c: 0xc06a60e  jal         func_1A9838
    ctx->pc = 0x1AA06Cu;
    SET_GPR_U32(ctx, 31, 0x1AA074u);
    ctx->pc = 0x1AA070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA06Cu;
            // 0x1aa070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9838u;
    if (runtime->hasFunction(0x1A9838u)) {
        auto targetFn = runtime->lookupFunction(0x1A9838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA074u; }
        if (ctx->pc != 0x1AA074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9838_0x1a9838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA074u; }
        if (ctx->pc != 0x1AA074u) { return; }
    }
    ctx->pc = 0x1AA074u;
    // 0x1aa074: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1AA074u;
    {
        const bool branch_taken_0x1aa074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa074) {
            ctx->pc = 0x1AA078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA074u;
            // 0x1aa078: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA07Cu;
    // 0x1aa07c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1AA07Cu;
    {
        const bool branch_taken_0x1aa07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA07Cu;
            // 0x1aa080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa07c) {
            ctx->pc = 0x1AA0F0u;
            goto label_1aa0f0;
        }
    }
    ctx->pc = 0x1AA084u;
    // 0x1aa084: 0x0  nop
    ctx->pc = 0x1aa084u;
    // NOP
label_1aa088:
    // 0x1aa088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa08c: 0x54c2002b  bnel        $a2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1AA08Cu;
    {
        const bool branch_taken_0x1aa08c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa08c) {
            ctx->pc = 0x1AA090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA08Cu;
            // 0x1aa090: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA094u;
    // 0x1aa094: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1AA094u;
    {
        const bool branch_taken_0x1aa094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA094u;
            // 0x1aa098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa094) {
            ctx->pc = 0x1AA0F0u;
            goto label_1aa0f0;
        }
    }
    ctx->pc = 0x1AA09Cu;
    // 0x1aa09c: 0x0  nop
    ctx->pc = 0x1aa09cu;
    // NOP
label_1aa0a0:
    // 0x1aa0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa0a4: 0x54c20025  bnel        $a2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AA0A4u;
    {
        const bool branch_taken_0x1aa0a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa0a4) {
            ctx->pc = 0x1AA0A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0A4u;
            // 0x1aa0a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA0ACu;
    // 0x1aa0ac: 0x52200023  beql        $s1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AA0ACu;
    {
        const bool branch_taken_0x1aa0ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa0ac) {
            ctx->pc = 0x1AA0B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0ACu;
            // 0x1aa0b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA0B4u;
    // 0x1aa0b4: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1aa0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1aa0b8: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AA0B8u;
    {
        const bool branch_taken_0x1aa0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa0b8) {
            ctx->pc = 0x1AA0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0B8u;
            // 0x1aa0bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA0C0u;
    // 0x1aa0c0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1aa0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1aa0c4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1aa0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1aa0c8: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AA0C8u;
    {
        const bool branch_taken_0x1aa0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa0c8) {
            ctx->pc = 0x1AA0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0C8u;
            // 0x1aa0cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA0D0u;
    // 0x1aa0d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA0D0u;
    {
        const bool branch_taken_0x1aa0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0D0u;
            // 0x1aa0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0d0) {
            ctx->pc = 0x1AA0F0u;
            goto label_1aa0f0;
        }
    }
    ctx->pc = 0x1AA0D8u;
label_1aa0d8:
    // 0x1aa0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa0dc: 0x54c20017  bnel        $a2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AA0DCu;
    {
        const bool branch_taken_0x1aa0dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa0dc) {
            ctx->pc = 0x1AA0E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0DCu;
            // 0x1aa0e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA0E4u;
    // 0x1aa0e4: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AA0E4u;
    {
        const bool branch_taken_0x1aa0e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa0e4) {
            ctx->pc = 0x1AA0E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0E4u;
            // 0x1aa0e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA0ECu;
    // 0x1aa0ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa0f0:
    // 0x1aa0f0: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1AA0F0u;
    SET_GPR_U32(ctx, 31, 0x1AA0F8u);
    ctx->pc = 0x1AA0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0F0u;
            // 0x1aa0f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0F8u; }
        if (ctx->pc != 0x1AA0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0F8u; }
        if (ctx->pc != 0x1AA0F8u) { return; }
    }
    ctx->pc = 0x1AA0F8u;
    // 0x1aa0f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1AA0F8u;
    {
        const bool branch_taken_0x1aa0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0F8u;
            // 0x1aa0fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0f8) {
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA100u;
label_1aa100:
    // 0x1aa100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa104: 0x54c2000d  bnel        $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AA104u;
    {
        const bool branch_taken_0x1aa104 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa104) {
            ctx->pc = 0x1AA108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA104u;
            // 0x1aa108: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA10Cu;
    // 0x1aa10c: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1AA10Cu;
    {
        const bool branch_taken_0x1aa10c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa10c) {
            ctx->pc = 0x1AA110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA10Cu;
            // 0x1aa110: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA114u;
    // 0x1aa114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa118: 0xc0696f0  jal         func_1A5BC0
    ctx->pc = 0x1AA118u;
    SET_GPR_U32(ctx, 31, 0x1AA120u);
    ctx->pc = 0x1AA11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA118u;
            // 0x1aa11c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BC0u;
    if (runtime->hasFunction(0x1A5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA120u; }
        if (ctx->pc != 0x1AA120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5bc0_0x1a5c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA120u; }
        if (ctx->pc != 0x1AA120u) { return; }
    }
    ctx->pc = 0x1AA120u;
    // 0x1aa120: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA120u;
    {
        const bool branch_taken_0x1aa120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa120) {
            ctx->pc = 0x1AA124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA120u;
            // 0x1aa124: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA13Cu;
            goto label_1aa13c;
        }
    }
    ctx->pc = 0x1AA128u;
    // 0x1aa128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa12c: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1AA12Cu;
    SET_GPR_U32(ctx, 31, 0x1AA134u);
    ctx->pc = 0x1AA130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA12Cu;
            // 0x1aa130: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA134u; }
        if (ctx->pc != 0x1AA134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA134u; }
        if (ctx->pc != 0x1AA134u) { return; }
    }
    ctx->pc = 0x1AA134u;
    // 0x1aa134: 0x0  nop
    ctx->pc = 0x1aa134u;
    // NOP
label_1aa138:
    // 0x1aa138: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1aa138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa13c:
    // 0x1aa13c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1aa13cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aa140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa144: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1aa144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aa148: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA148u;
            // 0x1aa14c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA150u;
    // 0x1aa150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa158: 0xc06a548  jal         func_1A9520
    ctx->pc = 0x1AA158u;
    SET_GPR_U32(ctx, 31, 0x1AA160u);
    ctx->pc = 0x1A9520u;
    if (runtime->hasFunction(0x1A9520u)) {
        auto targetFn = runtime->lookupFunction(0x1A9520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA160u; }
        if (ctx->pc != 0x1AA160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9520_0x1a9520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA160u; }
        if (ctx->pc != 0x1AA160u) { return; }
    }
    ctx->pc = 0x1AA160u;
    // 0x1aa160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa164: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA164u;
            // 0x1aa168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA16Cu;
    // 0x1aa16c: 0x0  nop
    ctx->pc = 0x1aa16cu;
    // NOP
    // 0x1aa170: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA178u;
    // 0x1aa178: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aa178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aa17c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1aa17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1aa180: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1aa180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1aa184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aa188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aa18c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aa18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa190: 0x14c00013  bnez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AA190u;
    {
        const bool branch_taken_0x1aa190 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA190u;
            // 0x1aa194: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa190) {
            ctx->pc = 0x1AA1E0u;
            goto label_1aa1e0;
        }
    }
    ctx->pc = 0x1AA198u;
    // 0x1aa198: 0x96030046  lhu         $v1, 0x46($s0)
    ctx->pc = 0x1aa198u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x1aa19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa1a0: 0x5062008a  beql        $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1AA1A0u;
    {
        const bool branch_taken_0x1aa1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa1a0) {
            ctx->pc = 0x1AA1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1A0u;
            // 0x1aa1a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA1A8u;
    // 0x1aa1a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aa1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aa1ac: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1AA1ACu;
    SET_GPR_U32(ctx, 31, 0x1AA1B4u);
    ctx->pc = 0x1AA1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1ACu;
            // 0x1aa1b0: 0x8c44ca0c  lw          $a0, -0x35F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1B4u; }
        if (ctx->pc != 0x1AA1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1B4u; }
        if (ctx->pc != 0x1AA1B4u) { return; }
    }
    ctx->pc = 0x1AA1B4u;
    // 0x1aa1b4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1aa1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1aa1b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1aa1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1aa1bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1aa1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1aa1c0: 0x24632610  addiu       $v1, $v1, 0x2610
    ctx->pc = 0x1aa1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9744));
    // 0x1aa1c4: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1aa1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x1aa1c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1aa1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1aa1cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1aa1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1aa1d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1aa1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1aa1d4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1aa1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1aa1d8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1AA1D8u;
    {
        const bool branch_taken_0x1aa1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1D8u;
            // 0x1aa1dc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1d8) {
            ctx->pc = 0x1AA3C8u;
            goto label_1aa3c8;
        }
    }
    ctx->pc = 0x1AA1E0u;
label_1aa1e0:
    // 0x1aa1e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1aa1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aa1e4: 0x14c20014  bne         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AA1E4u;
    {
        const bool branch_taken_0x1aa1e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1E4u;
            // 0x1aa1e8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1e4) {
            ctx->pc = 0x1AA238u;
            goto label_1aa238;
        }
    }
    ctx->pc = 0x1AA1ECu;
    // 0x1aa1ec: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x1aa1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa1f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1aa1f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1aa1f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1aa1f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa1f8: 0x0  nop
    ctx->pc = 0x1aa1f8u;
    // NOP
    // 0x1aa1fc: 0x45020073  bc1fl       . + 4 + (0x73 << 2)
    ctx->pc = 0x1AA1FCu;
    {
        const bool branch_taken_0x1aa1fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa1fc) {
            ctx->pc = 0x1AA200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1FCu;
            // 0x1aa200: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA204u;
    // 0x1aa204: 0xc06a6c6  jal         func_1A9B18
    ctx->pc = 0x1AA204u;
    SET_GPR_U32(ctx, 31, 0x1AA20Cu);
    ctx->pc = 0x1AA208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA204u;
            // 0x1aa208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B18u;
    if (runtime->hasFunction(0x1A9B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA20Cu; }
        if (ctx->pc != 0x1AA20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B18_0x1a9b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA20Cu; }
        if (ctx->pc != 0x1AA20Cu) { return; }
    }
    ctx->pc = 0x1AA20Cu;
    // 0x1aa20c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1aa20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa210: 0x0  nop
    ctx->pc = 0x1aa210u;
    // NOP
    // 0x1aa214: 0x4502006d  bc1fl       . + 4 + (0x6D << 2)
    ctx->pc = 0x1AA214u;
    {
        const bool branch_taken_0x1aa214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa214) {
            ctx->pc = 0x1AA218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA214u;
            // 0x1aa218: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA21Cu;
    // 0x1aa21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa224: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1aa224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa228: 0xc06c6da  jal         func_1B1B68
    ctx->pc = 0x1AA228u;
    SET_GPR_U32(ctx, 31, 0x1AA230u);
    ctx->pc = 0x1AA22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA228u;
            // 0x1aa22c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B68u;
    if (runtime->hasFunction(0x1B1B68u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA230u; }
        if (ctx->pc != 0x1AA230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B68_0x1b1b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA230u; }
        if (ctx->pc != 0x1AA230u) { return; }
    }
    ctx->pc = 0x1AA230u;
    // 0x1aa230: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1AA230u;
    {
        const bool branch_taken_0x1aa230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA230u;
            // 0x1aa234: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa230) {
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA238u;
label_1aa238:
    // 0x1aa238: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA238u;
    {
        const bool branch_taken_0x1aa238 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA238u;
            // 0x1aa23c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa238) {
            ctx->pc = 0x1AA24Cu;
            goto label_1aa24c;
        }
    }
    ctx->pc = 0x1AA240u;
    // 0x1aa240: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1aa240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa244: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1AA244u;
    {
        const bool branch_taken_0x1aa244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA244u;
            // 0x1aa248: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa244) {
            ctx->pc = 0x1AA3C8u;
            goto label_1aa3c8;
        }
    }
    ctx->pc = 0x1AA24Cu;
label_1aa24c:
    // 0x1aa24c: 0x54c20021  bnel        $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AA24Cu;
    {
        const bool branch_taken_0x1aa24c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa24c) {
            ctx->pc = 0x1AA250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA24Cu;
            // 0x1aa250: 0x96030046  lhu         $v1, 0x46($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA2D4u;
            goto label_1aa2d4;
        }
    }
    ctx->pc = 0x1AA254u;
    // 0x1aa254: 0x5620001f  bnel        $s1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AA254u;
    {
        const bool branch_taken_0x1aa254 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa254) {
            ctx->pc = 0x1AA258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA254u;
            // 0x1aa258: 0x96030046  lhu         $v1, 0x46($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA2D4u;
            goto label_1aa2d4;
        }
    }
    ctx->pc = 0x1AA25Cu;
    // 0x1aa25c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1aa25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1aa260: 0x8c432610  lw          $v1, 0x2610($v0)
    ctx->pc = 0x1aa260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9744)));
    // 0x1aa264: 0x24422610  addiu       $v0, $v0, 0x2610
    ctx->pc = 0x1aa264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9744));
    // 0x1aa268: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1aa268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1aa26c: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1AA26Cu;
    {
        const bool branch_taken_0x1aa26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA26Cu;
            // 0x1aa270: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa26c) {
            ctx->pc = 0x1AA3C8u;
            goto label_1aa3c8;
        }
    }
    ctx->pc = 0x1AA274u;
    // 0x1aa274: 0x0  nop
    ctx->pc = 0x1aa274u;
    // NOP
label_1aa278:
    // 0x1aa278: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1aa278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1aa27c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1aa27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1aa280: 0x5450000f  bnel        $v0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AA280u;
    {
        const bool branch_taken_0x1aa280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1aa280) {
            ctx->pc = 0x1AA284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA280u;
            // 0x1aa284: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA2C0u;
            goto label_1aa2c0;
        }
    }
    ctx->pc = 0x1AA288u;
    // 0x1aa288: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1aa288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1aa28c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aa28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aa290: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1aa290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1aa294: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1aa294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa298: 0x8c44ca0c  lw          $a0, -0x35F4($v0)
    ctx->pc = 0x1aa298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
    // 0x1aa29c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1aa29cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1aa2a0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1aa2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1aa2a4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1aa2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1aa2a8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1aa2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1aa2ac: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1aa2acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1aa2b0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1AA2B0u;
    SET_GPR_U32(ctx, 31, 0x1AA2B8u);
    ctx->pc = 0x1AA2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2B0u;
            // 0x1aa2b4: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2B8u; }
        if (ctx->pc != 0x1AA2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2B8u; }
        if (ctx->pc != 0x1AA2B8u) { return; }
    }
    ctx->pc = 0x1AA2B8u;
    // 0x1aa2b8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1AA2B8u;
    {
        const bool branch_taken_0x1aa2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2B8u;
            // 0x1aa2bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2b8) {
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA2C0u;
label_1aa2c0:
    // 0x1aa2c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1aa2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa2c4: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1AA2C4u;
    {
        const bool branch_taken_0x1aa2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AA2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2C4u;
            // 0x1aa2c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2c4) {
            ctx->pc = 0x1AA278u;
            runtime->cooperativeGuestYield();
            goto label_1aa278;
        }
    }
    ctx->pc = 0x1AA2CCu;
    // 0x1aa2cc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1AA2CCu;
    {
        const bool branch_taken_0x1aa2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2CCu;
            // 0x1aa2d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2cc) {
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA2D4u;
label_1aa2d4:
    // 0x1aa2d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aa2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa2d8: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AA2D8u;
    {
        const bool branch_taken_0x1aa2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2D8u;
            // 0x1aa2dc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2d8) {
            ctx->pc = 0x1AA334u;
            goto label_1aa334;
        }
    }
    ctx->pc = 0x1AA2E0u;
    // 0x1aa2e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA2E0u;
    {
        const bool branch_taken_0x1aa2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2E0u;
            // 0x1aa2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2e0) {
            ctx->pc = 0x1AA2F8u;
            goto label_1aa2f8;
        }
    }
    ctx->pc = 0x1AA2E8u;
    // 0x1aa2e8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AA2E8u;
    {
        const bool branch_taken_0x1aa2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2E8u;
            // 0x1aa2ec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2e8) {
            ctx->pc = 0x1AA314u;
            goto label_1aa314;
        }
    }
    ctx->pc = 0x1AA2F0u;
    // 0x1aa2f0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1AA2F0u;
    {
        const bool branch_taken_0x1aa2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2F0u;
            // 0x1aa2f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2f0) {
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA2F8u;
label_1aa2f8:
    // 0x1aa2f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aa2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa2fc: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AA2FCu;
    {
        const bool branch_taken_0x1aa2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2FCu;
            // 0x1aa300: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2fc) {
            ctx->pc = 0x1AA36Cu;
            goto label_1aa36c;
        }
    }
    ctx->pc = 0x1AA304u;
    // 0x1aa304: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AA304u;
    {
        const bool branch_taken_0x1aa304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA304u;
            // 0x1aa308: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa304) {
            ctx->pc = 0x1AA394u;
            goto label_1aa394;
        }
    }
    ctx->pc = 0x1AA30Cu;
    // 0x1aa30c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1AA30Cu;
    {
        const bool branch_taken_0x1aa30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA30Cu;
            // 0x1aa310: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa30c) {
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA314u;
label_1aa314:
    // 0x1aa314: 0x54c2002d  bnel        $a2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1AA314u;
    {
        const bool branch_taken_0x1aa314 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa314) {
            ctx->pc = 0x1AA318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA314u;
            // 0x1aa318: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA31Cu;
    // 0x1aa31c: 0xc06a61c  jal         func_1A9870
    ctx->pc = 0x1AA31Cu;
    SET_GPR_U32(ctx, 31, 0x1AA324u);
    ctx->pc = 0x1AA320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA31Cu;
            // 0x1aa320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9870u;
    if (runtime->hasFunction(0x1A9870u)) {
        auto targetFn = runtime->lookupFunction(0x1A9870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA324u; }
        if (ctx->pc != 0x1AA324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9870_0x1a9870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA324u; }
        if (ctx->pc != 0x1AA324u) { return; }
    }
    ctx->pc = 0x1AA324u;
    // 0x1aa324: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1AA324u;
    {
        const bool branch_taken_0x1aa324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa324) {
            ctx->pc = 0x1AA328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA324u;
            // 0x1aa328: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA32Cu;
    // 0x1aa32c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AA32Cu;
    {
        const bool branch_taken_0x1aa32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA32Cu;
            // 0x1aa330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa32c) {
            ctx->pc = 0x1AA384u;
            goto label_1aa384;
        }
    }
    ctx->pc = 0x1AA334u;
label_1aa334:
    // 0x1aa334: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1aa334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aa338: 0x54c20024  bnel        $a2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1AA338u;
    {
        const bool branch_taken_0x1aa338 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa338) {
            ctx->pc = 0x1AA33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA338u;
            // 0x1aa33c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA340u;
    // 0x1aa340: 0x52200022  beql        $s1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1AA340u;
    {
        const bool branch_taken_0x1aa340 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa340) {
            ctx->pc = 0x1AA344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA340u;
            // 0x1aa344: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA348u;
    // 0x1aa348: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1aa348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1aa34c: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AA34Cu;
    {
        const bool branch_taken_0x1aa34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa34c) {
            ctx->pc = 0x1AA350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA34Cu;
            // 0x1aa350: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA354u;
    // 0x1aa354: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1aa354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1aa358: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1aa358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1aa35c: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AA35Cu;
    {
        const bool branch_taken_0x1aa35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa35c) {
            ctx->pc = 0x1AA360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA35Cu;
            // 0x1aa360: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA364u;
    // 0x1aa364: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA364u;
    {
        const bool branch_taken_0x1aa364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA364u;
            // 0x1aa368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa364) {
            ctx->pc = 0x1AA384u;
            goto label_1aa384;
        }
    }
    ctx->pc = 0x1AA36Cu;
label_1aa36c:
    // 0x1aa36c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1aa36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aa370: 0x54c20016  bnel        $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AA370u;
    {
        const bool branch_taken_0x1aa370 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa370) {
            ctx->pc = 0x1AA374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA370u;
            // 0x1aa374: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA378u;
    // 0x1aa378: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AA378u;
    {
        const bool branch_taken_0x1aa378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa378) {
            ctx->pc = 0x1AA37Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA378u;
            // 0x1aa37c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA380u;
    // 0x1aa380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa384:
    // 0x1aa384: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1AA384u;
    SET_GPR_U32(ctx, 31, 0x1AA38Cu);
    ctx->pc = 0x1AA388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA384u;
            // 0x1aa388: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA38Cu; }
        if (ctx->pc != 0x1AA38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA38Cu; }
        if (ctx->pc != 0x1AA38Cu) { return; }
    }
    ctx->pc = 0x1AA38Cu;
    // 0x1aa38c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AA38Cu;
    {
        const bool branch_taken_0x1aa38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA38Cu;
            // 0x1aa390: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa38c) {
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA394u;
label_1aa394:
    // 0x1aa394: 0x54c2000d  bnel        $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AA394u;
    {
        const bool branch_taken_0x1aa394 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa394) {
            ctx->pc = 0x1AA398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA394u;
            // 0x1aa398: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA39Cu;
    // 0x1aa39c: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1AA39Cu;
    {
        const bool branch_taken_0x1aa39c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa39c) {
            ctx->pc = 0x1AA3A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA39Cu;
            // 0x1aa3a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA3A4u;
    // 0x1aa3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3a8: 0xc0696f0  jal         func_1A5BC0
    ctx->pc = 0x1AA3A8u;
    SET_GPR_U32(ctx, 31, 0x1AA3B0u);
    ctx->pc = 0x1AA3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3A8u;
            // 0x1aa3ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BC0u;
    if (runtime->hasFunction(0x1A5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3B0u; }
        if (ctx->pc != 0x1AA3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5bc0_0x1a5c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3B0u; }
        if (ctx->pc != 0x1AA3B0u) { return; }
    }
    ctx->pc = 0x1AA3B0u;
    // 0x1aa3b0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA3B0u;
    {
        const bool branch_taken_0x1aa3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa3b0) {
            ctx->pc = 0x1AA3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3B0u;
            // 0x1aa3b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA3B8u;
    // 0x1aa3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3bc: 0xc06a416  jal         func_1A9058
    ctx->pc = 0x1AA3BCu;
    SET_GPR_U32(ctx, 31, 0x1AA3C4u);
    ctx->pc = 0x1AA3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3BCu;
            // 0x1aa3c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9058u;
    if (runtime->hasFunction(0x1A9058u)) {
        auto targetFn = runtime->lookupFunction(0x1A9058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3C4u; }
        if (ctx->pc != 0x1AA3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9058_0x1a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3C4u; }
        if (ctx->pc != 0x1AA3C4u) { return; }
    }
    ctx->pc = 0x1AA3C4u;
    // 0x1aa3c4: 0x0  nop
    ctx->pc = 0x1aa3c4u;
    // NOP
label_1aa3c8:
    // 0x1aa3c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1aa3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa3cc:
    // 0x1aa3cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1aa3ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa3d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aa3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa3d4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1aa3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aa3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3D8u;
            // 0x1aa3dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA3E0u;
    // 0x1aa3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa3e8: 0xc06a548  jal         func_1A9520
    ctx->pc = 0x1AA3E8u;
    SET_GPR_U32(ctx, 31, 0x1AA3F0u);
    ctx->pc = 0x1A9520u;
    if (runtime->hasFunction(0x1A9520u)) {
        auto targetFn = runtime->lookupFunction(0x1A9520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3F0u; }
        if (ctx->pc != 0x1AA3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9520_0x1a9520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3F0u; }
        if (ctx->pc != 0x1AA3F0u) { return; }
    }
    ctx->pc = 0x1AA3F0u;
    // 0x1aa3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3F4u;
            // 0x1aa3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA3FCu;
    // 0x1aa3fc: 0x0  nop
    ctx->pc = 0x1aa3fcu;
    // NOP
    // 0x1aa400: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA088u: goto label_1aa088;
            case 0x1AA0A0u: goto label_1aa0a0;
            case 0x1AA0D8u: goto label_1aa0d8;
            case 0x1AA0F0u: goto label_1aa0f0;
            case 0x1AA100u: goto label_1aa100;
            case 0x1AA138u: goto label_1aa138;
            case 0x1AA13Cu: goto label_1aa13c;
            case 0x1AA1E0u: goto label_1aa1e0;
            case 0x1AA238u: goto label_1aa238;
            case 0x1AA24Cu: goto label_1aa24c;
            case 0x1AA278u: goto label_1aa278;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2D4u: goto label_1aa2d4;
            case 0x1AA2F8u: goto label_1aa2f8;
            case 0x1AA314u: goto label_1aa314;
            case 0x1AA334u: goto label_1aa334;
            case 0x1AA36Cu: goto label_1aa36c;
            case 0x1AA384u: goto label_1aa384;
            case 0x1AA394u: goto label_1aa394;
            case 0x1AA3C8u: goto label_1aa3c8;
            case 0x1AA3CCu: goto label_1aa3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA408u;
}
