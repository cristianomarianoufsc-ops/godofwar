#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13f9c8
// Address: 0x13f9c8 - 0x13fa20
void entry_13f9c8_0x13fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13f9c8_0x13fa20");
#endif

    ctx->pc = 0x13f9c8u;

    // 0x13f9c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13f9cc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13f9d0: 0x8c42f168  lw          $v0, -0xE98($v0)
    ctx->pc = 0x13f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963560)));
    // 0x13f9d4: 0x8c651034  lw          $a1, 0x1034($v1)
    ctx->pc = 0x13f9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4148)));
    // 0x13f9d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x13f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13f9dc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x13f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x13f9e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13f9e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13f9e8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x13f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x13f9ec: 0x8c631038  lw          $v1, 0x1038($v1)
    ctx->pc = 0x13f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4152)));
    // 0x13f9f0: 0x8c841030  lw          $a0, 0x1030($a0)
    ctx->pc = 0x13f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4144)));
    // 0x13f9f4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x13f9f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13f9f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x13f9f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13f9fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13F9FCu;
    {
        const bool branch_taken_0x13f9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f9fc) {
            ctx->pc = 0x13FA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F9FCu;
            // 0x13fa00: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FA04u;
            goto label_13fa04;
        }
    }
    ctx->pc = 0x13FA04u;
label_13fa04:
    // 0x13fa04: 0x1012  mflo        $v0
    ctx->pc = 0x13fa04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x13fa08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13fa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13fa0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fa10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13fa14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13fa14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13fa18: 0x3e00008  jr          $ra
    ctx->pc = 0x13FA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FA18u;
            // 0x13fa1c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13FA04u: goto label_13fa04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13FA20u;
}
