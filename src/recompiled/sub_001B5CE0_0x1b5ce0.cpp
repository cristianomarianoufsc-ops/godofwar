#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5CE0
// Address: 0x1b5ce0 - 0x1b5d70
void sub_001B5CE0_0x1b5ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5CE0_0x1b5ce0");
#endif

    ctx->pc = 0x1b5ce0u;

    // 0x1b5ce0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b5ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b5ce4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b5ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b5ce8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b5ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b5cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cf0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b5cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b5cf4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b5cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b5cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b5cfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b5cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1b5d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1b5d04: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b5d04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d08: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1b5d08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b5d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5d14: 0xc06d71c  jal         func_1B5C70
    ctx->pc = 0x1B5D14u;
    SET_GPR_U32(ctx, 31, 0x1B5D1Cu);
    ctx->pc = 0x1B5D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D14u;
            // 0x1b5d18: 0xffa90000  sd          $t1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C70u;
    if (runtime->hasFunction(0x1B5C70u)) {
        auto targetFn = runtime->lookupFunction(0x1B5C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D1Cu; }
        if (ctx->pc != 0x1B5D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5C70_0x1b5c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D1Cu; }
        if (ctx->pc != 0x1B5D1Cu) { return; }
    }
    ctx->pc = 0x1B5D1Cu;
    // 0x1b5d1c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b5d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5d24: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1b5d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b5d28: 0x244202bc  addiu       $v0, $v0, 0x2BC
    ctx->pc = 0x1b5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 700));
    // 0x1b5d2c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b5d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b5d30: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1b5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1b5d34: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1b5d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1b5d38: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x1b5d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x1b5d3c: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1b5d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x1b5d40: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1b5d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1b5d44: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1b5d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1b5d48: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x1b5d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b5d4c: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x1b5d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b5d50: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b5d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5d54: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b5d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5d58: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b5d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5d5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b5d5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5d60: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1b5d60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5d64: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D64u;
            // 0x1b5d68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5D6Cu;
    // 0x1b5d6c: 0x0  nop
    ctx->pc = 0x1b5d6cu;
    // NOP
}
