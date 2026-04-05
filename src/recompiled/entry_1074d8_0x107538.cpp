#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1074d8
// Address: 0x1074d8 - 0x107538
void entry_1074d8_0x107538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1074d8_0x107538");
#endif

    ctx->pc = 0x1074d8u;

    // 0x1074d8: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x1074d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1074dc: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x1074dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1074e0: 0x10c80013  beq         $a2, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1074E0u;
    {
        const bool branch_taken_0x1074e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x1074e0) {
            ctx->pc = 0x107530u;
            goto label_107530;
        }
    }
    ctx->pc = 0x1074E8u;
    // 0x1074e8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1074e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1074ec: 0x0  nop
    ctx->pc = 0x1074ecu;
    // NOP
label_1074f0:
    // 0x1074f0: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x1074f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1074f4: 0x5087000c  beql        $a0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1074F4u;
    {
        const bool branch_taken_0x1074f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x1074f4) {
            ctx->pc = 0x1074F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1074F4u;
            // 0x1074f8: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107528u;
            goto label_107528;
        }
    }
    ctx->pc = 0x1074FCu;
    // 0x1074fc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1074fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x107500: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x107500u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x107504: 0x0  nop
    ctx->pc = 0x107504u;
    // NOP
label_107508:
    // 0x107508: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x107508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10750c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x10750cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x107510: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x107510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107514: 0x0  nop
    ctx->pc = 0x107514u;
    // NOP
    // 0x107518: 0x0  nop
    ctx->pc = 0x107518u;
    // NOP
    // 0x10751c: 0x5487fffa  bnel        $a0, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10751Cu;
    {
        const bool branch_taken_0x10751c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x10751c) {
            ctx->pc = 0x107520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10751Cu;
            // 0x107520: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107508u;
            runtime->cooperativeGuestYield();
            goto label_107508;
        }
    }
    ctx->pc = 0x107524u;
    // 0x107524: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x107524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_107528:
    // 0x107528: 0x54c8fff1  bnel        $a2, $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x107528u;
    {
        const bool branch_taken_0x107528 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x107528) {
            ctx->pc = 0x10752Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107528u;
            // 0x10752c: 0x8cc40008  lw          $a0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1074F0u;
            runtime->cooperativeGuestYield();
            goto label_1074f0;
        }
    }
    ctx->pc = 0x107530u;
label_107530:
    // 0x107530: 0x3e00008  jr          $ra
    ctx->pc = 0x107530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1074F0u: goto label_1074f0;
            case 0x107508u: goto label_107508;
            case 0x107528u: goto label_107528;
            case 0x107530u: goto label_107530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107538u;
}
