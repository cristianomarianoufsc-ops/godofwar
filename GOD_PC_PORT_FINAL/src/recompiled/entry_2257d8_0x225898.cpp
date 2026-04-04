#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2257d8
// Address: 0x2257d8 - 0x225898
void entry_2257d8_0x225898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2257d8_0x225898");
#endif

    ctx->pc = 0x2257d8u;

    // 0x2257d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2257d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2257dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2257dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2257e0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2257e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2257e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2257e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2257e8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2257e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2257ec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2257ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2257f0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x2257f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x2257f4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2257f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2257f8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2257f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2257fc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2257fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x225800: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x225800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x225804: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225808: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x225808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x22580c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22580cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x225810: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x225810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x225814: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x225814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x225818: 0x3c01411d  lui         $at, 0x411D
    ctx->pc = 0x225818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16669 << 16));
    // 0x22581c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x22581cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x225820: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x225820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x225824: 0xe4860018  swc1        $f6, 0x18($a0)
    ctx->pc = 0x225824u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x225828: 0xe485001c  swc1        $f5, 0x1C($a0)
    ctx->pc = 0x225828u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x22582c: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x22582cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x225830: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x225830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x225834: 0xe483002c  swc1        $f3, 0x2C($a0)
    ctx->pc = 0x225834u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x225838: 0xe4840034  swc1        $f4, 0x34($a0)
    ctx->pc = 0x225838u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x22583c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x22583cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x225840: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x225840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x225844: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x225844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x225848: 0xa4800038  sh          $zero, 0x38($a0)
    ctx->pc = 0x225848u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x22584c: 0x24688080  addiu       $t0, $v1, -0x7F80
    ctx->pc = 0x22584cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934656));
    // 0x225850: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x225850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x225854: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x225854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x225858: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x225858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x22585c: 0x8507000c  lh          $a3, 0xC($t0)
    ctx->pc = 0x22585cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x225860: 0xb085005f  sdl         $a1, 0x5F($a0)
    ctx->pc = 0x225860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x225864: 0xb4850058  sdr         $a1, 0x58($a0)
    ctx->pc = 0x225864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x225868: 0xac860060  sw          $a2, 0x60($a0)
    ctx->pc = 0x225868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 6));
    // 0x22586c: 0xa4870064  sh          $a3, 0x64($a0)
    ctx->pc = 0x22586cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 7));
    // 0x225870: 0x24478090  addiu       $a3, $v0, -0x7F70
    ctx->pc = 0x225870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934672));
    // 0x225874: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x225874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x225878: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x225878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22587c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x22587cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x225880: 0xb0830047  sdl         $v1, 0x47($a0)
    ctx->pc = 0x225880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x225884: 0xb4830040  sdr         $v1, 0x40($a0)
    ctx->pc = 0x225884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x225888: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x225888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x22588c: 0x3e00008  jr          $ra
    ctx->pc = 0x22588Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225894u;
    // 0x225894: 0x0  nop
    ctx->pc = 0x225894u;
    // NOP
}
