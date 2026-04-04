#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF3E8
// Address: 0x1df3e8 - 0x1df5e0
void sub_001DF3E8_0x1df3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF3E8_0x1df3e8");
#endif

    ctx->pc = 0x1df3e8u;

    // 0x1df3e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1df3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1df3ec: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1df3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1df3f0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1df3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1df3f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1df3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1df3fc: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1df3fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1df400: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1df400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1df404: 0x40f809  jalr        $v0
    ctx->pc = 0x1DF404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DF40Cu);
        ctx->pc = 0x1DF408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF404u;
            // 0x1df408: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF40Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF454u: goto label_1df454;
            case 0x1DF470u: goto label_1df470;
            case 0x1DF4D8u: goto label_1df4d8;
            case 0x1DF4DCu: goto label_1df4dc;
            case 0x1DF4F0u: goto label_1df4f0;
            case 0x1DF578u: goto label_1df578;
            case 0x1DF57Cu: goto label_1df57c;
            case 0x1DF588u: goto label_1df588;
            case 0x1DF5C0u: goto label_1df5c0;
            case 0x1DF5D0u: goto label_1df5d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF40Cu; }
            if (ctx->pc != 0x1DF40Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DF40Cu;
    // 0x1df40c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DF40Cu;
    {
        const bool branch_taken_0x1df40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df40c) {
            ctx->pc = 0x1DF454u;
            goto label_1df454;
        }
    }
    ctx->pc = 0x1DF414u;
    // 0x1df414: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1df414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1df418: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1df418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1df41c: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1df41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1df420: 0x40f809  jalr        $v0
    ctx->pc = 0x1DF420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DF428u);
        ctx->pc = 0x1DF424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF420u;
            // 0x1df424: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF428u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF454u: goto label_1df454;
            case 0x1DF470u: goto label_1df470;
            case 0x1DF4D8u: goto label_1df4d8;
            case 0x1DF4DCu: goto label_1df4dc;
            case 0x1DF4F0u: goto label_1df4f0;
            case 0x1DF578u: goto label_1df578;
            case 0x1DF57Cu: goto label_1df57c;
            case 0x1DF588u: goto label_1df588;
            case 0x1DF5C0u: goto label_1df5c0;
            case 0x1DF5D0u: goto label_1df5d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF428u; }
            if (ctx->pc != 0x1DF428u) { return; }
        }
        }
    }
    ctx->pc = 0x1DF428u;
    // 0x1df428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df42c: 0xc080362  jal         func_200D88
    ctx->pc = 0x1DF42Cu;
    SET_GPR_U32(ctx, 31, 0x1DF434u);
    ctx->pc = 0x1DF430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF42Cu;
            // 0x1df430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D88u;
    if (runtime->hasFunction(0x200D88u)) {
        auto targetFn = runtime->lookupFunction(0x200D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF434u; }
        if (ctx->pc != 0x1DF434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d88_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF434u; }
        if (ctx->pc != 0x1DF434u) { return; }
    }
    ctx->pc = 0x1DF434u;
    // 0x1df434: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1df434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1df438: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1df438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1df43c: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1df43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1df440: 0x40f809  jalr        $v0
    ctx->pc = 0x1DF440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DF448u);
        ctx->pc = 0x1DF444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF440u;
            // 0x1df444: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF448u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF454u: goto label_1df454;
            case 0x1DF470u: goto label_1df470;
            case 0x1DF4D8u: goto label_1df4d8;
            case 0x1DF4DCu: goto label_1df4dc;
            case 0x1DF4F0u: goto label_1df4f0;
            case 0x1DF578u: goto label_1df578;
            case 0x1DF57Cu: goto label_1df57c;
            case 0x1DF588u: goto label_1df588;
            case 0x1DF5C0u: goto label_1df5c0;
            case 0x1DF5D0u: goto label_1df5d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF448u; }
            if (ctx->pc != 0x1DF448u) { return; }
        }
        }
    }
    ctx->pc = 0x1DF448u;
    // 0x1df448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df44c: 0xc080362  jal         func_200D88
    ctx->pc = 0x1DF44Cu;
    SET_GPR_U32(ctx, 31, 0x1DF454u);
    ctx->pc = 0x1DF450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF44Cu;
            // 0x1df450: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D88u;
    if (runtime->hasFunction(0x200D88u)) {
        auto targetFn = runtime->lookupFunction(0x200D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF454u; }
        if (ctx->pc != 0x1DF454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d88_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF454u; }
        if (ctx->pc != 0x1DF454u) { return; }
    }
    ctx->pc = 0x1DF454u;
label_1df454:
    // 0x1df454: 0xc077cce  jal         func_1DF338
    ctx->pc = 0x1DF454u;
    SET_GPR_U32(ctx, 31, 0x1DF45Cu);
    ctx->pc = 0x1DF458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF454u;
            // 0x1df458: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF338u;
    if (runtime->hasFunction(0x1DF338u)) {
        auto targetFn = runtime->lookupFunction(0x1DF338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF45Cu; }
        if (ctx->pc != 0x1DF45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF338_0x1df338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF45Cu; }
        if (ctx->pc != 0x1DF45Cu) { return; }
    }
    ctx->pc = 0x1DF45Cu;
    // 0x1df45c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1df45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df460: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1df460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df464: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1df464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1df468: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1df468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1df46c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1df46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1df470:
    // 0x1df470: 0x0  nop
    ctx->pc = 0x1df470u;
    // NOP
    // 0x1df474: 0x0  nop
    ctx->pc = 0x1df474u;
    // NOP
    // 0x1df478: 0x0  nop
    ctx->pc = 0x1df478u;
    // NOP
    // 0x1df47c: 0x0  nop
    ctx->pc = 0x1df47cu;
    // NOP
    // 0x1df480: 0x0  nop
    ctx->pc = 0x1df480u;
    // NOP
    // 0x1df484: 0x54c2fffa  bnel        $a2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DF484u;
    {
        const bool branch_taken_0x1df484 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df484) {
            ctx->pc = 0x1DF488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF484u;
            // 0x1df488: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF470u;
            runtime->cooperativeGuestYield();
            goto label_1df470;
        }
    }
    ctx->pc = 0x1DF48Cu;
    // 0x1df48c: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1df48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1df490: 0xaca60080  sw          $a2, 0x80($a1)
    ctx->pc = 0x1df490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 6));
    // 0x1df494: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF494u;
    {
        const bool branch_taken_0x1df494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF494u;
            // 0x1df498: 0xaca00084  sw          $zero, 0x84($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df494) {
            ctx->pc = 0x1DF4D8u;
            goto label_1df4d8;
        }
    }
    ctx->pc = 0x1DF49Cu;
    // 0x1df49c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1df49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df4a0: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DF4A0u;
    {
        const bool branch_taken_0x1df4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4A0u;
            // 0x1df4a4: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4a0) {
            ctx->pc = 0x1DF4DCu;
            goto label_1df4dc;
        }
    }
    ctx->pc = 0x1DF4A8u;
    // 0x1df4a8: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x1df4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x1df4ac: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1df4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1df4b0: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1df4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1df4b4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x1df4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df4b8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x1df4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df4bc: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x1df4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1df4c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df4c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1df4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1df4c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1df4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1df4cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1df4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df4d0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1df4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1df4d4: 0x0  nop
    ctx->pc = 0x1df4d4u;
    // NOP
label_1df4d8:
    // 0x1df4d8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1df4dc:
    // 0x1df4dc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1df4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1df4e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1df4e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1df4e4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1DF4E4u;
    {
        const bool branch_taken_0x1df4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4E4u;
            // 0x1df4e8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4e4) {
            ctx->pc = 0x1DF5D0u;
            goto label_1df5d0;
        }
    }
    ctx->pc = 0x1DF4ECu;
    // 0x1df4ec: 0x0  nop
    ctx->pc = 0x1df4ecu;
    // NOP
label_1df4f0:
    // 0x1df4f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df4f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df4f8: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1df4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df4fc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1df4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1df500: 0xc077cce  jal         func_1DF338
    ctx->pc = 0x1DF500u;
    SET_GPR_U32(ctx, 31, 0x1DF508u);
    ctx->pc = 0x1DF504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF500u;
            // 0x1df504: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF338u;
    if (runtime->hasFunction(0x1DF338u)) {
        auto targetFn = runtime->lookupFunction(0x1DF338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF508u; }
        if (ctx->pc != 0x1DF508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF338_0x1df338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF508u; }
        if (ctx->pc != 0x1DF508u) { return; }
    }
    ctx->pc = 0x1DF508u;
    // 0x1df508: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1df508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df50c: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x1df50cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df510: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1df510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1df514: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1df514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1df518: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1df518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df51c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1df51cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1df520: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1df520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1df524: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF524u;
    {
        const bool branch_taken_0x1df524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF524u;
            // 0x1df528: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df524) {
            ctx->pc = 0x1DF578u;
            goto label_1df578;
        }
    }
    ctx->pc = 0x1DF52Cu;
    // 0x1df52c: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DF52Cu;
    {
        const bool branch_taken_0x1df52c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df52c) {
            ctx->pc = 0x1DF530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF52Cu;
            // 0x1df530: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF57Cu;
            goto label_1df57c;
        }
    }
    ctx->pc = 0x1DF534u;
    // 0x1df534: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1df534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df538: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF538u;
    {
        const bool branch_taken_0x1df538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DF53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF538u;
            // 0x1df53c: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df538) {
            ctx->pc = 0x1DF578u;
            goto label_1df578;
        }
    }
    ctx->pc = 0x1DF540u;
    // 0x1df540: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1df540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1df544: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1df544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x1df548: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1df548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1df54c: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x1df54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1df550: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x1df550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1df554: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1df554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df558: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1df558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df55c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df560: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df564: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1df564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df568: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1df568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1df56c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1df56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df570: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DF570u;
    {
        const bool branch_taken_0x1df570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF570u;
            // 0x1df574: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df570) {
            ctx->pc = 0x1DF5C0u;
            goto label_1df5c0;
        }
    }
    ctx->pc = 0x1DF578u;
label_1df578:
    // 0x1df578: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1df578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1df57c:
    // 0x1df57c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df580: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF580u;
    {
        const bool branch_taken_0x1df580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DF584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF580u;
            // 0x1df584: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df580) {
            ctx->pc = 0x1DF5C0u;
            goto label_1df5c0;
        }
    }
    ctx->pc = 0x1DF588u;
label_1df588:
    // 0x1df588: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x1df588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x1df58c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1df58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1df590: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1df590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1df594: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1df594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1df598: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF598u;
    {
        const bool branch_taken_0x1df598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF598u;
            // 0x1df59c: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df598) {
            ctx->pc = 0x1DF5C0u;
            goto label_1df5c0;
        }
    }
    ctx->pc = 0x1DF5A0u;
    // 0x1df5a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1df5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1df5a4: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x1df5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1df5a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1df5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1df5ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df5b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1df5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df5b4: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DF5B4u;
    {
        const bool branch_taken_0x1df5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5B4u;
            // 0x1df5b8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5b4) {
            ctx->pc = 0x1DF588u;
            runtime->cooperativeGuestYield();
            goto label_1df588;
        }
    }
    ctx->pc = 0x1DF5BCu;
    // 0x1df5bc: 0x0  nop
    ctx->pc = 0x1df5bcu;
    // NOP
label_1df5c0:
    // 0x1df5c0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df5c4: 0x441ffca  bgez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1DF5C4u;
    {
        const bool branch_taken_0x1df5c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DF5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5C4u;
            // 0x1df5c8: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5c4) {
            ctx->pc = 0x1DF4F0u;
            runtime->cooperativeGuestYield();
            goto label_1df4f0;
        }
    }
    ctx->pc = 0x1DF5CCu;
    // 0x1df5cc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1df5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1df5d0:
    // 0x1df5d0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1df5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1df5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5D4u;
            // 0x1df5d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF454u: goto label_1df454;
            case 0x1DF470u: goto label_1df470;
            case 0x1DF4D8u: goto label_1df4d8;
            case 0x1DF4DCu: goto label_1df4dc;
            case 0x1DF4F0u: goto label_1df4f0;
            case 0x1DF578u: goto label_1df578;
            case 0x1DF57Cu: goto label_1df57c;
            case 0x1DF588u: goto label_1df588;
            case 0x1DF5C0u: goto label_1df5c0;
            case 0x1DF5D0u: goto label_1df5d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF5DCu;
    // 0x1df5dc: 0x0  nop
    ctx->pc = 0x1df5dcu;
    // NOP
}
