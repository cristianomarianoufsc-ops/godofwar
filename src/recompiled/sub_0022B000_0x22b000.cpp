#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B000
// Address: 0x22b000 - 0x22b210
void sub_0022B000_0x22b000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B000_0x22b000");
#endif

    ctx->pc = 0x22b000u;

    // 0x22b000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b004: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22b004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22b008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b00c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b014: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22b014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b018: 0xc05d496  jal         func_175258
    ctx->pc = 0x22B018u;
    SET_GPR_U32(ctx, 31, 0x22B020u);
    ctx->pc = 0x22B01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B018u;
            // 0x22b01c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175258u;
    if (runtime->hasFunction(0x175258u)) {
        auto targetFn = runtime->lookupFunction(0x175258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B020u; }
        if (ctx->pc != 0x22B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175258_0x175268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B020u; }
        if (ctx->pc != 0x22B020u) { return; }
    }
    ctx->pc = 0x22B020u;
    // 0x22b020: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x22B020u;
    {
        const bool branch_taken_0x22b020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B020u;
            // 0x22b024: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b020) {
            ctx->pc = 0x22B0F0u;
            goto label_22b0f0;
        }
    }
    ctx->pc = 0x22B028u;
    // 0x22b028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b02c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22b030: 0x24463530  addiu       $a2, $v0, 0x3530
    ctx->pc = 0x22b030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13616));
    // 0x22b034: 0x2261025  or          $v0, $s1, $a2
    ctx->pc = 0x22b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x22b038: 0xac8311f8  sw          $v1, 0x11F8($a0)
    ctx->pc = 0x22b038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4600), GPR_U32(ctx, 3));
    // 0x22b03c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x22b03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x22b040: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22B040u;
    {
        const bool branch_taken_0x22b040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B040u;
            // 0x22b044: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b040) {
            ctx->pc = 0x22B0A4u;
            goto label_22b0a4;
        }
    }
    ctx->pc = 0x22B048u;
    // 0x22b048: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x22b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x22b04c: 0x0  nop
    ctx->pc = 0x22b04cu;
    // NOP
label_22b050:
    // 0x22b050: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x22b050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22b054: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x22b054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x22b058: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x22b058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x22b05c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x22b05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x22b060: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x22b060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x22b064: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x22b064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x22b068: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x22b068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x22b06c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x22b06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x22b070: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x22b070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b074: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x22b074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b078: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x22b078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b07c: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x22b07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b080: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x22b080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b084: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x22b084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b088: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x22b088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b08c: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x22b08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b090: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x22b090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x22b094: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x22B094u;
    {
        const bool branch_taken_0x22b094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B094u;
            // 0x22b098: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b094) {
            ctx->pc = 0x22B050u;
            runtime->cooperativeGuestYield();
            goto label_22b050;
        }
    }
    ctx->pc = 0x22B09Cu;
    // 0x22b09c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22B09Cu;
    {
        const bool branch_taken_0x22b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b09c) {
            ctx->pc = 0x22B0D4u;
            goto label_22b0d4;
        }
    }
    ctx->pc = 0x22B0A4u;
label_22b0a4:
    // 0x22b0a4: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x22b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_22b0a8:
    // 0x22b0a8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x22b0a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b0ac: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x22b0acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22b0b0: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x22b0b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x22b0b4: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x22b0b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x22b0b8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x22b0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x22b0bc: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x22b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x22b0c0: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x22b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x22b0c4: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x22b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x22b0c8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x22b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x22b0cc: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22B0CCu;
    {
        const bool branch_taken_0x22b0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B0CCu;
            // 0x22b0d0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0cc) {
            ctx->pc = 0x22B0A8u;
            runtime->cooperativeGuestYield();
            goto label_22b0a8;
        }
    }
    ctx->pc = 0x22B0D4u;
label_22b0d4:
    // 0x22b0d4: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x22b0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22b0d8: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x22b0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22b0dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x22b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22b0e0: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x22b0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b0e4: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x22b0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b0e8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x22B0E8u;
    {
        const bool branch_taken_0x22b0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B0E8u;
            // 0x22b0ec: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0e8) {
            ctx->pc = 0x22B1FCu;
            goto label_22b1fc;
        }
    }
    ctx->pc = 0x22B0F0u;
label_22b0f0:
    // 0x22b0f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22b0f4: 0xac4011f8  sw          $zero, 0x11F8($v0)
    ctx->pc = 0x22b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4600), GPR_U32(ctx, 0));
    // 0x22b0f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b0fc: 0xc08a9b0  jal         func_22A6C0
    ctx->pc = 0x22B0FCu;
    SET_GPR_U32(ctx, 31, 0x22B104u);
    ctx->pc = 0x22B100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B0FCu;
            // 0x22b100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6C0u;
    if (runtime->hasFunction(0x22A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B104u; }
        if (ctx->pc != 0x22B104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A6C0_0x22a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B104u; }
        if (ctx->pc != 0x22B104u) { return; }
    }
    ctx->pc = 0x22B104u;
    // 0x22b104: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x22b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x22b108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b10c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22b10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b110: 0xc08abc8  jal         func_22AF20
    ctx->pc = 0x22B110u;
    SET_GPR_U32(ctx, 31, 0x22B118u);
    ctx->pc = 0x22B114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B110u;
            // 0x22b114: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AF20u;
    if (runtime->hasFunction(0x22AF20u)) {
        auto targetFn = runtime->lookupFunction(0x22AF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B118u; }
        if (ctx->pc != 0x22B118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AF20_0x22af20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B118u; }
        if (ctx->pc != 0x22B118u) { return; }
    }
    ctx->pc = 0x22B118u;
    // 0x22b118: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x22b118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x22b11c: 0xc08abc8  jal         func_22AF20
    ctx->pc = 0x22B11Cu;
    SET_GPR_U32(ctx, 31, 0x22B124u);
    ctx->pc = 0x22B120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B11Cu;
            // 0x22b120: 0x26250054  addiu       $a1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AF20u;
    if (runtime->hasFunction(0x22AF20u)) {
        auto targetFn = runtime->lookupFunction(0x22AF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B124u; }
        if (ctx->pc != 0x22B124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AF20_0x22af20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B124u; }
        if (ctx->pc != 0x22B124u) { return; }
    }
    ctx->pc = 0x22B124u;
    // 0x22b124: 0x6a2800cb  ldl         $t0, 0xCB($s1)
    ctx->pc = 0x22b124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 203); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x22b128: 0x6e2800c4  ldr         $t0, 0xC4($s1)
    ctx->pc = 0x22b128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 196); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x22b12c: 0x6a2200d3  ldl         $v0, 0xD3($s1)
    ctx->pc = 0x22b12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22b130: 0x6e2200cc  ldr         $v0, 0xCC($s1)
    ctx->pc = 0x22b130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22b134: 0x6a2300db  ldl         $v1, 0xDB($s1)
    ctx->pc = 0x22b134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22b138: 0x6e2300d4  ldr         $v1, 0xD4($s1)
    ctx->pc = 0x22b138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22b13c: 0xb20800db  sdl         $t0, 0xDB($s0)
    ctx->pc = 0x22b13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b140: 0xb60800d4  sdr         $t0, 0xD4($s0)
    ctx->pc = 0x22b140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b144: 0xb20200e3  sdl         $v0, 0xE3($s0)
    ctx->pc = 0x22b144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b148: 0xb60200dc  sdr         $v0, 0xDC($s0)
    ctx->pc = 0x22b148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b14c: 0xb20300eb  sdl         $v1, 0xEB($s0)
    ctx->pc = 0x22b14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b150: 0xb60300e4  sdr         $v1, 0xE4($s0)
    ctx->pc = 0x22b150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b158: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x22b158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x22b15c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22B15Cu;
    {
        const bool branch_taken_0x22b15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B15Cu;
            // 0x22b160: 0xae0300c4  sw          $v1, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b15c) {
            ctx->pc = 0x22B1ACu;
            goto label_22b1ac;
        }
    }
    ctx->pc = 0x22B164u;
    // 0x22b164: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x22b164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22b168: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x22B168u;
    {
        const bool branch_taken_0x22b168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b168) {
            ctx->pc = 0x22B16Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B168u;
            // 0x22b16c: 0x8e2500e8  lw          $a1, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B1F0u;
            goto label_22b1f0;
        }
    }
    ctx->pc = 0x22B170u;
    // 0x22b170: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b174: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B174u;
    {
        const bool branch_taken_0x22b174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B174u;
            // 0x22b178: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b174) {
            ctx->pc = 0x22B190u;
            goto label_22b190;
        }
    }
    ctx->pc = 0x22B17Cu;
    // 0x22b17c: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22B17Cu;
    {
        const bool branch_taken_0x22b17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b17c) {
            ctx->pc = 0x22B180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B17Cu;
            // 0x22b180: 0xc62000dc  lwc1        $f0, 0xDC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B1D8u;
            goto label_22b1d8;
        }
    }
    ctx->pc = 0x22B184u;
    // 0x22b184: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x22B184u;
    {
        const bool branch_taken_0x22b184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B184u;
            // 0x22b188: 0x8e2500e8  lw          $a1, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b184) {
            ctx->pc = 0x22B1F0u;
            goto label_22b1f0;
        }
    }
    ctx->pc = 0x22B18Cu;
    // 0x22b18c: 0x0  nop
    ctx->pc = 0x22b18cu;
    // NOP
label_22b190:
    // 0x22b190: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x22b190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b194: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x22b194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x22b198: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x22b198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x22b19c: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x22b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x22b1a0: 0xc62000c0  lwc1        $f0, 0xC0($s1)
    ctx->pc = 0x22b1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b1a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22B1A4u;
    {
        const bool branch_taken_0x22b1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B1A4u;
            // 0x22b1a8: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1a4) {
            ctx->pc = 0x22B1ECu;
            goto label_22b1ec;
        }
    }
    ctx->pc = 0x22B1ACu;
label_22b1ac:
    // 0x22b1ac: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x22b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x22b1b0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x22b1b4: 0xc62000b8  lwc1        $f0, 0xB8($s1)
    ctx->pc = 0x22b1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b1b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22b1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b1bc: 0x8c646eb0  lw          $a0, 0x6EB0($v1)
    ctx->pc = 0x22b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28336)));
    // 0x22b1c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22b1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1c4: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x22b1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x22b1c8: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x22B1C8u;
    SET_GPR_U32(ctx, 31, 0x22B1D0u);
    ctx->pc = 0x22B1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B1C8u;
            // 0x22b1cc: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B1D0u; }
        if (ctx->pc != 0x22B1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B1D0u; }
        if (ctx->pc != 0x22B1D0u) { return; }
    }
    ctx->pc = 0x22B1D0u;
    // 0x22b1d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22B1D0u;
    {
        const bool branch_taken_0x22b1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B1D0u;
            // 0x22b1d4: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1d0) {
            ctx->pc = 0x22B1ECu;
            goto label_22b1ec;
        }
    }
    ctx->pc = 0x22B1D8u;
label_22b1d8:
    // 0x22b1d8: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x22b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x22b1dc: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x22b1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x22b1e0: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x22b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x22b1e4: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x22b1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b1e8: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x22b1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
label_22b1ec:
    // 0x22b1ec: 0x8e2500e8  lw          $a1, 0xE8($s1)
    ctx->pc = 0x22b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_22b1f0:
    // 0x22b1f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b1f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b1f4: 0xc08ac98  jal         func_22B260
    ctx->pc = 0x22B1F4u;
    SET_GPR_U32(ctx, 31, 0x22B1FCu);
    ctx->pc = 0x22B1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B1F4u;
            // 0x22b1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B260u;
    if (runtime->hasFunction(0x22B260u)) {
        auto targetFn = runtime->lookupFunction(0x22B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B1FCu; }
        if (ctx->pc != 0x22B1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B260_0x22b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B1FCu; }
        if (ctx->pc != 0x22B1FCu) { return; }
    }
    ctx->pc = 0x22B1FCu;
label_22b1fc:
    // 0x22b1fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22b1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b208: 0x3e00008  jr          $ra
    ctx->pc = 0x22B208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B208u;
            // 0x22b20c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B050u: goto label_22b050;
            case 0x22B0A4u: goto label_22b0a4;
            case 0x22B0A8u: goto label_22b0a8;
            case 0x22B0D4u: goto label_22b0d4;
            case 0x22B0F0u: goto label_22b0f0;
            case 0x22B190u: goto label_22b190;
            case 0x22B1ACu: goto label_22b1ac;
            case 0x22B1D8u: goto label_22b1d8;
            case 0x22B1ECu: goto label_22b1ec;
            case 0x22B1F0u: goto label_22b1f0;
            case 0x22B1FCu: goto label_22b1fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B210u;
}
