#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F048
// Address: 0x17f048 - 0x17f1c8
void sub_0017F048_0x17f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F048_0x17f048");
#endif

    ctx->pc = 0x17f048u;

label_17f048:
    // 0x17f048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f04c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f058: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17f05c: 0x28420801  slti        $v0, $v0, 0x801
    ctx->pc = 0x17f05cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x17f060: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x17F060u;
    {
        const bool branch_taken_0x17f060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f060) {
            ctx->pc = 0x17F064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F060u;
            // 0x17f064: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F148u;
            goto label_17f148;
        }
    }
    ctx->pc = 0x17F068u;
    // 0x17f068: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17f068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17f06c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x17f06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x17f070: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17F070u;
    {
        const bool branch_taken_0x17f070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F070u;
            // 0x17f074: 0x24640800  addiu       $a0, $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f070) {
            ctx->pc = 0x17F0D0u;
            goto label_17f0d0;
        }
    }
    ctx->pc = 0x17F078u;
    // 0x17f078: 0x24621000  addiu       $v0, $v1, 0x1000
    ctx->pc = 0x17f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
label_17f07c:
    // 0x17f07c: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x17f07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x17f080: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x17f080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x17f084: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x17f084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17f088: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x17f088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17f08c: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x17f08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17f090: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x17f090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17f094: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x17f094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x17f098: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x17f098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x17f09c: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x17f09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f0a0: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x17f0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f0a4: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x17f0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f0a8: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x17f0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f0ac: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x17f0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f0b0: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x17f0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f0b4: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x17f0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f0b8: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x17f0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f0bc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17f0c0: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17F0C0u;
    {
        const bool branch_taken_0x17f0c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0C0u;
            // 0x17f0c4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0c0) {
            ctx->pc = 0x17F07Cu;
            runtime->cooperativeGuestYield();
            goto label_17f07c;
        }
    }
    ctx->pc = 0x17F0C8u;
    // 0x17f0c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17F0C8u;
    {
        const bool branch_taken_0x17f0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0C8u;
            // 0x17f0cc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0c8) {
            ctx->pc = 0x17F104u;
            goto label_17f104;
        }
    }
    ctx->pc = 0x17F0D0u;
label_17f0d0:
    // 0x17f0d0: 0x24621000  addiu       $v0, $v1, 0x1000
    ctx->pc = 0x17f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
label_17f0d4:
    // 0x17f0d4: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x17f0d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f0d8: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x17f0d8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f0dc: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x17f0dcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17f0e0: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x17f0e0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17f0e4: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x17f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x17f0e8: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x17f0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x17f0ec: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x17f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x17f0f0: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x17f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x17f0f4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17f0f8: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17F0F8u;
    {
        const bool branch_taken_0x17f0f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0F8u;
            // 0x17f0fc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0f8) {
            ctx->pc = 0x17F0D4u;
            runtime->cooperativeGuestYield();
            goto label_17f0d4;
        }
    }
    ctx->pc = 0x17F100u;
    // 0x17f100: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17f104:
    // 0x17f104: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x17f104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x17f108: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x17f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17f10c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x17f10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x17f110: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x17f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x17f114: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x17f114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17f118: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17f118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17f11c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x17f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17f120: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x17f120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x17f124: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x17f124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17f128: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x17f128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x17f12c: 0x40f809  jalr        $v0
    ctx->pc = 0x17F12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F134u);
        ctx->pc = 0x17F130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F12Cu;
            // 0x17f130: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17F134u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F048u: goto label_17f048;
            case 0x17F07Cu: goto label_17f07c;
            case 0x17F0D0u: goto label_17f0d0;
            case 0x17F0D4u: goto label_17f0d4;
            case 0x17F104u: goto label_17f104;
            case 0x17F148u: goto label_17f148;
            case 0x17F198u: goto label_17f198;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17F134u; }
            if (ctx->pc != 0x17F134u) { return; }
        }
        }
    }
    ctx->pc = 0x17F134u;
    // 0x17f134: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x17f134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17f138: 0x2463f800  addiu       $v1, $v1, -0x800
    ctx->pc = 0x17f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
    // 0x17f13c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f140: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x17f140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x17f144: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f148:
    // 0x17f148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f14c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F14Cu;
            // 0x17f150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F048u: goto label_17f048;
            case 0x17F07Cu: goto label_17f07c;
            case 0x17F0D0u: goto label_17f0d0;
            case 0x17F0D4u: goto label_17f0d4;
            case 0x17F104u: goto label_17f104;
            case 0x17F148u: goto label_17f148;
            case 0x17F198u: goto label_17f198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F154u;
    // 0x17f154: 0x0  nop
    ctx->pc = 0x17f154u;
    // NOP
    // 0x17f158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f15c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17f160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f16c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17f16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f170: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17f170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f174: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17f174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17f178: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17f178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17f17c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x17F17Cu;
    SET_GPR_U32(ctx, 31, 0x17F184u);
    ctx->pc = 0x17F180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F17Cu;
            // 0x17f180: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F184u; }
        if (ctx->pc != 0x17F184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F184u; }
        if (ctx->pc != 0x17F184u) { return; }
    }
    ctx->pc = 0x17F184u;
    // 0x17f184: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17f184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17f188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f18c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f190: 0xc05fc12  jal         func_17F048
    ctx->pc = 0x17F190u;
    SET_GPR_U32(ctx, 31, 0x17F198u);
    ctx->pc = 0x17F194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F190u;
            // 0x17f194: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F048u;
    runtime->cooperativeGuestYield();
    goto label_17f048;
    ctx->pc = 0x17F198u;
label_17f198:
    // 0x17f198: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17f198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f19c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f19cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f1a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1A4u;
            // 0x17f1a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F048u: goto label_17f048;
            case 0x17F07Cu: goto label_17f07c;
            case 0x17F0D0u: goto label_17f0d0;
            case 0x17F0D4u: goto label_17f0d4;
            case 0x17F104u: goto label_17f104;
            case 0x17F148u: goto label_17f148;
            case 0x17F198u: goto label_17f198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F1ACu;
    // 0x17f1ac: 0x0  nop
    ctx->pc = 0x17f1acu;
    // NOP
    // 0x17f1b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f1b4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x17f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17f1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x17F1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1BCu;
            // 0x17f1c0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F048u: goto label_17f048;
            case 0x17F07Cu: goto label_17f07c;
            case 0x17F0D0u: goto label_17f0d0;
            case 0x17F0D4u: goto label_17f0d4;
            case 0x17F104u: goto label_17f104;
            case 0x17F148u: goto label_17f148;
            case 0x17F198u: goto label_17f198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F1C4u;
    // 0x17f1c4: 0x0  nop
    ctx->pc = 0x17f1c4u;
    // NOP
}
