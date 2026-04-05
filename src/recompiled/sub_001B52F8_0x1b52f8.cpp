#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B52F8
// Address: 0x1b52f8 - 0x1b53e0
void sub_001B52F8_0x1b52f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B52F8_0x1b52f8");
#endif

    ctx->pc = 0x1b52f8u;

    // 0x1b52f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b52f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b52fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b52fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b5300: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b5300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b5304: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b5304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5308: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b5308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b530c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b530cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5314: 0x922201a1  lbu         $v0, 0x1A1($s1)
    ctx->pc = 0x1b5314u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1b5318: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B5318u;
    {
        const bool branch_taken_0x1b5318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B531Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5318u;
            // 0x1b531c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5318) {
            ctx->pc = 0x1B536Cu;
            goto label_1b536c;
        }
    }
    ctx->pc = 0x1B5320u;
    // 0x1b5320: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b5320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b5324: 0x0  nop
    ctx->pc = 0x1b5324u;
    // NOP
label_1b5328:
    // 0x1b5328: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b5328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b532c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1b532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b5330: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b5330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b5334: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1b5334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1b5338: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1b5338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1b533c: 0x40f809  jalr        $v0
    ctx->pc = 0x1B533Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5344u);
        ctx->pc = 0x1B5340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B533Cu;
            // 0x1b5340: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5344u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5328u: goto label_1b5328;
            case 0x1B5354u: goto label_1b5354;
            case 0x1B536Cu: goto label_1b536c;
            case 0x1B5380u: goto label_1b5380;
            case 0x1B53ACu: goto label_1b53ac;
            case 0x1B53C4u: goto label_1b53c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5344u; }
            if (ctx->pc != 0x1B5344u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5344u;
    // 0x1b5344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5344u;
    {
        const bool branch_taken_0x1b5344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5344u;
            // 0x1b5348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5344) {
            ctx->pc = 0x1B5354u;
            goto label_1b5354;
        }
    }
    ctx->pc = 0x1B534Cu;
    // 0x1b534c: 0xc07fd12  jal         func_1FF448
    ctx->pc = 0x1B534Cu;
    SET_GPR_U32(ctx, 31, 0x1B5354u);
    ctx->pc = 0x1B5350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B534Cu;
            // 0x1b5350: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF448u;
    if (runtime->hasFunction(0x1FF448u)) {
        auto targetFn = runtime->lookupFunction(0x1FF448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5354u; }
        if (ctx->pc != 0x1B5354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF448_0x1ff448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5354u; }
        if (ctx->pc != 0x1B5354u) { return; }
    }
    ctx->pc = 0x1B5354u;
label_1b5354:
    // 0x1b5354: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1b5354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b5358: 0x922201a1  lbu         $v0, 0x1A1($s1)
    ctx->pc = 0x1b5358u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1b535c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1b535cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b5360: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1b5360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b5364: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B5364u;
    {
        const bool branch_taken_0x1b5364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5364u;
            // 0x1b5368: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5364) {
            ctx->pc = 0x1B5328u;
            runtime->cooperativeGuestYield();
            goto label_1b5328;
        }
    }
    ctx->pc = 0x1B536Cu;
label_1b536c:
    // 0x1b536c: 0x922201a0  lbu         $v0, 0x1A0($s1)
    ctx->pc = 0x1b536cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1b5370: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B5370u;
    {
        const bool branch_taken_0x1b5370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5370u;
            // 0x1b5374: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5370) {
            ctx->pc = 0x1B53C4u;
            goto label_1b53c4;
        }
    }
    ctx->pc = 0x1B5378u;
    // 0x1b5378: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b5378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b537c: 0x0  nop
    ctx->pc = 0x1b537cu;
    // NOP
label_1b5380:
    // 0x1b5380: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b5380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b5384: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x1b5384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1b5388: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b5388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b538c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1b538cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1b5390: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1b5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1b5394: 0x40f809  jalr        $v0
    ctx->pc = 0x1B5394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B539Cu);
        ctx->pc = 0x1B5398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5394u;
            // 0x1b5398: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B539Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5328u: goto label_1b5328;
            case 0x1B5354u: goto label_1b5354;
            case 0x1B536Cu: goto label_1b536c;
            case 0x1B5380u: goto label_1b5380;
            case 0x1B53ACu: goto label_1b53ac;
            case 0x1B53C4u: goto label_1b53c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B539Cu; }
            if (ctx->pc != 0x1B539Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B539Cu;
    // 0x1b539c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B539Cu;
    {
        const bool branch_taken_0x1b539c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B539Cu;
            // 0x1b53a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b539c) {
            ctx->pc = 0x1B53ACu;
            goto label_1b53ac;
        }
    }
    ctx->pc = 0x1B53A4u;
    // 0x1b53a4: 0xc07fd12  jal         func_1FF448
    ctx->pc = 0x1B53A4u;
    SET_GPR_U32(ctx, 31, 0x1B53ACu);
    ctx->pc = 0x1B53A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53A4u;
            // 0x1b53a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF448u;
    if (runtime->hasFunction(0x1FF448u)) {
        auto targetFn = runtime->lookupFunction(0x1FF448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53ACu; }
        if (ctx->pc != 0x1B53ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF448_0x1ff448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53ACu; }
        if (ctx->pc != 0x1B53ACu) { return; }
    }
    ctx->pc = 0x1B53ACu;
label_1b53ac:
    // 0x1b53ac: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1b53acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b53b0: 0x922201a0  lbu         $v0, 0x1A0($s1)
    ctx->pc = 0x1b53b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1b53b4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1b53b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b53b8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1b53b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b53bc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B53BCu;
    {
        const bool branch_taken_0x1b53bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B53C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53BCu;
            // 0x1b53c0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53bc) {
            ctx->pc = 0x1B5380u;
            runtime->cooperativeGuestYield();
            goto label_1b5380;
        }
    }
    ctx->pc = 0x1B53C4u;
label_1b53c4:
    // 0x1b53c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b53c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b53c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b53c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b53cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b53ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b53d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b53d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b53d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B53D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B53D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53D4u;
            // 0x1b53d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5328u: goto label_1b5328;
            case 0x1B5354u: goto label_1b5354;
            case 0x1B536Cu: goto label_1b536c;
            case 0x1B5380u: goto label_1b5380;
            case 0x1B53ACu: goto label_1b53ac;
            case 0x1B53C4u: goto label_1b53c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B53DCu;
    // 0x1b53dc: 0x0  nop
    ctx->pc = 0x1b53dcu;
    // NOP
}
