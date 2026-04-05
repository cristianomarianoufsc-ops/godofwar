#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229AD0
// Address: 0x229ad0 - 0x229c80
void sub_00229AD0_0x229ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229AD0_0x229ad0");
#endif

    ctx->pc = 0x229ad0u;

    // 0x229ad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x229ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x229ad4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x229ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x229ad8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x229ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x229adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ae0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x229ae0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x229ae4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x229ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ae8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x229ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x229aec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x229aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229af0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x229AF0u;
    {
        const bool branch_taken_0x229af0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x229AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229AF0u;
            // 0x229af4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229af0) {
            ctx->pc = 0x229B18u;
            goto label_229b18;
        }
    }
    ctx->pc = 0x229AF8u;
    // 0x229af8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x229af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229afc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x229afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229b00: 0x0  nop
    ctx->pc = 0x229b00u;
    // NOP
    // 0x229b04: 0x45030056  bc1tl       . + 4 + (0x56 << 2)
    ctx->pc = 0x229B04u;
    {
        const bool branch_taken_0x229b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229b04) {
            ctx->pc = 0x229B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229B04u;
            // 0x229b08: 0xe6140010  swc1        $f20, 0x10($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x229C60u;
            goto label_229c60;
        }
    }
    ctx->pc = 0x229B0Cu;
    // 0x229b0c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x229B0Cu;
    {
        const bool branch_taken_0x229b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229B0Cu;
            // 0x229b10: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b0c) {
            ctx->pc = 0x229C64u;
            goto label_229c64;
        }
    }
    ctx->pc = 0x229B14u;
    // 0x229b14: 0x0  nop
    ctx->pc = 0x229b14u;
    // NOP
label_229b18:
    // 0x229b18: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x229b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x229b1c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x229B1Cu;
    {
        const bool branch_taken_0x229b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229B1Cu;
            // 0x229b20: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b1c) {
            ctx->pc = 0x229C60u;
            goto label_229c60;
        }
    }
    ctx->pc = 0x229B24u;
    // 0x229b24: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x229b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x229b28: 0x24428210  addiu       $v0, $v0, -0x7DF0
    ctx->pc = 0x229b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935056));
    // 0x229b2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229b30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x229b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229b34: 0x400008  jr          $v0
    ctx->pc = 0x229B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229B3Cu: goto label_229b3c;
            case 0x229BA8u: goto label_229ba8;
            case 0x229BB0u: goto label_229bb0;
            case 0x229BC4u: goto label_229bc4;
            case 0x229C28u: goto label_229c28;
            case 0x229C38u: goto label_229c38;
            case 0x229C60u: goto label_229c60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229B3Cu;
label_229b3c:
    // 0x229b3c: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x229B3Cu;
    SET_GPR_U32(ctx, 31, 0x229B44u);
    ctx->pc = 0x229B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229B3Cu;
            // 0x229b40: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B44u; }
        if (ctx->pc != 0x229B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B44u; }
        if (ctx->pc != 0x229B44u) { return; }
    }
    ctx->pc = 0x229B44u;
    // 0x229b44: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x229b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x229b48: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x229b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x229b4c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x229b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x229b50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x229b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b54: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x229b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    // 0x229b58: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x229b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x229b5c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x229b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x229b60: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x229B60u;
    SET_GPR_U32(ctx, 31, 0x229B68u);
    ctx->pc = 0x229B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229B60u;
            // 0x229b64: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B68u; }
        if (ctx->pc != 0x229B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B68u; }
        if (ctx->pc != 0x229B68u) { return; }
    }
    ctx->pc = 0x229B68u;
    // 0x229b68: 0xa3a00017  sb          $zero, 0x17($sp)
    ctx->pc = 0x229b68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x229b6c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x229b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x229b70: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x229b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x229b74: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x229b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x229b78: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x229b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x229b7c: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x229b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x229b80: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x229b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x229b84: 0xb2020043  sdl         $v0, 0x43($s0)
    ctx->pc = 0x229b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229b88: 0xb602003c  sdr         $v0, 0x3C($s0)
    ctx->pc = 0x229b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229b8c: 0xb203004b  sdl         $v1, 0x4B($s0)
    ctx->pc = 0x229b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229b90: 0xb6030044  sdr         $v1, 0x44($s0)
    ctx->pc = 0x229b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229b94: 0xb2040053  sdl         $a0, 0x53($s0)
    ctx->pc = 0x229b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229b98: 0xb604004c  sdr         $a0, 0x4C($s0)
    ctx->pc = 0x229b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229b9c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x229B9Cu;
    {
        const bool branch_taken_0x229b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229B9Cu;
            // 0x229ba0: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b9c) {
            ctx->pc = 0x229C64u;
            goto label_229c64;
        }
    }
    ctx->pc = 0x229BA4u;
    // 0x229ba4: 0x0  nop
    ctx->pc = 0x229ba4u;
    // NOP
label_229ba8:
    // 0x229ba8: 0xc05c370  jal         func_170DC0
    ctx->pc = 0x229BA8u;
    SET_GPR_U32(ctx, 31, 0x229BB0u);
    ctx->pc = 0x229BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229BA8u;
            // 0x229bac: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DC0u;
    if (runtime->hasFunction(0x170DC0u)) {
        auto targetFn = runtime->lookupFunction(0x170DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BB0u; }
        if (ctx->pc != 0x229BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170DC0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BB0u; }
        if (ctx->pc != 0x229BB0u) { return; }
    }
    ctx->pc = 0x229BB0u;
label_229bb0:
    // 0x229bb0: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x229bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x229bb4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x229bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x229bb8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x229bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x229bbc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x229BBCu;
    {
        const bool branch_taken_0x229bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229BBCu;
            // 0x229bc0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bbc) {
            ctx->pc = 0x229C60u;
            goto label_229c60;
        }
    }
    ctx->pc = 0x229BC4u;
label_229bc4:
    // 0x229bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229bc8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x229bc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229bcc: 0x0  nop
    ctx->pc = 0x229bccu;
    // NOP
    // 0x229bd0: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x229BD0u;
    {
        const bool branch_taken_0x229bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229bd0) {
            ctx->pc = 0x229BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229BD0u;
            // 0x229bd4: 0xe6140010  swc1        $f20, 0x10($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x229C30u;
            goto label_229c30;
        }
    }
    ctx->pc = 0x229BD8u;
    // 0x229bd8: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x229BD8u;
    SET_GPR_U32(ctx, 31, 0x229BE0u);
    ctx->pc = 0x229BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229BD8u;
            // 0x229bdc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BE0u; }
        if (ctx->pc != 0x229BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BE0u; }
        if (ctx->pc != 0x229BE0u) { return; }
    }
    ctx->pc = 0x229BE0u;
    // 0x229be0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x229be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x229be4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x229be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x229be8: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x229be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    // 0x229bec: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x229BECu;
    SET_GPR_U32(ctx, 31, 0x229BF4u);
    ctx->pc = 0x229BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229BECu;
            // 0x229bf0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BF4u; }
        if (ctx->pc != 0x229BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BF4u; }
        if (ctx->pc != 0x229BF4u) { return; }
    }
    ctx->pc = 0x229BF4u;
    // 0x229bf4: 0xa3a00037  sb          $zero, 0x37($sp)
    ctx->pc = 0x229bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x229bf8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x229bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x229bfc: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x229bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x229c00: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x229c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x229c04: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x229c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x229c08: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x229c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x229c0c: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x229c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x229c10: 0xb2020043  sdl         $v0, 0x43($s0)
    ctx->pc = 0x229c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229c14: 0xb602003c  sdr         $v0, 0x3C($s0)
    ctx->pc = 0x229c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229c18: 0xb203004b  sdl         $v1, 0x4B($s0)
    ctx->pc = 0x229c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229c1c: 0xb6030044  sdr         $v1, 0x44($s0)
    ctx->pc = 0x229c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229c20: 0xb2040053  sdl         $a0, 0x53($s0)
    ctx->pc = 0x229c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229c24: 0xb604004c  sdr         $a0, 0x4C($s0)
    ctx->pc = 0x229c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_229c28:
    // 0x229c28: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x229c28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x229c2c: 0x0  nop
    ctx->pc = 0x229c2cu;
    // NOP
label_229c30:
    // 0x229c30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x229C30u;
    {
        const bool branch_taken_0x229c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229C30u;
            // 0x229c34: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c30) {
            ctx->pc = 0x229C60u;
            goto label_229c60;
        }
    }
    ctx->pc = 0x229C38u;
label_229c38:
    // 0x229c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229c40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x229c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229c44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x229c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229c48: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x229c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x229c4c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x229C4Cu;
    {
        const bool branch_taken_0x229c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x229C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229C4Cu;
            // 0x229c50: 0xe6140010  swc1        $f20, 0x10($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c4c) {
            ctx->pc = 0x229C60u;
            goto label_229c60;
        }
    }
    ctx->pc = 0x229C54u;
    // 0x229c54: 0xc05c38c  jal         func_170E30
    ctx->pc = 0x229C54u;
    SET_GPR_U32(ctx, 31, 0x229C5Cu);
    ctx->pc = 0x229C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229C54u;
            // 0x229c58: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170E30u;
    if (runtime->hasFunction(0x170E30u)) {
        auto targetFn = runtime->lookupFunction(0x170E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C5Cu; }
        if (ctx->pc != 0x229C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170E30_0x170e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C5Cu; }
        if (ctx->pc != 0x229C5Cu) { return; }
    }
    ctx->pc = 0x229C5Cu;
    // 0x229c5c: 0x0  nop
    ctx->pc = 0x229c5cu;
    // NOP
label_229c60:
    // 0x229c60: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x229c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_229c64:
    // 0x229c64: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x229c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229c68: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x229c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229c6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x229c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229c70: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x229c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229c74: 0x3e00008  jr          $ra
    ctx->pc = 0x229C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229C74u;
            // 0x229c78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229B18u: goto label_229b18;
            case 0x229B3Cu: goto label_229b3c;
            case 0x229BA8u: goto label_229ba8;
            case 0x229BB0u: goto label_229bb0;
            case 0x229BC4u: goto label_229bc4;
            case 0x229C28u: goto label_229c28;
            case 0x229C30u: goto label_229c30;
            case 0x229C38u: goto label_229c38;
            case 0x229C60u: goto label_229c60;
            case 0x229C64u: goto label_229c64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229C7Cu;
    // 0x229c7c: 0x0  nop
    ctx->pc = 0x229c7cu;
    // NOP
}
