#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2799d8
// Address: 0x2799d8 - 0x279a40
void entry_2799d8_0x279a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2799d8_0x279a40");
#endif

    ctx->pc = 0x2799d8u;

    // 0x2799d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2799d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2799dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2799dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2799e0: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x2799e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x2799e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2799e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2799e8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2799e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2799ec: 0x34633c20  ori         $v1, $v1, 0x3C20
    ctx->pc = 0x2799ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15392);
    // 0x2799f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2799f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2799f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2799f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2799f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2799f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2799fc: 0xf  sync
    ctx->pc = 0x2799fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x279a00: 0x4844e000  cfc2.ni     $a0, $vi28
    ctx->pc = 0x279a00u;
    SET_GPR_U32(ctx, 4, ctx->vu0_itop);
    // 0x279a04: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x279a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x279a08: 0x48c4e000  ctc2.ni     $a0, $vi28
    ctx->pc = 0x279a08u;
    ctx->vu0_itop = GPR_U32(ctx, 4) & 0x3FF;
    // 0x279a0c: 0x40f  sync.p
    ctx->pc = 0x279a0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x279a10: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x279a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x279a14: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x279a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x279a18: 0x24a516a0  addiu       $a1, $a1, 0x16A0
    ctx->pc = 0x279a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5792));
    // 0x279a1c: 0x34c65000  ori         $a2, $a2, 0x5000
    ctx->pc = 0x279a1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20480);
    // 0x279a20: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x279a20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279a24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x279a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x279a28: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x279a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x279a2c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x279a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x279a30: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x279a30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x279a34: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x279a34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x279a38: 0x3e00008  jr          $ra
    ctx->pc = 0x279A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279A38u;
            // 0x279a3c: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279A40u;
}
