#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_212de0
// Address: 0x212de0 - 0x212e90
void entry_212de0_0x212e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_212de0_0x212e90");
#endif

    ctx->pc = 0x212de0u;

    // 0x212de0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x212de4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212de8: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x212de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x212dec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x212decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x212df0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x212df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x212df4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x212df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x212df8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x212df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x212dfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212e00: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x212e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x212e04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x212e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x212e08: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x212e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x212e0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x212e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x212e10: 0x3c014291  lui         $at, 0x4291
    ctx->pc = 0x212e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17041 << 16));
    // 0x212e14: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x212e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x212e18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x212e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x212e1c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x212e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x212e20: 0xa4820170  sh          $v0, 0x170($a0)
    ctx->pc = 0x212e20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 368), (uint16_t)GPR_U32(ctx, 2));
    // 0x212e24: 0xe4860024  swc1        $f6, 0x24($a0)
    ctx->pc = 0x212e24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x212e28: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x212e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x212e2c: 0xe482011c  swc1        $f2, 0x11C($a0)
    ctx->pc = 0x212e2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 284), bits); }
    // 0x212e30: 0xe4830160  swc1        $f3, 0x160($a0)
    ctx->pc = 0x212e30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
    // 0x212e34: 0xe4840164  swc1        $f4, 0x164($a0)
    ctx->pc = 0x212e34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 356), bits); }
    // 0x212e38: 0xe4850168  swc1        $f5, 0x168($a0)
    ctx->pc = 0x212e38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 360), bits); }
    // 0x212e3c: 0xe480016c  swc1        $f0, 0x16C($a0)
    ctx->pc = 0x212e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 364), bits); }
    // 0x212e40: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x212e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x212e44: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x212e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x212e48: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x212e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x212e4c: 0xa0800140  sb          $zero, 0x140($a0)
    ctx->pc = 0x212e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e50: 0xa0800128  sb          $zero, 0x128($a0)
    ctx->pc = 0x212e50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 296), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e54: 0xa080005c  sb          $zero, 0x5C($a0)
    ctx->pc = 0x212e54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e58: 0xa0800074  sb          $zero, 0x74($a0)
    ctx->pc = 0x212e58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e5c: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x212e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e60: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x212e60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e64: 0xa0800104  sb          $zero, 0x104($a0)
    ctx->pc = 0x212e64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 260), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e68: 0xa08000ec  sb          $zero, 0xEC($a0)
    ctx->pc = 0x212e68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 236), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e6c: 0xa08000d4  sb          $zero, 0xD4($a0)
    ctx->pc = 0x212e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 212), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e70: 0xa08000bc  sb          $zero, 0xBC($a0)
    ctx->pc = 0x212e70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 188), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e74: 0xa08000a4  sb          $zero, 0xA4($a0)
    ctx->pc = 0x212e74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 164), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e78: 0xa080008c  sb          $zero, 0x8C($a0)
    ctx->pc = 0x212e78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x212e7c: 0xe480015c  swc1        $f0, 0x15C($a0)
    ctx->pc = 0x212e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 348), bits); }
    // 0x212e80: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x212e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x212e84: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x212e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
    // 0x212e88: 0x3e00008  jr          $ra
    ctx->pc = 0x212E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212E88u;
            // 0x212e8c: 0xac800124  sw          $zero, 0x124($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212E90u;
}
