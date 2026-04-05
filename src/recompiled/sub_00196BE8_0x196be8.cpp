#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196BE8
// Address: 0x196be8 - 0x197348
void sub_00196BE8_0x196be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196BE8_0x196be8");
#endif

    ctx->pc = 0x196be8u;

    // 0x196be8: 0x27bdfca0  addiu       $sp, $sp, -0x360
    ctx->pc = 0x196be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966432));
    // 0x196bec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x196becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x196bf0: 0x7fb30310  sq          $s3, 0x310($sp)
    ctx->pc = 0x196bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 19));
    // 0x196bf4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x196bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196bf8: 0x7fb00340  sq          $s0, 0x340($sp)
    ctx->pc = 0x196bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 16));
    // 0x196bfc: 0x7fb10330  sq          $s1, 0x330($sp)
    ctx->pc = 0x196bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 17));
    // 0x196c00: 0x7fb20320  sq          $s2, 0x320($sp)
    ctx->pc = 0x196c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 18));
    // 0x196c04: 0x7fb40300  sq          $s4, 0x300($sp)
    ctx->pc = 0x196c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 20));
    // 0x196c08: 0x7fb502f0  sq          $s5, 0x2F0($sp)
    ctx->pc = 0x196c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 21));
    // 0x196c0c: 0x7fb602e0  sq          $s6, 0x2E0($sp)
    ctx->pc = 0x196c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 22));
    // 0x196c10: 0x7fb702d0  sq          $s7, 0x2D0($sp)
    ctx->pc = 0x196c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 23));
    // 0x196c14: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x196c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x196c18: 0xe7b40350  swc1        $f20, 0x350($sp)
    ctx->pc = 0x196c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
    // 0x196c1c: 0x8c53cd58  lw          $s3, -0x32A8($v0)
    ctx->pc = 0x196c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x196c20: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x196c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x196c24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c28: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x196c28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x196c2c: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x196C2Cu;
    SET_GPR_U32(ctx, 31, 0x196C34u);
    ctx->pc = 0x196C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C2Cu;
            // 0x196c30: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C34u; }
        if (ctx->pc != 0x196C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C34u; }
        if (ctx->pc != 0x196C34u) { return; }
    }
    ctx->pc = 0x196C34u;
    // 0x196c34: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x196c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x196c38: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x196c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x196c3c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x196c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x196c40: 0x2484e040  addiu       $a0, $a0, -0x1FC0
    ctx->pc = 0x196c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959168));
    // 0x196c44: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x196c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x196c48: 0xc461c658  lwc1        $f1, -0x39A8($v1)
    ctx->pc = 0x196c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196c4c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x196c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x196c50: 0x8e23c998  lw          $v1, -0x3668($s1)
    ctx->pc = 0x196c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953368)));
    // 0x196c54: 0x44b821  addu        $s7, $v0, $a0
    ctx->pc = 0x196c54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x196c58: 0xc6e0000c  lwc1        $f0, 0xC($s7)
    ctx->pc = 0x196c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196c5c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x196C5Cu;
    {
        const bool branch_taken_0x196c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196C5Cu;
            // 0x196c60: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c5c) {
            ctx->pc = 0x196CACu;
            goto label_196cac;
        }
    }
    ctx->pc = 0x196C64u;
    // 0x196c64: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x196c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x196c68: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x196c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x196c6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x196C6Cu;
    {
        const bool branch_taken_0x196c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196C6Cu;
            // 0x196c70: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c6c) {
            ctx->pc = 0x196C90u;
            goto label_196c90;
        }
    }
    ctx->pc = 0x196C74u;
    // 0x196c74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c78: 0xc076fd8  jal         func_1DBF60
    ctx->pc = 0x196C78u;
    SET_GPR_U32(ctx, 31, 0x196C80u);
    ctx->pc = 0x196C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C78u;
            // 0x196c7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF60u;
    if (runtime->hasFunction(0x1DBF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DBF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C80u; }
        if (ctx->pc != 0x196C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBF60_0x1dbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C80u; }
        if (ctx->pc != 0x196C80u) { return; }
    }
    ctx->pc = 0x196C80u;
    // 0x196c80: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x196C80u;
    {
        const bool branch_taken_0x196c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196c80) {
            ctx->pc = 0x196C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196C80u;
            // 0x196c84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196CE4u;
            goto label_196ce4;
        }
    }
    ctx->pc = 0x196C88u;
    // 0x196c88: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x196c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x196c8c: 0x0  nop
    ctx->pc = 0x196c8cu;
    // NOP
label_196c90:
    // 0x196c90: 0xc065906  jal         func_196418
    ctx->pc = 0x196C90u;
    SET_GPR_U32(ctx, 31, 0x196C98u);
    ctx->pc = 0x196C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C90u;
            // 0x196c94: 0x24843910  addiu       $a0, $a0, 0x3910 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196418u;
    if (runtime->hasFunction(0x196418u)) {
        auto targetFn = runtime->lookupFunction(0x196418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C98u; }
        if (ctx->pc != 0x196C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196418_0x196418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C98u; }
        if (ctx->pc != 0x196C98u) { return; }
    }
    ctx->pc = 0x196C98u;
    // 0x196c98: 0xae20c998  sw          $zero, -0x3668($s1)
    ctx->pc = 0x196c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953368), GPR_U32(ctx, 0));
    // 0x196c9c: 0xc0658e6  jal         func_196398
    ctx->pc = 0x196C9Cu;
    SET_GPR_U32(ctx, 31, 0x196CA4u);
    ctx->pc = 0x196CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C9Cu;
            // 0x196ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196398u;
    if (runtime->hasFunction(0x196398u)) {
        auto targetFn = runtime->lookupFunction(0x196398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CA4u; }
        if (ctx->pc != 0x196CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196398_0x196398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CA4u; }
        if (ctx->pc != 0x196CA4u) { return; }
    }
    ctx->pc = 0x196CA4u;
    // 0x196ca4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x196CA4u;
    {
        const bool branch_taken_0x196ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196CA4u;
            // 0x196ca8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ca4) {
            ctx->pc = 0x196CE4u;
            goto label_196ce4;
        }
    }
    ctx->pc = 0x196CACu;
label_196cac:
    // 0x196cac: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x196cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x196cb0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x196cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x196cb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x196CB4u;
    {
        const bool branch_taken_0x196cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196CB4u;
            // 0x196cb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cb4) {
            ctx->pc = 0x196CE0u;
            goto label_196ce0;
        }
    }
    ctx->pc = 0x196CBCu;
    // 0x196cbc: 0xc076fd8  jal         func_1DBF60
    ctx->pc = 0x196CBCu;
    SET_GPR_U32(ctx, 31, 0x196CC4u);
    ctx->pc = 0x196CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196CBCu;
            // 0x196cc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF60u;
    if (runtime->hasFunction(0x1DBF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DBF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CC4u; }
        if (ctx->pc != 0x196CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBF60_0x1dbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CC4u; }
        if (ctx->pc != 0x196CC4u) { return; }
    }
    ctx->pc = 0x196CC4u;
    // 0x196cc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196CC4u;
    {
        const bool branch_taken_0x196cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196CC4u;
            // 0x196cc8: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cc4) {
            ctx->pc = 0x196CE0u;
            goto label_196ce0;
        }
    }
    ctx->pc = 0x196CCCu;
    // 0x196ccc: 0xc065906  jal         func_196418
    ctx->pc = 0x196CCCu;
    SET_GPR_U32(ctx, 31, 0x196CD4u);
    ctx->pc = 0x196CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196CCCu;
            // 0x196cd0: 0x24843918  addiu       $a0, $a0, 0x3918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196418u;
    if (runtime->hasFunction(0x196418u)) {
        auto targetFn = runtime->lookupFunction(0x196418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CD4u; }
        if (ctx->pc != 0x196CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196418_0x196418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CD4u; }
        if (ctx->pc != 0x196CD4u) { return; }
    }
    ctx->pc = 0x196CD4u;
    // 0x196cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196cd8: 0xae22c998  sw          $v0, -0x3668($s1)
    ctx->pc = 0x196cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953368), GPR_U32(ctx, 2));
    // 0x196cdc: 0x0  nop
    ctx->pc = 0x196cdcu;
    // NOP
label_196ce0:
    // 0x196ce0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_196ce4:
    // 0x196ce4: 0xc076fd8  jal         func_1DBF60
    ctx->pc = 0x196CE4u;
    SET_GPR_U32(ctx, 31, 0x196CECu);
    ctx->pc = 0x196CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196CE4u;
            // 0x196ce8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF60u;
    if (runtime->hasFunction(0x1DBF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DBF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CECu; }
        if (ctx->pc != 0x196CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBF60_0x1dbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CECu; }
        if (ctx->pc != 0x196CECu) { return; }
    }
    ctx->pc = 0x196CECu;
    // 0x196cec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196CECu;
    {
        const bool branch_taken_0x196cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196CECu;
            // 0x196cf0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cec) {
            ctx->pc = 0x196D00u;
            goto label_196d00;
        }
    }
    ctx->pc = 0x196CF4u;
    // 0x196cf4: 0xc0783be  jal         func_1E0EF8
    ctx->pc = 0x196CF4u;
    SET_GPR_U32(ctx, 31, 0x196CFCu);
    ctx->pc = 0x196CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196CF4u;
            // 0x196cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EF8u;
    if (runtime->hasFunction(0x1E0EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CFCu; }
        if (ctx->pc != 0x196CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EF8_0x1e0ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CFCu; }
        if (ctx->pc != 0x196CFCu) { return; }
    }
    ctx->pc = 0x196CFCu;
    // 0x196cfc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x196cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_196d00:
    // 0x196d00: 0x8c42c998  lw          $v0, -0x3668($v0)
    ctx->pc = 0x196d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953368)));
    // 0x196d04: 0x10400185  beqz        $v0, . + 4 + (0x185 << 2)
    ctx->pc = 0x196D04u;
    {
        const bool branch_taken_0x196d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196D04u;
            // 0x196d08: 0x7bb00340  lq          $s0, 0x340($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d04) {
            ctx->pc = 0x19731Cu;
            goto label_19731c;
        }
    }
    ctx->pc = 0x196D0Cu;
    // 0x196d0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d10: 0xc076fa6  jal         func_1DBE98
    ctx->pc = 0x196D10u;
    SET_GPR_U32(ctx, 31, 0x196D18u);
    ctx->pc = 0x196D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196D10u;
            // 0x196d14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE98u;
    if (runtime->hasFunction(0x1DBE98u)) {
        auto targetFn = runtime->lookupFunction(0x1DBE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D18u; }
        if (ctx->pc != 0x196D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBE98_0x1dbe98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D18u; }
        if (ctx->pc != 0x196D18u) { return; }
    }
    ctx->pc = 0x196D18u;
    // 0x196d18: 0x3c160030  lui         $s6, 0x30
    ctx->pc = 0x196d18u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)48 << 16));
    // 0x196d1c: 0x8ec4e160  lw          $a0, -0x1EA0($s6)
    ctx->pc = 0x196d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294959456)));
    // 0x196d20: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x196d20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x196d24: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x196d24u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x196d28: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x196d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x196d2c: 0x8e83d2ac  lw          $v1, -0x2D54($s4)
    ctx->pc = 0x196d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294955692)));
    // 0x196d30: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x196d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x196d34: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x196d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x196d38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x196d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196d3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x196d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196d40: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x196D40u;
    {
        const bool branch_taken_0x196d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x196D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196D40u;
            // 0x196d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d40) {
            ctx->pc = 0x196D4Cu;
            goto label_196d4c;
        }
    }
    ctx->pc = 0x196D48u;
    // 0x196d48: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x196d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_196d4c:
    // 0x196d4c: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x196D4Cu;
    {
        const bool branch_taken_0x196d4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x196d4c) {
            ctx->pc = 0x196D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196D4Cu;
            // 0x196d50: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196D60u;
            goto label_196d60;
        }
    }
    ctx->pc = 0x196D54u;
    // 0x196d54: 0xc0658bc  jal         func_1962F0
    ctx->pc = 0x196D54u;
    SET_GPR_U32(ctx, 31, 0x196D5Cu);
    ctx->pc = 0x196D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196D54u;
            // 0x196d58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1962F0u;
    if (runtime->hasFunction(0x1962F0u)) {
        auto targetFn = runtime->lookupFunction(0x1962F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D5Cu; }
        if (ctx->pc != 0x196D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001962F0_0x1962f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D5Cu; }
        if (ctx->pc != 0x196D5Cu) { return; }
    }
    ctx->pc = 0x196D5Cu;
    // 0x196d5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196d60:
    // 0x196d60: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x196d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x196d64: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x196d64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x196d68: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x196d68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x196d6c: 0xde45bdf8  ld          $a1, -0x4208($s2)
    ctx->pc = 0x196d6cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 4294950392)));
    // 0x196d70: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x196d70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x196d74: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196D74u;
    {
        const bool branch_taken_0x196d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x196D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196D74u;
            // 0x196d78: 0x94715048  lhu         $s1, 0x5048($v1) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d74) {
            ctx->pc = 0x196D88u;
            goto label_196d88;
        }
    }
    ctx->pc = 0x196D7Cu;
    // 0x196d7c: 0xc04da64  jal         func_136990
    ctx->pc = 0x196D7Cu;
    SET_GPR_U32(ctx, 31, 0x196D84u);
    ctx->pc = 0x196D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196D7Cu;
            // 0x196d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D84u; }
        if (ctx->pc != 0x196D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D84u; }
        if (ctx->pc != 0x196D84u) { return; }
    }
    ctx->pc = 0x196D84u;
    // 0x196d84: 0x0  nop
    ctx->pc = 0x196d84u;
    // NOP
label_196d88:
    // 0x196d88: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x196d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x196d8c: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x196d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x196d90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x196d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196d94: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x196d94u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196d98: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x196d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
    // 0x196d9c: 0x78670010  lq          $a3, 0x10($v1)
    ctx->pc = 0x196d9cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x196da0: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x196da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x196da4: 0x78660020  lq          $a2, 0x20($v1)
    ctx->pc = 0x196da4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x196da8: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x196da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x196dac: 0x78650030  lq          $a1, 0x30($v1)
    ctx->pc = 0x196dacu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x196db0: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x196db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x196db4: 0x8ec4e160  lw          $a0, -0x1EA0($s6)
    ctx->pc = 0x196db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294959456)));
    // 0x196db8: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x196db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x196dbc: 0x8e83d2ac  lw          $v1, -0x2D54($s4)
    ctx->pc = 0x196dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294955692)));
    // 0x196dc0: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x196dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x196dc4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x196dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x196dc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x196dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x196dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196dd0: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196DD0u;
    {
        const bool branch_taken_0x196dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x196DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196DD0u;
            // 0x196dd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196dd0) {
            ctx->pc = 0x196DE0u;
            goto label_196de0;
        }
    }
    ctx->pc = 0x196DD8u;
    // 0x196dd8: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x196dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x196ddc: 0x0  nop
    ctx->pc = 0x196ddcu;
    // NOP
label_196de0:
    // 0x196de0: 0x522000c0  beql        $s1, $zero, . + 4 + (0xC0 << 2)
    ctx->pc = 0x196DE0u;
    {
        const bool branch_taken_0x196de0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x196de0) {
            ctx->pc = 0x196DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196DE0u;
            // 0x196de4: 0x7fa80040  sq          $t0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1970E4u;
            goto label_1970e4;
        }
    }
    ctx->pc = 0x196DE8u;
    // 0x196de8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x196de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x196dec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x196decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x196df0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x196df0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x196df4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x196df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x196df8: 0x40f809  jalr        $v0
    ctx->pc = 0x196DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196E00u);
        ctx->pc = 0x196DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196DF8u;
            // 0x196dfc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x196E00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196C90u: goto label_196c90;
            case 0x196CACu: goto label_196cac;
            case 0x196CE0u: goto label_196ce0;
            case 0x196CE4u: goto label_196ce4;
            case 0x196D00u: goto label_196d00;
            case 0x196D4Cu: goto label_196d4c;
            case 0x196D60u: goto label_196d60;
            case 0x196D88u: goto label_196d88;
            case 0x196DE0u: goto label_196de0;
            case 0x196E34u: goto label_196e34;
            case 0x196E38u: goto label_196e38;
            case 0x196F98u: goto label_196f98;
            case 0x196F9Cu: goto label_196f9c;
            case 0x1970C8u: goto label_1970c8;
            case 0x1970CCu: goto label_1970cc;
            case 0x1970E4u: goto label_1970e4;
            case 0x1970F4u: goto label_1970f4;
            case 0x19711Cu: goto label_19711c;
            case 0x197138u: goto label_197138;
            case 0x197160u: goto label_197160;
            case 0x19717Cu: goto label_19717c;
            case 0x197288u: goto label_197288;
            case 0x197308u: goto label_197308;
            case 0x19731Cu: goto label_19731c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x196E00u; }
            if (ctx->pc != 0x196E00u) { return; }
        }
        }
    }
    ctx->pc = 0x196E00u;
    // 0x196e00: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x196e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x196e04: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x196e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x196e08: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x196E08u;
    {
        const bool branch_taken_0x196e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196E08u;
            // 0x196e0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e08) {
            ctx->pc = 0x196E38u;
            goto label_196e38;
        }
    }
    ctx->pc = 0x196E10u;
    // 0x196e10: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x196e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x196e14: 0x8e83d2ac  lw          $v1, -0x2D54($s4)
    ctx->pc = 0x196e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294955692)));
    // 0x196e18: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x196e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x196e1c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x196e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x196e20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x196e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196e24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x196e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196e28: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x196E28u;
    {
        const bool branch_taken_0x196e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x196E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196E28u;
            // 0x196e2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e28) {
            ctx->pc = 0x196E34u;
            goto label_196e34;
        }
    }
    ctx->pc = 0x196E30u;
    // 0x196e30: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x196e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_196e34:
    // 0x196e34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196e38:
    // 0x196e38: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x196e38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196e3c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x196e3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196e40: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x196e40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196e44: 0xfba10260  sqc2        $vf1, 0x260($sp)
    ctx->pc = 0x196e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x196e48: 0xfba40200  sqc2        $vf4, 0x200($sp)
    ctx->pc = 0x196e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x196e4c: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x196e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
    // 0x196e50: 0x4be4092c  vsub.xyzw   $vf4, $vf1, $vf4
    ctx->pc = 0x196e50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x196e54: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x196e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x196e58: 0xc0909c4  jal         func_242710
    ctx->pc = 0x196E58u;
    SET_GPR_U32(ctx, 31, 0x196E60u);
    ctx->pc = 0x196E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196E58u;
            // 0x196e5c: 0xfba402b0  sqc2        $vf4, 0x2B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E60u; }
        if (ctx->pc != 0x196E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E60u; }
        if (ctx->pc != 0x196E60u) { return; }
    }
    ctx->pc = 0x196E60u;
    // 0x196e60: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x196e60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196e64: 0xfba20210  sqc2        $vf2, 0x210($sp)
    ctx->pc = 0x196e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x196e68: 0xdba10260  lqc2        $vf1, 0x260($sp)
    ctx->pc = 0x196e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x196e6c: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x196e6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x196e70: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x196e70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x196e74: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x196e74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196e78: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x196e78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196e7c: 0xdba402b0  lqc2        $vf4, 0x2B0($sp)
    ctx->pc = 0x196e7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x196e80: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x196e80u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x196e84: 0x4a0003bf  vwaitq
    ctx->pc = 0x196e84u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x196e88: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x196e88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x196e8c: 0x4a0002ff  vnop
    ctx->pc = 0x196e8cu;
    // NOP operation, no action needed for VU0
    // 0x196e90: 0x4a0002ff  vnop
    ctx->pc = 0x196e90u;
    // NOP operation, no action needed for VU0
    // 0x196e94: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x196e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x196e98: 0x4be410ea  vmul.xyzw   $vf3, $vf2, $vf4
    ctx->pc = 0x196e98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x196e9c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x196e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196ea0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x196ea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196ea4: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x196ea4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x196ea8: 0x4be2212c  vsub.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x196ea8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x196eac: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x196eacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x196eb0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x196eb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196eb4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x196eb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196eb8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x196eb8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x196ebc: 0x4a0003bf  vwaitq
    ctx->pc = 0x196ebcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x196ec0: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x196ec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x196ec4: 0x4a0002ff  vnop
    ctx->pc = 0x196ec4u;
    // NOP operation, no action needed for VU0
    // 0x196ec8: 0x4a0002ff  vnop
    ctx->pc = 0x196ec8u;
    // NOP operation, no action needed for VU0
    // 0x196ecc: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x196eccu;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x196ed0: 0xfba10270  sqc2        $vf1, 0x270($sp)
    ctx->pc = 0x196ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x196ed4: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x196ED4u;
    {
        const bool branch_taken_0x196ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x196ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196ED4u;
            // 0x196ed8: 0xfba10090  sqc2        $vf1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ed4) {
            ctx->pc = 0x196F98u;
            goto label_196f98;
        }
    }
    ctx->pc = 0x196EDCu;
    // 0x196edc: 0xc0909c4  jal         func_242710
    ctx->pc = 0x196EDCu;
    SET_GPR_U32(ctx, 31, 0x196EE4u);
    ctx->pc = 0x196EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196EDCu;
            // 0x196ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EE4u; }
        if (ctx->pc != 0x196EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196EE4u; }
        if (ctx->pc != 0x196EE4u) { return; }
    }
    ctx->pc = 0x196EE4u;
    // 0x196ee4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x196ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x196ee8: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x196ee8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x196eec: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x196eecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x196ef0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x196ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x196ef4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x196ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x196ef8: 0x40f809  jalr        $v0
    ctx->pc = 0x196EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196F00u);
        ctx->pc = 0x196EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196EF8u;
            // 0x196efc: 0xfba202a0  sqc2        $vf2, 0x2A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x196F00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196C90u: goto label_196c90;
            case 0x196CACu: goto label_196cac;
            case 0x196CE0u: goto label_196ce0;
            case 0x196CE4u: goto label_196ce4;
            case 0x196D00u: goto label_196d00;
            case 0x196D4Cu: goto label_196d4c;
            case 0x196D60u: goto label_196d60;
            case 0x196D88u: goto label_196d88;
            case 0x196DE0u: goto label_196de0;
            case 0x196E34u: goto label_196e34;
            case 0x196E38u: goto label_196e38;
            case 0x196F98u: goto label_196f98;
            case 0x196F9Cu: goto label_196f9c;
            case 0x1970C8u: goto label_1970c8;
            case 0x1970CCu: goto label_1970cc;
            case 0x1970E4u: goto label_1970e4;
            case 0x1970F4u: goto label_1970f4;
            case 0x19711Cu: goto label_19711c;
            case 0x197138u: goto label_197138;
            case 0x197160u: goto label_197160;
            case 0x19717Cu: goto label_19717c;
            case 0x197288u: goto label_197288;
            case 0x197308u: goto label_197308;
            case 0x19731Cu: goto label_19731c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x196F00u; }
            if (ctx->pc != 0x196F00u) { return; }
        }
        }
    }
    ctx->pc = 0x196F00u;
    // 0x196f00: 0x3c014166  lui         $at, 0x4166
    ctx->pc = 0x196f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16742 << 16));
    // 0x196f04: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x196f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x196f08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x196f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196f0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x196f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x196f10: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x196f10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x196f14: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x196f14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x196f18: 0xdba30260  lqc2        $vf3, 0x260($sp)
    ctx->pc = 0x196f18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x196f1c: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x196f1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x196f20: 0xdba202a0  lqc2        $vf2, 0x2A0($sp)
    ctx->pc = 0x196f20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x196f24: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x196f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x196f28: 0xdba40250  lqc2        $vf4, 0x250($sp)
    ctx->pc = 0x196f28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x196f2c: 0x4be410ac  vsub.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x196f2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x196f30: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x196f30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x196f34: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x196f34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196f38: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x196f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196f3c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x196f3cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x196f40: 0x4a0003bf  vwaitq
    ctx->pc = 0x196f40u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x196f44: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x196f44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x196f48: 0x4a0002ff  vnop
    ctx->pc = 0x196f48u;
    // NOP operation, no action needed for VU0
    // 0x196f4c: 0x4a0002ff  vnop
    ctx->pc = 0x196f4cu;
    // NOP operation, no action needed for VU0
    // 0x196f50: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x196f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x196f54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x196f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x196f58: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x196f58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x196f5c: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x196f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x196f60: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x196f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x196f64: 0xdba10270  lqc2        $vf1, 0x270($sp)
    ctx->pc = 0x196f64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x196f68: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x196f68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x196f6c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x196f6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x196f70: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x196f70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196f74: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x196f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196f78: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x196f78u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x196f7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x196f7cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x196f80: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x196f80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x196f84: 0x4a0002ff  vnop
    ctx->pc = 0x196f84u;
    // NOP operation, no action needed for VU0
    // 0x196f88: 0x4a0002ff  vnop
    ctx->pc = 0x196f88u;
    // NOP operation, no action needed for VU0
    // 0x196f8c: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x196f8cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x196f90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196F90u;
    {
        const bool branch_taken_0x196f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196F90u;
            // 0x196f94: 0xfba100b0  sqc2        $vf1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f90) {
            ctx->pc = 0x196F9Cu;
            goto label_196f9c;
        }
    }
    ctx->pc = 0x196F98u;
label_196f98:
    // 0x196f98: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x196f98u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
label_196f9c:
    // 0x196f9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x196f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x196fa0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x196fa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x196fa4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x196fa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196fa8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x196fac: 0x7ba50250  lq          $a1, 0x250($sp)
    ctx->pc = 0x196facu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x196fb0: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x196fb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196fb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x196fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196fb8: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x196fb8u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x196fbc: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x196fbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x196fc0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x196fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x196fc4: 0x4be32128  vadd.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x196fc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x196fc8: 0xc0613d0  jal         func_184F40
    ctx->pc = 0x196FC8u;
    SET_GPR_U32(ctx, 31, 0x196FD0u);
    ctx->pc = 0x196FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196FC8u;
            // 0x196fcc: 0x48262000  qmfc2.ni    $a2, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184F40u;
    if (runtime->hasFunction(0x184F40u)) {
        auto targetFn = runtime->lookupFunction(0x184F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196FD0u; }
        if (ctx->pc != 0x196FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184F40_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196FD0u; }
        if (ctx->pc != 0x196FD0u) { return; }
    }
    ctx->pc = 0x196FD0u;
    // 0x196fd0: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x196fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x196fd4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x196fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x196fd8: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x196FD8u;
    SET_GPR_U32(ctx, 31, 0x196FE0u);
    ctx->pc = 0x196FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196FD8u;
            // 0x196fdc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196FE0u; }
        if (ctx->pc != 0x196FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196FE0u; }
        if (ctx->pc != 0x196FE0u) { return; }
    }
    ctx->pc = 0x196FE0u;
    // 0x196fe0: 0xdba60140  lqc2        $vf6, 0x140($sp)
    ctx->pc = 0x196fe0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x196fe4: 0xdba70150  lqc2        $vf7, 0x150($sp)
    ctx->pc = 0x196fe4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x196fe8: 0xdba80160  lqc2        $vf8, 0x160($sp)
    ctx->pc = 0x196fe8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x196fec: 0xdba40170  lqc2        $vf4, 0x170($sp)
    ctx->pc = 0x196fecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x196ff0: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x196ff0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196ff4: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x196ff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196ff8: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x196ff8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196ffc: 0xdba50070  lqc2        $vf5, 0x70($sp)
    ctx->pc = 0x196ffcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x197000: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x197000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x197004: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x197004u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x197008: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x197008u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19700c: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x19700cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x197010: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x197010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x197014: 0xfba30180  sqc2        $vf3, 0x180($sp)
    ctx->pc = 0x197014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x197018: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x197018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19701c: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x19701cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x197020: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x197020u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x197024: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x197024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x197028: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x197028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19702c: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x19702cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x197030: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x197030u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x197034: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x197034u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x197038: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x197038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19703c: 0xfba201a0  sqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x19703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x197040: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x197040u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x197044: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x197044u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x197048: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x197048u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19704c: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x19704cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x197050: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x197050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x197054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197058: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x197058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19705c: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x19705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x197060: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x197060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x197064: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x197064u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x197068: 0xde44bdf8  ld          $a0, -0x4208($s2)
    ctx->pc = 0x197068u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 4294950392)));
    // 0x19706c: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x19706cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x197070: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x197070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x197074: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x197074u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x197078: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x197078u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x19707c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x19707cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x197080: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x197080u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x197084: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x197084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197088: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x197088u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x19708c: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x19708cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x197090: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x197090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x197094: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x197094u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x197098: 0xfe44bdf8  sd          $a0, -0x4208($s2)
    ctx->pc = 0x197098u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294950392), GPR_U64(ctx, 4));
    // 0x19709c: 0xfe030068  sd          $v1, 0x68($s0)
    ctx->pc = 0x19709cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 3));
    // 0x1970a0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1970a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1970a4: 0x8c42ec68  lw          $v0, -0x1398($v0)
    ctx->pc = 0x1970a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962280)));
    // 0x1970a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1970a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1970ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1970acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1970b0: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1970b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1970b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1970B4u;
    {
        const bool branch_taken_0x1970b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1970B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1970B4u;
            // 0x1970b8: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970b4) {
            ctx->pc = 0x1970C8u;
            goto label_1970c8;
        }
    }
    ctx->pc = 0x1970BCu;
    // 0x1970bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1970BCu;
    {
        const bool branch_taken_0x1970bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1970C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1970BCu;
            // 0x1970c0: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970bc) {
            ctx->pc = 0x1970CCu;
            goto label_1970cc;
        }
    }
    ctx->pc = 0x1970C4u;
    // 0x1970c4: 0x0  nop
    ctx->pc = 0x1970c4u;
    // NOP
label_1970c8:
    // 0x1970c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1970c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1970cc:
    // 0x1970cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1970CCu;
    {
        const bool branch_taken_0x1970cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1970D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1970CCu;
            // 0x1970d0: 0x27b101c0  addiu       $s1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970cc) {
            ctx->pc = 0x1970F4u;
            goto label_1970f4;
        }
    }
    ctx->pc = 0x1970D4u;
    // 0x1970d4: 0xc085fee  jal         func_217FB8
    ctx->pc = 0x1970D4u;
    SET_GPR_U32(ctx, 31, 0x1970DCu);
    ctx->pc = 0x1970D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1970D4u;
            // 0x1970d8: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217FB8u;
    if (runtime->hasFunction(0x217FB8u)) {
        auto targetFn = runtime->lookupFunction(0x217FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970DCu; }
        if (ctx->pc != 0x1970DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00217FB8_0x217fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970DCu; }
        if (ctx->pc != 0x1970DCu) { return; }
    }
    ctx->pc = 0x1970DCu;
    // 0x1970dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1970DCu;
    {
        const bool branch_taken_0x1970dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1970E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1970DCu;
            // 0x1970e0: 0x27b101c0  addiu       $s1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970dc) {
            ctx->pc = 0x1970F4u;
            goto label_1970f4;
        }
    }
    ctx->pc = 0x1970E4u;
label_1970e4:
    // 0x1970e4: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x1970e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    // 0x1970e8: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x1970e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x1970ec: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x1970ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x1970f0: 0x27b101c0  addiu       $s1, $sp, 0x1C0
    ctx->pc = 0x1970f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_1970f4:
    // 0x1970f4: 0xc090e12  jal         func_243848
    ctx->pc = 0x1970F4u;
    SET_GPR_U32(ctx, 31, 0x1970FCu);
    ctx->pc = 0x1970F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1970F4u;
            // 0x1970f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243848u;
    if (runtime->hasFunction(0x243848u)) {
        auto targetFn = runtime->lookupFunction(0x243848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970FCu; }
        if (ctx->pc != 0x1970FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243848_0x243850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970FCu; }
        if (ctx->pc != 0x1970FCu) { return; }
    }
    ctx->pc = 0x1970FCu;
    // 0x1970fc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1970fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x197100: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x197100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197104: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x197104u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197108: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x197108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x19710c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19710Cu;
    {
        const bool branch_taken_0x19710c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x197110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19710Cu;
            // 0x197110: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19710c) {
            ctx->pc = 0x19711Cu;
            goto label_19711c;
        }
    }
    ctx->pc = 0x197114u;
    // 0x197114: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197114u;
    {
        const bool branch_taken_0x197114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197114u;
            // 0x197118: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197114) {
            ctx->pc = 0x197138u;
            goto label_197138;
        }
    }
    ctx->pc = 0x19711Cu;
label_19711c:
    // 0x19711c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x19711cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x197120: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x197120u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x197124: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197124u;
    {
        const bool branch_taken_0x197124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x197128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197124u;
            // 0x197128: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197124) {
            ctx->pc = 0x197138u;
            goto label_197138;
        }
    }
    ctx->pc = 0x19712Cu;
    // 0x19712c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x19712Cu;
    SET_GPR_U32(ctx, 31, 0x197134u);
    ctx->pc = 0x197130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19712Cu;
            // 0x197130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197134u; }
        if (ctx->pc != 0x197134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197134u; }
        if (ctx->pc != 0x197134u) { return; }
    }
    ctx->pc = 0x197134u;
    // 0x197134: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x197134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_197138:
    // 0x197138: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x197138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19713c: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x19713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x197140: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197144: 0x8c50c994  lw          $s0, -0x366C($v0)
    ctx->pc = 0x197144u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953364)));
    // 0x197148: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x197148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19714c: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x19714cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x197150: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197150u;
    {
        const bool branch_taken_0x197150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x197154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197150u;
            // 0x197154: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197150) {
            ctx->pc = 0x197160u;
            goto label_197160;
        }
    }
    ctx->pc = 0x197158u;
    // 0x197158: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197158u;
    {
        const bool branch_taken_0x197158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19715Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197158u;
            // 0x19715c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197158) {
            ctx->pc = 0x19717Cu;
            goto label_19717c;
        }
    }
    ctx->pc = 0x197160u;
label_197160:
    // 0x197160: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x197160u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x197164: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x197164u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x197168: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197168u;
    {
        const bool branch_taken_0x197168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x19716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197168u;
            // 0x19716c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197168) {
            ctx->pc = 0x19717Cu;
            goto label_19717c;
        }
    }
    ctx->pc = 0x197170u;
    // 0x197170: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x197170u;
    SET_GPR_U32(ctx, 31, 0x197178u);
    ctx->pc = 0x197174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197170u;
            // 0x197174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197178u; }
        if (ctx->pc != 0x197178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197178u; }
        if (ctx->pc != 0x197178u) { return; }
    }
    ctx->pc = 0x197178u;
    // 0x197178: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x197178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_19717c:
    // 0x19717c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19717cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x197180: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x197180u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197184: 0xc4405050  lwc1        $f0, 0x5050($v0)
    ctx->pc = 0x197184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197188: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x197188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19718c: 0xdba401c0  lqc2        $vf4, 0x1C0($sp)
    ctx->pc = 0x19718cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x197190: 0x4a810101  vaddy.y     $vf4, $vf0, $vf1y
    ctx->pc = 0x197190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x197194: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x197194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x197198: 0xfba401c0  sqc2        $vf4, 0x1C0($sp)
    ctx->pc = 0x197198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19719c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x19719cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1971a0: 0xfba30220  sqc2        $vf3, 0x220($sp)
    ctx->pc = 0x1971a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1971a4: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1971a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1971a8: 0xfba10230  sqc2        $vf1, 0x230($sp)
    ctx->pc = 0x1971a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1971ac: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1971acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1971b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1971b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1971b4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1971b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1971b8: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x1971b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1971bc: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x1971bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1971c0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1971c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1971c4: 0xfba30240  sqc2        $vf3, 0x240($sp)
    ctx->pc = 0x1971c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1971c8: 0xfba10280  sqc2        $vf1, 0x280($sp)
    ctx->pc = 0x1971c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1971cc: 0x4be308ec  vsub.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x1971ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1971d0: 0xfba301d0  sqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x1971d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1971d4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1971d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1971d8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1971d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1971dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1971dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1971e0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1971e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1971e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1971e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1971e8: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x1971e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1971ec: 0xc442504c  lwc1        $f2, 0x504C($v0)
    ctx->pc = 0x1971ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1971f0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1971f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1971f4: 0xa7a001f8  sh          $zero, 0x1F8($sp)
    ctx->pc = 0x1971f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 504), (uint16_t)GPR_U32(ctx, 0));
    // 0x1971f8: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1971f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1971fc: 0xe7a201f4  swc1        $f2, 0x1F4($sp)
    ctx->pc = 0x1971fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x197200: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x197200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x197204: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x197204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x197208: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x197208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19720c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x19720cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x197210: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x197210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x197214: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x197214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x197218: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x197218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x19721c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x19721cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x197220: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x197220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x197224: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x197224u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197228: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x197228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x19722c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19722cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197230: 0xaca3f170  sw          $v1, -0xE90($a1)
    ctx->pc = 0x197230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 3));
    // 0x197234: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x197234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x197238: 0x24c65ad8  addiu       $a2, $a2, 0x5AD8
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23256));
    // 0x19723c: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x19723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x197240: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197244: 0x4be32068  vadd.xyzw   $vf1, $vf4, $vf3
    ctx->pc = 0x197244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197248: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x197248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x19724c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x19724cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x197250: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x197250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x197254: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x197254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x197258: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x197258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19725c: 0xac510020  sw          $s1, 0x20($v0)
    ctx->pc = 0x19725cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    // 0x197260: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x197260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x197264: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x197264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x197268: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x197268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x19726c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x19726cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x197270: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x197270u;
    SET_GPR_U32(ctx, 31, 0x197278u);
    ctx->pc = 0x197274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197270u;
            // 0x197274: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197278u; }
        if (ctx->pc != 0x197278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197278u; }
        if (ctx->pc != 0x197278u) { return; }
    }
    ctx->pc = 0x197278u;
    // 0x197278: 0x87a201f8  lh          $v0, 0x1F8($sp)
    ctx->pc = 0x197278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x19727c: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x19727Cu;
    {
        const bool branch_taken_0x19727c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x197280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19727Cu;
            // 0x197280: 0x7bb00340  lq          $s0, 0x340($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19727c) {
            ctx->pc = 0x19731Cu;
            goto label_19731c;
        }
    }
    ctx->pc = 0x197284u;
    // 0x197284: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x197284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_197288:
    // 0x197288: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x197288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x19728c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197290: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x197290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x197294: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x197294u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197298: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x197298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19729c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1972a0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1972a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1972a4: 0x78630050  lq          $v1, 0x50($v1)
    ctx->pc = 0x1972a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1972a8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1972a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1972ac: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1972acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1972b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1972B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1972B8u);
        ctx->pc = 0x1972B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1972B0u;
            // 0x1972b4: 0x7fa30290  sq          $v1, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1972B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196C90u: goto label_196c90;
            case 0x196CACu: goto label_196cac;
            case 0x196CE0u: goto label_196ce0;
            case 0x196CE4u: goto label_196ce4;
            case 0x196D00u: goto label_196d00;
            case 0x196D4Cu: goto label_196d4c;
            case 0x196D60u: goto label_196d60;
            case 0x196D88u: goto label_196d88;
            case 0x196DE0u: goto label_196de0;
            case 0x196E34u: goto label_196e34;
            case 0x196E38u: goto label_196e38;
            case 0x196F98u: goto label_196f98;
            case 0x196F9Cu: goto label_196f9c;
            case 0x1970C8u: goto label_1970c8;
            case 0x1970CCu: goto label_1970cc;
            case 0x1970E4u: goto label_1970e4;
            case 0x1970F4u: goto label_1970f4;
            case 0x19711Cu: goto label_19711c;
            case 0x197138u: goto label_197138;
            case 0x197160u: goto label_197160;
            case 0x19717Cu: goto label_19717c;
            case 0x197288u: goto label_197288;
            case 0x197308u: goto label_197308;
            case 0x19731Cu: goto label_19731c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1972B8u; }
            if (ctx->pc != 0x1972B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1972B8u;
    // 0x1972b8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1972b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1972bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1972bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1972c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1972c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1972c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1972c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1972c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1972c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1972cc: 0xdba10280  lqc2        $vf1, 0x280($sp)
    ctx->pc = 0x1972ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1972d0: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1972d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1972d4: 0x701024a9  por         $a0, $zero, $s0
    ctx->pc = 0x1972d4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1972d8: 0xdba20290  lqc2        $vf2, 0x290($sp)
    ctx->pc = 0x1972d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1972dc: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1972dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1972e0: 0xc06562c  jal         func_1958B0
    ctx->pc = 0x1972E0u;
    SET_GPR_U32(ctx, 31, 0x1972E8u);
    ctx->pc = 0x1972E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1972E0u;
            // 0x1972e4: 0x48251000  qmfc2.ni    $a1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1958B0u;
    if (runtime->hasFunction(0x1958B0u)) {
        auto targetFn = runtime->lookupFunction(0x1958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972E8u; }
        if (ctx->pc != 0x1972E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1958b0_0x195ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972E8u; }
        if (ctx->pc != 0x1972E8u) { return; }
    }
    ctx->pc = 0x1972E8u;
    // 0x1972e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1972E8u;
    {
        const bool branch_taken_0x1972e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1972ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1972E8u;
            // 0x1972ec: 0x87a201f8  lh          $v0, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972e8) {
            ctx->pc = 0x197308u;
            goto label_197308;
        }
    }
    ctx->pc = 0x1972F0u;
    // 0x1972f0: 0x96e2002c  lhu         $v0, 0x2C($s7)
    ctx->pc = 0x1972f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 44)));
    // 0x1972f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1972f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1972f8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1972f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1972fc: 0xc0782f0  jal         func_1E0BC0
    ctx->pc = 0x1972FCu;
    SET_GPR_U32(ctx, 31, 0x197304u);
    ctx->pc = 0x197300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1972FCu;
            // 0x197300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0BC0u;
    if (runtime->hasFunction(0x1E0BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197304u; }
        if (ctx->pc != 0x197304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0BC0_0x1e0bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197304u; }
        if (ctx->pc != 0x197304u) { return; }
    }
    ctx->pc = 0x197304u;
    // 0x197304: 0x87a201f8  lh          $v0, 0x1F8($sp)
    ctx->pc = 0x197304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 504)));
label_197308:
    // 0x197308: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x197308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19730c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19730cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197310: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x197310u;
    {
        const bool branch_taken_0x197310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197310u;
            // 0x197314: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197310) {
            ctx->pc = 0x197288u;
            runtime->cooperativeGuestYield();
            goto label_197288;
        }
    }
    ctx->pc = 0x197318u;
    // 0x197318: 0x7bb00340  lq          $s0, 0x340($sp)
    ctx->pc = 0x197318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_19731c:
    // 0x19731c: 0x7bb10330  lq          $s1, 0x330($sp)
    ctx->pc = 0x19731cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x197320: 0x7bb20320  lq          $s2, 0x320($sp)
    ctx->pc = 0x197320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x197324: 0x7bb30310  lq          $s3, 0x310($sp)
    ctx->pc = 0x197324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x197328: 0x7bb40300  lq          $s4, 0x300($sp)
    ctx->pc = 0x197328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x19732c: 0x7bb502f0  lq          $s5, 0x2F0($sp)
    ctx->pc = 0x19732cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x197330: 0x7bb602e0  lq          $s6, 0x2E0($sp)
    ctx->pc = 0x197330u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x197334: 0x7bb702d0  lq          $s7, 0x2D0($sp)
    ctx->pc = 0x197334u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x197338: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x197338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x19733c: 0xc7b40350  lwc1        $f20, 0x350($sp)
    ctx->pc = 0x19733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x197340: 0x3e00008  jr          $ra
    ctx->pc = 0x197340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197340u;
            // 0x197344: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196C90u: goto label_196c90;
            case 0x196CACu: goto label_196cac;
            case 0x196CE0u: goto label_196ce0;
            case 0x196CE4u: goto label_196ce4;
            case 0x196D00u: goto label_196d00;
            case 0x196D4Cu: goto label_196d4c;
            case 0x196D60u: goto label_196d60;
            case 0x196D88u: goto label_196d88;
            case 0x196DE0u: goto label_196de0;
            case 0x196E34u: goto label_196e34;
            case 0x196E38u: goto label_196e38;
            case 0x196F98u: goto label_196f98;
            case 0x196F9Cu: goto label_196f9c;
            case 0x1970C8u: goto label_1970c8;
            case 0x1970CCu: goto label_1970cc;
            case 0x1970E4u: goto label_1970e4;
            case 0x1970F4u: goto label_1970f4;
            case 0x19711Cu: goto label_19711c;
            case 0x197138u: goto label_197138;
            case 0x197160u: goto label_197160;
            case 0x19717Cu: goto label_19717c;
            case 0x197288u: goto label_197288;
            case 0x197308u: goto label_197308;
            case 0x19731Cu: goto label_19731c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197348u;
}
