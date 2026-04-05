#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_221af8
// Address: 0x221af8 - 0x221b38
void entry_221af8_0x221b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_221af8_0x221b38");
#endif

    ctx->pc = 0x221af8u;

    // 0x221af8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x221af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x221afc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x221afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x221b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221b04: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x221b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x221b08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x221b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221b0c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x221b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x221b10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x221b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x221b14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221b18: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x221b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x221b1c: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x221b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x221b20: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x221b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x221b24: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x221b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x221b28: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x221b28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x221b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x221B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221B2Cu;
            // 0x221b30: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221B34u;
    // 0x221b34: 0x0  nop
    ctx->pc = 0x221b34u;
    // NOP
}
