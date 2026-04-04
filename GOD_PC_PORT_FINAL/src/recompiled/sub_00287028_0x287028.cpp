#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00287028
// Address: 0x287028 - 0x287200
void sub_00287028_0x287028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287028_0x287028");
#endif

    ctx->pc = 0x287028u;

    // 0x287028: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x287028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    // 0x28702c: 0xffb60390  sd          $s6, 0x390($sp)
    ctx->pc = 0x28702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 22));
    // 0x287030: 0xffb703a0  sd          $s7, 0x3A0($sp)
    ctx->pc = 0x287030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 23));
    // 0x287034: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x287034u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287038: 0xffb20350  sd          $s2, 0x350($sp)
    ctx->pc = 0x287038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 18));
    // 0x28703c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x28703cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287040: 0xffbf03b0  sd          $ra, 0x3B0($sp)
    ctx->pc = 0x287040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 31));
    // 0x287044: 0xffb50380  sd          $s5, 0x380($sp)
    ctx->pc = 0x287044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 21));
    // 0x287048: 0xffb40370  sd          $s4, 0x370($sp)
    ctx->pc = 0x287048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 20));
    // 0x28704c: 0xffb30360  sd          $s3, 0x360($sp)
    ctx->pc = 0x28704cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 19));
    // 0x287050: 0xffb10340  sd          $s1, 0x340($sp)
    ctx->pc = 0x287050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 17));
    // 0x287054: 0xc0a1a80  jal         func_286A00
    ctx->pc = 0x287054u;
    SET_GPR_U32(ctx, 31, 0x28705Cu);
    ctx->pc = 0x287058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287054u;
            // 0x287058: 0xffb00330  sd          $s0, 0x330($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A00u;
    if (runtime->hasFunction(0x286A00u)) {
        auto targetFn = runtime->lookupFunction(0x286A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28705Cu; }
        if (ctx->pc != 0x28705Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A00_0x286a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28705Cu; }
        if (ctx->pc != 0x28705Cu) { return; }
    }
    ctx->pc = 0x28705Cu;
    // 0x28705c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28705cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287060: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x287060u;
    {
        const bool branch_taken_0x287060 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x287064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287060u;
            // 0x287064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287060) {
            ctx->pc = 0x28707Cu;
            goto label_28707c;
        }
    }
    ctx->pc = 0x287068u;
    // 0x287068: 0xc0a1aba  jal         func_286AE8
    ctx->pc = 0x287068u;
    SET_GPR_U32(ctx, 31, 0x287070u);
    ctx->pc = 0x28706Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287068u;
            // 0x28706c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286AE8u;
    if (runtime->hasFunction(0x286AE8u)) {
        auto targetFn = runtime->lookupFunction(0x286AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287070u; }
        if (ctx->pc != 0x287070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286AE8_0x286ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287070u; }
        if (ctx->pc != 0x287070u) { return; }
    }
    ctx->pc = 0x287070u;
    // 0x287070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287074: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287074u;
    {
        const bool branch_taken_0x287074 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x287078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287074u;
            // 0x287078: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287074) {
            ctx->pc = 0x287084u;
            goto label_287084;
        }
    }
    ctx->pc = 0x28707Cu;
label_28707c:
    // 0x28707c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x28707Cu;
    {
        const bool branch_taken_0x28707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28707Cu;
            // 0x287080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28707c) {
            ctx->pc = 0x2871D4u;
            goto label_2871d4;
        }
    }
    ctx->pc = 0x287084u;
label_287084:
    // 0x287084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x287084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287088: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28708c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x28708Cu;
    SET_GPR_U32(ctx, 31, 0x287094u);
    ctx->pc = 0x287090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28708Cu;
            // 0x287090: 0x240602f8  addiu       $a2, $zero, 0x2F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287094u; }
        if (ctx->pc != 0x287094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287094u; }
        if (ctx->pc != 0x287094u) { return; }
    }
    ctx->pc = 0x287094u;
    // 0x287094: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x287094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x287098: 0x97a40010  lhu         $a0, 0x10($sp)
    ctx->pc = 0x287098u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28709c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x28709cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2870a0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2870a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2870a4: 0xa7a402ba  sh          $a0, 0x2BA($sp)
    ctx->pc = 0x2870a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 698), (uint16_t)GPR_U32(ctx, 4));
    // 0x2870a8: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x2870a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2870ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2870acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2870b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2870b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2870b4: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x2870b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2870b8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2870b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2870bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2870BCu;
    {
        const bool branch_taken_0x2870bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2870BCu;
            // 0x2870c0: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870bc) {
            ctx->pc = 0x2870F8u;
            goto label_2870f8;
        }
    }
    ctx->pc = 0x2870C4u;
    // 0x2870c4: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x2870c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2870c8: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x2870c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x2870cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2870ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2870d0:
    // 0x2870d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2870d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2870d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870d8: 0xc0a1afc  jal         func_286BF0
    ctx->pc = 0x2870D8u;
    SET_GPR_U32(ctx, 31, 0x2870E0u);
    ctx->pc = 0x2870DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2870D8u;
            // 0x2870dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286BF0u;
    if (runtime->hasFunction(0x286BF0u)) {
        auto targetFn = runtime->lookupFunction(0x286BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2870E0u; }
        if (ctx->pc != 0x2870E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286BF0_0x286bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2870E0u; }
        if (ctx->pc != 0x2870E0u) { return; }
    }
    ctx->pc = 0x2870E0u;
    // 0x2870e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2870e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870e4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2870e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2870e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2870E8u;
    {
        const bool branch_taken_0x2870e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2870ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2870E8u;
            // 0x2870ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870e8) {
            ctx->pc = 0x2870D0u;
            runtime->cooperativeGuestYield();
            goto label_2870d0;
        }
    }
    ctx->pc = 0x2870F0u;
    // 0x2870f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2870F0u;
    {
        const bool branch_taken_0x2870f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2870F0u;
            // 0x2870f4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870f0) {
            ctx->pc = 0x287104u;
            goto label_287104;
        }
    }
    ctx->pc = 0x2870F8u;
label_2870f8:
    // 0x2870f8: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x2870f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2870fc: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x2870fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x287100: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x287100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_287104:
    // 0x287104: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x287104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x287108: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x287108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28710c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28710Cu;
    {
        const bool branch_taken_0x28710c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x287110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28710Cu;
            // 0x287110: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28710c) {
            ctx->pc = 0x287128u;
            goto label_287128;
        }
    }
    ctx->pc = 0x287114u;
    // 0x287114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287118: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x287118u;
    SET_GPR_U32(ctx, 31, 0x287120u);
    ctx->pc = 0x28711Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287118u;
            // 0x28711c: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287120u; }
        if (ctx->pc != 0x287120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287120u; }
        if (ctx->pc != 0x287120u) { return; }
    }
    ctx->pc = 0x287120u;
    // 0x287120: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x287120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x287124: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x287124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_287128:
    // 0x287128: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x287128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28712c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x28712cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x287130: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x287130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x287134: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x287134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x287138: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x287138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x28713c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28713Cu;
    {
        const bool branch_taken_0x28713c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28713Cu;
            // 0x287140: 0xafa50324  sw          $a1, 0x324($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28713c) {
            ctx->pc = 0x287184u;
            goto label_287184;
        }
    }
    ctx->pc = 0x287144u;
    // 0x287144: 0x2c5102b  sltu        $v0, $s6, $a1
    ctx->pc = 0x287144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x287148: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x287148u;
    {
        const bool branch_taken_0x287148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28714Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287148u;
            // 0x28714c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287148) {
            ctx->pc = 0x287188u;
            goto label_287188;
        }
    }
    ctx->pc = 0x287150u;
    // 0x287150: 0x27b20324  addiu       $s2, $sp, 0x324
    ctx->pc = 0x287150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
    // 0x287154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287158:
    // 0x287158: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x287158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28715c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28715cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287160: 0xc0a1afc  jal         func_286BF0
    ctx->pc = 0x287160u;
    SET_GPR_U32(ctx, 31, 0x287168u);
    ctx->pc = 0x287164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287160u;
            // 0x287164: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286BF0u;
    if (runtime->hasFunction(0x286BF0u)) {
        auto targetFn = runtime->lookupFunction(0x286BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287168u; }
        if (ctx->pc != 0x287168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286BF0_0x286bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287168u; }
        if (ctx->pc != 0x287168u) { return; }
    }
    ctx->pc = 0x287168u;
    // 0x287168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28716c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x28716cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x287170: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287170u;
    {
        const bool branch_taken_0x287170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287170u;
            // 0x287174: 0x8fa20324  lw          $v0, 0x324($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287170) {
            ctx->pc = 0x287184u;
            goto label_287184;
        }
    }
    ctx->pc = 0x287178u;
    // 0x287178: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x287178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28717c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x28717Cu;
    {
        const bool branch_taken_0x28717c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28717Cu;
            // 0x287180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28717c) {
            ctx->pc = 0x287158u;
            runtime->cooperativeGuestYield();
            goto label_287158;
        }
    }
    ctx->pc = 0x287184u;
label_287184:
    // 0x287184: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287188:
    // 0x287188: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x287188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28718c:
    // 0x28718c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x28718cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287190: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x287190u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x287194: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x287194u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x287198: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x287198u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x28719c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x28719cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2871a0: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x2871a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x2871a4: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x2871a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x2871a8: 0xfc470018  sd          $a3, 0x18($v0)
    ctx->pc = 0x2871a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 7));
    // 0x2871ac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2871acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2871b0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2871b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2871b4: 0x0  nop
    ctx->pc = 0x2871b4u;
    // NOP
    // 0x2871b8: 0x1495fff4  bne         $a0, $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x2871B8u;
    {
        const bool branch_taken_0x2871b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        if (branch_taken_0x2871b8) {
            ctx->pc = 0x28718Cu;
            runtime->cooperativeGuestYield();
            goto label_28718c;
        }
    }
    ctx->pc = 0x2871C0u;
    // 0x2871c0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2871c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2871c4: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x2871c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2871c8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2871c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2871cc: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x2871ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x2871d0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2871d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2871d4:
    // 0x2871d4: 0xdfbf03b0  ld          $ra, 0x3B0($sp)
    ctx->pc = 0x2871d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x2871d8: 0xdfb703a0  ld          $s7, 0x3A0($sp)
    ctx->pc = 0x2871d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x2871dc: 0xdfb60390  ld          $s6, 0x390($sp)
    ctx->pc = 0x2871dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x2871e0: 0xdfb50380  ld          $s5, 0x380($sp)
    ctx->pc = 0x2871e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x2871e4: 0xdfb40370  ld          $s4, 0x370($sp)
    ctx->pc = 0x2871e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x2871e8: 0xdfb30360  ld          $s3, 0x360($sp)
    ctx->pc = 0x2871e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x2871ec: 0xdfb20350  ld          $s2, 0x350($sp)
    ctx->pc = 0x2871ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x2871f0: 0xdfb10340  ld          $s1, 0x340($sp)
    ctx->pc = 0x2871f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2871f4: 0xdfb00330  ld          $s0, 0x330($sp)
    ctx->pc = 0x2871f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2871f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2871F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2871FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2871F8u;
            // 0x2871fc: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28707Cu: goto label_28707c;
            case 0x287084u: goto label_287084;
            case 0x2870D0u: goto label_2870d0;
            case 0x2870F8u: goto label_2870f8;
            case 0x287104u: goto label_287104;
            case 0x287128u: goto label_287128;
            case 0x287158u: goto label_287158;
            case 0x287184u: goto label_287184;
            case 0x287188u: goto label_287188;
            case 0x28718Cu: goto label_28718c;
            case 0x2871D4u: goto label_2871d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287200u;
}
