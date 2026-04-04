#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001860B8
// Address: 0x1860b8 - 0x186118
void sub_001860B8_0x1860b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001860B8_0x1860b8");
#endif

    ctx->pc = 0x1860b8u;

    // 0x1860b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1860b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1860bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1860bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1860c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1860c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1860c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1860c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1860c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1860cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1860ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860d0: 0xc0618ee  jal         func_1863B8
    ctx->pc = 0x1860D0u;
    SET_GPR_U32(ctx, 31, 0x1860D8u);
    ctx->pc = 0x1860D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1860D0u;
            // 0x1860d4: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1863B8u;
    if (runtime->hasFunction(0x1863B8u)) {
        auto targetFn = runtime->lookupFunction(0x1863B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1860D8u; }
        if (ctx->pc != 0x1860D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1863b8_0x186418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1860D8u; }
        if (ctx->pc != 0x1860D8u) { return; }
    }
    ctx->pc = 0x1860D8u;
    // 0x1860d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1860D8u;
    {
        const bool branch_taken_0x1860d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860D8u;
            // 0x1860dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860d8) {
            ctx->pc = 0x1860E8u;
            goto label_1860e8;
        }
    }
    ctx->pc = 0x1860E0u;
    // 0x1860e0: 0x40f809  jalr        $v0
    ctx->pc = 0x1860E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1860E8u);
        ctx->pc = 0x1860E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1860E0u;
            // 0x1860e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1860E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1860E8u: goto label_1860e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1860E8u; }
            if (ctx->pc != 0x1860E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1860E8u;
label_1860e8:
    // 0x1860e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1860e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1860ec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1860ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1860f0: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x1860f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x1860f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1860f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1860f8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1860f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1860fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1860fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186100: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x186100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x186104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186108: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x186108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x18610c: 0x3e00008  jr          $ra
    ctx->pc = 0x18610Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18610Cu;
            // 0x186110: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1860E8u: goto label_1860e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186114u;
    // 0x186114: 0x0  nop
    ctx->pc = 0x186114u;
    // NOP
}
