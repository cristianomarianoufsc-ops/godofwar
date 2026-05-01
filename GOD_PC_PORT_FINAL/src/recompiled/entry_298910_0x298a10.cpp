#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_298910
// Address: 0x298910 - 0x298a10
void entry_298910_0x298a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_298910_0x298a10");
#endif

    ctx->pc = 0x298910u;

    // 0x298910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x298910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x298914: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x298914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x298918: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x298918u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x29891c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x298920: 0x8e424b60  lw          $v0, 0x4B60($s2)
    ctx->pc = 0x298920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19296)));
    // 0x298924: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298928: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x298928u;
    {
        const bool branch_taken_0x298928 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298928u;
            // 0x29892c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298928) {
            ctx->pc = 0x2989F4u;
            goto label_2989f4;
        }
    }
    ctx->pc = 0x298930u;
    // 0x298930: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x298930u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x298934: 0x2630af00  addiu       $s0, $s1, -0x5100
    ctx->pc = 0x298934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946560));
label_298938:
    // 0x298938: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x298938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x29893c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298940: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x298940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x298944: 0xc0a5ca4  jal         func_297290
    ctx->pc = 0x298944u;
    SET_GPR_U32(ctx, 31, 0x29894Cu);
    ctx->pc = 0x298948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298944u;
            // 0x298948: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297290u;
    if (runtime->hasFunction(0x297290u)) {
        auto targetFn = runtime->lookupFunction(0x297290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29894Cu; }
        if (ctx->pc != 0x29894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297290_0x297290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29894Cu; }
        if (ctx->pc != 0x29894Cu) { return; }
    }
    ctx->pc = 0x29894Cu;
    // 0x29894c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29894Cu;
    {
        const bool branch_taken_0x29894c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29894c) {
            ctx->pc = 0x298950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29894Cu;
            // 0x298950: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29895Cu;
            goto label_29895c;
        }
    }
    ctx->pc = 0x298954u;
    // 0x298954: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x298954u;
    {
        const bool branch_taken_0x298954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298954u;
            // 0x298958: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298954) {
            ctx->pc = 0x2989F8u;
            goto label_2989f8;
        }
    }
    ctx->pc = 0x29895Cu;
label_29895c:
    // 0x29895c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29895Cu;
    {
        const bool branch_taken_0x29895c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29895Cu;
            // 0x298960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29895c) {
            ctx->pc = 0x2989C4u;
            goto label_2989c4;
        }
    }
    ctx->pc = 0x298964u;
    // 0x298964: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x298964u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x298968: 0xae404b60  sw          $zero, 0x4B60($s2)
    ctx->pc = 0x298968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 19296), GPR_U32(ctx, 0));
    // 0x29896c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x29896cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x298970: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x298970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x298974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x298978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29897c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29897cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298980: 0x2629ad00  addiu       $t1, $s1, -0x5300
    ctx->pc = 0x298980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946048));
    // 0x298984: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x298984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298988: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x298988u;
    SET_GPR_U32(ctx, 31, 0x298990u);
    ctx->pc = 0x29898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298988u;
            // 0x29898c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298990u; }
        if (ctx->pc != 0x298990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298990u; }
        if (ctx->pc != 0x298990u) { return; }
    }
    ctx->pc = 0x298990u;
    // 0x298990: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298990u;
    {
        const bool branch_taken_0x298990 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298990u;
            // 0x298994: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298990) {
            ctx->pc = 0x2989A4u;
            goto label_2989a4;
        }
    }
    ctx->pc = 0x298998u;
    // 0x298998: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x298998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x29899c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x29899Cu;
    {
        const bool branch_taken_0x29899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2989A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29899Cu;
            // 0x2989a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29899c) {
            ctx->pc = 0x2989F8u;
            goto label_2989f8;
        }
    }
    ctx->pc = 0x2989A4u;
label_2989a4:
    // 0x2989a4: 0x2627ad00  addiu       $a3, $s1, -0x5300
    ctx->pc = 0x2989a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946048));
    // 0x2989a8: 0x2466af28  addiu       $a2, $v1, -0x50D8
    ctx->pc = 0x2989a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946600));
    // 0x2989ac: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x2989acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2989b0: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x2989b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x2989b4: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x2989b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2989b8: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x2989b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2989bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2989BCu;
    {
        const bool branch_taken_0x2989bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2989C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2989BCu;
            // 0x2989c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989bc) {
            ctx->pc = 0x2989F8u;
            goto label_2989f8;
        }
    }
    ctx->pc = 0x2989C4u;
label_2989c4:
    // [retry-loop detector] Bug N: *(s0+0x24)==0 apos WaitSema — iniciando delay de 1M iters
    {
        static std::atomic<uint32_t> s_retryCount{0};
        const uint32_t retryN = s_retryCount.fetch_add(1, std::memory_order_relaxed);
        if (retryN < 32u || (retryN % 64u) == 0u) {
            const uint32_t s0v = GPR_U32(ctx, 16);
            const uint32_t field24 = (s0v != 0u && s0v + 0x28u <= 0x02000000u)
                                     ? READ32(ADD32(s0v, 0x24u)) : 0xDEADBEEFu;
            const uint32_t globalFlag = READ32(ADD32(GPR_U32(ctx, 18), 19296u));
            std::cout << "[retry-loop] #" << retryN
                      << " outer_struct=0x" << std::hex << s0v
                      << " *(s0+0x24)=0x" << field24
                      << " global@0x2A4B60=0x" << globalFlag
                      << std::dec << std::endl;
        }
    }
    // 0x2989c4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2989c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2989c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2989c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2989cc: 0x0  nop
    ctx->pc = 0x2989ccu;
    // NOP
label_2989d0:
    // 0x2989d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2989d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2989d4: 0x0  nop
    ctx->pc = 0x2989d4u;
    // NOP
    // 0x2989d8: 0x0  nop
    ctx->pc = 0x2989d8u;
    // NOP
    // 0x2989dc: 0x0  nop
    ctx->pc = 0x2989dcu;
    // NOP
    // 0x2989e0: 0x0  nop
    ctx->pc = 0x2989e0u;
    // NOP
    // 0x2989e4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2989E4u;
    {
        const bool branch_taken_0x2989e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2989e4) {
            ctx->pc = 0x2989D0u;
            runtime->cooperativeGuestYield();
            goto label_2989d0;
        }
    }
    ctx->pc = 0x2989ECu;
    // 0x2989ec: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x2989ECu;
    {
        const bool branch_taken_0x2989ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2989F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2989ECu;
            // 0x2989f0: 0x2630af00  addiu       $s0, $s1, -0x5100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989ec) {
            ctx->pc = 0x298938u;
            runtime->cooperativeGuestYield();
            goto label_298938;
        }
    }
    ctx->pc = 0x2989F4u;
label_2989f4:
    // 0x2989f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2989f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2989f8:
    // 0x2989f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2989f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2989fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2989fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298a00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x298a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298a04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298a08: 0x3e00008  jr          $ra
    ctx->pc = 0x298A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298A08u;
            // 0x298a0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298938u: goto label_298938;
            case 0x29895Cu: goto label_29895c;
            case 0x2989A4u: goto label_2989a4;
            case 0x2989C4u: goto label_2989c4;
            case 0x2989D0u: goto label_2989d0;
            case 0x2989F4u: goto label_2989f4;
            case 0x2989F8u: goto label_2989f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298A10u;
}
