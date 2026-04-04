#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1501c0
// Address: 0x1501c0 - 0x150220
void entry_1501c0_0x150220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1501c0_0x150220");
#endif

    ctx->pc = 0x1501c0u;

    // 0x1501c0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x1501c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1501c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1501c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1501c8: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x1501c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1501cc: 0x24860060  addiu       $a2, $a0, 0x60
    ctx->pc = 0x1501ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1501d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1501d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1501d4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1501d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1501d8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1501d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1501dc: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x1501dcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1501e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1501e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1501e4: 0x481004  sllv        $v0, $t0, $v0
    ctx->pc = 0x1501e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1501e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1501e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1501ec: 0x72942  srl         $a1, $a3, 5
    ctx->pc = 0x1501ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x1501f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1501f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1501f4: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1501f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1501f8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1501f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1501fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1501fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x150200: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x150200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x150204: 0x30e7001f  andi        $a3, $a3, 0x1F
    ctx->pc = 0x150204u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x150208: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x150208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15020c: 0xe84004  sllv        $t0, $t0, $a3
    ctx->pc = 0x15020cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x150210: 0x84027  nor         $t0, $zero, $t0
    ctx->pc = 0x150210u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x150214: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x150214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x150218: 0x3e00008  jr          $ra
    ctx->pc = 0x150218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15021Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150218u;
            // 0x15021c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150220u;
}
