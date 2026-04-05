#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_18b850
// Address: 0x18b850 - 0x18b9e8
void entry_18b850_0x18b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_18b850_0x18b9e8");
#endif

    ctx->pc = 0x18b850u;

    // 0x18b850: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18b850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18b854: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x18b854u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b858: 0x8c45ed58  lw          $a1, -0x12A8($v0)
    ctx->pc = 0x18b858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x18b85c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18b860: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x18b860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x18b864: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x18b864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x18b868: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18b86c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x18b86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x18b870: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x18b870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x18b874: 0x24070bb8  addiu       $a3, $zero, 0xBB8
    ctx->pc = 0x18b874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x18b878: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x18b878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x18b87c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x18b87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x18b880: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x18b880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x18b884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b888: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x18b888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x18b88c: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x18b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x18b890: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18b890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18b894: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x18b894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x18b898: 0x24081f40  addiu       $t0, $zero, 0x1F40
    ctx->pc = 0x18b898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x18b89c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x18b89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x18b8a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18b8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18b8a4: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x18b8a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b8a8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x18b8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x18b8ac: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x18b8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x18b8b0: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x18b8b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18b8b4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x18b8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x18b8b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18b8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b8bc: 0x240a0064  addiu       $t2, $zero, 0x64
    ctx->pc = 0x18b8bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x18b8c0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18b8c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18b8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18b8c8: 0x2409004b  addiu       $t1, $zero, 0x4B
    ctx->pc = 0x18b8c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x18b8cc: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x18b8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x18b8d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18b8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b8d4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x18b8d4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b8d8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x18b8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x18b8dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b8e0: 0xada50080  sw          $a1, 0x80($t5)
    ctx->pc = 0x18b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 128), GPR_U32(ctx, 5));
    // 0x18b8e4: 0xada30084  sw          $v1, 0x84($t5)
    ctx->pc = 0x18b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 132), GPR_U32(ctx, 3));
    // 0x18b8e8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x18b8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x18b8ec: 0xada20028  sw          $v0, 0x28($t5)
    ctx->pc = 0x18b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 2));
    // 0x18b8f0: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x18b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x18b8f4: 0xa5a20026  sh          $v0, 0x26($t5)
    ctx->pc = 0x18b8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x18b8f8: 0xada2003c  sw          $v0, 0x3C($t5)
    ctx->pc = 0x18b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 2));
    // 0x18b8fc: 0xa5a2008c  sh          $v0, 0x8C($t5)
    ctx->pc = 0x18b8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 140), (uint16_t)GPR_U32(ctx, 2));
    // 0x18b900: 0xa5a2008e  sh          $v0, 0x8E($t5)
    ctx->pc = 0x18b900u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 142), (uint16_t)GPR_U32(ctx, 2));
    // 0x18b904: 0xa5a20092  sh          $v0, 0x92($t5)
    ctx->pc = 0x18b904u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x18b908: 0xada40030  sw          $a0, 0x30($t5)
    ctx->pc = 0x18b908u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 4));
    // 0x18b90c: 0xe5a70034  swc1        $f7, 0x34($t5)
    ctx->pc = 0x18b90cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 52), bits); }
    // 0x18b910: 0xe5a6007c  swc1        $f6, 0x7C($t5)
    ctx->pc = 0x18b910u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 124), bits); }
    // 0x18b914: 0xe5a40058  swc1        $f4, 0x58($t5)
    ctx->pc = 0x18b914u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 88), bits); }
    // 0x18b918: 0xe5a9004c  swc1        $f9, 0x4C($t5)
    ctx->pc = 0x18b918u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x18b91c: 0xe5a50050  swc1        $f5, 0x50($t5)
    ctx->pc = 0x18b91cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x18b920: 0xe5a20064  swc1        $f2, 0x64($t5)
    ctx->pc = 0x18b920u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 100), bits); }
    // 0x18b924: 0xe5aa0068  swc1        $f10, 0x68($t5)
    ctx->pc = 0x18b924u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 104), bits); }
    // 0x18b928: 0xe5a30074  swc1        $f3, 0x74($t5)
    ctx->pc = 0x18b928u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 116), bits); }
    // 0x18b92c: 0xe5a10054  swc1        $f1, 0x54($t5)
    ctx->pc = 0x18b92cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 84), bits); }
    // 0x18b930: 0xe5a00078  swc1        $f0, 0x78($t5)
    ctx->pc = 0x18b930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 120), bits); }
    // 0x18b934: 0xe5a8006c  swc1        $f8, 0x6C($t5)
    ctx->pc = 0x18b934u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 108), bits); }
    // 0x18b938: 0xa5a70024  sh          $a3, 0x24($t5)
    ctx->pc = 0x18b938u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 36), (uint16_t)GPR_U32(ctx, 7));
    // 0x18b93c: 0xa5a6008a  sh          $a2, 0x8A($t5)
    ctx->pc = 0x18b93cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 138), (uint16_t)GPR_U32(ctx, 6));
    // 0x18b940: 0xa5a80088  sh          $t0, 0x88($t5)
    ctx->pc = 0x18b940u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 136), (uint16_t)GPR_U32(ctx, 8));
    // 0x18b944: 0xa5a00044  sh          $zero, 0x44($t5)
    ctx->pc = 0x18b944u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x18b948: 0xada4002c  sw          $a0, 0x2C($t5)
    ctx->pc = 0x18b948u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 4));
    // 0x18b94c: 0xe5aa0060  swc1        $f10, 0x60($t5)
    ctx->pc = 0x18b94cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x18b950: 0xada0005c  sw          $zero, 0x5C($t5)
    ctx->pc = 0x18b950u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 0));
    // 0x18b954: 0xe5a90048  swc1        $f9, 0x48($t5)
    ctx->pc = 0x18b954u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 72), bits); }
    // 0x18b958: 0xe5a80070  swc1        $f8, 0x70($t5)
    ctx->pc = 0x18b958u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 112), bits); }
    // 0x18b95c: 0xa5a70022  sh          $a3, 0x22($t5)
    ctx->pc = 0x18b95cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 34), (uint16_t)GPR_U32(ctx, 7));
    // 0x18b960: 0xa5a60020  sh          $a2, 0x20($t5)
    ctx->pc = 0x18b960u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x18b964: 0xada00038  sw          $zero, 0x38($t5)
    ctx->pc = 0x18b964u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 0));
    // 0x18b968: 0xa5a20090  sh          $v0, 0x90($t5)
    ctx->pc = 0x18b968u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x18b96c: 0x95a20012  lhu         $v0, 0x12($t5)
    ctx->pc = 0x18b96cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 18)));
    // 0x18b970: 0xa5ac0094  sh          $t4, 0x94($t5)
    ctx->pc = 0x18b970u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 148), (uint16_t)GPR_U32(ctx, 12));
    // 0x18b974: 0xa5ab0096  sh          $t3, 0x96($t5)
    ctx->pc = 0x18b974u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 150), (uint16_t)GPR_U32(ctx, 11));
    // 0x18b978: 0xa1aa0098  sb          $t2, 0x98($t5)
    ctx->pc = 0x18b978u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 152), (uint8_t)GPR_U32(ctx, 10));
    // 0x18b97c: 0xa1a90099  sb          $t1, 0x99($t5)
    ctx->pc = 0x18b97cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 153), (uint8_t)GPR_U32(ctx, 9));
    // 0x18b980: 0xa1a5009a  sb          $a1, 0x9A($t5)
    ctx->pc = 0x18b980u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 154), (uint8_t)GPR_U32(ctx, 5));
    // 0x18b984: 0xada30040  sw          $v1, 0x40($t5)
    ctx->pc = 0x18b984u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 64), GPR_U32(ctx, 3));
    // 0x18b988: 0xa5a2009c  sh          $v0, 0x9C($t5)
    ctx->pc = 0x18b988u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 156), (uint16_t)GPR_U32(ctx, 2));
    // 0x18b98c: 0xada00018  sw          $zero, 0x18($t5)
    ctx->pc = 0x18b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 0));
    // 0x18b990: 0xa1a0009b  sb          $zero, 0x9B($t5)
    ctx->pc = 0x18b990u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 155), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b994: 0xada0001c  sw          $zero, 0x1C($t5)
    ctx->pc = 0x18b994u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 0));
    // 0x18b998: 0xa5a0009e  sh          $zero, 0x9E($t5)
    ctx->pc = 0x18b998u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 158), (uint16_t)GPR_U32(ctx, 0));
    // 0x18b99c: 0xe1040  sll         $v0, $t6, 1
    ctx->pc = 0x18b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x18b9a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18b9a4: 0x0  nop
    ctx->pc = 0x18b9a4u;
    // NOP
label_18b9a8:
    // 0x18b9a8: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x18b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x18b9ac: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x18b9acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x18b9b0: 0xa44300a0  sh          $v1, 0xA0($v0)
    ctx->pc = 0x18b9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x18b9b4: 0x29c20006  slti        $v0, $t6, 0x6
    ctx->pc = 0x18b9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x18b9b8: 0x0  nop
    ctx->pc = 0x18b9b8u;
    // NOP
    // 0x18b9bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18B9BCu;
    {
        const bool branch_taken_0x18b9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B9BCu;
            // 0x18b9c0: 0xe1040  sll         $v0, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9bc) {
            ctx->pc = 0x18B9A8u;
            runtime->cooperativeGuestYield();
            goto label_18b9a8;
        }
    }
    ctx->pc = 0x18B9C4u;
    // 0x18b9c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b9c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b9cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18b9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18b9d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18b9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b9d4: 0xe5a000ac  swc1        $f0, 0xAC($t5)
    ctx->pc = 0x18b9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 172), bits); }
    // 0x18b9d8: 0xe5a100b4  swc1        $f1, 0xB4($t5)
    ctx->pc = 0x18b9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 180), bits); }
    // 0x18b9dc: 0xada000b8  sw          $zero, 0xB8($t5)
    ctx->pc = 0x18b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 184), GPR_U32(ctx, 0));
    // 0x18b9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18B9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B9E0u;
            // 0x18b9e4: 0xada000b0  sw          $zero, 0xB0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18B9A8u: goto label_18b9a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18B9E8u;
}
