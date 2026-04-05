#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169DF0
// Address: 0x169df0 - 0x16a708
void sub_00169DF0_0x169df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169DF0_0x169df0");
#endif

    ctx->pc = 0x169df0u;

    // 0x169df0: 0x27bdf230  addiu       $sp, $sp, -0xDD0
    ctx->pc = 0x169df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963760));
    // 0x169df4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x169df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169df8: 0x7fb10db0  sq          $s1, 0xDB0($sp)
    ctx->pc = 0x169df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3504), GPR_VEC(ctx, 17));
    // 0x169dfc: 0x7fb20da0  sq          $s2, 0xDA0($sp)
    ctx->pc = 0x169dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3488), GPR_VEC(ctx, 18));
    // 0x169e00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x169e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e04: 0x7fb00dc0  sq          $s0, 0xDC0($sp)
    ctx->pc = 0x169e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3520), GPR_VEC(ctx, 16));
    // 0x169e08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x169e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e0c: 0x7fb30d90  sq          $s3, 0xD90($sp)
    ctx->pc = 0x169e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3472), GPR_VEC(ctx, 19));
    // 0x169e10: 0x7fb40d80  sq          $s4, 0xD80($sp)
    ctx->pc = 0x169e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3456), GPR_VEC(ctx, 20));
    // 0x169e14: 0x7fb50d70  sq          $s5, 0xD70($sp)
    ctx->pc = 0x169e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3440), GPR_VEC(ctx, 21));
    // 0x169e18: 0x7fb60d60  sq          $s6, 0xD60($sp)
    ctx->pc = 0x169e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3424), GPR_VEC(ctx, 22));
    // 0x169e1c: 0x7fb70d50  sq          $s7, 0xD50($sp)
    ctx->pc = 0x169e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3408), GPR_VEC(ctx, 23));
    // 0x169e20: 0x7fbe0d40  sq          $fp, 0xD40($sp)
    ctx->pc = 0x169e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3392), GPR_VEC(ctx, 30));
    // 0x169e24: 0xffbf0d30  sd          $ra, 0xD30($sp)
    ctx->pc = 0x169e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3376), GPR_U64(ctx, 31));
    // 0x169e28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x169e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x169e2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x169e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169e30:
    // 0x169e30: 0x0  nop
    ctx->pc = 0x169e30u;
    // NOP
    // 0x169e34: 0x0  nop
    ctx->pc = 0x169e34u;
    // NOP
    // 0x169e38: 0x0  nop
    ctx->pc = 0x169e38u;
    // NOP
    // 0x169e3c: 0x0  nop
    ctx->pc = 0x169e3cu;
    // NOP
    // 0x169e40: 0x0  nop
    ctx->pc = 0x169e40u;
    // NOP
    // 0x169e44: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x169E44u;
    {
        const bool branch_taken_0x169e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x169E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169E44u;
            // 0x169e48: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e44) {
            ctx->pc = 0x169E30u;
            runtime->cooperativeGuestYield();
            goto label_169e30;
        }
    }
    ctx->pc = 0x169E4Cu;
    // 0x169e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e50: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x169E50u;
    SET_GPR_U32(ctx, 31, 0x169E58u);
    ctx->pc = 0x169E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E50u;
            // 0x169e54: 0x2630037c  addiu       $s0, $s1, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 892));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E58u; }
        if (ctx->pc != 0x169E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E58u; }
        if (ctx->pc != 0x169E58u) { return; }
    }
    ctx->pc = 0x169E58u;
    // 0x169e58: 0x7a250320  lq          $a1, 0x320($s1)
    ctx->pc = 0x169e58u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x169e5c: 0xc05a9c2  jal         func_16A708
    ctx->pc = 0x169E5Cu;
    SET_GPR_U32(ctx, 31, 0x169E64u);
    ctx->pc = 0x169E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E5Cu;
            // 0x169e60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A708u;
    if (runtime->hasFunction(0x16A708u)) {
        auto targetFn = runtime->lookupFunction(0x16A708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E64u; }
        if (ctx->pc != 0x169E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16a708_0x16a710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E64u; }
        if (ctx->pc != 0x169E64u) { return; }
    }
    ctx->pc = 0x169E64u;
    // 0x169e64: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x169E64u;
    SET_GPR_U32(ctx, 31, 0x169E6Cu);
    ctx->pc = 0x169E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E64u;
            // 0x169e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E6Cu; }
        if (ctx->pc != 0x169E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E6Cu; }
        if (ctx->pc != 0x169E6Cu) { return; }
    }
    ctx->pc = 0x169E6Cu;
    // 0x169e6c: 0x7a250300  lq          $a1, 0x300($s1)
    ctx->pc = 0x169e6cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x169e70: 0xc05a9c4  jal         func_16A710
    ctx->pc = 0x169E70u;
    SET_GPR_U32(ctx, 31, 0x169E78u);
    ctx->pc = 0x169E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E70u;
            // 0x169e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A710u;
    if (runtime->hasFunction(0x16A710u)) {
        auto targetFn = runtime->lookupFunction(0x16A710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E78u; }
        if (ctx->pc != 0x169E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16a710_0x16a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E78u; }
        if (ctx->pc != 0x169E78u) { return; }
    }
    ctx->pc = 0x169E78u;
    // 0x169e78: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x169E78u;
    SET_GPR_U32(ctx, 31, 0x169E80u);
    ctx->pc = 0x169E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E78u;
            // 0x169e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E80u; }
        if (ctx->pc != 0x169E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E80u; }
        if (ctx->pc != 0x169E80u) { return; }
    }
    ctx->pc = 0x169E80u;
    // 0x169e80: 0x7a270100  lq          $a3, 0x100($s1)
    ctx->pc = 0x169e80u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x169e84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x169e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e88: 0x7a220120  lq          $v0, 0x120($s1)
    ctx->pc = 0x169e88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x169e8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e90: 0x7a260110  lq          $a2, 0x110($s1)
    ctx->pc = 0x169e90u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x169e94: 0x7a230130  lq          $v1, 0x130($s1)
    ctx->pc = 0x169e94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x169e98: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x169e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x169e9c: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x169e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x169ea0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x169ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x169ea4: 0xc05a9c6  jal         func_16A718
    ctx->pc = 0x169EA4u;
    SET_GPR_U32(ctx, 31, 0x169EACu);
    ctx->pc = 0x169EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EA4u;
            // 0x169ea8: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A718u;
    if (runtime->hasFunction(0x16A718u)) {
        auto targetFn = runtime->lookupFunction(0x16A718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EACu; }
        if (ctx->pc != 0x169EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16a718_0x16a778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EACu; }
        if (ctx->pc != 0x169EACu) { return; }
    }
    ctx->pc = 0x169EACu;
    // 0x169eac: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x169EACu;
    SET_GPR_U32(ctx, 31, 0x169EB4u);
    ctx->pc = 0x169EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EACu;
            // 0x169eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EB4u; }
        if (ctx->pc != 0x169EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EB4u; }
        if (ctx->pc != 0x169EB4u) { return; }
    }
    ctx->pc = 0x169EB4u;
    // 0x169eb4: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x169EB4u;
    SET_GPR_U32(ctx, 31, 0x169EBCu);
    ctx->pc = 0x169EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EB4u;
            // 0x169eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EBCu; }
        if (ctx->pc != 0x169EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EBCu; }
        if (ctx->pc != 0x169EBCu) { return; }
    }
    ctx->pc = 0x169EBCu;
    // 0x169ebc: 0x7a260300  lq          $a2, 0x300($s1)
    ctx->pc = 0x169ebcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x169ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ec4: 0xc05a9de  jal         func_16A778
    ctx->pc = 0x169EC4u;
    SET_GPR_U32(ctx, 31, 0x169ECCu);
    ctx->pc = 0x169EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EC4u;
            // 0x169ec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A778u;
    if (runtime->hasFunction(0x16A778u)) {
        auto targetFn = runtime->lookupFunction(0x16A778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169ECCu; }
        if (ctx->pc != 0x169ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16a778_0x16a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169ECCu; }
        if (ctx->pc != 0x169ECCu) { return; }
    }
    ctx->pc = 0x169ECCu;
    // 0x169ecc: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x169eccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x169ed0: 0x8ce2dd58  lw          $v0, -0x22A8($a3)
    ctx->pc = 0x169ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294958424)));
    // 0x169ed4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169ED4u;
    {
        const bool branch_taken_0x169ed4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x169ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169ED4u;
            // 0x169ed8: 0xc6210370  lwc1        $f1, 0x370($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ed4) {
            ctx->pc = 0x169EECu;
            goto label_169eec;
        }
    }
    ctx->pc = 0x169EDCu;
    // 0x169edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169ee0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169ee4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x169EE4u;
    {
        const bool branch_taken_0x169ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169EE4u;
            // 0x169ee8: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ee4) {
            ctx->pc = 0x169F0Cu;
            goto label_169f0c;
        }
    }
    ctx->pc = 0x169EECu;
label_169eec:
    // 0x169eec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x169eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x169ef0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x169ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x169ef4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169efc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169f00: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x169f00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x169f04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169f08: 0x8ce2dd58  lw          $v0, -0x22A8($a3)
    ctx->pc = 0x169f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294958424)));
label_169f0c:
    // 0x169f0c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169f0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x169f10: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x169f10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x169f14: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169F14u;
    {
        const bool branch_taken_0x169f14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x169F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F14u;
            // 0x169f18: 0xc6210374  lwc1        $f1, 0x374($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f14) {
            ctx->pc = 0x169F2Cu;
            goto label_169f2c;
        }
    }
    ctx->pc = 0x169F1Cu;
    // 0x169f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169f24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169F24u;
    {
        const bool branch_taken_0x169f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F24u;
            // 0x169f28: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f24) {
            ctx->pc = 0x169F48u;
            goto label_169f48;
        }
    }
    ctx->pc = 0x169F2Cu;
label_169f2c:
    // 0x169f2c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x169f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x169f30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x169f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x169f34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169f40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x169f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x169f44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_169f48:
    // 0x169f48: 0x24e2dd58  addiu       $v0, $a3, -0x22A8
    ctx->pc = 0x169f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958424));
    // 0x169f4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x169f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x169f50: 0xc6210368  lwc1        $f1, 0x368($s1)
    ctx->pc = 0x169f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169f54: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169f54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x169f58: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x169f58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x169f5c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169F5Cu;
    {
        const bool branch_taken_0x169f5c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x169F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F5Cu;
            // 0x169f60: 0x244affff  addiu       $t2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f5c) {
            ctx->pc = 0x169F74u;
            goto label_169f74;
        }
    }
    ctx->pc = 0x169F64u;
    // 0x169f64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x169f64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169f6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169F6Cu;
    {
        const bool branch_taken_0x169f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169F6Cu;
            // 0x169f70: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f6c) {
            ctx->pc = 0x169F90u;
            goto label_169f90;
        }
    }
    ctx->pc = 0x169F74u;
label_169f74:
    // 0x169f74: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x169f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x169f78: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x169f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x169f7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169f84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169f88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x169f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x169f8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_169f90:
    // 0x169f90: 0x24e2dd58  addiu       $v0, $a3, -0x22A8
    ctx->pc = 0x169f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958424));
    // 0x169f94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x169f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x169f98: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x169f9c: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x169f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x169fa0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169FA0u;
    {
        const bool branch_taken_0x169fa0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x169FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169FA0u;
            // 0x169fa4: 0xc621036c  lwc1        $f1, 0x36C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169fa0) {
            ctx->pc = 0x169FB8u;
            goto label_169fb8;
        }
    }
    ctx->pc = 0x169FA8u;
    // 0x169fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169fac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169fb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169FB0u;
    {
        const bool branch_taken_0x169fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169FB0u;
            // 0x169fb4: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169fb0) {
            ctx->pc = 0x169FD4u;
            goto label_169fd4;
        }
    }
    ctx->pc = 0x169FB8u;
label_169fb8:
    // 0x169fb8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x169fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x169fbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x169fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x169fc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169fc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169fcc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x169fccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x169fd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_169fd4:
    // 0x169fd4: 0x16a1021  addu        $v0, $t3, $t2
    ctx->pc = 0x169fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x169fd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169fdc: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x169fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x169fe0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x169fe0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x169fe4: 0x8e2603a0  lw          $a2, 0x3A0($s1)
    ctx->pc = 0x169fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 928)));
    // 0x169fe8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169fe8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x169fec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x169fecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x169ff0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x169ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x169ff4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x169ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x169ff8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x169ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x169ffc: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x169ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x16a000: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x16a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x16a004: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x16a004u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x16a008: 0x24a8ffff  addiu       $t0, $a1, -0x1
    ctx->pc = 0x16a008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x16a00c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x16a00cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16a010: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16a010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x16a014: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x16a014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x16a018: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x16a018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x16a01c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x16A01Cu;
    {
        const bool branch_taken_0x16a01c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A01Cu;
            // 0x16a020: 0xfe420058  sd          $v0, 0x58($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a01c) {
            ctx->pc = 0x16A044u;
            goto label_16a044;
        }
    }
    ctx->pc = 0x16A024u;
    // 0x16a024: 0x24e2dd58  addiu       $v0, $a3, -0x22A8
    ctx->pc = 0x16a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958424));
    // 0x16a028: 0x8ce3dd58  lw          $v1, -0x22A8($a3)
    ctx->pc = 0x16a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294958424)));
    // 0x16a02c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16a030: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x16a030u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a034: 0x246affff  addiu       $t2, $v1, -0x1
    ctx->pc = 0x16a034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16a038: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16a038u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a03c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16A03Cu;
    {
        const bool branch_taken_0x16a03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A03Cu;
            // 0x16a040: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a03c) {
            ctx->pc = 0x16A09Cu;
            goto label_16a09c;
        }
    }
    ctx->pc = 0x16A044u;
label_16a044:
    // 0x16a044: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a048: 0x8ce4dd58  lw          $a0, -0x22A8($a3)
    ctx->pc = 0x16a048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294958424)));
    // 0x16a04c: 0x24e3dd58  addiu       $v1, $a3, -0x22A8
    ctx->pc = 0x16a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958424));
    // 0x16a050: 0x4b282a  slt         $a1, $v0, $t3
    ctx->pc = 0x16a050u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x16a054: 0x48382a  slt         $a3, $v0, $t0
    ctx->pc = 0x16a054u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x16a058: 0x4a302a  slt         $a2, $v0, $t2
    ctx->pc = 0x16a058u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x16a05c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16a060: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x16a060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x16a064: 0x5580a  movz        $t3, $zero, $a1
    ctx->pc = 0x16a064u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x16a068: 0x2480a  movz        $t1, $zero, $v0
    ctx->pc = 0x16a068u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x16a06c: 0x6500a  movz        $t2, $zero, $a2
    ctx->pc = 0x16a06cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
    // 0x16a070: 0x7400a  movz        $t0, $zero, $a3
    ctx->pc = 0x16a070u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x16a074: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x16a074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16a078: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x16a078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16a07c: 0x144302a  slt         $a2, $t2, $a0
    ctx->pc = 0x16a07cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16a080: 0x103382a  slt         $a3, $t0, $v1
    ctx->pc = 0x16a080u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16a084: 0x164202a  slt         $a0, $t3, $a0
    ctx->pc = 0x16a084u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16a088: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x16a088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16a08c: 0x46500a  movz        $t2, $v0, $a2
    ctx->pc = 0x16a08cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x16a090: 0xa7400a  movz        $t0, $a1, $a3
    ctx->pc = 0x16a090u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x16a094: 0x44580a  movz        $t3, $v0, $a0
    ctx->pc = 0x16a094u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 2));
    // 0x16a098: 0xa3480a  movz        $t1, $a1, $v1
    ctx->pc = 0x16a098u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_16a09c:
    // 0x16a09c: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x16a09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x16a0a0: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x16a0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x16a0a4: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x16a0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x16a0a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x16a0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x16a0ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16a0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16a0b0: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x16a0b0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x16a0b4: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x16a0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x16a0b8: 0x27c41080  addiu       $a0, $fp, 0x1080
    ctx->pc = 0x16a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4224));
    // 0x16a0bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16a0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16a0c0: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x16a0c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a0c4: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x16a0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
    // 0x16a0c8: 0x2405024b  addiu       $a1, $zero, 0x24B
    ctx->pc = 0x16a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 587));
    // 0x16a0cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16a0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16a0d0: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x16a0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x16a0d4: 0x240200f6  addiu       $v0, $zero, 0xF6
    ctx->pc = 0x16a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x16a0d8: 0xfe430050  sd          $v1, 0x50($s2)
    ctx->pc = 0x16a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 3));
    // 0x16a0dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x16a0e0: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x16a0e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x16a0e4: 0xafa90d20  sw          $t1, 0xD20($sp)
    ctx->pc = 0x16a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3360), GPR_U32(ctx, 9));
    // 0x16a0e8: 0x24e6fd30  addiu       $a2, $a3, -0x2D0
    ctx->pc = 0x16a0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966576));
    // 0x16a0ec: 0xafc51080  sw          $a1, 0x1080($fp)
    ctx->pc = 0x16a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4224), GPR_U32(ctx, 5));
    // 0x16a0f0: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x16a0f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x16a0f4: 0xafa60698  sw          $a2, 0x698($sp)
    ctx->pc = 0x16a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1688), GPR_U32(ctx, 6));
    // 0x16a0f8: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x16a0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x16a0fc: 0xaec01088  sw          $zero, 0x1088($s6)
    ctx->pc = 0x16a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4232), GPR_U32(ctx, 0));
    // 0x16a100: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a104: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x16a104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x16a108: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x16a108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a10c: 0x0  nop
    ctx->pc = 0x16a10cu;
    // NOP
label_16a110:
    // 0x16a110: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a114: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16a114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16a118: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x16a118u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16a11c: 0x2c820063  sltiu       $v0, $a0, 0x63
    ctx->pc = 0x16a11cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x16a120: 0x0  nop
    ctx->pc = 0x16a120u;
    // NOP
    // 0x16a124: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16A124u;
    {
        const bool branch_taken_0x16a124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A124u;
            // 0x16a128: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a124) {
            ctx->pc = 0x16A110u;
            runtime->cooperativeGuestYield();
            goto label_16a110;
        }
    }
    ctx->pc = 0x16A12Cu;
    // 0x16a12c: 0xfe200638  sd          $zero, 0x638($s1)
    ctx->pc = 0x16a12cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1592), GPR_U64(ctx, 0));
    // 0x16a130: 0xfe200630  sd          $zero, 0x630($s1)
    ctx->pc = 0x16a130u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1584), GPR_U64(ctx, 0));
    // 0x16a134: 0xafb0004c  sw          $s0, 0x4C($sp)
    ctx->pc = 0x16a134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
    // 0x16a138: 0x24170018  addiu       $s7, $zero, 0x18
    ctx->pc = 0x16a138u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16a13c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x16a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x16a140: 0x8fa50d20  lw          $a1, 0xD20($sp)
    ctx->pc = 0x16a140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3360)));
    // 0x16a144: 0x2483fd10  addiu       $v1, $a0, -0x2F0
    ctx->pc = 0x16a144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966544));
    // 0x16a148: 0xafa006a4  sw          $zero, 0x6A4($sp)
    ctx->pc = 0x16a148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1700), GPR_U32(ctx, 0));
    // 0x16a14c: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x16a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x16a150: 0xafa006ac  sw          $zero, 0x6AC($sp)
    ctx->pc = 0x16a150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1708), GPR_U32(ctx, 0));
    // 0x16a154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a158: 0xafa006a8  sw          $zero, 0x6A8($sp)
    ctx->pc = 0x16a158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1704), GPR_U32(ctx, 0));
    // 0x16a15c: 0xacb70660  sw          $s7, 0x660($a1)
    ctx->pc = 0x16a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1632), GPR_U32(ctx, 23));
    // 0x16a160: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x16a160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x16a164: 0x8fa506a4  lw          $a1, 0x6A4($sp)
    ctx->pc = 0x16a164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1700)));
    // 0x16a168: 0xafa30698  sw          $v1, 0x698($sp)
    ctx->pc = 0x16a168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1688), GPR_U32(ctx, 3));
    // 0x16a16c: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x16a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
    // 0x16a170: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A170u;
    {
        const bool branch_taken_0x16a170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A170u;
            // 0x16a174: 0xafb00040  sw          $s0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a170) {
            ctx->pc = 0x16A188u;
            goto label_16a188;
        }
    }
    ctx->pc = 0x16A178u;
    // 0x16a178: 0x8fa206a0  lw          $v0, 0x6A0($sp)
    ctx->pc = 0x16a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1696)));
    // 0x16a17c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a180: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x16a180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16a184: 0x0  nop
    ctx->pc = 0x16a184u;
    // NOP
label_16a188:
    // 0x16a188: 0x8fa206a0  lw          $v0, 0x6A0($sp)
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1696)));
    // 0x16a18c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x16a18cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a190: 0x2a51823  subu        $v1, $s5, $a1
    ctx->pc = 0x16a190u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x16a194: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x16a194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x16a198: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a19c: 0xafa306a4  sw          $v1, 0x6A4($sp)
    ctx->pc = 0x16a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1700), GPR_U32(ctx, 3));
    // 0x16a1a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16a1a4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x16a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x16a1a8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x16a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x16a1ac: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x16a1acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x16a1b0: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x16a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x16a1b4: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x16a1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x16a1b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x16a1bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16A1BCu;
    {
        const bool branch_taken_0x16a1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1BCu;
            // 0x16a1c0: 0x3c070033  lui         $a3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1bc) {
            ctx->pc = 0x16A1E8u;
            goto label_16a1e8;
        }
    }
    ctx->pc = 0x16A1C4u;
    // 0x16a1c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x16a1c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a1cc: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x16a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x16a1d0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x16a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x16a1d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a1d8: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x16a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x16a1dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a1e0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x16a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x16a1e4: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x16a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_16a1e8:
    // 0x16a1e8: 0x8fa90d20  lw          $t1, 0xD20($sp)
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3360)));
    // 0x16a1ec: 0x24e5ed68  addiu       $a1, $a3, -0x1298
    ctx->pc = 0x16a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962536));
    // 0x16a1f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16a1f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a1f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a1fc: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x16a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x16a200: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16a204: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x16A204u;
    SET_GPR_U32(ctx, 31, 0x16A20Cu);
    ctx->pc = 0x16A208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A204u;
            // 0x16a208: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A20Cu; }
        if (ctx->pc != 0x16A20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A20Cu; }
        if (ctx->pc != 0x16A20Cu) { return; }
    }
    ctx->pc = 0x16A20Cu;
    // 0x16a20c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x16a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x16a210: 0x2449bb98  addiu       $t1, $v0, -0x4468
    ctx->pc = 0x16a210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949784));
    // 0x16a214: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x16a214u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x16a218: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x16a218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x16a21c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a220: 0x8ec71088  lw          $a3, 0x1088($s6)
    ctx->pc = 0x16a220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4232)));
    // 0x16a224: 0x27c41080  addiu       $a0, $fp, 0x1080
    ctx->pc = 0x16a224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4224));
    // 0x16a228: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x16a228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x16a22c: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x16a22cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x16a230: 0x2a73823  subu        $a3, $s5, $a3
    ctx->pc = 0x16a230u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x16a234: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x16a234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x16a238: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x16a238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x16a23c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x16a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x16a240: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16a244: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x16a244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x16a248: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16a248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a24c: 0xad280010  sw          $t0, 0x10($t1)
    ctx->pc = 0x16a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 8));
    // 0x16a250: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16a254: 0xc04fe5c  jal         func_13F970
    ctx->pc = 0x16A254u;
    SET_GPR_U32(ctx, 31, 0x16A25Cu);
    ctx->pc = 0x16A258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A254u;
            // 0x16a258: 0xaec71088  sw          $a3, 0x1088($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4232), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F970u;
    if (runtime->hasFunction(0x13F970u)) {
        auto targetFn = runtime->lookupFunction(0x13F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A25Cu; }
        if (ctx->pc != 0x16A25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f970_0x13f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A25Cu; }
        if (ctx->pc != 0x16A25Cu) { return; }
    }
    ctx->pc = 0x16A25Cu;
    // 0x16a25c: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x16a25cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x16a260: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x16a260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x16a264: 0x8e65f168  lw          $a1, -0xE98($s3)
    ctx->pc = 0x16a264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963560)));
    // 0x16a268: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x16a268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x16a26c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x16a26cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x16a270: 0xde430058  ld          $v1, 0x58($s2)
    ctx->pc = 0x16a270u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x16a274: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x16a274u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x16a278: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x16a278u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x16a27c: 0x3303f  dsra32      $a2, $v1, 0
    ctx->pc = 0x16a27cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16a280: 0x8e62f168  lw          $v0, -0xE98($s3)
    ctx->pc = 0x16a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963560)));
    // 0x16a284: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x16a284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16a288: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x16a288u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16a28c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x16a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16a290: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x16a290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x16a294: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x16a294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x16a298: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x16a298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x16a29c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x16a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x16a2a0: 0xac570018  sw          $s7, 0x18($v0)
    ctx->pc = 0x16a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 23));
    // 0x16a2a4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x16a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x16a2a8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x16a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x16a2ac: 0xc04fe72  jal         func_13F9C8
    ctx->pc = 0x16A2ACu;
    SET_GPR_U32(ctx, 31, 0x16A2B4u);
    ctx->pc = 0x16A2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2ACu;
            // 0x16a2b0: 0xae65f168  sw          $a1, -0xE98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294963560), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F9C8u;
    if (runtime->hasFunction(0x13F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2B4u; }
        if (ctx->pc != 0x16A2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f9c8_0x13fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2B4u; }
        if (ctx->pc != 0x16A2B4u) { return; }
    }
    ctx->pc = 0x16A2B4u;
    // 0x16a2b4: 0x8e66f168  lw          $a2, -0xE98($s3)
    ctx->pc = 0x16a2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963560)));
    // 0x16a2b8: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x16a2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x16a2bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16A2BCu;
    {
        const bool branch_taken_0x16a2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2BCu;
            // 0x16a2c0: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2bc) {
            ctx->pc = 0x16A2E8u;
            goto label_16a2e8;
        }
    }
    ctx->pc = 0x16A2C4u;
    // 0x16a2c4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x16a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_16a2c8:
    // 0x16a2c8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x16a2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x16a2cc: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x16a2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x16a2d0: 0x0  nop
    ctx->pc = 0x16a2d0u;
    // NOP
    // 0x16a2d4: 0x0  nop
    ctx->pc = 0x16a2d4u;
    // NOP
    // 0x16a2d8: 0x0  nop
    ctx->pc = 0x16a2d8u;
    // NOP
    // 0x16a2dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16A2DCu;
    {
        const bool branch_taken_0x16a2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a2dc) {
            ctx->pc = 0x16A2E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2DCu;
            // 0x16a2e0: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A2C8u;
            runtime->cooperativeGuestYield();
            goto label_16a2c8;
        }
    }
    ctx->pc = 0x16A2E4u;
    // 0x16a2e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x16a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_16a2e8:
    // 0x16a2e8: 0xae66f168  sw          $a2, -0xE98($s3)
    ctx->pc = 0x16a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294963560), GPR_U32(ctx, 6));
    // 0x16a2ec: 0x8c65101c  lw          $a1, 0x101C($v1)
    ctx->pc = 0x16a2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4124)));
    // 0x16a2f0: 0x26510090  addiu       $s1, $s2, 0x90
    ctx->pc = 0x16a2f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x16a2f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2f8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x16A2F8u;
    SET_GPR_U32(ctx, 31, 0x16A300u);
    ctx->pc = 0x16A2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2F8u;
            // 0x16a2fc: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A300u; }
        if (ctx->pc != 0x16A300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A300u; }
        if (ctx->pc != 0x16A300u) { return; }
    }
    ctx->pc = 0x16A300u;
    // 0x16a300: 0x8e64f168  lw          $a0, -0xE98($s3)
    ctx->pc = 0x16a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963560)));
    // 0x16a304: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x16a304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x16a308: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16A308u;
    {
        const bool branch_taken_0x16a308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A308u;
            // 0x16a30c: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a308) {
            ctx->pc = 0x16A338u;
            goto label_16a338;
        }
    }
    ctx->pc = 0x16A310u;
    // 0x16a310: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16a310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16a314: 0x0  nop
    ctx->pc = 0x16a314u;
    // NOP
label_16a318:
    // 0x16a318: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x16a318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x16a31c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x16a31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x16a320: 0x0  nop
    ctx->pc = 0x16a320u;
    // NOP
    // 0x16a324: 0x0  nop
    ctx->pc = 0x16a324u;
    // NOP
    // 0x16a328: 0x0  nop
    ctx->pc = 0x16a328u;
    // NOP
    // 0x16a32c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16A32Cu;
    {
        const bool branch_taken_0x16a32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a32c) {
            ctx->pc = 0x16A330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A32Cu;
            // 0x16a330: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A318u;
            runtime->cooperativeGuestYield();
            goto label_16a318;
        }
    }
    ctx->pc = 0x16A334u;
    // 0x16a334: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x16a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_16a338:
    // 0x16a338: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x16a338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x16a33c: 0x24a6ed68  addiu       $a2, $a1, -0x1298
    ctx->pc = 0x16a33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962536));
    // 0x16a340: 0xae64f168  sw          $a0, -0xE98($s3)
    ctx->pc = 0x16a340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294963560), GPR_U32(ctx, 4));
    // 0x16a344: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x16a344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16a348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a34c: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x16a34cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x16a350: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16a354: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x16a354u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x16a358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a35c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A35Cu;
    {
        const bool branch_taken_0x16a35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A35Cu;
            // 0x16a360: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a35c) {
            ctx->pc = 0x16A374u;
            goto label_16a374;
        }
    }
    ctx->pc = 0x16A364u;
    // 0x16a364: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16a364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16a368: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16a368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16a36c: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x16A36Cu;
    SET_GPR_U32(ctx, 31, 0x16A374u);
    ctx->pc = 0x16A370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A36Cu;
            // 0x16a370: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A374u; }
        if (ctx->pc != 0x16A374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A374u; }
        if (ctx->pc != 0x16A374u) { return; }
    }
    ctx->pc = 0x16A374u;
label_16a374:
    // 0x16a374: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x16a374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x16a378: 0x24e5bb98  addiu       $a1, $a3, -0x4468
    ctx->pc = 0x16a378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949784));
    // 0x16a37c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x16a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x16a380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a384: 0x2408024b  addiu       $t0, $zero, 0x24B
    ctx->pc = 0x16a384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 587));
    // 0x16a388: 0x8ec41088  lw          $a0, 0x1088($s6)
    ctx->pc = 0x16a388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4232)));
    // 0x16a38c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16a390: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x16a390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x16a394: 0x27c61080  addiu       $a2, $fp, 0x1080
    ctx->pc = 0x16a394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4224));
    // 0x16a398: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x16a398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16a39c: 0x3c09002c  lui         $t1, 0x2C
    ctx->pc = 0x16a39cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)44 << 16));
    // 0x16a3a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a3a4: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x16a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x16a3a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16a3ac: 0xae500140  sw          $s0, 0x140($s2)
    ctx->pc = 0x16a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 16));
    // 0x16a3b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a3b4: 0x2527fd30  addiu       $a3, $t1, -0x2D0
    ctx->pc = 0x16a3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966576));
    // 0x16a3b8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x16a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x16a3bc: 0x27b006c8  addiu       $s0, $sp, 0x6C8
    ctx->pc = 0x16a3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1736));
    // 0x16a3c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16a3c4: 0xae510144  sw          $s1, 0x144($s2)
    ctx->pc = 0x16a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 17));
    // 0x16a3c8: 0xa6420060  sh          $v0, 0x60($s2)
    ctx->pc = 0x16a3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a3cc: 0x27b506b0  addiu       $s5, $sp, 0x6B0
    ctx->pc = 0x16a3ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
    // 0x16a3d0: 0xafc81080  sw          $t0, 0x1080($fp)
    ctx->pc = 0x16a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4224), GPR_U32(ctx, 8));
    // 0x16a3d4: 0x265100c0  addiu       $s1, $s2, 0xC0
    ctx->pc = 0x16a3d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x16a3d8: 0xafa70d08  sw          $a3, 0xD08($sp)
    ctx->pc = 0x16a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3336), GPR_U32(ctx, 7));
    // 0x16a3dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3e0: 0xaec01088  sw          $zero, 0x1088($s6)
    ctx->pc = 0x16a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4232), GPR_U32(ctx, 0));
    // 0x16a3e4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x16a3e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3e8: 0xafa006c0  sw          $zero, 0x6C0($sp)
    ctx->pc = 0x16a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1728), GPR_U32(ctx, 0));
    // 0x16a3ec: 0x0  nop
    ctx->pc = 0x16a3ecu;
    // NOP
label_16a3f0:
    // 0x16a3f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a3f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16a3f8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x16a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16a3fc: 0x2c820063  sltiu       $v0, $a0, 0x63
    ctx->pc = 0x16a3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x16a400: 0x0  nop
    ctx->pc = 0x16a400u;
    // NOP
    // 0x16a404: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16A404u;
    {
        const bool branch_taken_0x16a404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A404u;
            // 0x16a408: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a404) {
            ctx->pc = 0x16A3F0u;
            runtime->cooperativeGuestYield();
            goto label_16a3f0;
        }
    }
    ctx->pc = 0x16A40Cu;
    // 0x16a40c: 0xfe000638  sd          $zero, 0x638($s0)
    ctx->pc = 0x16a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1592), GPR_U64(ctx, 0));
    // 0x16a410: 0xfe000630  sd          $zero, 0x630($s0)
    ctx->pc = 0x16a410u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1584), GPR_U64(ctx, 0));
    // 0x16a414: 0xafb106bc  sw          $s1, 0x6BC($sp)
    ctx->pc = 0x16a414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1724), GPR_U32(ctx, 17));
    // 0x16a418: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x16a418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x16a41c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x16a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x16a420: 0xafa00d14  sw          $zero, 0xD14($sp)
    ctx->pc = 0x16a420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3348), GPR_U32(ctx, 0));
    // 0x16a424: 0x2464fd10  addiu       $a0, $v1, -0x2F0
    ctx->pc = 0x16a424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966544));
    // 0x16a428: 0xafa00d1c  sw          $zero, 0xD1C($sp)
    ctx->pc = 0x16a428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3356), GPR_U32(ctx, 0));
    // 0x16a42c: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x16a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16a430: 0xafa00d18  sw          $zero, 0xD18($sp)
    ctx->pc = 0x16a430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3352), GPR_U32(ctx, 0));
    // 0x16a434: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16a434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a438: 0xaea20660  sw          $v0, 0x660($s5)
    ctx->pc = 0x16a438u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1632), GPR_U32(ctx, 2));
    // 0x16a43c: 0xafa306b8  sw          $v1, 0x6B8($sp)
    ctx->pc = 0x16a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1720), GPR_U32(ctx, 3));
    // 0x16a440: 0x8fa30d14  lw          $v1, 0xD14($sp)
    ctx->pc = 0x16a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3348)));
    // 0x16a444: 0xafa40d08  sw          $a0, 0xD08($sp)
    ctx->pc = 0x16a444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3336), GPR_U32(ctx, 4));
    // 0x16a448: 0xafb106b4  sw          $s1, 0x6B4($sp)
    ctx->pc = 0x16a448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1716), GPR_U32(ctx, 17));
    // 0x16a44c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A44Cu;
    {
        const bool branch_taken_0x16a44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A44Cu;
            // 0x16a450: 0xafb106b0  sw          $s1, 0x6B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1712), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a44c) {
            ctx->pc = 0x16A460u;
            goto label_16a460;
        }
    }
    ctx->pc = 0x16A454u;
    // 0x16a454: 0x8fa20d10  lw          $v0, 0xD10($sp)
    ctx->pc = 0x16a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3344)));
    // 0x16a458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a45c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x16a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_16a460:
    // 0x16a460: 0x8fa20d10  lw          $v0, 0xD10($sp)
    ctx->pc = 0x16a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3344)));
    // 0x16a464: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x16a464u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a468: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x16a468u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x16a46c: 0xafa506b4  sw          $a1, 0x6B4($sp)
    ctx->pc = 0x16a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1716), GPR_U32(ctx, 5));
    // 0x16a470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a474: 0xafa30d14  sw          $v1, 0xD14($sp)
    ctx->pc = 0x16a474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3348), GPR_U32(ctx, 3));
    // 0x16a478: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16a47c: 0xafa506b0  sw          $a1, 0x6B0($sp)
    ctx->pc = 0x16a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1712), GPR_U32(ctx, 5));
    // 0x16a480: 0xafa206b8  sw          $v0, 0x6B8($sp)
    ctx->pc = 0x16a480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1720), GPR_U32(ctx, 2));
    // 0x16a484: 0x8e84ed60  lw          $a0, -0x12A0($s4)
    ctx->pc = 0x16a484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x16a488: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x16a488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x16a48c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x16a490: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16A490u;
    {
        const bool branch_taken_0x16a490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A490u;
            // 0x16a494: 0x8e83ed60  lw          $v1, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a490) {
            ctx->pc = 0x16A4B8u;
            goto label_16a4b8;
        }
    }
    ctx->pc = 0x16A498u;
    // 0x16a498: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x16a498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x16a49c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16a4a0: 0x24a3ed68  addiu       $v1, $a1, -0x1298
    ctx->pc = 0x16a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962536));
    // 0x16a4a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a4a8: 0x8e63f168  lw          $v1, -0xE98($s3)
    ctx->pc = 0x16a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963560)));
    // 0x16a4ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a4b0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16a4b4: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x16a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_16a4b8:
    // 0x16a4b8: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x16a4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x16a4bc: 0x24e5ed68  addiu       $a1, $a3, -0x1298
    ctx->pc = 0x16a4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962536));
    // 0x16a4c0: 0x27a406b0  addiu       $a0, $sp, 0x6B0
    ctx->pc = 0x16a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
    // 0x16a4c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16a4c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a4cc: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x16a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x16a4d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16a4d4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x16A4D4u;
    SET_GPR_U32(ctx, 31, 0x16A4DCu);
    ctx->pc = 0x16A4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4D4u;
            // 0x16a4d8: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4DCu; }
        if (ctx->pc != 0x16A4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4DCu; }
        if (ctx->pc != 0x16A4DCu) { return; }
    }
    ctx->pc = 0x16A4DCu;
    // 0x16a4dc: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x16a4dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
    // 0x16a4e0: 0x2528bb98  addiu       $t0, $t1, -0x4468
    ctx->pc = 0x16a4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949784));
    // 0x16a4e4: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x16a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x16a4e8: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x16a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x16a4ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4f0: 0x8ec71088  lw          $a3, 0x1088($s6)
    ctx->pc = 0x16a4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4232)));
    // 0x16a4f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16a4f8: 0x27c91080  addiu       $t1, $fp, 0x1080
    ctx->pc = 0x16a4f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4224));
    // 0x16a4fc: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x16a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
    // 0x16a500: 0x2e73823  subu        $a3, $s7, $a3
    ctx->pc = 0x16a500u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x16a504: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16a504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16a508: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x16a508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x16a50c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x16a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x16a510: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x16a510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x16a514: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x16a514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x16a518: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16a518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a51c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x16a51cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x16a520: 0xc04fe5c  jal         func_13F970
    ctx->pc = 0x16A520u;
    SET_GPR_U32(ctx, 31, 0x16A528u);
    ctx->pc = 0x16A524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A520u;
            // 0x16a524: 0xaec71088  sw          $a3, 0x1088($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4232), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F970u;
    if (runtime->hasFunction(0x13F970u)) {
        auto targetFn = runtime->lookupFunction(0x13F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A528u; }
        if (ctx->pc != 0x16A528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f970_0x13f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A528u; }
        if (ctx->pc != 0x16A528u) { return; }
    }
    ctx->pc = 0x16A528u;
    // 0x16a528: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x16a528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x16a52c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x16a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16a530: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16a530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x16a534: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x16a534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x16a538: 0xac431010  sw          $v1, 0x1010($v0)
    ctx->pc = 0x16a538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4112), GPR_U32(ctx, 3));
    // 0x16a53c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x16a53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x16a540: 0xaca41014  sw          $a0, 0x1014($a1)
    ctx->pc = 0x16a540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4116), GPR_U32(ctx, 4));
    // 0x16a544: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16a544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16a548: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x16a548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x16a54c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x16a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x16a550: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x16a550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x16a554: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x16a554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x16a558: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16a558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16a55c: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x16a55cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16a560: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x16a560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x16a564: 0xde430050  ld          $v1, 0x50($s2)
    ctx->pc = 0x16a564u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x16a568: 0xde440058  ld          $a0, 0x58($s2)
    ctx->pc = 0x16a568u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x16a56c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x16a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x16a570: 0x3283f  dsra32      $a1, $v1, 0
    ctx->pc = 0x16a570u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16a574: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x16a574u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x16a578: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x16a578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16a57c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x16a57cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16a580: 0x24470030  addiu       $a3, $v0, 0x30
    ctx->pc = 0x16a580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x16a584: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x16a584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x16a588: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x16a588u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x16a58c: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x16a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
    // 0x16a590: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x16a590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x16a594: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x16a594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x16a598: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x16a598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 8));
    // 0x16a59c: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x16a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x16a5a0: 0xac490028  sw          $t1, 0x28($v0)
    ctx->pc = 0x16a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 9));
    // 0x16a5a4: 0xae07f168  sw          $a3, -0xE98($s0)
    ctx->pc = 0x16a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 7));
    // 0x16a5a8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x16a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x16a5ac: 0xc04fe9e  jal         func_13FA78
    ctx->pc = 0x16A5ACu;
    SET_GPR_U32(ctx, 31, 0x16A5B4u);
    ctx->pc = 0x16A5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5ACu;
            // 0x16a5b0: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA78u;
    if (runtime->hasFunction(0x13FA78u)) {
        auto targetFn = runtime->lookupFunction(0x13FA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5B4u; }
        if (ctx->pc != 0x16A5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa78_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5B4u; }
        if (ctx->pc != 0x16A5B4u) { return; }
    }
    ctx->pc = 0x16A5B4u;
    // 0x16a5b4: 0xc04fe72  jal         func_13F9C8
    ctx->pc = 0x16A5B4u;
    SET_GPR_U32(ctx, 31, 0x16A5BCu);
    ctx->pc = 0x13F9C8u;
    if (runtime->hasFunction(0x13F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5BCu; }
        if (ctx->pc != 0x16A5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f9c8_0x13fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5BCu; }
        if (ctx->pc != 0x16A5BCu) { return; }
    }
    ctx->pc = 0x16A5BCu;
    // 0x16a5bc: 0x8e06f168  lw          $a2, -0xE98($s0)
    ctx->pc = 0x16a5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x16a5c0: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x16a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x16a5c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16A5C4u;
    {
        const bool branch_taken_0x16a5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5C4u;
            // 0x16a5c8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5c4) {
            ctx->pc = 0x16A5F0u;
            goto label_16a5f0;
        }
    }
    ctx->pc = 0x16A5CCu;
    // 0x16a5cc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x16a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_16a5d0:
    // 0x16a5d0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x16a5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x16a5d4: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x16a5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x16a5d8: 0x0  nop
    ctx->pc = 0x16a5d8u;
    // NOP
    // 0x16a5dc: 0x0  nop
    ctx->pc = 0x16a5dcu;
    // NOP
    // 0x16a5e0: 0x0  nop
    ctx->pc = 0x16a5e0u;
    // NOP
    // 0x16a5e4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16A5E4u;
    {
        const bool branch_taken_0x16a5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a5e4) {
            ctx->pc = 0x16A5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5E4u;
            // 0x16a5e8: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A5D0u;
            runtime->cooperativeGuestYield();
            goto label_16a5d0;
        }
    }
    ctx->pc = 0x16A5ECu;
    // 0x16a5ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_16a5f0:
    // 0x16a5f0: 0xae06f168  sw          $a2, -0xE98($s0)
    ctx->pc = 0x16a5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 6));
    // 0x16a5f4: 0x8c45101c  lw          $a1, 0x101C($v0)
    ctx->pc = 0x16a5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4124)));
    // 0x16a5f8: 0x26530100  addiu       $s3, $s2, 0x100
    ctx->pc = 0x16a5f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x16a5fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16a5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a600: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x16A600u;
    SET_GPR_U32(ctx, 31, 0x16A608u);
    ctx->pc = 0x16A604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A600u;
            // 0x16a604: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A608u; }
        if (ctx->pc != 0x16A608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A608u; }
        if (ctx->pc != 0x16A608u) { return; }
    }
    ctx->pc = 0x16A608u;
    // 0x16a608: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x16a608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x16a60c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x16a60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x16a610: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16A610u;
    {
        const bool branch_taken_0x16a610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A610u;
            // 0x16a614: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a610) {
            ctx->pc = 0x16A640u;
            goto label_16a640;
        }
    }
    ctx->pc = 0x16A618u;
    // 0x16a618: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16a618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16a61c: 0x0  nop
    ctx->pc = 0x16a61cu;
    // NOP
label_16a620:
    // 0x16a620: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x16a620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x16a624: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x16a624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x16a628: 0x0  nop
    ctx->pc = 0x16a628u;
    // NOP
    // 0x16a62c: 0x0  nop
    ctx->pc = 0x16a62cu;
    // NOP
    // 0x16a630: 0x0  nop
    ctx->pc = 0x16a630u;
    // NOP
    // 0x16a634: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16A634u;
    {
        const bool branch_taken_0x16a634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a634) {
            ctx->pc = 0x16A638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A634u;
            // 0x16a638: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A620u;
            runtime->cooperativeGuestYield();
            goto label_16a620;
        }
    }
    ctx->pc = 0x16A63Cu;
    // 0x16a63c: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x16a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_16a640:
    // 0x16a640: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x16a640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x16a644: 0x2465ed68  addiu       $a1, $v1, -0x1298
    ctx->pc = 0x16a644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962536));
    // 0x16a648: 0xae04f168  sw          $a0, -0xE98($s0)
    ctx->pc = 0x16a648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 4));
    // 0x16a64c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x16a64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16a650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a654: 0xae86ed60  sw          $a2, -0x12A0($s4)
    ctx->pc = 0x16a654u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 6));
    // 0x16a658: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16a65c: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x16a65cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x16a660: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a664: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A664u;
    {
        const bool branch_taken_0x16a664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A664u;
            // 0x16a668: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a664) {
            ctx->pc = 0x16A67Cu;
            goto label_16a67c;
        }
    }
    ctx->pc = 0x16A66Cu;
    // 0x16a66c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16a670: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16a674: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x16A674u;
    SET_GPR_U32(ctx, 31, 0x16A67Cu);
    ctx->pc = 0x16A678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A674u;
            // 0x16a678: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A67Cu; }
        if (ctx->pc != 0x16A67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A67Cu; }
        if (ctx->pc != 0x16A67Cu) { return; }
    }
    ctx->pc = 0x16A67Cu;
label_16a67c:
    // 0x16a67c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x16a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x16a680: 0x2487bb98  addiu       $a3, $a0, -0x4468
    ctx->pc = 0x16a680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949784));
    // 0x16a684: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x16a684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x16a688: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a68c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16a68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a690: 0x8ec21088  lw          $v0, 0x1088($s6)
    ctx->pc = 0x16a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4232)));
    // 0x16a694: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16a698: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x16a698u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x16a69c: 0x27c41080  addiu       $a0, $fp, 0x1080
    ctx->pc = 0x16a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4224));
    // 0x16a6a0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x16a6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16a6a4: 0xae510148  sw          $s1, 0x148($s2)
    ctx->pc = 0x16a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 17));
    // 0x16a6a8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16a6ac: 0xae53014c  sw          $s3, 0x14C($s2)
    ctx->pc = 0x16a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 19));
    // 0x16a6b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16a6b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a6b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16a6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6bc: 0xaec61088  sw          $a2, 0x1088($s6)
    ctx->pc = 0x16a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4232), GPR_U32(ctx, 6));
    // 0x16a6c0: 0xc08eab2  jal         func_23AAC8
    ctx->pc = 0x16A6C0u;
    SET_GPR_U32(ctx, 31, 0x16A6C8u);
    ctx->pc = 0x16A6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6C0u;
            // 0x16a6c4: 0xa64200c0  sh          $v0, 0xC0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 192), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAC8u;
    if (runtime->hasFunction(0x23AAC8u)) {
        auto targetFn = runtime->lookupFunction(0x23AAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6C8u; }
        if (ctx->pc != 0x16A6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023AAC8_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6C8u; }
        if (ctx->pc != 0x16A6C8u) { return; }
    }
    ctx->pc = 0x16A6C8u;
    // 0x16a6c8: 0x8fa40d20  lw          $a0, 0xD20($sp)
    ctx->pc = 0x16a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3360)));
    // 0x16a6cc: 0xc08eab2  jal         func_23AAC8
    ctx->pc = 0x16A6CCu;
    SET_GPR_U32(ctx, 31, 0x16A6D4u);
    ctx->pc = 0x16A6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6CCu;
            // 0x16a6d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAC8u;
    if (runtime->hasFunction(0x23AAC8u)) {
        auto targetFn = runtime->lookupFunction(0x23AAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6D4u; }
        if (ctx->pc != 0x16A6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023AAC8_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6D4u; }
        if (ctx->pc != 0x16A6D4u) { return; }
    }
    ctx->pc = 0x16A6D4u;
    // 0x16a6d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16a6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6d8: 0x7bb00dc0  lq          $s0, 0xDC0($sp)
    ctx->pc = 0x16a6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3520)));
    // 0x16a6dc: 0x7bb10db0  lq          $s1, 0xDB0($sp)
    ctx->pc = 0x16a6dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3504)));
    // 0x16a6e0: 0x7bb20da0  lq          $s2, 0xDA0($sp)
    ctx->pc = 0x16a6e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 3488)));
    // 0x16a6e4: 0x7bb30d90  lq          $s3, 0xD90($sp)
    ctx->pc = 0x16a6e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 3472)));
    // 0x16a6e8: 0x7bb40d80  lq          $s4, 0xD80($sp)
    ctx->pc = 0x16a6e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 3456)));
    // 0x16a6ec: 0x7bb50d70  lq          $s5, 0xD70($sp)
    ctx->pc = 0x16a6ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 3440)));
    // 0x16a6f0: 0x7bb60d60  lq          $s6, 0xD60($sp)
    ctx->pc = 0x16a6f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 3424)));
    // 0x16a6f4: 0x7bb70d50  lq          $s7, 0xD50($sp)
    ctx->pc = 0x16a6f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 3408)));
    // 0x16a6f8: 0x7bbe0d40  lq          $fp, 0xD40($sp)
    ctx->pc = 0x16a6f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 3392)));
    // 0x16a6fc: 0xdfbf0d30  ld          $ra, 0xD30($sp)
    ctx->pc = 0x16a6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3376)));
    // 0x16a700: 0x3e00008  jr          $ra
    ctx->pc = 0x16A700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A700u;
            // 0x16a704: 0x27bd0dd0  addiu       $sp, $sp, 0xDD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169E30u: goto label_169e30;
            case 0x169EECu: goto label_169eec;
            case 0x169F0Cu: goto label_169f0c;
            case 0x169F2Cu: goto label_169f2c;
            case 0x169F48u: goto label_169f48;
            case 0x169F74u: goto label_169f74;
            case 0x169F90u: goto label_169f90;
            case 0x169FB8u: goto label_169fb8;
            case 0x169FD4u: goto label_169fd4;
            case 0x16A044u: goto label_16a044;
            case 0x16A09Cu: goto label_16a09c;
            case 0x16A110u: goto label_16a110;
            case 0x16A188u: goto label_16a188;
            case 0x16A1E8u: goto label_16a1e8;
            case 0x16A2C8u: goto label_16a2c8;
            case 0x16A2E8u: goto label_16a2e8;
            case 0x16A318u: goto label_16a318;
            case 0x16A338u: goto label_16a338;
            case 0x16A374u: goto label_16a374;
            case 0x16A3F0u: goto label_16a3f0;
            case 0x16A460u: goto label_16a460;
            case 0x16A4B8u: goto label_16a4b8;
            case 0x16A5D0u: goto label_16a5d0;
            case 0x16A5F0u: goto label_16a5f0;
            case 0x16A620u: goto label_16a620;
            case 0x16A640u: goto label_16a640;
            case 0x16A67Cu: goto label_16a67c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A708u;
}
