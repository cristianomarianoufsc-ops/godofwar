#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0048
// Address: 0x1d0048 - 0x1d0248
void sub_001D0048_0x1d0048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0048_0x1d0048");
#endif

    ctx->pc = 0x1d0048u;

    // 0x1d0048: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1d0048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1d004c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1d004cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1d0050: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1d0050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1d0054: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d0054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0058: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1d0058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1d005c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1d005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1d0060: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1d0060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1d0064: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1d0064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1d0068: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1d0068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1d006c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1d006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1d0070: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1d0070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1d0074: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1D0074u;
    {
        const bool branch_taken_0x1d0074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0074u;
            // 0x1d0078: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0074) {
            ctx->pc = 0x1D022Cu;
            goto label_1d022c;
        }
    }
    ctx->pc = 0x1D007Cu;
    // 0x1d007c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d007cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0080: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d0080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d0084: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d0084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d0088: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d0088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d008c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D008Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0094u);
        ctx->pc = 0x1D0090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D008Cu;
            // 0x1d0090: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0094u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D00C4u: goto label_1d00c4;
            case 0x1D0108u: goto label_1d0108;
            case 0x1D0138u: goto label_1d0138;
            case 0x1D0158u: goto label_1d0158;
            case 0x1D01D8u: goto label_1d01d8;
            case 0x1D0218u: goto label_1d0218;
            case 0x1D0228u: goto label_1d0228;
            case 0x1D022Cu: goto label_1d022c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0094u; }
            if (ctx->pc != 0x1D0094u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0094u;
    // 0x1d0094: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d0094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0098: 0x52000064  beql        $s0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x1D0098u;
    {
        const bool branch_taken_0x1d0098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0098) {
            ctx->pc = 0x1D009Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0098u;
            // 0x1d009c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D022Cu;
            goto label_1d022c;
        }
    }
    ctx->pc = 0x1D00A0u;
    // 0x1d00a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d00a4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D00A4u;
    {
        const bool branch_taken_0x1d00a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d00a4) {
            ctx->pc = 0x1D00A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00A4u;
            // 0x1d00a8: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D00C4u;
            goto label_1d00c4;
        }
    }
    ctx->pc = 0x1D00ACu;
    // 0x1d00ac: 0xc0827b0  jal         func_209EC0
    ctx->pc = 0x1D00ACu;
    SET_GPR_U32(ctx, 31, 0x1D00B4u);
    ctx->pc = 0x1D00B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00ACu;
            // 0x1d00b0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EC0u;
    if (runtime->hasFunction(0x209EC0u)) {
        auto targetFn = runtime->lookupFunction(0x209EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00B4u; }
        if (ctx->pc != 0x1D00B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EC0_0x209ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00B4u; }
        if (ctx->pc != 0x1D00B4u) { return; }
    }
    ctx->pc = 0x1D00B4u;
    // 0x1d00b4: 0xc0827ca  jal         func_209F28
    ctx->pc = 0x1D00B4u;
    SET_GPR_U32(ctx, 31, 0x1D00BCu);
    ctx->pc = 0x1D00B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00B4u;
            // 0x1d00b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209F28u;
    if (runtime->hasFunction(0x209F28u)) {
        auto targetFn = runtime->lookupFunction(0x209F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00BCu; }
        if (ctx->pc != 0x1D00BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209F28_0x209f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00BCu; }
        if (ctx->pc != 0x1D00BCu) { return; }
    }
    ctx->pc = 0x1D00BCu;
    // 0x1d00bc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d00bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1d00c0: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1d00c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d00c4:
    // 0x1d00c4: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1d00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1d00c8: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1d00c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1d00cc: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1D00CCu;
    {
        const bool branch_taken_0x1d00cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D00D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00CCu;
            // 0x1d00d0: 0x8e140004  lw          $s4, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00cc) {
            ctx->pc = 0x1D0228u;
            goto label_1d0228;
        }
    }
    ctx->pc = 0x1D00D4u;
    // 0x1d00d4: 0x8e24024c  lw          $a0, 0x24C($s1)
    ctx->pc = 0x1d00d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1d00d8: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D00D8u;
    {
        const bool branch_taken_0x1d00d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00D8u;
            // 0x1d00dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00d8) {
            ctx->pc = 0x1D0138u;
            goto label_1d0138;
        }
    }
    ctx->pc = 0x1D00E0u;
    // 0x1d00e0: 0x8c900104  lw          $s0, 0x104($a0)
    ctx->pc = 0x1d00e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1d00e4: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D00E4u;
    {
        const bool branch_taken_0x1d00e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00E4u;
            // 0x1d00e8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00e4) {
            ctx->pc = 0x1D0138u;
            goto label_1d0138;
        }
    }
    ctx->pc = 0x1D00ECu;
    // 0x1d00ec: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d00ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d00f0: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1d00f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1d00f4: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D00F4u;
    {
        const bool branch_taken_0x1d00f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D00F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00F4u;
            // 0x1d00f8: 0x8e320250  lw          $s2, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00f4) {
            ctx->pc = 0x1D0108u;
            goto label_1d0108;
        }
    }
    ctx->pc = 0x1D00FCu;
    // 0x1d00fc: 0xc04da64  jal         func_136990
    ctx->pc = 0x1D00FCu;
    SET_GPR_U32(ctx, 31, 0x1D0104u);
    ctx->pc = 0x1D0100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00FCu;
            // 0x1d0100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0104u; }
        if (ctx->pc != 0x1D0104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0104u; }
        if (ctx->pc != 0x1D0104u) { return; }
    }
    ctx->pc = 0x1D0104u;
    // 0x1d0104: 0x0  nop
    ctx->pc = 0x1d0104u;
    // NOP
label_1d0108:
    // 0x1d0108: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1d0108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1d010c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1d010cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1d0110: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1d0110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0114: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d0114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d0118: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1d0118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d011c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1d011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1d0120: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1d0120u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d0124: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1d0124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1d0128: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1d0128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d012c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1d012cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1d0130: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1d0130u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1d0134: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1d0134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1d0138:
    // 0x1d0138: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1d0138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1d013c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1d013cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1d0140: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0140u;
    {
        const bool branch_taken_0x1d0140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0140) {
            ctx->pc = 0x1D0144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0140u;
            // 0x1d0144: 0xda220220  lqc2        $vf2, 0x220($s1) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0158u;
            goto label_1d0158;
        }
    }
    ctx->pc = 0x1D0148u;
    // 0x1d0148: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1d0148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1d014c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D014Cu;
    {
        const bool branch_taken_0x1d014c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d014c) {
            ctx->pc = 0x1D01D8u;
            goto label_1d01d8;
        }
    }
    ctx->pc = 0x1D0154u;
    // 0x1d0154: 0xda220220  lqc2        $vf2, 0x220($s1)
    ctx->pc = 0x1d0154u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 544)));
label_1d0158:
    // 0x1d0158: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1d0158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d015c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d015cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0160: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1d0160u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d0164: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1d0164u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1d0168: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1d0168u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1d016c: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1d016cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d0170: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x1d0170u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x1d0174: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d0174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d0178: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x1d0178u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1d017c: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1d017cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d0180: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1d0180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d0184: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d0184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d0188: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d0188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d018c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1d018cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1d0190: 0x78630050  lq          $v1, 0x50($v1)
    ctx->pc = 0x1d0190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1d0194: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1d0194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1d0198: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1d0198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d019c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x1d019cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x1d01a0: 0x40f809  jalr        $v0
    ctx->pc = 0x1D01A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D01A8u);
        ctx->pc = 0x1D01A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01A0u;
            // 0x1d01a4: 0xfba400d0  sqc2        $vf4, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D01A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D00C4u: goto label_1d00c4;
            case 0x1D0108u: goto label_1d0108;
            case 0x1D0138u: goto label_1d0138;
            case 0x1D0158u: goto label_1d0158;
            case 0x1D01D8u: goto label_1d01d8;
            case 0x1D0218u: goto label_1d0218;
            case 0x1D0228u: goto label_1d0228;
            case 0x1D022Cu: goto label_1d022c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D01A8u; }
            if (ctx->pc != 0x1D01A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D01A8u;
    // 0x1d01a8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1d01a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1d01ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d01acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d01b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d01b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d01b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d01b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d01b8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1d01b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d01bc: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1d01bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d01c0: 0x4a812100  vaddx.y     $vf4, $vf4, $vf1x
    ctx->pc = 0x1d01c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1d01c4: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1d01c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d01c8: 0x4be41068  vadd.xyzw   $vf1, $vf2, $vf4
    ctx->pc = 0x1d01c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d01cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D01CCu;
    {
        const bool branch_taken_0x1d01cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D01D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01CCu;
            // 0x1d01d0: 0xfba10030  sqc2        $vf1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01cc) {
            ctx->pc = 0x1D0218u;
            goto label_1d0218;
        }
    }
    ctx->pc = 0x1D01D4u;
    // 0x1d01d4: 0x0  nop
    ctx->pc = 0x1d01d4u;
    // NOP
label_1d01d8:
    // 0x1d01d8: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1d01d8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1d01dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d01e0: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x1d01e0u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1d01e4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1d01e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d01e8: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1d01e8u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1d01ec: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1d01ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d01f0: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x1d01f0u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1d01f4: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1d01f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1d01f8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1d01f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1d01fc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1d01fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d0200: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0204: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1d0204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d0208: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x1d0208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d020c: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1d020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1d0210: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1d0210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1d0214: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1d0214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1d0218:
    // 0x1d0218: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d021c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d021cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0220: 0xc082926  jal         func_20A498
    ctx->pc = 0x1D0220u;
    SET_GPR_U32(ctx, 31, 0x1D0228u);
    ctx->pc = 0x1D0224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0220u;
            // 0x1d0224: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A498u;
    if (runtime->hasFunction(0x20A498u)) {
        auto targetFn = runtime->lookupFunction(0x20A498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0228u; }
        if (ctx->pc != 0x1D0228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A498_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0228u; }
        if (ctx->pc != 0x1D0228u) { return; }
    }
    ctx->pc = 0x1D0228u;
label_1d0228:
    // 0x1d0228: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1d0228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1d022c:
    // 0x1d022c: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1d022cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d0230: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1d0230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d0234: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1d0234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d0238: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x1d0238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d023c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1d023cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d0240: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0240u;
            // 0x1d0244: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D00C4u: goto label_1d00c4;
            case 0x1D0108u: goto label_1d0108;
            case 0x1D0138u: goto label_1d0138;
            case 0x1D0158u: goto label_1d0158;
            case 0x1D01D8u: goto label_1d01d8;
            case 0x1D0218u: goto label_1d0218;
            case 0x1D0228u: goto label_1d0228;
            case 0x1D022Cu: goto label_1d022c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D0248u;
}
