#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F7E0
// Address: 0x20f7e0 - 0x20f990
void sub_0020F7E0_0x20f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F7E0_0x20f7e0");
#endif

    ctx->pc = 0x20f7e0u;

    // 0x20f7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20f7e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20f7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x20f7e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f7ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20f7f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20f7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20f7f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20f7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f7fc: 0xc07841e  jal         func_1E1078
    ctx->pc = 0x20F7FCu;
    SET_GPR_U32(ctx, 31, 0x20F804u);
    ctx->pc = 0x20F800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F7FCu;
            // 0x20f800: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1078u;
    if (runtime->hasFunction(0x1E1078u)) {
        auto targetFn = runtime->lookupFunction(0x1E1078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F804u; }
        if (ctx->pc != 0x20F804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1078_0x1e1078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F804u; }
        if (ctx->pc != 0x20F804u) { return; }
    }
    ctx->pc = 0x20F804u;
    // 0x20f804: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20f804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20f808: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x20f808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x20f80c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x20f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x20f810: 0x24429490  addiu       $v0, $v0, -0x6B70
    ctx->pc = 0x20f810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939792));
    // 0x20f814: 0x8c84cb08  lw          $a0, -0x34F8($a0)
    ctx->pc = 0x20f814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953736)));
    // 0x20f818: 0x24639590  addiu       $v1, $v1, -0x6A70
    ctx->pc = 0x20f818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940048));
    // 0x20f81c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x20f820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f824: 0xae030294  sw          $v1, 0x294($s0)
    ctx->pc = 0x20f824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
    // 0x20f828: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F828u;
    {
        const bool branch_taken_0x20f828 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F828u;
            // 0x20f82c: 0xae000290  sw          $zero, 0x290($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f828) {
            ctx->pc = 0x20F840u;
            goto label_20f840;
        }
    }
    ctx->pc = 0x20F830u;
    // 0x20f830: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20f830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20f834: 0x8c421200  lw          $v0, 0x1200($v0)
    ctx->pc = 0x20f834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4608)));
    // 0x20f838: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F838u;
    {
        const bool branch_taken_0x20f838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f838) {
            ctx->pc = 0x20F83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20F838u;
            // 0x20f83c: 0xa206029b  sb          $a2, 0x29B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 667), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20F848u;
            goto label_20f848;
        }
    }
    ctx->pc = 0x20F840u;
label_20f840:
    // 0x20f840: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f844: 0xa206029b  sb          $a2, 0x29B($s0)
    ctx->pc = 0x20f844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 667), (uint8_t)GPR_U32(ctx, 6));
label_20f848:
    // 0x20f848: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20f848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f84c: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x20f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x20f850: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20f850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f854: 0xc083bfe  jal         func_20EFF8
    ctx->pc = 0x20F854u;
    SET_GPR_U32(ctx, 31, 0x20F85Cu);
    ctx->pc = 0x20F858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F854u;
            // 0x20f858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EFF8u;
    if (runtime->hasFunction(0x20EFF8u)) {
        auto targetFn = runtime->lookupFunction(0x20EFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F85Cu; }
        if (ctx->pc != 0x20F85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020EFF8_0x20eff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F85Cu; }
        if (ctx->pc != 0x20F85Cu) { return; }
    }
    ctx->pc = 0x20F85Cu;
    // 0x20f85c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20f85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f860: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20f860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f864: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20f864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f868: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20f868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f870: 0x3e00008  jr          $ra
    ctx->pc = 0x20F870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F870u;
            // 0x20f874: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F840u: goto label_20f840;
            case 0x20F848u: goto label_20f848;
            case 0x20F8F0u: goto label_20f8f0;
            case 0x20F920u: goto label_20f920;
            case 0x20F940u: goto label_20f940;
            case 0x20F97Cu: goto label_20f97c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F878u;
    // 0x20f878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f87c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20f880: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20f884: 0x24429490  addiu       $v0, $v0, -0x6B70
    ctx->pc = 0x20f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939792));
    // 0x20f888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20f88c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f894: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20f894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x20f898: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x20f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x20f89c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x20F89Cu;
    {
        const bool branch_taken_0x20f89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F89Cu;
            // 0x20f8a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f89c) {
            ctx->pc = 0x20F920u;
            goto label_20f920;
        }
    }
    ctx->pc = 0x20F8A4u;
    // 0x20f8a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20f8a8: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x20F8A8u;
    SET_GPR_U32(ctx, 31, 0x20F8B0u);
    ctx->pc = 0x20F8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F8A8u;
            // 0x20f8ac: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F8B0u; }
        if (ctx->pc != 0x20F8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F8B0u; }
        if (ctx->pc != 0x20F8B0u) { return; }
    }
    ctx->pc = 0x20F8B0u;
    // 0x20f8b0: 0x8e0501a4  lw          $a1, 0x1A4($s0)
    ctx->pc = 0x20f8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x20f8b4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x20f8b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20f8b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20f8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20f8bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20F8BCu;
    {
        const bool branch_taken_0x20f8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F8BCu;
            // 0x20f8c0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8bc) {
            ctx->pc = 0x20F8F0u;
            goto label_20f8f0;
        }
    }
    ctx->pc = 0x20F8C4u;
    // 0x20f8c4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20f8c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20f8c8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x20f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x20f8cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f8d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f8d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f8d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20f8dc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x20f8dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x20f8e0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x20f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x20f8e4: 0x40f809  jalr        $v0
    ctx->pc = 0x20F8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F8ECu);
        ctx->pc = 0x20F8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F8E4u;
            // 0x20f8e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F8ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F840u: goto label_20f840;
            case 0x20F848u: goto label_20f848;
            case 0x20F8F0u: goto label_20f8f0;
            case 0x20F920u: goto label_20f920;
            case 0x20F940u: goto label_20f940;
            case 0x20F97Cu: goto label_20f97c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F8ECu; }
            if (ctx->pc != 0x20F8ECu) { return; }
        }
        }
    }
    ctx->pc = 0x20F8ECu;
    // 0x20f8ec: 0x8e0501a4  lw          $a1, 0x1A4($s0)
    ctx->pc = 0x20f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_20f8f0:
    // 0x20f8f0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20f8f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20f8f4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20f8f8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x20f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x20f8fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f900: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20f904: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20f904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20f908: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20f908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20f90c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x20f90cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f910: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x20f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x20f914: 0x40f809  jalr        $v0
    ctx->pc = 0x20F914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F91Cu);
        ctx->pc = 0x20F918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F914u;
            // 0x20f918: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F91Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F840u: goto label_20f840;
            case 0x20F848u: goto label_20f848;
            case 0x20F8F0u: goto label_20f8f0;
            case 0x20F920u: goto label_20f920;
            case 0x20F940u: goto label_20f940;
            case 0x20F97Cu: goto label_20f97c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F91Cu; }
            if (ctx->pc != 0x20F91Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20F91Cu;
    // 0x20f91c: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x20f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
label_20f920:
    // 0x20f920: 0x8e03028c  lw          $v1, 0x28C($s0)
    ctx->pc = 0x20f920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x20f924: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20F924u;
    {
        const bool branch_taken_0x20f924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F924u;
            // 0x20f928: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f924) {
            ctx->pc = 0x20F940u;
            goto label_20f940;
        }
    }
    ctx->pc = 0x20F92Cu;
    // 0x20f92c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x20f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x20f930: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x20f930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20f934: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x20f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x20f938: 0x40f809  jalr        $v0
    ctx->pc = 0x20F938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F940u);
        ctx->pc = 0x20F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F938u;
            // 0x20f93c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F940u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F840u: goto label_20f840;
            case 0x20F848u: goto label_20f848;
            case 0x20F8F0u: goto label_20f8f0;
            case 0x20F920u: goto label_20f920;
            case 0x20F940u: goto label_20f940;
            case 0x20F97Cu: goto label_20f97c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F940u; }
            if (ctx->pc != 0x20F940u) { return; }
        }
        }
    }
    ctx->pc = 0x20F940u;
label_20f940:
    // 0x20f940: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20f940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20f944: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x20f944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x20f948: 0x24429590  addiu       $v0, $v0, -0x6A70
    ctx->pc = 0x20f948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940048));
    // 0x20f94c: 0x2463a670  addiu       $v1, $v1, -0x5990
    ctx->pc = 0x20f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944368));
    // 0x20f950: 0xae020294  sw          $v0, 0x294($s0)
    ctx->pc = 0x20f950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
    // 0x20f954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f958: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x20f958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x20f95c: 0xc077a14  jal         func_1DE850
    ctx->pc = 0x20F95Cu;
    SET_GPR_U32(ctx, 31, 0x20F964u);
    ctx->pc = 0x20F960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F95Cu;
            // 0x20f960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE850u;
    if (runtime->hasFunction(0x1DE850u)) {
        auto targetFn = runtime->lookupFunction(0x1DE850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F964u; }
        if (ctx->pc != 0x20F964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE850_0x1de850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F964u; }
        if (ctx->pc != 0x20F964u) { return; }
    }
    ctx->pc = 0x20F964u;
    // 0x20f964: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x20f964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x20f968: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F968u;
    {
        const bool branch_taken_0x20f968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f968) {
            ctx->pc = 0x20F96Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20F968u;
            // 0x20f96c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20F97Cu;
            goto label_20f97c;
        }
    }
    ctx->pc = 0x20F970u;
    // 0x20f970: 0xc083b76  jal         func_20EDD8
    ctx->pc = 0x20F970u;
    SET_GPR_U32(ctx, 31, 0x20F978u);
    ctx->pc = 0x20F974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F970u;
            // 0x20f974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EDD8u;
    if (runtime->hasFunction(0x20EDD8u)) {
        auto targetFn = runtime->lookupFunction(0x20EDD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F978u; }
        if (ctx->pc != 0x20F978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20edd8_0x20ee00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F978u; }
        if (ctx->pc != 0x20F978u) { return; }
    }
    ctx->pc = 0x20F978u;
    // 0x20f978: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20f978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f97c:
    // 0x20f97c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20f97cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f984: 0x3e00008  jr          $ra
    ctx->pc = 0x20F984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F984u;
            // 0x20f988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F840u: goto label_20f840;
            case 0x20F848u: goto label_20f848;
            case 0x20F8F0u: goto label_20f8f0;
            case 0x20F920u: goto label_20f920;
            case 0x20F940u: goto label_20f940;
            case 0x20F97Cu: goto label_20f97c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F98Cu;
    // 0x20f98c: 0x0  nop
    ctx->pc = 0x20f98cu;
    // NOP
}
