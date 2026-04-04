#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002978B8
// Address: 0x2978b8 - 0x297ce0
void sub_002978B8_0x2978b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002978B8_0x2978b8");
#endif

    ctx->pc = 0x2978b8u;

    // 0x2978b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2978b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2978bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2978bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2978c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2978c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2978c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2978c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2978c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2978cc: 0xc0a5db2  jal         func_2976C8
    ctx->pc = 0x2978CCu;
    SET_GPR_U32(ctx, 31, 0x2978D4u);
    ctx->pc = 0x2978D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2978CCu;
            // 0x2978d0: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2976C8u;
    if (runtime->hasFunction(0x2976C8u)) {
        auto targetFn = runtime->lookupFunction(0x2976C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2978D4u; }
        if (ctx->pc != 0x2978D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2976c8_0x297740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2978D4u; }
        if (ctx->pc != 0x2978D4u) { return; }
    }
    ctx->pc = 0x2978D4u;
    // 0x2978d4: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x2978D4u;
    SET_GPR_U32(ctx, 31, 0x2978DCu);
    ctx->pc = 0x2978D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2978D4u;
            // 0x2978d8: 0x8e244b50  lw          $a0, 0x4B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2978DCu; }
        if (ctx->pc != 0x2978DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2978DCu; }
        if (ctx->pc != 0x2978DCu) { return; }
    }
    ctx->pc = 0x2978DCu;
    // 0x2978dc: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x2978dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2978e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2978E0u;
    {
        const bool branch_taken_0x2978e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2978E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2978E0u;
            // 0x2978e4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978e0) {
            ctx->pc = 0x2978F8u;
            goto label_2978f8;
        }
    }
    ctx->pc = 0x2978E8u;
    // 0x2978e8: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x2978E8u;
    SET_GPR_U32(ctx, 31, 0x2978F0u);
    ctx->pc = 0x2978ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2978E8u;
            // 0x2978ec: 0x8e244b50  lw          $a0, 0x4B50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2978F0u; }
        if (ctx->pc != 0x2978F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2978F0u; }
        if (ctx->pc != 0x2978F0u) { return; }
    }
    ctx->pc = 0x2978F0u;
    // 0x2978f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2978F0u;
    {
        const bool branch_taken_0x2978f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2978F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2978F0u;
            // 0x2978f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978f0) {
            ctx->pc = 0x297910u;
            goto label_297910;
        }
    }
    ctx->pc = 0x2978F8u;
label_2978f8:
    // 0x2978f8: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2978f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2978fc: 0x2442a840  addiu       $v0, $v0, -0x57C0
    ctx->pc = 0x2978fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944832));
    // 0x297900: 0x8e244b50  lw          $a0, 0x4B50($s1)
    ctx->pc = 0x297900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19280)));
    // 0x297904: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x297904u;
    SET_GPR_U32(ctx, 31, 0x29790Cu);
    ctx->pc = 0x297908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297904u;
            // 0x297908: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29790Cu; }
        if (ctx->pc != 0x29790Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29790Cu; }
        if (ctx->pc != 0x29790Cu) { return; }
    }
    ctx->pc = 0x29790Cu;
    // 0x29790c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29790cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297910:
    // 0x297910: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x297910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297914: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29791c: 0x3e00008  jr          $ra
    ctx->pc = 0x29791Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29791Cu;
            // 0x297920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2978F8u: goto label_2978f8;
            case 0x297910u: goto label_297910;
            case 0x297948u: goto label_297948;
            case 0x2979C4u: goto label_2979c4;
            case 0x2979F0u: goto label_2979f0;
            case 0x297A18u: goto label_297a18;
            case 0x297A40u: goto label_297a40;
            case 0x297A68u: goto label_297a68;
            case 0x297A98u: goto label_297a98;
            case 0x297AD0u: goto label_297ad0;
            case 0x297B2Cu: goto label_297b2c;
            case 0x297B60u: goto label_297b60;
            case 0x297B74u: goto label_297b74;
            case 0x297C10u: goto label_297c10;
            case 0x297C50u: goto label_297c50;
            case 0x297C58u: goto label_297c58;
            case 0x297C5Cu: goto label_297c5c;
            case 0x297C90u: goto label_297c90;
            case 0x297C94u: goto label_297c94;
            case 0x297CC4u: goto label_297cc4;
            case 0x297CCCu: goto label_297ccc;
            case 0x297CD0u: goto label_297cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297924u;
    // 0x297924: 0x0  nop
    ctx->pc = 0x297924u;
    // NOP
    // 0x297928: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x297928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29792c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29792cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297930: 0x8c434b48  lw          $v1, 0x4B48($v0)
    ctx->pc = 0x297930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19272)));
    // 0x297934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297938: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x297938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29793c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29793Cu;
    {
        const bool branch_taken_0x29793c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29793Cu;
            // 0x297940: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29793c) {
            ctx->pc = 0x297948u;
            goto label_297948;
        }
    }
    ctx->pc = 0x297944u;
    // 0x297944: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x297944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_297948:
    // 0x297948: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x297948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x29794c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29794cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x297950: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x297950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297954: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x297954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x297958: 0xac454b40  sw          $a1, 0x4B40($v0)
    ctx->pc = 0x297958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19264), GPR_U32(ctx, 5));
    // 0x29795c: 0x24849fc0  addiu       $a0, $a0, -0x6040
    ctx->pc = 0x29795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942656));
    // 0x297960: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x297960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x297964: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x297964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x297968: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x297968u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x29796c: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x29796cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x297970: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x297970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x297974: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x297974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297978: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x297978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29797c: 0x8a060007  lwl         $a2, 0x7($s0)
    ctx->pc = 0x29797cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x297980: 0x9a060004  lwr         $a2, 0x4($s0)
    ctx->pc = 0x297980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x297984: 0xaba60007  swl         $a2, 0x7($sp)
    ctx->pc = 0x297984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297988: 0xbba60004  swr         $a2, 0x4($sp)
    ctx->pc = 0x297988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29798c: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x29798cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x297990: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x297990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x297994: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x297994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297998: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x297998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29799c: 0x8a07000f  lwl         $a3, 0xF($s0)
    ctx->pc = 0x29799cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2979a0: 0x9a07000c  lwr         $a3, 0xC($s0)
    ctx->pc = 0x2979a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2979a4: 0xaba7000f  swl         $a3, 0xF($sp)
    ctx->pc = 0x2979a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2979a8: 0xbba7000c  swr         $a3, 0xC($sp)
    ctx->pc = 0x2979a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2979ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2979acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2979b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2979B0u;
    {
        const bool branch_taken_0x2979b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2979B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2979B0u;
            // 0x2979b4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979b0) {
            ctx->pc = 0x2979C4u;
            goto label_2979c4;
        }
    }
    ctx->pc = 0x2979B8u;
    // 0x2979b8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2979b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2979bc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x2979BCu;
    SET_GPR_U32(ctx, 31, 0x2979C4u);
    ctx->pc = 0x2979C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2979BCu;
            // 0x2979c0: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2979C4u; }
        if (ctx->pc != 0x2979C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2979C4u; }
        if (ctx->pc != 0x2979C4u) { return; }
    }
    ctx->pc = 0x2979C4u;
label_2979c4:
    // 0x2979c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2979c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2979c8: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x2979c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2979cc: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x2979ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x2979d0: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2979D0u;
    {
        const bool branch_taken_0x2979d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2979D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2979D0u;
            // 0x2979d4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979d0) {
            ctx->pc = 0x297C58u;
            goto label_297c58;
        }
    }
    ctx->pc = 0x2979D8u;
    // 0x2979d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2979d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2979dc: 0x24426aa0  addiu       $v0, $v0, 0x6AA0
    ctx->pc = 0x2979dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27296));
    // 0x2979e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2979e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2979e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2979e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2979e8: 0x800008  jr          $a0
    ctx->pc = 0x2979E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2979F0u: goto label_2979f0;
            case 0x297A98u: goto label_297a98;
            case 0x297B74u: goto label_297b74;
            case 0x297C10u: goto label_297c10;
            case 0x297C58u: goto label_297c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2979F0u;
label_2979f0:
    // 0x2979f0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2979f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2979f4: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2979F4u;
    {
        const bool branch_taken_0x2979f4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2979F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2979F4u;
            // 0x2979f8: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979f4) {
            ctx->pc = 0x297A40u;
            goto label_297a40;
        }
    }
    ctx->pc = 0x2979FCu;
    // 0x2979fc: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x2979fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x297a00: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x297a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x297a04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a08: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x297A08u;
    {
        const bool branch_taken_0x297a08 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x297A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A08u;
            // 0x297a0c: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a08) {
            ctx->pc = 0x297A40u;
            goto label_297a40;
        }
    }
    ctx->pc = 0x297A10u;
    // 0x297a10: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x297a10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x297a14: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x297a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_297a18:
    // 0x297a18: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x297a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x297a1c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x297a1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297a20: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x297a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x297a24: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x297a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x297a28: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x297a28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x297a2c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x297a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x297a30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x297a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x297a34: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x297a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x297a38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x297A38u;
    {
        const bool branch_taken_0x297a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A38u;
            // 0x297a3c: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a38) {
            ctx->pc = 0x297A18u;
            runtime->cooperativeGuestYield();
            goto label_297a18;
        }
    }
    ctx->pc = 0x297A40u;
label_297a40:
    // 0x297a40: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x297a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x297a44: 0x18600084  blez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x297A44u;
    {
        const bool branch_taken_0x297a44 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x297A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A44u;
            // 0x297a48: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a44) {
            ctx->pc = 0x297C58u;
            goto label_297c58;
        }
    }
    ctx->pc = 0x297A4Cu;
    // 0x297a4c: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x297a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x297a50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a54: 0x18600080  blez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x297A54u;
    {
        const bool branch_taken_0x297a54 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x297A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A54u;
            // 0x297a58: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a54) {
            ctx->pc = 0x297C58u;
            goto label_297c58;
        }
    }
    ctx->pc = 0x297A5Cu;
    // 0x297a5c: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x297a5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x297a60: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x297a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x297a64: 0x0  nop
    ctx->pc = 0x297a64u;
    // NOP
label_297a68:
    // 0x297a68: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x297a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x297a6c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x297a6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297a70: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x297a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x297a74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x297a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x297a78: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x297a78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x297a7c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x297a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x297a80: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x297a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x297a84: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x297a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x297a88: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x297A88u;
    {
        const bool branch_taken_0x297a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A88u;
            // 0x297a8c: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a88) {
            ctx->pc = 0x297A68u;
            runtime->cooperativeGuestYield();
            goto label_297a68;
        }
    }
    ctx->pc = 0x297A90u;
    // 0x297a90: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x297A90u;
    {
        const bool branch_taken_0x297a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A90u;
            // 0x297a94: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a90) {
            ctx->pc = 0x297C5Cu;
            goto label_297c5c;
        }
    }
    ctx->pc = 0x297A98u;
label_297a98:
    // 0x297a98: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x297a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297a9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x297a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297aa0: 0x1860006e  blez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x297AA0u;
    {
        const bool branch_taken_0x297aa0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x297AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297AA0u;
            // 0x297aa4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297aa0) {
            ctx->pc = 0x297C5Cu;
            goto label_297c5c;
        }
    }
    ctx->pc = 0x297AA8u;
    // 0x297aa8: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x297aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x297aac: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x297aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x297ab0: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x297ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297ab4: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x297ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297ab8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x297ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x297abc: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x297abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297ac0: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x297ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x297ac4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x297ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x297ac8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x297AC8u;
    {
        const bool branch_taken_0x297ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297AC8u;
            // 0x297acc: 0x26020158  addiu       $v0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ac8) {
            ctx->pc = 0x297B2Cu;
            goto label_297b2c;
        }
    }
    ctx->pc = 0x297AD0u;
label_297ad0:
    // 0x297ad0: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x297ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x297ad4: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x297ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x297ad8: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x297ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x297adc: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x297adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x297ae0: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x297ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x297ae4: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x297ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x297ae8: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x297ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x297aec: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x297aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x297af0: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x297af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297af4: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x297af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297af8: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x297af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297afc: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x297afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297b00: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x297b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297b04: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x297b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297b08: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x297b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297b0c: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x297b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297b10: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x297b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x297b14: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x297b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x297b18: 0x0  nop
    ctx->pc = 0x297b18u;
    // NOP
    // 0x297b1c: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x297B1Cu;
    {
        const bool branch_taken_0x297b1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x297b1c) {
            ctx->pc = 0x297AD0u;
            runtime->cooperativeGuestYield();
            goto label_297ad0;
        }
    }
    ctx->pc = 0x297B24u;
    // 0x297b24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x297B24u;
    {
        const bool branch_taken_0x297b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297b24) {
            ctx->pc = 0x297B60u;
            goto label_297b60;
        }
    }
    ctx->pc = 0x297B2Cu;
label_297b2c:
    // 0x297b2c: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x297b2cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x297b30: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x297b30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x297b34: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x297b34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x297b38: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x297b38u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x297b3c: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x297b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x297b40: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x297b40u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x297b44: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x297b44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x297b48: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x297b48u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x297b4c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x297b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x297b50: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x297b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x297b54: 0x0  nop
    ctx->pc = 0x297b54u;
    // NOP
    // 0x297b58: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x297B58u;
    {
        const bool branch_taken_0x297b58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x297b58) {
            ctx->pc = 0x297B2Cu;
            runtime->cooperativeGuestYield();
            goto label_297b2c;
        }
    }
    ctx->pc = 0x297B60u;
label_297b60:
    // 0x297b60: 0x88880003  lwl         $t0, 0x3($a0)
    ctx->pc = 0x297b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x297b64: 0x98880000  lwr         $t0, 0x0($a0)
    ctx->pc = 0x297b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x297b68: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x297b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297b6c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x297B6Cu;
    {
        const bool branch_taken_0x297b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297B6Cu;
            // 0x297b70: 0xb8c80000  swr         $t0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b6c) {
            ctx->pc = 0x297C58u;
            goto label_297c58;
        }
    }
    ctx->pc = 0x297B74u;
label_297b74:
    // 0x297b74: 0x8a060017  lwl         $a2, 0x17($s0)
    ctx->pc = 0x297b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x297b78: 0x9a060014  lwr         $a2, 0x14($s0)
    ctx->pc = 0x297b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x297b7c: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x297b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297b80: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x297b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297b84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x297b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297b88: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x297b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x297b8c: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x297b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x297b90: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x297b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x297b94: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x297b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x297b98: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x297b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x297b9c: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x297b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x297ba0: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x297ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x297ba4: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x297ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x297ba8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x297ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bac: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x297bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bb0: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x297bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bb4: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x297bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bb8: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x297bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bbc: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x297bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bc0: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x297bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bc4: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x297bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bc8: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x297bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x297bcc: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x297bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x297bd0: 0x6a040047  ldl         $a0, 0x47($s0)
    ctx->pc = 0x297bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x297bd4: 0x6e040040  ldr         $a0, 0x40($s0)
    ctx->pc = 0x297bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x297bd8: 0x6a05004f  ldl         $a1, 0x4F($s0)
    ctx->pc = 0x297bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x297bdc: 0x6e050048  ldr         $a1, 0x48($s0)
    ctx->pc = 0x297bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x297be0: 0x6a060057  ldl         $a2, 0x57($s0)
    ctx->pc = 0x297be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x297be4: 0x6e060050  ldr         $a2, 0x50($s0)
    ctx->pc = 0x297be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x297be8: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x297be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bec: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x297becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bf0: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x297bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bf4: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x297bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bf8: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x297bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297bfc: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x297bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297c00: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x297c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297c04: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x297c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297c08: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x297C08u;
    {
        const bool branch_taken_0x297c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297C08u;
            // 0x297c0c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c08) {
            ctx->pc = 0x297C5Cu;
            goto label_297c5c;
        }
    }
    ctx->pc = 0x297C10u;
label_297c10:
    // 0x297c10: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x297c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x297c14: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x297c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x297c18: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x297c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297c1c: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x297c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297c20: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x297c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x297c24: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x297c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x297c28: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x297c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297c2c: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x297c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297c30: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x297c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x297c34: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x297c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x297c38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297C38u;
    {
        const bool branch_taken_0x297c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297C38u;
            // 0x297c3c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c38) {
            ctx->pc = 0x297C50u;
            goto label_297c50;
        }
    }
    ctx->pc = 0x297C40u;
    // 0x297c40: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x297c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x297c44: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x297c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x297c48: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x297c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x297c4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x297c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_297c50:
    // 0x297c50: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x297C50u;
    SET_GPR_U32(ctx, 31, 0x297C58u);
    ctx->pc = 0x297C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297C50u;
            // 0x297c54: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C58u; }
        if (ctx->pc != 0x297C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C58u; }
        if (ctx->pc != 0x297C58u) { return; }
    }
    ctx->pc = 0x297C58u;
label_297c58:
    // 0x297c58: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x297c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_297c5c:
    // 0x297c5c: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x297C5Cu;
    {
        const bool branch_taken_0x297c5c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x297C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297C5Cu;
            // 0x297c60: 0x3c07002a  lui         $a3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c5c) {
            ctx->pc = 0x297CC4u;
            goto label_297cc4;
        }
    }
    ctx->pc = 0x297C64u;
    // 0x297c64: 0x41023  negu        $v0, $a0
    ctx->pc = 0x297c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x297c68: 0x8ce34ac0  lw          $v1, 0x4AC0($a3)
    ctx->pc = 0x297c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19136)));
    // 0x297c6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x297c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c70: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x297c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x297c74: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297C74u;
    {
        const bool branch_taken_0x297c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x297C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297C74u;
            // 0x297c78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c74) {
            ctx->pc = 0x297C90u;
            goto label_297c90;
        }
    }
    ctx->pc = 0x297C7Cu;
    // 0x297c7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297c80: 0xace24ac0  sw          $v0, 0x4AC0($a3)
    ctx->pc = 0x297c80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 19136), GPR_U32(ctx, 2));
    // 0x297c84: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x297C84u;
    {
        const bool branch_taken_0x297c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297C84u;
            // 0x297c88: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c84) {
            ctx->pc = 0x297CD0u;
            goto label_297cd0;
        }
    }
    ctx->pc = 0x297C8Cu;
    // 0x297c8c: 0x0  nop
    ctx->pc = 0x297c8cu;
    // NOP
label_297c90:
    // 0x297c90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x297c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_297c94:
    // 0x297c94: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x297c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x297c98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x297C98u;
    {
        const bool branch_taken_0x297c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297C98u;
            // 0x297c9c: 0x24e24ac0  addiu       $v0, $a3, 0x4AC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 19136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c98) {
            ctx->pc = 0x297CCCu;
            goto label_297ccc;
        }
    }
    ctx->pc = 0x297CA0u;
    // 0x297ca0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x297ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x297ca4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x297ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x297ca8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x297ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297cac: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x297CACu;
    {
        const bool branch_taken_0x297cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x297CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297CACu;
            // 0x297cb0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cac) {
            ctx->pc = 0x297C94u;
            runtime->cooperativeGuestYield();
            goto label_297c94;
        }
    }
    ctx->pc = 0x297CB4u;
    // 0x297cb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297cb8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x297cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x297cbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x297CBCu;
    {
        const bool branch_taken_0x297cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297CBCu;
            // 0x297cc0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cbc) {
            ctx->pc = 0x297CD0u;
            goto label_297cd0;
        }
    }
    ctx->pc = 0x297CC4u;
label_297cc4:
    // 0x297cc4: 0xc0a4f14  jal         func_293C50
    ctx->pc = 0x297CC4u;
    SET_GPR_U32(ctx, 31, 0x297CCCu);
    ctx->pc = 0x293C50u;
    if (runtime->hasFunction(0x293C50u)) {
        auto targetFn = runtime->lookupFunction(0x293C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CCCu; }
        if (ctx->pc != 0x297CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c50_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CCCu; }
        if (ctx->pc != 0x297CCCu) { return; }
    }
    ctx->pc = 0x297CCCu;
label_297ccc:
    // 0x297ccc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x297cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_297cd0:
    // 0x297cd0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x297cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x297CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297CD4u;
            // 0x297cd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2978F8u: goto label_2978f8;
            case 0x297910u: goto label_297910;
            case 0x297948u: goto label_297948;
            case 0x2979C4u: goto label_2979c4;
            case 0x2979F0u: goto label_2979f0;
            case 0x297A18u: goto label_297a18;
            case 0x297A40u: goto label_297a40;
            case 0x297A68u: goto label_297a68;
            case 0x297A98u: goto label_297a98;
            case 0x297AD0u: goto label_297ad0;
            case 0x297B2Cu: goto label_297b2c;
            case 0x297B60u: goto label_297b60;
            case 0x297B74u: goto label_297b74;
            case 0x297C10u: goto label_297c10;
            case 0x297C50u: goto label_297c50;
            case 0x297C58u: goto label_297c58;
            case 0x297C5Cu: goto label_297c5c;
            case 0x297C90u: goto label_297c90;
            case 0x297C94u: goto label_297c94;
            case 0x297CC4u: goto label_297cc4;
            case 0x297CCCu: goto label_297ccc;
            case 0x297CD0u: goto label_297cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297CDCu;
    // 0x297cdc: 0x0  nop
    ctx->pc = 0x297cdcu;
    // NOP
}
