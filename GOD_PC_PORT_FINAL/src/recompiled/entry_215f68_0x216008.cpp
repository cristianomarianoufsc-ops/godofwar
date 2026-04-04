#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_215f68
// Address: 0x215f68 - 0x216008
void entry_215f68_0x216008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_215f68_0x216008");
#endif

    ctx->pc = 0x215f68u;

    // 0x215f68: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x215f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x215f6c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x215f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x215f70: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x215f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x215f74: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x215f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x215f78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x215f78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x215f7c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x215f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x215f80: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x215f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x215f84: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x215f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x215f88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215f8c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x215f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x215f90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x215f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215f94: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x215f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x215f98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x215f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x215f9c: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x215f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
    // 0x215fa0: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x215fa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x215fa4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x215fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x215fa8: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x215fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
    // 0x215fac: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x215facu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x215fb0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x215fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x215fb4: 0x3c01411d  lui         $at, 0x411D
    ctx->pc = 0x215fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16669 << 16));
    // 0x215fb8: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x215fb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x215fbc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x215fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x215fc0: 0xe4840018  swc1        $f4, 0x18($a0)
    ctx->pc = 0x215fc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x215fc4: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x215fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x215fc8: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x215fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x215fcc: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x215fccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x215fd0: 0xe483002c  swc1        $f3, 0x2C($a0)
    ctx->pc = 0x215fd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x215fd4: 0xe4870030  swc1        $f7, 0x30($a0)
    ctx->pc = 0x215fd4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x215fd8: 0xe4850034  swc1        $f5, 0x34($a0)
    ctx->pc = 0x215fd8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x215fdc: 0xe4860038  swc1        $f6, 0x38($a0)
    ctx->pc = 0x215fdcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x215fe0: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x215fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x215fe4: 0xa48000b8  sh          $zero, 0xB8($a0)
    ctx->pc = 0x215fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 184), (uint16_t)GPR_U32(ctx, 0));
    // 0x215fe8: 0xe4870028  swc1        $f7, 0x28($a0)
    ctx->pc = 0x215fe8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x215fec: 0xa08000a0  sb          $zero, 0xA0($a0)
    ctx->pc = 0x215fecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x215ff0: 0xa0800070  sb          $zero, 0x70($a0)
    ctx->pc = 0x215ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x215ff4: 0xa0800088  sb          $zero, 0x88($a0)
    ctx->pc = 0x215ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x215ff8: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x215ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x215ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x215FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215FFCu;
            // 0x216000: 0xa0800040  sb          $zero, 0x40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216004u;
    // 0x216004: 0x0  nop
    ctx->pc = 0x216004u;
    // NOP
}
