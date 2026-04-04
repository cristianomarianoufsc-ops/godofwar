#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2867f0
// Address: 0x2867f0 - 0x286838
void entry_2867f0_0x286838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2867f0_0x286838");
#endif

    ctx->pc = 0x2867f0u;

    // 0x2867f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2867f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2867f4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2867F4u;
    {
        const bool branch_taken_0x2867f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867F4u;
            // 0x2867f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867f4) {
            ctx->pc = 0x286830u;
            goto label_286830;
        }
    }
    ctx->pc = 0x2867FCu;
    // 0x2867fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2867FCu;
    {
        const bool branch_taken_0x2867fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867FCu;
            // 0x286800: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867fc) {
            ctx->pc = 0x286810u;
            goto label_286810;
        }
    }
    ctx->pc = 0x286804u;
    // 0x286804: 0x0  nop
    ctx->pc = 0x286804u;
    // NOP
label_286808:
    // 0x286808: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x286808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28680c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_286810:
    // 0x286810: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286810u;
    {
        const bool branch_taken_0x286810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286810u;
            // 0x286814: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286810) {
            ctx->pc = 0x286820u;
            goto label_286820;
        }
    }
    ctx->pc = 0x286818u;
    // 0x286818: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x286818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x28681c: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x28681cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_286820:
    // 0x286820: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x286820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x286824: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x286824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x286828: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x286828u;
    {
        const bool branch_taken_0x286828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28682Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286828u;
            // 0x28682c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286828) {
            ctx->pc = 0x286808u;
            runtime->cooperativeGuestYield();
            goto label_286808;
        }
    }
    ctx->pc = 0x286830u;
label_286830:
    // 0x286830: 0x3e00008  jr          $ra
    ctx->pc = 0x286830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286830u;
            // 0x286834: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286808u: goto label_286808;
            case 0x286810u: goto label_286810;
            case 0x286820u: goto label_286820;
            case 0x286830u: goto label_286830;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286838u;
}
