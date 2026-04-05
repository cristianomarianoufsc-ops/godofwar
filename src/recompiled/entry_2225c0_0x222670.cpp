#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2225c0
// Address: 0x2225c0 - 0x222670
void entry_2225c0_0x222670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2225c0_0x222670");
#endif

    ctx->pc = 0x2225c0u;

    // 0x2225c0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2225c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2225c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2225c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2225c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2225c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2225cc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2225ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2225d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2225d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2225d4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2225d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2225d8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2225d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2225dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2225dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2225e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2225e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2225e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2225e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2225e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2225e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2225ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2225ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2225f0: 0x3c01411d  lui         $at, 0x411D
    ctx->pc = 0x2225f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16669 << 16));
    // 0x2225f4: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x2225f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x2225f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2225f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2225fc: 0xe4840018  swc1        $f4, 0x18($a0)
    ctx->pc = 0x2225fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x222600: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x222600u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x222604: 0xe4820028  swc1        $f2, 0x28($a0)
    ctx->pc = 0x222604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x222608: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x222608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x22260c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x22260cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x222610: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x222610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x222614: 0xa483003a  sh          $v1, 0x3A($a0)
    ctx->pc = 0x222614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x222618: 0xac820164  sw          $v0, 0x164($a0)
    ctx->pc = 0x222618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 2));
    // 0x22261c: 0xac850168  sw          $a1, 0x168($a0)
    ctx->pc = 0x22261cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 5));
    // 0x222620: 0xac80016c  sw          $zero, 0x16C($a0)
    ctx->pc = 0x222620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 364), GPR_U32(ctx, 0));
    // 0x222624: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x222624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x222628: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x222628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x22262c: 0xa4820038  sh          $v0, 0x38($a0)
    ctx->pc = 0x22262cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x222630: 0xa080003c  sb          $zero, 0x3C($a0)
    ctx->pc = 0x222630u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x222634: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x222634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x222638: 0xa080006c  sb          $zero, 0x6C($a0)
    ctx->pc = 0x222638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x22263c: 0xa0800114  sb          $zero, 0x114($a0)
    ctx->pc = 0x22263cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 276), (uint8_t)GPR_U32(ctx, 0));
    // 0x222640: 0xa08000fc  sb          $zero, 0xFC($a0)
    ctx->pc = 0x222640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 0));
    // 0x222644: 0xa08000e4  sb          $zero, 0xE4($a0)
    ctx->pc = 0x222644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 228), (uint8_t)GPR_U32(ctx, 0));
    // 0x222648: 0xa08000cc  sb          $zero, 0xCC($a0)
    ctx->pc = 0x222648u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 0));
    // 0x22264c: 0xa08000b4  sb          $zero, 0xB4($a0)
    ctx->pc = 0x22264cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 180), (uint8_t)GPR_U32(ctx, 0));
    // 0x222650: 0xa080009c  sb          $zero, 0x9C($a0)
    ctx->pc = 0x222650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x222654: 0xa0800084  sb          $zero, 0x84($a0)
    ctx->pc = 0x222654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x222658: 0xa0800144  sb          $zero, 0x144($a0)
    ctx->pc = 0x222658u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 324), (uint8_t)GPR_U32(ctx, 0));
    // 0x22265c: 0xa080012c  sb          $zero, 0x12C($a0)
    ctx->pc = 0x22265cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 300), (uint8_t)GPR_U32(ctx, 0));
    // 0x222660: 0xac82015c  sw          $v0, 0x15C($a0)
    ctx->pc = 0x222660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 2));
    // 0x222664: 0x3e00008  jr          $ra
    ctx->pc = 0x222664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222664u;
            // 0x222668: 0xac820160  sw          $v0, 0x160($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22266Cu;
    // 0x22266c: 0x0  nop
    ctx->pc = 0x22266cu;
    // NOP
}
