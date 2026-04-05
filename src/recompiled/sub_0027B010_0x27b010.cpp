#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B010
// Address: 0x27b010 - 0x27b0e8
void sub_0027B010_0x27b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B010_0x27b010");
#endif

    ctx->pc = 0x27b010u;

    // 0x27b010: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27b010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27b014: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27b014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27b018: 0x8c4332c8  lw          $v1, 0x32C8($v0)
    ctx->pc = 0x27b018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13000)));
    // 0x27b01c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27b01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27b020: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27b020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27b024: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x27B024u;
    {
        const bool branch_taken_0x27b024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B024u;
            // 0x27b028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b024) {
            ctx->pc = 0x27B0D8u;
            goto label_27b0d8;
        }
    }
    ctx->pc = 0x27B02Cu;
    // 0x27b02c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27b030: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x27b030u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x27b034: 0x24f0ac40  addiu       $s0, $a3, -0x53C0
    ctx->pc = 0x27b034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945856));
    // 0x27b038: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x27b038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x27b03c: 0xace2ac40  sw          $v0, -0x53C0($a3)
    ctx->pc = 0x27b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294945856), GPR_U32(ctx, 2));
    // 0x27b040: 0x26090014  addiu       $t1, $s0, 0x14
    ctx->pc = 0x27b040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x27b044: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x27b044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x27b048: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27b048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27b04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b050: 0xae06002c  sw          $a2, 0x2C($s0)
    ctx->pc = 0x27b050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
    // 0x27b054: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x27b054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x27b058: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x27b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27b05c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x27b060: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x27b060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x27b064: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x27b064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x27b068: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x27b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x27b06c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x27b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_27b070:
    // 0x27b070: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x27b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x27b074: 0x1252021  addu        $a0, $t1, $a1
    ctx->pc = 0x27b074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x27b078: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27b078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b07c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27b080: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x27b080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x27b084: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x27b084u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b088: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27B088u;
    {
        const bool branch_taken_0x27b088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b088) {
            ctx->pc = 0x27B070u;
            runtime->cooperativeGuestYield();
            goto label_27b070;
        }
    }
    ctx->pc = 0x27B090u;
    // 0x27b090: 0x24e7ac40  addiu       $a3, $a3, -0x53C0
    ctx->pc = 0x27b090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945856));
    // 0x27b094: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27b094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27b098: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x27b098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x27b09c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27b0a0: 0x2484ab48  addiu       $a0, $a0, -0x54B8
    ctx->pc = 0x27b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945608));
    // 0x27b0a4: 0x34a51301  ori         $a1, $a1, 0x1301
    ctx->pc = 0x27b0a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4865);
    // 0x27b0a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27b0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0ac: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x27b0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27b0b0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x27b0b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0b4: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x27b0b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27b0b8: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x27B0B8u;
    SET_GPR_U32(ctx, 31, 0x27B0C0u);
    ctx->pc = 0x27B0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B0B8u;
            // 0x27b0bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B0C0u; }
        if (ctx->pc != 0x27B0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B0C0u; }
        if (ctx->pc != 0x27B0C0u) { return; }
    }
    ctx->pc = 0x27B0C0u;
    // 0x27b0c0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B0C0u;
    {
        const bool branch_taken_0x27b0c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27b0c0) {
            ctx->pc = 0x27B0C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27B0C0u;
            // 0x27b0c4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27B0D8u;
            goto label_27b0d8;
        }
    }
    ctx->pc = 0x27B0C8u;
    // 0x27b0c8: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27b0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27b0cc: 0xc09edf0  jal         func_27B7C0
    ctx->pc = 0x27B0CCu;
    SET_GPR_U32(ctx, 31, 0x27B0D4u);
    ctx->pc = 0x27B0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B0CCu;
            // 0x27b0d0: 0x24844dc8  addiu       $a0, $a0, 0x4DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C0u;
    if (runtime->hasFunction(0x27B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B0D4u; }
        if (ctx->pc != 0x27B0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B7C0_0x27b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B0D4u; }
        if (ctx->pc != 0x27B0D4u) { return; }
    }
    ctx->pc = 0x27B0D4u;
    // 0x27b0d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b0d8:
    // 0x27b0d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27b0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b0dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b0dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x27B0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B0E0u;
            // 0x27b0e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B070u: goto label_27b070;
            case 0x27B0D8u: goto label_27b0d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27B0E8u;
}
