#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17c688
// Address: 0x17c688 - 0x17c6f0
void entry_17c688_0x17c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17c688_0x17c6f0");
#endif

    ctx->pc = 0x17c688u;

    // 0x17c688: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x17c688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x17c68c: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x17c68cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x17c690: 0x8c434714  lw          $v1, 0x4714($v0)
    ctx->pc = 0x17c690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18196)));
    // 0x17c694: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c698: 0x8ce24718  lw          $v0, 0x4718($a3)
    ctx->pc = 0x17c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18200)));
    // 0x17c69c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x17c69cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6a0: 0x84400b  movn        $t0, $a0, $a0
    ctx->pc = 0x17c6a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x17c6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6a8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x17c6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c6ac: 0x0  nop
    ctx->pc = 0x17c6acu;
    // NOP
label_17c6b0:
    // 0x17c6b0: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x17c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17c6b4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x17c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17c6b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x17c6b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c6bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c6c0: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x17c6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x17c6c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C6C4u;
    {
        const bool branch_taken_0x17c6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C6C4u;
            // 0x17c6c8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6c4) {
            ctx->pc = 0x17C6B0u;
            runtime->cooperativeGuestYield();
            goto label_17c6b0;
        }
    }
    ctx->pc = 0x17C6CCu;
    // 0x17c6cc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x17c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x17c6d0: 0x8ce34718  lw          $v1, 0x4718($a3)
    ctx->pc = 0x17c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18200)));
    // 0x17c6d4: 0x8c444710  lw          $a0, 0x4710($v0)
    ctx->pc = 0x17c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18192)));
    // 0x17c6d8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x17c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x17c6dc: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x17c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x17c6e0: 0xace34718  sw          $v1, 0x4718($a3)
    ctx->pc = 0x17c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18200), GPR_U32(ctx, 3));
    // 0x17c6e4: 0xac444710  sw          $a0, 0x4710($v0)
    ctx->pc = 0x17c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18192), GPR_U32(ctx, 4));
    // 0x17c6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17C6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C6E8u;
            // 0x17c6ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C6B0u: goto label_17c6b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C6F0u;
}
