#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_162238
// Address: 0x162238 - 0x162298
void entry_162238_0x162298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_162238_0x162298");
#endif

    ctx->pc = 0x162238u;

    // 0x162238: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x162238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x16223c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16223cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162240: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x162240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x162244: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x162244u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162248: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x162248u;
    {
        const bool branch_taken_0x162248 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162248u;
            // 0x16224c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162248) {
            ctx->pc = 0x16227Cu;
            goto label_16227c;
        }
    }
    ctx->pc = 0x162250u;
    // 0x162250: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x162250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162254: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x162254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_162258:
    // 0x162258: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x162258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16225c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x16225cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x162260: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x162260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x162264: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x162264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x162268: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x162268u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x16226c: 0x9442001a  lhu         $v0, 0x1A($v0)
    ctx->pc = 0x16226cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x162270: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x162270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x162274: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x162274u;
    {
        const bool branch_taken_0x162274 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x162278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162274u;
            // 0x162278: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162274) {
            ctx->pc = 0x162258u;
            runtime->cooperativeGuestYield();
            goto label_162258;
        }
    }
    ctx->pc = 0x16227Cu;
label_16227c:
    // 0x16227c: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16227Cu;
    {
        const bool branch_taken_0x16227c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x16227c) {
            ctx->pc = 0x162280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16227Cu;
            // 0x162280: 0xacaa0000  sw          $t2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162284u;
            goto label_162284;
        }
    }
    ctx->pc = 0x162284u;
label_162284:
    // 0x162284: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x162284u;
    {
        const bool branch_taken_0x162284 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x162284) {
            ctx->pc = 0x162288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162284u;
            // 0x162288: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16228Cu;
            goto label_16228c;
        }
    }
    ctx->pc = 0x16228Cu;
label_16228c:
    // 0x16228c: 0x3e00008  jr          $ra
    ctx->pc = 0x16228Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162258u: goto label_162258;
            case 0x16227Cu: goto label_16227c;
            case 0x162284u: goto label_162284;
            case 0x16228Cu: goto label_16228c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162294u;
    // 0x162294: 0x0  nop
    ctx->pc = 0x162294u;
    // NOP
}
