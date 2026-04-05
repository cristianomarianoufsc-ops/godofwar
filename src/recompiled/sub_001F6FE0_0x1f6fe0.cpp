#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F6FE0
// Address: 0x1f6fe0 - 0x1f7078
void sub_001F6FE0_0x1f6fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6FE0_0x1f6fe0");
#endif

    ctx->pc = 0x1f6fe0u;

    // 0x1f6fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f6fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f6fe4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f6fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f6fe8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f6fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f6fec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f6fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ff0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f6ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f6ff4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f6ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6ffc: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x1f6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1f7000: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f7000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7004: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1f7004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1f7008: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1f7008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1f700c: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x1f700cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1f7010: 0xc045ada  jal         func_116B68
    ctx->pc = 0x1F7010u;
    SET_GPR_U32(ctx, 31, 0x1F7018u);
    ctx->pc = 0x1F7014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7010u;
            // 0x1f7014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B68u;
    if (runtime->hasFunction(0x116B68u)) {
        auto targetFn = runtime->lookupFunction(0x116B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7018u; }
        if (ctx->pc != 0x1F7018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116b68_0x116bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7018u; }
        if (ctx->pc != 0x1F7018u) { return; }
    }
    ctx->pc = 0x1F7018u;
    // 0x1f7018: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f7018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f701c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F701Cu;
    {
        const bool branch_taken_0x1f701c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F701Cu;
            // 0x1f7020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f701c) {
            ctx->pc = 0x1F7034u;
            goto label_1f7034;
        }
    }
    ctx->pc = 0x1F7024u;
    // 0x1f7024: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f7024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f7028: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1f7028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1f702c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F702Cu;
    {
        const bool branch_taken_0x1f702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F702Cu;
            // 0x1f7030: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f702c) {
            ctx->pc = 0x1F705Cu;
            goto label_1f705c;
        }
    }
    ctx->pc = 0x1F7034u;
label_1f7034:
    // 0x1f7034: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f7034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7038: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x1F7038u;
    SET_GPR_U32(ctx, 31, 0x1F7040u);
    ctx->pc = 0x1F703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7038u;
            // 0x1f703c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7040u; }
        if (ctx->pc != 0x1F7040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7040u; }
        if (ctx->pc != 0x1F7040u) { return; }
    }
    ctx->pc = 0x1F7040u;
    // 0x1f7040: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f7040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1f7044: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f7044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f7048: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7048u;
    {
        const bool branch_taken_0x1f7048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7048u;
            // 0x1f704c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7048) {
            ctx->pc = 0x1F7058u;
            goto label_1f7058;
        }
    }
    ctx->pc = 0x1F7050u;
    // 0x1f7050: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7050u;
    {
        const bool branch_taken_0x1f7050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7050u;
            // 0x1f7054: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7050) {
            ctx->pc = 0x1F7060u;
            goto label_1f7060;
        }
    }
    ctx->pc = 0x1F7058u;
label_1f7058:
    // 0x1f7058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f705c:
    // 0x1f705c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1f705cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1f7060:
    // 0x1f7060: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f7060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7064: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f7064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7068: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f7068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f706c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f706cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7070: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7070u;
            // 0x1f7074: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7034u: goto label_1f7034;
            case 0x1F7058u: goto label_1f7058;
            case 0x1F705Cu: goto label_1f705c;
            case 0x1F7060u: goto label_1f7060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7078u;
}
