#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292848
// Address: 0x292848 - 0x292950
void sub_00292848_0x292848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292848_0x292848");
#endif

    ctx->pc = 0x292848u;

    // 0x292848: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x292848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29284c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x29284cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292850: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x292850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x292854: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x292854u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292858: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x292858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x29285c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29285cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292860: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x292860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x292864: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x292864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292868: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x292868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x29286c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29286cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292874: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x292874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x292878: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x292878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x29287c: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x29287cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_292880:
    // 0x292880: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x292880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x292884: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x292884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x292888: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x292888u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x29288c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x29288cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x292890: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x292890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292894: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x292894u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x292898: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x292898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29289c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x29289cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2928a0: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x2928a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2928a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2928a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2928a8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2928a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2928ac: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2928acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2928b0: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x2928b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2928b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2928b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2928b8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2928b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2928bc: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2928BCu;
    {
        const bool branch_taken_0x2928bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2928C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2928BCu;
            // 0x2928c0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928bc) {
            ctx->pc = 0x292880u;
            runtime->cooperativeGuestYield();
            goto label_292880;
        }
    }
    ctx->pc = 0x2928C4u;
    // 0x2928c4: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x2928C4u;
    {
        const bool branch_taken_0x2928c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2928C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2928C4u;
            // 0x2928c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928c4) {
            ctx->pc = 0x292930u;
            goto label_292930;
        }
    }
    ctx->pc = 0x2928CCu;
    // 0x2928cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2928ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2928d0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2928d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2928d4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2928D4u;
    {
        const bool branch_taken_0x2928d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2928D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2928D4u;
            // 0x2928d8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928d4) {
            ctx->pc = 0x29291Cu;
            goto label_29291c;
        }
    }
    ctx->pc = 0x2928DCu;
    // 0x2928dc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2928dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2928e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2928e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928e4: 0xc0a49da  jal         func_292768
    ctx->pc = 0x2928E4u;
    SET_GPR_U32(ctx, 31, 0x2928ECu);
    ctx->pc = 0x2928E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2928E4u;
            // 0x2928e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292768u;
    if (runtime->hasFunction(0x292768u)) {
        auto targetFn = runtime->lookupFunction(0x292768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2928ECu; }
        if (ctx->pc != 0x2928ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292768_0x292768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2928ECu; }
        if (ctx->pc != 0x2928ECu) { return; }
    }
    ctx->pc = 0x2928ECu;
    // 0x2928ec: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2928ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2928f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2928f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928f4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x2928f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2928f8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2928f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2928fc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2928fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x292900: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x292900u;
    SET_GPR_U32(ctx, 31, 0x292908u);
    ctx->pc = 0x292904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292900u;
            // 0x292904: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292908u; }
        if (ctx->pc != 0x292908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292908u; }
        if (ctx->pc != 0x292908u) { return; }
    }
    ctx->pc = 0x292908u;
    // 0x292908: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x292908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29290c: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x29290Cu;
    SET_GPR_U32(ctx, 31, 0x292914u);
    ctx->pc = 0x292910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29290Cu;
            // 0x292910: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292914u; }
        if (ctx->pc != 0x292914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292914u; }
        if (ctx->pc != 0x292914u) { return; }
    }
    ctx->pc = 0x292914u;
    // 0x292914: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x292914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292918: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x292918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_29291c:
    // 0x29291c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x292920: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x292920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x292924: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x292924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x292928: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x292928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x29292c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29292cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_292930:
    // 0x292930: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x292930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292934: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x292934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292938: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x292938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29293c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x29293cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292940: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x292940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292948: 0x3e00008  jr          $ra
    ctx->pc = 0x292948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29294Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292948u;
            // 0x29294c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292880u: goto label_292880;
            case 0x29291Cu: goto label_29291c;
            case 0x292930u: goto label_292930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292950u;
}
