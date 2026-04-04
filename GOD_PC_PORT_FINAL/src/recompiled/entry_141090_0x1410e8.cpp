#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_141090
// Address: 0x141090 - 0x1410e8
void entry_141090_0x1410e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_141090_0x1410e8");
#endif

    ctx->pc = 0x141090u;

    // 0x141090: 0x80870147  lb          $a3, 0x147($a0)
    ctx->pc = 0x141090u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x141094: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x141094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141098: 0x248500f0  addiu       $a1, $a0, 0xF0
    ctx->pc = 0x141098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x14109c: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x14109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x1410a0: 0x7100b  movn        $v0, $zero, $a3
    ctx->pc = 0x1410a0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1410a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1410a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1410a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1410a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1410ac: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1410acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1410b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1410b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1410b4: 0x8c841048  lw          $a0, 0x1048($a0)
    ctx->pc = 0x1410b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4168)));
    // 0x1410b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1410b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1410bc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1410bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1410c0: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x1410c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x1410c4: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x1410c4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1410c8: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x1410c8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1410cc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1410ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1410d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1410d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1410d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1410d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1410d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1410d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1410dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1410dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1410e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1410E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1410E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1410E0u;
            // 0x1410e4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1410E8u;
}
