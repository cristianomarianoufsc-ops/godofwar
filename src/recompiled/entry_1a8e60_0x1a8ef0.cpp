#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a8e60
// Address: 0x1a8e60 - 0x1a8ef0
void entry_1a8e60_0x1a8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a8e60_0x1a8ef0");
#endif

    ctx->pc = 0x1a8e60u;

    // 0x1a8e60: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a8e64: 0x2442a8c8  addiu       $v0, $v0, -0x5738
    ctx->pc = 0x1a8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944968));
    // 0x1a8e68: 0xac8200a4  sw          $v0, 0xA4($a0)
    ctx->pc = 0x1a8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
    // 0x1a8e6c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1a8e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x1a8e70: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1a8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1a8e74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a8e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8e78: 0xc4404230  lwc1        $f0, 0x4230($v0)
    ctx->pc = 0x1a8e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8e7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a8e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e80: 0xa4830048  sh          $v1, 0x48($a0)
    ctx->pc = 0x1a8e80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a8e84: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x1a8e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x1a8e88: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x1a8e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
    // 0x1a8e8c: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x1a8e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x1a8e90: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x1a8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
    // 0x1a8e94: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x1a8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x1a8e98: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x1a8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x1a8e9c: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1a8e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1a8ea0: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x1a8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x1a8ea4: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x1a8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x1a8ea8: 0xac83008c  sw          $v1, 0x8C($a0)
    ctx->pc = 0x1a8ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
    // 0x1a8eac: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x1a8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x1a8eb0: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x1a8eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
    // 0x1a8eb4: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x1a8eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x1a8eb8: 0xac83009c  sw          $v1, 0x9C($a0)
    ctx->pc = 0x1a8eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
    // 0x1a8ebc: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x1a8ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x1a8ec0: 0xa4800040  sh          $zero, 0x40($a0)
    ctx->pc = 0x1a8ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a8ec4: 0xa4800042  sh          $zero, 0x42($a0)
    ctx->pc = 0x1a8ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a8ec8: 0xa4830044  sh          $v1, 0x44($a0)
    ctx->pc = 0x1a8ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a8ecc: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x1a8eccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a8ed0: 0xa480004a  sh          $zero, 0x4A($a0)
    ctx->pc = 0x1a8ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a8ed4: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1a8ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1a8ed8: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1a8ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1a8edc: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x1a8edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x1a8ee0: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1a8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x1a8ee4: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x1a8ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x1a8ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8EE8u;
            // 0x1a8eec: 0xac80005c  sw          $zero, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8EF0u;
}
