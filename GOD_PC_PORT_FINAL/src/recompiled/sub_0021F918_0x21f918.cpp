#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F918
// Address: 0x21f918 - 0x21fa40
void sub_0021F918_0x21f918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F918_0x21f918");
#endif

    ctx->pc = 0x21f918u;

    // 0x21f918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f91c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21f91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21f920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f924: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21F924u;
    SET_GPR_U32(ctx, 31, 0x21F92Cu);
    ctx->pc = 0x21F928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F924u;
            // 0x21f928: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F92Cu; }
        if (ctx->pc != 0x21F92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F92Cu; }
        if (ctx->pc != 0x21F92Cu) { return; }
    }
    ctx->pc = 0x21F92Cu;
    // 0x21f92c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f930: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x21f930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21f934: 0x8c82027c  lw          $v0, 0x27C($a0)
    ctx->pc = 0x21f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 636)));
    // 0x21f938: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x21F938u;
    {
        const bool branch_taken_0x21f938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F938u;
            // 0x21f93c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f938) {
            ctx->pc = 0x21FA34u;
            goto label_21fa34;
        }
    }
    ctx->pc = 0x21F940u;
    // 0x21f940: 0x8c900278  lw          $s0, 0x278($a0)
    ctx->pc = 0x21f940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x21f944: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F944u;
    {
        const bool branch_taken_0x21f944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F944u;
            // 0x21f948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f944) {
            ctx->pc = 0x21F95Cu;
            goto label_21f95c;
        }
    }
    ctx->pc = 0x21F94Cu;
    // 0x21f94c: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21F94Cu;
    {
        const bool branch_taken_0x21f94c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F94Cu;
            // 0x21f950: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f94c) {
            ctx->pc = 0x21F98Cu;
            goto label_21f98c;
        }
    }
    ctx->pc = 0x21F954u;
    // 0x21f954: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x21F954u;
    {
        const bool branch_taken_0x21f954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F954u;
            // 0x21f958: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f954) {
            ctx->pc = 0x21FA34u;
            goto label_21fa34;
        }
    }
    ctx->pc = 0x21F95Cu;
label_21f95c:
    // 0x21f95c: 0xc06dee6  jal         func_1B7B98
    ctx->pc = 0x21F95Cu;
    SET_GPR_U32(ctx, 31, 0x21F964u);
    ctx->pc = 0x1B7B98u;
    if (runtime->hasFunction(0x1B7B98u)) {
        auto targetFn = runtime->lookupFunction(0x1B7B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F964u; }
        if (ctx->pc != 0x21F964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7B98_0x1b7b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F964u; }
        if (ctx->pc != 0x21F964u) { return; }
    }
    ctx->pc = 0x21F964u;
    // 0x21f964: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x21f964u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x21f968: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x21f968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21f96c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x21f96cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x21f970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f974: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x21f974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x21f978: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f97c: 0xace5e5a0  sw          $a1, -0x1A60($a3)
    ctx->pc = 0x21f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960544), GPR_U32(ctx, 5));
    // 0x21f980: 0xacc3e5b0  sw          $v1, -0x1A50($a2)
    ctx->pc = 0x21f980u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960560), GPR_U32(ctx, 3));
    // 0x21f984: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x21F984u;
    {
        const bool branch_taken_0x21f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F984u;
            // 0x21f988: 0xac44e560  sw          $a0, -0x1AA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f984) {
            ctx->pc = 0x21FA30u;
            goto label_21fa30;
        }
    }
    ctx->pc = 0x21F98Cu;
label_21f98c:
    // 0x21f98c: 0xc06f9c6  jal         func_1BE718
    ctx->pc = 0x21F98Cu;
    SET_GPR_U32(ctx, 31, 0x21F994u);
    ctx->pc = 0x21F990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F98Cu;
            // 0x21f990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE718u;
    if (runtime->hasFunction(0x1BE718u)) {
        auto targetFn = runtime->lookupFunction(0x1BE718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F994u; }
        if (ctx->pc != 0x21F994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE718_0x1be718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F994u; }
        if (ctx->pc != 0x21F994u) { return; }
    }
    ctx->pc = 0x21F994u;
    // 0x21f994: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f998: 0x8c42e5b4  lw          $v0, -0x1A4C($v0)
    ctx->pc = 0x21f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960564)));
    // 0x21f99c: 0x1450001b  bne         $v0, $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21F99Cu;
    {
        const bool branch_taken_0x21f99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x21F9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F99Cu;
            // 0x21f9a0: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f99c) {
            ctx->pc = 0x21FA0Cu;
            goto label_21fa0c;
        }
    }
    ctx->pc = 0x21F9A4u;
    // 0x21f9a4: 0xc06ef3e  jal         func_1BBCF8
    ctx->pc = 0x21F9A4u;
    SET_GPR_U32(ctx, 31, 0x21F9ACu);
    ctx->pc = 0x1BBCF8u;
    if (runtime->hasFunction(0x1BBCF8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F9ACu; }
        if (ctx->pc != 0x21F9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bbcf8_0x1bbd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F9ACu; }
        if (ctx->pc != 0x21F9ACu) { return; }
    }
    ctx->pc = 0x21F9ACu;
    // 0x21f9ac: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21F9ACu;
    {
        const bool branch_taken_0x21f9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9ACu;
            // 0x21f9b0: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9ac) {
            ctx->pc = 0x21FA0Cu;
            goto label_21fa0c;
        }
    }
    ctx->pc = 0x21F9B4u;
    // 0x21f9b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f9b8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x21f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x21f9bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f9c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21f9c4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x21f9c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x21f9c8: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x21f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x21f9cc: 0x40f809  jalr        $v0
    ctx->pc = 0x21F9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F9D4u);
        ctx->pc = 0x21F9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9CCu;
            // 0x21f9d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21F9D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F95Cu: goto label_21f95c;
            case 0x21F98Cu: goto label_21f98c;
            case 0x21F9F8u: goto label_21f9f8;
            case 0x21FA0Cu: goto label_21fa0c;
            case 0x21FA30u: goto label_21fa30;
            case 0x21FA34u: goto label_21fa34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21F9D4u; }
            if (ctx->pc != 0x21F9D4u) { return; }
        }
        }
    }
    ctx->pc = 0x21F9D4u;
    // 0x21f9d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21f9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f9d8: 0xc080382  jal         func_200E08
    ctx->pc = 0x21F9D8u;
    SET_GPR_U32(ctx, 31, 0x21F9E0u);
    ctx->pc = 0x21F9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9D8u;
            // 0x21f9dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E08u;
    if (runtime->hasFunction(0x200E08u)) {
        auto targetFn = runtime->lookupFunction(0x200E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F9E0u; }
        if (ctx->pc != 0x21F9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200e08_0x200e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F9E0u; }
        if (ctx->pc != 0x21F9E0u) { return; }
    }
    ctx->pc = 0x21F9E0u;
    // 0x21f9e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F9E0u;
    {
        const bool branch_taken_0x21f9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f9e0) {
            ctx->pc = 0x21F9F8u;
            goto label_21f9f8;
        }
    }
    ctx->pc = 0x21F9E8u;
    // 0x21f9e8: 0xc08036c  jal         func_200DB0
    ctx->pc = 0x21F9E8u;
    SET_GPR_U32(ctx, 31, 0x21F9F0u);
    ctx->pc = 0x21F9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9E8u;
            // 0x21f9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200DB0u;
    if (runtime->hasFunction(0x200DB0u)) {
        auto targetFn = runtime->lookupFunction(0x200DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F9F0u; }
        if (ctx->pc != 0x21F9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200DB0_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F9F0u; }
        if (ctx->pc != 0x21F9F0u) { return; }
    }
    ctx->pc = 0x21F9F0u;
    // 0x21f9f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21F9F0u;
    {
        const bool branch_taken_0x21f9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9F0u;
            // 0x21f9f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9f0) {
            ctx->pc = 0x21FA34u;
            goto label_21fa34;
        }
    }
    ctx->pc = 0x21F9F8u;
label_21f9f8:
    // 0x21f9f8: 0xc0802f2  jal         func_200BC8
    ctx->pc = 0x21F9F8u;
    SET_GPR_U32(ctx, 31, 0x21FA00u);
    ctx->pc = 0x21F9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9F8u;
            // 0x21f9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200BC8u;
    if (runtime->hasFunction(0x200BC8u)) {
        auto targetFn = runtime->lookupFunction(0x200BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FA00u; }
        if (ctx->pc != 0x21FA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200BC8_0x200bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FA00u; }
        if (ctx->pc != 0x21FA00u) { return; }
    }
    ctx->pc = 0x21FA00u;
    // 0x21fa00: 0xc06ef28  jal         func_1BBCA0
    ctx->pc = 0x21FA00u;
    SET_GPR_U32(ctx, 31, 0x21FA08u);
    ctx->pc = 0x1BBCA0u;
    if (runtime->hasFunction(0x1BBCA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FA08u; }
        if (ctx->pc != 0x21FA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCA0_0x1bbca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FA08u; }
        if (ctx->pc != 0x21FA08u) { return; }
    }
    ctx->pc = 0x21FA08u;
    // 0x21fa08: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x21fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_21fa0c:
    // 0x21fa0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fa10: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x21fa10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x21fa14: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x21fa14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x21fa18: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x21fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x21fa1c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fa20: 0xaca4e5ac  sw          $a0, -0x1A54($a1)
    ctx->pc = 0x21fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960556), GPR_U32(ctx, 4));
    // 0x21fa24: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
    // 0x21fa28: 0xacc0e5b0  sw          $zero, -0x1A50($a2)
    ctx->pc = 0x21fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960560), GPR_U32(ctx, 0));
    // 0x21fa2c: 0xace0e5a0  sw          $zero, -0x1A60($a3)
    ctx->pc = 0x21fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960544), GPR_U32(ctx, 0));
label_21fa30:
    // 0x21fa30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21fa30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21fa34:
    // 0x21fa34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fa38: 0x3e00008  jr          $ra
    ctx->pc = 0x21FA38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FA38u;
            // 0x21fa3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F95Cu: goto label_21f95c;
            case 0x21F98Cu: goto label_21f98c;
            case 0x21F9F8u: goto label_21f9f8;
            case 0x21FA0Cu: goto label_21fa0c;
            case 0x21FA30u: goto label_21fa30;
            case 0x21FA34u: goto label_21fa34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FA40u;
}
