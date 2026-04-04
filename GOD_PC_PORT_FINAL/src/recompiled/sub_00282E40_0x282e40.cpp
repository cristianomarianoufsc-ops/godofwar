#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282E40
// Address: 0x282e40 - 0x282f60
void sub_00282E40_0x282e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282E40_0x282e40");
#endif

    ctx->pc = 0x282e40u;

    // 0x282e40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x282e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x282e44: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x282e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x282e48: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x282e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x282e4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x282e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e50: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x282e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x282e54: 0xc0a0b82  jal         func_282E08
    ctx->pc = 0x282E54u;
    SET_GPR_U32(ctx, 31, 0x282E5Cu);
    ctx->pc = 0x282E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282E54u;
            // 0x282e58: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282E08u;
    if (runtime->hasFunction(0x282E08u)) {
        auto targetFn = runtime->lookupFunction(0x282E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E5Cu; }
        if (ctx->pc != 0x282E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282e08_0x282e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E5Cu; }
        if (ctx->pc != 0x282E5Cu) { return; }
    }
    ctx->pc = 0x282E5Cu;
    // 0x282e5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x282e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e60: 0x6400039  bltz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x282E60u;
    {
        const bool branch_taken_0x282e60 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x282E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E60u;
            // 0x282e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e60) {
            ctx->pc = 0x282F48u;
            goto label_282f48;
        }
    }
    ctx->pc = 0x282E68u;
    // 0x282e68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x282e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x282e6c: 0x3c09002c  lui         $t1, 0x2C
    ctx->pc = 0x282e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)44 << 16));
    // 0x282e70: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x282e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x282e74: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x282e74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x282e78: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x282e78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x282e7c: 0x26104840  addiu       $s0, $s0, 0x4840
    ctx->pc = 0x282e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18496));
    // 0x282e80: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x282e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x282e84: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x282e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282e88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x282e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x282e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e90: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x282e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x282e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e98: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x282e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x282e9c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x282e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x282ea0: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x282ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x282ea4: 0x252a52f0  addiu       $t2, $t1, 0x52F0
    ctx->pc = 0x282ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 21232));
    // 0x282ea8: 0x69420007  ldl         $v0, 0x7($t2)
    ctx->pc = 0x282ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x282eac: 0x6d420000  ldr         $v0, 0x0($t2)
    ctx->pc = 0x282eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x282eb0: 0x85430008  lh          $v1, 0x8($t2)
    ctx->pc = 0x282eb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x282eb4: 0xb3a2001b  sdl         $v0, 0x1B($sp)
    ctx->pc = 0x282eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282eb8: 0xb7a20014  sdr         $v0, 0x14($sp)
    ctx->pc = 0x282eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282ebc: 0xa7a3001c  sh          $v1, 0x1C($sp)
    ctx->pc = 0x282ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x282ec0: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x282ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x282ec4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x282ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282ec8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x282ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x282ecc: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x282ECCu;
    SET_GPR_U32(ctx, 31, 0x282ED4u);
    ctx->pc = 0x282ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282ECCu;
            // 0x282ed0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282ED4u; }
        if (ctx->pc != 0x282ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282ED4u; }
        if (ctx->pc != 0x282ED4u) { return; }
    }
    ctx->pc = 0x282ED4u;
    // 0x282ed4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ed8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x282ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282edc: 0xc09ec04  jal         func_27B010
    ctx->pc = 0x282EDCu;
    SET_GPR_U32(ctx, 31, 0x282EE4u);
    ctx->pc = 0x282EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282EDCu;
            // 0x282ee0: 0x24a60080  addiu       $a2, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B010u;
    if (runtime->hasFunction(0x27B010u)) {
        auto targetFn = runtime->lookupFunction(0x27B010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EE4u; }
        if (ctx->pc != 0x282EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B010_0x27b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EE4u; }
        if (ctx->pc != 0x282EE4u) { return; }
    }
    ctx->pc = 0x282EE4u;
    // 0x282ee4: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x282ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282ee8: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x282ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x282eec: 0x2433018  mult        $a2, $s2, $v1
    ctx->pc = 0x282eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x282ef0: 0x24872748  addiu       $a3, $a0, 0x2748
    ctx->pc = 0x282ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 10056));
    // 0x282ef4: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x282ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x282ef8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282EF8u;
    {
        const bool branch_taken_0x282ef8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x282EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282EF8u;
            // 0x282efc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ef8) {
            ctx->pc = 0x282F08u;
            goto label_282f08;
        }
    }
    ctx->pc = 0x282F00u;
    // 0x282f00: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x282F00u;
    {
        const bool branch_taken_0x282f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F00u;
            // 0x282f04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f00) {
            ctx->pc = 0x282F48u;
            goto label_282f48;
        }
    }
    ctx->pc = 0x282F08u;
label_282f08:
    // 0x282f08: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x282f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x282f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282f10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x282f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x282f14: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x282f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x282f18: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x282f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x282f1c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x282f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f20: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x282f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x282f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x282f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f28: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x282f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x282f2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x282f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f30: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x282f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x282f34: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x282f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x282f38: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x282f38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x282f3c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x282f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x282f40: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x282f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x282f44: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x282f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_282f48:
    // 0x282f48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x282f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282f4c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x282f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282f50: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x282f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282f54: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x282f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282f58: 0x3e00008  jr          $ra
    ctx->pc = 0x282F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F58u;
            // 0x282f5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282F08u: goto label_282f08;
            case 0x282F48u: goto label_282f48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282F60u;
}
