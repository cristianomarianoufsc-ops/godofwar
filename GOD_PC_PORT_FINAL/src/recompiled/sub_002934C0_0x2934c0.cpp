#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002934C0
// Address: 0x2934c0 - 0x293640
void sub_002934C0_0x2934c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002934C0_0x2934c0");
#endif

    ctx->pc = 0x2934c0u;

    // 0x2934c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2934c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2934c4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2934c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2934c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2934c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934cc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2934ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2934d0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2934d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2934d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2934d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2934d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2934d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2934dc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2934dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2934e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2934e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2934e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2934e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2934e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2934ec: 0xc0a49da  jal         func_292768
    ctx->pc = 0x2934ECu;
    SET_GPR_U32(ctx, 31, 0x2934F4u);
    ctx->pc = 0x2934F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2934ECu;
            // 0x2934f0: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292768u;
    if (runtime->hasFunction(0x292768u)) {
        auto targetFn = runtime->lookupFunction(0x292768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934F4u; }
        if (ctx->pc != 0x2934F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292768_0x292768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2934F4u; }
        if (ctx->pc != 0x2934F4u) { return; }
    }
    ctx->pc = 0x2934F4u;
    // 0x2934f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2934f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934f8: 0x10283f  dsra32      $a1, $s0, 0
    ctx->pc = 0x2934f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2934fc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2934fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x293500: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x293500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x293504: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x293504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x293508: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x293508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29350c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x29350cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x293510: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x293510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x293514: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x293514u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x293518: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29351c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x29351cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x293520: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x293520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x293524: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x293524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x293528: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x293528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x29352c: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x29352cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x293530: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x293530u;
    {
        const bool branch_taken_0x293530 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x293534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293530u;
            // 0x293534: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293530) {
            ctx->pc = 0x293544u;
            goto label_293544;
        }
    }
    ctx->pc = 0x293538u;
    // 0x293538: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x293538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x29353c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x29353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x293540: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x293540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_293544:
    // 0x293544: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x293544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x293548: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293548u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29354c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29354Cu;
    {
        const bool branch_taken_0x29354c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29354Cu;
            // 0x293550: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29354c) {
            ctx->pc = 0x2935B4u;
            goto label_2935b4;
        }
    }
    ctx->pc = 0x293554u;
    // 0x293554: 0xc0a4ac4  jal         func_292B10
    ctx->pc = 0x293554u;
    SET_GPR_U32(ctx, 31, 0x29355Cu);
    ctx->pc = 0x293558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293554u;
            // 0x293558: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292B10u;
    if (runtime->hasFunction(0x292B10u)) {
        auto targetFn = runtime->lookupFunction(0x292B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29355Cu; }
        if (ctx->pc != 0x29355Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292b10_0x292bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29355Cu; }
        if (ctx->pc != 0x29355Cu) { return; }
    }
    ctx->pc = 0x29355Cu;
    // 0x29355c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29355cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293560: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x293560u;
    {
        const bool branch_taken_0x293560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x293564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293560u;
            // 0x293564: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293560) {
            ctx->pc = 0x29358Cu;
            goto label_29358c;
        }
    }
    ctx->pc = 0x293568u;
    // 0x293568: 0x52023  negu        $a0, $a1
    ctx->pc = 0x293568u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x29356c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29356cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293570: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x293570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x293574: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293578: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x293578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x29357c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x293580: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x293580u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x293584: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x293584u;
    {
        const bool branch_taken_0x293584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293584u;
            // 0x293588: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293584) {
            ctx->pc = 0x293594u;
            goto label_293594;
        }
    }
    ctx->pc = 0x29358Cu;
label_29358c:
    // 0x29358c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293590: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x293590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_293594:
    // 0x293594: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x293594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x293598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29359c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29359cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2935a0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2935a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2935a4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2935a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2935a8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2935a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2935ACu;
    {
        const bool branch_taken_0x2935ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2935B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2935ACu;
            // 0x2935b0: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935ac) {
            ctx->pc = 0x2935D4u;
            goto label_2935d4;
        }
    }
    ctx->pc = 0x2935B4u;
label_2935b4:
    // 0x2935b4: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2935b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2935b8: 0xc0a4ac4  jal         func_292B10
    ctx->pc = 0x2935B8u;
    SET_GPR_U32(ctx, 31, 0x2935C0u);
    ctx->pc = 0x2935BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2935B8u;
            // 0x2935bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292B10u;
    if (runtime->hasFunction(0x292B10u)) {
        auto targetFn = runtime->lookupFunction(0x292B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2935C0u; }
        if (ctx->pc != 0x2935C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292b10_0x292bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2935C0u; }
        if (ctx->pc != 0x2935C0u) { return; }
    }
    ctx->pc = 0x2935C0u;
    // 0x2935c0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2935c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2935c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2935c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2935c8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2935c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2935cc: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x2935ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2935d0: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x2935d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_2935d4:
    // 0x2935d4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2935D4u;
    {
        const bool branch_taken_0x2935d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2935D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2935D4u;
            // 0x2935d8: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935d4) {
            ctx->pc = 0x2935F0u;
            goto label_2935f0;
        }
    }
    ctx->pc = 0x2935DCu;
    // 0x2935dc: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x2935dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2935e0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2935e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2935e4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2935e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2935e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2935E8u;
    {
        const bool branch_taken_0x2935e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2935ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2935E8u;
            // 0x2935ec: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935e8) {
            ctx->pc = 0x293610u;
            goto label_293610;
        }
    }
    ctx->pc = 0x2935F0u;
label_2935f0:
    // 0x2935f0: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x2935f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x2935f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2935f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2935f8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2935f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2935fc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2935fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x293600: 0xc0a4aa2  jal         func_292A88
    ctx->pc = 0x293600u;
    SET_GPR_U32(ctx, 31, 0x293608u);
    ctx->pc = 0x293604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293600u;
            // 0x293604: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292A88u;
    if (runtime->hasFunction(0x292A88u)) {
        auto targetFn = runtime->lookupFunction(0x292A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293608u; }
        if (ctx->pc != 0x293608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292a88_0x292b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293608u; }
        if (ctx->pc != 0x293608u) { return; }
    }
    ctx->pc = 0x293608u;
    // 0x293608: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x293608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x29360c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29360cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_293610:
    // 0x293610: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x293610u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x293614: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x293614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293618: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x293618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29361c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x29361cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293620: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x293620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293624: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x293624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293628: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x293628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29362c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x29362cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293634: 0x3e00008  jr          $ra
    ctx->pc = 0x293634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293634u;
            // 0x293638: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293544u: goto label_293544;
            case 0x29358Cu: goto label_29358c;
            case 0x293594u: goto label_293594;
            case 0x2935B4u: goto label_2935b4;
            case 0x2935D4u: goto label_2935d4;
            case 0x2935F0u: goto label_2935f0;
            case 0x293610u: goto label_293610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29363Cu;
    // 0x29363c: 0x0  nop
    ctx->pc = 0x29363cu;
    // NOP
}
