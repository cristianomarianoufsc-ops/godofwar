#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192380
// Address: 0x192380 - 0x192b08
void sub_00192380_0x192380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192380_0x192380");
#endif

    ctx->pc = 0x192380u;

label_192380:
    // 0x192380: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x192380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x192384: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x192384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x192388: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x192388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x19238c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19238cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x192390: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x192390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x192394: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x192394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x192398: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x192398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19239c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19239Cu;
    {
        const bool branch_taken_0x19239c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1923A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19239Cu;
            // 0x1923a0: 0x8c920064  lw          $s2, 0x64($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19239c) {
            ctx->pc = 0x1923E0u;
            goto label_1923e0;
        }
    }
    ctx->pc = 0x1923A4u;
    // 0x1923a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1923a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1923a8: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1923a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1923ac: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1923acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1923b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1923b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1923b4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1923b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1923b8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1923b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1923bc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1923bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1923c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1923c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1923c4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1923C4u;
    {
        const bool branch_taken_0x1923c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1923C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1923C4u;
            // 0x1923c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923c4) {
            ctx->pc = 0x1923D0u;
            goto label_1923d0;
        }
    }
    ctx->pc = 0x1923CCu;
    // 0x1923cc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1923ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1923d0:
    // 0x1923d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1923D0u;
    {
        const bool branch_taken_0x1923d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1923D0u;
            // 0x1923d4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923d0) {
            ctx->pc = 0x1923E4u;
            goto label_1923e4;
        }
    }
    ctx->pc = 0x1923D8u;
label_1923d8:
    // 0x1923d8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1923D8u;
    {
        const bool branch_taken_0x1923d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1923D8u;
            // 0x1923dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923d8) {
            ctx->pc = 0x19254Cu;
            goto label_19254c;
        }
    }
    ctx->pc = 0x1923E0u;
label_1923e0:
    // 0x1923e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1923e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1923e4:
    // 0x1923e4: 0x50600062  beql        $v1, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x1923E4u;
    {
        const bool branch_taken_0x1923e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1923e4) {
            ctx->pc = 0x1923E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1923E4u;
            // 0x1923e8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192570u;
            goto label_192570;
        }
    }
    ctx->pc = 0x1923ECu;
    // 0x1923ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1923ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1923f0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1923f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1923f4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1923f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1923f8: 0x40f809  jalr        $v0
    ctx->pc = 0x1923F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192400u);
        ctx->pc = 0x1923FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1923F8u;
            // 0x1923fc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x192400u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192380u: goto label_192380;
            case 0x1923D0u: goto label_1923d0;
            case 0x1923D8u: goto label_1923d8;
            case 0x1923E0u: goto label_1923e0;
            case 0x1923E4u: goto label_1923e4;
            case 0x19245Cu: goto label_19245c;
            case 0x1924A8u: goto label_1924a8;
            case 0x192538u: goto label_192538;
            case 0x19254Cu: goto label_19254c;
            case 0x192568u: goto label_192568;
            case 0x192570u: goto label_192570;
            case 0x1925F0u: goto label_1925f0;
            case 0x1925F4u: goto label_1925f4;
            case 0x192654u: goto label_192654;
            case 0x192670u: goto label_192670;
            case 0x192684u: goto label_192684;
            case 0x1926A0u: goto label_1926a0;
            case 0x1926F4u: goto label_1926f4;
            case 0x19271Cu: goto label_19271c;
            case 0x192724u: goto label_192724;
            case 0x192728u: goto label_192728;
            case 0x192750u: goto label_192750;
            case 0x192768u: goto label_192768;
            case 0x192788u: goto label_192788;
            case 0x192794u: goto label_192794;
            case 0x19279Cu: goto label_19279c;
            case 0x1927ACu: goto label_1927ac;
            case 0x1927B0u: goto label_1927b0;
            case 0x192830u: goto label_192830;
            case 0x192834u: goto label_192834;
            case 0x1928A0u: goto label_1928a0;
            case 0x1928ACu: goto label_1928ac;
            case 0x1928B4u: goto label_1928b4;
            case 0x1928DCu: goto label_1928dc;
            case 0x1928E8u: goto label_1928e8;
            case 0x192900u: goto label_192900;
            case 0x192908u: goto label_192908;
            case 0x192914u: goto label_192914;
            case 0x192934u: goto label_192934;
            case 0x192938u: goto label_192938;
            case 0x192978u: goto label_192978;
            case 0x192994u: goto label_192994;
            case 0x1929C0u: goto label_1929c0;
            case 0x1929DCu: goto label_1929dc;
            case 0x1929F0u: goto label_1929f0;
            case 0x192A04u: goto label_192a04;
            case 0x192A18u: goto label_192a18;
            case 0x192A28u: goto label_192a28;
            case 0x192A34u: goto label_192a34;
            case 0x192A40u: goto label_192a40;
            case 0x192A4Cu: goto label_192a4c;
            case 0x192A58u: goto label_192a58;
            case 0x192A64u: goto label_192a64;
            case 0x192A70u: goto label_192a70;
            case 0x192A78u: goto label_192a78;
            case 0x192A88u: goto label_192a88;
            case 0x192A90u: goto label_192a90;
            case 0x192AA0u: goto label_192aa0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x192400u; }
            if (ctx->pc != 0x192400u) { return; }
        }
        }
    }
    ctx->pc = 0x192400u;
    // 0x192400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192404: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
    ctx->pc = 0x192404u;
    {
        const bool branch_taken_0x192404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x192408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192404u;
            // 0x192408: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192404) {
            ctx->pc = 0x192570u;
            goto label_192570;
        }
    }
    ctx->pc = 0x19240Cu;
    // 0x19240c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x19240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x192410: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x192410u;
    {
        const bool branch_taken_0x192410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192410) {
            ctx->pc = 0x192568u;
            goto label_192568;
        }
    }
    ctx->pc = 0x192418u;
    // 0x192418: 0xc081be6  jal         func_206F98
    ctx->pc = 0x192418u;
    SET_GPR_U32(ctx, 31, 0x192420u);
    ctx->pc = 0x19241Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192418u;
            // 0x19241c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206F98u;
    if (runtime->hasFunction(0x206F98u)) {
        auto targetFn = runtime->lookupFunction(0x206F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192420u; }
        if (ctx->pc != 0x192420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206F98_0x206f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192420u; }
        if (ctx->pc != 0x192420u) { return; }
    }
    ctx->pc = 0x192420u;
    // 0x192420: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x192420u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192424: 0x50600052  beql        $v1, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x192424u;
    {
        const bool branch_taken_0x192424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192424) {
            ctx->pc = 0x192428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192424u;
            // 0x192428: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192570u;
            goto label_192570;
        }
    }
    ctx->pc = 0x19242Cu;
    // 0x19242c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x19242cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x192430: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x192430u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x192434: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x192434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x192438: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x192438u;
    {
        const bool branch_taken_0x192438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192438) {
            ctx->pc = 0x19243Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192438u;
            // 0x19243c: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19245Cu;
            goto label_19245c;
        }
    }
    ctx->pc = 0x192440u;
    // 0x192440: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x192440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x192444: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x192444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x192448: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x192448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19244c: 0x40f809  jalr        $v0
    ctx->pc = 0x19244Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192454u);
        ctx->pc = 0x192450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19244Cu;
            // 0x192450: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x192454u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192380u: goto label_192380;
            case 0x1923D0u: goto label_1923d0;
            case 0x1923D8u: goto label_1923d8;
            case 0x1923E0u: goto label_1923e0;
            case 0x1923E4u: goto label_1923e4;
            case 0x19245Cu: goto label_19245c;
            case 0x1924A8u: goto label_1924a8;
            case 0x192538u: goto label_192538;
            case 0x19254Cu: goto label_19254c;
            case 0x192568u: goto label_192568;
            case 0x192570u: goto label_192570;
            case 0x1925F0u: goto label_1925f0;
            case 0x1925F4u: goto label_1925f4;
            case 0x192654u: goto label_192654;
            case 0x192670u: goto label_192670;
            case 0x192684u: goto label_192684;
            case 0x1926A0u: goto label_1926a0;
            case 0x1926F4u: goto label_1926f4;
            case 0x19271Cu: goto label_19271c;
            case 0x192724u: goto label_192724;
            case 0x192728u: goto label_192728;
            case 0x192750u: goto label_192750;
            case 0x192768u: goto label_192768;
            case 0x192788u: goto label_192788;
            case 0x192794u: goto label_192794;
            case 0x19279Cu: goto label_19279c;
            case 0x1927ACu: goto label_1927ac;
            case 0x1927B0u: goto label_1927b0;
            case 0x192830u: goto label_192830;
            case 0x192834u: goto label_192834;
            case 0x1928A0u: goto label_1928a0;
            case 0x1928ACu: goto label_1928ac;
            case 0x1928B4u: goto label_1928b4;
            case 0x1928DCu: goto label_1928dc;
            case 0x1928E8u: goto label_1928e8;
            case 0x192900u: goto label_192900;
            case 0x192908u: goto label_192908;
            case 0x192914u: goto label_192914;
            case 0x192934u: goto label_192934;
            case 0x192938u: goto label_192938;
            case 0x192978u: goto label_192978;
            case 0x192994u: goto label_192994;
            case 0x1929C0u: goto label_1929c0;
            case 0x1929DCu: goto label_1929dc;
            case 0x1929F0u: goto label_1929f0;
            case 0x192A04u: goto label_192a04;
            case 0x192A18u: goto label_192a18;
            case 0x192A28u: goto label_192a28;
            case 0x192A34u: goto label_192a34;
            case 0x192A40u: goto label_192a40;
            case 0x192A4Cu: goto label_192a4c;
            case 0x192A58u: goto label_192a58;
            case 0x192A64u: goto label_192a64;
            case 0x192A70u: goto label_192a70;
            case 0x192A78u: goto label_192a78;
            case 0x192A88u: goto label_192a88;
            case 0x192A90u: goto label_192a90;
            case 0x192AA0u: goto label_192aa0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x192454u; }
            if (ctx->pc != 0x192454u) { return; }
        }
        }
    }
    ctx->pc = 0x192454u;
    // 0x192454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192458: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x192458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_19245c:
    // 0x19245c: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x19245cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x192460: 0x90440014  lbu         $a0, 0x14($v0)
    ctx->pc = 0x192460u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x192464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192468: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x192468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x19246c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19246cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x192470: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x192470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x192474: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x192474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x192478: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x192478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19247c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x19247cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x192480: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x192480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x192484: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x192484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x192488: 0xb3a2001b  sdl         $v0, 0x1B($sp)
    ctx->pc = 0x192488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19248c: 0xb7a20014  sdr         $v0, 0x14($sp)
    ctx->pc = 0x19248cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x192490: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x192490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x192494: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x192494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x192498: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x192498u;
    {
        const bool branch_taken_0x192498 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192498u;
            // 0x19249c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192498) {
            ctx->pc = 0x19254Cu;
            goto label_19254c;
        }
    }
    ctx->pc = 0x1924A0u;
    // 0x1924a0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1924a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1924a4: 0x0  nop
    ctx->pc = 0x1924a4u;
    // NOP
label_1924a8:
    // 0x1924a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1924a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1924ac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1924acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1924b0: 0x96440008  lhu         $a0, 0x8($s2)
    ctx->pc = 0x1924b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1924b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1924b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1924b8: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x1924b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x1924bc: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x1924bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x1924c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1924c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1924c4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1924c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1924c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1924c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1924cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1924ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1924d0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1924d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1924d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1924d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1924d8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1924d8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1924dc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1924dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1924e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1924e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1924e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1924e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1924e8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1924e8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1924ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1924ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1924f0: 0x0  nop
    ctx->pc = 0x1924f0u;
    // NOP
    // 0x1924f4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1924F4u;
    {
        const bool branch_taken_0x1924f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1924F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1924F4u;
            // 0x1924f8: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924f4) {
            ctx->pc = 0x192538u;
            goto label_192538;
        }
    }
    ctx->pc = 0x1924FCu;
    // 0x1924fc: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x1924fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x192500: 0x9643000a  lhu         $v1, 0xA($s2)
    ctx->pc = 0x192500u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x192504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192508: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19250c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19250cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192510: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x192514: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x192514u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x192518: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x192518u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x19251c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19251cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192520: 0x0  nop
    ctx->pc = 0x192520u;
    // NOP
    // 0x192524: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x192524u;
    {
        const bool branch_taken_0x192524 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192524u;
            // 0x192528: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192524) {
            ctx->pc = 0x192538u;
            goto label_192538;
        }
    }
    ctx->pc = 0x19252Cu;
    // 0x19252c: 0x8082001c  lb          $v0, 0x1C($a0)
    ctx->pc = 0x19252cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x192530: 0x1040ffa9  beqz        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x192530u;
    {
        const bool branch_taken_0x192530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192530u;
            // 0x192534: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192530) {
            ctx->pc = 0x1923D8u;
            runtime->cooperativeGuestYield();
            goto label_1923d8;
        }
    }
    ctx->pc = 0x192538u;
label_192538:
    // 0x192538: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x192538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x19253c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x19253cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x192540: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x192540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x192544: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x192544u;
    {
        const bool branch_taken_0x192544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192544u;
            // 0x192548: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192544) {
            ctx->pc = 0x1924A8u;
            runtime->cooperativeGuestYield();
            goto label_1924a8;
        }
    }
    ctx->pc = 0x19254Cu;
label_19254c:
    // 0x19254c: 0xc08235e  jal         func_208D78
    ctx->pc = 0x19254Cu;
    SET_GPR_U32(ctx, 31, 0x192554u);
    ctx->pc = 0x192550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19254Cu;
            // 0x192550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192554u; }
        if (ctx->pc != 0x192554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192554u; }
        if (ctx->pc != 0x192554u) { return; }
    }
    ctx->pc = 0x192554u;
    // 0x192554: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x192554u;
    {
        const bool branch_taken_0x192554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x192558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192554u;
            // 0x192558: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192554) {
            ctx->pc = 0x192570u;
            goto label_192570;
        }
    }
    ctx->pc = 0x19255Cu;
    // 0x19255c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192560: 0xc08223a  jal         func_2088E8
    ctx->pc = 0x192560u;
    SET_GPR_U32(ctx, 31, 0x192568u);
    ctx->pc = 0x192564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192560u;
            // 0x192564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2088E8u;
    if (runtime->hasFunction(0x2088E8u)) {
        auto targetFn = runtime->lookupFunction(0x2088E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192568u; }
        if (ctx->pc != 0x192568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002088E8_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192568u; }
        if (ctx->pc != 0x192568u) { return; }
    }
    ctx->pc = 0x192568u;
label_192568:
    // 0x192568: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19256c: 0x0  nop
    ctx->pc = 0x19256cu;
    // NOP
label_192570:
    // 0x192570: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x192570u;
    SET_GPR_U32(ctx, 31, 0x192578u);
    ctx->pc = 0x192574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192570u;
            // 0x192574: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192578u; }
        if (ctx->pc != 0x192578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192578u; }
        if (ctx->pc != 0x192578u) { return; }
    }
    ctx->pc = 0x192578u;
    // 0x192578: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x192578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19257c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19257cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192580: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x192580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192584: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x192584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192588: 0x3e00008  jr          $ra
    ctx->pc = 0x192588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19258Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192588u;
            // 0x19258c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192380u: goto label_192380;
            case 0x1923D0u: goto label_1923d0;
            case 0x1923D8u: goto label_1923d8;
            case 0x1923E0u: goto label_1923e0;
            case 0x1923E4u: goto label_1923e4;
            case 0x19245Cu: goto label_19245c;
            case 0x1924A8u: goto label_1924a8;
            case 0x192538u: goto label_192538;
            case 0x19254Cu: goto label_19254c;
            case 0x192568u: goto label_192568;
            case 0x192570u: goto label_192570;
            case 0x1925F0u: goto label_1925f0;
            case 0x1925F4u: goto label_1925f4;
            case 0x192654u: goto label_192654;
            case 0x192670u: goto label_192670;
            case 0x192684u: goto label_192684;
            case 0x1926A0u: goto label_1926a0;
            case 0x1926F4u: goto label_1926f4;
            case 0x19271Cu: goto label_19271c;
            case 0x192724u: goto label_192724;
            case 0x192728u: goto label_192728;
            case 0x192750u: goto label_192750;
            case 0x192768u: goto label_192768;
            case 0x192788u: goto label_192788;
            case 0x192794u: goto label_192794;
            case 0x19279Cu: goto label_19279c;
            case 0x1927ACu: goto label_1927ac;
            case 0x1927B0u: goto label_1927b0;
            case 0x192830u: goto label_192830;
            case 0x192834u: goto label_192834;
            case 0x1928A0u: goto label_1928a0;
            case 0x1928ACu: goto label_1928ac;
            case 0x1928B4u: goto label_1928b4;
            case 0x1928DCu: goto label_1928dc;
            case 0x1928E8u: goto label_1928e8;
            case 0x192900u: goto label_192900;
            case 0x192908u: goto label_192908;
            case 0x192914u: goto label_192914;
            case 0x192934u: goto label_192934;
            case 0x192938u: goto label_192938;
            case 0x192978u: goto label_192978;
            case 0x192994u: goto label_192994;
            case 0x1929C0u: goto label_1929c0;
            case 0x1929DCu: goto label_1929dc;
            case 0x1929F0u: goto label_1929f0;
            case 0x192A04u: goto label_192a04;
            case 0x192A18u: goto label_192a18;
            case 0x192A28u: goto label_192a28;
            case 0x192A34u: goto label_192a34;
            case 0x192A40u: goto label_192a40;
            case 0x192A4Cu: goto label_192a4c;
            case 0x192A58u: goto label_192a58;
            case 0x192A64u: goto label_192a64;
            case 0x192A70u: goto label_192a70;
            case 0x192A78u: goto label_192a78;
            case 0x192A88u: goto label_192a88;
            case 0x192A90u: goto label_192a90;
            case 0x192AA0u: goto label_192aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192590u;
    // 0x192590: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x192590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x192594: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x192594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x192598: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x192598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x19259c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19259cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1925a0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1925a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1925a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1925a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1925a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1925a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1925ac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1925acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1925b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1925b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1925b4: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x1925b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1925b8: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1925b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1925bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1925BCu;
    {
        const bool branch_taken_0x1925bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1925C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1925BCu;
            // 0x1925c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925bc) {
            ctx->pc = 0x1925F4u;
            goto label_1925f4;
        }
    }
    ctx->pc = 0x1925C4u;
    // 0x1925c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1925c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1925c8: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x1925c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1925cc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1925ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1925d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1925d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1925d4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1925d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1925d8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1925d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1925dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1925dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1925e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1925e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1925e4: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1925E4u;
    {
        const bool branch_taken_0x1925e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1925E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1925E4u;
            // 0x1925e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925e4) {
            ctx->pc = 0x1925F0u;
            goto label_1925f0;
        }
    }
    ctx->pc = 0x1925ECu;
    // 0x1925ec: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1925ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1925f0:
    // 0x1925f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1925f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1925f4:
    // 0x1925f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1925f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1925f8: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x1925f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x1925fc: 0x8c43cd58  lw          $v1, -0x32A8($v0)
    ctx->pc = 0x1925fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x192600: 0x26b14f28  addiu       $s1, $s5, 0x4F28
    ctx->pc = 0x192600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 20264));
    // 0x192604: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x192604u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x192608: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x192608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19260c: 0x2c4200f0  sltiu       $v0, $v0, 0xF0
    ctx->pc = 0x19260cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
    // 0x192610: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x192610u;
    {
        const bool branch_taken_0x192610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192610u;
            // 0x192614: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192610) {
            ctx->pc = 0x1926A0u;
            goto label_1926a0;
        }
    }
    ctx->pc = 0x192618u;
    // 0x192618: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x192618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x19261c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x19261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x192620: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x192620u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x192624: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x192624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x192628: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x192628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x19262c: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x19262cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x192630: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x192630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x192634: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x192634u;
    {
        const bool branch_taken_0x192634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192634) {
            ctx->pc = 0x192638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192634u;
            // 0x192638: 0x96220006  lhu         $v0, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192670u;
            goto label_192670;
        }
    }
    ctx->pc = 0x19263Cu;
    // 0x19263c: 0x8ea44f28  lw          $a0, 0x4F28($s5)
    ctx->pc = 0x19263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20264)));
    // 0x192640: 0x80820033  lb          $v0, 0x33($a0)
    ctx->pc = 0x192640u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
    // 0x192644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192644u;
    {
        const bool branch_taken_0x192644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192644u;
            // 0x192648: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192644) {
            ctx->pc = 0x192654u;
            goto label_192654;
        }
    }
    ctx->pc = 0x19264Cu;
    // 0x19264c: 0xc064882  jal         func_192208
    ctx->pc = 0x19264Cu;
    SET_GPR_U32(ctx, 31, 0x192654u);
    ctx->pc = 0x192650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19264Cu;
            // 0x192650: 0x24850033  addiu       $a1, $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192208u;
    if (runtime->hasFunction(0x192208u)) {
        auto targetFn = runtime->lookupFunction(0x192208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192654u; }
        if (ctx->pc != 0x192654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192208_0x192208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192654u; }
        if (ctx->pc != 0x192654u) { return; }
    }
    ctx->pc = 0x192654u;
label_192654:
    // 0x192654: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192658: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x192658u;
    SET_GPR_U32(ctx, 31, 0x192660u);
    ctx->pc = 0x19265Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192658u;
            // 0x19265c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192660u; }
        if (ctx->pc != 0x192660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192660u; }
        if (ctx->pc != 0x192660u) { return; }
    }
    ctx->pc = 0x192660u;
    // 0x192660: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x192660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x192664: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x192664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192668: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x192668u;
    {
        const bool branch_taken_0x192668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19266Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192668u;
            // 0x19266c: 0xa642002a  sh          $v0, 0x2A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192668) {
            ctx->pc = 0x1927ACu;
            goto label_1927ac;
        }
    }
    ctx->pc = 0x192670u;
label_192670:
    // 0x192670: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x192670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x192674: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x192674u;
    {
        const bool branch_taken_0x192674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192674u;
            // 0x192678: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192674) {
            ctx->pc = 0x1927B0u;
            goto label_1927b0;
        }
    }
    ctx->pc = 0x19267Cu;
    // 0x19267c: 0xc0648e0  jal         func_192380
    ctx->pc = 0x19267Cu;
    SET_GPR_U32(ctx, 31, 0x192684u);
    ctx->pc = 0x192680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19267Cu;
            // 0x192680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192380u;
    runtime->cooperativeGuestYield();
    goto label_192380;
    ctx->pc = 0x192684u;
label_192684:
    // 0x192684: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192688: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x192688u;
    SET_GPR_U32(ctx, 31, 0x192690u);
    ctx->pc = 0x19268Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192688u;
            // 0x19268c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192690u; }
        if (ctx->pc != 0x192690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192690u; }
        if (ctx->pc != 0x192690u) { return; }
    }
    ctx->pc = 0x192690u;
    // 0x192690: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x192690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192694: 0xa642002a  sh          $v0, 0x2A($s2)
    ctx->pc = 0x192694u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x192698: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x192698u;
    {
        const bool branch_taken_0x192698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19269Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192698u;
            // 0x19269c: 0xae400030  sw          $zero, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192698) {
            ctx->pc = 0x1927ACu;
            goto label_1927ac;
        }
    }
    ctx->pc = 0x1926A0u;
label_1926a0:
    // 0x1926a0: 0xc0648c0  jal         func_192300
    ctx->pc = 0x1926A0u;
    SET_GPR_U32(ctx, 31, 0x1926A8u);
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926A8u; }
        if (ctx->pc != 0x1926A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_192300_0x192380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926A8u; }
        if (ctx->pc != 0x1926A8u) { return; }
    }
    ctx->pc = 0x1926A8u;
    // 0x1926a8: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1926a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1926ac: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1926acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1926b0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1926b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1926b4: 0x92250009  lbu         $a1, 0x9($s1)
    ctx->pc = 0x1926b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1926b8: 0x2463ff10  addiu       $v1, $v1, -0xF0
    ctx->pc = 0x1926b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967056));
    // 0x1926bc: 0x2484de68  addiu       $a0, $a0, -0x2198
    ctx->pc = 0x1926bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958696));
    // 0x1926c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1926c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1926c4: 0x82300008  lb          $s0, 0x8($s1)
    ctx->pc = 0x1926c4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1926c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1926c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1926cc: 0x10b30015  beq         $a1, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1926CCu;
    {
        const bool branch_taken_0x1926cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x1926D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1926CCu;
            // 0x1926d0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926cc) {
            ctx->pc = 0x192724u;
            goto label_192724;
        }
    }
    ctx->pc = 0x1926D4u;
    // 0x1926d4: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1926d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1926d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1926d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1926dc: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1926DCu;
    {
        const bool branch_taken_0x1926dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1926dc) {
            ctx->pc = 0x1926E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1926DCu;
            // 0x1926e0: 0x9222000a  lbu         $v0, 0xA($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1926F4u;
            goto label_1926f4;
        }
    }
    ctx->pc = 0x1926E4u;
    // 0x1926e4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1926e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1926e8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1926e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1926ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1926ECu;
    {
        const bool branch_taken_0x1926ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1926ECu;
            // 0x1926f0: 0x28603  sra         $s0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926ec) {
            ctx->pc = 0x192724u;
            goto label_192724;
        }
    }
    ctx->pc = 0x1926F4u;
label_1926f4:
    // 0x1926f4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1926f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1926f8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1926F8u;
    {
        const bool branch_taken_0x1926f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1926FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1926F8u;
            // 0x1926fc: 0xa223000a  sb          $v1, 0xA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926f8) {
            ctx->pc = 0x19271Cu;
            goto label_19271c;
        }
    }
    ctx->pc = 0x192700u;
    // 0x192700: 0x8ea24f28  lw          $v0, 0x4F28($s5)
    ctx->pc = 0x192700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20264)));
    // 0x192704: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x192704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x192708: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x192708u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x19270c: 0x8042001a  lb          $v0, 0x1A($v0)
    ctx->pc = 0x19270cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x192710: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x192710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x192714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192714u;
    {
        const bool branch_taken_0x192714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192714u;
            // 0x192718: 0x26a24f28  addiu       $v0, $s5, 0x4F28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192714) {
            ctx->pc = 0x192728u;
            goto label_192728;
        }
    }
    ctx->pc = 0x19271Cu;
label_19271c:
    // 0x19271c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192720: 0xa222000b  sb          $v0, 0xB($s1)
    ctx->pc = 0x192720u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
label_192724:
    // 0x192724: 0x26a24f28  addiu       $v0, $s5, 0x4F28
    ctx->pc = 0x192724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20264));
label_192728:
    // 0x192728: 0x8042000b  lb          $v0, 0xB($v0)
    ctx->pc = 0x192728u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x19272c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x19272Cu;
    {
        const bool branch_taken_0x19272c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19272c) {
            ctx->pc = 0x192730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19272Cu;
            // 0x192730: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192794u;
            goto label_192794;
        }
    }
    ctx->pc = 0x192734u;
    // 0x192734: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x192734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x192738: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192738u;
    {
        const bool branch_taken_0x192738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19273Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192738u;
            // 0x19273c: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192738) {
            ctx->pc = 0x192750u;
            goto label_192750;
        }
    }
    ctx->pc = 0x192740u;
    // 0x192740: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x192740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x192744: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x192744u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192748: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x192748u;
    {
        const bool branch_taken_0x192748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192748u;
            // 0x19274c: 0x26a24f28  addiu       $v0, $s5, 0x4F28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192748) {
            ctx->pc = 0x192788u;
            goto label_192788;
        }
    }
    ctx->pc = 0x192750u;
label_192750:
    // 0x192750: 0x8ea44f28  lw          $a0, 0x4F28($s5)
    ctx->pc = 0x192750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20264)));
    // 0x192754: 0x80820033  lb          $v0, 0x33($a0)
    ctx->pc = 0x192754u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
    // 0x192758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192758u;
    {
        const bool branch_taken_0x192758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19275Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192758u;
            // 0x19275c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192758) {
            ctx->pc = 0x192768u;
            goto label_192768;
        }
    }
    ctx->pc = 0x192760u;
    // 0x192760: 0xc064882  jal         func_192208
    ctx->pc = 0x192760u;
    SET_GPR_U32(ctx, 31, 0x192768u);
    ctx->pc = 0x192764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192760u;
            // 0x192764: 0x24850033  addiu       $a1, $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192208u;
    if (runtime->hasFunction(0x192208u)) {
        auto targetFn = runtime->lookupFunction(0x192208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192768u; }
        if (ctx->pc != 0x192768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192208_0x192208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192768u; }
        if (ctx->pc != 0x192768u) { return; }
    }
    ctx->pc = 0x192768u;
label_192768:
    // 0x192768: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19276c: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x19276Cu;
    SET_GPR_U32(ctx, 31, 0x192774u);
    ctx->pc = 0x192770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19276Cu;
            // 0x192770: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192774u; }
        if (ctx->pc != 0x192774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192774u; }
        if (ctx->pc != 0x192774u) { return; }
    }
    ctx->pc = 0x192774u;
    // 0x192774: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x192774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x192778: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x192778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19277c: 0xa642002a  sh          $v0, 0x2A($s2)
    ctx->pc = 0x19277cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x192780: 0x26a24f28  addiu       $v0, $s5, 0x4F28
    ctx->pc = 0x192780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20264));
    // 0x192784: 0x0  nop
    ctx->pc = 0x192784u;
    // NOP
label_192788:
    // 0x192788: 0x8042000b  lb          $v0, 0xB($v0)
    ctx->pc = 0x192788u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x19278c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19278Cu;
    {
        const bool branch_taken_0x19278c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19278Cu;
            // 0x192790: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19278c) {
            ctx->pc = 0x19279Cu;
            goto label_19279c;
        }
    }
    ctx->pc = 0x192794u;
label_192794:
    // 0x192794: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x192794u;
    SET_GPR_U32(ctx, 31, 0x19279Cu);
    ctx->pc = 0x192798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192794u;
            // 0x192798: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19279Cu; }
        if (ctx->pc != 0x19279Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19279Cu; }
        if (ctx->pc != 0x19279Cu) { return; }
    }
    ctx->pc = 0x19279Cu;
label_19279c:
    // 0x19279c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x19279cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1927a0: 0x24424f28  addiu       $v0, $v0, 0x4F28
    ctx->pc = 0x1927a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20264));
    // 0x1927a4: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1927a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1927a8: 0xa0530009  sb          $s3, 0x9($v0)
    ctx->pc = 0x1927a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 19));
label_1927ac:
    // 0x1927ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1927acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1927b0:
    // 0x1927b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1927b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1927b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1927b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1927b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1927b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1927bc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1927bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1927c0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1927c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1927c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1927c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1927c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1927C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1927CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1927C8u;
            // 0x1927cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192380u: goto label_192380;
            case 0x1923D0u: goto label_1923d0;
            case 0x1923D8u: goto label_1923d8;
            case 0x1923E0u: goto label_1923e0;
            case 0x1923E4u: goto label_1923e4;
            case 0x19245Cu: goto label_19245c;
            case 0x1924A8u: goto label_1924a8;
            case 0x192538u: goto label_192538;
            case 0x19254Cu: goto label_19254c;
            case 0x192568u: goto label_192568;
            case 0x192570u: goto label_192570;
            case 0x1925F0u: goto label_1925f0;
            case 0x1925F4u: goto label_1925f4;
            case 0x192654u: goto label_192654;
            case 0x192670u: goto label_192670;
            case 0x192684u: goto label_192684;
            case 0x1926A0u: goto label_1926a0;
            case 0x1926F4u: goto label_1926f4;
            case 0x19271Cu: goto label_19271c;
            case 0x192724u: goto label_192724;
            case 0x192728u: goto label_192728;
            case 0x192750u: goto label_192750;
            case 0x192768u: goto label_192768;
            case 0x192788u: goto label_192788;
            case 0x192794u: goto label_192794;
            case 0x19279Cu: goto label_19279c;
            case 0x1927ACu: goto label_1927ac;
            case 0x1927B0u: goto label_1927b0;
            case 0x192830u: goto label_192830;
            case 0x192834u: goto label_192834;
            case 0x1928A0u: goto label_1928a0;
            case 0x1928ACu: goto label_1928ac;
            case 0x1928B4u: goto label_1928b4;
            case 0x1928DCu: goto label_1928dc;
            case 0x1928E8u: goto label_1928e8;
            case 0x192900u: goto label_192900;
            case 0x192908u: goto label_192908;
            case 0x192914u: goto label_192914;
            case 0x192934u: goto label_192934;
            case 0x192938u: goto label_192938;
            case 0x192978u: goto label_192978;
            case 0x192994u: goto label_192994;
            case 0x1929C0u: goto label_1929c0;
            case 0x1929DCu: goto label_1929dc;
            case 0x1929F0u: goto label_1929f0;
            case 0x192A04u: goto label_192a04;
            case 0x192A18u: goto label_192a18;
            case 0x192A28u: goto label_192a28;
            case 0x192A34u: goto label_192a34;
            case 0x192A40u: goto label_192a40;
            case 0x192A4Cu: goto label_192a4c;
            case 0x192A58u: goto label_192a58;
            case 0x192A64u: goto label_192a64;
            case 0x192A70u: goto label_192a70;
            case 0x192A78u: goto label_192a78;
            case 0x192A88u: goto label_192a88;
            case 0x192A90u: goto label_192a90;
            case 0x192AA0u: goto label_192aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1927D0u;
    // 0x1927d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1927d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1927d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1927d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1927d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1927d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1927dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1927dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1927e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1927e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1927e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1927e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1927e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1927ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1927ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1927f0: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x1927f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1927f4: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1927f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1927f8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1927F8u;
    {
        const bool branch_taken_0x1927f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1927FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1927F8u;
            // 0x1927fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927f8) {
            ctx->pc = 0x192834u;
            goto label_192834;
        }
    }
    ctx->pc = 0x192800u;
    // 0x192800: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x192800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x192804: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x192804u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x192808: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x192808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19280c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19280cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x192810: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x192810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x192814: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x192814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x192818: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x192818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19281c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192820: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192820u;
    {
        const bool branch_taken_0x192820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x192824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192820u;
            // 0x192824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192820) {
            ctx->pc = 0x192830u;
            goto label_192830;
        }
    }
    ctx->pc = 0x192828u;
    // 0x192828: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x192828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19282c: 0x0  nop
    ctx->pc = 0x19282cu;
    // NOP
label_192830:
    // 0x192830: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x192830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_192834:
    // 0x192834: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x192834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x192838: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x192838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x19283c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19283cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x192840: 0x24422380  addiu       $v0, $v0, 0x2380
    ctx->pc = 0x192840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9088));
    // 0x192844: 0x8c64c904  lw          $a0, -0x36FC($v1)
    ctx->pc = 0x192844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953220)));
    // 0x192848: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x192848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19284c: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x19284cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x192850: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x192850u;
    SET_GPR_U32(ctx, 31, 0x192858u);
    ctx->pc = 0x192854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192850u;
            // 0x192854: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192858u; }
        if (ctx->pc != 0x192858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192858u; }
        if (ctx->pc != 0x192858u) { return; }
    }
    ctx->pc = 0x192858u;
    // 0x192858: 0x26054f28  addiu       $a1, $s0, 0x4F28
    ctx->pc = 0x192858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20264));
    // 0x19285c: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x19285cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x192860: 0xa0a00009  sb          $zero, 0x9($a1)
    ctx->pc = 0x192860u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x192864: 0xa0a0000a  sb          $zero, 0xA($a1)
    ctx->pc = 0x192864u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x192868: 0xa0a0000b  sb          $zero, 0xB($a1)
    ctx->pc = 0x192868u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x19286c: 0xae024f28  sw          $v0, 0x4F28($s0)
    ctx->pc = 0x19286cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20264), GPR_U32(ctx, 2));
    // 0x192870: 0x94440018  lhu         $a0, 0x18($v0)
    ctx->pc = 0x192870u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x192874: 0x2483ff05  addiu       $v1, $a0, -0xFB
    ctx->pc = 0x192874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967045));
    // 0x192878: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x192878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x19287c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19287Cu;
    {
        const bool branch_taken_0x19287c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19287Cu;
            // 0x192880: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19287c) {
            ctx->pc = 0x192934u;
            goto label_192934;
        }
    }
    ctx->pc = 0x192884u;
    // 0x192884: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192888: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x192888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x19288c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192894: 0x400008  jr          $v0
    ctx->pc = 0x192894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1928A0u: goto label_1928a0;
            case 0x1928ACu: goto label_1928ac;
            case 0x1928DCu: goto label_1928dc;
            case 0x1928E8u: goto label_1928e8;
            case 0x192900u: goto label_192900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19289Cu;
    // 0x19289c: 0x0  nop
    ctx->pc = 0x19289cu;
    // NOP
label_1928a0:
    // 0x1928a0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1928a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1928a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1928A4u;
    {
        const bool branch_taken_0x1928a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928A4u;
            // 0x1928a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928a4) {
            ctx->pc = 0x1928B4u;
            goto label_1928b4;
        }
    }
    ctx->pc = 0x1928ACu;
label_1928ac:
    // 0x1928ac: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1928acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1928b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1928b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1928b4:
    // 0x1928b4: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x1928B4u;
    SET_GPR_U32(ctx, 31, 0x1928BCu);
    ctx->pc = 0x1928B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1928B4u;
            // 0x1928b8: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928BCu; }
        if (ctx->pc != 0x1928BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928BCu; }
        if (ctx->pc != 0x1928BCu) { return; }
    }
    ctx->pc = 0x1928BCu;
    // 0x1928bc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1928bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1928c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1928c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1928c4: 0x2463c8e0  addiu       $v1, $v1, -0x3720
    ctx->pc = 0x1928c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953184));
    // 0x1928c8: 0x26044f28  addiu       $a0, $s0, 0x4F28
    ctx->pc = 0x1928c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20264));
    // 0x1928cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1928ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1928d0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1928d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1928d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1928D4u;
    {
        const bool branch_taken_0x1928d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928D4u;
            // 0x1928d8: 0xa4820004  sh          $v0, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928d4) {
            ctx->pc = 0x192938u;
            goto label_192938;
        }
    }
    ctx->pc = 0x1928DCu;
label_1928dc:
    // 0x1928dc: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1928dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1928e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1928E0u;
    {
        const bool branch_taken_0x1928e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928E0u;
            // 0x1928e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928e0) {
            ctx->pc = 0x192908u;
            goto label_192908;
        }
    }
    ctx->pc = 0x1928E8u;
label_1928e8:
    // 0x1928e8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1928e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1928ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1928ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1928f0: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x1928F0u;
    SET_GPR_U32(ctx, 31, 0x1928F8u);
    ctx->pc = 0x1928F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1928F0u;
            // 0x1928f4: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928F8u; }
        if (ctx->pc != 0x1928F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928F8u; }
        if (ctx->pc != 0x1928F8u) { return; }
    }
    ctx->pc = 0x1928F8u;
    // 0x1928f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1928F8u;
    {
        const bool branch_taken_0x1928f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928F8u;
            // 0x1928fc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928f8) {
            ctx->pc = 0x192914u;
            goto label_192914;
        }
    }
    ctx->pc = 0x192900u;
label_192900:
    // 0x192900: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x192900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x192904: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x192904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_192908:
    // 0x192908: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x192908u;
    SET_GPR_U32(ctx, 31, 0x192910u);
    ctx->pc = 0x19290Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192908u;
            // 0x19290c: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192910u; }
        if (ctx->pc != 0x192910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192910u; }
        if (ctx->pc != 0x192910u) { return; }
    }
    ctx->pc = 0x192910u;
    // 0x192910: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x192910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_192914:
    // 0x192914: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x192914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x192918: 0x2463c8e0  addiu       $v1, $v1, -0x3720
    ctx->pc = 0x192918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953184));
    // 0x19291c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19291cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x192920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192924: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x192924u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192928: 0x26034f28  addiu       $v1, $s0, 0x4F28
    ctx->pc = 0x192928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20264));
    // 0x19292c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19292Cu;
    {
        const bool branch_taken_0x19292c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19292Cu;
            // 0x192930: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19292c) {
            ctx->pc = 0x192938u;
            goto label_192938;
        }
    }
    ctx->pc = 0x192934u;
label_192934:
    // 0x192934: 0xa4a40004  sh          $a0, 0x4($a1)
    ctx->pc = 0x192934u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 4));
label_192938:
    // 0x192938: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x192938u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x19293c: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x19293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x192940: 0x26714f28  addiu       $s1, $s3, 0x4F28
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20264));
    // 0x192944: 0x96300004  lhu         $s0, 0x4($s1)
    ctx->pc = 0x192944u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x192948: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x192948u;
    {
        const bool branch_taken_0x192948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19294Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192948u;
            // 0x19294c: 0x2a0200f1  slti        $v0, $s0, 0xF1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)241) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192948) {
            ctx->pc = 0x192A34u;
            goto label_192a34;
        }
    }
    ctx->pc = 0x192950u;
    // 0x192950: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x192950u;
    {
        const bool branch_taken_0x192950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192950u;
            // 0x192954: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192950) {
            ctx->pc = 0x192994u;
            goto label_192994;
        }
    }
    ctx->pc = 0x192958u;
    // 0x192958: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x192958u;
    {
        const bool branch_taken_0x192958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19295Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192958u;
            // 0x19295c: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192958) {
            ctx->pc = 0x192A04u;
            goto label_192a04;
        }
    }
    ctx->pc = 0x192960u;
    // 0x192960: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192960u;
    {
        const bool branch_taken_0x192960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192960u;
            // 0x192964: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192960) {
            ctx->pc = 0x192978u;
            goto label_192978;
        }
    }
    ctx->pc = 0x192968u;
    // 0x192968: 0x12020021  beq         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x192968u;
    {
        const bool branch_taken_0x192968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19296Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192968u;
            // 0x19296c: 0x8e644f28  lw          $a0, 0x4F28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192968) {
            ctx->pc = 0x1929F0u;
            goto label_1929f0;
        }
    }
    ctx->pc = 0x192970u;
    // 0x192970: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x192970u;
    {
        const bool branch_taken_0x192970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192970u;
            // 0x192974: 0x8082001b  lb          $v0, 0x1B($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192970) {
            ctx->pc = 0x192A90u;
            goto label_192a90;
        }
    }
    ctx->pc = 0x192978u;
label_192978:
    // 0x192978: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x192978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19297c: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19297Cu;
    {
        const bool branch_taken_0x19297c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x192980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19297Cu;
            // 0x192980: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19297c) {
            ctx->pc = 0x1929DCu;
            goto label_1929dc;
        }
    }
    ctx->pc = 0x192984u;
    // 0x192984: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x192984u;
    {
        const bool branch_taken_0x192984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x192988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192984u;
            // 0x192988: 0x8e644f28  lw          $a0, 0x4F28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192984) {
            ctx->pc = 0x192A18u;
            goto label_192a18;
        }
    }
    ctx->pc = 0x19298Cu;
    // 0x19298c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x19298Cu;
    {
        const bool branch_taken_0x19298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19298Cu;
            // 0x192990: 0x8082001b  lb          $v0, 0x1B($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19298c) {
            ctx->pc = 0x192A90u;
            goto label_192a90;
        }
    }
    ctx->pc = 0x192994u;
label_192994:
    // 0x192994: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x192994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x192998: 0x1202002f  beq         $s0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x192998u;
    {
        const bool branch_taken_0x192998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19299Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192998u;
            // 0x19299c: 0x2a0200f4  slti        $v0, $s0, 0xF4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)244) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192998) {
            ctx->pc = 0x192A58u;
            goto label_192a58;
        }
    }
    ctx->pc = 0x1929A0u;
    // 0x1929a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1929A0u;
    {
        const bool branch_taken_0x1929a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929A0u;
            // 0x1929a4: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929a0) {
            ctx->pc = 0x1929C0u;
            goto label_1929c0;
        }
    }
    ctx->pc = 0x1929A8u;
    // 0x1929a8: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1929A8u;
    {
        const bool branch_taken_0x1929a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1929ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929A8u;
            // 0x1929ac: 0x240200f2  addiu       $v0, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929a8) {
            ctx->pc = 0x192A40u;
            goto label_192a40;
        }
    }
    ctx->pc = 0x1929B0u;
    // 0x1929b0: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1929B0u;
    {
        const bool branch_taken_0x1929b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1929B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929B0u;
            // 0x1929b4: 0x8e644f28  lw          $a0, 0x4F28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929b0) {
            ctx->pc = 0x192A4Cu;
            goto label_192a4c;
        }
    }
    ctx->pc = 0x1929B8u;
    // 0x1929b8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1929B8u;
    {
        const bool branch_taken_0x1929b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929B8u;
            // 0x1929bc: 0x8082001b  lb          $v0, 0x1B($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929b8) {
            ctx->pc = 0x192A90u;
            goto label_192a90;
        }
    }
    ctx->pc = 0x1929C0u;
label_1929c0:
    // 0x1929c0: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x1929c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x1929c4: 0x12020027  beq         $s0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1929C4u;
    {
        const bool branch_taken_0x1929c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1929C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929C4u;
            // 0x1929c8: 0x240200f5  addiu       $v0, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929c4) {
            ctx->pc = 0x192A64u;
            goto label_192a64;
        }
    }
    ctx->pc = 0x1929CCu;
    // 0x1929cc: 0x12020028  beq         $s0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1929CCu;
    {
        const bool branch_taken_0x1929cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1929D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929CCu;
            // 0x1929d0: 0x8e644f28  lw          $a0, 0x4F28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929cc) {
            ctx->pc = 0x192A70u;
            goto label_192a70;
        }
    }
    ctx->pc = 0x1929D4u;
    // 0x1929d4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1929D4u;
    {
        const bool branch_taken_0x1929d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929D4u;
            // 0x1929d8: 0x8082001b  lb          $v0, 0x1B($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929d4) {
            ctx->pc = 0x192A90u;
            goto label_192a90;
        }
    }
    ctx->pc = 0x1929DCu;
label_1929dc:
    // 0x1929dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1929dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1929e0: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x1929E0u;
    SET_GPR_U32(ctx, 31, 0x1929E8u);
    ctx->pc = 0x1929E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1929E0u;
            // 0x1929e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929E8u; }
        if (ctx->pc != 0x1929E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929E8u; }
        if (ctx->pc != 0x1929E8u) { return; }
    }
    ctx->pc = 0x1929E8u;
    // 0x1929e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1929E8u;
    {
        const bool branch_taken_0x1929e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929E8u;
            // 0x1929ec: 0x240200b0  addiu       $v0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929e8) {
            ctx->pc = 0x192A28u;
            goto label_192a28;
        }
    }
    ctx->pc = 0x1929F0u;
label_1929f0:
    // 0x1929f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1929f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1929f4: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x1929F4u;
    SET_GPR_U32(ctx, 31, 0x1929FCu);
    ctx->pc = 0x1929F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1929F4u;
            // 0x1929f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929FCu; }
        if (ctx->pc != 0x1929FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929FCu; }
        if (ctx->pc != 0x1929FCu) { return; }
    }
    ctx->pc = 0x1929FCu;
    // 0x1929fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1929FCu;
    {
        const bool branch_taken_0x1929fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929FCu;
            // 0x192a00: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929fc) {
            ctx->pc = 0x192A28u;
            goto label_192a28;
        }
    }
    ctx->pc = 0x192A04u;
label_192a04:
    // 0x192a04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192a08: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x192A08u;
    SET_GPR_U32(ctx, 31, 0x192A10u);
    ctx->pc = 0x192A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192A08u;
            // 0x192a0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A10u; }
        if (ctx->pc != 0x192A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A10u; }
        if (ctx->pc != 0x192A10u) { return; }
    }
    ctx->pc = 0x192A10u;
    // 0x192a10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x192A10u;
    {
        const bool branch_taken_0x192a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A10u;
            // 0x192a14: 0x240200d0  addiu       $v0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a10) {
            ctx->pc = 0x192A28u;
            goto label_192a28;
        }
    }
    ctx->pc = 0x192A18u;
label_192a18:
    // 0x192a18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192a1c: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x192A1Cu;
    SET_GPR_U32(ctx, 31, 0x192A24u);
    ctx->pc = 0x192A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192A1Cu;
            // 0x192a20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A24u; }
        if (ctx->pc != 0x192A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A24u; }
        if (ctx->pc != 0x192A24u) { return; }
    }
    ctx->pc = 0x192A24u;
    // 0x192a24: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x192a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_192a28:
    // 0x192a28: 0xa6300004  sh          $s0, 0x4($s1)
    ctx->pc = 0x192a28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x192a2c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x192A2Cu;
    {
        const bool branch_taken_0x192a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A2Cu;
            // 0x192a30: 0xa6220006  sh          $v0, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a2c) {
            ctx->pc = 0x192A88u;
            goto label_192a88;
        }
    }
    ctx->pc = 0x192A34u;
label_192a34:
    // 0x192a34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192a38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x192A38u;
    {
        const bool branch_taken_0x192a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A38u;
            // 0x192a3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a38) {
            ctx->pc = 0x192A78u;
            goto label_192a78;
        }
    }
    ctx->pc = 0x192A40u;
label_192a40:
    // 0x192a40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192a44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x192A44u;
    {
        const bool branch_taken_0x192a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A44u;
            // 0x192a48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a44) {
            ctx->pc = 0x192A78u;
            goto label_192a78;
        }
    }
    ctx->pc = 0x192A4Cu;
label_192a4c:
    // 0x192a4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192a50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x192A50u;
    {
        const bool branch_taken_0x192a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A50u;
            // 0x192a54: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a50) {
            ctx->pc = 0x192A78u;
            goto label_192a78;
        }
    }
    ctx->pc = 0x192A58u;
label_192a58:
    // 0x192a58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192a5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x192A5Cu;
    {
        const bool branch_taken_0x192a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A5Cu;
            // 0x192a60: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a5c) {
            ctx->pc = 0x192A78u;
            goto label_192a78;
        }
    }
    ctx->pc = 0x192A64u;
label_192a64:
    // 0x192a64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192a68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192A68u;
    {
        const bool branch_taken_0x192a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A68u;
            // 0x192a6c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a68) {
            ctx->pc = 0x192A78u;
            goto label_192a78;
        }
    }
    ctx->pc = 0x192A70u;
label_192a70:
    // 0x192a70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x192a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192a74: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x192a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_192a78:
    // 0x192a78: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x192A78u;
    SET_GPR_U32(ctx, 31, 0x192A80u);
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A80u; }
        if (ctx->pc != 0x192A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A80u; }
        if (ctx->pc != 0x192A80u) { return; }
    }
    ctx->pc = 0x192A80u;
    // 0x192a80: 0xa6200006  sh          $zero, 0x6($s1)
    ctx->pc = 0x192a80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x192a84: 0x0  nop
    ctx->pc = 0x192a84u;
    // NOP
label_192a88:
    // 0x192a88: 0x8e644f28  lw          $a0, 0x4F28($s3)
    ctx->pc = 0x192a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20264)));
    // 0x192a8c: 0x8082001b  lb          $v0, 0x1B($a0)
    ctx->pc = 0x192a8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
label_192a90:
    // 0x192a90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192A90u;
    {
        const bool branch_taken_0x192a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A90u;
            // 0x192a94: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a90) {
            ctx->pc = 0x192AA0u;
            goto label_192aa0;
        }
    }
    ctx->pc = 0x192A98u;
    // 0x192a98: 0xc064882  jal         func_192208
    ctx->pc = 0x192A98u;
    SET_GPR_U32(ctx, 31, 0x192AA0u);
    ctx->pc = 0x192A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192A98u;
            // 0x192a9c: 0x2485001b  addiu       $a1, $a0, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192208u;
    if (runtime->hasFunction(0x192208u)) {
        auto targetFn = runtime->lookupFunction(0x192208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AA0u; }
        if (ctx->pc != 0x192AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192208_0x192208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AA0u; }
        if (ctx->pc != 0x192AA0u) { return; }
    }
    ctx->pc = 0x192AA0u;
label_192aa0:
    // 0x192aa0: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x192aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x192aa4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x192aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192aa8: 0x24422590  addiu       $v0, $v0, 0x2590
    ctx->pc = 0x192aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9616));
    // 0x192aac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x192aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192ab0: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x192ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x192ab4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x192ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192ab8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x192ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192abc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x192abcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x192AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192AC4u;
            // 0x192ac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192380u: goto label_192380;
            case 0x1923D0u: goto label_1923d0;
            case 0x1923D8u: goto label_1923d8;
            case 0x1923E0u: goto label_1923e0;
            case 0x1923E4u: goto label_1923e4;
            case 0x19245Cu: goto label_19245c;
            case 0x1924A8u: goto label_1924a8;
            case 0x192538u: goto label_192538;
            case 0x19254Cu: goto label_19254c;
            case 0x192568u: goto label_192568;
            case 0x192570u: goto label_192570;
            case 0x1925F0u: goto label_1925f0;
            case 0x1925F4u: goto label_1925f4;
            case 0x192654u: goto label_192654;
            case 0x192670u: goto label_192670;
            case 0x192684u: goto label_192684;
            case 0x1926A0u: goto label_1926a0;
            case 0x1926F4u: goto label_1926f4;
            case 0x19271Cu: goto label_19271c;
            case 0x192724u: goto label_192724;
            case 0x192728u: goto label_192728;
            case 0x192750u: goto label_192750;
            case 0x192768u: goto label_192768;
            case 0x192788u: goto label_192788;
            case 0x192794u: goto label_192794;
            case 0x19279Cu: goto label_19279c;
            case 0x1927ACu: goto label_1927ac;
            case 0x1927B0u: goto label_1927b0;
            case 0x192830u: goto label_192830;
            case 0x192834u: goto label_192834;
            case 0x1928A0u: goto label_1928a0;
            case 0x1928ACu: goto label_1928ac;
            case 0x1928B4u: goto label_1928b4;
            case 0x1928DCu: goto label_1928dc;
            case 0x1928E8u: goto label_1928e8;
            case 0x192900u: goto label_192900;
            case 0x192908u: goto label_192908;
            case 0x192914u: goto label_192914;
            case 0x192934u: goto label_192934;
            case 0x192938u: goto label_192938;
            case 0x192978u: goto label_192978;
            case 0x192994u: goto label_192994;
            case 0x1929C0u: goto label_1929c0;
            case 0x1929DCu: goto label_1929dc;
            case 0x1929F0u: goto label_1929f0;
            case 0x192A04u: goto label_192a04;
            case 0x192A18u: goto label_192a18;
            case 0x192A28u: goto label_192a28;
            case 0x192A34u: goto label_192a34;
            case 0x192A40u: goto label_192a40;
            case 0x192A4Cu: goto label_192a4c;
            case 0x192A58u: goto label_192a58;
            case 0x192A64u: goto label_192a64;
            case 0x192A70u: goto label_192a70;
            case 0x192A78u: goto label_192a78;
            case 0x192A88u: goto label_192a88;
            case 0x192A90u: goto label_192a90;
            case 0x192AA0u: goto label_192aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192ACCu;
    // 0x192acc: 0x0  nop
    ctx->pc = 0x192accu;
    // NOP
    // 0x192ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192ad4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x192ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192ad8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192ae4: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x192AE4u;
    SET_GPR_U32(ctx, 31, 0x192AECu);
    ctx->pc = 0x192AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192AE4u;
            // 0x192ae8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AECu; }
        if (ctx->pc != 0x192AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192AECu; }
        if (ctx->pc != 0x192AECu) { return; }
    }
    ctx->pc = 0x192AECu;
    // 0x192aec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x192aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192af0: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x192af0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x192af4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192afc: 0x3e00008  jr          $ra
    ctx->pc = 0x192AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192AFCu;
            // 0x192b00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192380u: goto label_192380;
            case 0x1923D0u: goto label_1923d0;
            case 0x1923D8u: goto label_1923d8;
            case 0x1923E0u: goto label_1923e0;
            case 0x1923E4u: goto label_1923e4;
            case 0x19245Cu: goto label_19245c;
            case 0x1924A8u: goto label_1924a8;
            case 0x192538u: goto label_192538;
            case 0x19254Cu: goto label_19254c;
            case 0x192568u: goto label_192568;
            case 0x192570u: goto label_192570;
            case 0x1925F0u: goto label_1925f0;
            case 0x1925F4u: goto label_1925f4;
            case 0x192654u: goto label_192654;
            case 0x192670u: goto label_192670;
            case 0x192684u: goto label_192684;
            case 0x1926A0u: goto label_1926a0;
            case 0x1926F4u: goto label_1926f4;
            case 0x19271Cu: goto label_19271c;
            case 0x192724u: goto label_192724;
            case 0x192728u: goto label_192728;
            case 0x192750u: goto label_192750;
            case 0x192768u: goto label_192768;
            case 0x192788u: goto label_192788;
            case 0x192794u: goto label_192794;
            case 0x19279Cu: goto label_19279c;
            case 0x1927ACu: goto label_1927ac;
            case 0x1927B0u: goto label_1927b0;
            case 0x192830u: goto label_192830;
            case 0x192834u: goto label_192834;
            case 0x1928A0u: goto label_1928a0;
            case 0x1928ACu: goto label_1928ac;
            case 0x1928B4u: goto label_1928b4;
            case 0x1928DCu: goto label_1928dc;
            case 0x1928E8u: goto label_1928e8;
            case 0x192900u: goto label_192900;
            case 0x192908u: goto label_192908;
            case 0x192914u: goto label_192914;
            case 0x192934u: goto label_192934;
            case 0x192938u: goto label_192938;
            case 0x192978u: goto label_192978;
            case 0x192994u: goto label_192994;
            case 0x1929C0u: goto label_1929c0;
            case 0x1929DCu: goto label_1929dc;
            case 0x1929F0u: goto label_1929f0;
            case 0x192A04u: goto label_192a04;
            case 0x192A18u: goto label_192a18;
            case 0x192A28u: goto label_192a28;
            case 0x192A34u: goto label_192a34;
            case 0x192A40u: goto label_192a40;
            case 0x192A4Cu: goto label_192a4c;
            case 0x192A58u: goto label_192a58;
            case 0x192A64u: goto label_192a64;
            case 0x192A70u: goto label_192a70;
            case 0x192A78u: goto label_192a78;
            case 0x192A88u: goto label_192a88;
            case 0x192A90u: goto label_192a90;
            case 0x192AA0u: goto label_192aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192B04u;
    // 0x192b04: 0x0  nop
    ctx->pc = 0x192b04u;
    // NOP
}
