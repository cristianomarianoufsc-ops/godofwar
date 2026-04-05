#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298AD8
// Address: 0x298ad8 - 0x298ce8
void sub_00298AD8_0x298ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298AD8_0x298ad8");
#endif

    ctx->pc = 0x298ad8u;

    // 0x298ad8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x298ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x298adc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x298adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x298ae0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x298ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x298ae4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x298ae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ae8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298aec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x298aecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298af0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x298af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298af4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x298af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298af8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x298af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x298afc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x298afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b00: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x298b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x298b04: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x298b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x298b08: 0xc0a6244  jal         func_298910
    ctx->pc = 0x298B08u;
    SET_GPR_U32(ctx, 31, 0x298B10u);
    ctx->pc = 0x298B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298B08u;
            // 0x298b0c: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298910u;
    if (runtime->hasFunction(0x298910u)) {
        auto targetFn = runtime->lookupFunction(0x298910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298B10u; }
        if (ctx->pc != 0x298B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_298910_0x298a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298B10u; }
        if (ctx->pc != 0x298B10u) { return; }
    }
    ctx->pc = 0x298B10u;
    // 0x298b10: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x298B10u;
    {
        const bool branch_taken_0x298b10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x298B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298B10u;
            // 0x298b14: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b10) {
            ctx->pc = 0x298CB8u;
            goto label_298cb8;
        }
    }
    ctx->pc = 0x298B18u;
    // 0x298b18: 0xc0a6284  jal         func_298A10
    ctx->pc = 0x298B18u;
    SET_GPR_U32(ctx, 31, 0x298B20u);
    ctx->pc = 0x298A10u;
    if (runtime->hasFunction(0x298A10u)) {
        auto targetFn = runtime->lookupFunction(0x298A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298B20u; }
        if (ctx->pc != 0x298B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298A10_0x298a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298B20u; }
        if (ctx->pc != 0x298B20u) { return; }
    }
    ctx->pc = 0x298B20u;
    // 0x298b20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298B20u;
    {
        const bool branch_taken_0x298b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298B20u;
            // 0x298b24: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b20) {
            ctx->pc = 0x298B34u;
            goto label_298b34;
        }
    }
    ctx->pc = 0x298B28u;
    // 0x298b28: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x298b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x298b2c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x298B2Cu;
    {
        const bool branch_taken_0x298b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298B2Cu;
            // 0x298b30: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b2c) {
            ctx->pc = 0x298CB8u;
            goto label_298cb8;
        }
    }
    ctx->pc = 0x298B34u;
label_298b34:
    // 0x298b34: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x298b34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b38: 0x2692ad00  addiu       $s2, $s4, -0x5300
    ctx->pc = 0x298b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946048));
    // 0x298b3c: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x298B3Cu;
    {
        const bool branch_taken_0x298b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298B3Cu;
            // 0x298b40: 0xae93ad00  sw          $s3, -0x5300($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294946048), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b3c) {
            ctx->pc = 0x298C68u;
            goto label_298c68;
        }
    }
    ctx->pc = 0x298B44u;
    // 0x298b44: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x298b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x298b48: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x298B48u;
    {
        const bool branch_taken_0x298b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298B48u;
            // 0x298b4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b48) {
            ctx->pc = 0x298C54u;
            goto label_298c54;
        }
    }
    ctx->pc = 0x298B50u;
    // 0x298b50: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x298b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x298b54: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x298b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x298b58: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x298b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x298b5c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x298B5Cu;
    {
        const bool branch_taken_0x298b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298B5Cu;
            // 0x298b60: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b5c) {
            ctx->pc = 0x298BC8u;
            goto label_298bc8;
        }
    }
    ctx->pc = 0x298B64u;
    // 0x298b64: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x298b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x298b68: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x298b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_298b6c:
    // 0x298b6c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x298b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x298b70: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x298b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x298b74: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x298b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x298b78: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x298b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x298b7c: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x298b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x298b80: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x298b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x298b84: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x298b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x298b88: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x298b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x298b8c: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x298b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298b90: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x298b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298b94: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x298b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298b98: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x298b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298b9c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x298b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298ba0: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x298ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298ba4: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x298ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298ba8: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x298ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298bac: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x298bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x298bb0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x298bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x298bb4: 0x0  nop
    ctx->pc = 0x298bb4u;
    // NOP
    // 0x298bb8: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x298BB8u;
    {
        const bool branch_taken_0x298bb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x298bb8) {
            ctx->pc = 0x298B6Cu;
            runtime->cooperativeGuestYield();
            goto label_298b6c;
        }
    }
    ctx->pc = 0x298BC0u;
    // 0x298bc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x298BC0u;
    {
        const bool branch_taken_0x298bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298bc0) {
            ctx->pc = 0x298C04u;
            goto label_298c04;
        }
    }
    ctx->pc = 0x298BC8u;
label_298bc8:
    // 0x298bc8: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x298bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x298bcc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x298bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_298bd0:
    // 0x298bd0: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x298bd0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x298bd4: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x298bd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x298bd8: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x298bd8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x298bdc: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x298bdcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x298be0: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x298be0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x298be4: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x298be4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x298be8: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x298be8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x298bec: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x298becu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x298bf0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x298bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x298bf4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x298bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x298bf8: 0x0  nop
    ctx->pc = 0x298bf8u;
    // NOP
    // 0x298bfc: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x298BFCu;
    {
        const bool branch_taken_0x298bfc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x298bfc) {
            ctx->pc = 0x298BD0u;
            runtime->cooperativeGuestYield();
            goto label_298bd0;
        }
    }
    ctx->pc = 0x298C04u;
label_298c04:
    // 0x298c04: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x298c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x298c08: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x298c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x298c0c: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x298c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x298c10: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x298c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x298c14: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x298c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x298c18: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x298c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x298c1c: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x298c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x298c20: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x298c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x298c24: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x298c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298c28: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x298c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298c2c: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x298c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298c30: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x298c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298c34: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x298c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298c38: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x298c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x298c3c: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x298c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298c40: 0x26a3ad00  addiu       $v1, $s5, -0x5300
    ctx->pc = 0x298c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946048));
    // 0x298c44: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x298c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x298c48: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x298c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x298c4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x298C4Cu;
    {
        const bool branch_taken_0x298c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298C4Cu;
            // 0x298c50: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c4c) {
            ctx->pc = 0x298C70u;
            goto label_298c70;
        }
    }
    ctx->pc = 0x298C54u;
label_298c54:
    // 0x298c54: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x298c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x298c58: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x298C58u;
    SET_GPR_U32(ctx, 31, 0x298C60u);
    ctx->pc = 0x298C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298C58u;
            // 0x298c5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C60u; }
        if (ctx->pc != 0x298C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C60u; }
        if (ctx->pc != 0x298C60u) { return; }
    }
    ctx->pc = 0x298C60u;
    // 0x298c60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x298C60u;
    {
        const bool branch_taken_0x298c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298C60u;
            // 0x298c64: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c60) {
            ctx->pc = 0x298C6Cu;
            goto label_298c6c;
        }
    }
    ctx->pc = 0x298C68u;
label_298c68:
    // 0x298c68: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x298c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_298c6c:
    // 0x298c6c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x298c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_298c70:
    // 0x298c70: 0x26b0ad00  addiu       $s0, $s5, -0x5300
    ctx->pc = 0x298c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946048));
    // 0x298c74: 0x24a4af00  addiu       $a0, $a1, -0x5100
    ctx->pc = 0x298c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946560));
    // 0x298c78: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x298c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x298c7c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x298c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x298c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c84: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x298c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c88: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x298c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x298c8c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x298c8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c90: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x298c90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x298c94: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x298C94u;
    SET_GPR_U32(ctx, 31, 0x298C9Cu);
    ctx->pc = 0x298C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298C94u;
            // 0x298c98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C9Cu; }
        if (ctx->pc != 0x298C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C9Cu; }
        if (ctx->pc != 0x298C9Cu) { return; }
    }
    ctx->pc = 0x298C9Cu;
    // 0x298c9c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298C9Cu;
    {
        const bool branch_taken_0x298c9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x298c9c) {
            ctx->pc = 0x298CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298C9Cu;
            // 0x298ca0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298CB0u;
            goto label_298cb0;
        }
    }
    ctx->pc = 0x298CA4u;
    // 0x298ca4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x298ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x298ca8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x298CA8u;
    {
        const bool branch_taken_0x298ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298CA8u;
            // 0x298cac: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ca8) {
            ctx->pc = 0x298CB8u;
            goto label_298cb8;
        }
    }
    ctx->pc = 0x298CB0u;
label_298cb0:
    // 0x298cb0: 0x8e82ad00  lw          $v0, -0x5300($s4)
    ctx->pc = 0x298cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946048)));
    // 0x298cb4: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x298cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_298cb8:
    // 0x298cb8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x298cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298cbc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x298cbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298cc0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x298cc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298cc4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x298cc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298cc8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x298cc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298ccc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x298cccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298cd0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x298cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298cd4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x298CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298CD8u;
            // 0x298cdc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298B34u: goto label_298b34;
            case 0x298B6Cu: goto label_298b6c;
            case 0x298BC8u: goto label_298bc8;
            case 0x298BD0u: goto label_298bd0;
            case 0x298C04u: goto label_298c04;
            case 0x298C54u: goto label_298c54;
            case 0x298C68u: goto label_298c68;
            case 0x298C6Cu: goto label_298c6c;
            case 0x298C70u: goto label_298c70;
            case 0x298CB0u: goto label_298cb0;
            case 0x298CB8u: goto label_298cb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298CE0u;
    // 0x298ce0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x298ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x298ce4: 0x0  nop
    ctx->pc = 0x298ce4u;
    // NOP
}
