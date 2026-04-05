#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8728
// Address: 0x1e8728 - 0x1e88b8
void sub_001E8728_0x1e8728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8728_0x1e8728");
#endif

    ctx->pc = 0x1e8728u;

    // 0x1e8728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e872c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e872cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8730: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e8730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e8734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e873c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8740: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1e8740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1e8744: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1e8744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1e8748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8748u;
    {
        const bool branch_taken_0x1e8748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E874Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8748u;
            // 0x1e874c: 0x70058ca9  por         $s1, $zero, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8748) {
            ctx->pc = 0x1E8764u;
            goto label_1e8764;
        }
    }
    ctx->pc = 0x1E8750u;
    // 0x1e8750: 0xc090d56  jal         func_243558
    ctx->pc = 0x1E8750u;
    SET_GPR_U32(ctx, 31, 0x1E8758u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8758u; }
        if (ctx->pc != 0x1E8758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8758u; }
        if (ctx->pc != 0x1E8758u) { return; }
    }
    ctx->pc = 0x1E8758u;
    // 0x1e8758: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1e8758u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1e875c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1e875cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1e8760: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1e8760u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e8764:
    // 0x1e8764: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8764u;
    {
        const bool branch_taken_0x1e8764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8764) {
            ctx->pc = 0x1E8768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8764u;
            // 0x1e8768: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E877Cu;
            goto label_1e877c;
        }
    }
    ctx->pc = 0x1E876Cu;
    // 0x1e876c: 0xc07a2f6  jal         func_1E8BD8
    ctx->pc = 0x1E876Cu;
    SET_GPR_U32(ctx, 31, 0x1E8774u);
    ctx->pc = 0x1E8770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E876Cu;
            // 0x1e8770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8BD8u;
    if (runtime->hasFunction(0x1E8BD8u)) {
        auto targetFn = runtime->lookupFunction(0x1E8BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8774u; }
        if (ctx->pc != 0x1E8774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8BD8_0x1e8bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8774u; }
        if (ctx->pc != 0x1E8774u) { return; }
    }
    ctx->pc = 0x1E8774u;
    // 0x1e8774: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1E8774u;
    {
        const bool branch_taken_0x1e8774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8774u;
            // 0x1e8778: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8774) {
            ctx->pc = 0x1E88A8u;
            goto label_1e88a8;
        }
    }
    ctx->pc = 0x1E877Cu;
label_1e877c:
    // 0x1e877c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e877cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8780: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x1e8780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x1e8784: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1e8784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1e8788: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e8788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e878c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1e878cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1e8790: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x1e8790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x1e8794: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e8794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e8798: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e8798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e879c: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x1e879cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
    // 0x1e87a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e87a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e87a4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1e87a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1e87a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e87ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e87acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e87b0: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x1e87b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x1e87b4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1e87b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1e87b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e87b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e87bc: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x1e87bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e87c0: 0x34a5fffd  ori         $a1, $a1, 0xFFFD
    ctx->pc = 0x1e87c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65533);
    // 0x1e87c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e87c8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1e87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1e87cc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1e87ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1e87d0: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1e87d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1e87d4: 0x3484efff  ori         $a0, $a0, 0xEFFF
    ctx->pc = 0x1e87d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61439);
    // 0x1e87d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e87d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e87dc: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1e87dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1e87e0: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1e87e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1e87e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E87E4u;
    {
        const bool branch_taken_0x1e87e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E87E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E87E4u;
            // 0x1e87e8: 0xae060174  sw          $a2, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e87e4) {
            ctx->pc = 0x1E8818u;
            goto label_1e8818;
        }
    }
    ctx->pc = 0x1E87ECu;
    // 0x1e87ec: 0x0  nop
    ctx->pc = 0x1e87ecu;
    // NOP
label_1e87f0:
    // 0x1e87f0: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1e87f4:
    // 0x1e87f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1e87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1e87f8: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x1e87f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x1e87fc: 0x8e040328  lw          $a0, 0x328($s0)
    ctx->pc = 0x1e87fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1e8800: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e8800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e8804: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e8804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e8808: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1e8808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1e880c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E880Cu;
    {
        const bool branch_taken_0x1e880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E880Cu;
            // 0x1e8810: 0xa48500e0  sh          $a1, 0xE0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 224), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e880c) {
            ctx->pc = 0x1E88A4u;
            goto label_1e88a4;
        }
    }
    ctx->pc = 0x1E8814u;
    // 0x1e8814: 0x0  nop
    ctx->pc = 0x1e8814u;
    // NOP
label_1e8818:
    // 0x1e8818: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e8818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e881c: 0x70111fc9  prot3w      $v1, $s1
    ctx->pc = 0x1e881cu;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e8820: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e8820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8824: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e8824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e8828: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e882c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e8830: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x1e8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8834: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e8834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e8838: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e8838u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e883c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e883cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8840: 0x0  nop
    ctx->pc = 0x1e8840u;
    // NOP
    // 0x1e8844: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8844u;
    {
        const bool branch_taken_0x1e8844 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8844u;
            // 0x1e8848: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8844) {
            ctx->pc = 0x1E8850u;
            goto label_1e8850;
        }
    }
    ctx->pc = 0x1E884Cu;
    // 0x1e884c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e884cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8850:
    // 0x1e8850: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1E8850u;
    {
        const bool branch_taken_0x1e8850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8850u;
            // 0x1e8854: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8850) {
            ctx->pc = 0x1E87F0u;
            runtime->cooperativeGuestYield();
            goto label_1e87f0;
        }
    }
    ctx->pc = 0x1E8858u;
    // 0x1e8858: 0x3c01c2e0  lui         $at, 0xC2E0
    ctx->pc = 0x1e8858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49888 << 16));
    // 0x1e885c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e885cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8860: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e8860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8864: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1E8864u;
    {
        const bool branch_taken_0x1e8864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8864) {
            ctx->pc = 0x1E889Cu;
            goto label_1e889c;
        }
    }
    ctx->pc = 0x1E886Cu;
    // 0x1e886c: 0xda0102e0  lqc2        $vf1, 0x2E0($s0)
    ctx->pc = 0x1e886cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1e8870: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1e8870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8874: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e8874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8878: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e8878u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e887c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e887cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8880: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e8880u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8884: 0x0  nop
    ctx->pc = 0x1e8884u;
    // NOP
    // 0x1e8888: 0x4501ffd9  bc1t        . + 4 + (-0x27 << 2)
    ctx->pc = 0x1E8888u;
    {
        const bool branch_taken_0x1e8888 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8888u;
            // 0x1e888c: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8888) {
            ctx->pc = 0x1E87F0u;
            runtime->cooperativeGuestYield();
            goto label_1e87f0;
        }
    }
    ctx->pc = 0x1E8890u;
    // 0x1e8890: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e8890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e8894: 0x441ffd7  bgez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1E8894u;
    {
        const bool branch_taken_0x1e8894 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E8898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8894u;
            // 0x1e8898: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8894) {
            ctx->pc = 0x1E87F4u;
            runtime->cooperativeGuestYield();
            goto label_1e87f4;
        }
    }
    ctx->pc = 0x1E889Cu;
label_1e889c:
    // 0x1e889c: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1E889Cu;
    SET_GPR_U32(ctx, 31, 0x1E88A4u);
    ctx->pc = 0x1E88A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E889Cu;
            // 0x1e88a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88A4u; }
        if (ctx->pc != 0x1E88A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88A4u; }
        if (ctx->pc != 0x1E88A4u) { return; }
    }
    ctx->pc = 0x1E88A4u;
label_1e88a4:
    // 0x1e88a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e88a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e88a8:
    // 0x1e88a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e88a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e88ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e88acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e88b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E88B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E88B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88B0u;
            // 0x1e88b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8764u: goto label_1e8764;
            case 0x1E877Cu: goto label_1e877c;
            case 0x1E87F0u: goto label_1e87f0;
            case 0x1E87F4u: goto label_1e87f4;
            case 0x1E8818u: goto label_1e8818;
            case 0x1E8850u: goto label_1e8850;
            case 0x1E889Cu: goto label_1e889c;
            case 0x1E88A4u: goto label_1e88a4;
            case 0x1E88A8u: goto label_1e88a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E88B8u;
}
