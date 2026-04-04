#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132088
// Address: 0x132088 - 0x132480
void sub_00132088_0x132088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132088_0x132088");
#endif

    ctx->pc = 0x132088u;

    // 0x132088: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x132088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x13208c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x13208cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x132090: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x132090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x132094: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x132094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132098: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x132098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x13209c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13209cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1320a0: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1320a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1320a4: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1320a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x1320a8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1320a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1320ac: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x1320acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1320b0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1320B0u;
    {
        const bool branch_taken_0x1320b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1320b0) {
            ctx->pc = 0x1320B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1320B0u;
            // 0x1320b4: 0x96620004  lhu         $v0, 0x4($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1320C4u;
            goto label_1320c4;
        }
    }
    ctx->pc = 0x1320B8u;
    // 0x1320b8: 0xc04c55c  jal         func_131570
    ctx->pc = 0x1320B8u;
    SET_GPR_U32(ctx, 31, 0x1320C0u);
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1320C0u; }
        if (ctx->pc != 0x1320C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1320C0u; }
        if (ctx->pc != 0x1320C0u) { return; }
    }
    ctx->pc = 0x1320C0u;
    // 0x1320c0: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x1320c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_1320c4:
    // 0x1320c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1320c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1320c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1320C8u;
    {
        const bool branch_taken_0x1320c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1320CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1320C8u;
            // 0x1320cc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320c8) {
            ctx->pc = 0x132100u;
            goto label_132100;
        }
    }
    ctx->pc = 0x1320D0u;
    // 0x1320d0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x1320d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1320d4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1320d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1320d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1320d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1320dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1320dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1320e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1320e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1320e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1320e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1320e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1320e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1320ec: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1320ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1320f0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1320f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1320f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1320F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1320FCu);
        ctx->pc = 0x1320F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1320F4u;
            // 0x1320f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1320FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1320C4u: goto label_1320c4;
            case 0x132100u: goto label_132100;
            case 0x132138u: goto label_132138;
            case 0x13213Cu: goto label_13213c;
            case 0x132150u: goto label_132150;
            case 0x132180u: goto label_132180;
            case 0x1321A0u: goto label_1321a0;
            case 0x1321B0u: goto label_1321b0;
            case 0x1321D0u: goto label_1321d0;
            case 0x1321E8u: goto label_1321e8;
            case 0x1321F8u: goto label_1321f8;
            case 0x132260u: goto label_132260;
            case 0x132264u: goto label_132264;
            case 0x132280u: goto label_132280;
            case 0x1322B0u: goto label_1322b0;
            case 0x1322E8u: goto label_1322e8;
            case 0x13230Cu: goto label_13230c;
            case 0x132328u: goto label_132328;
            case 0x1323A0u: goto label_1323a0;
            case 0x1323B0u: goto label_1323b0;
            case 0x1323D0u: goto label_1323d0;
            case 0x1323E0u: goto label_1323e0;
            case 0x132408u: goto label_132408;
            case 0x132414u: goto label_132414;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1320FCu; }
            if (ctx->pc != 0x1320FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1320FCu;
    // 0x1320fc: 0x0  nop
    ctx->pc = 0x1320fcu;
    // NOP
label_132100:
    // 0x132100: 0xc04c398  jal         func_130E60
    ctx->pc = 0x132100u;
    SET_GPR_U32(ctx, 31, 0x132108u);
    ctx->pc = 0x132104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132100u;
            // 0x132104: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130E60u;
    if (runtime->hasFunction(0x130E60u)) {
        auto targetFn = runtime->lookupFunction(0x130E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132108u; }
        if (ctx->pc != 0x132108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E60_0x130e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132108u; }
        if (ctx->pc != 0x132108u) { return; }
    }
    ctx->pc = 0x132108u;
    // 0x132108: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x132108u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x13210c: 0x2622ec58  addiu       $v0, $s1, -0x13A8
    ctx->pc = 0x13210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962264));
    // 0x132110: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x132110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x132114: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x132118: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x132118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13211c: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x13211cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x132120: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x132120u;
    {
        const bool branch_taken_0x132120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132120u;
            // 0x132124: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132120) {
            ctx->pc = 0x132138u;
            goto label_132138;
        }
    }
    ctx->pc = 0x132128u;
    // 0x132128: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x132128u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x13212c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13212Cu;
    {
        const bool branch_taken_0x13212c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13212Cu;
            // 0x132130: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13212c) {
            ctx->pc = 0x13213Cu;
            goto label_13213c;
        }
    }
    ctx->pc = 0x132134u;
    // 0x132134: 0x0  nop
    ctx->pc = 0x132134u;
    // NOP
label_132138:
    // 0x132138: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x132138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13213c:
    // 0x13213c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13213Cu;
    {
        const bool branch_taken_0x13213c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13213Cu;
            // 0x132140: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13213c) {
            ctx->pc = 0x132150u;
            goto label_132150;
        }
    }
    ctx->pc = 0x132144u;
    // 0x132144: 0xc055ac0  jal         func_156B00
    ctx->pc = 0x132144u;
    SET_GPR_U32(ctx, 31, 0x13214Cu);
    ctx->pc = 0x156B00u;
    if (runtime->hasFunction(0x156B00u)) {
        auto targetFn = runtime->lookupFunction(0x156B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13214Cu; }
        if (ctx->pc != 0x13214Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156B00_0x156b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13214Cu; }
        if (ctx->pc != 0x13214Cu) { return; }
    }
    ctx->pc = 0x13214Cu;
    // 0x13214c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13214cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_132150:
    // 0x132150: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x132150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132154: 0xc047e1c  jal         func_11F870
    ctx->pc = 0x132154u;
    SET_GPR_U32(ctx, 31, 0x13215Cu);
    ctx->pc = 0x132158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132154u;
            // 0x132158: 0x8c44e89c  lw          $a0, -0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F870u;
    if (runtime->hasFunction(0x11F870u)) {
        auto targetFn = runtime->lookupFunction(0x11F870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13215Cu; }
        if (ctx->pc != 0x13215Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F870_0x11f870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13215Cu; }
        if (ctx->pc != 0x13215Cu) { return; }
    }
    ctx->pc = 0x13215Cu;
    // 0x13215c: 0x2622ec58  addiu       $v0, $s1, -0x13A8
    ctx->pc = 0x13215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962264));
    // 0x132160: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x132160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x132164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x132168: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x132168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13216c: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x13216cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x132170: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x132170u;
    {
        const bool branch_taken_0x132170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x132174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132170u;
            // 0x132174: 0x2622ec58  addiu       $v0, $s1, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132170) {
            ctx->pc = 0x1321B0u;
            goto label_1321b0;
        }
    }
    ctx->pc = 0x132178u;
    // 0x132178: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x132178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x13217c: 0x0  nop
    ctx->pc = 0x13217cu;
    // NOP
label_132180:
    // 0x132180: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x132180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132184: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x132184u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x132188: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x132188u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x13218c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13218Cu;
    {
        const bool branch_taken_0x13218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13218c) {
            ctx->pc = 0x132190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13218Cu;
            // 0x132190: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1321A0u;
            goto label_1321a0;
        }
    }
    ctx->pc = 0x132194u;
    // 0x132194: 0xc056eae  jal         func_15BAB8
    ctx->pc = 0x132194u;
    SET_GPR_U32(ctx, 31, 0x13219Cu);
    ctx->pc = 0x15BAB8u;
    if (runtime->hasFunction(0x15BAB8u)) {
        auto targetFn = runtime->lookupFunction(0x15BAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13219Cu; }
        if (ctx->pc != 0x13219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BAB8_0x15bab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13219Cu; }
        if (ctx->pc != 0x13219Cu) { return; }
    }
    ctx->pc = 0x13219Cu;
    // 0x13219c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x13219cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1321a0:
    // 0x1321a0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1321A0u;
    {
        const bool branch_taken_0x1321a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1321A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1321A0u;
            // 0x1321a4: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1321a0) {
            ctx->pc = 0x132180u;
            runtime->cooperativeGuestYield();
            goto label_132180;
        }
    }
    ctx->pc = 0x1321A8u;
    // 0x1321a8: 0x2622ec58  addiu       $v0, $s1, -0x13A8
    ctx->pc = 0x1321a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962264));
    // 0x1321ac: 0x0  nop
    ctx->pc = 0x1321acu;
    // NOP
label_1321b0:
    // 0x1321b0: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1321b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1321b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1321b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1321b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1321b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1321bc: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1321bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1321c0: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1321C0u;
    {
        const bool branch_taken_0x1321c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1321c0) {
            ctx->pc = 0x1321C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1321C0u;
            // 0x1321c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1321E8u;
            goto label_1321e8;
        }
    }
    ctx->pc = 0x1321C8u;
    // 0x1321c8: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x1321c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1321cc: 0x0  nop
    ctx->pc = 0x1321ccu;
    // NOP
label_1321d0:
    // 0x1321d0: 0xc05c24e  jal         func_170938
    ctx->pc = 0x1321D0u;
    SET_GPR_U32(ctx, 31, 0x1321D8u);
    ctx->pc = 0x1321D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1321D0u;
            // 0x1321d4: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170938u;
    if (runtime->hasFunction(0x170938u)) {
        auto targetFn = runtime->lookupFunction(0x170938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1321D8u; }
        if (ctx->pc != 0x1321D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170938_0x170938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1321D8u; }
        if (ctx->pc != 0x1321D8u) { return; }
    }
    ctx->pc = 0x1321D8u;
    // 0x1321d8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1321d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1321dc: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1321DCu;
    {
        const bool branch_taken_0x1321dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1321E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1321DCu;
            // 0x1321e0: 0x2604ffec  addiu       $a0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1321dc) {
            ctx->pc = 0x1321D0u;
            runtime->cooperativeGuestYield();
            goto label_1321d0;
        }
    }
    ctx->pc = 0x1321E4u;
    // 0x1321e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1321e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1321e8:
    // 0x1321e8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1321e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1321ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1321ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1321f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1321f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1321f4: 0x0  nop
    ctx->pc = 0x1321f4u;
    // NOP
label_1321f8:
    // 0x1321f8: 0x0  nop
    ctx->pc = 0x1321f8u;
    // NOP
    // 0x1321fc: 0x0  nop
    ctx->pc = 0x1321fcu;
    // NOP
    // 0x132200: 0x0  nop
    ctx->pc = 0x132200u;
    // NOP
    // 0x132204: 0x0  nop
    ctx->pc = 0x132204u;
    // NOP
    // 0x132208: 0x0  nop
    ctx->pc = 0x132208u;
    // NOP
    // 0x13220c: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13220Cu;
    {
        const bool branch_taken_0x13220c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x13220c) {
            ctx->pc = 0x132210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13220Cu;
            // 0x132210: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1321F8u;
            runtime->cooperativeGuestYield();
            goto label_1321f8;
        }
    }
    ctx->pc = 0x132214u;
    // 0x132214: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x132214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x132218: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x132218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x13221c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13221Cu;
    {
        const bool branch_taken_0x13221c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13221Cu;
            // 0x132220: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13221c) {
            ctx->pc = 0x132260u;
            goto label_132260;
        }
    }
    ctx->pc = 0x132224u;
    // 0x132224: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x132224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132228: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x132228u;
    {
        const bool branch_taken_0x132228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132228u;
            // 0x13222c: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132228) {
            ctx->pc = 0x132264u;
            goto label_132264;
        }
    }
    ctx->pc = 0x132230u;
    // 0x132230: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x132230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x132234: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x132234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x132238: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x132238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13223c: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x13223cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x132240: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x132240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x132244: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x132244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x132248: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x132248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13224c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x132250: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x132250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x132254: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x132254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132258: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x132258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x13225c: 0x0  nop
    ctx->pc = 0x13225cu;
    // NOP
label_132260:
    // 0x132260: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x132260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_132264:
    // 0x132264: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x132264u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x132268: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x132268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13226c: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x13226Cu;
    {
        const bool branch_taken_0x13226c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13226c) {
            ctx->pc = 0x132270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13226Cu;
            // 0x132270: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1323B0u;
            goto label_1323b0;
        }
    }
    ctx->pc = 0x132274u;
    // 0x132274: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x132274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x132278: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x132278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13227c: 0x0  nop
    ctx->pc = 0x13227cu;
    // NOP
label_132280:
    // 0x132280: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x132280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x132284: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x132284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x132288: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x132288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13228c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132290: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x132290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x132294: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x132294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132298: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x132298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13229c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1322a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1322a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1322a4: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1322A4u;
    {
        const bool branch_taken_0x1322a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1322A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1322A4u;
            // 0x1322a8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322a4) {
            ctx->pc = 0x1322E8u;
            goto label_1322e8;
        }
    }
    ctx->pc = 0x1322ACu;
    // 0x1322ac: 0x0  nop
    ctx->pc = 0x1322acu;
    // NOP
label_1322b0:
    // 0x1322b0: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x1322b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x1322b4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1322b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1322b8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1322b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1322bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1322bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1322c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1322C0u;
    {
        const bool branch_taken_0x1322c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1322C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1322C0u;
            // 0x1322c4: 0xacc30080  sw          $v1, 0x80($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322c0) {
            ctx->pc = 0x1322E8u;
            goto label_1322e8;
        }
    }
    ctx->pc = 0x1322C8u;
    // 0x1322c8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1322c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1322cc: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x1322ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1322d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1322d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1322d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1322d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1322d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1322d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1322dc: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1322DCu;
    {
        const bool branch_taken_0x1322dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1322E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1322DCu;
            // 0x1322e0: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322dc) {
            ctx->pc = 0x1322B0u;
            runtime->cooperativeGuestYield();
            goto label_1322b0;
        }
    }
    ctx->pc = 0x1322E4u;
    // 0x1322e4: 0x0  nop
    ctx->pc = 0x1322e4u;
    // NOP
label_1322e8:
    // 0x1322e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1322e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1322ec: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1322ECu;
    {
        const bool branch_taken_0x1322ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1322F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1322ECu;
            // 0x1322f0: 0xacc00084  sw          $zero, 0x84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322ec) {
            ctx->pc = 0x1323A0u;
            goto label_1323a0;
        }
    }
    ctx->pc = 0x1322F4u;
    // 0x1322f4: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1322f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1322f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1322f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1322fc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1322FCu;
    {
        const bool branch_taken_0x1322fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x132300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1322FCu;
            // 0x132300: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322fc) {
            ctx->pc = 0x13230Cu;
            goto label_13230c;
        }
    }
    ctx->pc = 0x132304u;
    // 0x132304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x132304u;
    {
        const bool branch_taken_0x132304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132304u;
            // 0x132308: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132304) {
            ctx->pc = 0x132328u;
            goto label_132328;
        }
    }
    ctx->pc = 0x13230Cu;
label_13230c:
    // 0x13230c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x13230cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x132310: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x132310u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x132314: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x132314u;
    {
        const bool branch_taken_0x132314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x132318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132314u;
            // 0x132318: 0x26030070  addiu       $v1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132314) {
            ctx->pc = 0x132328u;
            goto label_132328;
        }
    }
    ctx->pc = 0x13231Cu;
    // 0x13231c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x13231Cu;
    SET_GPR_U32(ctx, 31, 0x132324u);
    ctx->pc = 0x132320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13231Cu;
            // 0x132320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132324u; }
        if (ctx->pc != 0x132324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132324u; }
        if (ctx->pc != 0x132324u) { return; }
    }
    ctx->pc = 0x132324u;
    // 0x132324: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x132324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_132328:
    // 0x132328: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x132328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13232c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132334: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x132334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x132338: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x132338u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13233c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x13233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x132340: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x132340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x132344: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x132344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x132348: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x132348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13234c: 0xc04c55c  jal         func_131570
    ctx->pc = 0x13234Cu;
    SET_GPR_U32(ctx, 31, 0x132354u);
    ctx->pc = 0x132350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13234Cu;
            // 0x132350: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132354u; }
        if (ctx->pc != 0x132354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132354u; }
        if (ctx->pc != 0x132354u) { return; }
    }
    ctx->pc = 0x132354u;
    // 0x132354: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x132354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x132358: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x132358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x13235c: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x13235cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x132360: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x132360u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x132364: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x132364u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x132368: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x132368u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x13236c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x13236cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x132370: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x132370u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x132374: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x132374u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x132378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13237c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x13237cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x132380: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132384: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x132384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x132388: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x132388u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x13238c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x13238cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x132390: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x132390u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x132394: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x132394u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x132398: 0xfe030068  sd          $v1, 0x68($s0)
    ctx->pc = 0x132398u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 3));
    // 0x13239c: 0x0  nop
    ctx->pc = 0x13239cu;
    // NOP
label_1323a0:
    // 0x1323a0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1323a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1323a4: 0x441ffb6  bgez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1323A4u;
    {
        const bool branch_taken_0x1323a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1323A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1323A4u;
            // 0x1323a8: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323a4) {
            ctx->pc = 0x132280u;
            runtime->cooperativeGuestYield();
            goto label_132280;
        }
    }
    ctx->pc = 0x1323ACu;
    // 0x1323ac: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1323acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1323b0:
    // 0x1323b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1323b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323b4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1323b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1323b8: 0xc08c85c  jal         func_232170
    ctx->pc = 0x1323B8u;
    SET_GPR_U32(ctx, 31, 0x1323C0u);
    ctx->pc = 0x1323BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1323B8u;
            // 0x1323bc: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232170u;
    if (runtime->hasFunction(0x232170u)) {
        auto targetFn = runtime->lookupFunction(0x232170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1323C0u; }
        if (ctx->pc != 0x1323C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232170_0x232170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1323C0u; }
        if (ctx->pc != 0x1323C0u) { return; }
    }
    ctx->pc = 0x1323C0u;
    // 0x1323c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1323c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1323c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323c8: 0x267100c0  addiu       $s1, $s3, 0xC0
    ctx->pc = 0x1323c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x1323cc: 0x0  nop
    ctx->pc = 0x1323ccu;
    // NOP
label_1323d0:
    // 0x1323d0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1323d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1323d4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1323D4u;
    {
        const bool branch_taken_0x1323d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1323d4) {
            ctx->pc = 0x1323D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1323D4u;
            // 0x1323d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132414u;
            goto label_132414;
        }
    }
    ctx->pc = 0x1323DCu;
    // 0x1323dc: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x1323dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_1323e0:
    // 0x1323e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1323e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323e4: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x1323e4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1323e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1323e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1323ec: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1323ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1323f0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1323F0u;
    {
        const bool branch_taken_0x1323f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1323f0) {
            ctx->pc = 0x1323F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1323F0u;
            // 0x1323f4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132408u;
            goto label_132408;
        }
    }
    ctx->pc = 0x1323F8u;
    // 0x1323f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1323f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323fc: 0xc0402de  jal         func_100B78
    ctx->pc = 0x1323FCu;
    SET_GPR_U32(ctx, 31, 0x132404u);
    ctx->pc = 0x132400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1323FCu;
            // 0x132400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100B78u;
    if (runtime->hasFunction(0x100B78u)) {
        auto targetFn = runtime->lookupFunction(0x100B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132404u; }
        if (ctx->pc != 0x132404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100B78_0x100b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132404u; }
        if (ctx->pc != 0x132404u) { return; }
    }
    ctx->pc = 0x132404u;
    // 0x132404: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x132404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_132408:
    // 0x132408: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x132408u;
    {
        const bool branch_taken_0x132408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13240Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132408u;
            // 0x13240c: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132408) {
            ctx->pc = 0x1323E0u;
            runtime->cooperativeGuestYield();
            goto label_1323e0;
        }
    }
    ctx->pc = 0x132410u;
    // 0x132410: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x132410u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_132414:
    // 0x132414: 0x2e82000d  sltiu       $v0, $s4, 0xD
    ctx->pc = 0x132414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x132418: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x132418u;
    {
        const bool branch_taken_0x132418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13241Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132418u;
            // 0x13241c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132418) {
            ctx->pc = 0x1323D0u;
            runtime->cooperativeGuestYield();
            goto label_1323d0;
        }
    }
    ctx->pc = 0x132420u;
    // 0x132420: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x132420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x132424: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x132424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x132428: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x132428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x13242c: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x13242cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x132430: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x132434: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x132434u;
    SET_GPR_U32(ctx, 31, 0x13243Cu);
    ctx->pc = 0x132438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132434u;
            // 0x132438: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13243Cu; }
        if (ctx->pc != 0x13243Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13243Cu; }
        if (ctx->pc != 0x13243Cu) { return; }
    }
    ctx->pc = 0x13243Cu;
    // 0x13243c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13243cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x132440: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x132440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x132444: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x132444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x132448: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x132448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13244c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x13244cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x132450: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x132450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x132454: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x132454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x132458: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x132458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x13245c: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x13245cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x132460: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x132460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x132464: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x132464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x132468: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x132468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13246c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x13246cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x132470: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x132470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x132474: 0x3e00008  jr          $ra
    ctx->pc = 0x132474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132474u;
            // 0x132478: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1320C4u: goto label_1320c4;
            case 0x132100u: goto label_132100;
            case 0x132138u: goto label_132138;
            case 0x13213Cu: goto label_13213c;
            case 0x132150u: goto label_132150;
            case 0x132180u: goto label_132180;
            case 0x1321A0u: goto label_1321a0;
            case 0x1321B0u: goto label_1321b0;
            case 0x1321D0u: goto label_1321d0;
            case 0x1321E8u: goto label_1321e8;
            case 0x1321F8u: goto label_1321f8;
            case 0x132260u: goto label_132260;
            case 0x132264u: goto label_132264;
            case 0x132280u: goto label_132280;
            case 0x1322B0u: goto label_1322b0;
            case 0x1322E8u: goto label_1322e8;
            case 0x13230Cu: goto label_13230c;
            case 0x132328u: goto label_132328;
            case 0x1323A0u: goto label_1323a0;
            case 0x1323B0u: goto label_1323b0;
            case 0x1323D0u: goto label_1323d0;
            case 0x1323E0u: goto label_1323e0;
            case 0x132408u: goto label_132408;
            case 0x132414u: goto label_132414;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13247Cu;
    // 0x13247c: 0x0  nop
    ctx->pc = 0x13247cu;
    // NOP
}
