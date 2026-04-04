#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22f4f8
// Address: 0x22f4f8 - 0x22f540
void entry_22f4f8_0x22f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22f4f8_0x22f540");
#endif

    ctx->pc = 0x22f4f8u;

    // 0x22f4f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22f4fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f500: 0x24476eb8  addiu       $a3, $v0, 0x6EB8
    ctx->pc = 0x22f500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28344));
    // 0x22f504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f508: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x22f508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f50c: 0x0  nop
    ctx->pc = 0x22f50cu;
    // NOP
label_22f510:
    // 0x22f510: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22f510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22f514: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22f514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22f518: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x22f518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x22f51c: 0x2ca24fff  sltiu       $v0, $a1, 0x4FFF
    ctx->pc = 0x22f51cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20479) ? 1 : 0);
    // 0x22f520: 0x0  nop
    ctx->pc = 0x22f520u;
    // NOP
    // 0x22f524: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22F524u;
    {
        const bool branch_taken_0x22f524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F524u;
            // 0x22f528: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f524) {
            ctx->pc = 0x22F510u;
            runtime->cooperativeGuestYield();
            goto label_22f510;
        }
    }
    ctx->pc = 0x22F52Cu;
    // 0x22f52c: 0x24024fff  addiu       $v0, $zero, 0x4FFF
    ctx->pc = 0x22f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20479));
    // 0x22f530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f534: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22f538: 0x3e00008  jr          $ra
    ctx->pc = 0x22F538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F538u;
            // 0x22f53c: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F510u: goto label_22f510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F540u;
}
