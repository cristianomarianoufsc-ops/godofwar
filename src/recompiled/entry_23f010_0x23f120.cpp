#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23f010
// Address: 0x23f010 - 0x23f120
void entry_23f010_0x23f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23f010_0x23f120");
#endif

    ctx->pc = 0x23f010u;

    // 0x23f010: 0xd8810040  lqc2        $vf1, 0x40($a0)
    ctx->pc = 0x23f010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x23f014: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x23f014u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x23f018: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x23f018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23f01c: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x23f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23f020: 0x4a21133c  vmove.w     $vf1, $vf2
    ctx->pc = 0x23f020u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x23f024: 0x3e00008  jr          $ra
    ctx->pc = 0x23F024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F024u;
            // 0x23f028: 0xf8810040  sqc2        $vf1, 0x40($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F07Cu: goto label_23f07c;
            case 0x23F09Cu: goto label_23f09c;
            case 0x23F0BCu: goto label_23f0bc;
            case 0x23F0DCu: goto label_23f0dc;
            case 0x23F0F8u: goto label_23f0f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F02Cu;
    // 0x23f02c: 0x0  nop
    ctx->pc = 0x23f02cu;
    // NOP
    // 0x23f030: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x23f030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23f034: 0x0  nop
    ctx->pc = 0x23f034u;
    // NOP
    // 0x23f038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f03c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f040: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23f040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23f044: 0x2442c4e8  addiu       $v0, $v0, -0x3B18
    ctx->pc = 0x23f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952168));
    // 0x23f048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23f04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f054: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x23f054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x23f058: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x23f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23f05c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F05Cu;
    {
        const bool branch_taken_0x23f05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F05Cu;
            // 0x23f060: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f05c) {
            ctx->pc = 0x23F07Cu;
            goto label_23f07c;
        }
    }
    ctx->pc = 0x23F064u;
    // 0x23f064: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x23f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x23f068: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23f068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f06c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x23f06cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23f070: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23f074: 0x40f809  jalr        $v0
    ctx->pc = 0x23F074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F07Cu);
        ctx->pc = 0x23F078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F074u;
            // 0x23f078: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F07Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F07Cu: goto label_23f07c;
            case 0x23F09Cu: goto label_23f09c;
            case 0x23F0BCu: goto label_23f0bc;
            case 0x23F0DCu: goto label_23f0dc;
            case 0x23F0F8u: goto label_23f0f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F07Cu; }
            if (ctx->pc != 0x23F07Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23F07Cu;
label_23f07c:
    // 0x23f07c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x23f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x23f080: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F080u;
    {
        const bool branch_taken_0x23f080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F080u;
            // 0x23f084: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f080) {
            ctx->pc = 0x23F09Cu;
            goto label_23f09c;
        }
    }
    ctx->pc = 0x23F088u;
    // 0x23f088: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x23f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x23f08c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x23f08cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23f090: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23f094: 0x40f809  jalr        $v0
    ctx->pc = 0x23F094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F09Cu);
        ctx->pc = 0x23F098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F094u;
            // 0x23f098: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F09Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F07Cu: goto label_23f07c;
            case 0x23F09Cu: goto label_23f09c;
            case 0x23F0BCu: goto label_23f0bc;
            case 0x23F0DCu: goto label_23f0dc;
            case 0x23F0F8u: goto label_23f0f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F09Cu; }
            if (ctx->pc != 0x23F09Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23F09Cu;
label_23f09c:
    // 0x23f09c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x23f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x23f0a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F0A0u;
    {
        const bool branch_taken_0x23f0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0A0u;
            // 0x23f0a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0a0) {
            ctx->pc = 0x23F0BCu;
            goto label_23f0bc;
        }
    }
    ctx->pc = 0x23F0A8u;
    // 0x23f0a8: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x23f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x23f0ac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x23f0acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23f0b0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23f0b4: 0x40f809  jalr        $v0
    ctx->pc = 0x23F0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F0BCu);
        ctx->pc = 0x23F0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0B4u;
            // 0x23f0b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F0BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F07Cu: goto label_23f07c;
            case 0x23F09Cu: goto label_23f09c;
            case 0x23F0BCu: goto label_23f0bc;
            case 0x23F0DCu: goto label_23f0dc;
            case 0x23F0F8u: goto label_23f0f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F0BCu; }
            if (ctx->pc != 0x23F0BCu) { return; }
        }
        }
    }
    ctx->pc = 0x23F0BCu;
label_23f0bc:
    // 0x23f0bc: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x23f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x23f0c0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F0C0u;
    {
        const bool branch_taken_0x23f0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0C0u;
            // 0x23f0c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0c0) {
            ctx->pc = 0x23F0DCu;
            goto label_23f0dc;
        }
    }
    ctx->pc = 0x23F0C8u;
    // 0x23f0c8: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x23f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x23f0cc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x23f0ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23f0d0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23f0d4: 0x40f809  jalr        $v0
    ctx->pc = 0x23F0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F0DCu);
        ctx->pc = 0x23F0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0D4u;
            // 0x23f0d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F0DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F07Cu: goto label_23f07c;
            case 0x23F09Cu: goto label_23f09c;
            case 0x23F0BCu: goto label_23f0bc;
            case 0x23F0DCu: goto label_23f0dc;
            case 0x23F0F8u: goto label_23f0f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F0DCu; }
            if (ctx->pc != 0x23F0DCu) { return; }
        }
        }
    }
    ctx->pc = 0x23F0DCu;
label_23f0dc:
    // 0x23f0dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f0e0: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x23f0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x23f0e4: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x23f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x23f0e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F0E8u;
    {
        const bool branch_taken_0x23f0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0E8u;
            // 0x23f0ec: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0e8) {
            ctx->pc = 0x23F0F8u;
            goto label_23f0f8;
        }
    }
    ctx->pc = 0x23F0F0u;
    // 0x23f0f0: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x23F0F0u;
    SET_GPR_U32(ctx, 31, 0x23F0F8u);
    ctx->pc = 0x23F0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0F0u;
            // 0x23f0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F0F8u; }
        if (ctx->pc != 0x23F0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F0F8u; }
        if (ctx->pc != 0x23F0F8u) { return; }
    }
    ctx->pc = 0x23F0F8u;
label_23f0f8:
    // 0x23f0f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23f0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f0fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23f0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f104: 0x3e00008  jr          $ra
    ctx->pc = 0x23F104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F104u;
            // 0x23f108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F07Cu: goto label_23f07c;
            case 0x23F09Cu: goto label_23f09c;
            case 0x23F0BCu: goto label_23f0bc;
            case 0x23F0DCu: goto label_23f0dc;
            case 0x23F0F8u: goto label_23f0f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F10Cu;
    // 0x23f10c: 0x0  nop
    ctx->pc = 0x23f10cu;
    // NOP
    // 0x23f110: 0x8c4201e0  lw          $v0, 0x1E0($v0)
    ctx->pc = 0x23f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x23f114: 0x0  nop
    ctx->pc = 0x23f114u;
    // NOP
    // 0x23f118: 0x0  nop
    ctx->pc = 0x23f118u;
    // NOP
    // 0x23f11c: 0x0  nop
    ctx->pc = 0x23f11cu;
    // NOP
}
