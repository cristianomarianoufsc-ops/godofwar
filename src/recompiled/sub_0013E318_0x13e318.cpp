#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E318
// Address: 0x13e318 - 0x13e368
void sub_0013E318_0x13e318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E318_0x13e318");
#endif

    ctx->pc = 0x13e318u;

    // 0x13e318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e320: 0xc05e996  jal         func_17A658
    ctx->pc = 0x13E320u;
    SET_GPR_U32(ctx, 31, 0x13E328u);
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E328u; }
        if (ctx->pc != 0x13E328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E328u; }
        if (ctx->pc != 0x13E328u) { return; }
    }
    ctx->pc = 0x13E328u;
    // 0x13e328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13e328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e32c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E32Cu;
    {
        const bool branch_taken_0x13e32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E32Cu;
            // 0x13e330: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e32c) {
            ctx->pc = 0x13E354u;
            goto label_13e354;
        }
    }
    ctx->pc = 0x13E334u;
    // 0x13e334: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e338: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x13e338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x13e33c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x13e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x13e340: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13e340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e344: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13e344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13e348: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13e348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e34c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E34Cu;
    {
        const bool branch_taken_0x13e34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E34Cu;
            // 0x13e350: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e34c) {
            ctx->pc = 0x13E358u;
            goto label_13e358;
        }
    }
    ctx->pc = 0x13E354u;
label_13e354:
    // 0x13e354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e358:
    // 0x13e358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e35c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E35Cu;
            // 0x13e360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E354u: goto label_13e354;
            case 0x13E358u: goto label_13e358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E364u;
    // 0x13e364: 0x0  nop
    ctx->pc = 0x13e364u;
    // NOP
}
