#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020A010
// Address: 0x20a010 - 0x20a040
void sub_0020A010_0x20a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A010_0x20a010");
#endif

    ctx->pc = 0x20a010u;

    // 0x20a010: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x20a010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x20a014: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x20a014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x20a018: 0x90c2e446  lbu         $v0, -0x1BBA($a2)
    ctx->pc = 0x20a018u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294960198)));
    // 0x20a01c: 0x2463e448  addiu       $v1, $v1, -0x1BB8
    ctx->pc = 0x20a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960200));
    // 0x20a020: 0x90c5e446  lbu         $a1, -0x1BBA($a2)
    ctx->pc = 0x20a020u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294960198)));
    // 0x20a024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20a024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a02c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20a030: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x20a030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x20a034: 0x3e00008  jr          $ra
    ctx->pc = 0x20A034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A034u;
            // 0x20a038: 0xa0c5e446  sb          $a1, -0x1BBA($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294960198), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A03Cu;
    // 0x20a03c: 0x0  nop
    ctx->pc = 0x20a03cu;
    // NOP
}
