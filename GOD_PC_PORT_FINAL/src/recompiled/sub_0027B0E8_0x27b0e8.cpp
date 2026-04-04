#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B0E8
// Address: 0x27b0e8 - 0x27b170
void sub_0027B0E8_0x27b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B0E8_0x27b0e8");
#endif

    ctx->pc = 0x27b0e8u;

    // 0x27b0e8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x27b0ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27b0ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27b0f0: 0x8c6232c8  lw          $v0, 0x32C8($v1)
    ctx->pc = 0x27b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13000)));
    // 0x27b0f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27b0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27b0fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B0FCu;
    {
        const bool branch_taken_0x27b0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B0FCu;
            // 0x27b100: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0fc) {
            ctx->pc = 0x27B10Cu;
            goto label_27b10c;
        }
    }
    ctx->pc = 0x27B104u;
    // 0x27b104: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27B104u;
    {
        const bool branch_taken_0x27b104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B104u;
            // 0x27b108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b104) {
            ctx->pc = 0x27B160u;
            goto label_27b160;
        }
    }
    ctx->pc = 0x27B10Cu;
label_27b10c:
    // 0x27b10c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27b110: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x27b110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x27b114: 0x2450ac40  addiu       $s0, $v0, -0x53C0
    ctx->pc = 0x27b114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945856));
    // 0x27b118: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27b118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27b11c: 0xac46ac40  sw          $a2, -0x53C0($v0)
    ctx->pc = 0x27b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945856), GPR_U32(ctx, 6));
    // 0x27b120: 0x2484ab48  addiu       $a0, $a0, -0x54B8
    ctx->pc = 0x27b120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945608));
    // 0x27b124: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27b124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27b128: 0x34a51302  ori         $a1, $a1, 0x1302
    ctx->pc = 0x27b128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4866);
    // 0x27b12c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27b12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b130: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27b130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b134: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x27b134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27b138: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x27b138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b13c: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x27b13cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27b140: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x27B140u;
    SET_GPR_U32(ctx, 31, 0x27B148u);
    ctx->pc = 0x27B144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B140u;
            // 0x27b144: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B148u; }
        if (ctx->pc != 0x27B148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B148u; }
        if (ctx->pc != 0x27B148u) { return; }
    }
    ctx->pc = 0x27B148u;
    // 0x27b148: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B148u;
    {
        const bool branch_taken_0x27b148 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27b148) {
            ctx->pc = 0x27B14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27B148u;
            // 0x27b14c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27B160u;
            goto label_27b160;
        }
    }
    ctx->pc = 0x27B150u;
    // 0x27b150: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27b150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27b154: 0xc09edf0  jal         func_27B7C0
    ctx->pc = 0x27B154u;
    SET_GPR_U32(ctx, 31, 0x27B15Cu);
    ctx->pc = 0x27B158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B154u;
            // 0x27b158: 0x24844de8  addiu       $a0, $a0, 0x4DE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C0u;
    if (runtime->hasFunction(0x27B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B15Cu; }
        if (ctx->pc != 0x27B15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B7C0_0x27b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B15Cu; }
        if (ctx->pc != 0x27B15Cu) { return; }
    }
    ctx->pc = 0x27B15Cu;
    // 0x27b15c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b160:
    // 0x27b160: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27b160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b164: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b168: 0x3e00008  jr          $ra
    ctx->pc = 0x27B168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B168u;
            // 0x27b16c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B10Cu: goto label_27b10c;
            case 0x27B160u: goto label_27b160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27B170u;
}
