#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ca970
// Address: 0x1ca970 - 0x1caae0
void entry_1ca970_0x1caae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ca970_0x1caae0");
#endif

    ctx->pc = 0x1ca970u;

    // 0x1ca970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ca970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ca974: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1ca974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1ca978: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ca978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ca97c: 0x2442a770  addiu       $v0, $v0, -0x5890
    ctx->pc = 0x1ca97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944624));
    // 0x1ca980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca984: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ca984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ca988: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca98c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1ca98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ca990: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ca990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ca994: 0xc090f6a  jal         func_243DA8
    ctx->pc = 0x1CA994u;
    SET_GPR_U32(ctx, 31, 0x1CA99Cu);
    ctx->pc = 0x1CA998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA994u;
            // 0x1ca998: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243DA8u;
    if (runtime->hasFunction(0x243DA8u)) {
        auto targetFn = runtime->lookupFunction(0x243DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA99Cu; }
        if (ctx->pc != 0x1CA99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243da8_0x243dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA99Cu; }
        if (ctx->pc != 0x1CA99Cu) { return; }
    }
    ctx->pc = 0x1CA99Cu;
    // 0x1ca99c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1ca99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1ca9a0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1ca9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1ca9a4: 0x24429898  addiu       $v0, $v0, -0x6768
    ctx->pc = 0x1ca9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940824));
    // 0x1ca9a8: 0x246398b8  addiu       $v1, $v1, -0x6748
    ctx->pc = 0x1ca9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940856));
    // 0x1ca9ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1ca9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1ca9b0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ca9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ca9b4: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1ca9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ca9b8: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1ca9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ca9bc: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1ca9bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1ca9c0: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1ca9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ca9c4: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1ca9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ca9c8: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1ca9c8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1ca9cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ca9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca9d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca9d4: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1ca9d4u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ca9d8: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1ca9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1ca9dc: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1ca9dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1ca9e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca9e4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1ca9e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca9e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca9e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca9ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ca9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca9f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1ca9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca9f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ca9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca9f8: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1ca9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x1ca9fc: 0xa2090085  sb          $t1, 0x85($s0)
    ctx->pc = 0x1ca9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 9));
    // 0x1caa00: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1caa00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1caa04: 0xae060044  sw          $a2, 0x44($s0)
    ctx->pc = 0x1caa04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 6));
    // 0x1caa08: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x1caa08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
    // 0x1caa0c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1caa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1caa10: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1caa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1caa14: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x1caa14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1caa18: 0xae070040  sw          $a3, 0x40($s0)
    ctx->pc = 0x1caa18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 7));
    // 0x1caa1c: 0xa2080088  sb          $t0, 0x88($s0)
    ctx->pc = 0x1caa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 8));
    // 0x1caa20: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1caa20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1caa24: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1caa24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1caa28: 0xa2000086  sb          $zero, 0x86($s0)
    ctx->pc = 0x1caa28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caa2c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1caa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1caa30: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1caa30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1caa34: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1caa34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1caa38: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1caa38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1caa3c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1caa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1caa40: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1caa40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1caa44: 0xa600006c  sh          $zero, 0x6C($s0)
    ctx->pc = 0x1caa44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x1caa48: 0xa600006e  sh          $zero, 0x6E($s0)
    ctx->pc = 0x1caa48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 110), (uint16_t)GPR_U32(ctx, 0));
    // 0x1caa4c: 0xa6000070  sh          $zero, 0x70($s0)
    ctx->pc = 0x1caa4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x1caa50: 0xa6000078  sh          $zero, 0x78($s0)
    ctx->pc = 0x1caa50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x1caa54: 0xa2000083  sb          $zero, 0x83($s0)
    ctx->pc = 0x1caa54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caa58: 0xa6000076  sh          $zero, 0x76($s0)
    ctx->pc = 0x1caa58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x1caa5c: 0xa2000084  sb          $zero, 0x84($s0)
    ctx->pc = 0x1caa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caa60: 0xa2000087  sb          $zero, 0x87($s0)
    ctx->pc = 0x1caa60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caa64: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1caa64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1caa68: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1caa68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1caa6c: 0xa6020072  sh          $v0, 0x72($s0)
    ctx->pc = 0x1caa6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x1caa70: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1caa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1caa74: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1caa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1caa78: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x1CAA78u;
    SET_GPR_U32(ctx, 31, 0x1CAA80u);
    ctx->pc = 0x1CAA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA78u;
            // 0x1caa7c: 0xa2080089  sb          $t0, 0x89($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA80u; }
        if (ctx->pc != 0x1CAA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA80u; }
        if (ctx->pc != 0x1CAA80u) { return; }
    }
    ctx->pc = 0x1CAA80u;
    // 0x1caa80: 0xa2020082  sb          $v0, 0x82($s0)
    ctx->pc = 0x1caa80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 2));
    // 0x1caa84: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1caa84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1caa88: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1caa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1caa8c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1caa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1caa90: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x1caa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x1caa94: 0x26312878  addiu       $s1, $s1, 0x2878
    ctx->pc = 0x1caa94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10360));
    // 0x1caa98: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1CAA98u;
    SET_GPR_U32(ctx, 31, 0x1CAAA0u);
    ctx->pc = 0x1CAA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA98u;
            // 0x1caa9c: 0xa6000074  sh          $zero, 0x74($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAAA0u; }
        if (ctx->pc != 0x1CAAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAAA0u; }
        if (ctx->pc != 0x1CAAA0u) { return; }
    }
    ctx->pc = 0x1CAAA0u;
    // 0x1caaa0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1caaa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caaa4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1caaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1caaa8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1caaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1caaac: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1caaacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x1caab0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1caab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1caab4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1caab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1caab8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1caab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1caabc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1caabcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caac0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1caac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1caac4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1caac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1caac8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1caac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1caacc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1caaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1caad0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1caad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1caad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAAD4u;
            // 0x1caad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAADCu;
    // 0x1caadc: 0x0  nop
    ctx->pc = 0x1caadcu;
    // NOP
}
