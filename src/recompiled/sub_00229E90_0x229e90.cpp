#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229E90
// Address: 0x229e90 - 0x22a380
void sub_00229E90_0x229e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229E90_0x229e90");
#endif

    ctx->pc = 0x229e90u;

    // 0x229e90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x229e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x229e94: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x229e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x229e98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x229e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x229e9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x229e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x229ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ea4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x229ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x229ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229eac: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x229eacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x229eb0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x229eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x229eb4: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x229eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229eb8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x229eb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229ebc: 0x0  nop
    ctx->pc = 0x229ebcu;
    // NOP
    // 0x229ec0: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x229EC0u;
    {
        const bool branch_taken_0x229ec0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x229EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229EC0u;
            // 0x229ec4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ec0) {
            ctx->pc = 0x229FB0u;
            goto label_229fb0;
        }
    }
    ctx->pc = 0x229EC8u;
    // 0x229ec8: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x229ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229ecc: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x229eccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229ed0: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x229ed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229ed4: 0x0  nop
    ctx->pc = 0x229ed4u;
    // NOP
    // 0x229ed8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x229ED8u;
    {
        const bool branch_taken_0x229ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x229EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229ED8u;
            // 0x229edc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ed8) {
            ctx->pc = 0x229F74u;
            goto label_229f74;
        }
    }
    ctx->pc = 0x229EE0u;
    // 0x229ee0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x229ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x229ee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229ee8: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x229ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x229eec: 0x6a02010f  ldl         $v0, 0x10F($s0)
    ctx->pc = 0x229eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x229ef0: 0x6e020108  ldr         $v0, 0x108($s0)
    ctx->pc = 0x229ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x229ef4: 0x6a030117  ldl         $v1, 0x117($s0)
    ctx->pc = 0x229ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x229ef8: 0x6e030110  ldr         $v1, 0x110($s0)
    ctx->pc = 0x229ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x229efc: 0x6a04011f  ldl         $a0, 0x11F($s0)
    ctx->pc = 0x229efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x229f00: 0x6e040118  ldr         $a0, 0x118($s0)
    ctx->pc = 0x229f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x229f04: 0x6a050127  ldl         $a1, 0x127($s0)
    ctx->pc = 0x229f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x229f08: 0x6e050120  ldr         $a1, 0x120($s0)
    ctx->pc = 0x229f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x229f0c: 0xb202014f  sdl         $v0, 0x14F($s0)
    ctx->pc = 0x229f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f10: 0xb6020148  sdr         $v0, 0x148($s0)
    ctx->pc = 0x229f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f14: 0xb2030157  sdl         $v1, 0x157($s0)
    ctx->pc = 0x229f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f18: 0xb6030150  sdr         $v1, 0x150($s0)
    ctx->pc = 0x229f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f1c: 0xb204015f  sdl         $a0, 0x15F($s0)
    ctx->pc = 0x229f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f20: 0xb6040158  sdr         $a0, 0x158($s0)
    ctx->pc = 0x229f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f24: 0xb2050167  sdl         $a1, 0x167($s0)
    ctx->pc = 0x229f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f28: 0xb6050160  sdr         $a1, 0x160($s0)
    ctx->pc = 0x229f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f2c: 0x6a02012f  ldl         $v0, 0x12F($s0)
    ctx->pc = 0x229f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x229f30: 0x6e020128  ldr         $v0, 0x128($s0)
    ctx->pc = 0x229f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x229f34: 0x6a030137  ldl         $v1, 0x137($s0)
    ctx->pc = 0x229f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x229f38: 0x6e030130  ldr         $v1, 0x130($s0)
    ctx->pc = 0x229f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x229f3c: 0x6a04013f  ldl         $a0, 0x13F($s0)
    ctx->pc = 0x229f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x229f40: 0x6e040138  ldr         $a0, 0x138($s0)
    ctx->pc = 0x229f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x229f44: 0x6a050147  ldl         $a1, 0x147($s0)
    ctx->pc = 0x229f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x229f48: 0x6e050140  ldr         $a1, 0x140($s0)
    ctx->pc = 0x229f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x229f4c: 0xb202016f  sdl         $v0, 0x16F($s0)
    ctx->pc = 0x229f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f50: 0xb6020168  sdr         $v0, 0x168($s0)
    ctx->pc = 0x229f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f54: 0xb2030177  sdl         $v1, 0x177($s0)
    ctx->pc = 0x229f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f58: 0xb6030170  sdr         $v1, 0x170($s0)
    ctx->pc = 0x229f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f5c: 0xb204017f  sdl         $a0, 0x17F($s0)
    ctx->pc = 0x229f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f60: 0xb6040178  sdr         $a0, 0x178($s0)
    ctx->pc = 0x229f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f64: 0xb2050187  sdl         $a1, 0x187($s0)
    ctx->pc = 0x229f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f68: 0xb6050180  sdr         $a1, 0x180($s0)
    ctx->pc = 0x229f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229f6c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x229F6Cu;
    {
        const bool branch_taken_0x229f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229F6Cu;
            // 0x229f70: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f6c) {
            ctx->pc = 0x229FB4u;
            goto label_229fb4;
        }
    }
    ctx->pc = 0x229F74u;
label_229f74:
    // 0x229f74: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x229f74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
label_229f78:
    // 0x229f78: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x229f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x229f7c: 0x26030148  addiu       $v1, $s0, 0x148
    ctx->pc = 0x229f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x229f80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229f84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x229f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x229f88: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x229f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x229f8c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x229f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229f90: 0xc4410108  lwc1        $f1, 0x108($v0)
    ctx->pc = 0x229f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229f94: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x229f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x229f98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x229f98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x229f9c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x229f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x229fa0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x229fa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229fa4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x229FA4u;
    {
        const bool branch_taken_0x229fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229FA4u;
            // 0x229fa8: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fa4) {
            ctx->pc = 0x229F78u;
            runtime->cooperativeGuestYield();
            goto label_229f78;
        }
    }
    ctx->pc = 0x229FACu;
    // 0x229fac: 0xe6020188  swc1        $f2, 0x188($s0)
    ctx->pc = 0x229facu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_229fb0:
    // 0x229fb0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x229fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_229fb4:
    // 0x229fb4: 0x24454e98  addiu       $a1, $v0, 0x4E98
    ctx->pc = 0x229fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20120));
    // 0x229fb8: 0x6a06014f  ldl         $a2, 0x14F($s0)
    ctx->pc = 0x229fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x229fbc: 0x6e060148  ldr         $a2, 0x148($s0)
    ctx->pc = 0x229fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x229fc0: 0x6a070157  ldl         $a3, 0x157($s0)
    ctx->pc = 0x229fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x229fc4: 0x6e070150  ldr         $a3, 0x150($s0)
    ctx->pc = 0x229fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x229fc8: 0x6a03015f  ldl         $v1, 0x15F($s0)
    ctx->pc = 0x229fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x229fcc: 0x6e030158  ldr         $v1, 0x158($s0)
    ctx->pc = 0x229fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x229fd0: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x229fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229fd4: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x229fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229fd8: 0xb0a7000f  sdl         $a3, 0xF($a1)
    ctx->pc = 0x229fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229fdc: 0xb4a70008  sdr         $a3, 0x8($a1)
    ctx->pc = 0x229fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229fe0: 0xb0a30017  sdl         $v1, 0x17($a1)
    ctx->pc = 0x229fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229fe4: 0xb4a30010  sdr         $v1, 0x10($a1)
    ctx->pc = 0x229fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229fe8: 0x6a060167  ldl         $a2, 0x167($s0)
    ctx->pc = 0x229fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x229fec: 0x6e060160  ldr         $a2, 0x160($s0)
    ctx->pc = 0x229fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x229ff0: 0x6a07016f  ldl         $a3, 0x16F($s0)
    ctx->pc = 0x229ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x229ff4: 0x6e070168  ldr         $a3, 0x168($s0)
    ctx->pc = 0x229ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x229ff8: 0x6a030177  ldl         $v1, 0x177($s0)
    ctx->pc = 0x229ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x229ffc: 0x6e030170  ldr         $v1, 0x170($s0)
    ctx->pc = 0x229ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22a000: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x22a000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a004: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x22a004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a008: 0xb0a70027  sdl         $a3, 0x27($a1)
    ctx->pc = 0x22a008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a00c: 0xb4a70020  sdr         $a3, 0x20($a1)
    ctx->pc = 0x22a00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a010: 0xb0a3002f  sdl         $v1, 0x2F($a1)
    ctx->pc = 0x22a010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a014: 0xb4a30028  sdr         $v1, 0x28($a1)
    ctx->pc = 0x22a014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a018: 0x6a06017f  ldl         $a2, 0x17F($s0)
    ctx->pc = 0x22a018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x22a01c: 0x6e060178  ldr         $a2, 0x178($s0)
    ctx->pc = 0x22a01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x22a020: 0x6a070187  ldl         $a3, 0x187($s0)
    ctx->pc = 0x22a020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x22a024: 0x6e070180  ldr         $a3, 0x180($s0)
    ctx->pc = 0x22a024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x22a028: 0xb0a60037  sdl         $a2, 0x37($a1)
    ctx->pc = 0x22a028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a02c: 0xb4a60030  sdr         $a2, 0x30($a1)
    ctx->pc = 0x22a02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a030: 0xb0a7003f  sdl         $a3, 0x3F($a1)
    ctx->pc = 0x22a030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a034: 0xb4a70038  sdr         $a3, 0x38($a1)
    ctx->pc = 0x22a034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a038: 0xc05d496  jal         func_175258
    ctx->pc = 0x22A038u;
    SET_GPR_U32(ctx, 31, 0x22A040u);
    ctx->pc = 0x22A03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A038u;
            // 0x22a03c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175258u;
    if (runtime->hasFunction(0x175258u)) {
        auto targetFn = runtime->lookupFunction(0x175258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A040u; }
        if (ctx->pc != 0x22A040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175258_0x175268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A040u; }
        if (ctx->pc != 0x22A040u) { return; }
    }
    ctx->pc = 0x22A040u;
    // 0x22a040: 0x544000c7  bnel        $v0, $zero, . + 4 + (0xC7 << 2)
    ctx->pc = 0x22A040u;
    {
        const bool branch_taken_0x22a040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a040) {
            ctx->pc = 0x22A044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A040u;
            // 0x22a044: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A360u;
            goto label_22a360;
        }
    }
    ctx->pc = 0x22A048u;
    // 0x22a048: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22a048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22a04c: 0x8c4211f8  lw          $v0, 0x11F8($v0)
    ctx->pc = 0x22a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4600)));
    // 0x22a050: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A050u;
    {
        const bool branch_taken_0x22a050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A050u;
            // 0x22a054: 0x3c050030  lui         $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a050) {
            ctx->pc = 0x22A06Cu;
            goto label_22a06c;
        }
    }
    ctx->pc = 0x22A058u;
    // 0x22a058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a05c: 0xc08ac00  jal         func_22B000
    ctx->pc = 0x22A05Cu;
    SET_GPR_U32(ctx, 31, 0x22A064u);
    ctx->pc = 0x22A060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A05Cu;
            // 0x22a060: 0x24a53530  addiu       $a1, $a1, 0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B000u;
    if (runtime->hasFunction(0x22B000u)) {
        auto targetFn = runtime->lookupFunction(0x22B000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A064u; }
        if (ctx->pc != 0x22A064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B000_0x22b000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A064u; }
        if (ctx->pc != 0x22A064u) { return; }
    }
    ctx->pc = 0x22A064u;
    // 0x22a064: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x22A064u;
    {
        const bool branch_taken_0x22a064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A064u;
            // 0x22a068: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a064) {
            ctx->pc = 0x22A360u;
            goto label_22a360;
        }
    }
    ctx->pc = 0x22A06Cu;
label_22a06c:
    // 0x22a06c: 0xc08a590  jal         func_229640
    ctx->pc = 0x22A06Cu;
    SET_GPR_U32(ctx, 31, 0x22A074u);
    ctx->pc = 0x22A070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A06Cu;
            // 0x22a070: 0x24120060  addiu       $s2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229640u;
    if (runtime->hasFunction(0x229640u)) {
        auto targetFn = runtime->lookupFunction(0x229640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A074u; }
        if (ctx->pc != 0x22A074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229640_0x229640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A074u; }
        if (ctx->pc != 0x22A074u) { return; }
    }
    ctx->pc = 0x22A074u;
    // 0x22a074: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a078: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x22a078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a07c: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x22a07cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a080: 0xc08a5c4  jal         func_229710
    ctx->pc = 0x22A080u;
    SET_GPR_U32(ctx, 31, 0x22A088u);
    ctx->pc = 0x22A084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A080u;
            // 0x22a084: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229710u;
    if (runtime->hasFunction(0x229710u)) {
        auto targetFn = runtime->lookupFunction(0x229710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A088u; }
        if (ctx->pc != 0x22A088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229710_0x229710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A088u; }
        if (ctx->pc != 0x22A088u) { return; }
    }
    ctx->pc = 0x22A088u;
    // 0x22a088: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x22a088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a08c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x22a08cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x22a090: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x22a090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a094: 0xc08a5c4  jal         func_229710
    ctx->pc = 0x22A094u;
    SET_GPR_U32(ctx, 31, 0x22A09Cu);
    ctx->pc = 0x22A098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A094u;
            // 0x22a098: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229710u;
    if (runtime->hasFunction(0x229710u)) {
        auto targetFn = runtime->lookupFunction(0x229710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A09Cu; }
        if (ctx->pc != 0x22A09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229710_0x229710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A09Cu; }
        if (ctx->pc != 0x22A09Cu) { return; }
    }
    ctx->pc = 0x22A09Cu;
    // 0x22a09c: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x22a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x22a0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a0a4: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x22A0A4u;
    {
        const bool branch_taken_0x22a0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0A4u;
            // 0x22a0a8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0a4) {
            ctx->pc = 0x22A16Cu;
            goto label_22a16c;
        }
    }
    ctx->pc = 0x22A0ACu;
    // 0x22a0ac: 0x544000ac  bnel        $v0, $zero, . + 4 + (0xAC << 2)
    ctx->pc = 0x22A0ACu;
    {
        const bool branch_taken_0x22a0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a0ac) {
            ctx->pc = 0x22A0B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0ACu;
            // 0x22a0b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A360u;
            goto label_22a360;
        }
    }
    ctx->pc = 0x22A0B4u;
    // 0x22a0b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a0b8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A0B8u;
    {
        const bool branch_taken_0x22a0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0B8u;
            // 0x22a0bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0b8) {
            ctx->pc = 0x22A0D0u;
            goto label_22a0d0;
        }
    }
    ctx->pc = 0x22A0C0u;
    // 0x22a0c0: 0x50620087  beql        $v1, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x22A0C0u;
    {
        const bool branch_taken_0x22a0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22a0c0) {
            ctx->pc = 0x22A0C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0C0u;
            // 0x22a0c4: 0x8e0300c0  lw          $v1, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A2E0u;
            goto label_22a2e0;
        }
    }
    ctx->pc = 0x22A0C8u;
    // 0x22a0c8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x22A0C8u;
    {
        const bool branch_taken_0x22a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0C8u;
            // 0x22a0cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0c8) {
            ctx->pc = 0x22A360u;
            goto label_22a360;
        }
    }
    ctx->pc = 0x22A0D0u;
label_22a0d0:
    // 0x22a0d0: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x22a0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22a0d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22a0d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22a0d8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x22a0d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a0dc: 0x0  nop
    ctx->pc = 0x22a0dcu;
    // NOP
    // 0x22a0e0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x22A0E0u;
    {
        const bool branch_taken_0x22a0e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22A0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0E0u;
            // 0x22a0e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0e0) {
            ctx->pc = 0x22A110u;
            goto label_22a110;
        }
    }
    ctx->pc = 0x22A0E8u;
    // 0x22a0e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22a0ec: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x22a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a0f0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x22a0f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x22a0f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22a0f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a0f8: 0x0  nop
    ctx->pc = 0x22a0f8u;
    // NOP
    // 0x22a0fc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x22A0FCu;
    {
        const bool branch_taken_0x22a0fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22A100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0FCu;
            // 0x22a100: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0fc) {
            ctx->pc = 0x22A124u;
            goto label_22a124;
        }
    }
    ctx->pc = 0x22A104u;
    // 0x22a104: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x22a104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x22a108: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22A108u;
    {
        const bool branch_taken_0x22a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A108u;
            // 0x22a10c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a108) {
            ctx->pc = 0x22A124u;
            goto label_22a124;
        }
    }
    ctx->pc = 0x22A110u;
label_22a110:
    // 0x22a110: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x22a110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a114: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x22a114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22a118: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x22a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22a11c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22a120: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22a120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22a124:
    // 0x22a124: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x22A124u;
    {
        const bool branch_taken_0x22a124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A124u;
            // 0x22a128: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a124) {
            ctx->pc = 0x22A35Cu;
            goto label_22a35c;
        }
    }
    ctx->pc = 0x22A12Cu;
    // 0x22a12c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x22a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a130: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22a130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x22a134: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x22a134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22a138: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x22a138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x22a13c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22a140: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A140u;
    {
        const bool branch_taken_0x22a140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a140) {
            ctx->pc = 0x22A144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A140u;
            // 0x22a144: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A15Cu;
            goto label_22a15c;
        }
    }
    ctx->pc = 0x22A148u;
    // 0x22a148: 0xc60c00cc  lwc1        $f12, 0xCC($s0)
    ctx->pc = 0x22a148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22a14c: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22A14Cu;
    SET_GPR_U32(ctx, 31, 0x22A154u);
    ctx->pc = 0x22A150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A14Cu;
            // 0x22a150: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A154u; }
        if (ctx->pc != 0x22A154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A154u; }
        if (ctx->pc != 0x22A154u) { return; }
    }
    ctx->pc = 0x22A154u;
    // 0x22a154: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x22a154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x22a158: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x22a158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_22a15c:
    // 0x22a15c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x22a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a160: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22a160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x22a164: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x22A164u;
    {
        const bool branch_taken_0x22a164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A164u;
            // 0x22a168: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a164) {
            ctx->pc = 0x22A35Cu;
            goto label_22a35c;
        }
    }
    ctx->pc = 0x22A16Cu;
label_22a16c:
    // 0x22a16c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x22a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a170: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x22a170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22a174: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x22a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22a178: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22a17c: 0x54400078  bnel        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x22A17Cu;
    {
        const bool branch_taken_0x22a17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a17c) {
            ctx->pc = 0x22A180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A17Cu;
            // 0x22a180: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A360u;
            goto label_22a360;
        }
    }
    ctx->pc = 0x22A184u;
    // 0x22a184: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22a184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22a188: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x22a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a18c: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x22a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a190: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22a190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22a194: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22a194u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22a198: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x22a198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a19c: 0x0  nop
    ctx->pc = 0x22a19cu;
    // NOP
    // 0x22a1a0: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
    ctx->pc = 0x22A1A0u;
    {
        const bool branch_taken_0x22a1a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22A1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A1A0u;
            // 0x22a1a4: 0xe6000100  swc1        $f0, 0x100($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a1a0) {
            ctx->pc = 0x22A35Cu;
            goto label_22a35c;
        }
    }
    ctx->pc = 0x22A1A8u;
    // 0x22a1a8: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x22a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x22a1ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22a1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1b4: 0x0  nop
    ctx->pc = 0x22a1b4u;
    // NOP
label_22a1b8:
    // 0x22a1b8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x22a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22a1bc: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x22a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22a1c0: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x22a1c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22a1c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22a1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22a1c8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x22a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22a1cc: 0x80420018  lb          $v0, 0x18($v0)
    ctx->pc = 0x22a1ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22a1d0: 0x28c30014  slti        $v1, $a2, 0x14
    ctx->pc = 0x22a1d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x22a1d4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22A1D4u;
    {
        const bool branch_taken_0x22a1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A1D4u;
            // 0x22a1d8: 0x82880b  movn        $s1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a1d4) {
            ctx->pc = 0x22A1B8u;
            runtime->cooperativeGuestYield();
            goto label_22a1b8;
        }
    }
    ctx->pc = 0x22A1DCu;
    // 0x22a1dc: 0x0  nop
    ctx->pc = 0x22a1dcu;
    // NOP
label_22a1e0:
    // 0x22a1e0: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x22a1e0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22a1e4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x22a1e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x22a1e8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x22a1e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22a1ec: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x22A1ECu;
    SET_GPR_U32(ctx, 31, 0x22A1F4u);
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1F4u; }
        if (ctx->pc != 0x22A1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1F4u; }
        if (ctx->pc != 0x22A1F4u) { return; }
    }
    ctx->pc = 0x22A1F4u;
    // 0x22a1f4: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x22a1f4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x22a1f8: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x22a1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x22a1fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22a1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22a200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22a208: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x22a208u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x22a20c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x22a20cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x22a210: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x22a210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x22a214: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22a214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22a218: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x22a218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x22a21c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x22a21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22a220: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A220u;
    {
        const bool branch_taken_0x22a220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A220u;
            // 0x22a224: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a220) {
            ctx->pc = 0x22A238u;
            goto label_22a238;
        }
    }
    ctx->pc = 0x22A228u;
    // 0x22a228: 0x8c4211fc  lw          $v0, 0x11FC($v0)
    ctx->pc = 0x22a228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4604)));
    // 0x22a22c: 0x1062ffec  beq         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x22A22Cu;
    {
        const bool branch_taken_0x22a22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A22Cu;
            // 0x22a230: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a22c) {
            ctx->pc = 0x22A1E0u;
            runtime->cooperativeGuestYield();
            goto label_22a1e0;
        }
    }
    ctx->pc = 0x22A234u;
    // 0x22a234: 0x0  nop
    ctx->pc = 0x22a234u;
    // NOP
label_22a238:
    // 0x22a238: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x22a238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x22a23c: 0xac4311fc  sw          $v1, 0x11FC($v0)
    ctx->pc = 0x22a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4604), GPR_U32(ctx, 3));
    // 0x22a240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22a240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22A244u;
    {
        const bool branch_taken_0x22a244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A244u;
            // 0x22a248: 0x80a20018  lb          $v0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a244) {
            ctx->pc = 0x22A268u;
            goto label_22a268;
        }
    }
    ctx->pc = 0x22A24Cu;
    // 0x22a24c: 0x0  nop
    ctx->pc = 0x22a24cu;
    // NOP
label_22a250:
    // 0x22a250: 0x28c20014  slti        $v0, $a2, 0x14
    ctx->pc = 0x22a250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x22a254: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A254u;
    {
        const bool branch_taken_0x22a254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A254u;
            // 0x22a258: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a254) {
            ctx->pc = 0x22A27Cu;
            goto label_22a27c;
        }
    }
    ctx->pc = 0x22A25Cu;
    // 0x22a25c: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x22a25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22a260: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x22a260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22a264: 0x80420018  lb          $v0, 0x18($v0)
    ctx->pc = 0x22a264u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_22a268:
    // 0x22a268: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22A268u;
    {
        const bool branch_taken_0x22a268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a268) {
            ctx->pc = 0x22A26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A268u;
            // 0x22a26c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A250u;
            runtime->cooperativeGuestYield();
            goto label_22a250;
        }
    }
    ctx->pc = 0x22A270u;
    // 0x22a270: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22a270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22a274: 0x463fff6  bgezl       $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x22A274u;
    {
        const bool branch_taken_0x22a274 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22a274) {
            ctx->pc = 0x22A278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A274u;
            // 0x22a278: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A250u;
            runtime->cooperativeGuestYield();
            goto label_22a250;
        }
    }
    ctx->pc = 0x22A27Cu;
label_22a27c:
    // 0x22a27c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x22a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a280: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x22a280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22a284: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x22a284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22a288: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x22a288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22a28c: 0x643018  mult        $a2, $v1, $a0
    ctx->pc = 0x22a28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x22a290: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x22a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x22a294: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a298: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22a298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22a29c: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x22a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x22a2a0: 0xc08a732  jal         func_229CC8
    ctx->pc = 0x22A2A0u;
    SET_GPR_U32(ctx, 31, 0x22A2A8u);
    ctx->pc = 0x22A2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2A0u;
            // 0x22a2a4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229CC8u;
    if (runtime->hasFunction(0x229CC8u)) {
        auto targetFn = runtime->lookupFunction(0x229CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2A8u; }
        if (ctx->pc != 0x22A2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229CC8_0x229cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2A8u; }
        if (ctx->pc != 0x22A2A8u) { return; }
    }
    ctx->pc = 0x22A2A8u;
    // 0x22a2a8: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x22a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x22a2ac: 0xc4540214  lwc1        $f20, 0x214($v0)
    ctx->pc = 0x22a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a2b0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x22A2B0u;
    SET_GPR_U32(ctx, 31, 0x22A2B8u);
    ctx->pc = 0x22A2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2B0u;
            // 0x22a2b4: 0xc4550210  lwc1        $f21, 0x210($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2B8u; }
        if (ctx->pc != 0x22A2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2B8u; }
        if (ctx->pc != 0x22A2B8u) { return; }
    }
    ctx->pc = 0x22A2B8u;
    // 0x22a2b8: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x22a2b8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x22a2bc: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x22a2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x22a2c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22a2c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22a2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a2c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22a2cc: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x22a2ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x22a2d0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x22a2d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x22a2d4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x22a2d4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x22a2d8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x22A2D8u;
    {
        const bool branch_taken_0x22a2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2D8u;
            // 0x22a2dc: 0xe6150100  swc1        $f21, 0x100($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2d8) {
            ctx->pc = 0x22A35Cu;
            goto label_22a35c;
        }
    }
    ctx->pc = 0x22A2E0u;
label_22a2e0:
    // 0x22a2e0: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x22a2e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a2e4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x22a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22a2e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22a2ec: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22a2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x22a2f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22a2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x22a2f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A2F4u;
    {
        const bool branch_taken_0x22a2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2F4u;
            // 0x22a2f8: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2f4) {
            ctx->pc = 0x22A318u;
            goto label_22a318;
        }
    }
    ctx->pc = 0x22A2FCu;
    // 0x22a2fc: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A2FCu;
    {
        const bool branch_taken_0x22a2fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2FCu;
            // 0x22a300: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2fc) {
            ctx->pc = 0x22A31Cu;
            goto label_22a31c;
        }
    }
    ctx->pc = 0x22A304u;
    // 0x22a304: 0xc60c00f0  lwc1        $f12, 0xF0($s0)
    ctx->pc = 0x22a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22a308: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22A308u;
    SET_GPR_U32(ctx, 31, 0x22A310u);
    ctx->pc = 0x22A30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A308u;
            // 0x22a30c: 0x8e0500f4  lw          $a1, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A310u; }
        if (ctx->pc != 0x22A310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A310u; }
        if (ctx->pc != 0x22A310u) { return; }
    }
    ctx->pc = 0x22A310u;
    // 0x22a310: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x22A310u;
    {
        const bool branch_taken_0x22a310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A310u;
            // 0x22a314: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a310) {
            ctx->pc = 0x22A360u;
            goto label_22a360;
        }
    }
    ctx->pc = 0x22A318u;
label_22a318:
    // 0x22a318: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x22a318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_22a31c:
    // 0x22a31c: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x22a31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x22a320: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22a324: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A324u;
    {
        const bool branch_taken_0x22a324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a324) {
            ctx->pc = 0x22A348u;
            goto label_22a348;
        }
    }
    ctx->pc = 0x22A32Cu;
    // 0x22a32c: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22A32Cu;
    {
        const bool branch_taken_0x22a32c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a32c) {
            ctx->pc = 0x22A330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A32Cu;
            // 0x22a330: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A360u;
            goto label_22a360;
        }
    }
    ctx->pc = 0x22A334u;
    // 0x22a334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a338: 0xc08a732  jal         func_229CC8
    ctx->pc = 0x22A338u;
    SET_GPR_U32(ctx, 31, 0x22A340u);
    ctx->pc = 0x22A33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A338u;
            // 0x22a33c: 0x260500d4  addiu       $a1, $s0, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229CC8u;
    if (runtime->hasFunction(0x229CC8u)) {
        auto targetFn = runtime->lookupFunction(0x229CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A340u; }
        if (ctx->pc != 0x22A340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229CC8_0x229cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A340u; }
        if (ctx->pc != 0x22A340u) { return; }
    }
    ctx->pc = 0x22A340u;
    // 0x22a340: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22A340u;
    {
        const bool branch_taken_0x22a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A340u;
            // 0x22a344: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a340) {
            ctx->pc = 0x22A360u;
            goto label_22a360;
        }
    }
    ctx->pc = 0x22A348u;
label_22a348:
    // 0x22a348: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A348u;
    {
        const bool branch_taken_0x22a348 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a348) {
            ctx->pc = 0x22A34Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A348u;
            // 0x22a34c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A360u;
            goto label_22a360;
        }
    }
    ctx->pc = 0x22A350u;
    // 0x22a350: 0xc60c00ec  lwc1        $f12, 0xEC($s0)
    ctx->pc = 0x22a350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22a354: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22A354u;
    SET_GPR_U32(ctx, 31, 0x22A35Cu);
    ctx->pc = 0x22A358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A354u;
            // 0x22a358: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A35Cu; }
        if (ctx->pc != 0x22A35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A35Cu; }
        if (ctx->pc != 0x22A35Cu) { return; }
    }
    ctx->pc = 0x22A35Cu;
label_22a35c:
    // 0x22a35c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22a35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22a360:
    // 0x22a360: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22a360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a364: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22a364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a36c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x22a36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22a370: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x22a370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a374: 0x3e00008  jr          $ra
    ctx->pc = 0x22A374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A374u;
            // 0x22a378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229F74u: goto label_229f74;
            case 0x229F78u: goto label_229f78;
            case 0x229FB0u: goto label_229fb0;
            case 0x229FB4u: goto label_229fb4;
            case 0x22A06Cu: goto label_22a06c;
            case 0x22A0D0u: goto label_22a0d0;
            case 0x22A110u: goto label_22a110;
            case 0x22A124u: goto label_22a124;
            case 0x22A15Cu: goto label_22a15c;
            case 0x22A16Cu: goto label_22a16c;
            case 0x22A1B8u: goto label_22a1b8;
            case 0x22A1E0u: goto label_22a1e0;
            case 0x22A238u: goto label_22a238;
            case 0x22A250u: goto label_22a250;
            case 0x22A268u: goto label_22a268;
            case 0x22A27Cu: goto label_22a27c;
            case 0x22A2E0u: goto label_22a2e0;
            case 0x22A318u: goto label_22a318;
            case 0x22A31Cu: goto label_22a31c;
            case 0x22A348u: goto label_22a348;
            case 0x22A35Cu: goto label_22a35c;
            case 0x22A360u: goto label_22a360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22A37Cu;
    // 0x22a37c: 0x0  nop
    ctx->pc = 0x22a37cu;
    // NOP
}
