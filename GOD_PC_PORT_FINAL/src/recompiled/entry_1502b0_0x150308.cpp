#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1502b0
// Address: 0x1502b0 - 0x150308
void entry_1502b0_0x150308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1502b0_0x150308");
#endif

    ctx->pc = 0x1502b0u;

    // 0x1502b0: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x1502b0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1502b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1502b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1502b8: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x1502b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x1502bc: 0x24870040  addiu       $a3, $a0, 0x40
    ctx->pc = 0x1502bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1502c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1502c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1502c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1502c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502c8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1502c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1502cc: 0x30c6001f  andi        $a2, $a2, 0x1F
    ctx->pc = 0x1502ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x1502d0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1502d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1502d4: 0xc83004  sllv        $a2, $t0, $a2
    ctx->pc = 0x1502d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1502d8: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x1502d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x1502dc: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1502dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1502e0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1502e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1502e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1502e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1502e8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1502e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1502ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1502ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1502f0: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x1502f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1502f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1502f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1502f8: 0xa84004  sllv        $t0, $t0, $a1
    ctx->pc = 0x1502f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1502fc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1502fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x150300: 0x3e00008  jr          $ra
    ctx->pc = 0x150300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150300u;
            // 0x150304: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150308u;
}
