#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B858
// Address: 0x17b858 - 0x17b8c8
void sub_0017B858_0x17b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B858_0x17b858");
#endif

    ctx->pc = 0x17b858u;

    // 0x17b858: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b85c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17b860: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17b860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17b864: 0x2442afc0  addiu       $v0, $v0, -0x5040
    ctx->pc = 0x17b864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x17b868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b86c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b874: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x17b874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x17b878: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x17b878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17b87c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B87Cu;
    {
        const bool branch_taken_0x17b87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B87Cu;
            // 0x17b880: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b87c) {
            ctx->pc = 0x17B88Cu;
            goto label_17b88c;
        }
    }
    ctx->pc = 0x17B884u;
    // 0x17b884: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x17B884u;
    SET_GPR_U32(ctx, 31, 0x17B88Cu);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B88Cu; }
        if (ctx->pc != 0x17B88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B88Cu; }
        if (ctx->pc != 0x17B88Cu) { return; }
    }
    ctx->pc = 0x17B88Cu;
label_17b88c:
    // 0x17b88c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17b890: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B890u;
    {
        const bool branch_taken_0x17b890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B890u;
            // 0x17b894: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b890) {
            ctx->pc = 0x17B8A4u;
            goto label_17b8a4;
        }
    }
    ctx->pc = 0x17B898u;
    // 0x17b898: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x17B898u;
    SET_GPR_U32(ctx, 31, 0x17B8A0u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8A0u; }
        if (ctx->pc != 0x17B8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8A0u; }
        if (ctx->pc != 0x17B8A0u) { return; }
    }
    ctx->pc = 0x17B8A0u;
    // 0x17b8a0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x17b8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_17b8a4:
    // 0x17b8a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B8A4u;
    {
        const bool branch_taken_0x17b8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b8a4) {
            ctx->pc = 0x17B8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8A4u;
            // 0x17b8a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17B8B8u;
            goto label_17b8b8;
        }
    }
    ctx->pc = 0x17B8ACu;
    // 0x17b8ac: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x17B8ACu;
    SET_GPR_U32(ctx, 31, 0x17B8B4u);
    ctx->pc = 0x17B8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8ACu;
            // 0x17b8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8B4u; }
        if (ctx->pc != 0x17B8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8B4u; }
        if (ctx->pc != 0x17B8B4u) { return; }
    }
    ctx->pc = 0x17B8B4u;
    // 0x17b8b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17b8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17b8b8:
    // 0x17b8b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8C0u;
            // 0x17b8c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B88Cu: goto label_17b88c;
            case 0x17B8A4u: goto label_17b8a4;
            case 0x17B8B8u: goto label_17b8b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B8C8u;
}
