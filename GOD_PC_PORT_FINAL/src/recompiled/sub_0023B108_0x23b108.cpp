#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023B108
// Address: 0x23b108 - 0x23b170
void sub_0023B108_0x23b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B108_0x23b108");
#endif

    ctx->pc = 0x23b108u;

    // 0x23b108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b10c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b110: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23b110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23b114: 0x24422f38  addiu       $v0, $v0, 0x2F38
    ctx->pc = 0x23b114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12088));
    // 0x23b118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23b11c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b124: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23b124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x23b128: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23b128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23b12c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B12Cu;
    {
        const bool branch_taken_0x23b12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B12Cu;
            // 0x23b130: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b12c) {
            ctx->pc = 0x23B13Cu;
            goto label_23b13c;
        }
    }
    ctx->pc = 0x23B134u;
    // 0x23b134: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x23B134u;
    SET_GPR_U32(ctx, 31, 0x23B13Cu);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B13Cu; }
        if (ctx->pc != 0x23B13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B13Cu; }
        if (ctx->pc != 0x23B13Cu) { return; }
    }
    ctx->pc = 0x23B13Cu;
label_23b13c:
    // 0x23b13c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b140: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x23b140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x23b144: 0x24422f50  addiu       $v0, $v0, 0x2F50
    ctx->pc = 0x23b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12112));
    // 0x23b148: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B148u;
    {
        const bool branch_taken_0x23b148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B148u;
            // 0x23b14c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b148) {
            ctx->pc = 0x23B158u;
            goto label_23b158;
        }
    }
    ctx->pc = 0x23B150u;
    // 0x23b150: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23B150u;
    SET_GPR_U32(ctx, 31, 0x23B158u);
    ctx->pc = 0x23B154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B150u;
            // 0x23b154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B158u; }
        if (ctx->pc != 0x23B158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B158u; }
        if (ctx->pc != 0x23B158u) { return; }
    }
    ctx->pc = 0x23B158u;
label_23b158:
    // 0x23b158: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23b158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b15c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23b15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b164: 0x3e00008  jr          $ra
    ctx->pc = 0x23B164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B164u;
            // 0x23b168: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B13Cu: goto label_23b13c;
            case 0x23B158u: goto label_23b158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B16Cu;
    // 0x23b16c: 0x0  nop
    ctx->pc = 0x23b16cu;
    // NOP
}
