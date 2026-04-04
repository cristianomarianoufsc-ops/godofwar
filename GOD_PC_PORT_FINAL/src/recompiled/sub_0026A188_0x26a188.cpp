#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A188
// Address: 0x26a188 - 0x26a5f0
void sub_0026A188_0x26a188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A188_0x26a188");
#endif

    ctx->pc = 0x26a188u;

    // 0x26a188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a18c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26a18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26a190: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26a194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a198: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x26a198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a19c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a1a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26a1a4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x26a1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a1a8: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x26A1A8u;
    SET_GPR_U32(ctx, 31, 0x26A1B0u);
    ctx->pc = 0x26A1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1A8u;
            // 0x26a1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1B0u; }
        if (ctx->pc != 0x26A1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1B0u; }
        if (ctx->pc != 0x26A1B0u) { return; }
    }
    ctx->pc = 0x26A1B0u;
    // 0x26a1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a1b4: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x26A1B4u;
    SET_GPR_U32(ctx, 31, 0x26A1BCu);
    ctx->pc = 0x26A1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1B4u;
            // 0x26a1b8: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1BCu; }
        if (ctx->pc != 0x26A1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1BCu; }
        if (ctx->pc != 0x26A1BCu) { return; }
    }
    ctx->pc = 0x26A1BCu;
    // 0x26a1bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26a1c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26a1c4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x26a1c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x26a1c8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x26a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x26a1cc: 0x40f809  jalr        $v0
    ctx->pc = 0x26A1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A1D4u);
        ctx->pc = 0x26A1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1CCu;
            // 0x26a1d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A1D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A1D4u; }
            if (ctx->pc != 0x26A1D4u) { return; }
        }
        }
    }
    ctx->pc = 0x26A1D4u;
    // 0x26a1d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a1d8: 0xc07fd12  jal         func_1FF448
    ctx->pc = 0x26A1D8u;
    SET_GPR_U32(ctx, 31, 0x26A1E0u);
    ctx->pc = 0x26A1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1D8u;
            // 0x26a1dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF448u;
    if (runtime->hasFunction(0x1FF448u)) {
        auto targetFn = runtime->lookupFunction(0x1FF448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1E0u; }
        if (ctx->pc != 0x26A1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF448_0x1ff448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1E0u; }
        if (ctx->pc != 0x26A1E0u) { return; }
    }
    ctx->pc = 0x26A1E0u;
    // 0x26a1e0: 0xc06b796  jal         func_1ADE58
    ctx->pc = 0x26A1E0u;
    SET_GPR_U32(ctx, 31, 0x26A1E8u);
    ctx->pc = 0x26A1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1E0u;
            // 0x26a1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADE58u;
    if (runtime->hasFunction(0x1ADE58u)) {
        auto targetFn = runtime->lookupFunction(0x1ADE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1E8u; }
        if (ctx->pc != 0x26A1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADE58_0x1ade58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1E8u; }
        if (ctx->pc != 0x26A1E8u) { return; }
    }
    ctx->pc = 0x26A1E8u;
    // 0x26a1e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26a1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a1ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x26A1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1F4u;
            // 0x26a1f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A1FCu;
    // 0x26a1fc: 0x0  nop
    ctx->pc = 0x26a1fcu;
    // NOP
    // 0x26a200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26a204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a208: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x26a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26a20c: 0x246a0010  addiu       $t2, $v1, 0x10
    ctx->pc = 0x26a20cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x26a210: 0x91420086  lbu         $v0, 0x86($t2)
    ctx->pc = 0x26a210u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 134)));
    // 0x26a214: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26A214u;
    {
        const bool branch_taken_0x26a214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a214) {
            ctx->pc = 0x26A248u;
            goto label_26a248;
        }
    }
    ctx->pc = 0x26A21Cu;
    // 0x26a21c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x26a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26a220: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26a220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a224: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x26a224u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a228:
    // 0x26a228: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x26a228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x26a22c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26a230: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x26a230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x26a234: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26a238: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x26a238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x26a23c: 0x1100fffa  beqz        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26A23Cu;
    {
        const bool branch_taken_0x26a23c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A23Cu;
            // 0x26a240: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a23c) {
            ctx->pc = 0x26A228u;
            runtime->cooperativeGuestYield();
            goto label_26a228;
        }
    }
    ctx->pc = 0x26A244u;
    // 0x26a244: 0xa1400086  sb          $zero, 0x86($t2)
    ctx->pc = 0x26a244u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 134), (uint8_t)GPR_U32(ctx, 0));
label_26a248:
    // 0x26a248: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A248u;
    {
        const bool branch_taken_0x26a248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x26A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A248u;
            // 0x26a24c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a248) {
            ctx->pc = 0x26A26Cu;
            goto label_26a26c;
        }
    }
    ctx->pc = 0x26A250u;
    // 0x26a250: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26a250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26a254: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a258: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26a258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26a25c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26a260: 0x40f809  jalr        $v0
    ctx->pc = 0x26A260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A268u);
        ctx->pc = 0x26A264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A260u;
            // 0x26a264: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A268u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A268u; }
            if (ctx->pc != 0x26A268u) { return; }
        }
        }
    }
    ctx->pc = 0x26A268u;
    // 0x26a268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26a26c:
    // 0x26a26c: 0x3e00008  jr          $ra
    ctx->pc = 0x26A26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A26Cu;
            // 0x26a270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A274u;
    // 0x26a274: 0x0  nop
    ctx->pc = 0x26a274u;
    // NOP
    // 0x26a278: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26a278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26a27c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x26a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26a280: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x26a280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x26a284: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26a284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x26a288: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x26a288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x26a28c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26a28cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a290: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x26a290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x26a294: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x26a294u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a298: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x26a298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x26a29c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x26a29cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2a0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x26a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x26a2a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26a2a8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x26a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x26a2ac: 0x8eb20030  lw          $s2, 0x30($s5)
    ctx->pc = 0x26a2acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x26a2b0: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x26a2b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26a2b4: 0x1462004e  bne         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x26A2B4u;
    {
        const bool branch_taken_0x26a2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2B4u;
            // 0x26a2b8: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2b4) {
            ctx->pc = 0x26A3F0u;
            goto label_26a3f0;
        }
    }
    ctx->pc = 0x26A2BCu;
    // 0x26a2bc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26a2c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26a2c4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x26a2c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26a2c8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x26a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x26a2cc: 0x40f809  jalr        $v0
    ctx->pc = 0x26A2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A2D4u);
        ctx->pc = 0x26A2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2CCu;
            // 0x26a2d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A2D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A2D4u; }
            if (ctx->pc != 0x26A2D4u) { return; }
        }
        }
    }
    ctx->pc = 0x26A2D4u;
    // 0x26a2d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2d8: 0x8e110054  lw          $s1, 0x54($s0)
    ctx->pc = 0x26a2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x26a2dc: 0x5220001f  beql        $s1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x26A2DCu;
    {
        const bool branch_taken_0x26a2dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a2dc) {
            ctx->pc = 0x26A2E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2DCu;
            // 0x26a2e0: 0x92820004  lbu         $v0, 0x4($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A35Cu;
            goto label_26a35c;
        }
    }
    ctx->pc = 0x26A2E4u;
    // 0x26a2e4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26a2e8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x26a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x26a2ec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26a2f0: 0xc080818  jal         func_202060
    ctx->pc = 0x26A2F0u;
    SET_GPR_U32(ctx, 31, 0x26A2F8u);
    ctx->pc = 0x26A2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2F0u;
            // 0x26a2f4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202060u;
    if (runtime->hasFunction(0x202060u)) {
        auto targetFn = runtime->lookupFunction(0x202060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2F8u; }
        if (ctx->pc != 0x26A2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202060_0x202060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2F8u; }
        if (ctx->pc != 0x26A2F8u) { return; }
    }
    ctx->pc = 0x26A2F8u;
    // 0x26a2f8: 0x1622002e  bne         $s1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x26A2F8u;
    {
        const bool branch_taken_0x26a2f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2F8u;
            // 0x26a2fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2f8) {
            ctx->pc = 0x26A3B4u;
            goto label_26a3b4;
        }
    }
    ctx->pc = 0x26A300u;
    // 0x26a300: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x26a300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x26a304: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x26a304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x26a308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a30c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26a30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a310: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26a310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a314: 0x0  nop
    ctx->pc = 0x26a314u;
    // NOP
    // 0x26a318: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x26A318u;
    {
        const bool branch_taken_0x26a318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A318u;
            // 0x26a31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a318) {
            ctx->pc = 0x26A3B4u;
            goto label_26a3b4;
        }
    }
    ctx->pc = 0x26A320u;
    // 0x26a320: 0x92620086  lbu         $v0, 0x86($s3)
    ctx->pc = 0x26a320u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 134)));
    // 0x26a324: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26A324u;
    {
        const bool branch_taken_0x26a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A324u;
            // 0x26a328: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a324) {
            ctx->pc = 0x26A3B0u;
            goto label_26a3b0;
        }
    }
    ctx->pc = 0x26A32Cu;
    // 0x26a32c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x26a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26a330: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26a330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a334: 0x0  nop
    ctx->pc = 0x26a334u;
    // NOP
label_26a338:
    // 0x26a338: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26a338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26a33c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26a340: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26a344: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26a344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26a348: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26a348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26a34c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26A34Cu;
    {
        const bool branch_taken_0x26a34c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A34Cu;
            // 0x26a350: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a34c) {
            ctx->pc = 0x26A338u;
            runtime->cooperativeGuestYield();
            goto label_26a338;
        }
    }
    ctx->pc = 0x26A354u;
    // 0x26a354: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26A354u;
    {
        const bool branch_taken_0x26a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A354u;
            // 0x26a358: 0xa2600086  sb          $zero, 0x86($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 134), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a354) {
            ctx->pc = 0x26A3B0u;
            goto label_26a3b0;
        }
    }
    ctx->pc = 0x26A35Cu;
label_26a35c:
    // 0x26a35c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A35Cu;
    {
        const bool branch_taken_0x26a35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a35c) {
            ctx->pc = 0x26A360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A35Cu;
            // 0x26a360: 0x92620086  lbu         $v0, 0x86($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 134)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A378u;
            goto label_26a378;
        }
    }
    ctx->pc = 0x26A364u;
    // 0x26a364: 0x920201c5  lbu         $v0, 0x1C5($s0)
    ctx->pc = 0x26a364u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 453)));
    // 0x26a368: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x26a368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x26a36c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26A36Cu;
    {
        const bool branch_taken_0x26a36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A36Cu;
            // 0x26a370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a36c) {
            ctx->pc = 0x26A3B4u;
            goto label_26a3b4;
        }
    }
    ctx->pc = 0x26A374u;
    // 0x26a374: 0x92620086  lbu         $v0, 0x86($s3)
    ctx->pc = 0x26a374u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 134)));
label_26a378:
    // 0x26a378: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26A378u;
    {
        const bool branch_taken_0x26a378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A378u;
            // 0x26a37c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a378) {
            ctx->pc = 0x26A3A8u;
            goto label_26a3a8;
        }
    }
    ctx->pc = 0x26A380u;
    // 0x26a380: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x26a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26a384: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26a384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a388:
    // 0x26a388: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26a388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26a38c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26a390: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26a390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26a394: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26a394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26a398: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26a398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26a39c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26A39Cu;
    {
        const bool branch_taken_0x26a39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A39Cu;
            // 0x26a3a0: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a39c) {
            ctx->pc = 0x26A388u;
            runtime->cooperativeGuestYield();
            goto label_26a388;
        }
    }
    ctx->pc = 0x26A3A4u;
    // 0x26a3a4: 0xa2600086  sb          $zero, 0x86($s3)
    ctx->pc = 0x26a3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 134), (uint8_t)GPR_U32(ctx, 0));
label_26a3a8:
    // 0x26a3a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A3A8u;
    {
        const bool branch_taken_0x26a3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3A8u;
            // 0x26a3ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3a8) {
            ctx->pc = 0x26A3B4u;
            goto label_26a3b4;
        }
    }
    ctx->pc = 0x26A3B0u;
label_26a3b0:
    // 0x26a3b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26a3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a3b4:
    // 0x26a3b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26A3B4u;
    {
        const bool branch_taken_0x26a3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3B4u;
            // 0x26a3b8: 0x240203f7  addiu       $v0, $zero, 0x3F7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3b4) {
            ctx->pc = 0x26A3F0u;
            goto label_26a3f0;
        }
    }
    ctx->pc = 0x26A3BCu;
    // 0x26a3bc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26a3c0: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x26a3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x26a3c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26a3c8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x26a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x26a3cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26a3d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x26a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x26a3d4: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x26a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x26a3d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26a3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a3dc: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x26A3DCu;
    SET_GPR_U32(ctx, 31, 0x26A3E4u);
    ctx->pc = 0x26A3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3DCu;
            // 0x26a3e0: 0x8ea50018  lw          $a1, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3E4u; }
        if (ctx->pc != 0x26A3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3E4u; }
        if (ctx->pc != 0x26A3E4u) { return; }
    }
    ctx->pc = 0x26A3E4u;
    // 0x26a3e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26A3E4u;
    {
        const bool branch_taken_0x26a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3E4u;
            // 0x26a3e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3e4) {
            ctx->pc = 0x26A410u;
            goto label_26a410;
        }
    }
    ctx->pc = 0x26A3ECu;
    // 0x26a3ec: 0x0  nop
    ctx->pc = 0x26a3ecu;
    // NOP
label_26a3f0:
    // 0x26a3f0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x26a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26a3f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26a3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a3f8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26a3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a3fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a400: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x26a400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26a404: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26a408: 0x40f809  jalr        $v0
    ctx->pc = 0x26A408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A410u);
        ctx->pc = 0x26A40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A408u;
            // 0x26a40c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A410u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A410u; }
            if (ctx->pc != 0x26A410u) { return; }
        }
        }
    }
    ctx->pc = 0x26A410u;
label_26a410:
    // 0x26a410: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x26a410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26a414: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x26a414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26a418: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x26a418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26a41c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x26a41cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a420: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26a420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a424: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x26a424u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a428: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x26a428u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a42c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a430: 0x3e00008  jr          $ra
    ctx->pc = 0x26A430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A430u;
            // 0x26a434: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A438u;
    // 0x26a438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26a438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26a43c: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A43Cu;
    {
        const bool branch_taken_0x26a43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x26A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A43Cu;
            // 0x26a440: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a43c) {
            ctx->pc = 0x26A45Cu;
            goto label_26a45c;
        }
    }
    ctx->pc = 0x26A444u;
    // 0x26a444: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26a444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26a448: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a44c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26a44cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26a450: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26a450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26a454: 0x40f809  jalr        $v0
    ctx->pc = 0x26A454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A45Cu);
        ctx->pc = 0x26A458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A454u;
            // 0x26a458: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A45Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A45Cu; }
            if (ctx->pc != 0x26A45Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26A45Cu;
label_26a45c:
    // 0x26a45c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a460: 0x3e00008  jr          $ra
    ctx->pc = 0x26A460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A460u;
            // 0x26a464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A468u;
    // 0x26a468: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26a468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26a46c: 0x240303ed  addiu       $v1, $zero, 0x3ED
    ctx->pc = 0x26a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
    // 0x26a470: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26a470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26a474: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26a474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26a478: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26a478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a47c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a480: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26a480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a484: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x26a484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x26a488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a48c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26a48cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a490: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x26a490u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26a494: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x26a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x26a498: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x26a498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a49c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A49Cu;
    {
        const bool branch_taken_0x26a49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26A4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A49Cu;
            // 0x26a4a0: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a49c) {
            ctx->pc = 0x26A4B0u;
            goto label_26a4b0;
        }
    }
    ctx->pc = 0x26A4A4u;
    // 0x26a4a4: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x26a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x26a4a8: 0x54820042  bnel        $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x26A4A8u;
    {
        const bool branch_taken_0x26a4a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26a4a8) {
            ctx->pc = 0x26A4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4A8u;
            // 0x26a4ac: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26A5B4u;
            goto label_26a5b4;
        }
    }
    ctx->pc = 0x26A4B0u;
label_26a4b0:
    // 0x26a4b0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x26a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26a4b4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x26a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x26a4b8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26A4B8u;
    {
        const bool branch_taken_0x26a4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4B8u;
            // 0x26a4bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4b8) {
            ctx->pc = 0x26A4F0u;
            goto label_26a4f0;
        }
    }
    ctx->pc = 0x26A4C0u;
    // 0x26a4c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x26a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26a4c4: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x26a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x26a4c8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x26a4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26a4cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26a4d0: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x26a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x26a4d4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x26a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x26a4d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x26a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a4dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a4e0: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26A4E0u;
    {
        const bool branch_taken_0x26a4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x26A4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4E0u;
            // 0x26a4e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4e0) {
            ctx->pc = 0x26A4ECu;
            goto label_26a4ec;
        }
    }
    ctx->pc = 0x26A4E8u;
    // 0x26a4e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x26a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_26a4ec:
    // 0x26a4ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x26a4ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a4f0:
    // 0x26a4f0: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x26a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x26a4f4: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A4F4u;
    {
        const bool branch_taken_0x26a4f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4F4u;
            // 0x26a4f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4f4) {
            ctx->pc = 0x26A50Cu;
            goto label_26a50c;
        }
    }
    ctx->pc = 0x26A4FCu;
    // 0x26a4fc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x26a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x26a500: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x26a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x26a504: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x26a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x26a508: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x26a508u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26a50c:
    // 0x26a50c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x26a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x26a510: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26A510u;
    {
        const bool branch_taken_0x26a510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A510u;
            // 0x26a514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a510) {
            ctx->pc = 0x26A550u;
            goto label_26a550;
        }
    }
    ctx->pc = 0x26A518u;
    // 0x26a518: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x26A518u;
    {
        const bool branch_taken_0x26a518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a518) {
            ctx->pc = 0x26A550u;
            goto label_26a550;
        }
    }
    ctx->pc = 0x26A520u;
    // 0x26a520: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x26a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x26a524: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26a528: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A528u;
    {
        const bool branch_taken_0x26a528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a528) {
            ctx->pc = 0x26A550u;
            goto label_26a550;
        }
    }
    ctx->pc = 0x26A530u;
    // 0x26a530: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A530u;
    {
        const bool branch_taken_0x26a530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a530) {
            ctx->pc = 0x26A550u;
            goto label_26a550;
        }
    }
    ctx->pc = 0x26A538u;
    // 0x26a538: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26a53c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x26a53cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x26a540: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x26a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x26a544: 0x40f809  jalr        $v0
    ctx->pc = 0x26A544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A54Cu);
        ctx->pc = 0x26A548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A544u;
            // 0x26a548: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A54Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A54Cu; }
            if (ctx->pc != 0x26A54Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26A54Cu;
    // 0x26a54c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x26a54cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26a550:
    // 0x26a550: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x26A550u;
    {
        const bool branch_taken_0x26a550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A550u;
            // 0x26a554: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a550) {
            ctx->pc = 0x26A5B0u;
            goto label_26a5b0;
        }
    }
    ctx->pc = 0x26A558u;
    // 0x26a558: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x26a558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x26a55c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26a55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a560: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26a560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a564: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26a564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a568: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26a568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26a56c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26a570: 0x40f809  jalr        $v0
    ctx->pc = 0x26A570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A578u);
        ctx->pc = 0x26A574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A570u;
            // 0x26a574: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A578u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A578u; }
            if (ctx->pc != 0x26A578u) { return; }
        }
        }
    }
    ctx->pc = 0x26A578u;
    // 0x26a578: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x26a578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26a57c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a580: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26a580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a584: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26a584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a588: 0xc09ab70  jal         func_26ADC0
    ctx->pc = 0x26A588u;
    SET_GPR_U32(ctx, 31, 0x26A590u);
    ctx->pc = 0x26A58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A588u;
            // 0x26a58c: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ADC0u;
    if (runtime->hasFunction(0x26ADC0u)) {
        auto targetFn = runtime->lookupFunction(0x26ADC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A590u; }
        if (ctx->pc != 0x26A590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026ADC0_0x26adc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A590u; }
        if (ctx->pc != 0x26A590u) { return; }
    }
    ctx->pc = 0x26A590u;
    // 0x26a590: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x26a590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26a594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a598: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26a598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a59c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26a59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5a0: 0xc09ab84  jal         func_26AE10
    ctx->pc = 0x26A5A0u;
    SET_GPR_U32(ctx, 31, 0x26A5A8u);
    ctx->pc = 0x26A5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5A0u;
            // 0x26a5a4: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AE10u;
    if (runtime->hasFunction(0x26AE10u)) {
        auto targetFn = runtime->lookupFunction(0x26AE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5A8u; }
        if (ctx->pc != 0x26A5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AE10_0x26ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5A8u; }
        if (ctx->pc != 0x26A5A8u) { return; }
    }
    ctx->pc = 0x26A5A8u;
    // 0x26a5a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26A5A8u;
    {
        const bool branch_taken_0x26a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5A8u;
            // 0x26a5ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5a8) {
            ctx->pc = 0x26A5D4u;
            goto label_26a5d4;
        }
    }
    ctx->pc = 0x26A5B0u;
label_26a5b0:
    // 0x26a5b0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x26a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_26a5b4:
    // 0x26a5b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26a5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a5c0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x26a5c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26a5c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26a5c8: 0x40f809  jalr        $v0
    ctx->pc = 0x26A5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A5D0u);
        ctx->pc = 0x26A5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5C8u;
            // 0x26a5cc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A5D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A5D0u; }
            if (ctx->pc != 0x26A5D0u) { return; }
        }
        }
    }
    ctx->pc = 0x26A5D0u;
    // 0x26a5d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x26a5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26a5d4:
    // 0x26a5d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26a5d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a5d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26a5d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a5dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x26a5dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26A5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5E4u;
            // 0x26a5e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A228u: goto label_26a228;
            case 0x26A248u: goto label_26a248;
            case 0x26A26Cu: goto label_26a26c;
            case 0x26A338u: goto label_26a338;
            case 0x26A35Cu: goto label_26a35c;
            case 0x26A378u: goto label_26a378;
            case 0x26A388u: goto label_26a388;
            case 0x26A3A8u: goto label_26a3a8;
            case 0x26A3B0u: goto label_26a3b0;
            case 0x26A3B4u: goto label_26a3b4;
            case 0x26A3F0u: goto label_26a3f0;
            case 0x26A410u: goto label_26a410;
            case 0x26A45Cu: goto label_26a45c;
            case 0x26A4B0u: goto label_26a4b0;
            case 0x26A4ECu: goto label_26a4ec;
            case 0x26A4F0u: goto label_26a4f0;
            case 0x26A50Cu: goto label_26a50c;
            case 0x26A550u: goto label_26a550;
            case 0x26A5B0u: goto label_26a5b0;
            case 0x26A5B4u: goto label_26a5b4;
            case 0x26A5D4u: goto label_26a5d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A5ECu;
    // 0x26a5ec: 0x0  nop
    ctx->pc = 0x26a5ecu;
    // NOP
}
