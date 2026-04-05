#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0F18
// Address: 0x1d0f18 - 0x1d10a8
void sub_001D0F18_0x1d0f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0F18_0x1d0f18");
#endif

    ctx->pc = 0x1d0f18u;

    // 0x1d0f18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d0f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d0f1c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d0f20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d0f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d0f24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d0f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d0f28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d0f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d0f2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0f34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d0f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d0f38: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1d0f38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d0f3c: 0x8c43d2ac  lw          $v1, -0x2D54($v0)
    ctx->pc = 0x1d0f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d0f40: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1d0f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1d0f44: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1d0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1d0f48: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1d0f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d0f4c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d0f50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d0f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d0f54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0f58: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0F58u;
    {
        const bool branch_taken_0x1d0f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D0F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F58u;
            // 0x1d0f5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f58) {
            ctx->pc = 0x1D0F64u;
            goto label_1d0f64;
        }
    }
    ctx->pc = 0x1D0F60u;
    // 0x1d0f60: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1d0f60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d0f64:
    // 0x1d0f64: 0x52000049  beql        $s0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x1D0F64u;
    {
        const bool branch_taken_0x1d0f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f64) {
            ctx->pc = 0x1D0F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F64u;
            // 0x1d0f68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D108Cu;
            goto label_1d108c;
        }
    }
    ctx->pc = 0x1D0F6Cu;
    // 0x1d0f6c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1d0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1d0f70: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1D0F70u;
    {
        const bool branch_taken_0x1d0f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F70u;
            // 0x1d0f74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f70) {
            ctx->pc = 0x1D1088u;
            goto label_1d1088;
        }
    }
    ctx->pc = 0x1D0F78u;
    // 0x1d0f78: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1d0f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d0f7c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F7Cu;
    {
        const bool branch_taken_0x1d0f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F7Cu;
            // 0x1d0f80: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f7c) {
            ctx->pc = 0x1D0F8Cu;
            goto label_1d0f8c;
        }
    }
    ctx->pc = 0x1D0F84u;
    // 0x1d0f84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0F84u;
    {
        const bool branch_taken_0x1d0f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F84u;
            // 0x1d0f88: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f84) {
            ctx->pc = 0x1D0FA8u;
            goto label_1d0fa8;
        }
    }
    ctx->pc = 0x1D0F8Cu;
label_1d0f8c:
    // 0x1d0f8c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1d0f8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d0f90: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d0f90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d0f94: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0F94u;
    {
        const bool branch_taken_0x1d0f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d0f94) {
            ctx->pc = 0x1D0F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F94u;
            // 0x1d0f98: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0FA8u;
            goto label_1d0fa8;
        }
    }
    ctx->pc = 0x1D0F9Cu;
    // 0x1d0f9c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1D0F9Cu;
    SET_GPR_U32(ctx, 31, 0x1D0FA4u);
    ctx->pc = 0x1D0FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F9Cu;
            // 0x1d0fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FA4u; }
        if (ctx->pc != 0x1D0FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FA4u; }
        if (ctx->pc != 0x1D0FA4u) { return; }
    }
    ctx->pc = 0x1D0FA4u;
    // 0x1d0fa4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1d0fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1d0fa8:
    // 0x1d0fa8: 0x78900030  lq          $s0, 0x30($a0)
    ctx->pc = 0x1d0fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d0fac: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d0fb0: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x1d0fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0fb4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0fb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0fbc: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1d0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1d0fc0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1d0fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1d0fc4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1d0fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0fc8: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1d0fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x1d0fcc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d0fd0: 0x24840eb0  addiu       $a0, $a0, 0xEB0
    ctx->pc = 0x1d0fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3760));
    // 0x1d0fd4: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x1d0fd4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1d0fd8: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1d0fd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0fdc: 0x24c2f170  addiu       $v0, $a2, -0xE90
    ctx->pc = 0x1d0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x1d0fe0: 0xacc3f170  sw          $v1, -0xE90($a2)
    ctx->pc = 0x1d0fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 3));
    // 0x1d0fe4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1d0fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d0fe8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1d0fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1d0fec: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1d0ff0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d0ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d0ff4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d0ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d0ff8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d0ffc: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x1d0ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
    // 0x1d1000: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d1000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d1004: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1d1004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1d1008: 0xac510020  sw          $s1, 0x20($v0)
    ctx->pc = 0x1d1008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    // 0x1d100c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d100cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d1010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d1010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1014: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1d1014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1d1018: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1d1018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x1d101c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1d101cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d1020: 0x40f809  jalr        $v0
    ctx->pc = 0x1D1020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1028u);
        ctx->pc = 0x1D1024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1020u;
            // 0x1d1024: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1028u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0F64u: goto label_1d0f64;
            case 0x1D0F8Cu: goto label_1d0f8c;
            case 0x1D0FA8u: goto label_1d0fa8;
            case 0x1D1058u: goto label_1d1058;
            case 0x1D1074u: goto label_1d1074;
            case 0x1D1088u: goto label_1d1088;
            case 0x1D108Cu: goto label_1d108c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1028u; }
            if (ctx->pc != 0x1D1028u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1028u;
    // 0x1d1028: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1d1028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1d102c: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1d102cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1d1030: 0xc074ce4  jal         func_1D3390
    ctx->pc = 0x1D1030u;
    SET_GPR_U32(ctx, 31, 0x1D1038u);
    ctx->pc = 0x1D1034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1030u;
            // 0x1d1034: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3390u;
    if (runtime->hasFunction(0x1D3390u)) {
        auto targetFn = runtime->lookupFunction(0x1D3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1038u; }
        if (ctx->pc != 0x1D1038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3390_0x1d3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1038u; }
        if (ctx->pc != 0x1D1038u) { return; }
    }
    ctx->pc = 0x1D1038u;
    // 0x1d1038: 0xa6220074  sh          $v0, 0x74($s1)
    ctx->pc = 0x1d1038u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 116), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d103c: 0x86430060  lh          $v1, 0x60($s2)
    ctx->pc = 0x1d103cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1d1040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d1040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1044: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1044u;
    {
        const bool branch_taken_0x1d1044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1044u;
            // 0x1d1048: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1044) {
            ctx->pc = 0x1D1058u;
            goto label_1d1058;
        }
    }
    ctx->pc = 0x1D104Cu;
    // 0x1d104c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D104Cu;
    {
        const bool branch_taken_0x1d104c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D104Cu;
            // 0x1d1050: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d104c) {
            ctx->pc = 0x1D1074u;
            goto label_1d1074;
        }
    }
    ctx->pc = 0x1D1054u;
    // 0x1d1054: 0x0  nop
    ctx->pc = 0x1d1054u;
    // NOP
label_1d1058:
    // 0x1d1058: 0xde430068  ld          $v1, 0x68($s2)
    ctx->pc = 0x1d1058u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1d105c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d105cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d1060: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1060u;
    {
        const bool branch_taken_0x1d1060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D1064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1060u;
            // 0x1d1064: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1060) {
            ctx->pc = 0x1D1074u;
            goto label_1d1074;
        }
    }
    ctx->pc = 0x1D1068u;
    // 0x1d1068: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1D1068u;
    SET_GPR_U32(ctx, 31, 0x1D1070u);
    ctx->pc = 0x1D106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1068u;
            // 0x1d106c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1070u; }
        if (ctx->pc != 0x1D1070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1070u; }
        if (ctx->pc != 0x1D1070u) { return; }
    }
    ctx->pc = 0x1D1070u;
    // 0x1d1070: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x1d1070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1d1074:
    // 0x1d1074: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d1074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d1078: 0x78850030  lq          $a1, 0x30($a0)
    ctx->pc = 0x1d1078u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d107c: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1d107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1d1080: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x1D1080u;
    SET_GPR_U32(ctx, 31, 0x1D1088u);
    ctx->pc = 0x1D1084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1080u;
            // 0x1d1084: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1088u; }
        if (ctx->pc != 0x1D1088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1088u; }
        if (ctx->pc != 0x1D1088u) { return; }
    }
    ctx->pc = 0x1D1088u;
label_1d1088:
    // 0x1d1088: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d1088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d108c:
    // 0x1d108c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d108cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1090: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d1090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1098: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1d1098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d109c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D109Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D10A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D109Cu;
            // 0x1d10a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0F64u: goto label_1d0f64;
            case 0x1D0F8Cu: goto label_1d0f8c;
            case 0x1D0FA8u: goto label_1d0fa8;
            case 0x1D1058u: goto label_1d1058;
            case 0x1D1074u: goto label_1d1074;
            case 0x1D1088u: goto label_1d1088;
            case 0x1D108Cu: goto label_1d108c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D10A4u;
    // 0x1d10a4: 0x0  nop
    ctx->pc = 0x1d10a4u;
    // NOP
}
