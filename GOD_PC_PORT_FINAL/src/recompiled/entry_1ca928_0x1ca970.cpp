#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ca928
// Address: 0x1ca928 - 0x1ca970
void entry_1ca928_0x1ca970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ca928_0x1ca970");
#endif

    ctx->pc = 0x1ca928u;

    // 0x1ca928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca92c: 0x0  nop
    ctx->pc = 0x1ca92cu;
    // NOP
label_1ca930:
    // 0x1ca930: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1ca930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ca934: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1ca934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1ca938: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1ca938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ca93c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1ca93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ca940: 0x24635ee0  addiu       $v1, $v1, 0x5EE0
    ctx->pc = 0x1ca940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24288));
    // 0x1ca944: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1ca944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ca948: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x1ca948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1ca94c: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x1ca94cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ca950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca954: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CA954u;
    {
        const bool branch_taken_0x1ca954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA954u;
            // 0x1ca958: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca954) {
            ctx->pc = 0x1CA930u;
            runtime->cooperativeGuestYield();
            goto label_1ca930;
        }
    }
    ctx->pc = 0x1CA95Cu;
    // 0x1ca95c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA95Cu;
            // 0x1ca960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA930u: goto label_1ca930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CA964u;
    // 0x1ca964: 0x0  nop
    ctx->pc = 0x1ca964u;
    // NOP
    // 0x1ca968: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ca968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ca96c: 0x0  nop
    ctx->pc = 0x1ca96cu;
    // NOP
}
