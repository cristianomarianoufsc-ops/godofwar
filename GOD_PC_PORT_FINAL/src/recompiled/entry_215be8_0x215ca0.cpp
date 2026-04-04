#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_215be8
// Address: 0x215be8 - 0x215ca0
void entry_215be8_0x215ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_215be8_0x215ca0");
#endif

    ctx->pc = 0x215be8u;

    // 0x215be8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x215bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215bf0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x215bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x215bf4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x215bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x215bf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x215bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x215bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215c00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x215c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x215c04: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x215c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x215c08: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x215c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x215c0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x215c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215c10: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x215c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x215c14: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x215c14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x215c18: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x215c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x215c1c: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x215c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x215c20: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x215c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x215c24: 0x3c014291  lui         $at, 0x4291
    ctx->pc = 0x215c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17041 << 16));
    // 0x215c28: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x215c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x215c2c: 0xa482010c  sh          $v0, 0x10C($a0)
    ctx->pc = 0x215c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 268), (uint16_t)GPR_U32(ctx, 2));
    // 0x215c30: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x215c30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x215c34: 0xe482003c  swc1        $f2, 0x3C($a0)
    ctx->pc = 0x215c34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x215c38: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x215c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
    // 0x215c3c: 0xe4830040  swc1        $f3, 0x40($a0)
    ctx->pc = 0x215c3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x215c40: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x215c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x215c44: 0xe4840048  swc1        $f4, 0x48($a0)
    ctx->pc = 0x215c44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x215c48: 0xe485004c  swc1        $f5, 0x4C($a0)
    ctx->pc = 0x215c48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x215c4c: 0xe4860050  swc1        $f6, 0x50($a0)
    ctx->pc = 0x215c4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x215c50: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x215c50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x215c54: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x215c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x215c58: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x215c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x215c5c: 0xe4860024  swc1        $f6, 0x24($a0)
    ctx->pc = 0x215c5cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x215c60: 0xa480001a  sh          $zero, 0x1A($a0)
    ctx->pc = 0x215c60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x215c64: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x215c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x215c68: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x215c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x215c6c: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x215c6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x215c70: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x215c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x215c74: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x215c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x215c78: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x215c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x215c7c: 0xa08000f0  sb          $zero, 0xF0($a0)
    ctx->pc = 0x215c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x215c80: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x215c80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x215c84: 0xa08000c0  sb          $zero, 0xC0($a0)
    ctx->pc = 0x215c84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x215c88: 0xa08000a8  sb          $zero, 0xA8($a0)
    ctx->pc = 0x215c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x215c8c: 0xa0800090  sb          $zero, 0x90($a0)
    ctx->pc = 0x215c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x215c90: 0xa0800078  sb          $zero, 0x78($a0)
    ctx->pc = 0x215c90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x215c94: 0xa0800060  sb          $zero, 0x60($a0)
    ctx->pc = 0x215c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x215c98: 0x3e00008  jr          $ra
    ctx->pc = 0x215C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215C98u;
            // 0x215c9c: 0xac800108  sw          $zero, 0x108($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215CA0u;
}
