#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B890
// Address: 0x27b890 - 0x27b998
void sub_0027B890_0x27b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B890_0x27b890");
#endif

    ctx->pc = 0x27b890u;

    // 0x27b890: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27b894: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27b894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b898: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x27b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x27b89c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27b89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b8a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x27b8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27b8a4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x27b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x27b8a8: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x27b8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
    // 0x27b8ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27B8ACu;
    {
        const bool branch_taken_0x27b8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8ACu;
            // 0x27b8b0: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b8ac) {
            ctx->pc = 0x27B8C8u;
            goto label_27b8c8;
        }
    }
    ctx->pc = 0x27B8B4u;
    // 0x27b8b4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27b8b8: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x27B8B8u;
    SET_GPR_U32(ctx, 31, 0x27B8C0u);
    ctx->pc = 0x27B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8B8u;
            // 0x27b8bc: 0x24844fb0  addiu       $a0, $a0, 0x4FB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8C0u; }
        if (ctx->pc != 0x27B8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8C0u; }
        if (ctx->pc != 0x27B8C0u) { return; }
    }
    ctx->pc = 0x27B8C0u;
    // 0x27b8c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x27B8C0u;
    {
        const bool branch_taken_0x27b8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8C0u;
            // 0x27b8c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b8c0) {
            ctx->pc = 0x27B980u;
            goto label_27b980;
        }
    }
    ctx->pc = 0x27B8C8u;
label_27b8c8:
    // 0x27b8c8: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x27B8C8u;
    {
        const bool branch_taken_0x27b8c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b8c8) {
            ctx->pc = 0x27B8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8C8u;
            // 0x27b8cc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27B918u;
            goto label_27b918;
        }
    }
    ctx->pc = 0x27B8D0u;
    // 0x27b8d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x27b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27b8d4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x27b8d8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x27b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x27b8dc: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27b8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x27b8e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27b8e4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x27b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x27b8e8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x27b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x27b8ec: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x27b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x27b8f0: 0x68c20017  ldl         $v0, 0x17($a2)
    ctx->pc = 0x27b8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27b8f4: 0x6cc20010  ldr         $v0, 0x10($a2)
    ctx->pc = 0x27b8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27b8f8: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x27b8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27b8fc: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x27b8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x27b900: 0xb3a2001b  sdl         $v0, 0x1B($sp)
    ctx->pc = 0x27b900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b904: 0xb7a20014  sdr         $v0, 0x14($sp)
    ctx->pc = 0x27b904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b908: 0xb3a30023  sdl         $v1, 0x23($sp)
    ctx->pc = 0x27b908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b90c: 0xb7a3001c  sdr         $v1, 0x1C($sp)
    ctx->pc = 0x27b90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27B910u;
    {
        const bool branch_taken_0x27b910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B910u;
            // 0x27b914: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b910) {
            ctx->pc = 0x27B92Cu;
            goto label_27b92c;
        }
    }
    ctx->pc = 0x27B918u;
label_27b918:
    // 0x27b918: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27b918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x27b91c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x27b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x27b920: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27b920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x27b924: 0xa3a00014  sb          $zero, 0x14($sp)
    ctx->pc = 0x27b924u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b928: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27b92c:
    // 0x27b92c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x27b92cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b930: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x27b930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x27b934: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b938: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x27b938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x27b93c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27b93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b940: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27b940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27b944: 0xc09ec04  jal         func_27B010
    ctx->pc = 0x27B944u;
    SET_GPR_U32(ctx, 31, 0x27B94Cu);
    ctx->pc = 0x27B948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B944u;
            // 0x27b948: 0x26260080  addiu       $a2, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B010u;
    if (runtime->hasFunction(0x27B010u)) {
        auto targetFn = runtime->lookupFunction(0x27B010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B94Cu; }
        if (ctx->pc != 0x27B94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B010_0x27b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B94Cu; }
        if (ctx->pc != 0x27B94Cu) { return; }
    }
    ctx->pc = 0x27B94Cu;
    // 0x27b94c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27b94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b950: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x27B950u;
    {
        const bool branch_taken_0x27b950 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x27B954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B950u;
            // 0x27b954: 0x3c030031  lui         $v1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b950) {
            ctx->pc = 0x27B980u;
            goto label_27b980;
        }
    }
    ctx->pc = 0x27B958u;
    // 0x27b958: 0x24020334  addiu       $v0, $zero, 0x334
    ctx->pc = 0x27b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x27b95c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x27b95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27b960: 0x2463d008  addiu       $v1, $v1, -0x2FF8
    ctx->pc = 0x27b960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955016));
    // 0x27b964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b968: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x27b968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27b96c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b970: 0xacb10010  sw          $s1, 0x10($a1)
    ctx->pc = 0x27b970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 17));
    // 0x27b974: 0xc09ef36  jal         func_27BCD8
    ctx->pc = 0x27B974u;
    SET_GPR_U32(ctx, 31, 0x27B97Cu);
    ctx->pc = 0x27B978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B974u;
            // 0x27b978: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BCD8u;
    if (runtime->hasFunction(0x27BCD8u)) {
        auto targetFn = runtime->lookupFunction(0x27BCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B97Cu; }
        if (ctx->pc != 0x27B97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27bcd8_0x27bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B97Cu; }
        if (ctx->pc != 0x27B97Cu) { return; }
    }
    ctx->pc = 0x27B97Cu;
    // 0x27b97c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27b97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b980:
    // 0x27b980: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27b980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27b984: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x27b984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b988: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x27b988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b98c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x27b98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b990: 0x3e00008  jr          $ra
    ctx->pc = 0x27B990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B990u;
            // 0x27b994: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B8C8u: goto label_27b8c8;
            case 0x27B918u: goto label_27b918;
            case 0x27B92Cu: goto label_27b92c;
            case 0x27B980u: goto label_27b980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27B998u;
}
