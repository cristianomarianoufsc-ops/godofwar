#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A91C8
// Address: 0x1a91c8 - 0x1a9260
void sub_001A91C8_0x1a91c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A91C8_0x1a91c8");
#endif

    ctx->pc = 0x1a91c8u;

    // 0x1a91c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a91c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a91cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a91ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a91d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a91d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a91d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a91d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a91d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a91d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a91dc: 0xc06a6f6  jal         func_1A9BD8
    ctx->pc = 0x1A91DCu;
    SET_GPR_U32(ctx, 31, 0x1A91E4u);
    ctx->pc = 0x1A91E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91DCu;
            // 0x1a91e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9BD8u;
    if (runtime->hasFunction(0x1A9BD8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91E4u; }
        if (ctx->pc != 0x1A91E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9BD8_0x1a9bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91E4u; }
        if (ctx->pc != 0x1A91E4u) { return; }
    }
    ctx->pc = 0x1A91E4u;
    // 0x1a91e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A91E4u;
    {
        const bool branch_taken_0x1a91e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A91E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91E4u;
            // 0x1a91e8: 0x3c06002b  lui         $a2, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a91e4) {
            ctx->pc = 0x1A9204u;
            goto label_1a9204;
        }
    }
    ctx->pc = 0x1A91ECu;
    // 0x1a91ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a91ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a91f0: 0x24c64248  addiu       $a2, $a2, 0x4248
    ctx->pc = 0x1a91f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16968));
    // 0x1a91f4: 0xc091258  jal         func_244960
    ctx->pc = 0x1A91F4u;
    SET_GPR_U32(ctx, 31, 0x1A91FCu);
    ctx->pc = 0x1A91F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91F4u;
            // 0x1a91f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91FCu; }
        if (ctx->pc != 0x1A91FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91FCu; }
        if (ctx->pc != 0x1A91FCu) { return; }
    }
    ctx->pc = 0x1A91FCu;
    // 0x1a91fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A91FCu;
    {
        const bool branch_taken_0x1a91fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91FCu;
            // 0x1a9200: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a91fc) {
            ctx->pc = 0x1A924Cu;
            goto label_1a924c;
        }
    }
    ctx->pc = 0x1A9204u;
label_1a9204:
    // 0x1a9204: 0xc06a70a  jal         func_1A9C28
    ctx->pc = 0x1A9204u;
    SET_GPR_U32(ctx, 31, 0x1A920Cu);
    ctx->pc = 0x1A9208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9204u;
            // 0x1a9208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C28u;
    if (runtime->hasFunction(0x1A9C28u)) {
        auto targetFn = runtime->lookupFunction(0x1A9C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A920Cu; }
        if (ctx->pc != 0x1A920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9C28_0x1a9c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A920Cu; }
        if (ctx->pc != 0x1A920Cu) { return; }
    }
    ctx->pc = 0x1A920Cu;
    // 0x1a920c: 0xc06a71e  jal         func_1A9C78
    ctx->pc = 0x1A920Cu;
    SET_GPR_U32(ctx, 31, 0x1A9214u);
    ctx->pc = 0x1A9210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A920Cu;
            // 0x1a9210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C78u;
    if (runtime->hasFunction(0x1A9C78u)) {
        auto targetFn = runtime->lookupFunction(0x1A9C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9214u; }
        if (ctx->pc != 0x1A9214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9C78_0x1a9c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9214u; }
        if (ctx->pc != 0x1A9214u) { return; }
    }
    ctx->pc = 0x1A9214u;
    // 0x1a9214: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9214u;
    {
        const bool branch_taken_0x1a9214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9214u;
            // 0x1a9218: 0x3c06002b  lui         $a2, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9214) {
            ctx->pc = 0x1A9230u;
            goto label_1a9230;
        }
    }
    ctx->pc = 0x1A921Cu;
    // 0x1a921c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a921cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9220: 0x24c61d30  addiu       $a2, $a2, 0x1D30
    ctx->pc = 0x1a9220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7472));
    // 0x1a9224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9228: 0xc091258  jal         func_244960
    ctx->pc = 0x1A9228u;
    SET_GPR_U32(ctx, 31, 0x1A9230u);
    ctx->pc = 0x1A922Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9228u;
            // 0x1a922c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9230u; }
        if (ctx->pc != 0x1A9230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9230u; }
        if (ctx->pc != 0x1A9230u) { return; }
    }
    ctx->pc = 0x1A9230u;
label_1a9230:
    // 0x1a9230: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1a9230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1a9234: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9238: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1a9238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a923c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1a923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a9240: 0x40f809  jalr        $v0
    ctx->pc = 0x1A9240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9248u);
        ctx->pc = 0x1A9244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9240u;
            // 0x1a9244: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9248u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9204u: goto label_1a9204;
            case 0x1A9230u: goto label_1a9230;
            case 0x1A924Cu: goto label_1a924c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9248u; }
            if (ctx->pc != 0x1A9248u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9248u;
    // 0x1a9248: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a9248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a924c:
    // 0x1a924c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a924cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9254: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9254u;
            // 0x1a9258: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9204u: goto label_1a9204;
            case 0x1A9230u: goto label_1a9230;
            case 0x1A924Cu: goto label_1a924c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A925Cu;
    // 0x1a925c: 0x0  nop
    ctx->pc = 0x1a925cu;
    // NOP
}
