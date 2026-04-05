#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026D770
// Address: 0x26d770 - 0x26d858
void sub_0026D770_0x26d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D770_0x26d770");
#endif

    ctx->pc = 0x26d770u;

    // 0x26d770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26d770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26d774: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26d774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26d778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26d77c: 0xc09b4f0  jal         func_26D3C0
    ctx->pc = 0x26D77Cu;
    SET_GPR_U32(ctx, 31, 0x26D784u);
    ctx->pc = 0x26D780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D77Cu;
            // 0x26d780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D3C0u;
    if (runtime->hasFunction(0x26D3C0u)) {
        auto targetFn = runtime->lookupFunction(0x26D3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D784u; }
        if (ctx->pc != 0x26D784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26d3c0_0x26d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D784u; }
        if (ctx->pc != 0x26D784u) { return; }
    }
    ctx->pc = 0x26D784u;
    // 0x26d784: 0x6a020027  ldl         $v0, 0x27($s0)
    ctx->pc = 0x26d784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x26d788: 0x6e020020  ldr         $v0, 0x20($s0)
    ctx->pc = 0x26d788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x26d78c: 0xb2020037  sdl         $v0, 0x37($s0)
    ctx->pc = 0x26d78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26d790: 0xb6020030  sdr         $v0, 0x30($s0)
    ctx->pc = 0x26d790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26d794: 0x3c08ffc0  lui         $t0, 0xFFC0
    ctx->pc = 0x26d794u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65472 << 16));
    // 0x26d798: 0x350807ff  ori         $t0, $t0, 0x7FF
    ctx->pc = 0x26d798u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2047);
    // 0x26d79c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x26d79cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x26d7a0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x26d7a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x26d7a4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x26d7a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x26d7a8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x26d7a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x26d7ac: 0x6a02002f  ldl         $v0, 0x2F($s0)
    ctx->pc = 0x26d7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x26d7b0: 0x6e020028  ldr         $v0, 0x28($s0)
    ctx->pc = 0x26d7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x26d7b4: 0xb202003f  sdl         $v0, 0x3F($s0)
    ctx->pc = 0x26d7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26d7b8: 0xb6020038  sdr         $v0, 0x38($s0)
    ctx->pc = 0x26d7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26d7bc: 0x3c09ff80  lui         $t1, 0xFF80
    ctx->pc = 0x26d7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65408 << 16));
    // 0x26d7c0: 0x35290fff  ori         $t1, $t1, 0xFFF
    ctx->pc = 0x26d7c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4095);
    // 0x26d7c4: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x26d7c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x26d7c8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x26d7c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x26d7cc: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x26d7ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x26d7d0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x26d7d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x26d7d4: 0x6a020017  ldl         $v0, 0x17($s0)
    ctx->pc = 0x26d7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x26d7d8: 0x6e020010  ldr         $v0, 0x10($s0)
    ctx->pc = 0x26d7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x26d7dc: 0xb202001f  sdl         $v0, 0x1F($s0)
    ctx->pc = 0x26d7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26d7e0: 0xb6020018  sdr         $v0, 0x18($s0)
    ctx->pc = 0x26d7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26d7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d7e8: 0xde070020  ld          $a3, 0x20($s0)
    ctx->pc = 0x26d7e8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x26d7ec: 0xde050010  ld          $a1, 0x10($s0)
    ctx->pc = 0x26d7ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26d7f0: 0x712fe  dsrl32      $v0, $a3, 11
    ctx->pc = 0x26d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> (32 + 11));
    // 0x26d7f4: 0xde060028  ld          $a2, 0x28($s0)
    ctx->pc = 0x26d7f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x26d7f8: 0x51b3e  dsrl32      $v1, $a1, 12
    ctx->pc = 0x26d7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> (32 + 12));
    // 0x26d7fc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x26d7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x26d800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d804: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x26d804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x26d808: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x26d808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x26d80c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d810: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x26d810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d814: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x26d814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x26d818: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x26d818u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x26d81c: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x26d81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x26d820: 0x212fc  dsll32      $v0, $v0, 11
    ctx->pc = 0x26d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
    // 0x26d824: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x26d824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x26d828: 0x422fc  dsll32      $a0, $a0, 11
    ctx->pc = 0x26d828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 11));
    // 0x26d82c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x26d82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x26d830: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x26d830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x26d834: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x26d834u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x26d838: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x26d838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x26d83c: 0xfe060028  sd          $a2, 0x28($s0)
    ctx->pc = 0x26d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 6));
    // 0x26d840: 0xfe050010  sd          $a1, 0x10($s0)
    ctx->pc = 0x26d840u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 5));
    // 0x26d844: 0xfe070020  sd          $a3, 0x20($s0)
    ctx->pc = 0x26d844u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 7));
    // 0x26d848: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26d848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d84c: 0x3e00008  jr          $ra
    ctx->pc = 0x26D84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D84Cu;
            // 0x26d850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D854u;
    // 0x26d854: 0x0  nop
    ctx->pc = 0x26d854u;
    // NOP
}
