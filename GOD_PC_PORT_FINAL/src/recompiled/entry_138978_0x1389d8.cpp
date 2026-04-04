#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_138978
// Address: 0x138978 - 0x1389d8
void entry_138978_0x1389d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_138978_0x1389d8");
#endif

    ctx->pc = 0x138978u;

    // 0x138978: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x138978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13897c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x13897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x138980: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x138980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x138984: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x138984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x138988: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x138988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13898c: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x13898cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
    // 0x138990: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x138990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x138994: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x138994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x138998: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x138998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x13899c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x13899cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1389a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1389a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1389a4: 0xac62be14  sw          $v0, -0x41EC($v1)
    ctx->pc = 0x1389a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950420), GPR_U32(ctx, 2));
    // 0x1389a8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1389a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1389ac: 0xfca03628  sd          $zero, 0x3628($a1)
    ctx->pc = 0x1389acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 13864), GPR_U64(ctx, 0));
    // 0x1389b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1389b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1389b4: 0xfc603630  sd          $zero, 0x3630($v1)
    ctx->pc = 0x1389b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 13872), GPR_U64(ctx, 0));
    // 0x1389b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1389b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1389bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1389BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1389C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389BCu;
            // 0x1389c0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1389C4u;
    // 0x1389c4: 0x0  nop
    ctx->pc = 0x1389c4u;
    // NOP
    // 0x1389c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1389c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1389cc: 0x0  nop
    ctx->pc = 0x1389ccu;
    // NOP
    // 0x1389d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1389d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1389d4: 0x0  nop
    ctx->pc = 0x1389d4u;
    // NOP
}
