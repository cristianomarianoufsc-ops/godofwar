#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292280
// Address: 0x292280 - 0x292390
void sub_00292280_0x292280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292280_0x292280");
#endif

    ctx->pc = 0x292280u;

    // 0x292280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x292280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x292284: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x292284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x292288: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x292288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x29228c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29228cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292290: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x292290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x292294: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x292294u;
    {
        const bool branch_taken_0x292294 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x292298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292294u;
            // 0x292298: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292294) {
            ctx->pc = 0x2922B8u;
            goto label_2922b8;
        }
    }
    ctx->pc = 0x29229Cu;
    // 0x29229c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29229cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2922a0: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2922a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2922a4: 0x8c444294  lw          $a0, 0x4294($v0)
    ctx->pc = 0x2922a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x2922a8: 0xc0a27d8  jal         func_289F60
    ctx->pc = 0x2922A8u;
    SET_GPR_U32(ctx, 31, 0x2922B0u);
    ctx->pc = 0x2922ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2922A8u;
            // 0x2922ac: 0x24a52280  addiu       $a1, $a1, 0x2280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289F60u;
    if (runtime->hasFunction(0x289F60u)) {
        auto targetFn = runtime->lookupFunction(0x289F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922B0u; }
        if (ctx->pc != 0x2922B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289f60_0x289ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922B0u; }
        if (ctx->pc != 0x2922B0u) { return; }
    }
    ctx->pc = 0x2922B0u;
    // 0x2922b0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2922B0u;
    {
        const bool branch_taken_0x2922b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2922B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2922B0u;
            // 0x2922b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922b0) {
            ctx->pc = 0x292378u;
            goto label_292378;
        }
    }
    ctx->pc = 0x2922B8u;
label_2922b8:
    // 0x2922b8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2922b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2922bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2922BCu;
    {
        const bool branch_taken_0x2922bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2922bc) {
            ctx->pc = 0x2922C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2922BCu;
            // 0x2922c0: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2922D8u;
            goto label_2922d8;
        }
    }
    ctx->pc = 0x2922C4u;
    // 0x2922c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2922c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2922c8: 0x8c434294  lw          $v1, 0x4294($v0)
    ctx->pc = 0x2922c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x2922cc: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x2922ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x2922d0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2922d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2922d4: 0x0  nop
    ctx->pc = 0x2922d4u;
    // NOP
label_2922d8:
    // 0x2922d8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2922d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2922dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2922DCu;
    {
        const bool branch_taken_0x2922dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2922dc) {
            ctx->pc = 0x2922E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2922DCu;
            // 0x2922e0: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2922F0u;
            goto label_2922f0;
        }
    }
    ctx->pc = 0x2922E4u;
    // 0x2922e4: 0xc0a48fe  jal         func_2923F8
    ctx->pc = 0x2922E4u;
    SET_GPR_U32(ctx, 31, 0x2922ECu);
    ctx->pc = 0x2923F8u;
    if (runtime->hasFunction(0x2923F8u)) {
        auto targetFn = runtime->lookupFunction(0x2923F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922ECu; }
        if (ctx->pc != 0x2922ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2923f8_0x292488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922ECu; }
        if (ctx->pc != 0x2922ECu) { return; }
    }
    ctx->pc = 0x2922ECu;
    // 0x2922ec: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x2922ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2922f0:
    // 0x2922f0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2922f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2922f4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2922F4u;
    {
        const bool branch_taken_0x2922f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2922F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2922F4u;
            // 0x2922f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922f4) {
            ctx->pc = 0x292374u;
            goto label_292374;
        }
    }
    ctx->pc = 0x2922FCu;
    // 0x2922fc: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x2922fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x292300: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292300u;
    {
        const bool branch_taken_0x292300 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x292300) {
            ctx->pc = 0x292304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292300u;
            // 0x292304: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292324u;
            goto label_292324;
        }
    }
    ctx->pc = 0x292308u;
    // 0x292308: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x292308u;
    {
        const bool branch_taken_0x292308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292308u;
            // 0x29230c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292308) {
            ctx->pc = 0x292378u;
            goto label_292378;
        }
    }
    ctx->pc = 0x292310u;
label_292310:
    // 0x292310: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x292310u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x292314: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x292314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x292318: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x292318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x29231c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29231Cu;
    {
        const bool branch_taken_0x29231c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29231Cu;
            // 0x292320: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29231c) {
            ctx->pc = 0x292374u;
            goto label_292374;
        }
    }
    ctx->pc = 0x292324u;
label_292324:
    // 0x292324: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x292324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x292328: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x292328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x29232c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292330: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x292330u;
    {
        const bool branch_taken_0x292330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x292334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292330u;
            // 0x292334: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292330) {
            ctx->pc = 0x29233Cu;
            goto label_29233c;
        }
    }
    ctx->pc = 0x292338u;
    // 0x292338: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x292338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_29233c:
    // 0x29233c: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x29233Cu;
    {
        const bool branch_taken_0x29233c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x292340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29233Cu;
            // 0x292340: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29233c) {
            ctx->pc = 0x292370u;
            goto label_292370;
        }
    }
    ctx->pc = 0x292344u;
    // 0x292344: 0x0  nop
    ctx->pc = 0x292344u;
    // NOP
label_292348:
    // 0x292348: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x292348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x29234c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29234cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292350: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x292350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x292354: 0x40f809  jalr        $v0
    ctx->pc = 0x292354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29235Cu);
        ctx->pc = 0x292358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292354u;
            // 0x292358: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29235Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2922B8u: goto label_2922b8;
            case 0x2922D8u: goto label_2922d8;
            case 0x2922F0u: goto label_2922f0;
            case 0x292310u: goto label_292310;
            case 0x292324u: goto label_292324;
            case 0x29233Cu: goto label_29233c;
            case 0x292348u: goto label_292348;
            case 0x292370u: goto label_292370;
            case 0x292374u: goto label_292374;
            case 0x292378u: goto label_292378;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29235Cu; }
            if (ctx->pc != 0x29235Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29235Cu;
    // 0x29235c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29235cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292360: 0x1860ffeb  blez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x292360u;
    {
        const bool branch_taken_0x292360 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x292364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292360u;
            // 0x292364: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292360) {
            ctx->pc = 0x292310u;
            runtime->cooperativeGuestYield();
            goto label_292310;
        }
    }
    ctx->pc = 0x292368u;
    // 0x292368: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x292368u;
    {
        const bool branch_taken_0x292368 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x29236Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292368u;
            // 0x29236c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292368) {
            ctx->pc = 0x292348u;
            runtime->cooperativeGuestYield();
            goto label_292348;
        }
    }
    ctx->pc = 0x292370u;
label_292370:
    // 0x292370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x292370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292374:
    // 0x292374: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x292374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_292378:
    // 0x292378: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x292378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29237c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29237cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292384: 0x3e00008  jr          $ra
    ctx->pc = 0x292384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292384u;
            // 0x292388: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2922B8u: goto label_2922b8;
            case 0x2922D8u: goto label_2922d8;
            case 0x2922F0u: goto label_2922f0;
            case 0x292310u: goto label_292310;
            case 0x292324u: goto label_292324;
            case 0x29233Cu: goto label_29233c;
            case 0x292348u: goto label_292348;
            case 0x292370u: goto label_292370;
            case 0x292374u: goto label_292374;
            case 0x292378u: goto label_292378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29238Cu;
    // 0x29238c: 0x0  nop
    ctx->pc = 0x29238cu;
    // NOP
}
