#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002015E8
// Address: 0x2015e8 - 0x201648
void sub_002015E8_0x2015e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002015E8_0x2015e8");
#endif

    ctx->pc = 0x2015e8u;

    // 0x2015e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2015e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2015ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2015ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2015f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2015f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2015f4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2015f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2015f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2015f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2015fc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2015FCu;
    {
        const bool branch_taken_0x2015fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2015FCu;
            // 0x201600: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2015fc) {
            ctx->pc = 0x201638u;
            goto label_201638;
        }
    }
    ctx->pc = 0x201604u;
    // 0x201604: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x201604u;
    {
        const bool branch_taken_0x201604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201604u;
            // 0x201608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201604) {
            ctx->pc = 0x201638u;
            goto label_201638;
        }
    }
    ctx->pc = 0x20160Cu;
    // 0x20160c: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x20160Cu;
    SET_GPR_U32(ctx, 31, 0x201614u);
    ctx->pc = 0x201610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20160Cu;
            // 0x201610: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201614u; }
        if (ctx->pc != 0x201614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201614u; }
        if (ctx->pc != 0x201614u) { return; }
    }
    ctx->pc = 0x201614u;
    // 0x201614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201618: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x201618u;
    SET_GPR_U32(ctx, 31, 0x201620u);
    ctx->pc = 0x20161Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201618u;
            // 0x20161c: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201620u; }
        if (ctx->pc != 0x201620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201620u; }
        if (ctx->pc != 0x201620u) { return; }
    }
    ctx->pc = 0x201620u;
    // 0x201620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201624: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x201624u;
    SET_GPR_U32(ctx, 31, 0x20162Cu);
    ctx->pc = 0x201628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201624u;
            // 0x201628: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20162Cu; }
        if (ctx->pc != 0x20162Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20162Cu; }
        if (ctx->pc != 0x20162Cu) { return; }
    }
    ctx->pc = 0x20162Cu;
    // 0x20162c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20162cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201630: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x201630u;
    SET_GPR_U32(ctx, 31, 0x201638u);
    ctx->pc = 0x201634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201630u;
            // 0x201634: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201638u; }
        if (ctx->pc != 0x201638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201638u; }
        if (ctx->pc != 0x201638u) { return; }
    }
    ctx->pc = 0x201638u;
label_201638:
    // 0x201638: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x201638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20163c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20163cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201640: 0x3e00008  jr          $ra
    ctx->pc = 0x201640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201640u;
            // 0x201644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201638u: goto label_201638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201648u;
}
