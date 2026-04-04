#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_150250
// Address: 0x150250 - 0x1502b0
void entry_150250_0x1502b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_150250_0x1502b0");
#endif

    ctx->pc = 0x150250u;

    // 0x150250: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x150250u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x150254: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x150254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150258: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x150258u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x15025c: 0x24860020  addiu       $a2, $a0, 0x20
    ctx->pc = 0x15025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x150260: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150264: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x150264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x150268: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x150268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15026c: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x15026cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x150270: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x150270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x150274: 0x481004  sllv        $v0, $t0, $v0
    ctx->pc = 0x150274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x150278: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x150278u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x15027c: 0x72942  srl         $a1, $a3, 5
    ctx->pc = 0x15027cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x150280: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x150280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x150284: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x150284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x150288: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x150288u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x15028c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15028cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x150290: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x150290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x150294: 0x30e7001f  andi        $a3, $a3, 0x1F
    ctx->pc = 0x150294u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x150298: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x150298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15029c: 0xe84004  sllv        $t0, $t0, $a3
    ctx->pc = 0x15029cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x1502a0: 0x84027  nor         $t0, $zero, $t0
    ctx->pc = 0x1502a0u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x1502a4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1502a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1502a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1502A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1502ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1502A8u;
            // 0x1502ac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1502B0u;
}
