#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012D170
// Address: 0x12d170 - 0x12d5a8
void sub_0012D170_0x12d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D170_0x12d170");
#endif

    ctx->pc = 0x12d170u;

    // 0x12d170: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12d174: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x12d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x12d178: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x12d178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x12d17c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12d17cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d180: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x12d180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x12d184: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x12d184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x12d188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12d18c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x12d18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x12d190: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x12d190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x12d194: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x12d194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x12d198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d19c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12d1a0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12d1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12d1a4: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x12D1A4u;
    {
        const bool branch_taken_0x12d1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1A4u;
            // 0x12d1a8: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1a4) {
            ctx->pc = 0x12D518u;
            goto label_12d518;
        }
    }
    ctx->pc = 0x12D1ACu;
    // 0x12d1ac: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x12d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12d1b0: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x12d1b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d1b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12d1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12d1b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12D1B8u;
    {
        const bool branch_taken_0x12d1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1B8u;
            // 0x12d1bc: 0x8e720030  lw          $s2, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1b8) {
            ctx->pc = 0x12D1E8u;
            goto label_12d1e8;
        }
    }
    ctx->pc = 0x12D1C0u;
    // 0x12d1c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12d1c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d1c8: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x12d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x12d1cc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x12d1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x12d1d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12d1d4: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x12d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x12d1d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d1dc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12d1e0: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x12d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12d1e4: 0x0  nop
    ctx->pc = 0x12d1e4u;
    // NOP
label_12d1e8:
    // 0x12d1e8: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x12d1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x12d1ec: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x12d1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x12d1f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d1f8: 0x3c16002d  lui         $s6, 0x2D
    ctx->pc = 0x12d1f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)45 << 16));
    // 0x12d1fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d200: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x12d200u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x12d204: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12d204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12d208: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12D208u;
    SET_GPR_U32(ctx, 31, 0x12D210u);
    ctx->pc = 0x12D20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D208u;
            // 0x12d20c: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D210u; }
        if (ctx->pc != 0x12D210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D210u; }
        if (ctx->pc != 0x12D210u) { return; }
    }
    ctx->pc = 0x12D210u;
    // 0x12d210: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x12d210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x12d214: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x12d214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x12d218: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12d218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12d21c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d220: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12d220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d224: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x12d224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x12d228: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12d22c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x12d230: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x12d230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12d234: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d238: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12d23c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d240: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x12d240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x12d244: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12d244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12d248: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x12d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x12d24c: 0x40f809  jalr        $v0
    ctx->pc = 0x12D24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D254u);
        ctx->pc = 0x12D250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D24Cu;
            // 0x12d250: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12D254u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D298u: goto label_12d298;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D300u: goto label_12d300;
            case 0x12D338u: goto label_12d338;
            case 0x12D378u: goto label_12d378;
            case 0x12D428u: goto label_12d428;
            case 0x12D448u: goto label_12d448;
            case 0x12D468u: goto label_12d468;
            case 0x12D484u: goto label_12d484;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D508u: goto label_12d508;
            case 0x12D518u: goto label_12d518;
            case 0x12D548u: goto label_12d548;
            case 0x12D564u: goto label_12d564;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D254u; }
            if (ctx->pc != 0x12D254u) { return; }
        }
        }
    }
    ctx->pc = 0x12D254u;
    // 0x12d254: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x12d254u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d258: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x12d258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12d25c: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x12d25cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x12d260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d264: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12d268: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12D268u;
    SET_GPR_U32(ctx, 31, 0x12D270u);
    ctx->pc = 0x12D26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D268u;
            // 0x12d26c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D270u; }
        if (ctx->pc != 0x12D270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D270u; }
        if (ctx->pc != 0x12D270u) { return; }
    }
    ctx->pc = 0x12D270u;
    // 0x12d270: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12d274: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12d274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d278: 0xc04b242  jal         func_12C908
    ctx->pc = 0x12D278u;
    SET_GPR_U32(ctx, 31, 0x12D280u);
    ctx->pc = 0x12D27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D278u;
            // 0x12d27c: 0x8c45f1a0  lw          $a1, -0xE60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C908u;
    if (runtime->hasFunction(0x12C908u)) {
        auto targetFn = runtime->lookupFunction(0x12C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D280u; }
        if (ctx->pc != 0x12D280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C908_0x12c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D280u; }
        if (ctx->pc != 0x12D280u) { return; }
    }
    ctx->pc = 0x12D280u;
    // 0x12d280: 0x8ea4f168  lw          $a0, -0xE98($s5)
    ctx->pc = 0x12d280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294963560)));
    // 0x12d284: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d288: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12D288u;
    {
        const bool branch_taken_0x12d288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D288u;
            // 0x12d28c: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d288) {
            ctx->pc = 0x12D2B8u;
            goto label_12d2b8;
        }
    }
    ctx->pc = 0x12D290u;
    // 0x12d290: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12d290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12d294: 0x0  nop
    ctx->pc = 0x12d294u;
    // NOP
label_12d298:
    // 0x12d298: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12d298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12d29c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d2a0: 0x0  nop
    ctx->pc = 0x12d2a0u;
    // NOP
    // 0x12d2a4: 0x0  nop
    ctx->pc = 0x12d2a4u;
    // NOP
    // 0x12d2a8: 0x0  nop
    ctx->pc = 0x12d2a8u;
    // NOP
    // 0x12d2ac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D2ACu;
    {
        const bool branch_taken_0x12d2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d2ac) {
            ctx->pc = 0x12D2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2ACu;
            // 0x12d2b0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D298u;
            runtime->cooperativeGuestYield();
            goto label_12d298;
        }
    }
    ctx->pc = 0x12D2B4u;
    // 0x12d2b4: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x12d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_12d2b8:
    // 0x12d2b8: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x12d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x12d2bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12d2c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12d2c4: 0xaea2f168  sw          $v0, -0xE98($s5)
    ctx->pc = 0x12d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294963560), GPR_U32(ctx, 2));
    // 0x12d2c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2cc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d2d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12D2D0u;
    {
        const bool branch_taken_0x12d2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2D0u;
            // 0x12d2d4: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2d0) {
            ctx->pc = 0x12D300u;
            goto label_12d300;
        }
    }
    ctx->pc = 0x12D2D8u;
    // 0x12d2d8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12d2dc: 0x0  nop
    ctx->pc = 0x12d2dcu;
    // NOP
label_12d2e0:
    // 0x12d2e0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12d2e4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d2e8: 0x0  nop
    ctx->pc = 0x12d2e8u;
    // NOP
    // 0x12d2ec: 0x0  nop
    ctx->pc = 0x12d2ecu;
    // NOP
    // 0x12d2f0: 0x0  nop
    ctx->pc = 0x12d2f0u;
    // NOP
    // 0x12d2f4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D2F4u;
    {
        const bool branch_taken_0x12d2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d2f4) {
            ctx->pc = 0x12D2F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2F4u;
            // 0x12d2f8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D2E0u;
            runtime->cooperativeGuestYield();
            goto label_12d2e0;
        }
    }
    ctx->pc = 0x12D2FCu;
    // 0x12d2fc: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x12d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_12d300:
    // 0x12d300: 0x26f1ed68  addiu       $s1, $s7, -0x1298
    ctx->pc = 0x12d300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962536));
    // 0x12d304: 0xaea4f168  sw          $a0, -0xE98($s5)
    ctx->pc = 0x12d304u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294963560), GPR_U32(ctx, 4));
    // 0x12d308: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x12d308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d30c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d310: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x12d310u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x12d314: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12d318: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x12d318u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d31c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d320: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D320u;
    {
        const bool branch_taken_0x12d320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D320u;
            // 0x12d324: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d320) {
            ctx->pc = 0x12D338u;
            goto label_12d338;
        }
    }
    ctx->pc = 0x12D328u;
    // 0x12d328: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x12d328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12d32c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12d330: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12D330u;
    SET_GPR_U32(ctx, 31, 0x12D338u);
    ctx->pc = 0x12D334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D330u;
            // 0x12d334: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D338u; }
        if (ctx->pc != 0x12D338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D338u; }
        if (ctx->pc != 0x12D338u) { return; }
    }
    ctx->pc = 0x12D338u;
label_12d338:
    // 0x12d338: 0x26d2bb98  addiu       $s2, $s6, -0x4468
    ctx->pc = 0x12d338u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x12d33c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x12d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12d340: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12d340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12d344: 0x8e700020  lw          $s0, 0x20($s3)
    ctx->pc = 0x12d344u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x12d348: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x12d348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x12d34c: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x12d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12d350: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x12d350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d354: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12d354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12d358: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D358u;
    {
        const bool branch_taken_0x12d358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D358u;
            // 0x12d35c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d358) {
            ctx->pc = 0x12D378u;
            goto label_12d378;
        }
    }
    ctx->pc = 0x12D360u;
    // 0x12d360: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12d360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d364: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12d368: 0x8ea3f168  lw          $v1, -0xE98($s5)
    ctx->pc = 0x12d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294963560)));
    // 0x12d36c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d370: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x12d370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x12d374: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x12d374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_12d378:
    // 0x12d378: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d37c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d380: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x12d380u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x12d384: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12d388: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12D388u;
    SET_GPR_U32(ctx, 31, 0x12D390u);
    ctx->pc = 0x12D38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D388u;
            // 0x12d38c: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D390u; }
        if (ctx->pc != 0x12D390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D390u; }
        if (ctx->pc != 0x12D390u) { return; }
    }
    ctx->pc = 0x12D390u;
    // 0x12d390: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x12d390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x12d394: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x12d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12d398: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d39c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d3a0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x12d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x12d3a4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x12d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x12d3a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x12d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x12d3ac: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x12d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12d3b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d3b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12d3b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d3bc: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x12d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x12d3c0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12d3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12d3c4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x12d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x12d3c8: 0x40f809  jalr        $v0
    ctx->pc = 0x12D3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D3D0u);
        ctx->pc = 0x12D3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3C8u;
            // 0x12d3cc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12D3D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D298u: goto label_12d298;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D300u: goto label_12d300;
            case 0x12D338u: goto label_12d338;
            case 0x12D378u: goto label_12d378;
            case 0x12D428u: goto label_12d428;
            case 0x12D448u: goto label_12d448;
            case 0x12D468u: goto label_12d468;
            case 0x12D484u: goto label_12d484;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D508u: goto label_12d508;
            case 0x12D518u: goto label_12d518;
            case 0x12D548u: goto label_12d548;
            case 0x12D564u: goto label_12d564;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D3D0u; }
            if (ctx->pc != 0x12D3D0u) { return; }
        }
        }
    }
    ctx->pc = 0x12D3D0u;
    // 0x12d3d0: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x12d3d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3d4: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x12d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12d3d8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x12d3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x12d3dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d3e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12d3e4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12D3E4u;
    SET_GPR_U32(ctx, 31, 0x12D3ECu);
    ctx->pc = 0x12D3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3E4u;
            // 0x12d3e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3ECu; }
        if (ctx->pc != 0x12D3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3ECu; }
        if (ctx->pc != 0x12D3ECu) { return; }
    }
    ctx->pc = 0x12D3ECu;
    // 0x12d3ec: 0x8e05f1ac  lw          $a1, -0xE54($s0)
    ctx->pc = 0x12d3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963628)));
    // 0x12d3f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12d3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3f4: 0xc04b11e  jal         func_12C478
    ctx->pc = 0x12D3F4u;
    SET_GPR_U32(ctx, 31, 0x12D3FCu);
    ctx->pc = 0x12D3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3F4u;
            // 0x12d3f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C478u;
    if (runtime->hasFunction(0x12C478u)) {
        auto targetFn = runtime->lookupFunction(0x12C478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3FCu; }
        if (ctx->pc != 0x12D3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C478_0x12c478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3FCu; }
        if (ctx->pc != 0x12D3FCu) { return; }
    }
    ctx->pc = 0x12D3FCu;
    // 0x12d3fc: 0x8e05f1ac  lw          $a1, -0xE54($s0)
    ctx->pc = 0x12d3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963628)));
    // 0x12d400: 0xc04b1e4  jal         func_12C790
    ctx->pc = 0x12D400u;
    SET_GPR_U32(ctx, 31, 0x12D408u);
    ctx->pc = 0x12D404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D400u;
            // 0x12d404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C790u;
    if (runtime->hasFunction(0x12C790u)) {
        auto targetFn = runtime->lookupFunction(0x12C790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D408u; }
        if (ctx->pc != 0x12D408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C790_0x12c790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D408u; }
        if (ctx->pc != 0x12D408u) { return; }
    }
    ctx->pc = 0x12D408u;
    // 0x12d408: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x12d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x12d40c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x12d40cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d410: 0x8ce4f168  lw          $a0, -0xE98($a3)
    ctx->pc = 0x12d410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294963560)));
    // 0x12d414: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x12d414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d418: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d41c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D41Cu;
    {
        const bool branch_taken_0x12d41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D41Cu;
            // 0x12d420: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d41c) {
            ctx->pc = 0x12D448u;
            goto label_12d448;
        }
    }
    ctx->pc = 0x12D424u;
    // 0x12d424: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12d424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_12d428:
    // 0x12d428: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12d428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12d42c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d430: 0x0  nop
    ctx->pc = 0x12d430u;
    // NOP
    // 0x12d434: 0x0  nop
    ctx->pc = 0x12d434u;
    // NOP
    // 0x12d438: 0x0  nop
    ctx->pc = 0x12d438u;
    // NOP
    // 0x12d43c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D43Cu;
    {
        const bool branch_taken_0x12d43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d43c) {
            ctx->pc = 0x12D440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D43Cu;
            // 0x12d440: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D428u;
            runtime->cooperativeGuestYield();
            goto label_12d428;
        }
    }
    ctx->pc = 0x12D444u;
    // 0x12d444: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x12d444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_12d448:
    // 0x12d448: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x12d448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x12d44c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d450: 0xace2f168  sw          $v0, -0xE98($a3)
    ctx->pc = 0x12d450u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963560), GPR_U32(ctx, 2));
    // 0x12d454: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12d454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12d458: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x12d458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x12d45c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D45Cu;
    {
        const bool branch_taken_0x12d45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D45Cu;
            // 0x12d460: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d45c) {
            ctx->pc = 0x12D484u;
            goto label_12d484;
        }
    }
    ctx->pc = 0x12D464u;
    // 0x12d464: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x12d464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_12d468:
    // 0x12d468: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x12d468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12d46c: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x12d46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x12d470: 0x0  nop
    ctx->pc = 0x12d470u;
    // NOP
    // 0x12d474: 0x0  nop
    ctx->pc = 0x12d474u;
    // NOP
    // 0x12d478: 0x0  nop
    ctx->pc = 0x12d478u;
    // NOP
    // 0x12d47c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D47Cu;
    {
        const bool branch_taken_0x12d47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d47c) {
            ctx->pc = 0x12D480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D47Cu;
            // 0x12d480: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D468u;
            runtime->cooperativeGuestYield();
            goto label_12d468;
        }
    }
    ctx->pc = 0x12D484u;
label_12d484:
    // 0x12d484: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x12d484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12d488: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x12d488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x12d48c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x12d490: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12d490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12d494: 0xace2f168  sw          $v0, -0xE98($a3)
    ctx->pc = 0x12d494u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963560), GPR_U32(ctx, 2));
    // 0x12d498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d49c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d4a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12D4A0u;
    {
        const bool branch_taken_0x12d4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4A0u;
            // 0x12d4a4: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4a0) {
            ctx->pc = 0x12D4D0u;
            goto label_12d4d0;
        }
    }
    ctx->pc = 0x12D4A8u;
    // 0x12d4a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12d4ac: 0x0  nop
    ctx->pc = 0x12d4acu;
    // NOP
label_12d4b0:
    // 0x12d4b0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12d4b4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d4b8: 0x0  nop
    ctx->pc = 0x12d4b8u;
    // NOP
    // 0x12d4bc: 0x0  nop
    ctx->pc = 0x12d4bcu;
    // NOP
    // 0x12d4c0: 0x0  nop
    ctx->pc = 0x12d4c0u;
    // NOP
    // 0x12d4c4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D4C4u;
    {
        const bool branch_taken_0x12d4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d4c4) {
            ctx->pc = 0x12D4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4C4u;
            // 0x12d4c8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D4B0u;
            runtime->cooperativeGuestYield();
            goto label_12d4b0;
        }
    }
    ctx->pc = 0x12D4CCu;
    // 0x12d4cc: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x12d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_12d4d0:
    // 0x12d4d0: 0x2651ed68  addiu       $s1, $s2, -0x1298
    ctx->pc = 0x12d4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962536));
    // 0x12d4d4: 0xace4f168  sw          $a0, -0xE98($a3)
    ctx->pc = 0x12d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963560), GPR_U32(ctx, 4));
    // 0x12d4d8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x12d4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d4dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d4e0: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x12d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x12d4e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12d4e8: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x12d4e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d4f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D4F0u;
    {
        const bool branch_taken_0x12d4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4F0u;
            // 0x12d4f4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4f0) {
            ctx->pc = 0x12D508u;
            goto label_12d508;
        }
    }
    ctx->pc = 0x12D4F8u;
    // 0x12d4f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x12d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12d4fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12d500: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12D500u;
    SET_GPR_U32(ctx, 31, 0x12D508u);
    ctx->pc = 0x12D504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D500u;
            // 0x12d504: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D508u; }
        if (ctx->pc != 0x12D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D508u; }
        if (ctx->pc != 0x12D508u) { return; }
    }
    ctx->pc = 0x12D508u;
label_12d508:
    // 0x12d508: 0x26c3bb98  addiu       $v1, $s6, -0x4468
    ctx->pc = 0x12d508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x12d50c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x12d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12d510: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12d514: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x12d514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_12d518:
    // 0x12d518: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x12d518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x12d51c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x12d51cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x12d520: 0x8c82f1b4  lw          $v0, -0xE4C($a0)
    ctx->pc = 0x12d520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963636)));
    // 0x12d524: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x12d524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x12d528: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x12d528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x12d52c: 0x8ce5f168  lw          $a1, -0xE98($a3)
    ctx->pc = 0x12d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294963560)));
    // 0x12d530: 0xac82f1b4  sw          $v0, -0xE4C($a0)
    ctx->pc = 0x12d530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963636), GPR_U32(ctx, 2));
    // 0x12d534: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x12d534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x12d538: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D538u;
    {
        const bool branch_taken_0x12d538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D538u;
            // 0x12d53c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d538) {
            ctx->pc = 0x12D564u;
            goto label_12d564;
        }
    }
    ctx->pc = 0x12D540u;
    // 0x12d540: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x12d540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x12d544: 0x0  nop
    ctx->pc = 0x12d544u;
    // NOP
label_12d548:
    // 0x12d548: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x12d548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12d54c: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x12d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x12d550: 0x0  nop
    ctx->pc = 0x12d550u;
    // NOP
    // 0x12d554: 0x0  nop
    ctx->pc = 0x12d554u;
    // NOP
    // 0x12d558: 0x0  nop
    ctx->pc = 0x12d558u;
    // NOP
    // 0x12d55c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D55Cu;
    {
        const bool branch_taken_0x12d55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d55c) {
            ctx->pc = 0x12D560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D55Cu;
            // 0x12d560: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D548u;
            runtime->cooperativeGuestYield();
            goto label_12d548;
        }
    }
    ctx->pc = 0x12D564u;
label_12d564:
    // 0x12d564: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x12d564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12d568: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x12d568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x12d56c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x12d56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12d570: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x12d570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12d574: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x12d574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12d578: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x12d578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d57c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12d57cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d580: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x12d580u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d584: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x12d584u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d588: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x12d588u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d590: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12d590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12d594: 0xace3f168  sw          $v1, -0xE98($a3)
    ctx->pc = 0x12d594u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963560), GPR_U32(ctx, 3));
    // 0x12d598: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x12d598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x12d59c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D59Cu;
            // 0x12d5a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D298u: goto label_12d298;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D300u: goto label_12d300;
            case 0x12D338u: goto label_12d338;
            case 0x12D378u: goto label_12d378;
            case 0x12D428u: goto label_12d428;
            case 0x12D448u: goto label_12d448;
            case 0x12D468u: goto label_12d468;
            case 0x12D484u: goto label_12d484;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D508u: goto label_12d508;
            case 0x12D518u: goto label_12d518;
            case 0x12D548u: goto label_12d548;
            case 0x12D564u: goto label_12d564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D5A4u;
    // 0x12d5a4: 0x0  nop
    ctx->pc = 0x12d5a4u;
    // NOP
}
