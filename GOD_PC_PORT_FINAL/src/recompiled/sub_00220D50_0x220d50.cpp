#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220D50
// Address: 0x220d50 - 0x220e88
void sub_00220D50_0x220d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220D50_0x220d50");
#endif

    ctx->pc = 0x220d50u;

    // 0x220d50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x220d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x220d54: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x220d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x220d58: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x220d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x220d5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x220d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x220d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x220d64: 0x70069ca9  por         $s3, $zero, $a2
    ctx->pc = 0x220d64u;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x220d68: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x220d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x220d6c: 0x7005a4a9  por         $s4, $zero, $a1
    ctx->pc = 0x220d6cu;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x220d70: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x220d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x220d74: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x220d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d78: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x220d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x220d7c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x220d7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d80: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x220d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x220d84: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x220d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x220d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220d8c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x220d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x220d90: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x220D90u;
    {
        const bool branch_taken_0x220d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220D90u;
            // 0x220d94: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d90) {
            ctx->pc = 0x220E58u;
            goto label_220e58;
        }
    }
    ctx->pc = 0x220D98u;
    // 0x220d98: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x220d98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x220d9c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x220d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x220da0: 0x2477e848  addiu       $s7, $v1, -0x17B8
    ctx->pc = 0x220da0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x220da4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220da8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x220da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x220dac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x220dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220db0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x220db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220db4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x220db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x220db8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x220db8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x220dbc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x220dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x220dc0: 0x40f809  jalr        $v0
    ctx->pc = 0x220DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220DC8u);
        ctx->pc = 0x220DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220DC0u;
            // 0x220dc4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220DC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220E10u: goto label_220e10;
            case 0x220E58u: goto label_220e58;
            case 0x220E5Cu: goto label_220e5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220DC8u; }
            if (ctx->pc != 0x220DC8u) { return; }
        }
        }
    }
    ctx->pc = 0x220DC8u;
    // 0x220dc8: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x220DC8u;
    SET_GPR_U32(ctx, 31, 0x220DD0u);
    ctx->pc = 0x220DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220DC8u;
            // 0x220dcc: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DD0u; }
        if (ctx->pc != 0x220DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DD0u; }
        if (ctx->pc != 0x220DD0u) { return; }
    }
    ctx->pc = 0x220DD0u;
    // 0x220dd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220dd4: 0xc088308  jal         func_220C20
    ctx->pc = 0x220DD4u;
    SET_GPR_U32(ctx, 31, 0x220DDCu);
    ctx->pc = 0x220DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220DD4u;
            // 0x220dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220C20u;
    if (runtime->hasFunction(0x220C20u)) {
        auto targetFn = runtime->lookupFunction(0x220C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DDCu; }
        if (ctx->pc != 0x220DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220C20_0x220c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DDCu; }
        if (ctx->pc != 0x220DDCu) { return; }
    }
    ctx->pc = 0x220DDCu;
    // 0x220ddc: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x220DDCu;
    {
        const bool branch_taken_0x220ddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x220ddc) {
            ctx->pc = 0x220DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x220DDCu;
            // 0x220de0: 0x8ee3006c  lw          $v1, 0x6C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x220E10u;
            goto label_220e10;
        }
    }
    ctx->pc = 0x220DE4u;
    // 0x220de4: 0xc089960  jal         func_226580
    ctx->pc = 0x220DE4u;
    SET_GPR_U32(ctx, 31, 0x220DECu);
    ctx->pc = 0x220DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220DE4u;
            // 0x220de8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    if (runtime->hasFunction(0x226580u)) {
        auto targetFn = runtime->lookupFunction(0x226580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DECu; }
        if (ctx->pc != 0x220DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226580_0x226580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DECu; }
        if (ctx->pc != 0x220DECu) { return; }
    }
    ctx->pc = 0x220DECu;
    // 0x220dec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x220decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220df0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x220df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220df4: 0x701434a9  por         $a2, $zero, $s4
    ctx->pc = 0x220df4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
    // 0x220df8: 0x70133ca9  por         $a3, $zero, $s3
    ctx->pc = 0x220df8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 19)));
    // 0x220dfc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x220dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e00: 0xc089bb8  jal         func_226EE0
    ctx->pc = 0x220E00u;
    SET_GPR_U32(ctx, 31, 0x220E08u);
    ctx->pc = 0x220E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220E00u;
            // 0x220e04: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226EE0u;
    if (runtime->hasFunction(0x226EE0u)) {
        auto targetFn = runtime->lookupFunction(0x226EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E08u; }
        if (ctx->pc != 0x220E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226EE0_0x226ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E08u; }
        if (ctx->pc != 0x220E08u) { return; }
    }
    ctx->pc = 0x220E08u;
    // 0x220e08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x220e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e0c: 0x8ee3006c  lw          $v1, 0x6C($s7)
    ctx->pc = 0x220e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 108)));
label_220e10:
    // 0x220e10: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x220e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x220e14: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x220e14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x220e18: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x220e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x220e1c: 0x40f809  jalr        $v0
    ctx->pc = 0x220E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220E24u);
        ctx->pc = 0x220E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E1Cu;
            // 0x220e20: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220E24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220E10u: goto label_220e10;
            case 0x220E58u: goto label_220e58;
            case 0x220E5Cu: goto label_220e5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220E24u; }
            if (ctx->pc != 0x220E24u) { return; }
        }
        }
    }
    ctx->pc = 0x220E24u;
    // 0x220e24: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x220E24u;
    {
        const bool branch_taken_0x220e24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E24u;
            // 0x220e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e24) {
            ctx->pc = 0x220E5Cu;
            goto label_220e5c;
        }
    }
    ctx->pc = 0x220E2Cu;
    // 0x220e2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x220e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x220e30: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x220e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x220e34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x220e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x220e38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x220E38u;
    {
        const bool branch_taken_0x220e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E38u;
            // 0x220e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e38) {
            ctx->pc = 0x220E5Cu;
            goto label_220e5c;
        }
    }
    ctx->pc = 0x220E40u;
    // 0x220e40: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x220e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x220e44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220E44u;
    {
        const bool branch_taken_0x220e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E44u;
            // 0x220e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e44) {
            ctx->pc = 0x220E5Cu;
            goto label_220e5c;
        }
    }
    ctx->pc = 0x220E4Cu;
    // 0x220e4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x220E4Cu;
    {
        const bool branch_taken_0x220e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E4Cu;
            // 0x220e50: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e4c) {
            ctx->pc = 0x220E5Cu;
            goto label_220e5c;
        }
    }
    ctx->pc = 0x220E54u;
    // 0x220e54: 0x0  nop
    ctx->pc = 0x220e54u;
    // NOP
label_220e58:
    // 0x220e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x220e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220e5c:
    // 0x220e5c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x220e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x220e60: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x220e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x220e64: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x220e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220e68: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x220e68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220e6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x220e6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220e70: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x220e70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220e74: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x220e74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220e78: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x220e78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220e80: 0x3e00008  jr          $ra
    ctx->pc = 0x220E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E80u;
            // 0x220e84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220E10u: goto label_220e10;
            case 0x220E58u: goto label_220e58;
            case 0x220E5Cu: goto label_220e5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220E88u;
}
