#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_225588
// Address: 0x225588 - 0x2255f0
void entry_225588_0x2255f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_225588_0x2255f0");
#endif

    ctx->pc = 0x225588u;

    // 0x225588: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22558c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22558cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x225590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225594: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x225594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x225598: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22559c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2255a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2255a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2255a4: 0xa48500a2  sh          $a1, 0xA2($a0)
    ctx->pc = 0x2255a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 5));
    // 0x2255a8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2255a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2255ac: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x2255acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x2255b0: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x2255b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x2255b4: 0xa48300a0  sh          $v1, 0xA0($a0)
    ctx->pc = 0x2255b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x2255b8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2255b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2255bc: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2255bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2255c0: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x2255c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2255c4: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x2255c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x2255c8: 0xa080003c  sb          $zero, 0x3C($a0)
    ctx->pc = 0x2255c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2255cc: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x2255ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x2255d0: 0xa4830070  sh          $v1, 0x70($a0)
    ctx->pc = 0x2255d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 3));
    // 0x2255d4: 0xa4850072  sh          $a1, 0x72($a0)
    ctx->pc = 0x2255d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 5));
    // 0x2255d8: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x2255d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x2255dc: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x2255dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x2255e0: 0xa483007c  sh          $v1, 0x7C($a0)
    ctx->pc = 0x2255e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 124), (uint16_t)GPR_U32(ctx, 3));
    // 0x2255e4: 0xa485007e  sh          $a1, 0x7E($a0)
    ctx->pc = 0x2255e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 126), (uint16_t)GPR_U32(ctx, 5));
    // 0x2255e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2255E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2255ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2255E8u;
            // 0x2255ec: 0xac800090  sw          $zero, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2255F0u;
}
