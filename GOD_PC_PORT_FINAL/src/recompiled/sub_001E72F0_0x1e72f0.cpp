#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E72F0
// Address: 0x1e72f0 - 0x1e7398
void sub_001E72F0_0x1e72f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E72F0_0x1e72f0");
#endif

    ctx->pc = 0x1e72f0u;

    // 0x1e72f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e72f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e72f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e72f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e72f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e72f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e72fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e72fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7300: 0x8e03032c  lw          $v1, 0x32C($s0)
    ctx->pc = 0x1e7300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x1e7304: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7304u;
    {
        const bool branch_taken_0x1e7304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7304u;
            // 0x1e7308: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7304) {
            ctx->pc = 0x1E7320u;
            goto label_1e7320;
        }
    }
    ctx->pc = 0x1E730Cu;
    // 0x1e730c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1e730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1e7310: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e7310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e7314: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1e7314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e7318: 0x40f809  jalr        $v0
    ctx->pc = 0x1E7318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E7320u);
        ctx->pc = 0x1E731Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7318u;
            // 0x1e731c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7320u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7320u: goto label_1e7320;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7320u; }
            if (ctx->pc != 0x1E7320u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7320u;
label_1e7320:
    // 0x1e7320: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x1e7320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x1e7324: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e7324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e732c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E732Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E732Cu;
            // 0x1e7330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7320u: goto label_1e7320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7334u;
    // 0x1e7334: 0x0  nop
    ctx->pc = 0x1e7334u;
    // NOP
    // 0x1e7338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e733c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e733cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7344: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1e7344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1e7348: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x1e7348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1e734c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e7350: 0xc077cfa  jal         func_1DF3E8
    ctx->pc = 0x1E7350u;
    SET_GPR_U32(ctx, 31, 0x1E7358u);
    ctx->pc = 0x1E7354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7350u;
            // 0x1e7354: 0xac430174  sw          $v1, 0x174($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF3E8u;
    if (runtime->hasFunction(0x1DF3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1DF3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7358u; }
        if (ctx->pc != 0x1E7358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF3E8_0x1df3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7358u; }
        if (ctx->pc != 0x1E7358u) { return; }
    }
    ctx->pc = 0x1E7358u;
    // 0x1e7358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e735c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E735Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E735Cu;
            // 0x1e7360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7320u: goto label_1e7320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7364u;
    // 0x1e7364: 0x0  nop
    ctx->pc = 0x1e7364u;
    // NOP
    // 0x1e7368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e736c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e736cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7374: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x1e7374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x1e7378: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1e737c: 0x8c450174  lw          $a1, 0x174($v0)
    ctx->pc = 0x1e737cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1e7380: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1e7380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1e7384: 0xc077c50  jal         func_1DF140
    ctx->pc = 0x1E7384u;
    SET_GPR_U32(ctx, 31, 0x1E738Cu);
    ctx->pc = 0x1E7388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7384u;
            // 0x1e7388: 0xac450174  sw          $a1, 0x174($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 372), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF140u;
    if (runtime->hasFunction(0x1DF140u)) {
        auto targetFn = runtime->lookupFunction(0x1DF140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E738Cu; }
        if (ctx->pc != 0x1E738Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF140_0x1df140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E738Cu; }
        if (ctx->pc != 0x1E738Cu) { return; }
    }
    ctx->pc = 0x1E738Cu;
    // 0x1e738c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e738cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7390: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7390u;
            // 0x1e7394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7320u: goto label_1e7320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7398u;
}
