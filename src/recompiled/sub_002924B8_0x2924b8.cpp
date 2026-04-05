#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002924B8
// Address: 0x2924b8 - 0x2925d0
void sub_002924B8_0x2924b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002924B8_0x2924b8");
#endif

    ctx->pc = 0x2924b8u;

    // 0x2924b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2924b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2924bc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2924bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2924c0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2924c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2924c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2924c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2924c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2924cc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2924ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924d0: 0x2d49818  mult        $s3, $s6, $s4
    ctx->pc = 0x2924d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x2924d4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2924d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2924d8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2924d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2924dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2924dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2924e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2924e4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2924e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2924e8: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2924E8u;
    {
        const bool branch_taken_0x2924e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2924ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2924E8u;
            // 0x2924ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2924e8) {
            ctx->pc = 0x292510u;
            goto label_292510;
        }
    }
    ctx->pc = 0x2924F0u;
    // 0x2924f0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2924F0u;
    {
        const bool branch_taken_0x2924f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2924F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2924F0u;
            // 0x2924f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2924f0) {
            ctx->pc = 0x2925A4u;
            goto label_2925a4;
        }
    }
    ctx->pc = 0x2924F8u;
label_2924f8:
    // 0x2924f8: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2924F8u;
    {
        const bool branch_taken_0x2924f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2924f8) {
            ctx->pc = 0x2924FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2924F8u;
            // 0x2924fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x292500u;
            goto label_292500;
        }
    }
    ctx->pc = 0x292500u;
label_292500:
    // 0x292500: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x292500u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x292504: 0x1012  mflo        $v0
    ctx->pc = 0x292504u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x292508: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x292508u;
    {
        const bool branch_taken_0x292508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29250Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292508u;
            // 0x29250c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292508) {
            ctx->pc = 0x2925A8u;
            goto label_2925a8;
        }
    }
    ctx->pc = 0x292510u;
label_292510:
    // 0x292510: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x292510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292514: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x292514u;
    {
        const bool branch_taken_0x292514 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x292514) {
            ctx->pc = 0x292518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292514u;
            // 0x292518: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29251Cu;
            goto label_29251c;
        }
    }
    ctx->pc = 0x29251Cu;
label_29251c:
    // 0x29251c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x29251cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292520: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x292520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292524: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x292524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x292528: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x292528u;
    {
        const bool branch_taken_0x292528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292528u;
            // 0x29252c: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292528) {
            ctx->pc = 0x292578u;
            goto label_292578;
        }
    }
    ctx->pc = 0x292530u;
    // 0x292530: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x292530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x292534: 0x0  nop
    ctx->pc = 0x292534u;
    // NOP
label_292538:
    // 0x292538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x292538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29253c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29253cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292540: 0xc0a4922  jal         func_292488
    ctx->pc = 0x292540u;
    SET_GPR_U32(ctx, 31, 0x292548u);
    ctx->pc = 0x292544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292540u;
            // 0x292544: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292488u;
    if (runtime->hasFunction(0x292488u)) {
        auto targetFn = runtime->lookupFunction(0x292488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292548u; }
        if (ctx->pc != 0x292548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292488_0x2924b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292548u; }
        if (ctx->pc != 0x292548u) { return; }
    }
    ctx->pc = 0x292548u;
    // 0x292548: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x292548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x29254c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x292550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292554: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x292554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x292558: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x292558u;
    SET_GPR_U32(ctx, 31, 0x292560u);
    ctx->pc = 0x29255Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292558u;
            // 0x29255c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292560u; }
        if (ctx->pc != 0x292560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292560u; }
        if (ctx->pc != 0x292560u) { return; }
    }
    ctx->pc = 0x292560u;
    // 0x292560: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x292560u;
    {
        const bool branch_taken_0x292560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292560u;
            // 0x292564: 0x2b31023  subu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292560) {
            ctx->pc = 0x2924F8u;
            runtime->cooperativeGuestYield();
            goto label_2924f8;
        }
    }
    ctx->pc = 0x292568u;
    // 0x292568: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x292568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29256c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x29256cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x292570: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x292570u;
    {
        const bool branch_taken_0x292570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292570) {
            ctx->pc = 0x292574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292570u;
            // 0x292574: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292538u;
            runtime->cooperativeGuestYield();
            goto label_292538;
        }
    }
    ctx->pc = 0x292578u;
label_292578:
    // 0x292578: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x292578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29257c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29257cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292580: 0xc0a4922  jal         func_292488
    ctx->pc = 0x292580u;
    SET_GPR_U32(ctx, 31, 0x292588u);
    ctx->pc = 0x292584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292580u;
            // 0x292584: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292488u;
    if (runtime->hasFunction(0x292488u)) {
        auto targetFn = runtime->lookupFunction(0x292488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292588u; }
        if (ctx->pc != 0x292588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292488_0x2924b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292588u; }
        if (ctx->pc != 0x292588u) { return; }
    }
    ctx->pc = 0x292588u;
    // 0x292588: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x292588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29258c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x29258cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292590: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x292590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x292594: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x292594u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x292598: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x292598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x29259c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x29259cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2925a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2925a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2925a4:
    // 0x2925a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2925a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2925a8:
    // 0x2925a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2925a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2925ac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2925acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2925b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2925b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2925b4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2925b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2925b8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2925b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2925bc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2925bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2925c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2925c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2925c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2925C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2925C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2925C4u;
            // 0x2925c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2924F8u: goto label_2924f8;
            case 0x292500u: goto label_292500;
            case 0x292510u: goto label_292510;
            case 0x29251Cu: goto label_29251c;
            case 0x292538u: goto label_292538;
            case 0x292578u: goto label_292578;
            case 0x2925A4u: goto label_2925a4;
            case 0x2925A8u: goto label_2925a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2925CCu;
    // 0x2925cc: 0x0  nop
    ctx->pc = 0x2925ccu;
    // NOP
}
