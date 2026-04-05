#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A98D8
// Address: 0x1a98d8 - 0x1a9990
void sub_001A98D8_0x1a98d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A98D8_0x1a98d8");
#endif

    ctx->pc = 0x1a98d8u;

    // 0x1a98d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a98d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a98dc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1a98dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a98e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a98e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a98e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a98e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a98ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a98f0: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x1a98f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1a98f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a98f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a98f8: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x1a98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x1a98fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A98FCu;
    {
        const bool branch_taken_0x1a98fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98FCu;
            // 0x1a9900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98fc) {
            ctx->pc = 0x1A9914u;
            goto label_1a9914;
        }
    }
    ctx->pc = 0x1A9904u;
    // 0x1a9904: 0x0  nop
    ctx->pc = 0x1a9904u;
    // NOP
label_1a9908:
    // 0x1a9908: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a9908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a990c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A990Cu;
    {
        const bool branch_taken_0x1a990c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A990Cu;
            // 0x1a9910: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a990c) {
            ctx->pc = 0x1A995Cu;
            goto label_1a995c;
        }
    }
    ctx->pc = 0x1A9914u;
label_1a9914:
    // 0x1a9914: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x1a9914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1a9918: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A9918u;
    {
        const bool branch_taken_0x1a9918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A991Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9918u;
            // 0x1a991c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9918) {
            ctx->pc = 0x1A995Cu;
            goto label_1a995c;
        }
    }
    ctx->pc = 0x1A9920u;
    // 0x1a9920: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1a9920u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a9924: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1a9924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1a9928: 0x8c424f34  lw          $v0, 0x4F34($v0)
    ctx->pc = 0x1a9928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20276)));
    // 0x1a992c: 0x94e60000  lhu         $a2, 0x0($a3)
    ctx->pc = 0x1a992cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a9930: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A9930u;
    {
        const bool branch_taken_0x1a9930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9930u;
            // 0x1a9934: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9930) {
            ctx->pc = 0x1A9908u;
            runtime->cooperativeGuestYield();
            goto label_1a9908;
        }
    }
    ctx->pc = 0x1A9938u;
    // 0x1a9938: 0x24a50058  addiu       $a1, $a1, 0x58
    ctx->pc = 0x1a9938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x1a993c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a993cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a9940: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1a9940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9944: 0xc06a0ce  jal         func_1A8338
    ctx->pc = 0x1A9944u;
    SET_GPR_U32(ctx, 31, 0x1A994Cu);
    ctx->pc = 0x1A9948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9944u;
            // 0x1a9948: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8338u;
    if (runtime->hasFunction(0x1A8338u)) {
        auto targetFn = runtime->lookupFunction(0x1A8338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A994Cu; }
        if (ctx->pc != 0x1A994Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8338_0x1a8580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A994Cu; }
        if (ctx->pc != 0x1A994Cu) { return; }
    }
    ctx->pc = 0x1A994Cu;
    // 0x1a994c: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a994cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a9950: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a9950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a9954: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a9954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a9958: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a9958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a995c:
    // 0x1a995c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1a995cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1a9960: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9964: 0x8c834f34  lw          $v1, 0x4F34($a0)
    ctx->pc = 0x1a9964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20276)));
    // 0x1a9968: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a996c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a9970: 0xac834f34  sw          $v1, 0x4F34($a0)
    ctx->pc = 0x1a9970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20276), GPR_U32(ctx, 3));
    // 0x1a9974: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1a9974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a9978: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1a9978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a997c: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x1a997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a9980: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x1a9980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a9984: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a9984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9988: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A998Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9988u;
            // 0x1a998c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9908u: goto label_1a9908;
            case 0x1A9914u: goto label_1a9914;
            case 0x1A995Cu: goto label_1a995c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9990u;
}
