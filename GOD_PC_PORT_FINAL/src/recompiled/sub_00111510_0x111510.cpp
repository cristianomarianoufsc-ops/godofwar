#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00111510
// Address: 0x111510 - 0x115978
void sub_00111510_0x111510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111510_0x111510");
#endif

    ctx->pc = 0x111510u;

    // 0x111510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x111514: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x111514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x111518: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11151c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11151cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111520: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x111520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x111524: 0xc045b74  jal         func_116DD0
    ctx->pc = 0x111524u;
    SET_GPR_U32(ctx, 31, 0x11152Cu);
    ctx->pc = 0x111528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111524u;
            // 0x111528: 0x8e110068  lw          $s1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116DD0u;
    if (runtime->hasFunction(0x116DD0u)) {
        auto targetFn = runtime->lookupFunction(0x116DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11152Cu; }
        if (ctx->pc != 0x11152Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116DD0_0x116dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11152Cu; }
        if (ctx->pc != 0x11152Cu) { return; }
    }
    ctx->pc = 0x11152Cu;
    // 0x11152c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x11152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x111530: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x111530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x111534: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111534u;
    {
        const bool branch_taken_0x111534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111534u;
            // 0x111538: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111534) {
            ctx->pc = 0x111544u;
            goto label_111544;
        }
    }
    ctx->pc = 0x11153Cu;
    // 0x11153c: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x11153Cu;
    {
        const bool branch_taken_0x11153c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11153c) {
            ctx->pc = 0x111540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11153Cu;
            // 0x111540: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11164Cu;
            goto label_11164c;
        }
    }
    ctx->pc = 0x111544u;
label_111544:
    // 0x111544: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x111544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x111548: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x111548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x11154c: 0x8c4b0210  lw          $t3, 0x210($v0)
    ctx->pc = 0x11154cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x111550: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x111550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x111554: 0x8c440208  lw          $a0, 0x208($v0)
    ctx->pc = 0x111554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 520)));
    // 0x111558: 0x8e09005c  lw          $t1, 0x5C($s0)
    ctx->pc = 0x111558u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x11155c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11155Cu;
    {
        const bool branch_taken_0x11155c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11155Cu;
            // 0x111560: 0x8e0a0064  lw          $t2, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11155c) {
            ctx->pc = 0x11158Cu;
            goto label_11158c;
        }
    }
    ctx->pc = 0x111564u;
    // 0x111564: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x111564u;
    {
        const bool branch_taken_0x111564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x111568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111564u;
            // 0x111568: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111564) {
            ctx->pc = 0x11158Cu;
            goto label_11158c;
        }
    }
    ctx->pc = 0x11156Cu;
    // 0x11156c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11156cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_111570:
    // 0x111570: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x111570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111574: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x111574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x111578: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x111578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x11157c: 0xf1182b  sltu        $v1, $a3, $s1
    ctx->pc = 0x11157cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x111580: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x111580u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x111584: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111584u;
    {
        const bool branch_taken_0x111584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111584u;
            // 0x111588: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111584) {
            ctx->pc = 0x111570u;
            runtime->cooperativeGuestYield();
            goto label_111570;
        }
    }
    ctx->pc = 0x11158Cu;
label_11158c:
    // 0x11158c: 0x1120001f  beqz        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x11158Cu;
    {
        const bool branch_taken_0x11158c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x11158c) {
            ctx->pc = 0x11160Cu;
            goto label_11160c;
        }
    }
    ctx->pc = 0x111594u;
    // 0x111594: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x111594u;
    {
        const bool branch_taken_0x111594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x111598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111594u;
            // 0x111598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111594) {
            ctx->pc = 0x11160Cu;
            goto label_11160c;
        }
    }
    ctx->pc = 0x11159Cu;
    // 0x11159c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x11159cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1115a0:
    // 0x1115a0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1115a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1115a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1115a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1115a8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1115a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1115ac: 0xf1302b  sltu        $a2, $a3, $s1
    ctx->pc = 0x1115acu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1115b0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1115b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1115b4: 0x42380  sll         $a0, $a0, 14
    ctx->pc = 0x1115b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
    // 0x1115b8: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x1115b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1115bc: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x1115bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x1115c0: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x1115c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x1115c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1115c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1115c8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1115c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1115cc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1115ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1115d0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x1115d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x1115d4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1115d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1115d8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1115d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1115dc: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1115dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1115e0: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1115e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1115e4: 0xb1220007  sdl         $v0, 0x7($t1)
    ctx->pc = 0x1115e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1115e8: 0xb5220000  sdr         $v0, 0x0($t1)
    ctx->pc = 0x1115e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1115ec: 0xb123000f  sdl         $v1, 0xF($t1)
    ctx->pc = 0x1115ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1115f0: 0xb5230008  sdr         $v1, 0x8($t1)
    ctx->pc = 0x1115f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1115f4: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x1115f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1115f8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1115f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1115fc: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x1115fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x111600: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x111600u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x111604: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x111604u;
    {
        const bool branch_taken_0x111604 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x111608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111604u;
            // 0x111608: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111604) {
            ctx->pc = 0x1115A0u;
            runtime->cooperativeGuestYield();
            goto label_1115a0;
        }
    }
    ctx->pc = 0x11160Cu;
label_11160c:
    // 0x11160c: 0x5140003a  beql        $t2, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x11160Cu;
    {
        const bool branch_taken_0x11160c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x11160c) {
            ctx->pc = 0x111610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11160Cu;
            // 0x111610: 0x8e0601f0  lw          $a2, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1116F8u;
            goto label_1116f8;
        }
    }
    ctx->pc = 0x111614u;
    // 0x111614: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x111614u;
    {
        const bool branch_taken_0x111614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x111618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111614u;
            // 0x111618: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111614) {
            ctx->pc = 0x1116F4u;
            goto label_1116f4;
        }
    }
    ctx->pc = 0x11161Cu;
    // 0x11161c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x11161cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111620: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x111620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111624: 0x0  nop
    ctx->pc = 0x111624u;
    // NOP
label_111628:
    // 0x111628: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x111628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11162c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11162cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x111630: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x111630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x111634: 0xf1182b  sltu        $v1, $a3, $s1
    ctx->pc = 0x111634u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x111638: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x111638u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x11163c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11163Cu;
    {
        const bool branch_taken_0x11163c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11163Cu;
            // 0x111640: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11163c) {
            ctx->pc = 0x111628u;
            runtime->cooperativeGuestYield();
            goto label_111628;
        }
    }
    ctx->pc = 0x111644u;
    // 0x111644: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x111644u;
    {
        const bool branch_taken_0x111644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111644u;
            // 0x111648: 0x8e0601f0  lw          $a2, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111644) {
            ctx->pc = 0x1116F8u;
            goto label_1116f8;
        }
    }
    ctx->pc = 0x11164Cu;
label_11164c:
    // 0x11164c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x11164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x111650: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x111650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x111654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111658: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x111658u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x11165c: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x11165cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x111660: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x111660u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x111664: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x111664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x111668: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x111668u;
    {
        const bool branch_taken_0x111668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11166Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111668u;
            // 0x11166c: 0xfba10020  sqc2        $vf1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111668) {
            ctx->pc = 0x111694u;
            goto label_111694;
        }
    }
    ctx->pc = 0x111670u;
    // 0x111670: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x111670u;
    {
        const bool branch_taken_0x111670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x111674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111670u;
            // 0x111674: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111670) {
            ctx->pc = 0x111694u;
            goto label_111694;
        }
    }
    ctx->pc = 0x111678u;
label_111678:
    // 0x111678: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x111678u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11167c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11167cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x111680: 0xf1102b  sltu        $v0, $a3, $s1
    ctx->pc = 0x111680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x111684: 0x0  nop
    ctx->pc = 0x111684u;
    // NOP
    // 0x111688: 0x0  nop
    ctx->pc = 0x111688u;
    // NOP
    // 0x11168c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11168Cu;
    {
        const bool branch_taken_0x11168c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11168Cu;
            // 0x111690: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11168c) {
            ctx->pc = 0x111678u;
            runtime->cooperativeGuestYield();
            goto label_111678;
        }
    }
    ctx->pc = 0x111694u;
label_111694:
    // 0x111694: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x111694u;
    {
        const bool branch_taken_0x111694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x111694) {
            ctx->pc = 0x1116C4u;
            goto label_1116c4;
        }
    }
    ctx->pc = 0x11169Cu;
    // 0x11169c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11169Cu;
    {
        const bool branch_taken_0x11169c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11169Cu;
            // 0x1116a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11169c) {
            ctx->pc = 0x1116C4u;
            goto label_1116c4;
        }
    }
    ctx->pc = 0x1116A4u;
    // 0x1116a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1116a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1116a8:
    // 0x1116a8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1116a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1116ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1116acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1116b0: 0xf1102b  sltu        $v0, $a3, $s1
    ctx->pc = 0x1116b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1116b4: 0x0  nop
    ctx->pc = 0x1116b4u;
    // NOP
    // 0x1116b8: 0x0  nop
    ctx->pc = 0x1116b8u;
    // NOP
    // 0x1116bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1116BCu;
    {
        const bool branch_taken_0x1116bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1116C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1116BCu;
            // 0x1116c0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116bc) {
            ctx->pc = 0x1116A8u;
            runtime->cooperativeGuestYield();
            goto label_1116a8;
        }
    }
    ctx->pc = 0x1116C4u;
label_1116c4:
    // 0x1116c4: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1116C4u;
    {
        const bool branch_taken_0x1116c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1116c4) {
            ctx->pc = 0x1116C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1116C4u;
            // 0x1116c8: 0x8e0601f0  lw          $a2, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1116F8u;
            goto label_1116f8;
        }
    }
    ctx->pc = 0x1116CCu;
    // 0x1116cc: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1116CCu;
    {
        const bool branch_taken_0x1116cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1116CCu;
            // 0x1116d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116cc) {
            ctx->pc = 0x1116F4u;
            goto label_1116f4;
        }
    }
    ctx->pc = 0x1116D4u;
    // 0x1116d4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1116d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1116d8:
    // 0x1116d8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1116d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1116dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1116dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1116e0: 0xf1102b  sltu        $v0, $a3, $s1
    ctx->pc = 0x1116e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1116e4: 0x0  nop
    ctx->pc = 0x1116e4u;
    // NOP
    // 0x1116e8: 0x0  nop
    ctx->pc = 0x1116e8u;
    // NOP
    // 0x1116ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1116ECu;
    {
        const bool branch_taken_0x1116ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1116F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1116ECu;
            // 0x1116f0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116ec) {
            ctx->pc = 0x1116D8u;
            runtime->cooperativeGuestYield();
            goto label_1116d8;
        }
    }
    ctx->pc = 0x1116F4u;
label_1116f4:
    // 0x1116f4: 0x8e0601f0  lw          $a2, 0x1F0($s0)
    ctx->pc = 0x1116f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_1116f8:
    // 0x1116f8: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1116F8u;
    {
        const bool branch_taken_0x1116f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1116F8u;
            // 0x1116fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116f8) {
            ctx->pc = 0x111730u;
            goto label_111730;
        }
    }
    ctx->pc = 0x111700u;
    // 0x111700: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x111700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x111704: 0x0  nop
    ctx->pc = 0x111704u;
    // NOP
label_111708:
    // 0x111708: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x111708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11170c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11170cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x111710: 0xa4600170  sh          $zero, 0x170($v1)
    ctx->pc = 0x111710u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 368), (uint16_t)GPR_U32(ctx, 0));
    // 0x111714: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x111714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111718: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x111718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11171c: 0xa48000f0  sh          $zero, 0xF0($a0)
    ctx->pc = 0x11171cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 240), (uint16_t)GPR_U32(ctx, 0));
    // 0x111720: 0xa4400070  sh          $zero, 0x70($v0)
    ctx->pc = 0x111720u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x111724: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x111724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x111728: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x111728u;
    {
        const bool branch_taken_0x111728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111728u;
            // 0x11172c: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111728) {
            ctx->pc = 0x111708u;
            runtime->cooperativeGuestYield();
            goto label_111708;
        }
    }
    ctx->pc = 0x111730u;
label_111730:
    // 0x111730: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x111730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x111734: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x111734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x111738: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x111738u;
    {
        const bool branch_taken_0x111738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111738) {
            ctx->pc = 0x11173Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111738u;
            // 0x11173c: 0xae0001f4  sw          $zero, 0x1F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x111748u;
            goto label_111748;
        }
    }
    ctx->pc = 0x111740u;
    // 0x111740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111744: 0xae0201f4  sw          $v0, 0x1F4($s0)
    ctx->pc = 0x111744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
label_111748:
    // 0x111748: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x111748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11174c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11174cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111750: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111754: 0x3e00008  jr          $ra
    ctx->pc = 0x111754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111754u;
            // 0x111758: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111544u: goto label_111544;
            case 0x111570u: goto label_111570;
            case 0x11158Cu: goto label_11158c;
            case 0x1115A0u: goto label_1115a0;
            case 0x11160Cu: goto label_11160c;
            case 0x111628u: goto label_111628;
            case 0x11164Cu: goto label_11164c;
            case 0x111678u: goto label_111678;
            case 0x111694u: goto label_111694;
            case 0x1116A8u: goto label_1116a8;
            case 0x1116C4u: goto label_1116c4;
            case 0x1116D8u: goto label_1116d8;
            case 0x1116F4u: goto label_1116f4;
            case 0x1116F8u: goto label_1116f8;
            case 0x111708u: goto label_111708;
            case 0x111730u: goto label_111730;
            case 0x111748u: goto label_111748;
            case 0x1117F0u: goto label_1117f0;
            case 0x111838u: goto label_111838;
            case 0x111858u: goto label_111858;
            case 0x1118DCu: goto label_1118dc;
            case 0x111934u: goto label_111934;
            case 0x11193Cu: goto label_11193c;
            case 0x11197Cu: goto label_11197c;
            case 0x111988u: goto label_111988;
            case 0x1119BCu: goto label_1119bc;
            case 0x1119C0u: goto label_1119c0;
            case 0x111A28u: goto label_111a28;
            case 0x111A40u: goto label_111a40;
            case 0x111A88u: goto label_111a88;
            case 0x111A98u: goto label_111a98;
            case 0x111AF8u: goto label_111af8;
            case 0x111B10u: goto label_111b10;
            case 0x111B50u: goto label_111b50;
            case 0x111B54u: goto label_111b54;
            case 0x111B7Cu: goto label_111b7c;
            case 0x111B90u: goto label_111b90;
            case 0x111BFCu: goto label_111bfc;
            case 0x111C30u: goto label_111c30;
            case 0x111C68u: goto label_111c68;
            case 0x111C88u: goto label_111c88;
            case 0x111CD0u: goto label_111cd0;
            case 0x111CE0u: goto label_111ce0;
            case 0x111D14u: goto label_111d14;
            case 0x111D28u: goto label_111d28;
            case 0x111D78u: goto label_111d78;
            case 0x111D98u: goto label_111d98;
            case 0x111DB4u: goto label_111db4;
            case 0x111DB8u: goto label_111db8;
            case 0x111DF0u: goto label_111df0;
            case 0x111E0Cu: goto label_111e0c;
            case 0x111E3Cu: goto label_111e3c;
            case 0x111E40u: goto label_111e40;
            case 0x111E58u: goto label_111e58;
            case 0x111EF0u: goto label_111ef0;
            case 0x111F10u: goto label_111f10;
            case 0x111F68u: goto label_111f68;
            case 0x111F80u: goto label_111f80;
            case 0x111FF0u: goto label_111ff0;
            case 0x112000u: goto label_112000;
            case 0x112044u: goto label_112044;
            case 0x112060u: goto label_112060;
            case 0x112094u: goto label_112094;
            case 0x11209Cu: goto label_11209c;
            case 0x1120B8u: goto label_1120b8;
            case 0x112120u: goto label_112120;
            case 0x112174u: goto label_112174;
            case 0x11217Cu: goto label_11217c;
            case 0x1121E8u: goto label_1121e8;
            case 0x112200u: goto label_112200;
            case 0x112248u: goto label_112248;
            case 0x112258u: goto label_112258;
            case 0x1122B8u: goto label_1122b8;
            case 0x1122D0u: goto label_1122d0;
            case 0x112310u: goto label_112310;
            case 0x112314u: goto label_112314;
            case 0x11233Cu: goto label_11233c;
            case 0x112350u: goto label_112350;
            case 0x1123BCu: goto label_1123bc;
            case 0x1123F0u: goto label_1123f0;
            case 0x112428u: goto label_112428;
            case 0x112448u: goto label_112448;
            case 0x112490u: goto label_112490;
            case 0x1124A0u: goto label_1124a0;
            case 0x1124D4u: goto label_1124d4;
            case 0x1124E0u: goto label_1124e0;
            case 0x1124E4u: goto label_1124e4;
            case 0x1124F4u: goto label_1124f4;
            case 0x112510u: goto label_112510;
            case 0x112578u: goto label_112578;
            case 0x1125CCu: goto label_1125cc;
            case 0x1125D4u: goto label_1125d4;
            case 0x112630u: goto label_112630;
            case 0x112650u: goto label_112650;
            case 0x11266Cu: goto label_11266c;
            case 0x112670u: goto label_112670;
            case 0x1126A8u: goto label_1126a8;
            case 0x1126C4u: goto label_1126c4;
            case 0x1126F4u: goto label_1126f4;
            case 0x1126F8u: goto label_1126f8;
            case 0x112710u: goto label_112710;
            case 0x1127A8u: goto label_1127a8;
            case 0x1127C8u: goto label_1127c8;
            case 0x112820u: goto label_112820;
            case 0x112838u: goto label_112838;
            case 0x1128A8u: goto label_1128a8;
            case 0x1128B8u: goto label_1128b8;
            case 0x1128FCu: goto label_1128fc;
            case 0x112910u: goto label_112910;
            case 0x112914u: goto label_112914;
            case 0x112920u: goto label_112920;
            case 0x112924u: goto label_112924;
            case 0x11293Cu: goto label_11293c;
            case 0x112970u: goto label_112970;
            case 0x112974u: goto label_112974;
            case 0x1129DCu: goto label_1129dc;
            case 0x1129F4u: goto label_1129f4;
            case 0x112A38u: goto label_112a38;
            case 0x112A48u: goto label_112a48;
            case 0x112AA8u: goto label_112aa8;
            case 0x112AC0u: goto label_112ac0;
            case 0x112B00u: goto label_112b00;
            case 0x112B04u: goto label_112b04;
            case 0x112B2Cu: goto label_112b2c;
            case 0x112B40u: goto label_112b40;
            case 0x112BACu: goto label_112bac;
            case 0x112BE0u: goto label_112be0;
            case 0x112C18u: goto label_112c18;
            case 0x112C38u: goto label_112c38;
            case 0x112C80u: goto label_112c80;
            case 0x112C90u: goto label_112c90;
            case 0x112CC4u: goto label_112cc4;
            case 0x112CD8u: goto label_112cd8;
            case 0x112D28u: goto label_112d28;
            case 0x112D48u: goto label_112d48;
            case 0x112D64u: goto label_112d64;
            case 0x112D68u: goto label_112d68;
            case 0x112DA0u: goto label_112da0;
            case 0x112DBCu: goto label_112dbc;
            case 0x112DECu: goto label_112dec;
            case 0x112DF0u: goto label_112df0;
            case 0x112E08u: goto label_112e08;
            case 0x112EA0u: goto label_112ea0;
            case 0x112EC0u: goto label_112ec0;
            case 0x112F18u: goto label_112f18;
            case 0x112F30u: goto label_112f30;
            case 0x112FA0u: goto label_112fa0;
            case 0x112FB0u: goto label_112fb0;
            case 0x112FF4u: goto label_112ff4;
            case 0x113008u: goto label_113008;
            case 0x113010u: goto label_113010;
            case 0x113044u: goto label_113044;
            case 0x11304Cu: goto label_11304c;
            case 0x113068u: goto label_113068;
            case 0x1130D0u: goto label_1130d0;
            case 0x113124u: goto label_113124;
            case 0x11312Cu: goto label_11312c;
            case 0x113198u: goto label_113198;
            case 0x1131B0u: goto label_1131b0;
            case 0x1131F8u: goto label_1131f8;
            case 0x113208u: goto label_113208;
            case 0x113268u: goto label_113268;
            case 0x113280u: goto label_113280;
            case 0x1132C0u: goto label_1132c0;
            case 0x1132C4u: goto label_1132c4;
            case 0x1132ECu: goto label_1132ec;
            case 0x113300u: goto label_113300;
            case 0x11336Cu: goto label_11336c;
            case 0x1133A0u: goto label_1133a0;
            case 0x1133D8u: goto label_1133d8;
            case 0x1133F8u: goto label_1133f8;
            case 0x113440u: goto label_113440;
            case 0x113450u: goto label_113450;
            case 0x113484u: goto label_113484;
            case 0x113490u: goto label_113490;
            case 0x113494u: goto label_113494;
            case 0x1134A4u: goto label_1134a4;
            case 0x1134C0u: goto label_1134c0;
            case 0x113528u: goto label_113528;
            case 0x11357Cu: goto label_11357c;
            case 0x113584u: goto label_113584;
            case 0x1135E0u: goto label_1135e0;
            case 0x113600u: goto label_113600;
            case 0x11361Cu: goto label_11361c;
            case 0x113620u: goto label_113620;
            case 0x113658u: goto label_113658;
            case 0x113674u: goto label_113674;
            case 0x1136A4u: goto label_1136a4;
            case 0x1136A8u: goto label_1136a8;
            case 0x1136C0u: goto label_1136c0;
            case 0x113758u: goto label_113758;
            case 0x113778u: goto label_113778;
            case 0x1137D0u: goto label_1137d0;
            case 0x1137E8u: goto label_1137e8;
            case 0x113858u: goto label_113858;
            case 0x113868u: goto label_113868;
            case 0x1138ACu: goto label_1138ac;
            case 0x1138C0u: goto label_1138c0;
            case 0x1138C4u: goto label_1138c4;
            case 0x1138D0u: goto label_1138d0;
            case 0x1138D4u: goto label_1138d4;
            case 0x113900u: goto label_113900;
            case 0x113930u: goto label_113930;
            case 0x113954u: goto label_113954;
            case 0x113958u: goto label_113958;
            case 0x113970u: goto label_113970;
            case 0x113988u: goto label_113988;
            case 0x1139A8u: goto label_1139a8;
            case 0x113A24u: goto label_113a24;
            case 0x113A7Cu: goto label_113a7c;
            case 0x113A84u: goto label_113a84;
            case 0x113AC0u: goto label_113ac0;
            case 0x113AC8u: goto label_113ac8;
            case 0x113AFCu: goto label_113afc;
            case 0x113B00u: goto label_113b00;
            case 0x113B1Cu: goto label_113b1c;
            case 0x113B50u: goto label_113b50;
            case 0x113B58u: goto label_113b58;
            case 0x113B70u: goto label_113b70;
            case 0x113BD8u: goto label_113bd8;
            case 0x113C2Cu: goto label_113c2c;
            case 0x113C34u: goto label_113c34;
            case 0x113C58u: goto label_113c58;
            case 0x113C68u: goto label_113c68;
            case 0x113C6Cu: goto label_113c6c;
            case 0x113C84u: goto label_113c84;
            case 0x113CB8u: goto label_113cb8;
            case 0x113CBCu: goto label_113cbc;
            case 0x113CDCu: goto label_113cdc;
            case 0x113D10u: goto label_113d10;
            case 0x113D18u: goto label_113d18;
            case 0x113D30u: goto label_113d30;
            case 0x113D98u: goto label_113d98;
            case 0x113DECu: goto label_113dec;
            case 0x113DF4u: goto label_113df4;
            case 0x113E18u: goto label_113e18;
            case 0x113E28u: goto label_113e28;
            case 0x113E2Cu: goto label_113e2c;
            case 0x113E58u: goto label_113e58;
            case 0x113E88u: goto label_113e88;
            case 0x113EACu: goto label_113eac;
            case 0x113EB0u: goto label_113eb0;
            case 0x113EC0u: goto label_113ec0;
            case 0x113ED8u: goto label_113ed8;
            case 0x113EF0u: goto label_113ef0;
            case 0x113F78u: goto label_113f78;
            case 0x113FD0u: goto label_113fd0;
            case 0x113FD8u: goto label_113fd8;
            case 0x114014u: goto label_114014;
            case 0x114020u: goto label_114020;
            case 0x114054u: goto label_114054;
            case 0x114058u: goto label_114058;
            case 0x11408Cu: goto label_11408c;
            case 0x1140A8u: goto label_1140a8;
            case 0x1140DCu: goto label_1140dc;
            case 0x1140E4u: goto label_1140e4;
            case 0x1140F8u: goto label_1140f8;
            case 0x114160u: goto label_114160;
            case 0x1141B4u: goto label_1141b4;
            case 0x1141BCu: goto label_1141bc;
            case 0x1141ECu: goto label_1141ec;
            case 0x1141FCu: goto label_1141fc;
            case 0x114210u: goto label_114210;
            case 0x114278u: goto label_114278;
            case 0x1142CCu: goto label_1142cc;
            case 0x1142D4u: goto label_1142d4;
            case 0x1142F8u: goto label_1142f8;
            case 0x114308u: goto label_114308;
            case 0x11430Cu: goto label_11430c;
            case 0x114324u: goto label_114324;
            case 0x114358u: goto label_114358;
            case 0x11435Cu: goto label_11435c;
            case 0x114394u: goto label_114394;
            case 0x1143B4u: goto label_1143b4;
            case 0x1143E8u: goto label_1143e8;
            case 0x1143F0u: goto label_1143f0;
            case 0x114408u: goto label_114408;
            case 0x114470u: goto label_114470;
            case 0x1144C4u: goto label_1144c4;
            case 0x1144CCu: goto label_1144cc;
            case 0x1144FCu: goto label_1144fc;
            case 0x11450Cu: goto label_11450c;
            case 0x114520u: goto label_114520;
            case 0x114588u: goto label_114588;
            case 0x1145DCu: goto label_1145dc;
            case 0x1145E4u: goto label_1145e4;
            case 0x114608u: goto label_114608;
            case 0x114618u: goto label_114618;
            case 0x11461Cu: goto label_11461c;
            case 0x114648u: goto label_114648;
            case 0x114678u: goto label_114678;
            case 0x11469Cu: goto label_11469c;
            case 0x1146A0u: goto label_1146a0;
            case 0x1146B4u: goto label_1146b4;
            case 0x1146C4u: goto label_1146c4;
            case 0x1146F8u: goto label_1146f8;
            case 0x114774u: goto label_114774;
            case 0x1147CCu: goto label_1147cc;
            case 0x1147D4u: goto label_1147d4;
            case 0x114810u: goto label_114810;
            case 0x114818u: goto label_114818;
            case 0x11484Cu: goto label_11484c;
            case 0x114850u: goto label_114850;
            case 0x1148A0u: goto label_1148a0;
            case 0x1148C0u: goto label_1148c0;
            case 0x1148DCu: goto label_1148dc;
            case 0x1148E0u: goto label_1148e0;
            case 0x114968u: goto label_114968;
            case 0x114970u: goto label_114970;
            case 0x114988u: goto label_114988;
            case 0x1149D8u: goto label_1149d8;
            case 0x1149F0u: goto label_1149f0;
            case 0x114B00u: goto label_114b00;
            case 0x114B14u: goto label_114b14;
            case 0x114B48u: goto label_114b48;
            case 0x114B60u: goto label_114b60;
            case 0x114BA0u: goto label_114ba0;
            case 0x114BB4u: goto label_114bb4;
            case 0x114BE8u: goto label_114be8;
            case 0x114BF0u: goto label_114bf0;
            case 0x114C08u: goto label_114c08;
            case 0x114C70u: goto label_114c70;
            case 0x114CC4u: goto label_114cc4;
            case 0x114CCCu: goto label_114ccc;
            case 0x114D28u: goto label_114d28;
            case 0x114D48u: goto label_114d48;
            case 0x114D64u: goto label_114d64;
            case 0x114D68u: goto label_114d68;
            case 0x114DF0u: goto label_114df0;
            case 0x114DF8u: goto label_114df8;
            case 0x114E10u: goto label_114e10;
            case 0x114E60u: goto label_114e60;
            case 0x114E78u: goto label_114e78;
            case 0x114F88u: goto label_114f88;
            case 0x114F9Cu: goto label_114f9c;
            case 0x114FD0u: goto label_114fd0;
            case 0x114FE8u: goto label_114fe8;
            case 0x115028u: goto label_115028;
            case 0x115034u: goto label_115034;
            case 0x115038u: goto label_115038;
            case 0x115044u: goto label_115044;
            case 0x115048u: goto label_115048;
            case 0x115060u: goto label_115060;
            case 0x115090u: goto label_115090;
            case 0x115094u: goto label_115094;
            case 0x1150E4u: goto label_1150e4;
            case 0x115104u: goto label_115104;
            case 0x115120u: goto label_115120;
            case 0x115124u: goto label_115124;
            case 0x1151ACu: goto label_1151ac;
            case 0x1151B4u: goto label_1151b4;
            case 0x1151CCu: goto label_1151cc;
            case 0x115218u: goto label_115218;
            case 0x115230u: goto label_115230;
            case 0x115340u: goto label_115340;
            case 0x115354u: goto label_115354;
            case 0x115388u: goto label_115388;
            case 0x1153A0u: goto label_1153a0;
            case 0x1153E0u: goto label_1153e0;
            case 0x1153ECu: goto label_1153ec;
            case 0x1153F4u: goto label_1153f4;
            case 0x115428u: goto label_115428;
            case 0x115430u: goto label_115430;
            case 0x115448u: goto label_115448;
            case 0x1154B0u: goto label_1154b0;
            case 0x115504u: goto label_115504;
            case 0x11550Cu: goto label_11550c;
            case 0x115568u: goto label_115568;
            case 0x115588u: goto label_115588;
            case 0x1155A4u: goto label_1155a4;
            case 0x1155A8u: goto label_1155a8;
            case 0x115630u: goto label_115630;
            case 0x115638u: goto label_115638;
            case 0x115650u: goto label_115650;
            case 0x1156A0u: goto label_1156a0;
            case 0x1156B8u: goto label_1156b8;
            case 0x1157C8u: goto label_1157c8;
            case 0x1157DCu: goto label_1157dc;
            case 0x115810u: goto label_115810;
            case 0x115828u: goto label_115828;
            case 0x115868u: goto label_115868;
            case 0x115874u: goto label_115874;
            case 0x115878u: goto label_115878;
            case 0x115884u: goto label_115884;
            case 0x115888u: goto label_115888;
            case 0x1158B8u: goto label_1158b8;
            case 0x1158E8u: goto label_1158e8;
            case 0x11590Cu: goto label_11590c;
            case 0x115910u: goto label_115910;
            case 0x115920u: goto label_115920;
            case 0x115934u: goto label_115934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11175Cu;
    // 0x11175c: 0x0  nop
    ctx->pc = 0x11175cu;
    // NOP
    // 0x111760: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x111760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x111764: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x111764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x111768: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x111768u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x11176c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x11176cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111770: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x111770u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x111774: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x111774u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x111778: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x111778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x11177c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x11177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x111780: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x111780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x111784: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x111784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x111788: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x111788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x11178c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x11178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x111790: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x111790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x111794: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x111794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x111798: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x111798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11179c: 0xe7b90138  swc1        $f25, 0x138($sp)
    ctx->pc = 0x11179cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1117a0: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x1117a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1117a4: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1117a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1117a8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1117a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1117ac: 0x8fc201f4  lw          $v0, 0x1F4($fp)
    ctx->pc = 0x1117acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 500)));
    // 0x1117b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1117B0u;
    {
        const bool branch_taken_0x1117b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1117B0u;
            // 0x1117b4: 0x46006dc6  mov.s       $f23, $f13 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117b0) {
            ctx->pc = 0x1117F0u;
            goto label_1117f0;
        }
    }
    ctx->pc = 0x1117B8u;
    // 0x1117b8: 0xc7c1001c  lwc1        $f1, 0x1C($fp)
    ctx->pc = 0x1117b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1117bc: 0xc7c00018  lwc1        $f0, 0x18($fp)
    ctx->pc = 0x1117bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1117c0: 0xc7c20024  lwc1        $f2, 0x24($fp)
    ctx->pc = 0x1117c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1117c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1117c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1117c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1117c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1117cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1117ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1117d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1117d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1117d4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1117d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1117d8: 0x0  nop
    ctx->pc = 0x1117d8u;
    // NOP
    // 0x1117dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1117DCu;
    {
        const bool branch_taken_0x1117dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1117E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1117DCu;
            // 0x1117e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117dc) {
            ctx->pc = 0x1117F0u;
            goto label_1117f0;
        }
    }
    ctx->pc = 0x1117E4u;
    // 0x1117e4: 0x8fc3004c  lw          $v1, 0x4C($fp)
    ctx->pc = 0x1117e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x1117e8: 0xac620218  sw          $v0, 0x218($v1)
    ctx->pc = 0x1117e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
    // 0x1117ec: 0xafc001f4  sw          $zero, 0x1F4($fp)
    ctx->pc = 0x1117ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 500), GPR_U32(ctx, 0));
label_1117f0:
    // 0x1117f0: 0x8fc30038  lw          $v1, 0x38($fp)
    ctx->pc = 0x1117f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x1117f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1117f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1117f8: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x1117f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1117fc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1117fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x111800: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x111800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x111804: 0xc4750070  lwc1        $f21, 0x70($v1)
    ctx->pc = 0x111804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x111808: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x111808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x11180c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x11180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111810: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x111810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x111814: 0x0  nop
    ctx->pc = 0x111814u;
    // NOP
    // 0x111818: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x111818u;
    {
        const bool branch_taken_0x111818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111818u;
            // 0x11181c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111818) {
            ctx->pc = 0x111838u;
            goto label_111838;
        }
    }
    ctx->pc = 0x111820u;
    // 0x111820: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x111820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x111824: 0x0  nop
    ctx->pc = 0x111824u;
    // NOP
    // 0x111828: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x111828u;
    {
        const bool branch_taken_0x111828 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x111828) {
            ctx->pc = 0x11182Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111828u;
            // 0x11182c: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x111838u;
            goto label_111838;
        }
    }
    ctx->pc = 0x111830u;
    // 0x111830: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x111830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x111834: 0x0  nop
    ctx->pc = 0x111834u;
    // NOP
label_111838:
    // 0x111838: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x111838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x11183c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x11183cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x111840: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x111840u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x111844: 0x10600850  beqz        $v1, . + 4 + (0x850 << 2)
    ctx->pc = 0x111844u;
    {
        const bool branch_taken_0x111844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111844u;
            // 0x111848: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111844) {
            ctx->pc = 0x113988u;
            goto label_113988;
        }
    }
    ctx->pc = 0x11184Cu;
    // 0x11184c: 0x10600848  beqz        $v1, . + 4 + (0x848 << 2)
    ctx->pc = 0x11184Cu;
    {
        const bool branch_taken_0x11184c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11184Cu;
            // 0x111850: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11184c) {
            ctx->pc = 0x113970u;
            goto label_113970;
        }
    }
    ctx->pc = 0x111854u;
    // 0x111854: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x111854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_111858:
    // 0x111858: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x111858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11185c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x11185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x111860: 0x4617c034  c.lt.s      $f24, $f23
    ctx->pc = 0x111860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x111864: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x111864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x111868: 0x8fa9004c  lw          $t1, 0x4C($sp)
    ctx->pc = 0x111868u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x11186c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x111870: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x111870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x111874: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x111874u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111878: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x111878u;
    {
        const bool branch_taken_0x111878 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11187Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111878u;
            // 0x11187c: 0x25a30004  addiu       $v1, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111878) {
            ctx->pc = 0x1118DCu;
            goto label_1118dc;
        }
    }
    ctx->pc = 0x111880u;
    // 0x111880: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x111880u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x111884: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x111884u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x111888: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x111888u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11188c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11188cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111890: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x111890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x111894: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11189c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1118a0: 0x4602c040  add.s       $f1, $f24, $f2
    ctx->pc = 0x1118a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x1118a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1118a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1118a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1118a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1118ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1118acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1118b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1118b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1118b4: 0x0  nop
    ctx->pc = 0x1118b4u;
    // NOP
    // 0x1118b8: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x1118B8u;
    {
        const bool branch_taken_0x1118b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1118BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1118B8u;
            // 0x1118bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118b8) {
            ctx->pc = 0x11193Cu;
            goto label_11193c;
        }
    }
    ctx->pc = 0x1118C0u;
    // 0x1118c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1118c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1118c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1118c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1118c8: 0x4602b840  add.s       $f1, $f23, $f2
    ctx->pc = 0x1118c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x1118cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1118ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1118d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1118d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1118d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1118D4u;
    {
        const bool branch_taken_0x1118d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1118d4) {
            ctx->pc = 0x111934u;
            goto label_111934;
        }
    }
    ctx->pc = 0x1118DCu;
label_1118dc:
    // 0x1118dc: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x1118dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1118e0: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1118e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1118e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1118e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1118e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1118e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1118ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1118ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1118f0: 0x4602c041  sub.s       $f1, $f24, $f2
    ctx->pc = 0x1118f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
    // 0x1118f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1118f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1118f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1118f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1118fc: 0x0  nop
    ctx->pc = 0x1118fcu;
    // NOP
    // 0x111900: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x111900u;
    {
        const bool branch_taken_0x111900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x111904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111900u;
            // 0x111904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111900) {
            ctx->pc = 0x11193Cu;
            goto label_11193c;
        }
    }
    ctx->pc = 0x111908u;
    // 0x111908: 0x95a20004  lhu         $v0, 0x4($t5)
    ctx->pc = 0x111908u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x11190c: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x11190cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x111910: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x111910u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x111914: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x111914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11191c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x111920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x111920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111924: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111928: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x111928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11192c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11192cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x111930: 0x0  nop
    ctx->pc = 0x111930u;
    // NOP
label_111934:
    // 0x111934: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x111934u;
    {
        const bool branch_taken_0x111934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x111934) {
            ctx->pc = 0x111938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111934u;
            // 0x111938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11193Cu;
            goto label_11193c;
        }
    }
    ctx->pc = 0x11193Cu;
label_11193c:
    // 0x11193c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11193cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111940: 0x10400805  beqz        $v0, . + 4 + (0x805 << 2)
    ctx->pc = 0x111940u;
    {
        const bool branch_taken_0x111940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111940u;
            // 0x111944: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111940) {
            ctx->pc = 0x113958u;
            goto label_113958;
        }
    }
    ctx->pc = 0x111948u;
    // 0x111948: 0x4618b801  sub.s       $f0, $f23, $f24
    ctx->pc = 0x111948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
    // 0x11194c: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x11194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x111950: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x111950u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x111954: 0x4600c1c6  mov.s       $f7, $f24
    ctx->pc = 0x111954u;
    ctx->f[7] = FPU_MOV_S(ctx->f[24]);
    // 0x111958: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x111958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11195c: 0x0  nop
    ctx->pc = 0x11195cu;
    // NOP
    // 0x111960: 0x450003f6  bc1f        . + 4 + (0x3F6 << 2)
    ctx->pc = 0x111960u;
    {
        const bool branch_taken_0x111960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x111964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111960u;
            // 0x111964: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111960) {
            ctx->pc = 0x11293Cu;
            goto label_11293c;
        }
    }
    ctx->pc = 0x111968u;
    // 0x111968: 0x4617c034  c.lt.s      $f24, $f23
    ctx->pc = 0x111968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11196c: 0x0  nop
    ctx->pc = 0x11196cu;
    // NOP
    // 0x111970: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x111970u;
    {
        const bool branch_taken_0x111970 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x111974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111970u;
            // 0x111974: 0x4600aa06  mov.s       $f8, $f21 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111970) {
            ctx->pc = 0x11197Cu;
            goto label_11197c;
        }
    }
    ctx->pc = 0x111978u;
    // 0x111978: 0x4600aa07  neg.s       $f8, $f21
    ctx->pc = 0x111978u;
    ctx->f[8] = FPU_NEG_S(ctx->f[21]);
label_11197c:
    // 0x11197c: 0x100003e9  b           . + 4 + (0x3E9 << 2)
    ctx->pc = 0x11197Cu;
    {
        const bool branch_taken_0x11197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11197Cu;
            // 0x111980: 0x4600c186  mov.s       $f6, $f24 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11197c) {
            ctx->pc = 0x112924u;
            goto label_112924;
        }
    }
    ctx->pc = 0x111984u;
    // 0x111984: 0x0  nop
    ctx->pc = 0x111984u;
    // NOP
label_111988:
    // 0x111988: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x111988u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x11198c: 0x108001b4  beqz        $a0, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x11198Cu;
    {
        const bool branch_taken_0x11198c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x111990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11198Cu;
            // 0x111990: 0x25ab0004  addiu       $t3, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11198c) {
            ctx->pc = 0x112060u;
            goto label_112060;
        }
    }
    ctx->pc = 0x111994u;
    // 0x111994: 0x91ae0002  lbu         $t6, 0x2($t5)
    ctx->pc = 0x111994u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x111998: 0x31c20002  andi        $v0, $t6, 0x2
    ctx->pc = 0x111998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x11199c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11199Cu;
    {
        const bool branch_taken_0x11199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11199Cu;
            // 0x1119a0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11199c) {
            ctx->pc = 0x1119BCu;
            goto label_1119bc;
        }
    }
    ctx->pc = 0x1119A4u;
    // 0x1119a4: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x1119a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x1119a8: 0x95630006  lhu         $v1, 0x6($t3)
    ctx->pc = 0x1119a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x1119ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1119acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1119b0: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x1119b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1119b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1119B4u;
    {
        const bool branch_taken_0x1119b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1119B4u;
            // 0x1119b8: 0x436021  addu        $t4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119b4) {
            ctx->pc = 0x1119C0u;
            goto label_1119c0;
        }
    }
    ctx->pc = 0x1119BCu;
label_1119bc:
    // 0x1119bc: 0x244c7788  addiu       $t4, $v0, 0x7788
    ctx->pc = 0x1119bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_1119c0:
    // 0x1119c0: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x1119c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x1119c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1119c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1119c8: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1119C8u;
    {
        const bool branch_taken_0x1119c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1119C8u;
            // 0x1119cc: 0x460038c6  mov.s       $f3, $f7 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119c8) {
            ctx->pc = 0x111D28u;
            goto label_111d28;
        }
    }
    ctx->pc = 0x1119D0u;
    // 0x1119d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1119d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1119d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1119d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1119d8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1119d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1119dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1119dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1119e0: 0x46003086  mov.s       $f2, $f6
    ctx->pc = 0x1119e0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[6]);
    // 0x1119e4: 0x46150143  div.s       $f5, $f0, $f21
    ctx->pc = 0x1119e4u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[21];
    // 0x1119e8: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x1119e8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1119ec: 0x46013000  add.s       $f0, $f6, $f1
    ctx->pc = 0x1119ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x1119f0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1119f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1119f4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1119f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1119f8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1119f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1119fc: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1119fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x111a00: 0x44062000  mfc1        $a2, $f4
    ctx->pc = 0x111a00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x111a04: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x111a04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x111a08: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x111a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x111a0c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x111a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x111a10: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x111A10u;
    {
        const bool branch_taken_0x111a10 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x111A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A10u;
            // 0x111a14: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a10) {
            ctx->pc = 0x111A28u;
            goto label_111a28;
        }
    }
    ctx->pc = 0x111A18u;
    // 0x111a18: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x111a18u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111a1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a24: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x111a24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_111a28:
    // 0x111a28: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x111A28u;
    {
        const bool branch_taken_0x111a28 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x111A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A28u;
            // 0x111a2c: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a28) {
            ctx->pc = 0x111A40u;
            goto label_111a40;
        }
    }
    ctx->pc = 0x111A30u;
    // 0x111a30: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x111a30u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111a34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111a38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a3c: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x111a3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_111a40:
    // 0x111a40: 0xc4282a  slt         $a1, $a2, $a0
    ctx->pc = 0x111a40u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x111a44: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x111a44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x111a48: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x111a48u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x111a4c: 0x64380a  movz        $a3, $v1, $a0
    ctx->pc = 0x111a4cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x111a50: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x111a50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x111a54: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x111a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x111a58: 0xc75023  subu        $t2, $a2, $a3
    ctx->pc = 0x111a58u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x111a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111a60: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x111a60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111a64: 0x91890001  lbu         $t1, 0x1($t4)
    ctx->pc = 0x111a64u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x111a68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x111a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111a6c: 0xe1600  sll         $v0, $t6, 24
    ctx->pc = 0x111a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x111a70: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x111a70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x111a74: 0x15230004  bne         $t1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111A74u;
    {
        const bool branch_taken_0x111a74 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x111A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A74u;
            // 0x111a78: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a74) {
            ctx->pc = 0x111A88u;
            goto label_111a88;
        }
    }
    ctx->pc = 0x111A7Cu;
    // 0x111a7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x111A7Cu;
    {
        const bool branch_taken_0x111a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A7Cu;
            // 0x111a80: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a7c) {
            ctx->pc = 0x111A98u;
            goto label_111a98;
        }
    }
    ctx->pc = 0x111A84u;
    // 0x111a84: 0x0  nop
    ctx->pc = 0x111a84u;
    // NOP
label_111a88:
    // 0x111a88: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x111a88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x111a8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x111a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x111a90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x111a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x111a94: 0x1829821  addu        $s3, $t4, $v0
    ctx->pc = 0x111a94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_111a98:
    // 0x111a98: 0x1540003d  bnez        $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x111A98u;
    {
        const bool branch_taken_0x111a98 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x111A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A98u;
            // 0x111a9c: 0x91a20003  lbu         $v0, 0x3($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a98) {
            ctx->pc = 0x111B90u;
            goto label_111b90;
        }
    }
    ctx->pc = 0x111AA0u;
    // 0x111aa0: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x111aa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x111aa4: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x111aa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x111aa8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x111aa8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111aac: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x111aacu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x111ab0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x111ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x111ab4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x111ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x111ab8: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x111ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x111abc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111ac0: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x111ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x111ac4: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x111ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x111ac8: 0x95850002  lhu         $a1, 0x2($t4)
    ctx->pc = 0x111ac8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x111acc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x111accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x111ad0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x111ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x111ad4: 0x91900000  lbu         $s0, 0x0($t4)
    ctx->pc = 0x111ad4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x111ad8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x111ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x111adc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x111adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111ae0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x111ae0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x111ae4: 0x440f0800  mfc1        $t7, $f1
    ctx->pc = 0x111ae4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x111ae8: 0x150102b  sltu        $v0, $t2, $s0
    ctx->pc = 0x111ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x111aec: 0x1040038c  beqz        $v0, . + 4 + (0x38C << 2)
    ctx->pc = 0x111AECu;
    {
        const bool branch_taken_0x111aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111AECu;
            // 0x111af0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111aec) {
            ctx->pc = 0x112920u;
            goto label_112920;
        }
    }
    ctx->pc = 0x111AF4u;
    // 0x111af4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x111af4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_111af8:
    // 0x111af8: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x111af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x111afc: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x111afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x111b00: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x111b00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x111b04: 0x50c0001d  beql        $a2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x111B04u;
    {
        const bool branch_taken_0x111b04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x111b04) {
            ctx->pc = 0x111B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111B04u;
            // 0x111b08: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x111B7Cu;
            goto label_111b7c;
        }
    }
    ctx->pc = 0x111B0Cu;
    // 0x111b0c: 0x1d14021  addu        $t0, $t6, $s1
    ctx->pc = 0x111b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
label_111b10:
    // 0x111b10: 0x61023  negu        $v0, $a2
    ctx->pc = 0x111b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x111b14: 0x26e1821  addu        $v1, $s3, $t6
    ctx->pc = 0x111b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x111b18: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x111b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x111b1c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x111b1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111b20: 0xc21826  xor         $v1, $a2, $v0
    ctx->pc = 0x111b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x111b24: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x111b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x111b28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x111b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x111b2c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x111b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x111b30: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x111b30u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x111b34: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x111b34u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x111b38: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x111b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111b3c: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111B3Cu;
    {
        const bool branch_taken_0x111b3c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x111B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111B3Cu;
            // 0x111b40: 0x81070000  lb          $a3, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b3c) {
            ctx->pc = 0x111B50u;
            goto label_111b50;
        }
    }
    ctx->pc = 0x111B44u;
    // 0x111b44: 0x51023  negu        $v0, $a1
    ctx->pc = 0x111b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x111b48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111B48u;
    {
        const bool branch_taken_0x111b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111B48u;
            // 0x111b4c: 0x4f1004  sllv        $v0, $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b48) {
            ctx->pc = 0x111B54u;
            goto label_111b54;
        }
    }
    ctx->pc = 0x111B50u;
label_111b50:
    // 0x111b50: 0xaf1007  srav        $v0, $t7, $a1
    ctx->pc = 0x111b50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 5) & 0x1F));
label_111b54:
    // 0x111b54: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x111b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x111b58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111b5c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x111b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x111b60: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x111b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x111b64: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x111b64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x111b68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x111b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111b6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x111b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x111b70: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x111B70u;
    {
        const bool branch_taken_0x111b70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x111B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111B70u;
            // 0x111b74: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b70) {
            ctx->pc = 0x111B10u;
            runtime->cooperativeGuestYield();
            goto label_111b10;
        }
    }
    ctx->pc = 0x111B78u;
    // 0x111b78: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x111b78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_111b7c:
    // 0x111b7c: 0x170102b  sltu        $v0, $t3, $s0
    ctx->pc = 0x111b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x111b80: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x111B80u;
    {
        const bool branch_taken_0x111b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111B80u;
            // 0x111b84: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b80) {
            ctx->pc = 0x111AF8u;
            runtime->cooperativeGuestYield();
            goto label_111af8;
        }
    }
    ctx->pc = 0x111B88u;
    // 0x111b88: 0x10000366  b           . + 4 + (0x366 << 2)
    ctx->pc = 0x111B88u;
    {
        const bool branch_taken_0x111b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111B88u;
            // 0x111b8c: 0x460031c6  mov.s       $f7, $f6 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b88) {
            ctx->pc = 0x112924u;
            goto label_112924;
        }
    }
    ctx->pc = 0x111B90u;
label_111b90:
    // 0x111b90: 0x1272818  mult        $a1, $t1, $a3
    ctx->pc = 0x111b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x111b94: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x111b94u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x111b98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x111b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x111b9c: 0x95830002  lhu         $v1, 0x2($t4)
    ctx->pc = 0x111b9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x111ba0: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x111ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x111ba4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x111ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x111ba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111bac: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x111bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x111bb0: 0x45b021  addu        $s6, $v0, $a1
    ctx->pc = 0x111bb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x111bb4: 0x5410011  bgez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x111BB4u;
    {
        const bool branch_taken_0x111bb4 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x111BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111BB4u;
            // 0x111bb8: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bb4) {
            ctx->pc = 0x111BFCu;
            goto label_111bfc;
        }
    }
    ctx->pc = 0x111BBCu;
    // 0x111bbc: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x111bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x111bc0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x111bc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x111bc4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x111bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111bc8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x111bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x111bcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111bd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111bd4: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x111bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x111bd8: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x111bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x111bdc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x111bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111be0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x111be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x111be4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x111be4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x111be8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x111be8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x111bec: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x111becu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x111bf0: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x111bf0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x111bf4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x111BF4u;
    {
        const bool branch_taken_0x111bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111BF4u;
            // 0x111bf8: 0x46000887  neg.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bf4) {
            ctx->pc = 0x111C30u;
            goto label_111c30;
        }
    }
    ctx->pc = 0x111BFCu;
label_111bfc:
    // 0x111bfc: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x111bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x111c00: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x111c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x111c04: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x111c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111c08: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x111c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x111c0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111c10: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111c14: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x111c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x111c18: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x111c18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x111c1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x111c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111c20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x111c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x111c24: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x111c24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x111c28: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x111c28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x111c2c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x111c2cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_111c30:
    // 0x111c30: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x111c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x111c34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111c38: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x111c38u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c3c: 0x91920000  lbu         $s2, 0x0($t4)
    ctx->pc = 0x111c3cu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x111c40: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x111c40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x111c44: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x111c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x111c48: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x111c48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x111c4c: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x111c4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x111c50: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x111c50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x111c54: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x111c54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x111c58: 0x12400331  beqz        $s2, . + 4 + (0x331 << 2)
    ctx->pc = 0x111C58u;
    {
        const bool branch_taken_0x111c58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111C58u;
            // 0x111c5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c58) {
            ctx->pc = 0x112920u;
            goto label_112920;
        }
    }
    ctx->pc = 0x111C60u;
    // 0x111c60: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x111c60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c64: 0x0  nop
    ctx->pc = 0x111c64u;
    // NOP
label_111c68:
    // 0x111c68: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x111c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x111c6c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x111c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x111c70: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x111c70u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x111c74: 0x50e00027  beql        $a3, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x111C74u;
    {
        const bool branch_taken_0x111c74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c74) {
            ctx->pc = 0x111C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111C74u;
            // 0x111c78: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x111D14u;
            goto label_111d14;
        }
    }
    ctx->pc = 0x111C7Cu;
    // 0x111c7c: 0x1f54821  addu        $t1, $t7, $s5
    ctx->pc = 0x111c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x111c80: 0x1f64021  addu        $t0, $t7, $s6
    ctx->pc = 0x111c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 22)));
    // 0x111c84: 0x0  nop
    ctx->pc = 0x111c84u;
    // NOP
label_111c88:
    // 0x111c88: 0x71023  negu        $v0, $a3
    ctx->pc = 0x111c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x111c8c: 0x26f1821  addu        $v1, $s3, $t7
    ctx->pc = 0x111c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x111c90: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x111c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x111c94: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x111c94u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111c98: 0xe21826  xor         $v1, $a3, $v0
    ctx->pc = 0x111c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x111c9c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x111c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x111ca0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x111ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x111ca4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x111ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x111ca8: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x111ca8u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x111cac: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x111cacu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x111cb0: 0x4c10007  bgez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x111CB0u;
    {
        const bool branch_taken_0x111cb0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x111CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111CB0u;
            // 0x111cb4: 0x827023  subu        $t6, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cb0) {
            ctx->pc = 0x111CD0u;
            goto label_111cd0;
        }
    }
    ctx->pc = 0x111CB8u;
    // 0x111cb8: 0x61023  negu        $v0, $a2
    ctx->pc = 0x111cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x111cbc: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x111cbcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x111cc0: 0x511804  sllv        $v1, $s1, $v0
    ctx->pc = 0x111cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x111cc4: 0x81250000  lb          $a1, 0x0($t1)
    ctx->pc = 0x111cc4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x111cc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x111CC8u;
    {
        const bool branch_taken_0x111cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111CC8u;
            // 0x111ccc: 0x501004  sllv        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cc8) {
            ctx->pc = 0x111CE0u;
            goto label_111ce0;
        }
    }
    ctx->pc = 0x111CD0u;
label_111cd0:
    // 0x111cd0: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x111cd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x111cd4: 0xd12807  srav        $a1, $s1, $a2
    ctx->pc = 0x111cd4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
    // 0x111cd8: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x111cd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x111cdc: 0xd01007  srav        $v0, $s0, $a2
    ctx->pc = 0x111cdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 6) & 0x1F));
label_111ce0:
    // 0x111ce0: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x111ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x111ce4: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x111ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x111ce8: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x111ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x111cec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x111cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x111cf0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x111cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x111cf4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x111cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x111cf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x111cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111cfc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x111cfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x111d00: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x111d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x111d04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x111d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x111d08: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x111D08u;
    {
        const bool branch_taken_0x111d08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x111D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111D08u;
            // 0x111d0c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d08) {
            ctx->pc = 0x111C88u;
            runtime->cooperativeGuestYield();
            goto label_111c88;
        }
    }
    ctx->pc = 0x111D10u;
    // 0x111d10: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x111d10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_111d14:
    // 0x111d14: 0x152102b  sltu        $v0, $t2, $s2
    ctx->pc = 0x111d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x111d18: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x111D18u;
    {
        const bool branch_taken_0x111d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111D18u;
            // 0x111d1c: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d18) {
            ctx->pc = 0x111C68u;
            runtime->cooperativeGuestYield();
            goto label_111c68;
        }
    }
    ctx->pc = 0x111D20u;
    // 0x111d20: 0x10000300  b           . + 4 + (0x300 << 2)
    ctx->pc = 0x111D20u;
    {
        const bool branch_taken_0x111d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111D20u;
            // 0x111d24: 0x460031c6  mov.s       $f7, $f6 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d20) {
            ctx->pc = 0x112924u;
            goto label_112924;
        }
    }
    ctx->pc = 0x111D28u;
label_111d28:
    // 0x111d28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111d2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111d30: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x111d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x111d34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111d38: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x111d38u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x111d3c: 0x95650002  lhu         $a1, 0x2($t3)
    ctx->pc = 0x111d3cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x111d40: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x111d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x111d44: 0x95a40004  lhu         $a0, 0x4($t5)
    ctx->pc = 0x111d44u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x111d48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x111d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x111d4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x111d4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x111d50: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x111d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x111d54: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x111d54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x111d58: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x111d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x111d5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111D5Cu;
    {
        const bool branch_taken_0x111d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111D5Cu;
            // 0x111d60: 0x46003086  mov.s       $f2, $f6 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d5c) {
            ctx->pc = 0x111D78u;
            goto label_111d78;
        }
    }
    ctx->pc = 0x111D64u;
    // 0x111d64: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x111d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x111d68: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x111d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x111d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x111d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111d70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111d74: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x111d74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_111d78:
    // 0x111d78: 0x4c3000f  bgezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x111D78u;
    {
        const bool branch_taken_0x111d78 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x111d78) {
            ctx->pc = 0x111D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111D78u;
            // 0x111d7c: 0x95a20000  lhu         $v0, 0x0($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x111DB8u;
            goto label_111db8;
        }
    }
    ctx->pc = 0x111D80u;
    // 0x111d80: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x111D80u;
    {
        const bool branch_taken_0x111d80 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x111D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111D80u;
            // 0x111d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d80) {
            ctx->pc = 0x111D98u;
            goto label_111d98;
        }
    }
    ctx->pc = 0x111D88u;
    // 0x111d88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x111d88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111d8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111d90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111D90u;
    {
        const bool branch_taken_0x111d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111D90u;
            // 0x111d94: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d90) {
            ctx->pc = 0x111DB4u;
            goto label_111db4;
        }
    }
    ctx->pc = 0x111D98u;
label_111d98:
    // 0x111d98: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x111d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x111d9c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x111d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x111da0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x111da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x111da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x111da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111da8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111da8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111dac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x111dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x111db0: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x111db0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_111db4:
    // 0x111db4: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x111db4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_111db8:
    // 0x111db8: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x111db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x111dbc: 0x8fa90054  lw          $t1, 0x54($sp)
    ctx->pc = 0x111dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x111dc0: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x111dc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x111dc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111dc8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x111dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x111dcc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x111dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111dd0: 0x1224021  addu        $t0, $t1, $v0
    ctx->pc = 0x111dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x111dd4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x111dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x111dd8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111DD8u;
    {
        const bool branch_taken_0x111dd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x111DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111DD8u;
            // 0x111ddc: 0x83380a  movz        $a3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111dd8) {
            ctx->pc = 0x111DF0u;
            goto label_111df0;
        }
    }
    ctx->pc = 0x111DE0u;
    // 0x111de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x111de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111de4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111de8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111DE8u;
    {
        const bool branch_taken_0x111de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111DE8u;
            // 0x111dec: 0x461500c2  mul.s       $f3, $f0, $f21 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111de8) {
            ctx->pc = 0x111E0Cu;
            goto label_111e0c;
        }
    }
    ctx->pc = 0x111DF0u;
label_111df0:
    // 0x111df0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x111df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x111df4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x111df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x111df8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x111df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x111dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x111dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111e00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111e04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x111e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x111e08: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x111e08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_111e0c:
    // 0x111e0c: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x111e0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x111e10: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x111E10u;
    {
        const bool branch_taken_0x111e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111e10) {
            ctx->pc = 0x111E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111E10u;
            // 0x111e14: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x111E3Cu;
            goto label_111e3c;
        }
    }
    ctx->pc = 0x111E18u;
    // 0x111e18: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x111e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x111e1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111e20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x111e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111e28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111e28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111e2c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111e30: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x111e30u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x111e34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111E34u;
    {
        const bool branch_taken_0x111e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111E34u;
            // 0x111e38: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e34) {
            ctx->pc = 0x111E40u;
            goto label_111e40;
        }
    }
    ctx->pc = 0x111E3Cu;
label_111e3c:
    // 0x111e3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x111e3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_111e40:
    // 0x111e40: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x111e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111e44: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x111e44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x111e48: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x111e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x111e4c: 0x0  nop
    ctx->pc = 0x111e4cu;
    // NOP
    // 0x111e50: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x111E50u;
    {
        const bool branch_taken_0x111e50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x111e50) {
            ctx->pc = 0x111E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111E50u;
            // 0x111e54: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x111E58u;
            goto label_111e58;
        }
    }
    ctx->pc = 0x111E58u;
label_111e58:
    // 0x111e58: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x111E58u;
    {
        const bool branch_taken_0x111e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111e58) {
            ctx->pc = 0x111F80u;
            goto label_111f80;
        }
    }
    ctx->pc = 0x111E60u;
    // 0x111e60: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x111e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x111e64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111e68: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x111e68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x111e6c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x111e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x111e70: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x111E70u;
    {
        const bool branch_taken_0x111e70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x111e70) {
            ctx->pc = 0x111F80u;
            goto label_111f80;
        }
    }
    ctx->pc = 0x111E78u;
    // 0x111e78: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x111e78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x111e7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111e80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111e84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x111e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x111e88: 0x0  nop
    ctx->pc = 0x111e88u;
    // NOP
    // 0x111e8c: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x111E8Cu;
    {
        const bool branch_taken_0x111e8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x111E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111E8Cu;
            // 0x111e90: 0x62040  sll         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e8c) {
            ctx->pc = 0x111F80u;
            goto label_111f80;
        }
    }
    ctx->pc = 0x111E94u;
    // 0x111e94: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x111e94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x111e98: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x111e98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x111e9c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x111e9cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ea0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x111ea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x111ea4: 0x95660006  lhu         $a2, 0x6($t3)
    ctx->pc = 0x111ea4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x111ea8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x111ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x111eac: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x111eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x111eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111eb4: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x111eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x111eb8: 0x95830002  lhu         $v1, 0x2($t4)
    ctx->pc = 0x111eb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x111ebc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x111ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x111ec0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x111ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x111ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111ec8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x111ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x111ecc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x111eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x111ed0: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x111ed0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x111ed4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x111ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x111ed8: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x111ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x111edc: 0x2058821  addu        $s1, $s0, $a1
    ctx->pc = 0x111edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x111ee0: 0x11e0028f  beqz        $t7, . + 4 + (0x28F << 2)
    ctx->pc = 0x111EE0u;
    {
        const bool branch_taken_0x111ee0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x111EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111EE0u;
            // 0x111ee4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ee0) {
            ctx->pc = 0x112920u;
            goto label_112920;
        }
    }
    ctx->pc = 0x111EE8u;
    // 0x111ee8: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x111ee8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111eec: 0x0  nop
    ctx->pc = 0x111eecu;
    // NOP
label_111ef0:
    // 0x111ef0: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x111ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x111ef4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x111ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x111ef8: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x111ef8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x111efc: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x111EFCu;
    {
        const bool branch_taken_0x111efc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111EFCu;
            // 0x111f00: 0xe1040  sll         $v0, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111efc) {
            ctx->pc = 0x111F68u;
            goto label_111f68;
        }
    }
    ctx->pc = 0x111F04u;
    // 0x111f04: 0x504821  addu        $t1, $v0, $s0
    ctx->pc = 0x111f04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x111f08: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x111f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x111f0c: 0x0  nop
    ctx->pc = 0x111f0cu;
    // NOP
label_111f10:
    // 0x111f10: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x111f10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x111f14: 0x71023  negu        $v0, $a3
    ctx->pc = 0x111f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x111f18: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x111f18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x111f1c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x111f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x111f20: 0x22023  negu        $a0, $v0
    ctx->pc = 0x111f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x111f24: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x111f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x111f28: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x111f28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x111f2c: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x111f2cu;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x111f30: 0xb22818  mult        $a1, $a1, $s2
    ctx->pc = 0x111f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x111f34: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x111f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111f38: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x111f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x111f3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111f40: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x111f40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x111f44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x111f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x111f48: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x111f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x111f4c: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x111f4cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x111f50: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x111f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x111f54: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x111f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x111f58: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x111f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x111f5c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x111f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x111f60: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x111F60u;
    {
        const bool branch_taken_0x111f60 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x111F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111F60u;
            // 0x111f64: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f60) {
            ctx->pc = 0x111F10u;
            runtime->cooperativeGuestYield();
            goto label_111f10;
        }
    }
    ctx->pc = 0x111F68u;
label_111f68:
    // 0x111f68: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x111f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x111f6c: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x111f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x111f70: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x111F70u;
    {
        const bool branch_taken_0x111f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111F70u;
            // 0x111f74: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f70) {
            ctx->pc = 0x111EF0u;
            runtime->cooperativeGuestYield();
            goto label_111ef0;
        }
    }
    ctx->pc = 0x111F78u;
    // 0x111f78: 0x1000026a  b           . + 4 + (0x26A << 2)
    ctx->pc = 0x111F78u;
    {
        const bool branch_taken_0x111f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111F78u;
            // 0x111f7c: 0x460031c6  mov.s       $f7, $f6 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f78) {
            ctx->pc = 0x112924u;
            goto label_112924;
        }
    }
    ctx->pc = 0x111F80u;
label_111f80:
    // 0x111f80: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x111f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x111f84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111f88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x111f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111f8c: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x111f8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x111f90: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x111f90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x111f94: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x111f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x111f98: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x111f98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x111f9c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x111f9cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x111fa0: 0x95660006  lhu         $a2, 0x6($t3)
    ctx->pc = 0x111fa0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x111fa4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x111fa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x111fa8: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x111fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x111fac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x111facu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x111fb0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x111fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x111fb4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x111fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x111fb8: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x111fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x111fbc: 0x95840002  lhu         $a0, 0x2($t4)
    ctx->pc = 0x111fbcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x111fc0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x111fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x111fc4: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x111fc4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x111fc8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x111fc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fcc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x111fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x111fd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x111fd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fd4: 0x25840004  addiu       $a0, $t4, 0x4
    ctx->pc = 0x111fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x111fd8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x111fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x111fdc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x111fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x111fe0: 0x11c0024f  beqz        $t6, . + 4 + (0x24F << 2)
    ctx->pc = 0x111FE0u;
    {
        const bool branch_taken_0x111fe0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111FE0u;
            // 0x111fe4: 0x436021  addu        $t4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fe0) {
            ctx->pc = 0x112920u;
            goto label_112920;
        }
    }
    ctx->pc = 0x111FE8u;
    // 0x111fe8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x111fe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fec: 0x0  nop
    ctx->pc = 0x111fecu;
    // NOP
label_111ff0:
    // 0x111ff0: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x111ff0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x111ff4: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x111FF4u;
    {
        const bool branch_taken_0x111ff4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111FF4u;
            // 0x111ff8: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ff4) {
            ctx->pc = 0x112044u;
            goto label_112044;
        }
    }
    ctx->pc = 0x111FFCu;
    // 0x111ffc: 0x4c3821  addu        $a3, $v0, $t4
    ctx->pc = 0x111ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_112000:
    // 0x112000: 0x61023  negu        $v0, $a2
    ctx->pc = 0x112000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x112004: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x112004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x112008: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x112008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11200c: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x11200cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x112010: 0x21823  negu        $v1, $v0
    ctx->pc = 0x112010u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x112014: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x112014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x112018: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x112018u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x11201c: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x11201cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x112020: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x112020u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x112024: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x112028: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x112028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11202c: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x11202cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x112030: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x112030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x112034: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x112034u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x112038: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x112038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11203c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11203Cu;
    {
        const bool branch_taken_0x11203c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x112040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11203Cu;
            // 0x112040: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11203c) {
            ctx->pc = 0x112000u;
            runtime->cooperativeGuestYield();
            goto label_112000;
        }
    }
    ctx->pc = 0x112044u;
label_112044:
    // 0x112044: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x112044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x112048: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x112048u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x11204c: 0x14e102b  sltu        $v0, $t2, $t6
    ctx->pc = 0x11204cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x112050: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x112050u;
    {
        const bool branch_taken_0x112050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112050u;
            // 0x112054: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112050) {
            ctx->pc = 0x111FF0u;
            runtime->cooperativeGuestYield();
            goto label_111ff0;
        }
    }
    ctx->pc = 0x112058u;
    // 0x112058: 0x10000232  b           . + 4 + (0x232 << 2)
    ctx->pc = 0x112058u;
    {
        const bool branch_taken_0x112058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11205Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112058u;
            // 0x11205c: 0x460031c6  mov.s       $f7, $f6 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112058) {
            ctx->pc = 0x112924u;
            goto label_112924;
        }
    }
    ctx->pc = 0x112060u;
label_112060:
    // 0x112060: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x112060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x112064: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x112064u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x112068: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11206c: 0x91a30002  lbu         $v1, 0x2($t5)
    ctx->pc = 0x11206cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x112070: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x112070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x112074: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x112074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x112078: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x112078u;
    {
        const bool branch_taken_0x112078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11207Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112078u;
            // 0x11207c: 0x44b021  addu        $s6, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112078) {
            ctx->pc = 0x112094u;
            goto label_112094;
        }
    }
    ctx->pc = 0x112080u;
    // 0x112080: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x112080u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x112084: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x112084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x112088: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x112088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x11208c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11208Cu;
    {
        const bool branch_taken_0x11208c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11208Cu;
            // 0x112090: 0x2c27021  addu        $t6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11208c) {
            ctx->pc = 0x11209Cu;
            goto label_11209c;
        }
    }
    ctx->pc = 0x112094u;
label_112094:
    // 0x112094: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x112094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x112098: 0x244e7788  addiu       $t6, $v0, 0x7788
    ctx->pc = 0x112098u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_11209c:
    // 0x11209c: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x11209cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1120a0: 0x26c30002  addiu       $v1, $s6, 0x2
    ctx->pc = 0x1120a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x1120a4: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x1120a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x1120a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1120a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120ac: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x1120ACu;
    {
        const bool branch_taken_0x1120ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1120ACu;
            // 0x1120b0: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120ac) {
            ctx->pc = 0x1124F4u;
            goto label_1124f4;
        }
    }
    ctx->pc = 0x1120B4u;
    // 0x1120b4: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x1120b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1120b8:
    // 0x1120b8: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x1120b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1120bc: 0x0  nop
    ctx->pc = 0x1120bcu;
    // NOP
    // 0x1120c0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1120C0u;
    {
        const bool branch_taken_0x1120c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1120C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1120C0u;
            // 0x1120c4: 0x95840002  lhu         $a0, 0x2($t4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120c0) {
            ctx->pc = 0x112120u;
            goto label_112120;
        }
    }
    ctx->pc = 0x1120C8u;
    // 0x1120c8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x1120c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1120cc: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x1120ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1120d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1120d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1120d4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1120d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1120d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1120d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1120dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1120dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1120e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1120e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1120e4: 0x46023840  add.s       $f1, $f7, $f2
    ctx->pc = 0x1120e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x1120e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1120e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1120ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1120ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1120f0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1120f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1120f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1120f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1120f8: 0x0  nop
    ctx->pc = 0x1120f8u;
    // NOP
    // 0x1120fc: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1120FCu;
    {
        const bool branch_taken_0x1120fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x112100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1120FCu;
            // 0x112100: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120fc) {
            ctx->pc = 0x11217Cu;
            goto label_11217c;
        }
    }
    ctx->pc = 0x112104u;
    // 0x112104: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x112104u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11210c: 0x46023041  sub.s       $f1, $f6, $f2
    ctx->pc = 0x11210cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x112110: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x112110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x112114: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x112114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112118: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x112118u;
    {
        const bool branch_taken_0x112118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112118) {
            ctx->pc = 0x112174u;
            goto label_112174;
        }
    }
    ctx->pc = 0x112120u;
label_112120:
    // 0x112120: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x112120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x112124: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x112124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112128: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x112128u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11212c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11212cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112130: 0x46023841  sub.s       $f1, $f7, $f2
    ctx->pc = 0x112130u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x112134: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x112134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x112138: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x112138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11213c: 0x0  nop
    ctx->pc = 0x11213cu;
    // NOP
    // 0x112140: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x112140u;
    {
        const bool branch_taken_0x112140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x112144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112140u;
            // 0x112144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112140) {
            ctx->pc = 0x11217Cu;
            goto label_11217c;
        }
    }
    ctx->pc = 0x112148u;
    // 0x112148: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x112148u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11214c: 0x46023041  sub.s       $f1, $f6, $f2
    ctx->pc = 0x11214cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x112150: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x112150u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x112154: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x112154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x112158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11215c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x112160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x112160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112164: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112168: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x112168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11216c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11216cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112170: 0x0  nop
    ctx->pc = 0x112170u;
    // NOP
label_112174:
    // 0x112174: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x112174u;
    {
        const bool branch_taken_0x112174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x112174) {
            ctx->pc = 0x112178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112174u;
            // 0x112178: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11217Cu;
            goto label_11217c;
        }
    }
    ctx->pc = 0x11217Cu;
label_11217c:
    // 0x11217c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11217cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112180: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x112180u;
    {
        const bool branch_taken_0x112180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112180u;
            // 0x112184: 0x460038c6  mov.s       $f3, $f7 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112180) {
            ctx->pc = 0x1124E0u;
            goto label_1124e0;
        }
    }
    ctx->pc = 0x112188u;
    // 0x112188: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11218c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11218cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112190: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x112190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x112194: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x112194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112198: 0x46003086  mov.s       $f2, $f6
    ctx->pc = 0x112198u;
    ctx->f[2] = FPU_MOV_S(ctx->f[6]);
    // 0x11219c: 0x46150143  div.s       $f5, $f0, $f21
    ctx->pc = 0x11219cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[21];
    // 0x1121a0: 0x95880002  lhu         $t0, 0x2($t4)
    ctx->pc = 0x1121a0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x1121a4: 0x46013000  add.s       $f0, $f6, $f1
    ctx->pc = 0x1121a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x1121a8: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x1121a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1121ac: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x1121acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x1121b0: 0x95840000  lhu         $a0, 0x0($t4)
    ctx->pc = 0x1121b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1121b4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1121b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1121b8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1121b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1121bc: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1121bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x1121c0: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x1121c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1121c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1121c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1121c8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1121c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1121cc: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1121ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1121d0: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1121D0u;
    {
        const bool branch_taken_0x1121d0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1121D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1121D0u;
            // 0x1121d4: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121d0) {
            ctx->pc = 0x1121E8u;
            goto label_1121e8;
        }
    }
    ctx->pc = 0x1121D8u;
    // 0x1121d8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1121d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1121dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1121dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1121e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1121e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1121e4: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x1121e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1121e8:
    // 0x1121e8: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1121E8u;
    {
        const bool branch_taken_0x1121e8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1121ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1121E8u;
            // 0x1121ec: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121e8) {
            ctx->pc = 0x112200u;
            goto label_112200;
        }
    }
    ctx->pc = 0x1121F0u;
    // 0x1121f0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1121f0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1121f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1121f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1121f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1121f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1121fc: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x1121fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_112200:
    // 0x112200: 0xc4282a  slt         $a1, $a2, $a0
    ctx->pc = 0x112200u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x112204: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x112204u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x112208: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x112208u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x11220c: 0x64380a  movz        $a3, $v1, $a0
    ctx->pc = 0x11220cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x112210: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x112210u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x112214: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x112214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x112218: 0xc75023  subu        $t2, $a2, $a3
    ctx->pc = 0x112218u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x11221c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11221cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112220: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x112220u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x112224: 0x91c90001  lbu         $t1, 0x1($t6)
    ctx->pc = 0x112224u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x112228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11222c: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x11222cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x112230: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x112230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x112234: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x112234u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x112238: 0x15230003  bne         $t1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x112238u;
    {
        const bool branch_taken_0x112238 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x11223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112238u;
            // 0x11223c: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112238) {
            ctx->pc = 0x112248u;
            goto label_112248;
        }
    }
    ctx->pc = 0x112240u;
    // 0x112240: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112240u;
    {
        const bool branch_taken_0x112240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112240u;
            // 0x112244: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112240) {
            ctx->pc = 0x112258u;
            goto label_112258;
        }
    }
    ctx->pc = 0x112248u;
label_112248:
    // 0x112248: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x112248u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11224c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11224cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x112250: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x112250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x112254: 0x1c2a821  addu        $s5, $t6, $v0
    ctx->pc = 0x112254u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_112258:
    // 0x112258: 0x1540003d  bnez        $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x112258u;
    {
        const bool branch_taken_0x112258 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x11225Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112258u;
            // 0x11225c: 0x91a20003  lbu         $v0, 0x3($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112258) {
            ctx->pc = 0x112350u;
            goto label_112350;
        }
    }
    ctx->pc = 0x112260u;
    // 0x112260: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x112260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x112264: 0x91c30001  lbu         $v1, 0x1($t6)
    ctx->pc = 0x112264u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x112268: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x112268u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11226c: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x11226cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x112270: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x112274: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x112274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x112278: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x112278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x11227c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11227cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112280: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x112280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x112284: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x112284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x112288: 0x95c50002  lhu         $a1, 0x2($t6)
    ctx->pc = 0x112288u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x11228c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112290: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x112290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x112294: 0x91d10000  lbu         $s1, 0x0($t6)
    ctx->pc = 0x112294u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x112298: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x112298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11229c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x11229cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1122a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1122a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1122a4: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1122a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1122a8: 0x151102b  sltu        $v0, $t2, $s1
    ctx->pc = 0x1122a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1122ac: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x1122ACu;
    {
        const bool branch_taken_0x1122ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1122ACu;
            // 0x1122b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122ac) {
            ctx->pc = 0x1124E0u;
            goto label_1124e0;
        }
    }
    ctx->pc = 0x1122B4u;
    // 0x1122b4: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1122b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1122b8:
    // 0x1122b8: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x1122b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1122bc: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x1122bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1122c0: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x1122c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1122c4: 0x50c0001d  beql        $a2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1122C4u;
    {
        const bool branch_taken_0x1122c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122c4) {
            ctx->pc = 0x1122C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1122C4u;
            // 0x1122c8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11233Cu;
            goto label_11233c;
        }
    }
    ctx->pc = 0x1122CCu;
    // 0x1122cc: 0x1f34021  addu        $t0, $t7, $s3
    ctx->pc = 0x1122ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
label_1122d0:
    // 0x1122d0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x1122d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1122d4: 0x2af1821  addu        $v1, $s5, $t7
    ctx->pc = 0x1122d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    // 0x1122d8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1122d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1122dc: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x1122dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1122e0: 0xc21826  xor         $v1, $a2, $v0
    ctx->pc = 0x1122e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x1122e4: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1122e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1122e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1122e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1122ec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1122ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1122f0: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x1122f0u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x1122f4: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x1122f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1122f8: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1122f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1122fc: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1122FCu;
    {
        const bool branch_taken_0x1122fc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x112300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1122FCu;
            // 0x112300: 0x81070000  lb          $a3, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122fc) {
            ctx->pc = 0x112310u;
            goto label_112310;
        }
    }
    ctx->pc = 0x112304u;
    // 0x112304: 0x51023  negu        $v0, $a1
    ctx->pc = 0x112304u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x112308: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x112308u;
    {
        const bool branch_taken_0x112308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112308u;
            // 0x11230c: 0x501004  sllv        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112308) {
            ctx->pc = 0x112314u;
            goto label_112314;
        }
    }
    ctx->pc = 0x112310u;
label_112310:
    // 0x112310: 0xb01007  srav        $v0, $s0, $a1
    ctx->pc = 0x112310u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
label_112314:
    // 0x112314: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x112314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x112318: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11231c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11231cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x112320: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x112320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x112324: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x112324u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x112328: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x112328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11232c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x112330: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x112330u;
    {
        const bool branch_taken_0x112330 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x112334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112330u;
            // 0x112334: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112330) {
            ctx->pc = 0x1122D0u;
            runtime->cooperativeGuestYield();
            goto label_1122d0;
        }
    }
    ctx->pc = 0x112338u;
    // 0x112338: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x112338u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_11233c:
    // 0x11233c: 0x171102b  sltu        $v0, $t3, $s1
    ctx->pc = 0x11233cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x112340: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x112340u;
    {
        const bool branch_taken_0x112340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112340u;
            // 0x112344: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112340) {
            ctx->pc = 0x1122B8u;
            runtime->cooperativeGuestYield();
            goto label_1122b8;
        }
    }
    ctx->pc = 0x112348u;
    // 0x112348: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x112348u;
    {
        const bool branch_taken_0x112348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112348u;
            // 0x11234c: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112348) {
            ctx->pc = 0x1124E4u;
            goto label_1124e4;
        }
    }
    ctx->pc = 0x112350u;
label_112350:
    // 0x112350: 0x1272818  mult        $a1, $t1, $a3
    ctx->pc = 0x112350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x112354: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x112354u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x112358: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11235c: 0x95c30002  lhu         $v1, 0x2($t6)
    ctx->pc = 0x11235cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x112360: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x112360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x112364: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11236c: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x11236cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x112370: 0x45c821  addu        $t9, $v0, $a1
    ctx->pc = 0x112370u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x112374: 0x5410011  bgez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x112374u;
    {
        const bool branch_taken_0x112374 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x112378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112374u;
            // 0x112378: 0x62c021  addu        $t8, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112374) {
            ctx->pc = 0x1123BCu;
            goto label_1123bc;
        }
    }
    ctx->pc = 0x11237Cu;
    // 0x11237c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x11237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x112380: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x112380u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x112384: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x112384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x112388: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x112388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x11238c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11238cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112390: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x112390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112394: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x112394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x112398: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x112398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x11239c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x11239cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1123a0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1123a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1123a4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1123a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1123a8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1123a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1123ac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1123acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1123b0: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x1123b0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x1123b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1123B4u;
    {
        const bool branch_taken_0x1123b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1123B4u;
            // 0x1123b8: 0x46000887  neg.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123b4) {
            ctx->pc = 0x1123F0u;
            goto label_1123f0;
        }
    }
    ctx->pc = 0x1123BCu;
label_1123bc:
    // 0x1123bc: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x1123bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1123c0: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x1123c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1123c4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1123c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1123c8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1123c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1123cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1123ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1123d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1123d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1123d4: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x1123d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1123d8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1123d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1123dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1123dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1123e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1123e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1123e4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1123e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1123e8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1123e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1123ec: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1123ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1123f0:
    // 0x1123f0: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x1123f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x1123f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1123f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1123f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1123f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123fc: 0x91d40000  lbu         $s4, 0x0($t6)
    ctx->pc = 0x1123fcu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x112400: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x112400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x112404: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x112404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x112408: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11240c: 0x44131000  mfc1        $s3, $f2
    ctx->pc = 0x11240cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x112410: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x112414: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x112414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x112418: 0x12800031  beqz        $s4, . + 4 + (0x31 << 2)
    ctx->pc = 0x112418u;
    {
        const bool branch_taken_0x112418 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11241Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112418u;
            // 0x11241c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112418) {
            ctx->pc = 0x1124E0u;
            goto label_1124e0;
        }
    }
    ctx->pc = 0x112420u;
    // 0x112420: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x112420u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112424: 0x0  nop
    ctx->pc = 0x112424u;
    // NOP
label_112428:
    // 0x112428: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x112428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x11242c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x11242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x112430: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x112430u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x112434: 0x50e00027  beql        $a3, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x112434u;
    {
        const bool branch_taken_0x112434 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x112434) {
            ctx->pc = 0x112438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112434u;
            // 0x112438: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1124D4u;
            goto label_1124d4;
        }
    }
    ctx->pc = 0x11243Cu;
    // 0x11243c: 0x2184821  addu        $t1, $s0, $t8
    ctx->pc = 0x11243cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x112440: 0x2194021  addu        $t0, $s0, $t9
    ctx->pc = 0x112440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x112444: 0x0  nop
    ctx->pc = 0x112444u;
    // NOP
label_112448:
    // 0x112448: 0x71023  negu        $v0, $a3
    ctx->pc = 0x112448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x11244c: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x11244cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x112450: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x112450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x112454: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x112454u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112458: 0xe21826  xor         $v1, $a3, $v0
    ctx->pc = 0x112458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x11245c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x11245cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x112460: 0x21023  negu        $v0, $v0
    ctx->pc = 0x112460u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x112464: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x112464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x112468: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x112468u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x11246c: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x11246cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x112470: 0x4c10007  bgez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x112470u;
    {
        const bool branch_taken_0x112470 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x112474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112470u;
            // 0x112474: 0x827823  subu        $t7, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112470) {
            ctx->pc = 0x112490u;
            goto label_112490;
        }
    }
    ctx->pc = 0x112478u;
    // 0x112478: 0x61023  negu        $v0, $a2
    ctx->pc = 0x112478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11247c: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x11247cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x112480: 0x531804  sllv        $v1, $s3, $v0
    ctx->pc = 0x112480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x112484: 0x81250000  lb          $a1, 0x0($t1)
    ctx->pc = 0x112484u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x112488: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112488u;
    {
        const bool branch_taken_0x112488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112488u;
            // 0x11248c: 0x511004  sllv        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112488) {
            ctx->pc = 0x1124A0u;
            goto label_1124a0;
        }
    }
    ctx->pc = 0x112490u;
label_112490:
    // 0x112490: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x112490u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x112494: 0xd32807  srav        $a1, $s3, $a2
    ctx->pc = 0x112494u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x112498: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x112498u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11249c: 0xd11007  srav        $v0, $s1, $a2
    ctx->pc = 0x11249cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
label_1124a0:
    // 0x1124a0: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x1124a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1124a4: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x1124a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1124a8: 0xf1880  sll         $v1, $t7, 2
    ctx->pc = 0x1124a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1124ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1124acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1124b0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1124b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1124b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1124b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1124b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1124b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1124bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1124bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1124c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1124c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1124c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1124c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1124c8: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1124C8u;
    {
        const bool branch_taken_0x1124c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1124CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1124C8u;
            // 0x1124cc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124c8) {
            ctx->pc = 0x112448u;
            runtime->cooperativeGuestYield();
            goto label_112448;
        }
    }
    ctx->pc = 0x1124D0u;
    // 0x1124d0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1124d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1124d4:
    // 0x1124d4: 0x154102b  sltu        $v0, $t2, $s4
    ctx->pc = 0x1124d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1124d8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1124D8u;
    {
        const bool branch_taken_0x1124d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1124DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1124D8u;
            // 0x1124dc: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124d8) {
            ctx->pc = 0x112428u;
            runtime->cooperativeGuestYield();
            goto label_112428;
        }
    }
    ctx->pc = 0x1124E0u;
label_1124e0:
    // 0x1124e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1124e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1124e4:
    // 0x1124e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1124e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1124e8: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1124e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1124ec: 0x1440fef2  bnez        $v0, . + 4 + (-0x10E << 2)
    ctx->pc = 0x1124ECu;
    {
        const bool branch_taken_0x1124ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1124F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1124ECu;
            // 0x1124f0: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124ec) {
            ctx->pc = 0x1120B8u;
            runtime->cooperativeGuestYield();
            goto label_1120b8;
        }
    }
    ctx->pc = 0x1124F4u;
label_1124f4:
    // 0x1124f4: 0x92d60001  lbu         $s6, 0x1($s6)
    ctx->pc = 0x1124f4u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x1124f8: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x1124f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1124fc: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x1124FCu;
    {
        const bool branch_taken_0x1124fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1124FCu;
            // 0x112500: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124fc) {
            ctx->pc = 0x112920u;
            goto label_112920;
        }
    }
    ctx->pc = 0x112504u;
    // 0x112504: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x112504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x112508: 0x446021  addu        $t4, $v0, $a0
    ctx->pc = 0x112508u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11250c: 0x0  nop
    ctx->pc = 0x11250cu;
    // NOP
label_112510:
    // 0x112510: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x112510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112514: 0x0  nop
    ctx->pc = 0x112514u;
    // NOP
    // 0x112518: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x112518u;
    {
        const bool branch_taken_0x112518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11251Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112518u;
            // 0x11251c: 0x95840002  lhu         $a0, 0x2($t4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112518) {
            ctx->pc = 0x112578u;
            goto label_112578;
        }
    }
    ctx->pc = 0x112520u;
    // 0x112520: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x112520u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x112524: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x112524u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x112528: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x112528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11252c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11252cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x112530: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x112530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112538: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x112538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11253c: 0x46023840  add.s       $f1, $f7, $f2
    ctx->pc = 0x11253cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x112540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x112540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112548: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x112548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11254c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11254cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112550: 0x0  nop
    ctx->pc = 0x112550u;
    // NOP
    // 0x112554: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x112554u;
    {
        const bool branch_taken_0x112554 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x112558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112554u;
            // 0x112558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112554) {
            ctx->pc = 0x1125D4u;
            goto label_1125d4;
        }
    }
    ctx->pc = 0x11255Cu;
    // 0x11255c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11255cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112560: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112564: 0x46023040  add.s       $f1, $f6, $f2
    ctx->pc = 0x112564u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x112568: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x112568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11256c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11256cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112570: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x112570u;
    {
        const bool branch_taken_0x112570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112570) {
            ctx->pc = 0x1125CCu;
            goto label_1125cc;
        }
    }
    ctx->pc = 0x112578u;
label_112578:
    // 0x112578: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x112578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11257c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11257cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112580: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x112580u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112584: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112588: 0x46023841  sub.s       $f1, $f7, $f2
    ctx->pc = 0x112588u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x11258c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x11258cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x112590: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x112590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112594: 0x0  nop
    ctx->pc = 0x112594u;
    // NOP
    // 0x112598: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x112598u;
    {
        const bool branch_taken_0x112598 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11259Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112598u;
            // 0x11259c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112598) {
            ctx->pc = 0x1125D4u;
            goto label_1125d4;
        }
    }
    ctx->pc = 0x1125A0u;
    // 0x1125a0: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x1125a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1125a4: 0x46023041  sub.s       $f1, $f6, $f2
    ctx->pc = 0x1125a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x1125a8: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x1125a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1125ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1125acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1125b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1125b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1125b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1125b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1125b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1125b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1125bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1125bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1125c0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1125c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1125c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1125c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1125c8: 0x0  nop
    ctx->pc = 0x1125c8u;
    // NOP
label_1125cc:
    // 0x1125cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1125CCu;
    {
        const bool branch_taken_0x1125cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1125cc) {
            ctx->pc = 0x1125D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1125CCu;
            // 0x1125d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1125D4u;
            goto label_1125d4;
        }
    }
    ctx->pc = 0x1125D4u;
label_1125d4:
    // 0x1125d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1125d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125d8: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1125D8u;
    {
        const bool branch_taken_0x1125d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1125D8u;
            // 0x1125dc: 0x46003086  mov.s       $f2, $f6 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125d8) {
            ctx->pc = 0x112910u;
            goto label_112910;
        }
    }
    ctx->pc = 0x1125E0u;
    // 0x1125e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1125e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1125e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1125e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1125e8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1125e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1125ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1125ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1125f0: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x1125f0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x1125f4: 0x95850002  lhu         $a1, 0x2($t4)
    ctx->pc = 0x1125f4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x1125f8: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1125f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1125fc: 0x95840000  lhu         $a0, 0x0($t4)
    ctx->pc = 0x1125fcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x112600: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x112600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x112604: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x112608: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x112608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11260c: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x11260cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x112610: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x112610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x112614: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x112614u;
    {
        const bool branch_taken_0x112614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112614u;
            // 0x112618: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112614) {
            ctx->pc = 0x112630u;
            goto label_112630;
        }
    }
    ctx->pc = 0x11261Cu;
    // 0x11261c: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x11261cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x112620: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x112620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x112624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x112624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112628: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11262c: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x11262cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_112630:
    // 0x112630: 0x4c3000f  bgezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x112630u;
    {
        const bool branch_taken_0x112630 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x112630) {
            ctx->pc = 0x112634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112630u;
            // 0x112634: 0x95a20000  lhu         $v0, 0x0($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112670u;
            goto label_112670;
        }
    }
    ctx->pc = 0x112638u;
    // 0x112638: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x112638u;
    {
        const bool branch_taken_0x112638 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x11263Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112638u;
            // 0x11263c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112638) {
            ctx->pc = 0x112650u;
            goto label_112650;
        }
    }
    ctx->pc = 0x112640u;
    // 0x112640: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x112640u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112648: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112648u;
    {
        const bool branch_taken_0x112648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11264Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112648u;
            // 0x11264c: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112648) {
            ctx->pc = 0x11266Cu;
            goto label_11266c;
        }
    }
    ctx->pc = 0x112650u;
label_112650:
    // 0x112650: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x112650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x112654: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x112654u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x112658: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x112658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11265c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11265cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112660: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112664: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x112664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x112668: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x112668u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_11266c:
    // 0x11266c: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x11266cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_112670:
    // 0x112670: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x112670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x112674: 0x8fa90054  lw          $t1, 0x54($sp)
    ctx->pc = 0x112674u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x112678: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x112678u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11267c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11267cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112680: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x112680u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x112684: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x112684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x112688: 0x122a821  addu        $s5, $t1, $v0
    ctx->pc = 0x112688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11268c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x11268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x112690: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112690u;
    {
        const bool branch_taken_0x112690 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x112694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112690u;
            // 0x112694: 0x83380a  movz        $a3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112690) {
            ctx->pc = 0x1126A8u;
            goto label_1126a8;
        }
    }
    ctx->pc = 0x112698u;
    // 0x112698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x112698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11269c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11269cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1126a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1126A0u;
    {
        const bool branch_taken_0x1126a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1126A0u;
            // 0x1126a4: 0x461500c2  mul.s       $f3, $f0, $f21 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126a0) {
            ctx->pc = 0x1126C4u;
            goto label_1126c4;
        }
    }
    ctx->pc = 0x1126A8u;
label_1126a8:
    // 0x1126a8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1126a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1126ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1126acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1126b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1126b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1126b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1126b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1126b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1126b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1126bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1126bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1126c0: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x1126c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1126c4:
    // 0x1126c4: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x1126c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1126c8: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1126C8u;
    {
        const bool branch_taken_0x1126c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1126c8) {
            ctx->pc = 0x1126CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1126C8u;
            // 0x1126cc: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1126F4u;
            goto label_1126f4;
        }
    }
    ctx->pc = 0x1126D0u;
    // 0x1126d0: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x1126d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1126d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1126d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1126d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1126d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1126dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1126dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1126e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1126e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1126e4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1126e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1126e8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1126e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1126ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1126ECu;
    {
        const bool branch_taken_0x1126ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1126ECu;
            // 0x1126f0: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126ec) {
            ctx->pc = 0x1126F8u;
            goto label_1126f8;
        }
    }
    ctx->pc = 0x1126F4u;
label_1126f4:
    // 0x1126f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1126f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1126f8:
    // 0x1126f8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1126f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1126fc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1126fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x112700: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x112700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112704: 0x0  nop
    ctx->pc = 0x112704u;
    // NOP
    // 0x112708: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x112708u;
    {
        const bool branch_taken_0x112708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x112708) {
            ctx->pc = 0x11270Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112708u;
            // 0x11270c: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x112710u;
            goto label_112710;
        }
    }
    ctx->pc = 0x112710u;
label_112710:
    // 0x112710: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x112710u;
    {
        const bool branch_taken_0x112710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112710) {
            ctx->pc = 0x112838u;
            goto label_112838;
        }
    }
    ctx->pc = 0x112718u;
    // 0x112718: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x112718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11271c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11271cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112720: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x112720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x112724: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x112724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112728: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x112728u;
    {
        const bool branch_taken_0x112728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x112728) {
            ctx->pc = 0x112838u;
            goto label_112838;
        }
    }
    ctx->pc = 0x112730u;
    // 0x112730: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x112730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x112734: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11273c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11273cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112740: 0x0  nop
    ctx->pc = 0x112740u;
    // NOP
    // 0x112744: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x112744u;
    {
        const bool branch_taken_0x112744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x112748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112744u;
            // 0x112748: 0x62040  sll         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112744) {
            ctx->pc = 0x112838u;
            goto label_112838;
        }
    }
    ctx->pc = 0x11274Cu;
    // 0x11274c: 0x91c50001  lbu         $a1, 0x1($t6)
    ctx->pc = 0x11274cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x112750: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x112750u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x112754: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x112754u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112758: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x112758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11275c: 0x95060006  lhu         $a2, 0x6($t0)
    ctx->pc = 0x11275cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x112760: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x112764: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x112764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x112768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11276c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x11276cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x112770: 0x95c30002  lhu         $v1, 0x2($t6)
    ctx->pc = 0x112770u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x112774: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x112774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x112778: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x112778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11277c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11277cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112780: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x112780u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x112784: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x112784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112788: 0x91d00000  lbu         $s0, 0x0($t6)
    ctx->pc = 0x112788u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11278c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11278cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x112790: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x112790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x112794: 0x2259821  addu        $s3, $s1, $a1
    ctx->pc = 0x112794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x112798: 0x1200005d  beqz        $s0, . + 4 + (0x5D << 2)
    ctx->pc = 0x112798u;
    {
        const bool branch_taken_0x112798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11279Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112798u;
            // 0x11279c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112798) {
            ctx->pc = 0x112910u;
            goto label_112910;
        }
    }
    ctx->pc = 0x1127A0u;
    // 0x1127a0: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x1127a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127a4: 0x0  nop
    ctx->pc = 0x1127a4u;
    // NOP
label_1127a8:
    // 0x1127a8: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x1127a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1127ac: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x1127acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1127b0: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x1127b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1127b4: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1127B4u;
    {
        const bool branch_taken_0x1127b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1127B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1127B4u;
            // 0x1127b8: 0xf1040  sll         $v0, $t7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1127b4) {
            ctx->pc = 0x112820u;
            goto label_112820;
        }
    }
    ctx->pc = 0x1127BCu;
    // 0x1127bc: 0x514821  addu        $t1, $v0, $s1
    ctx->pc = 0x1127bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1127c0: 0x534021  addu        $t0, $v0, $s3
    ctx->pc = 0x1127c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1127c4: 0x0  nop
    ctx->pc = 0x1127c4u;
    // NOP
label_1127c8:
    // 0x1127c8: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x1127c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1127cc: 0x71023  negu        $v0, $a3
    ctx->pc = 0x1127ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x1127d0: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x1127d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1127d4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1127d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1127d8: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1127d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1127dc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1127dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1127e0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1127e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1127e4: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x1127e4u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x1127e8: 0xb42818  mult        $a1, $a1, $s4
    ctx->pc = 0x1127e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1127ec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1127ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1127f0: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x1127f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x1127f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1127f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1127f8: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x1127f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x1127fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1127fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x112800: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x112800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x112804: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x112804u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x112808: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x112808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11280c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x11280cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x112810: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x112810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x112814: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x112814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x112818: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x112818u;
    {
        const bool branch_taken_0x112818 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11281Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112818u;
            // 0x11281c: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112818) {
            ctx->pc = 0x1127C8u;
            runtime->cooperativeGuestYield();
            goto label_1127c8;
        }
    }
    ctx->pc = 0x112820u;
label_112820:
    // 0x112820: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x112820u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x112824: 0x150102b  sltu        $v0, $t2, $s0
    ctx->pc = 0x112824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x112828: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x112828u;
    {
        const bool branch_taken_0x112828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11282Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112828u;
            // 0x11282c: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112828) {
            ctx->pc = 0x1127A8u;
            runtime->cooperativeGuestYield();
            goto label_1127a8;
        }
    }
    ctx->pc = 0x112830u;
    // 0x112830: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x112830u;
    {
        const bool branch_taken_0x112830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112830u;
            // 0x112834: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112830) {
            ctx->pc = 0x112914u;
            goto label_112914;
        }
    }
    ctx->pc = 0x112838u;
label_112838:
    // 0x112838: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x112838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11283c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11283cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112840: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x112840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112844: 0x91c40001  lbu         $a0, 0x1($t6)
    ctx->pc = 0x112844u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x112848: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x112848u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11284c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x11284cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x112850: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x112850u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x112854: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x112854u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x112858: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x112858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11285c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11285cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x112860: 0x95060006  lhu         $a2, 0x6($t0)
    ctx->pc = 0x112860u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x112864: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x112864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x112868: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11286c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x11286cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x112870: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x112870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x112874: 0x95c40002  lhu         $a0, 0x2($t6)
    ctx->pc = 0x112874u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x112878: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x112878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11287c: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x11287cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x112880: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x112880u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112884: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112888: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x112888u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11288c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x112890: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x112890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x112894: 0x25c40004  addiu       $a0, $t6, 0x4
    ctx->pc = 0x112894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x112898: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x112898u;
    {
        const bool branch_taken_0x112898 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112898u;
            // 0x11289c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112898) {
            ctx->pc = 0x112910u;
            goto label_112910;
        }
    }
    ctx->pc = 0x1128A0u;
    // 0x1128a0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1128a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128a4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1128a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1128a8:
    // 0x1128a8: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x1128a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1128ac: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1128ACu;
    {
        const bool branch_taken_0x1128ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1128B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1128ACu;
            // 0x1128b0: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128ac) {
            ctx->pc = 0x1128FCu;
            goto label_1128fc;
        }
    }
    ctx->pc = 0x1128B4u;
    // 0x1128b4: 0x503821  addu        $a3, $v0, $s0
    ctx->pc = 0x1128b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1128b8:
    // 0x1128b8: 0x61023  negu        $v0, $a2
    ctx->pc = 0x1128b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1128bc: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1128bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1128c0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1128c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1128c4: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x1128c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1128c8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1128c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1128cc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1128ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1128d0: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x1128d0u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x1128d4: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x1128d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x1128d8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1128d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1128dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1128dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1128e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1128e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1128e4: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x1128e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x1128e8: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1128e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1128ec: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x1128ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1128f0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1128f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1128f4: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1128F4u;
    {
        const bool branch_taken_0x1128f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1128F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1128F4u;
            // 0x1128f8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128f4) {
            ctx->pc = 0x1128B8u;
            runtime->cooperativeGuestYield();
            goto label_1128b8;
        }
    }
    ctx->pc = 0x1128FCu;
label_1128fc:
    // 0x1128fc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1128fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x112900: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x112900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x112904: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x112904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x112908: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x112908u;
    {
        const bool branch_taken_0x112908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112908u;
            // 0x11290c: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112908) {
            ctx->pc = 0x1128A8u;
            runtime->cooperativeGuestYield();
            goto label_1128a8;
        }
    }
    ctx->pc = 0x112910u;
label_112910:
    // 0x112910: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x112910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_112914:
    // 0x112914: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x112914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x112918: 0x1440fefd  bnez        $v0, . + 4 + (-0x103 << 2)
    ctx->pc = 0x112918u;
    {
        const bool branch_taken_0x112918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112918u;
            // 0x11291c: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112918) {
            ctx->pc = 0x112510u;
            runtime->cooperativeGuestYield();
            goto label_112510;
        }
    }
    ctx->pc = 0x112920u;
label_112920:
    // 0x112920: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x112920u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
label_112924:
    // 0x112924: 0x4606b801  sub.s       $f0, $f23, $f6
    ctx->pc = 0x112924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[6]);
    // 0x112928: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x112928u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x11292c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x11292cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112930: 0x0  nop
    ctx->pc = 0x112930u;
    // NOP
    // 0x112934: 0x4503fc14  bc1tl       . + 4 + (-0x3EC << 2)
    ctx->pc = 0x112934u;
    {
        const bool branch_taken_0x112934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x112934) {
            ctx->pc = 0x112938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112934u;
            // 0x112938: 0x95a40004  lhu         $a0, 0x4($t5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x111988u;
            runtime->cooperativeGuestYield();
            goto label_111988;
        }
    }
    ctx->pc = 0x11293Cu;
label_11293c:
    // 0x11293c: 0x95a40004  lhu         $a0, 0x4($t5)
    ctx->pc = 0x11293cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x112940: 0x108001b3  beqz        $a0, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x112940u;
    {
        const bool branch_taken_0x112940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x112944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112940u;
            // 0x112944: 0x25ab0004  addiu       $t3, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112940) {
            ctx->pc = 0x113010u;
            goto label_113010;
        }
    }
    ctx->pc = 0x112948u;
    // 0x112948: 0x91ae0002  lbu         $t6, 0x2($t5)
    ctx->pc = 0x112948u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x11294c: 0x31c20002  andi        $v0, $t6, 0x2
    ctx->pc = 0x11294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x112950: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112950u;
    {
        const bool branch_taken_0x112950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112950u;
            // 0x112954: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112950) {
            ctx->pc = 0x112970u;
            goto label_112970;
        }
    }
    ctx->pc = 0x112958u;
    // 0x112958: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x112958u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x11295c: 0x95630006  lhu         $v1, 0x6($t3)
    ctx->pc = 0x11295cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x112960: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x112964: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x112964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x112968: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x112968u;
    {
        const bool branch_taken_0x112968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11296Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112968u;
            // 0x11296c: 0x436021  addu        $t4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112968) {
            ctx->pc = 0x112974u;
            goto label_112974;
        }
    }
    ctx->pc = 0x112970u;
label_112970:
    // 0x112970: 0x244c7788  addiu       $t4, $v0, 0x7788
    ctx->pc = 0x112970u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_112974:
    // 0x112974: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x112974u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x112978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x112978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11297c: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x11297Cu;
    {
        const bool branch_taken_0x11297c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11297Cu;
            // 0x112980: 0x460038c6  mov.s       $f3, $f7 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11297c) {
            ctx->pc = 0x112CD8u;
            goto label_112cd8;
        }
    }
    ctx->pc = 0x112984u;
    // 0x112984: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11298c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11298cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x112990: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x112990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112994: 0x4600b886  mov.s       $f2, $f23
    ctx->pc = 0x112994u;
    ctx->f[2] = FPU_MOV_S(ctx->f[23]);
    // 0x112998: 0x46150143  div.s       $f5, $f0, $f21
    ctx->pc = 0x112998u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[21];
    // 0x11299c: 0x95680002  lhu         $t0, 0x2($t3)
    ctx->pc = 0x11299cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1129a0: 0x4601b800  add.s       $f0, $f23, $f1
    ctx->pc = 0x1129a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x1129a4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1129a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1129a8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1129a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1129ac: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1129acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1129b0: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1129b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x1129b4: 0x44062000  mfc1        $a2, $f4
    ctx->pc = 0x1129b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1129b8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1129b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1129bc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1129bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1129c0: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1129c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1129c4: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1129C4u;
    {
        const bool branch_taken_0x1129c4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1129C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1129C4u;
            // 0x1129c8: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129c4) {
            ctx->pc = 0x1129DCu;
            goto label_1129dc;
        }
    }
    ctx->pc = 0x1129CCu;
    // 0x1129cc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1129ccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1129d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1129d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1129d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1129d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1129d8: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x1129d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1129dc:
    // 0x1129dc: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1129DCu;
    {
        const bool branch_taken_0x1129dc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1129E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1129DCu;
            // 0x1129e0: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129dc) {
            ctx->pc = 0x1129F4u;
            goto label_1129f4;
        }
    }
    ctx->pc = 0x1129E4u;
    // 0x1129e4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1129e4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1129e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1129e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1129ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1129ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1129f0: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x1129f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1129f4:
    // 0x1129f4: 0xc4282a  slt         $a1, $a2, $a0
    ctx->pc = 0x1129f4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1129f8: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x1129f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1129fc: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x1129fcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x112a00: 0x64380a  movz        $a3, $v1, $a0
    ctx->pc = 0x112a00u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x112a04: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x112a04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x112a08: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x112a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x112a0c: 0xc75023  subu        $t2, $a2, $a3
    ctx->pc = 0x112a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x112a10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112a14: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x112a14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x112a18: 0x91890001  lbu         $t1, 0x1($t4)
    ctx->pc = 0x112a18u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x112a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112a20: 0xe1600  sll         $v0, $t6, 24
    ctx->pc = 0x112a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x112a24: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x112a24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x112a28: 0x15230003  bne         $t1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A28u;
    {
        const bool branch_taken_0x112a28 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x112A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112A28u;
            // 0x112a2c: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a28) {
            ctx->pc = 0x112A38u;
            goto label_112a38;
        }
    }
    ctx->pc = 0x112A30u;
    // 0x112a30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112A30u;
    {
        const bool branch_taken_0x112a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112A30u;
            // 0x112a34: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a30) {
            ctx->pc = 0x112A48u;
            goto label_112a48;
        }
    }
    ctx->pc = 0x112A38u;
label_112a38:
    // 0x112a38: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x112a38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x112a3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x112a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x112a40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x112a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x112a44: 0x1829821  addu        $s3, $t4, $v0
    ctx->pc = 0x112a44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_112a48:
    // 0x112a48: 0x1540003d  bnez        $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x112A48u;
    {
        const bool branch_taken_0x112a48 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x112A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112A48u;
            // 0x112a4c: 0x91a20003  lbu         $v0, 0x3($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a48) {
            ctx->pc = 0x112B40u;
            goto label_112b40;
        }
    }
    ctx->pc = 0x112A50u;
    // 0x112a50: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x112a50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x112a54: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x112a54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x112a58: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x112a58u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a5c: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x112a5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x112a60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x112a64: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x112a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x112a68: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x112a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x112a6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x112a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112a70: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x112a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x112a74: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x112a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x112a78: 0x95850002  lhu         $a1, 0x2($t4)
    ctx->pc = 0x112a78u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x112a7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112a80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x112a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x112a84: 0x91900000  lbu         $s0, 0x0($t4)
    ctx->pc = 0x112a84u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x112a88: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x112a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x112a8c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x112a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112a90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112a90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x112a94: 0x440f0800  mfc1        $t7, $f1
    ctx->pc = 0x112a94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x112a98: 0x150102b  sltu        $v0, $t2, $s0
    ctx->pc = 0x112a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x112a9c: 0x1040015a  beqz        $v0, . + 4 + (0x15A << 2)
    ctx->pc = 0x112A9Cu;
    {
        const bool branch_taken_0x112a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112A9Cu;
            // 0x112aa0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a9c) {
            ctx->pc = 0x113008u;
            goto label_113008;
        }
    }
    ctx->pc = 0x112AA4u;
    // 0x112aa4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x112aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_112aa8:
    // 0x112aa8: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x112aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x112aac: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x112aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x112ab0: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x112ab0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x112ab4: 0x50c0001d  beql        $a2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x112AB4u;
    {
        const bool branch_taken_0x112ab4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x112ab4) {
            ctx->pc = 0x112AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112AB4u;
            // 0x112ab8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112B2Cu;
            goto label_112b2c;
        }
    }
    ctx->pc = 0x112ABCu;
    // 0x112abc: 0x1d14021  addu        $t0, $t6, $s1
    ctx->pc = 0x112abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
label_112ac0:
    // 0x112ac0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x112ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x112ac4: 0x26e1821  addu        $v1, $s3, $t6
    ctx->pc = 0x112ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x112ac8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x112ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x112acc: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x112accu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112ad0: 0xc21826  xor         $v1, $a2, $v0
    ctx->pc = 0x112ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x112ad4: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x112ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x112ad8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x112ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x112adc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x112adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x112ae0: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x112ae0u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x112ae4: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x112ae4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x112ae8: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x112ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x112aec: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x112AECu;
    {
        const bool branch_taken_0x112aec = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x112AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112AECu;
            // 0x112af0: 0x81070000  lb          $a3, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112aec) {
            ctx->pc = 0x112B00u;
            goto label_112b00;
        }
    }
    ctx->pc = 0x112AF4u;
    // 0x112af4: 0x51023  negu        $v0, $a1
    ctx->pc = 0x112af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x112af8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x112AF8u;
    {
        const bool branch_taken_0x112af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112AF8u;
            // 0x112afc: 0x4f1004  sllv        $v0, $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112af8) {
            ctx->pc = 0x112B04u;
            goto label_112b04;
        }
    }
    ctx->pc = 0x112B00u;
label_112b00:
    // 0x112b00: 0xaf1007  srav        $v0, $t7, $a1
    ctx->pc = 0x112b00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 5) & 0x1F));
label_112b04:
    // 0x112b04: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x112b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x112b08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112b0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x112b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x112b10: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x112b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x112b14: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x112b14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x112b18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x112b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112b1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x112b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x112b20: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x112B20u;
    {
        const bool branch_taken_0x112b20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x112B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B20u;
            // 0x112b24: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b20) {
            ctx->pc = 0x112AC0u;
            runtime->cooperativeGuestYield();
            goto label_112ac0;
        }
    }
    ctx->pc = 0x112B28u;
    // 0x112b28: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x112b28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_112b2c:
    // 0x112b2c: 0x170102b  sltu        $v0, $t3, $s0
    ctx->pc = 0x112b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x112b30: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x112B30u;
    {
        const bool branch_taken_0x112b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B30u;
            // 0x112b34: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b30) {
            ctx->pc = 0x112AA8u;
            runtime->cooperativeGuestYield();
            goto label_112aa8;
        }
    }
    ctx->pc = 0x112B38u;
    // 0x112b38: 0x10000366  b           . + 4 + (0x366 << 2)
    ctx->pc = 0x112B38u;
    {
        const bool branch_taken_0x112b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B38u;
            // 0x112b3c: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b38) {
            ctx->pc = 0x1138D4u;
            goto label_1138d4;
        }
    }
    ctx->pc = 0x112B40u;
label_112b40:
    // 0x112b40: 0x1272818  mult        $a1, $t1, $a3
    ctx->pc = 0x112b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x112b44: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x112b44u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x112b48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x112b4c: 0x95830002  lhu         $v1, 0x2($t4)
    ctx->pc = 0x112b4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x112b50: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x112b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x112b54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112b5c: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x112b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x112b60: 0x45b021  addu        $s6, $v0, $a1
    ctx->pc = 0x112b60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x112b64: 0x5410011  bgez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x112B64u;
    {
        const bool branch_taken_0x112b64 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x112B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B64u;
            // 0x112b68: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b64) {
            ctx->pc = 0x112BACu;
            goto label_112bac;
        }
    }
    ctx->pc = 0x112B6Cu;
    // 0x112b6c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x112b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x112b70: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x112b70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x112b74: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x112b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x112b78: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x112b78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x112b7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112b80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x112b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112b84: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x112b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x112b88: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x112b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x112b8c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x112b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x112b90: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x112b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x112b94: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x112b94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x112b98: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x112b98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x112b9c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x112b9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x112ba0: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x112ba0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x112ba4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x112BA4u;
    {
        const bool branch_taken_0x112ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112BA4u;
            // 0x112ba8: 0x46000887  neg.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ba4) {
            ctx->pc = 0x112BE0u;
            goto label_112be0;
        }
    }
    ctx->pc = 0x112BACu;
label_112bac:
    // 0x112bac: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x112bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x112bb0: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x112bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x112bb4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x112bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x112bb8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x112bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x112bbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112bc0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x112bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x112bc4: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x112bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x112bc8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x112bc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x112bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x112bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112bd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x112bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x112bd4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x112bd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x112bd8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x112bd8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x112bdc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x112bdcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_112be0:
    // 0x112be0: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x112be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x112be4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112be8: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x112be8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bec: 0x91920000  lbu         $s2, 0x0($t4)
    ctx->pc = 0x112becu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x112bf0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x112bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x112bf4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x112bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x112bf8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112bf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x112bfc: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x112bfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x112c00: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112c00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x112c04: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x112c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x112c08: 0x124000ff  beqz        $s2, . + 4 + (0xFF << 2)
    ctx->pc = 0x112C08u;
    {
        const bool branch_taken_0x112c08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112C08u;
            // 0x112c0c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c08) {
            ctx->pc = 0x113008u;
            goto label_113008;
        }
    }
    ctx->pc = 0x112C10u;
    // 0x112c10: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x112c10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c14: 0x0  nop
    ctx->pc = 0x112c14u;
    // NOP
label_112c18:
    // 0x112c18: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x112c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x112c1c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x112c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x112c20: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x112c20u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x112c24: 0x50e00027  beql        $a3, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x112C24u;
    {
        const bool branch_taken_0x112c24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x112c24) {
            ctx->pc = 0x112C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112C24u;
            // 0x112c28: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112CC4u;
            goto label_112cc4;
        }
    }
    ctx->pc = 0x112C2Cu;
    // 0x112c2c: 0x1f54821  addu        $t1, $t7, $s5
    ctx->pc = 0x112c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 21)));
    // 0x112c30: 0x1f64021  addu        $t0, $t7, $s6
    ctx->pc = 0x112c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 22)));
    // 0x112c34: 0x0  nop
    ctx->pc = 0x112c34u;
    // NOP
label_112c38:
    // 0x112c38: 0x71023  negu        $v0, $a3
    ctx->pc = 0x112c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x112c3c: 0x26f1821  addu        $v1, $s3, $t7
    ctx->pc = 0x112c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x112c40: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x112c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x112c44: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x112c44u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112c48: 0xe21826  xor         $v1, $a3, $v0
    ctx->pc = 0x112c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x112c4c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x112c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x112c50: 0x21023  negu        $v0, $v0
    ctx->pc = 0x112c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x112c54: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x112c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x112c58: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x112c58u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x112c5c: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x112c5cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x112c60: 0x4c10007  bgez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x112C60u;
    {
        const bool branch_taken_0x112c60 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x112C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112C60u;
            // 0x112c64: 0x827023  subu        $t6, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c60) {
            ctx->pc = 0x112C80u;
            goto label_112c80;
        }
    }
    ctx->pc = 0x112C68u;
    // 0x112c68: 0x61023  negu        $v0, $a2
    ctx->pc = 0x112c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x112c6c: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x112c6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x112c70: 0x511804  sllv        $v1, $s1, $v0
    ctx->pc = 0x112c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x112c74: 0x81250000  lb          $a1, 0x0($t1)
    ctx->pc = 0x112c74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x112c78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112C78u;
    {
        const bool branch_taken_0x112c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112C78u;
            // 0x112c7c: 0x501004  sllv        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c78) {
            ctx->pc = 0x112C90u;
            goto label_112c90;
        }
    }
    ctx->pc = 0x112C80u;
label_112c80:
    // 0x112c80: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x112c80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x112c84: 0xd12807  srav        $a1, $s1, $a2
    ctx->pc = 0x112c84u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
    // 0x112c88: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x112c88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x112c8c: 0xd01007  srav        $v0, $s0, $a2
    ctx->pc = 0x112c8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 6) & 0x1F));
label_112c90:
    // 0x112c90: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x112c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x112c94: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x112c94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x112c98: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x112c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x112c9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x112c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x112ca0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x112ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x112ca4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x112ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x112ca8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x112ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112cac: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x112cacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x112cb0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x112cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x112cb4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112cb8: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x112CB8u;
    {
        const bool branch_taken_0x112cb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x112CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112CB8u;
            // 0x112cbc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cb8) {
            ctx->pc = 0x112C38u;
            runtime->cooperativeGuestYield();
            goto label_112c38;
        }
    }
    ctx->pc = 0x112CC0u;
    // 0x112cc0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x112cc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_112cc4:
    // 0x112cc4: 0x152102b  sltu        $v0, $t2, $s2
    ctx->pc = 0x112cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x112cc8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x112CC8u;
    {
        const bool branch_taken_0x112cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112CC8u;
            // 0x112ccc: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cc8) {
            ctx->pc = 0x112C18u;
            runtime->cooperativeGuestYield();
            goto label_112c18;
        }
    }
    ctx->pc = 0x112CD0u;
    // 0x112cd0: 0x10000300  b           . + 4 + (0x300 << 2)
    ctx->pc = 0x112CD0u;
    {
        const bool branch_taken_0x112cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112CD0u;
            // 0x112cd4: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cd0) {
            ctx->pc = 0x1138D4u;
            goto label_1138d4;
        }
    }
    ctx->pc = 0x112CD8u;
label_112cd8:
    // 0x112cd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112cdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x112cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112ce0: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x112ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x112ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112ce8: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x112ce8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x112cec: 0x95650002  lhu         $a1, 0x2($t3)
    ctx->pc = 0x112cecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x112cf0: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x112cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x112cf4: 0x95a40004  lhu         $a0, 0x4($t5)
    ctx->pc = 0x112cf4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x112cf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x112cf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x112cfc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112cfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x112d00: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x112d00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x112d04: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x112d04u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x112d08: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x112d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x112d0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x112D0Cu;
    {
        const bool branch_taken_0x112d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D0Cu;
            // 0x112d10: 0x4600b886  mov.s       $f2, $f23 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d0c) {
            ctx->pc = 0x112D28u;
            goto label_112d28;
        }
    }
    ctx->pc = 0x112D14u;
    // 0x112d14: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x112d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x112d18: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x112d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x112d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x112d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112d20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112d24: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x112d24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_112d28:
    // 0x112d28: 0x4c3000f  bgezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x112D28u;
    {
        const bool branch_taken_0x112d28 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x112d28) {
            ctx->pc = 0x112D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112D28u;
            // 0x112d2c: 0x95a20000  lhu         $v0, 0x0($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112D68u;
            goto label_112d68;
        }
    }
    ctx->pc = 0x112D30u;
    // 0x112d30: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x112D30u;
    {
        const bool branch_taken_0x112d30 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x112D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D30u;
            // 0x112d34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d30) {
            ctx->pc = 0x112D48u;
            goto label_112d48;
        }
    }
    ctx->pc = 0x112D38u;
    // 0x112d38: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x112d38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112d40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112D40u;
    {
        const bool branch_taken_0x112d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D40u;
            // 0x112d44: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d40) {
            ctx->pc = 0x112D64u;
            goto label_112d64;
        }
    }
    ctx->pc = 0x112D48u;
label_112d48:
    // 0x112d48: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x112d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x112d4c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x112d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x112d50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x112d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x112d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x112d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112d58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112d5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x112d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x112d60: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x112d60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_112d64:
    // 0x112d64: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x112d64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_112d68:
    // 0x112d68: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x112d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x112d6c: 0x8fa90054  lw          $t1, 0x54($sp)
    ctx->pc = 0x112d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x112d70: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x112d70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x112d74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112d78: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x112d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x112d7c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x112d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x112d80: 0x1224021  addu        $t0, $t1, $v0
    ctx->pc = 0x112d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x112d84: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x112d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x112d88: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112D88u;
    {
        const bool branch_taken_0x112d88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x112D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D88u;
            // 0x112d8c: 0x83380a  movz        $a3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d88) {
            ctx->pc = 0x112DA0u;
            goto label_112da0;
        }
    }
    ctx->pc = 0x112D90u;
    // 0x112d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x112d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112d94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112d98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112D98u;
    {
        const bool branch_taken_0x112d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D98u;
            // 0x112d9c: 0x461500c2  mul.s       $f3, $f0, $f21 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d98) {
            ctx->pc = 0x112DBCu;
            goto label_112dbc;
        }
    }
    ctx->pc = 0x112DA0u;
label_112da0:
    // 0x112da0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x112da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x112da4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x112da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x112da8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x112da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x112dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x112dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112db0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112db0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112db4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x112db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x112db8: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x112db8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_112dbc:
    // 0x112dbc: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x112dbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x112dc0: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x112DC0u;
    {
        const bool branch_taken_0x112dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112dc0) {
            ctx->pc = 0x112DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112DC0u;
            // 0x112dc4: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x112DECu;
            goto label_112dec;
        }
    }
    ctx->pc = 0x112DC8u;
    // 0x112dc8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x112dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x112dcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112dd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x112dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x112dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112dd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112ddc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x112ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x112de0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x112de0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x112de4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x112DE4u;
    {
        const bool branch_taken_0x112de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112DE4u;
            // 0x112de8: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112de4) {
            ctx->pc = 0x112DF0u;
            goto label_112df0;
        }
    }
    ctx->pc = 0x112DECu;
label_112dec:
    // 0x112dec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x112decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_112df0:
    // 0x112df0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x112df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x112df4: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x112df4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x112df8: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x112df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112dfc: 0x0  nop
    ctx->pc = 0x112dfcu;
    // NOP
    // 0x112e00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x112E00u;
    {
        const bool branch_taken_0x112e00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x112e00) {
            ctx->pc = 0x112E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112E00u;
            // 0x112e04: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x112E08u;
            goto label_112e08;
        }
    }
    ctx->pc = 0x112E08u;
label_112e08:
    // 0x112e08: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x112E08u;
    {
        const bool branch_taken_0x112e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112e08) {
            ctx->pc = 0x112F30u;
            goto label_112f30;
        }
    }
    ctx->pc = 0x112E10u;
    // 0x112e10: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x112e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x112e14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x112e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112e18: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x112e18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x112e1c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x112e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112e20: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x112E20u;
    {
        const bool branch_taken_0x112e20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x112e20) {
            ctx->pc = 0x112F30u;
            goto label_112f30;
        }
    }
    ctx->pc = 0x112E28u;
    // 0x112e28: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x112e28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x112e2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112e30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112e34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x112e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112e38: 0x0  nop
    ctx->pc = 0x112e38u;
    // NOP
    // 0x112e3c: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x112E3Cu;
    {
        const bool branch_taken_0x112e3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x112E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112E3Cu;
            // 0x112e40: 0x62040  sll         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e3c) {
            ctx->pc = 0x112F30u;
            goto label_112f30;
        }
    }
    ctx->pc = 0x112E44u;
    // 0x112e44: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x112e44u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x112e48: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x112e48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x112e4c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x112e4cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e50: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x112e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x112e54: 0x95660006  lhu         $a2, 0x6($t3)
    ctx->pc = 0x112e54u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x112e58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x112e5c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x112e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x112e60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112e64: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x112e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x112e68: 0x95830002  lhu         $v1, 0x2($t4)
    ctx->pc = 0x112e68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x112e6c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x112e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x112e70: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x112e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x112e74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112e78: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x112e78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x112e7c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x112e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112e80: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x112e80u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x112e84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112e84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x112e88: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x112e88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x112e8c: 0x2058821  addu        $s1, $s0, $a1
    ctx->pc = 0x112e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x112e90: 0x11e0005d  beqz        $t7, . + 4 + (0x5D << 2)
    ctx->pc = 0x112E90u;
    {
        const bool branch_taken_0x112e90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112E90u;
            // 0x112e94: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e90) {
            ctx->pc = 0x113008u;
            goto label_113008;
        }
    }
    ctx->pc = 0x112E98u;
    // 0x112e98: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x112e98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e9c: 0x0  nop
    ctx->pc = 0x112e9cu;
    // NOP
label_112ea0:
    // 0x112ea0: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x112ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x112ea4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x112ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x112ea8: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x112ea8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x112eac: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x112EACu;
    {
        const bool branch_taken_0x112eac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x112EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112EACu;
            // 0x112eb0: 0xe1040  sll         $v0, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112eac) {
            ctx->pc = 0x112F18u;
            goto label_112f18;
        }
    }
    ctx->pc = 0x112EB4u;
    // 0x112eb4: 0x504821  addu        $t1, $v0, $s0
    ctx->pc = 0x112eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x112eb8: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x112eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x112ebc: 0x0  nop
    ctx->pc = 0x112ebcu;
    // NOP
label_112ec0:
    // 0x112ec0: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x112ec0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x112ec4: 0x71023  negu        $v0, $a3
    ctx->pc = 0x112ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x112ec8: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x112ec8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x112ecc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x112eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x112ed0: 0x22023  negu        $a0, $v0
    ctx->pc = 0x112ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x112ed4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x112ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x112ed8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x112ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x112edc: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x112edcu;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x112ee0: 0xb22818  mult        $a1, $a1, $s2
    ctx->pc = 0x112ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x112ee4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x112ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x112ee8: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x112ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x112eec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112ef0: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x112ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x112ef4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x112ef8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x112ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x112efc: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x112efcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x112f00: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x112f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x112f04: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x112f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x112f08: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x112f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x112f0c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x112f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x112f10: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x112F10u;
    {
        const bool branch_taken_0x112f10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x112F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112F10u;
            // 0x112f14: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f10) {
            ctx->pc = 0x112EC0u;
            runtime->cooperativeGuestYield();
            goto label_112ec0;
        }
    }
    ctx->pc = 0x112F18u;
label_112f18:
    // 0x112f18: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x112f18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x112f1c: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x112f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x112f20: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x112F20u;
    {
        const bool branch_taken_0x112f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112F20u;
            // 0x112f24: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f20) {
            ctx->pc = 0x112EA0u;
            runtime->cooperativeGuestYield();
            goto label_112ea0;
        }
    }
    ctx->pc = 0x112F28u;
    // 0x112f28: 0x1000026a  b           . + 4 + (0x26A << 2)
    ctx->pc = 0x112F28u;
    {
        const bool branch_taken_0x112f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112F28u;
            // 0x112f2c: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f28) {
            ctx->pc = 0x1138D4u;
            goto label_1138d4;
        }
    }
    ctx->pc = 0x112F30u;
label_112f30:
    // 0x112f30: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x112f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x112f34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112f38: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x112f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112f3c: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x112f3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x112f40: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x112f40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x112f44: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x112f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x112f48: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x112f48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x112f4c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x112f4cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x112f50: 0x95660006  lhu         $a2, 0x6($t3)
    ctx->pc = 0x112f50u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x112f54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112f54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x112f58: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x112f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x112f5c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x112f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x112f60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x112f64: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x112f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x112f68: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x112f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x112f6c: 0x95840002  lhu         $a0, 0x2($t4)
    ctx->pc = 0x112f6cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x112f70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x112f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x112f74: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x112f74u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x112f78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x112f78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112f80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x112f80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f84: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x112f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x112f88: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x112f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x112f8c: 0x25840004  addiu       $a0, $t4, 0x4
    ctx->pc = 0x112f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x112f90: 0x11c0001d  beqz        $t6, . + 4 + (0x1D << 2)
    ctx->pc = 0x112F90u;
    {
        const bool branch_taken_0x112f90 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112F90u;
            // 0x112f94: 0x437821  addu        $t7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f90) {
            ctx->pc = 0x113008u;
            goto label_113008;
        }
    }
    ctx->pc = 0x112F98u;
    // 0x112f98: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x112f98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f9c: 0x0  nop
    ctx->pc = 0x112f9cu;
    // NOP
label_112fa0:
    // 0x112fa0: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x112fa0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x112fa4: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x112FA4u;
    {
        const bool branch_taken_0x112fa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x112FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112FA4u;
            // 0x112fa8: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fa4) {
            ctx->pc = 0x112FF4u;
            goto label_112ff4;
        }
    }
    ctx->pc = 0x112FACu;
    // 0x112fac: 0x4f3821  addu        $a3, $v0, $t7
    ctx->pc = 0x112facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_112fb0:
    // 0x112fb0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x112fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x112fb4: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x112fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x112fb8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x112fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x112fbc: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x112fbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x112fc0: 0x21823  negu        $v1, $v0
    ctx->pc = 0x112fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x112fc4: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x112fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x112fc8: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x112fc8u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x112fcc: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x112fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x112fd0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x112fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x112fd4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x112fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x112fd8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x112fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x112fdc: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x112fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x112fe0: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x112fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x112fe4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x112fe4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x112fe8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x112fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x112fec: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112FECu;
    {
        const bool branch_taken_0x112fec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x112FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112FECu;
            // 0x112ff0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fec) {
            ctx->pc = 0x112FB0u;
            runtime->cooperativeGuestYield();
            goto label_112fb0;
        }
    }
    ctx->pc = 0x112FF4u;
label_112ff4:
    // 0x112ff4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x112ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x112ff8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x112ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x112ffc: 0x14e102b  sltu        $v0, $t2, $t6
    ctx->pc = 0x112ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x113000: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x113000u;
    {
        const bool branch_taken_0x113000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113000u;
            // 0x113004: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113000) {
            ctx->pc = 0x112FA0u;
            runtime->cooperativeGuestYield();
            goto label_112fa0;
        }
    }
    ctx->pc = 0x113008u;
label_113008:
    // 0x113008: 0x10000232  b           . + 4 + (0x232 << 2)
    ctx->pc = 0x113008u;
    {
        const bool branch_taken_0x113008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113008u;
            // 0x11300c: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113008) {
            ctx->pc = 0x1138D4u;
            goto label_1138d4;
        }
    }
    ctx->pc = 0x113010u;
label_113010:
    // 0x113010: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x113010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x113014: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x113014u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x113018: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x113018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11301c: 0x91a30002  lbu         $v1, 0x2($t5)
    ctx->pc = 0x11301cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x113020: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x113020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x113024: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x113024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x113028: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113028u;
    {
        const bool branch_taken_0x113028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113028u;
            // 0x11302c: 0x44b021  addu        $s6, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113028) {
            ctx->pc = 0x113044u;
            goto label_113044;
        }
    }
    ctx->pc = 0x113030u;
    // 0x113030: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x113030u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x113034: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x113034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x113038: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x113038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x11303c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11303Cu;
    {
        const bool branch_taken_0x11303c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11303Cu;
            // 0x113040: 0x2c27021  addu        $t6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11303c) {
            ctx->pc = 0x11304Cu;
            goto label_11304c;
        }
    }
    ctx->pc = 0x113044u;
label_113044:
    // 0x113044: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x113044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x113048: 0x244e7788  addiu       $t6, $v0, 0x7788
    ctx->pc = 0x113048u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_11304c:
    // 0x11304c: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x11304cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x113050: 0x26c30002  addiu       $v1, $s6, 0x2
    ctx->pc = 0x113050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x113054: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x113054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x113058: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x113058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11305c: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x11305Cu;
    {
        const bool branch_taken_0x11305c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11305Cu;
            // 0x113060: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11305c) {
            ctx->pc = 0x1134A4u;
            goto label_1134a4;
        }
    }
    ctx->pc = 0x113064u;
    // 0x113064: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x113064u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_113068:
    // 0x113068: 0x46173834  c.lt.s      $f7, $f23
    ctx->pc = 0x113068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11306c: 0x0  nop
    ctx->pc = 0x11306cu;
    // NOP
    // 0x113070: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x113070u;
    {
        const bool branch_taken_0x113070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113070u;
            // 0x113074: 0x95840002  lhu         $a0, 0x2($t4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113070) {
            ctx->pc = 0x1130D0u;
            goto label_1130d0;
        }
    }
    ctx->pc = 0x113078u;
    // 0x113078: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x113078u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11307c: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x11307cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x113080: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113084: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x113084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x113088: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x113088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11308c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113094: 0x46023840  add.s       $f1, $f7, $f2
    ctx->pc = 0x113094u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x113098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11309c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11309cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1130a0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1130a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1130a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1130a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1130a8: 0x0  nop
    ctx->pc = 0x1130a8u;
    // NOP
    // 0x1130ac: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1130ACu;
    {
        const bool branch_taken_0x1130ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1130B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1130ACu;
            // 0x1130b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130ac) {
            ctx->pc = 0x11312Cu;
            goto label_11312c;
        }
    }
    ctx->pc = 0x1130B4u;
    // 0x1130b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1130b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1130b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1130b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1130bc: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x1130bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x1130c0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1130c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1130c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1130c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1130c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1130C8u;
    {
        const bool branch_taken_0x1130c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1130c8) {
            ctx->pc = 0x113124u;
            goto label_113124;
        }
    }
    ctx->pc = 0x1130D0u;
label_1130d0:
    // 0x1130d0: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1130d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1130d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1130d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1130d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1130d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1130dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1130dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1130e0: 0x46023841  sub.s       $f1, $f7, $f2
    ctx->pc = 0x1130e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x1130e4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1130e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1130e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1130e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1130ec: 0x0  nop
    ctx->pc = 0x1130ecu;
    // NOP
    // 0x1130f0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1130F0u;
    {
        const bool branch_taken_0x1130f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1130F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1130F0u;
            // 0x1130f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130f0) {
            ctx->pc = 0x11312Cu;
            goto label_11312c;
        }
    }
    ctx->pc = 0x1130F8u;
    // 0x1130f8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x1130f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1130fc: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x1130fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x113100: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x113100u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x113104: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11310c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113114: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113118: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11311c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11311cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113120: 0x0  nop
    ctx->pc = 0x113120u;
    // NOP
label_113124:
    // 0x113124: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x113124u;
    {
        const bool branch_taken_0x113124 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x113124) {
            ctx->pc = 0x113128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113124u;
            // 0x113128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11312Cu;
            goto label_11312c;
        }
    }
    ctx->pc = 0x11312Cu;
label_11312c:
    // 0x11312c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11312cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113130: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x113130u;
    {
        const bool branch_taken_0x113130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113130u;
            // 0x113134: 0x460038c6  mov.s       $f3, $f7 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113130) {
            ctx->pc = 0x113490u;
            goto label_113490;
        }
    }
    ctx->pc = 0x113138u;
    // 0x113138: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11313c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11313cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113140: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x113140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x113144: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113148: 0x4600b886  mov.s       $f2, $f23
    ctx->pc = 0x113148u;
    ctx->f[2] = FPU_MOV_S(ctx->f[23]);
    // 0x11314c: 0x46150143  div.s       $f5, $f0, $f21
    ctx->pc = 0x11314cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[21];
    // 0x113150: 0x95880002  lhu         $t0, 0x2($t4)
    ctx->pc = 0x113150u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x113154: 0x4601b800  add.s       $f0, $f23, $f1
    ctx->pc = 0x113154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x113158: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x113158u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11315c: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x11315cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x113160: 0x95840000  lhu         $a0, 0x0($t4)
    ctx->pc = 0x113160u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x113164: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x113164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x113168: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x113168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11316c: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11316cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x113170: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x113170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x113174: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x113178: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x113178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x11317c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x11317cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x113180: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x113180u;
    {
        const bool branch_taken_0x113180 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x113184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113180u;
            // 0x113184: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113180) {
            ctx->pc = 0x113198u;
            goto label_113198;
        }
    }
    ctx->pc = 0x113188u;
    // 0x113188: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x113188u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11318c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11318cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113190: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113194: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x113194u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_113198:
    // 0x113198: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x113198u;
    {
        const bool branch_taken_0x113198 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11319Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113198u;
            // 0x11319c: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113198) {
            ctx->pc = 0x1131B0u;
            goto label_1131b0;
        }
    }
    ctx->pc = 0x1131A0u;
    // 0x1131a0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1131a0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1131a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1131a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1131a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1131a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131ac: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x1131acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1131b0:
    // 0x1131b0: 0xc4282a  slt         $a1, $a2, $a0
    ctx->pc = 0x1131b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1131b4: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x1131b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1131b8: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x1131b8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1131bc: 0x64380a  movz        $a3, $v1, $a0
    ctx->pc = 0x1131bcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x1131c0: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x1131c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1131c4: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1131c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1131c8: 0xc75023  subu        $t2, $a2, $a3
    ctx->pc = 0x1131c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1131cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1131ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1131d0: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x1131d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1131d4: 0x91c90001  lbu         $t1, 0x1($t6)
    ctx->pc = 0x1131d4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x1131d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1131d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1131dc: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x1131dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x1131e0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1131e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1131e4: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x1131e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x1131e8: 0x15230003  bne         $t1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1131E8u;
    {
        const bool branch_taken_0x1131e8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x1131ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1131E8u;
            // 0x1131ec: 0xa3a20030  sb          $v0, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131e8) {
            ctx->pc = 0x1131F8u;
            goto label_1131f8;
        }
    }
    ctx->pc = 0x1131F0u;
    // 0x1131f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1131F0u;
    {
        const bool branch_taken_0x1131f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1131F0u;
            // 0x1131f4: 0x27b50030  addiu       $s5, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131f0) {
            ctx->pc = 0x113208u;
            goto label_113208;
        }
    }
    ctx->pc = 0x1131F8u;
label_1131f8:
    // 0x1131f8: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x1131f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1131fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1131fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x113200: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x113200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x113204: 0x1c2a821  addu        $s5, $t6, $v0
    ctx->pc = 0x113204u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_113208:
    // 0x113208: 0x1540003d  bnez        $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x113208u;
    {
        const bool branch_taken_0x113208 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x11320Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113208u;
            // 0x11320c: 0x91a20003  lbu         $v0, 0x3($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113208) {
            ctx->pc = 0x113300u;
            goto label_113300;
        }
    }
    ctx->pc = 0x113210u;
    // 0x113210: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x113210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x113214: 0x91c30001  lbu         $v1, 0x1($t6)
    ctx->pc = 0x113214u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x113218: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x113218u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11321c: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x11321cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x113220: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x113220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x113224: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x113224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x113228: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x113228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x11322c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11322cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113230: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x113230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x113234: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x113234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x113238: 0x95c50002  lhu         $a1, 0x2($t6)
    ctx->pc = 0x113238u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x11323c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x113240: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x113240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x113244: 0x91d10000  lbu         $s1, 0x0($t6)
    ctx->pc = 0x113244u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x113248: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x113248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11324c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x11324cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113250: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x113254: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x113254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x113258: 0x151102b  sltu        $v0, $t2, $s1
    ctx->pc = 0x113258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11325c: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x11325Cu;
    {
        const bool branch_taken_0x11325c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11325Cu;
            // 0x113260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11325c) {
            ctx->pc = 0x113490u;
            goto label_113490;
        }
    }
    ctx->pc = 0x113264u;
    // 0x113264: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x113264u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_113268:
    // 0x113268: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x113268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x11326c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x11326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x113270: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x113270u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x113274: 0x50c0001d  beql        $a2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x113274u;
    {
        const bool branch_taken_0x113274 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x113274) {
            ctx->pc = 0x113278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113274u;
            // 0x113278: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1132ECu;
            goto label_1132ec;
        }
    }
    ctx->pc = 0x11327Cu;
    // 0x11327c: 0x1f34021  addu        $t0, $t7, $s3
    ctx->pc = 0x11327cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
label_113280:
    // 0x113280: 0x61023  negu        $v0, $a2
    ctx->pc = 0x113280u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x113284: 0x2af1821  addu        $v1, $s5, $t7
    ctx->pc = 0x113284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    // 0x113288: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x113288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11328c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x11328cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113290: 0xc21826  xor         $v1, $a2, $v0
    ctx->pc = 0x113290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x113294: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x113294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x113298: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x113298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x11329c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11329cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1132a0: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x1132a0u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x1132a4: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x1132a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1132a8: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1132a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1132ac: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1132ACu;
    {
        const bool branch_taken_0x1132ac = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1132B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1132ACu;
            // 0x1132b0: 0x81070000  lb          $a3, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132ac) {
            ctx->pc = 0x1132C0u;
            goto label_1132c0;
        }
    }
    ctx->pc = 0x1132B4u;
    // 0x1132b4: 0x51023  negu        $v0, $a1
    ctx->pc = 0x1132b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1132b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1132B8u;
    {
        const bool branch_taken_0x1132b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1132B8u;
            // 0x1132bc: 0x501004  sllv        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132b8) {
            ctx->pc = 0x1132C4u;
            goto label_1132c4;
        }
    }
    ctx->pc = 0x1132C0u;
label_1132c0:
    // 0x1132c0: 0xb01007  srav        $v0, $s0, $a1
    ctx->pc = 0x1132c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
label_1132c4:
    // 0x1132c4: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x1132c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1132c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1132c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1132cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1132ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1132d0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1132d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1132d4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1132d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1132d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1132d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1132dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1132dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1132e0: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1132E0u;
    {
        const bool branch_taken_0x1132e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1132E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1132E0u;
            // 0x1132e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132e0) {
            ctx->pc = 0x113280u;
            runtime->cooperativeGuestYield();
            goto label_113280;
        }
    }
    ctx->pc = 0x1132E8u;
    // 0x1132e8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1132e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1132ec:
    // 0x1132ec: 0x171102b  sltu        $v0, $t3, $s1
    ctx->pc = 0x1132ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1132f0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1132F0u;
    {
        const bool branch_taken_0x1132f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1132F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1132F0u;
            // 0x1132f4: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132f0) {
            ctx->pc = 0x113268u;
            runtime->cooperativeGuestYield();
            goto label_113268;
        }
    }
    ctx->pc = 0x1132F8u;
    // 0x1132f8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1132F8u;
    {
        const bool branch_taken_0x1132f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1132F8u;
            // 0x1132fc: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132f8) {
            ctx->pc = 0x113494u;
            goto label_113494;
        }
    }
    ctx->pc = 0x113300u;
label_113300:
    // 0x113300: 0x1272818  mult        $a1, $t1, $a3
    ctx->pc = 0x113300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x113304: 0x95640006  lhu         $a0, 0x6($t3)
    ctx->pc = 0x113304u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x113308: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x113308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11330c: 0x95c30002  lhu         $v1, 0x2($t6)
    ctx->pc = 0x11330cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x113310: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x113310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x113314: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x113314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x113318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11331c: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x11331cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x113320: 0x45c821  addu        $t9, $v0, $a1
    ctx->pc = 0x113320u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x113324: 0x5410011  bgez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x113324u;
    {
        const bool branch_taken_0x113324 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x113328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113324u;
            // 0x113328: 0x62c021  addu        $t8, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113324) {
            ctx->pc = 0x11336Cu;
            goto label_11336c;
        }
    }
    ctx->pc = 0x11332Cu;
    // 0x11332c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x11332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x113330: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x113330u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x113334: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x113334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x113338: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x113338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x11333c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11333cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113344: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x113344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x113348: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x113348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x11334c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x11334cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x113350: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x113350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x113354: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x113354u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x113358: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x113358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11335c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11335cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x113360: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x113360u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x113364: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x113364u;
    {
        const bool branch_taken_0x113364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113364u;
            // 0x113368: 0x46000887  neg.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113364) {
            ctx->pc = 0x1133A0u;
            goto label_1133a0;
        }
    }
    ctx->pc = 0x11336Cu;
label_11336c:
    // 0x11336c: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x11336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x113370: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x113370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x113374: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x113374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x113378: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x113378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x11337c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11337cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113380: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x113380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x113384: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x113384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x113388: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x113388u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x11338c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11338cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113390: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x113390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x113394: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x113394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x113398: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x113398u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x11339c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x11339cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1133a0:
    // 0x1133a0: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x1133a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x1133a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1133a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1133a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1133a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133ac: 0x91d40000  lbu         $s4, 0x0($t6)
    ctx->pc = 0x1133acu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1133b0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1133b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1133b4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1133b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1133b8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1133b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1133bc: 0x44131000  mfc1        $s3, $f2
    ctx->pc = 0x1133bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1133c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1133c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1133c4: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1133c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1133c8: 0x12800031  beqz        $s4, . + 4 + (0x31 << 2)
    ctx->pc = 0x1133C8u;
    {
        const bool branch_taken_0x1133c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1133CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1133C8u;
            // 0x1133cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133c8) {
            ctx->pc = 0x113490u;
            goto label_113490;
        }
    }
    ctx->pc = 0x1133D0u;
    // 0x1133d0: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x1133d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133d4: 0x0  nop
    ctx->pc = 0x1133d4u;
    // NOP
label_1133d8:
    // 0x1133d8: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x1133d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1133dc: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x1133dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1133e0: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x1133e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1133e4: 0x50e00027  beql        $a3, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1133E4u;
    {
        const bool branch_taken_0x1133e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1133e4) {
            ctx->pc = 0x1133E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1133E4u;
            // 0x1133e8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113484u;
            goto label_113484;
        }
    }
    ctx->pc = 0x1133ECu;
    // 0x1133ec: 0x2184821  addu        $t1, $s0, $t8
    ctx->pc = 0x1133ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x1133f0: 0x2194021  addu        $t0, $s0, $t9
    ctx->pc = 0x1133f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x1133f4: 0x0  nop
    ctx->pc = 0x1133f4u;
    // NOP
label_1133f8:
    // 0x1133f8: 0x71023  negu        $v0, $a3
    ctx->pc = 0x1133f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x1133fc: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x1133fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x113400: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x113400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x113404: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x113404u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113408: 0xe21826  xor         $v1, $a3, $v0
    ctx->pc = 0x113408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x11340c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x11340cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x113410: 0x21023  negu        $v0, $v0
    ctx->pc = 0x113410u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x113414: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x113414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x113418: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x113418u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x11341c: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x11341cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x113420: 0x4c10007  bgez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x113420u;
    {
        const bool branch_taken_0x113420 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x113424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113420u;
            // 0x113424: 0x827823  subu        $t7, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113420) {
            ctx->pc = 0x113440u;
            goto label_113440;
        }
    }
    ctx->pc = 0x113428u;
    // 0x113428: 0x61023  negu        $v0, $a2
    ctx->pc = 0x113428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11342c: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x11342cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x113430: 0x531804  sllv        $v1, $s3, $v0
    ctx->pc = 0x113430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x113434: 0x81250000  lb          $a1, 0x0($t1)
    ctx->pc = 0x113434u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x113438: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x113438u;
    {
        const bool branch_taken_0x113438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113438u;
            // 0x11343c: 0x511004  sllv        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113438) {
            ctx->pc = 0x113450u;
            goto label_113450;
        }
    }
    ctx->pc = 0x113440u;
label_113440:
    // 0x113440: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x113440u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x113444: 0xd32807  srav        $a1, $s3, $a2
    ctx->pc = 0x113444u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x113448: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x113448u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11344c: 0xd11007  srav        $v0, $s1, $a2
    ctx->pc = 0x11344cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
label_113450:
    // 0x113450: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x113450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x113454: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x113454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x113458: 0xf1880  sll         $v1, $t7, 2
    ctx->pc = 0x113458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x11345c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11345cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x113460: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x113460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x113464: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x113464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x113468: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x113468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11346c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11346cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x113470: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x113470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x113474: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x113474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x113478: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x113478u;
    {
        const bool branch_taken_0x113478 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113478u;
            // 0x11347c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113478) {
            ctx->pc = 0x1133F8u;
            runtime->cooperativeGuestYield();
            goto label_1133f8;
        }
    }
    ctx->pc = 0x113480u;
    // 0x113480: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x113480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_113484:
    // 0x113484: 0x154102b  sltu        $v0, $t2, $s4
    ctx->pc = 0x113484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x113488: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x113488u;
    {
        const bool branch_taken_0x113488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11348Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113488u;
            // 0x11348c: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113488) {
            ctx->pc = 0x1133D8u;
            runtime->cooperativeGuestYield();
            goto label_1133d8;
        }
    }
    ctx->pc = 0x113490u;
label_113490:
    // 0x113490: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x113490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_113494:
    // 0x113494: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x113494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x113498: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x113498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11349c: 0x1440fef2  bnez        $v0, . + 4 + (-0x10E << 2)
    ctx->pc = 0x11349Cu;
    {
        const bool branch_taken_0x11349c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1134A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11349Cu;
            // 0x1134a0: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11349c) {
            ctx->pc = 0x113068u;
            runtime->cooperativeGuestYield();
            goto label_113068;
        }
    }
    ctx->pc = 0x1134A4u;
label_1134a4:
    // 0x1134a4: 0x92d60001  lbu         $s6, 0x1($s6)
    ctx->pc = 0x1134a4u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x1134a8: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x1134a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1134ac: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x1134ACu;
    {
        const bool branch_taken_0x1134ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1134ACu;
            // 0x1134b0: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134ac) {
            ctx->pc = 0x1138D0u;
            goto label_1138d0;
        }
    }
    ctx->pc = 0x1134B4u;
    // 0x1134b4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1134b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1134b8: 0x446021  addu        $t4, $v0, $a0
    ctx->pc = 0x1134b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1134bc: 0x0  nop
    ctx->pc = 0x1134bcu;
    // NOP
label_1134c0:
    // 0x1134c0: 0x46173834  c.lt.s      $f7, $f23
    ctx->pc = 0x1134c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1134c4: 0x0  nop
    ctx->pc = 0x1134c4u;
    // NOP
    // 0x1134c8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1134C8u;
    {
        const bool branch_taken_0x1134c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1134CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1134C8u;
            // 0x1134cc: 0x95840002  lhu         $a0, 0x2($t4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134c8) {
            ctx->pc = 0x113528u;
            goto label_113528;
        }
    }
    ctx->pc = 0x1134D0u;
    // 0x1134d0: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x1134d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1134d4: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x1134d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1134d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1134d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1134dc: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1134dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1134e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1134e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1134e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1134e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1134e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1134e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1134ec: 0x46023840  add.s       $f1, $f7, $f2
    ctx->pc = 0x1134ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x1134f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1134f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1134f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1134f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1134f8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1134f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1134fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1134fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113500: 0x0  nop
    ctx->pc = 0x113500u;
    // NOP
    // 0x113504: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x113504u;
    {
        const bool branch_taken_0x113504 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113504u;
            // 0x113508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113504) {
            ctx->pc = 0x113584u;
            goto label_113584;
        }
    }
    ctx->pc = 0x11350Cu;
    // 0x11350c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11350cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113510: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113514: 0x4602b840  add.s       $f1, $f23, $f2
    ctx->pc = 0x113514u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x113518: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11351c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11351cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113520: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x113520u;
    {
        const bool branch_taken_0x113520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113520) {
            ctx->pc = 0x11357Cu;
            goto label_11357c;
        }
    }
    ctx->pc = 0x113528u;
label_113528:
    // 0x113528: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x113528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11352c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11352cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113530: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x113530u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113534: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113538: 0x46023841  sub.s       $f1, $f7, $f2
    ctx->pc = 0x113538u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x11353c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x11353cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113540: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x113540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113544: 0x0  nop
    ctx->pc = 0x113544u;
    // NOP
    // 0x113548: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x113548u;
    {
        const bool branch_taken_0x113548 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11354Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113548u;
            // 0x11354c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113548) {
            ctx->pc = 0x113584u;
            goto label_113584;
        }
    }
    ctx->pc = 0x113550u;
    // 0x113550: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x113550u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x113554: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x113554u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x113558: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x113558u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x11355c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113564: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11356c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11356cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113570: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113574: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x113574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113578: 0x0  nop
    ctx->pc = 0x113578u;
    // NOP
label_11357c:
    // 0x11357c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11357Cu;
    {
        const bool branch_taken_0x11357c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11357c) {
            ctx->pc = 0x113580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11357Cu;
            // 0x113580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113584u;
            goto label_113584;
        }
    }
    ctx->pc = 0x113584u;
label_113584:
    // 0x113584: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x113584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113588: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x113588u;
    {
        const bool branch_taken_0x113588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113588u;
            // 0x11358c: 0x4600b886  mov.s       $f2, $f23 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113588) {
            ctx->pc = 0x1138C0u;
            goto label_1138c0;
        }
    }
    ctx->pc = 0x113590u;
    // 0x113590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113594: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113598: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x113598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11359c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11359cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1135a0: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x1135a0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x1135a4: 0x95850002  lhu         $a1, 0x2($t4)
    ctx->pc = 0x1135a4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x1135a8: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x1135a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1135ac: 0x95840000  lhu         $a0, 0x0($t4)
    ctx->pc = 0x1135acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1135b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1135b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1135b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1135b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1135b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1135b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1135bc: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x1135bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1135c0: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x1135c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1135c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1135C4u;
    {
        const bool branch_taken_0x1135c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1135C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1135C4u;
            // 0x1135c8: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135c4) {
            ctx->pc = 0x1135E0u;
            goto label_1135e0;
        }
    }
    ctx->pc = 0x1135CCu;
    // 0x1135cc: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x1135ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1135d0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1135d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1135d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1135d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1135d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1135d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1135dc: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x1135dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1135e0:
    // 0x1135e0: 0x4c3000f  bgezl       $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1135E0u;
    {
        const bool branch_taken_0x1135e0 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1135e0) {
            ctx->pc = 0x1135E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1135E0u;
            // 0x1135e4: 0x95a20000  lhu         $v0, 0x0($t5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113620u;
            goto label_113620;
        }
    }
    ctx->pc = 0x1135E8u;
    // 0x1135e8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1135E8u;
    {
        const bool branch_taken_0x1135e8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1135ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1135E8u;
            // 0x1135ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135e8) {
            ctx->pc = 0x113600u;
            goto label_113600;
        }
    }
    ctx->pc = 0x1135F0u;
    // 0x1135f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1135f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1135f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1135f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1135f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1135F8u;
    {
        const bool branch_taken_0x1135f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1135FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1135F8u;
            // 0x1135fc: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135f8) {
            ctx->pc = 0x11361Cu;
            goto label_11361c;
        }
    }
    ctx->pc = 0x113600u;
label_113600:
    // 0x113600: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x113600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x113604: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x113604u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x113608: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11360c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11360cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113610: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113614: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x113614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x113618: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x113618u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_11361c:
    // 0x11361c: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x11361cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_113620:
    // 0x113620: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x113620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x113624: 0x8fa90054  lw          $t1, 0x54($sp)
    ctx->pc = 0x113624u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x113628: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x113628u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11362c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11362cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113630: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x113630u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x113634: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x113634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113638: 0x122a821  addu        $s5, $t1, $v0
    ctx->pc = 0x113638u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11363c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x11363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x113640: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113640u;
    {
        const bool branch_taken_0x113640 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x113644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113640u;
            // 0x113644: 0x83380a  movz        $a3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113640) {
            ctx->pc = 0x113658u;
            goto label_113658;
        }
    }
    ctx->pc = 0x113648u;
    // 0x113648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11364c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11364cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113650: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x113650u;
    {
        const bool branch_taken_0x113650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113650u;
            // 0x113654: 0x461500c2  mul.s       $f3, $f0, $f21 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113650) {
            ctx->pc = 0x113674u;
            goto label_113674;
        }
    }
    ctx->pc = 0x113658u;
label_113658:
    // 0x113658: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x113658u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x11365c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11365cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x113660: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11366c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11366cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x113670: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x113670u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_113674:
    // 0x113674: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x113674u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x113678: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x113678u;
    {
        const bool branch_taken_0x113678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113678) {
            ctx->pc = 0x11367Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113678u;
            // 0x11367c: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1136A4u;
            goto label_1136a4;
        }
    }
    ctx->pc = 0x113680u;
    // 0x113680: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x113680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x113684: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113688: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11368c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11368cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113690: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113694: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x113694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x113698: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x113698u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x11369c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11369Cu;
    {
        const bool branch_taken_0x11369c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11369Cu;
            // 0x1136a0: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11369c) {
            ctx->pc = 0x1136A8u;
            goto label_1136a8;
        }
    }
    ctx->pc = 0x1136A4u;
label_1136a4:
    // 0x1136a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1136a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1136a8:
    // 0x1136a8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1136a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1136ac: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1136acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1136b0: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1136b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1136b4: 0x0  nop
    ctx->pc = 0x1136b4u;
    // NOP
    // 0x1136b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1136B8u;
    {
        const bool branch_taken_0x1136b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1136b8) {
            ctx->pc = 0x1136BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1136B8u;
            // 0x1136bc: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1136C0u;
            goto label_1136c0;
        }
    }
    ctx->pc = 0x1136C0u;
label_1136c0:
    // 0x1136c0: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1136C0u;
    {
        const bool branch_taken_0x1136c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1136c0) {
            ctx->pc = 0x1137E8u;
            goto label_1137e8;
        }
    }
    ctx->pc = 0x1136C8u;
    // 0x1136c8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1136c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1136cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1136ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1136d0: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1136d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1136d4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1136d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1136d8: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x1136D8u;
    {
        const bool branch_taken_0x1136d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1136d8) {
            ctx->pc = 0x1137E8u;
            goto label_1137e8;
        }
    }
    ctx->pc = 0x1136E0u;
    // 0x1136e0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1136e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1136e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1136e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1136e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1136e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1136ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1136ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1136f0: 0x0  nop
    ctx->pc = 0x1136f0u;
    // NOP
    // 0x1136f4: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x1136F4u;
    {
        const bool branch_taken_0x1136f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1136F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1136F4u;
            // 0x1136f8: 0x62040  sll         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136f4) {
            ctx->pc = 0x1137E8u;
            goto label_1137e8;
        }
    }
    ctx->pc = 0x1136FCu;
    // 0x1136fc: 0x91c50001  lbu         $a1, 0x1($t6)
    ctx->pc = 0x1136fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x113700: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x113700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x113704: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x113704u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113708: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x113708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11370c: 0x95060006  lhu         $a2, 0x6($t0)
    ctx->pc = 0x11370cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x113710: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x113710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x113714: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x113714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x113718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11371c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x11371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x113720: 0x95c30002  lhu         $v1, 0x2($t6)
    ctx->pc = 0x113720u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x113724: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x113724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x113728: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x113728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11372c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113730: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x113730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x113734: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x113734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x113738: 0x91d00000  lbu         $s0, 0x0($t6)
    ctx->pc = 0x113738u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11373c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11373cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x113740: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x113740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x113744: 0x2259821  addu        $s3, $s1, $a1
    ctx->pc = 0x113744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x113748: 0x1200005d  beqz        $s0, . + 4 + (0x5D << 2)
    ctx->pc = 0x113748u;
    {
        const bool branch_taken_0x113748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11374Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113748u;
            // 0x11374c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113748) {
            ctx->pc = 0x1138C0u;
            goto label_1138c0;
        }
    }
    ctx->pc = 0x113750u;
    // 0x113750: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x113750u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113754: 0x0  nop
    ctx->pc = 0x113754u;
    // NOP
label_113758:
    // 0x113758: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x113758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x11375c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x11375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x113760: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x113760u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x113764: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x113764u;
    {
        const bool branch_taken_0x113764 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x113768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113764u;
            // 0x113768: 0xf1040  sll         $v0, $t7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113764) {
            ctx->pc = 0x1137D0u;
            goto label_1137d0;
        }
    }
    ctx->pc = 0x11376Cu;
    // 0x11376c: 0x514821  addu        $t1, $v0, $s1
    ctx->pc = 0x11376cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x113770: 0x534021  addu        $t0, $v0, $s3
    ctx->pc = 0x113770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x113774: 0x0  nop
    ctx->pc = 0x113774u;
    // NOP
label_113778:
    // 0x113778: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x113778u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11377c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x11377cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x113780: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x113780u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x113784: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x113784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x113788: 0x22023  negu        $a0, $v0
    ctx->pc = 0x113788u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11378c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x11378cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x113790: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x113790u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x113794: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x113794u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x113798: 0xb42818  mult        $a1, $a1, $s4
    ctx->pc = 0x113798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11379c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x11379cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1137a0: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x1137a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x1137a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1137a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1137a8: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x1137a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x1137ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1137acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1137b0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1137b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1137b4: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x1137b4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1137b8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1137b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1137bc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1137bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1137c0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1137c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1137c4: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1137c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1137c8: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1137C8u;
    {
        const bool branch_taken_0x1137c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1137CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1137C8u;
            // 0x1137cc: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137c8) {
            ctx->pc = 0x113778u;
            runtime->cooperativeGuestYield();
            goto label_113778;
        }
    }
    ctx->pc = 0x1137D0u;
label_1137d0:
    // 0x1137d0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1137d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1137d4: 0x150102b  sltu        $v0, $t2, $s0
    ctx->pc = 0x1137d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1137d8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1137D8u;
    {
        const bool branch_taken_0x1137d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1137DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1137D8u;
            // 0x1137dc: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137d8) {
            ctx->pc = 0x113758u;
            runtime->cooperativeGuestYield();
            goto label_113758;
        }
    }
    ctx->pc = 0x1137E0u;
    // 0x1137e0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1137E0u;
    {
        const bool branch_taken_0x1137e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1137E0u;
            // 0x1137e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137e0) {
            ctx->pc = 0x1138C4u;
            goto label_1138c4;
        }
    }
    ctx->pc = 0x1137E8u;
label_1137e8:
    // 0x1137e8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1137e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1137ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1137ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1137f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1137f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1137f4: 0x91c40001  lbu         $a0, 0x1($t6)
    ctx->pc = 0x1137f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x1137f8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1137f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1137fc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1137fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x113800: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x113800u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x113804: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x113804u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x113808: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x113808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11380c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11380cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x113810: 0x95060006  lhu         $a2, 0x6($t0)
    ctx->pc = 0x113810u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x113814: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x113814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x113818: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x113818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11381c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x11381cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x113820: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x113820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x113824: 0x95c40002  lhu         $a0, 0x2($t6)
    ctx->pc = 0x113824u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x113828: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x113828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11382c: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x11382cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x113830: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x113830u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113834: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x113834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x113838: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x113838u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11383c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11383cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x113840: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x113840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x113844: 0x25c40004  addiu       $a0, $t6, 0x4
    ctx->pc = 0x113844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x113848: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x113848u;
    {
        const bool branch_taken_0x113848 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113848u;
            // 0x11384c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113848) {
            ctx->pc = 0x1138C0u;
            goto label_1138c0;
        }
    }
    ctx->pc = 0x113850u;
    // 0x113850: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x113850u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113854: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x113854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_113858:
    // 0x113858: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x113858u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11385c: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x11385Cu;
    {
        const bool branch_taken_0x11385c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x113860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11385Cu;
            // 0x113860: 0xb1040  sll         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11385c) {
            ctx->pc = 0x1138ACu;
            goto label_1138ac;
        }
    }
    ctx->pc = 0x113864u;
    // 0x113864: 0x503821  addu        $a3, $v0, $s0
    ctx->pc = 0x113864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_113868:
    // 0x113868: 0x61023  negu        $v0, $a2
    ctx->pc = 0x113868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x11386c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x11386cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x113870: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x113870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x113874: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x113874u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x113878: 0x21823  negu        $v1, $v0
    ctx->pc = 0x113878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11387c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x11387cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x113880: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x113880u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x113884: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x113884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x113888: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x113888u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11388c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11388cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x113890: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x113890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x113894: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x113894u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x113898: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x113898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x11389c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x11389cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1138a0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1138a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1138a4: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1138A4u;
    {
        const bool branch_taken_0x1138a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1138A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1138A4u;
            // 0x1138a8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138a4) {
            ctx->pc = 0x113868u;
            runtime->cooperativeGuestYield();
            goto label_113868;
        }
    }
    ctx->pc = 0x1138ACu;
label_1138ac:
    // 0x1138ac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1138acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1138b0: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1138b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1138b4: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x1138b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x1138b8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1138B8u;
    {
        const bool branch_taken_0x1138b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1138BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1138B8u;
            // 0x1138bc: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138b8) {
            ctx->pc = 0x113858u;
            runtime->cooperativeGuestYield();
            goto label_113858;
        }
    }
    ctx->pc = 0x1138C0u;
label_1138c0:
    // 0x1138c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1138c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1138c4:
    // 0x1138c4: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x1138c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1138c8: 0x1440fefd  bnez        $v0, . + 4 + (-0x103 << 2)
    ctx->pc = 0x1138C8u;
    {
        const bool branch_taken_0x1138c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1138CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1138C8u;
            // 0x1138cc: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138c8) {
            ctx->pc = 0x1134C0u;
            runtime->cooperativeGuestYield();
            goto label_1134c0;
        }
    }
    ctx->pc = 0x1138D0u;
label_1138d0:
    // 0x1138d0: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x1138d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1138d4:
    // 0x1138d4: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x1138d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x1138d8: 0x95a50000  lhu         $a1, 0x0($t5)
    ctx->pc = 0x1138d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1138dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1138dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1138e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1138E0u;
    {
        const bool branch_taken_0x1138e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1138E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1138E0u;
            // 0x1138e4: 0x52102  srl         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138e0) {
            ctx->pc = 0x113930u;
            goto label_113930;
        }
    }
    ctx->pc = 0x1138E8u;
    // 0x1138e8: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x1138e8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1138ec: 0x27c30070  addiu       $v1, $fp, 0x70
    ctx->pc = 0x1138ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    // 0x1138f0: 0x11000018  beqz        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1138F0u;
    {
        const bool branch_taken_0x1138f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1138F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1138F0u;
            // 0x1138f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138f0) {
            ctx->pc = 0x113954u;
            goto label_113954;
        }
    }
    ctx->pc = 0x1138F8u;
    // 0x1138f8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1138f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1138fc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1138fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_113900:
    // 0x113900: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x113900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x113904: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x113904u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x113908: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x113908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11390c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11390cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113910: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x113910u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x113914: 0xc8202b  sltu        $a0, $a2, $t0
    ctx->pc = 0x113914u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x113918: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x113918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11391c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x11391cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x113920: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x113920u;
    {
        const bool branch_taken_0x113920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x113924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113920u;
            // 0x113924: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113920) {
            ctx->pc = 0x113900u;
            runtime->cooperativeGuestYield();
            goto label_113900;
        }
    }
    ctx->pc = 0x113928u;
    // 0x113928: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x113928u;
    {
        const bool branch_taken_0x113928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11392Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113928u;
            // 0x11392c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113928) {
            ctx->pc = 0x113958u;
            goto label_113958;
        }
    }
    ctx->pc = 0x113930u;
label_113930:
    // 0x113930: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x113930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x113934: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x113934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x113938: 0x27c40070  addiu       $a0, $fp, 0x70
    ctx->pc = 0x113938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    // 0x11393c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11393cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113940: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x113940u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113948: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x113948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11394c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11394cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x113950: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x113950u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_113954:
    // 0x113954: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x113954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_113958:
    // 0x113958: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x113958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11395c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x113960: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x113960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x113964: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x113964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x113968: 0x1440f7bb  bnez        $v0, . + 4 + (-0x845 << 2)
    ctx->pc = 0x113968u;
    {
        const bool branch_taken_0x113968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11396Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113968u;
            // 0x11396c: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113968) {
            ctx->pc = 0x111858u;
            runtime->cooperativeGuestYield();
            goto label_111858;
        }
    }
    ctx->pc = 0x113970u;
label_113970:
    // 0x113970: 0x8fc4004c  lw          $a0, 0x4C($fp)
    ctx->pc = 0x113970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x113974: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x113974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113978: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x113978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x11397c: 0x30c30005  andi        $v1, $a2, 0x5
    ctx->pc = 0x11397cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)5);
    // 0x113980: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113984: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x113984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
label_113988:
    // 0x113988: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x113988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x11398c: 0x9442008e  lhu         $v0, 0x8E($v0)
    ctx->pc = 0x11398cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 142)));
    // 0x113990: 0x10400151  beqz        $v0, . + 4 + (0x151 << 2)
    ctx->pc = 0x113990u;
    {
        const bool branch_taken_0x113990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113990u;
            // 0x113994: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113990) {
            ctx->pc = 0x113ED8u;
            goto label_113ed8;
        }
    }
    ctx->pc = 0x113998u;
    // 0x113998: 0x10400149  beqz        $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x113998u;
    {
        const bool branch_taken_0x113998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11399Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113998u;
            // 0x11399c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113998) {
            ctx->pc = 0x113EC0u;
            goto label_113ec0;
        }
    }
    ctx->pc = 0x1139A0u;
    // 0x1139a0: 0x8fa9004c  lw          $t1, 0x4C($sp)
    ctx->pc = 0x1139a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1139a4: 0x0  nop
    ctx->pc = 0x1139a4u;
    // NOP
label_1139a8:
    // 0x1139a8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1139a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1139ac: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x1139acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1139b0: 0x4617c034  c.lt.s      $f24, $f23
    ctx->pc = 0x1139b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1139b4: 0x8d220094  lw          $v0, 0x94($t1)
    ctx->pc = 0x1139b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 148)));
    // 0x1139b8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1139b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1139bc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1139bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1139c0: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1139C0u;
    {
        const bool branch_taken_0x1139c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1139C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1139C0u;
            // 0x1139c4: 0x26230004  addiu       $v1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139c0) {
            ctx->pc = 0x113A24u;
            goto label_113a24;
        }
    }
    ctx->pc = 0x1139C8u;
    // 0x1139c8: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x1139c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1139cc: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1139ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1139d0: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x1139d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1139d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1139d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1139d8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1139d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1139dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1139dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1139e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1139e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1139e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1139e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1139e8: 0x4602c040  add.s       $f1, $f24, $f2
    ctx->pc = 0x1139e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x1139ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1139ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1139f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1139f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1139f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1139f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1139f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1139f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1139fc: 0x0  nop
    ctx->pc = 0x1139fcu;
    // NOP
    // 0x113a00: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x113A00u;
    {
        const bool branch_taken_0x113a00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113A00u;
            // 0x113a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a00) {
            ctx->pc = 0x113A84u;
            goto label_113a84;
        }
    }
    ctx->pc = 0x113A08u;
    // 0x113a08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x113a08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113a0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113a10: 0x4602b840  add.s       $f1, $f23, $f2
    ctx->pc = 0x113a10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x113a14: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113a18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x113a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113a1c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x113A1Cu;
    {
        const bool branch_taken_0x113a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113a1c) {
            ctx->pc = 0x113A7Cu;
            goto label_113a7c;
        }
    }
    ctx->pc = 0x113A24u;
label_113a24:
    // 0x113a24: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x113a24u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x113a28: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x113a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x113a2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x113a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113a30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x113a30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113a34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113a38: 0x4602c041  sub.s       $f1, $f24, $f2
    ctx->pc = 0x113a38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
    // 0x113a3c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113a40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x113a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113a44: 0x0  nop
    ctx->pc = 0x113a44u;
    // NOP
    // 0x113a48: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x113A48u;
    {
        const bool branch_taken_0x113a48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113A48u;
            // 0x113a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a48) {
            ctx->pc = 0x113A84u;
            goto label_113a84;
        }
    }
    ctx->pc = 0x113A50u;
    // 0x113a50: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x113a50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113a54: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x113a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x113a58: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x113a58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113a5c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113a60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113a64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113a6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113a6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113a70: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113a74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x113a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113a78: 0x0  nop
    ctx->pc = 0x113a78u;
    // NOP
label_113a7c:
    // 0x113a7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x113A7Cu;
    {
        const bool branch_taken_0x113a7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x113a7c) {
            ctx->pc = 0x113A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113A7Cu;
            // 0x113a80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113A84u;
            goto label_113a84;
        }
    }
    ctx->pc = 0x113A84u;
label_113a84:
    // 0x113a84: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x113a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a88: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x113A88u;
    {
        const bool branch_taken_0x113a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113A88u;
            // 0x113a8c: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a88) {
            ctx->pc = 0x113EB0u;
            goto label_113eb0;
        }
    }
    ctx->pc = 0x113A90u;
    // 0x113a90: 0x4618b801  sub.s       $f0, $f23, $f24
    ctx->pc = 0x113a90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
    // 0x113a94: 0x8fd50064  lw          $s5, 0x64($fp)
    ctx->pc = 0x113a94u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x113a98: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x113a98u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x113a9c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x113a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113aa0: 0x0  nop
    ctx->pc = 0x113aa0u;
    // NOP
    // 0x113aa4: 0x45000077  bc1f        . + 4 + (0x77 << 2)
    ctx->pc = 0x113AA4u;
    {
        const bool branch_taken_0x113aa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113AA4u;
            // 0x113aa8: 0x4600c586  mov.s       $f22, $f24 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113aa4) {
            ctx->pc = 0x113C84u;
            goto label_113c84;
        }
    }
    ctx->pc = 0x113AACu;
    // 0x113aac: 0x4617c034  c.lt.s      $f24, $f23
    ctx->pc = 0x113aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113ab0: 0x0  nop
    ctx->pc = 0x113ab0u;
    // NOP
    // 0x113ab4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x113AB4u;
    {
        const bool branch_taken_0x113ab4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x113AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113AB4u;
            // 0x113ab8: 0x4600ae46  mov.s       $f25, $f21 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ab4) {
            ctx->pc = 0x113AC0u;
            goto label_113ac0;
        }
    }
    ctx->pc = 0x113ABCu;
    // 0x113abc: 0x4600ae47  neg.s       $f25, $f21
    ctx->pc = 0x113abcu;
    ctx->f[25] = FPU_NEG_S(ctx->f[21]);
label_113ac0:
    // 0x113ac0: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x113AC0u;
    {
        const bool branch_taken_0x113ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113AC0u;
            // 0x113ac4: 0x4600c506  mov.s       $f20, $f24 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ac0) {
            ctx->pc = 0x113C6Cu;
            goto label_113c6c;
        }
    }
    ctx->pc = 0x113AC8u;
label_113ac8:
    // 0x113ac8: 0x4619a500  add.s       $f20, $f20, $f25
    ctx->pc = 0x113ac8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[25]);
    // 0x113acc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x113ACCu;
    {
        const bool branch_taken_0x113acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113ACCu;
            // 0x113ad0: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113acc) {
            ctx->pc = 0x113B1Cu;
            goto label_113b1c;
        }
    }
    ctx->pc = 0x113AD4u;
    // 0x113ad4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x113ad4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x113ad8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x113ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x113adc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113ADCu;
    {
        const bool branch_taken_0x113adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113ADCu;
            // 0x113ae0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113adc) {
            ctx->pc = 0x113AFCu;
            goto label_113afc;
        }
    }
    ctx->pc = 0x113AE4u;
    // 0x113ae4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x113ae4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x113ae8: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x113ae8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x113aec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x113aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x113af0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x113af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x113af4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113AF4u;
    {
        const bool branch_taken_0x113af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113AF4u;
            // 0x113af8: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113af4) {
            ctx->pc = 0x113B00u;
            goto label_113b00;
        }
    }
    ctx->pc = 0x113AFCu;
label_113afc:
    // 0x113afc: 0x24477788  addiu       $a3, $v0, 0x7788
    ctx->pc = 0x113afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_113b00:
    // 0x113b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x113b04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x113b08: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x113b08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x113b0c: 0xc08c3ba  jal         func_230EE8
    ctx->pc = 0x113B0Cu;
    SET_GPR_U32(ctx, 31, 0x113B14u);
    ctx->pc = 0x113B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113B0Cu;
            // 0x113b10: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230EE8u;
    if (runtime->hasFunction(0x230EE8u)) {
        auto targetFn = runtime->lookupFunction(0x230EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B14u; }
        if (ctx->pc != 0x113B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_230ee8_0x2311d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113B14u; }
        if (ctx->pc != 0x113B14u) { return; }
    }
    ctx->pc = 0x113B14u;
    // 0x113b14: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x113B14u;
    {
        const bool branch_taken_0x113b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113B14u;
            // 0x113b18: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b14) {
            ctx->pc = 0x113C6Cu;
            goto label_113c6c;
        }
    }
    ctx->pc = 0x113B1Cu;
label_113b1c:
    // 0x113b1c: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x113b1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x113b20: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x113b20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x113b24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x113b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x113b28: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x113b28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x113b2c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x113b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x113b30: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x113b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x113b34: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113B34u;
    {
        const bool branch_taken_0x113b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113B34u;
            // 0x113b38: 0x443021  addu        $a2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b34) {
            ctx->pc = 0x113B50u;
            goto label_113b50;
        }
    }
    ctx->pc = 0x113B3Cu;
    // 0x113b3c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x113b3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x113b40: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x113b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x113b44: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x113b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x113b48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x113B48u;
    {
        const bool branch_taken_0x113b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113B48u;
            // 0x113b4c: 0xc2a021  addu        $s4, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b48) {
            ctx->pc = 0x113B58u;
            goto label_113b58;
        }
    }
    ctx->pc = 0x113B50u;
label_113b50:
    // 0x113b50: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x113b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x113b54: 0x24547788  addiu       $s4, $v0, 0x7788
    ctx->pc = 0x113b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_113b58:
    // 0x113b58: 0x90d30001  lbu         $s3, 0x1($a2)
    ctx->pc = 0x113b58u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x113b5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x113b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b60: 0x12600041  beqz        $s3, . + 4 + (0x41 << 2)
    ctx->pc = 0x113B60u;
    {
        const bool branch_taken_0x113b60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113B60u;
            // 0x113b64: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b60) {
            ctx->pc = 0x113C68u;
            goto label_113c68;
        }
    }
    ctx->pc = 0x113B68u;
    // 0x113b68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x113b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b6c: 0x0  nop
    ctx->pc = 0x113b6cu;
    // NOP
label_113b70:
    // 0x113b70: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x113b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113b74: 0x0  nop
    ctx->pc = 0x113b74u;
    // NOP
    // 0x113b78: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x113B78u;
    {
        const bool branch_taken_0x113b78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113B78u;
            // 0x113b7c: 0x96040002  lhu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b78) {
            ctx->pc = 0x113BD8u;
            goto label_113bd8;
        }
    }
    ctx->pc = 0x113B80u;
    // 0x113b80: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x113b80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113b84: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x113b84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113b88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113b8c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x113b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x113b90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x113b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113b98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113b9c: 0x4602b040  add.s       $f1, $f22, $f2
    ctx->pc = 0x113b9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
    // 0x113ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113ba4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113ba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113ba8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113bac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x113bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113bb0: 0x0  nop
    ctx->pc = 0x113bb0u;
    // NOP
    // 0x113bb4: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x113BB4u;
    {
        const bool branch_taken_0x113bb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113BB4u;
            // 0x113bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bb4) {
            ctx->pc = 0x113C34u;
            goto label_113c34;
        }
    }
    ctx->pc = 0x113BBCu;
    // 0x113bbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x113bbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113bc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113bc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113bc4: 0x4602a040  add.s       $f1, $f20, $f2
    ctx->pc = 0x113bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x113bc8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113bcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x113bccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113bd0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x113BD0u;
    {
        const bool branch_taken_0x113bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113bd0) {
            ctx->pc = 0x113C2Cu;
            goto label_113c2c;
        }
    }
    ctx->pc = 0x113BD8u;
label_113bd8:
    // 0x113bd8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x113bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x113bdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x113bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113be0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x113be0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113be4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113be8: 0x4602b041  sub.s       $f1, $f22, $f2
    ctx->pc = 0x113be8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x113bec: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113becu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113bf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x113bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113bf4: 0x0  nop
    ctx->pc = 0x113bf4u;
    // NOP
    // 0x113bf8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x113BF8u;
    {
        const bool branch_taken_0x113bf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113BF8u;
            // 0x113bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bf8) {
            ctx->pc = 0x113C34u;
            goto label_113c34;
        }
    }
    ctx->pc = 0x113C00u;
    // 0x113c00: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x113c00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113c04: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x113c04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x113c08: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x113c08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113c0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113c14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113c1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113c20: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113c24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x113c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113c28: 0x0  nop
    ctx->pc = 0x113c28u;
    // NOP
label_113c2c:
    // 0x113c2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x113C2Cu;
    {
        const bool branch_taken_0x113c2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x113c2c) {
            ctx->pc = 0x113C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113C2Cu;
            // 0x113c30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113C34u;
            goto label_113c34;
        }
    }
    ctx->pc = 0x113C34u;
label_113c34:
    // 0x113c34: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x113c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113C38u;
    {
        const bool branch_taken_0x113c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113C38u;
            // 0x113c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c38) {
            ctx->pc = 0x113C58u;
            goto label_113c58;
        }
    }
    ctx->pc = 0x113C40u;
    // 0x113c40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x113c40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x113c44: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x113c44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x113c48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x113c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x113c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c50: 0xc08c3ba  jal         func_230EE8
    ctx->pc = 0x113C50u;
    SET_GPR_U32(ctx, 31, 0x113C58u);
    ctx->pc = 0x113C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113C50u;
            // 0x113c54: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230EE8u;
    if (runtime->hasFunction(0x230EE8u)) {
        auto targetFn = runtime->lookupFunction(0x230EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113C58u; }
        if (ctx->pc != 0x113C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_230ee8_0x2311d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113C58u; }
        if (ctx->pc != 0x113C58u) { return; }
    }
    ctx->pc = 0x113C58u;
label_113c58:
    // 0x113c58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x113c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x113c5c: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x113c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x113c60: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x113C60u;
    {
        const bool branch_taken_0x113c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113C60u;
            // 0x113c64: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c60) {
            ctx->pc = 0x113B70u;
            runtime->cooperativeGuestYield();
            goto label_113b70;
        }
    }
    ctx->pc = 0x113C68u;
label_113c68:
    // 0x113c68: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x113c68u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_113c6c:
    // 0x113c6c: 0x4614b801  sub.s       $f0, $f23, $f20
    ctx->pc = 0x113c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
    // 0x113c70: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x113c70u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x113c74: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x113c74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113c78: 0x0  nop
    ctx->pc = 0x113c78u;
    // NOP
    // 0x113c7c: 0x4503ff92  bc1tl       . + 4 + (-0x6E << 2)
    ctx->pc = 0x113C7Cu;
    {
        const bool branch_taken_0x113c7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x113c7c) {
            ctx->pc = 0x113C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113C7Cu;
            // 0x113c80: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113AC8u;
            runtime->cooperativeGuestYield();
            goto label_113ac8;
        }
    }
    ctx->pc = 0x113C84u;
label_113c84:
    // 0x113c84: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x113c84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113c88: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x113C88u;
    {
        const bool branch_taken_0x113c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113C88u;
            // 0x113c8c: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c88) {
            ctx->pc = 0x113CDCu;
            goto label_113cdc;
        }
    }
    ctx->pc = 0x113C90u;
    // 0x113c90: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x113c90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x113c94: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x113c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x113c98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113C98u;
    {
        const bool branch_taken_0x113c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113C98u;
            // 0x113c9c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c98) {
            ctx->pc = 0x113CB8u;
            goto label_113cb8;
        }
    }
    ctx->pc = 0x113CA0u;
    // 0x113ca0: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x113ca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x113ca4: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x113ca4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x113ca8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x113ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x113cac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x113cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x113cb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113CB0u;
    {
        const bool branch_taken_0x113cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113CB0u;
            // 0x113cb4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113cb0) {
            ctx->pc = 0x113CBCu;
            goto label_113cbc;
        }
    }
    ctx->pc = 0x113CB8u;
label_113cb8:
    // 0x113cb8: 0x24507788  addiu       $s0, $v0, 0x7788
    ctx->pc = 0x113cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_113cbc:
    // 0x113cbc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x113cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cc0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x113cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cc8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x113cc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x113ccc: 0xc08c3ba  jal         func_230EE8
    ctx->pc = 0x113CCCu;
    SET_GPR_U32(ctx, 31, 0x113CD4u);
    ctx->pc = 0x113CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113CCCu;
            // 0x113cd0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x230EE8u;
    if (runtime->hasFunction(0x230EE8u)) {
        auto targetFn = runtime->lookupFunction(0x230EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113CD4u; }
        if (ctx->pc != 0x113CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_230ee8_0x2311d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113CD4u; }
        if (ctx->pc != 0x113CD4u) { return; }
    }
    ctx->pc = 0x113CD4u;
    // 0x113cd4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x113CD4u;
    {
        const bool branch_taken_0x113cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113CD4u;
            // 0x113cd8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113cd4) {
            ctx->pc = 0x113E2Cu;
            goto label_113e2c;
        }
    }
    ctx->pc = 0x113CDCu;
label_113cdc:
    // 0x113cdc: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x113cdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x113ce0: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x113ce0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x113ce4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x113ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x113ce8: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x113ce8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x113cec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x113cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x113cf0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x113cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x113cf4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113CF4u;
    {
        const bool branch_taken_0x113cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113CF4u;
            // 0x113cf8: 0x443021  addu        $a2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113cf4) {
            ctx->pc = 0x113D10u;
            goto label_113d10;
        }
    }
    ctx->pc = 0x113CFCu;
    // 0x113cfc: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x113cfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x113d00: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x113d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x113d04: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x113d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x113d08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x113D08u;
    {
        const bool branch_taken_0x113d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113D08u;
            // 0x113d0c: 0xc29821  addu        $s3, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d08) {
            ctx->pc = 0x113D18u;
            goto label_113d18;
        }
    }
    ctx->pc = 0x113D10u;
label_113d10:
    // 0x113d10: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x113d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x113d14: 0x24537788  addiu       $s3, $v0, 0x7788
    ctx->pc = 0x113d14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_113d18:
    // 0x113d18: 0x90d40001  lbu         $s4, 0x1($a2)
    ctx->pc = 0x113d18u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x113d1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x113d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d20: 0x12800041  beqz        $s4, . + 4 + (0x41 << 2)
    ctx->pc = 0x113D20u;
    {
        const bool branch_taken_0x113d20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113D20u;
            // 0x113d24: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d20) {
            ctx->pc = 0x113E28u;
            goto label_113e28;
        }
    }
    ctx->pc = 0x113D28u;
    // 0x113d28: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x113d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d2c: 0x0  nop
    ctx->pc = 0x113d2cu;
    // NOP
label_113d30:
    // 0x113d30: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x113d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113d34: 0x0  nop
    ctx->pc = 0x113d34u;
    // NOP
    // 0x113d38: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x113D38u;
    {
        const bool branch_taken_0x113d38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113D38u;
            // 0x113d3c: 0x96040002  lhu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d38) {
            ctx->pc = 0x113D98u;
            goto label_113d98;
        }
    }
    ctx->pc = 0x113D40u;
    // 0x113d40: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x113d40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113d44: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x113d44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113d48: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113d4c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x113d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x113d50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x113d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113d58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113d5c: 0x4602b040  add.s       $f1, $f22, $f2
    ctx->pc = 0x113d5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
    // 0x113d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113d64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113d68: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113d6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x113d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113d70: 0x0  nop
    ctx->pc = 0x113d70u;
    // NOP
    // 0x113d74: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x113D74u;
    {
        const bool branch_taken_0x113d74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113D74u;
            // 0x113d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d74) {
            ctx->pc = 0x113DF4u;
            goto label_113df4;
        }
    }
    ctx->pc = 0x113D7Cu;
    // 0x113d7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x113d7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113d80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113d84: 0x4602b840  add.s       $f1, $f23, $f2
    ctx->pc = 0x113d84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x113d88: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113d8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x113d8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113d90: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x113D90u;
    {
        const bool branch_taken_0x113d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113d90) {
            ctx->pc = 0x113DECu;
            goto label_113dec;
        }
    }
    ctx->pc = 0x113D98u;
label_113d98:
    // 0x113d98: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x113d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x113d9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x113d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113da0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x113da0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113da4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113da8: 0x4602b041  sub.s       $f1, $f22, $f2
    ctx->pc = 0x113da8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x113dac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113db0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x113db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113db4: 0x0  nop
    ctx->pc = 0x113db4u;
    // NOP
    // 0x113db8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x113DB8u;
    {
        const bool branch_taken_0x113db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113DB8u;
            // 0x113dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113db8) {
            ctx->pc = 0x113DF4u;
            goto label_113df4;
        }
    }
    ctx->pc = 0x113DC0u;
    // 0x113dc0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x113dc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113dc4: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x113dc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x113dc8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x113dc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113dcc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113dd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113ddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113de0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113de0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113de4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x113de4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113de8: 0x0  nop
    ctx->pc = 0x113de8u;
    // NOP
label_113dec:
    // 0x113dec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x113DECu;
    {
        const bool branch_taken_0x113dec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x113dec) {
            ctx->pc = 0x113DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113DECu;
            // 0x113df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113DF4u;
            goto label_113df4;
        }
    }
    ctx->pc = 0x113DF4u;
label_113df4:
    // 0x113df4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x113df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113df8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113DF8u;
    {
        const bool branch_taken_0x113df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113DF8u;
            // 0x113dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113df8) {
            ctx->pc = 0x113E18u;
            goto label_113e18;
        }
    }
    ctx->pc = 0x113E00u;
    // 0x113e00: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x113e00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x113e04: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x113e04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x113e08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x113e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x113e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e10: 0xc08c3ba  jal         func_230EE8
    ctx->pc = 0x113E10u;
    SET_GPR_U32(ctx, 31, 0x113E18u);
    ctx->pc = 0x113E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113E10u;
            // 0x113e14: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230EE8u;
    if (runtime->hasFunction(0x230EE8u)) {
        auto targetFn = runtime->lookupFunction(0x230EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E18u; }
        if (ctx->pc != 0x113E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_230ee8_0x2311d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113E18u; }
        if (ctx->pc != 0x113E18u) { return; }
    }
    ctx->pc = 0x113E18u;
label_113e18:
    // 0x113e18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x113e18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x113e1c: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x113e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x113e20: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x113E20u;
    {
        const bool branch_taken_0x113e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E20u;
            // 0x113e24: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e20) {
            ctx->pc = 0x113D30u;
            runtime->cooperativeGuestYield();
            goto label_113d30;
        }
    }
    ctx->pc = 0x113E28u;
label_113e28:
    // 0x113e28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x113e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_113e2c:
    // 0x113e2c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x113e2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x113e30: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x113e30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113e34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x113e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x113e38: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x113E38u;
    {
        const bool branch_taken_0x113e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E38u;
            // 0x113e3c: 0x32102  srl         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e38) {
            ctx->pc = 0x113E88u;
            goto label_113e88;
        }
    }
    ctx->pc = 0x113E40u;
    // 0x113e40: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x113e40u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x113e44: 0x27c30170  addiu       $v1, $fp, 0x170
    ctx->pc = 0x113e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 368));
    // 0x113e48: 0x11000018  beqz        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x113E48u;
    {
        const bool branch_taken_0x113e48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E48u;
            // 0x113e4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e48) {
            ctx->pc = 0x113EACu;
            goto label_113eac;
        }
    }
    ctx->pc = 0x113E50u;
    // 0x113e50: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x113e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x113e54: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x113e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_113e58:
    // 0x113e58: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x113e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x113e5c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x113e5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x113e60: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x113e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x113e64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x113e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113e68: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x113e68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x113e6c: 0xc8202b  sltu        $a0, $a2, $t0
    ctx->pc = 0x113e6cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x113e70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x113e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x113e74: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x113e74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x113e78: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x113E78u;
    {
        const bool branch_taken_0x113e78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x113E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E78u;
            // 0x113e7c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e78) {
            ctx->pc = 0x113E58u;
            runtime->cooperativeGuestYield();
            goto label_113e58;
        }
    }
    ctx->pc = 0x113E80u;
    // 0x113e80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x113E80u;
    {
        const bool branch_taken_0x113e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113E80u;
            // 0x113e84: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e80) {
            ctx->pc = 0x113EB0u;
            goto label_113eb0;
        }
    }
    ctx->pc = 0x113E88u;
label_113e88:
    // 0x113e88: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x113e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x113e8c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x113e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x113e90: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x113e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x113e94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x113e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113e98: 0x24840170  addiu       $a0, $a0, 0x170
    ctx->pc = 0x113e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x113e9c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x113e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x113ea0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x113ea0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113ea4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113ea8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x113ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_113eac:
    // 0x113eac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x113eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_113eb0:
    // 0x113eb0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x113eb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x113eb4: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x113eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x113eb8: 0x1440febb  bnez        $v0, . + 4 + (-0x145 << 2)
    ctx->pc = 0x113EB8u;
    {
        const bool branch_taken_0x113eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113EB8u;
            // 0x113ebc: 0x8fa9004c  lw          $t1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113eb8) {
            ctx->pc = 0x1139A8u;
            runtime->cooperativeGuestYield();
            goto label_1139a8;
        }
    }
    ctx->pc = 0x113EC0u;
label_113ec0:
    // 0x113ec0: 0x8fc4004c  lw          $a0, 0x4C($fp)
    ctx->pc = 0x113ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x113ec4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x113ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113ec8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x113ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x113ecc: 0x30c30005  andi        $v1, $a2, 0x5
    ctx->pc = 0x113eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)5);
    // 0x113ed0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113ed4: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x113ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
label_113ed8:
    // 0x113ed8: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x113ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x113edc: 0x9442007a  lhu         $v0, 0x7A($v0)
    ctx->pc = 0x113edcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 122)));
    // 0x113ee0: 0x104001f8  beqz        $v0, . + 4 + (0x1F8 << 2)
    ctx->pc = 0x113EE0u;
    {
        const bool branch_taken_0x113ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113EE0u;
            // 0x113ee4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ee0) {
            ctx->pc = 0x1146C4u;
            goto label_1146c4;
        }
    }
    ctx->pc = 0x113EE8u;
    // 0x113ee8: 0x104001f2  beqz        $v0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x113EE8u;
    {
        const bool branch_taken_0x113ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113EE8u;
            // 0x113eec: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ee8) {
            ctx->pc = 0x1146B4u;
            goto label_1146b4;
        }
    }
    ctx->pc = 0x113EF0u;
label_113ef0:
    // 0x113ef0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x113ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x113ef4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x113ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x113ef8: 0x8fa9004c  lw          $t1, 0x4C($sp)
    ctx->pc = 0x113ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x113efc: 0x4617c034  c.lt.s      $f24, $f23
    ctx->pc = 0x113efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113f00: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x113f00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x113f04: 0x8d220080  lw          $v0, 0x80($t1)
    ctx->pc = 0x113f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x113f08: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x113f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x113f0c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x113f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113f10: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x113F10u;
    {
        const bool branch_taken_0x113f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113F10u;
            // 0x113f14: 0x26230004  addiu       $v1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f10) {
            ctx->pc = 0x113F78u;
            goto label_113f78;
        }
    }
    ctx->pc = 0x113F18u;
    // 0x113f18: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x113f18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x113f1c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x113f1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113f20: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x113f20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113f24: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113f28: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x113f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x113f2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x113f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113f30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113f34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113f38: 0x4602c040  add.s       $f1, $f24, $f2
    ctx->pc = 0x113f38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x113f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113f40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113f44: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113f48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x113f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113f4c: 0x0  nop
    ctx->pc = 0x113f4cu;
    // NOP
    // 0x113f50: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x113F50u;
    {
        const bool branch_taken_0x113f50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113F50u;
            // 0x113f54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f50) {
            ctx->pc = 0x113FD8u;
            goto label_113fd8;
        }
    }
    ctx->pc = 0x113F58u;
    // 0x113f58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x113f58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113f5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113f60: 0x4602b840  add.s       $f1, $f23, $f2
    ctx->pc = 0x113f60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x113f64: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113f68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x113f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113f6c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x113F6Cu;
    {
        const bool branch_taken_0x113f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113f6c) {
            ctx->pc = 0x113FD0u;
            goto label_113fd0;
        }
    }
    ctx->pc = 0x113F74u;
    // 0x113f74: 0x0  nop
    ctx->pc = 0x113f74u;
    // NOP
label_113f78:
    // 0x113f78: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x113f78u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x113f7c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x113f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x113f80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x113f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113f84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x113f84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113f88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113f8c: 0x4602c041  sub.s       $f1, $f24, $f2
    ctx->pc = 0x113f8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
    // 0x113f90: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113f94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x113f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113f98: 0x0  nop
    ctx->pc = 0x113f98u;
    // NOP
    // 0x113f9c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x113F9Cu;
    {
        const bool branch_taken_0x113f9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113F9Cu;
            // 0x113fa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f9c) {
            ctx->pc = 0x113FD8u;
            goto label_113fd8;
        }
    }
    ctx->pc = 0x113FA4u;
    // 0x113fa4: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x113fa4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113fa8: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x113fa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x113fac: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x113facu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113fb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113fb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113fc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113fc4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x113fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x113fc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x113fc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113fcc: 0x0  nop
    ctx->pc = 0x113fccu;
    // NOP
label_113fd0:
    // 0x113fd0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x113FD0u;
    {
        const bool branch_taken_0x113fd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x113fd0) {
            ctx->pc = 0x113FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113FD0u;
            // 0x113fd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113FD8u;
            goto label_113fd8;
        }
    }
    ctx->pc = 0x113FD8u;
label_113fd8:
    // 0x113fd8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x113fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113fdc: 0x104001b0  beqz        $v0, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x113FDCu;
    {
        const bool branch_taken_0x113fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113FDCu;
            // 0x113fe0: 0x8fa60068  lw          $a2, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fdc) {
            ctx->pc = 0x1146A0u;
            goto label_1146a0;
        }
    }
    ctx->pc = 0x113FE4u;
    // 0x113fe4: 0x4618b801  sub.s       $f0, $f23, $f24
    ctx->pc = 0x113fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
    // 0x113fe8: 0x8fd50060  lw          $s5, 0x60($fp)
    ctx->pc = 0x113fe8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x113fec: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x113fecu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x113ff0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x113ff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113ff4: 0x0  nop
    ctx->pc = 0x113ff4u;
    // NOP
    // 0x113ff8: 0x450000ca  bc1f        . + 4 + (0xCA << 2)
    ctx->pc = 0x113FF8u;
    {
        const bool branch_taken_0x113ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113FF8u;
            // 0x113ffc: 0x4600c586  mov.s       $f22, $f24 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ff8) {
            ctx->pc = 0x114324u;
            goto label_114324;
        }
    }
    ctx->pc = 0x114000u;
    // 0x114000: 0x4617c034  c.lt.s      $f24, $f23
    ctx->pc = 0x114000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114004: 0x0  nop
    ctx->pc = 0x114004u;
    // NOP
    // 0x114008: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x114008u;
    {
        const bool branch_taken_0x114008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114008u;
            // 0x11400c: 0x4600ae46  mov.s       $f25, $f21 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114008) {
            ctx->pc = 0x114014u;
            goto label_114014;
        }
    }
    ctx->pc = 0x114010u;
    // 0x114010: 0x4600ae47  neg.s       $f25, $f21
    ctx->pc = 0x114010u;
    ctx->f[25] = FPU_NEG_S(ctx->f[21]);
label_114014:
    // 0x114014: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x114014u;
    {
        const bool branch_taken_0x114014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114014u;
            // 0x114018: 0x4600c506  mov.s       $f20, $f24 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114014) {
            ctx->pc = 0x11430Cu;
            goto label_11430c;
        }
    }
    ctx->pc = 0x11401Cu;
    // 0x11401c: 0x0  nop
    ctx->pc = 0x11401cu;
    // NOP
label_114020:
    // 0x114020: 0x4619a500  add.s       $f20, $f20, $f25
    ctx->pc = 0x114020u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[25]);
    // 0x114024: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x114024u;
    {
        const bool branch_taken_0x114024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114024u;
            // 0x114028: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114024) {
            ctx->pc = 0x1140A8u;
            goto label_1140a8;
        }
    }
    ctx->pc = 0x11402Cu;
    // 0x11402c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x11402cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x114030: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x114030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x114034: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114034u;
    {
        const bool branch_taken_0x114034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114034u;
            // 0x114038: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114034) {
            ctx->pc = 0x114054u;
            goto label_114054;
        }
    }
    ctx->pc = 0x11403Cu;
    // 0x11403c: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x11403cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x114040: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x114040u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x114044: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x114044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x114048: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x114048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11404c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11404Cu;
    {
        const bool branch_taken_0x11404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11404Cu;
            // 0x114050: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11404c) {
            ctx->pc = 0x114058u;
            goto label_114058;
        }
    }
    ctx->pc = 0x114054u;
label_114054:
    // 0x114054: 0x24477788  addiu       $a3, $v0, 0x7788
    ctx->pc = 0x114054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_114058:
    // 0x114058: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x114058u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x11405c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x114060: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x114060u;
    {
        const bool branch_taken_0x114060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114060u;
            // 0x114064: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114060) {
            ctx->pc = 0x11408Cu;
            goto label_11408c;
        }
    }
    ctx->pc = 0x114068u;
    // 0x114068: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x114068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x11406c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x11406cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x114070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114074: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x114074u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x114078: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x114078u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x11407c: 0xc08c476  jal         func_2311D8
    ctx->pc = 0x11407Cu;
    SET_GPR_U32(ctx, 31, 0x114084u);
    ctx->pc = 0x114080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11407Cu;
            // 0x114080: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2311D8u;
    if (runtime->hasFunction(0x2311D8u)) {
        auto targetFn = runtime->lookupFunction(0x2311D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114084u; }
        if (ctx->pc != 0x114084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2311d8_0x2315a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114084u; }
        if (ctx->pc != 0x114084u) { return; }
    }
    ctx->pc = 0x114084u;
    // 0x114084: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x114084u;
    {
        const bool branch_taken_0x114084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114084u;
            // 0x114088: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114084) {
            ctx->pc = 0x11430Cu;
            goto label_11430c;
        }
    }
    ctx->pc = 0x11408Cu;
label_11408c:
    // 0x11408c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114090: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x114090u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x114094: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x114094u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x114098: 0xc08c56a  jal         func_2315A8
    ctx->pc = 0x114098u;
    SET_GPR_U32(ctx, 31, 0x1140A0u);
    ctx->pc = 0x11409Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114098u;
            // 0x11409c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2315A8u;
    if (runtime->hasFunction(0x2315A8u)) {
        auto targetFn = runtime->lookupFunction(0x2315A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140A0u; }
        if (ctx->pc != 0x1140A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2315a8_0x231860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140A0u; }
        if (ctx->pc != 0x1140A0u) { return; }
    }
    ctx->pc = 0x1140A0u;
    // 0x1140a0: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1140A0u;
    {
        const bool branch_taken_0x1140a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1140A0u;
            // 0x1140a4: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140a0) {
            ctx->pc = 0x11430Cu;
            goto label_11430c;
        }
    }
    ctx->pc = 0x1140A8u;
label_1140a8:
    // 0x1140a8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1140a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1140ac: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x1140acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1140b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1140b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1140b4: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1140b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1140b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1140b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1140bc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1140bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1140c0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1140C0u;
    {
        const bool branch_taken_0x1140c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1140C0u;
            // 0x1140c4: 0x449821  addu        $s3, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140c0) {
            ctx->pc = 0x1140DCu;
            goto label_1140dc;
        }
    }
    ctx->pc = 0x1140C8u;
    // 0x1140c8: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x1140c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1140cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1140ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1140d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1140d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1140d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1140D4u;
    {
        const bool branch_taken_0x1140d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1140D4u;
            // 0x1140d8: 0x262a021  addu        $s4, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140d4) {
            ctx->pc = 0x1140E4u;
            goto label_1140e4;
        }
    }
    ctx->pc = 0x1140DCu;
label_1140dc:
    // 0x1140dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1140dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1140e0: 0x24547788  addiu       $s4, $v0, 0x7788
    ctx->pc = 0x1140e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_1140e4:
    // 0x1140e4: 0x92760000  lbu         $s6, 0x0($s3)
    ctx->pc = 0x1140e4u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1140e8: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x1140e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1140ec: 0x12c00043  beqz        $s6, . + 4 + (0x43 << 2)
    ctx->pc = 0x1140ECu;
    {
        const bool branch_taken_0x1140ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1140ECu;
            // 0x1140f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140ec) {
            ctx->pc = 0x1141FCu;
            goto label_1141fc;
        }
    }
    ctx->pc = 0x1140F4u;
    // 0x1140f4: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1140f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1140f8:
    // 0x1140f8: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x1140f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1140fc: 0x0  nop
    ctx->pc = 0x1140fcu;
    // NOP
    // 0x114100: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x114100u;
    {
        const bool branch_taken_0x114100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114100u;
            // 0x114104: 0x96040002  lhu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114100) {
            ctx->pc = 0x114160u;
            goto label_114160;
        }
    }
    ctx->pc = 0x114108u;
    // 0x114108: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x114108u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11410c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x11410cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x114110: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x114114: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114118: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11411c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114120: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114124: 0x4602b040  add.s       $f1, $f22, $f2
    ctx->pc = 0x114124u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
    // 0x114128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x114128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11412c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11412cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114130: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114134: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x114134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114138: 0x0  nop
    ctx->pc = 0x114138u;
    // NOP
    // 0x11413c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x11413Cu;
    {
        const bool branch_taken_0x11413c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11413Cu;
            // 0x114140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11413c) {
            ctx->pc = 0x1141BCu;
            goto label_1141bc;
        }
    }
    ctx->pc = 0x114144u;
    // 0x114144: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114144u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11414c: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x11414cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x114150: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114154: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x114154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114158: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x114158u;
    {
        const bool branch_taken_0x114158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114158) {
            ctx->pc = 0x1141B4u;
            goto label_1141b4;
        }
    }
    ctx->pc = 0x114160u;
label_114160:
    // 0x114160: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114164: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114168: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114168u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11416c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11416cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114170: 0x4602b041  sub.s       $f1, $f22, $f2
    ctx->pc = 0x114170u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x114174: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114178: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x114178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11417c: 0x0  nop
    ctx->pc = 0x11417cu;
    // NOP
    // 0x114180: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x114180u;
    {
        const bool branch_taken_0x114180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114180u;
            // 0x114184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114180) {
            ctx->pc = 0x1141BCu;
            goto label_1141bc;
        }
    }
    ctx->pc = 0x114188u;
    // 0x114188: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x114188u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11418c: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x11418cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x114190: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x114190u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x114194: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x114198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11419c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1141a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1141a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1141a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1141a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1141a8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1141a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1141ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1141acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1141b0: 0x0  nop
    ctx->pc = 0x1141b0u;
    // NOP
label_1141b4:
    // 0x1141b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1141B4u;
    {
        const bool branch_taken_0x1141b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1141b4) {
            ctx->pc = 0x1141B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1141B4u;
            // 0x1141b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1141BCu;
            goto label_1141bc;
        }
    }
    ctx->pc = 0x1141BCu;
label_1141bc:
    // 0x1141bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1141bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1141C0u;
    {
        const bool branch_taken_0x1141c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1141C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1141C0u;
            // 0x1141c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141c0) {
            ctx->pc = 0x1141ECu;
            goto label_1141ec;
        }
    }
    ctx->pc = 0x1141C8u;
    // 0x1141c8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1141c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1141cc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1141ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1141d0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1141d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1141d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1141d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1141d8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1141d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1141dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1141dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1141e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141e4: 0xc08c476  jal         func_2311D8
    ctx->pc = 0x1141E4u;
    SET_GPR_U32(ctx, 31, 0x1141ECu);
    ctx->pc = 0x1141E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1141E4u;
            // 0x1141e8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2311D8u;
    if (runtime->hasFunction(0x2311D8u)) {
        auto targetFn = runtime->lookupFunction(0x2311D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1141ECu; }
        if (ctx->pc != 0x1141ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2311d8_0x2315a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1141ECu; }
        if (ctx->pc != 0x1141ECu) { return; }
    }
    ctx->pc = 0x1141ECu;
label_1141ec:
    // 0x1141ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1141ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1141f0: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x1141f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1141f4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1141F4u;
    {
        const bool branch_taken_0x1141f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1141F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1141F4u;
            // 0x1141f8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141f4) {
            ctx->pc = 0x1140F8u;
            runtime->cooperativeGuestYield();
            goto label_1140f8;
        }
    }
    ctx->pc = 0x1141FCu;
label_1141fc:
    // 0x1141fc: 0x92730001  lbu         $s3, 0x1($s3)
    ctx->pc = 0x1141fcu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x114200: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x114200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x114204: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x114204u;
    {
        const bool branch_taken_0x114204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114204u;
            // 0x114208: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114204) {
            ctx->pc = 0x114308u;
            goto label_114308;
        }
    }
    ctx->pc = 0x11420Cu;
    // 0x11420c: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x11420cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_114210:
    // 0x114210: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x114210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114214: 0x0  nop
    ctx->pc = 0x114214u;
    // NOP
    // 0x114218: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x114218u;
    {
        const bool branch_taken_0x114218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114218u;
            // 0x11421c: 0x96040002  lhu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114218) {
            ctx->pc = 0x114278u;
            goto label_114278;
        }
    }
    ctx->pc = 0x114220u;
    // 0x114220: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x114220u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x114224: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x114224u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x114228: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11422c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11422cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114230: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11423c: 0x4602b040  add.s       $f1, $f22, $f2
    ctx->pc = 0x11423cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
    // 0x114240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x114240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114248: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11424c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11424cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114250: 0x0  nop
    ctx->pc = 0x114250u;
    // NOP
    // 0x114254: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x114254u;
    {
        const bool branch_taken_0x114254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114254u;
            // 0x114258: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114254) {
            ctx->pc = 0x1142D4u;
            goto label_1142d4;
        }
    }
    ctx->pc = 0x11425Cu;
    // 0x11425c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11425cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114264: 0x4602a040  add.s       $f1, $f20, $f2
    ctx->pc = 0x114264u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x114268: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11426c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11426cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114270: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x114270u;
    {
        const bool branch_taken_0x114270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114270) {
            ctx->pc = 0x1142CCu;
            goto label_1142cc;
        }
    }
    ctx->pc = 0x114278u;
label_114278:
    // 0x114278: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11427c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11427cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114280: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114280u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114284: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114288: 0x4602b041  sub.s       $f1, $f22, $f2
    ctx->pc = 0x114288u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x11428c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x11428cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114290: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x114290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114294: 0x0  nop
    ctx->pc = 0x114294u;
    // NOP
    // 0x114298: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x114298u;
    {
        const bool branch_taken_0x114298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11429Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114298u;
            // 0x11429c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114298) {
            ctx->pc = 0x1142D4u;
            goto label_1142d4;
        }
    }
    ctx->pc = 0x1142A0u;
    // 0x1142a0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1142a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1142a4: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x1142a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x1142a8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1142a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1142ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1142acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1142b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1142b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1142b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1142b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1142b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1142b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1142bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1142bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1142c0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1142c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1142c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1142c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1142c8: 0x0  nop
    ctx->pc = 0x1142c8u;
    // NOP
label_1142cc:
    // 0x1142cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1142CCu;
    {
        const bool branch_taken_0x1142cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1142cc) {
            ctx->pc = 0x1142D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1142CCu;
            // 0x1142d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1142D4u;
            goto label_1142d4;
        }
    }
    ctx->pc = 0x1142D4u;
label_1142d4:
    // 0x1142d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1142d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1142D8u;
    {
        const bool branch_taken_0x1142d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1142D8u;
            // 0x1142dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142d8) {
            ctx->pc = 0x1142F8u;
            goto label_1142f8;
        }
    }
    ctx->pc = 0x1142E0u;
    // 0x1142e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1142e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1142e4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1142e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1142e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1142e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1142ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142f0: 0xc08c56a  jal         func_2315A8
    ctx->pc = 0x1142F0u;
    SET_GPR_U32(ctx, 31, 0x1142F8u);
    ctx->pc = 0x1142F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1142F0u;
            // 0x1142f4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2315A8u;
    if (runtime->hasFunction(0x2315A8u)) {
        auto targetFn = runtime->lookupFunction(0x2315A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1142F8u; }
        if (ctx->pc != 0x1142F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2315a8_0x231860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1142F8u; }
        if (ctx->pc != 0x1142F8u) { return; }
    }
    ctx->pc = 0x1142F8u;
label_1142f8:
    // 0x1142f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1142f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1142fc: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x1142fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x114300: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x114300u;
    {
        const bool branch_taken_0x114300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114300u;
            // 0x114304: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114300) {
            ctx->pc = 0x114210u;
            runtime->cooperativeGuestYield();
            goto label_114210;
        }
    }
    ctx->pc = 0x114308u;
label_114308:
    // 0x114308: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x114308u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_11430c:
    // 0x11430c: 0x4614b801  sub.s       $f0, $f23, $f20
    ctx->pc = 0x11430cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
    // 0x114310: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x114310u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x114314: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x114314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114318: 0x0  nop
    ctx->pc = 0x114318u;
    // NOP
    // 0x11431c: 0x4503ff40  bc1tl       . + 4 + (-0xC0 << 2)
    ctx->pc = 0x11431Cu;
    {
        const bool branch_taken_0x11431c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11431c) {
            ctx->pc = 0x114320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11431Cu;
            // 0x114320: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114020u;
            runtime->cooperativeGuestYield();
            goto label_114020;
        }
    }
    ctx->pc = 0x114324u;
label_114324:
    // 0x114324: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x114324u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x114328: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x114328u;
    {
        const bool branch_taken_0x114328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11432Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114328u;
            // 0x11432c: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114328) {
            ctx->pc = 0x1143B4u;
            goto label_1143b4;
        }
    }
    ctx->pc = 0x114330u;
    // 0x114330: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x114330u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x114334: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x114334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x114338: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114338u;
    {
        const bool branch_taken_0x114338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114338u;
            // 0x11433c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114338) {
            ctx->pc = 0x114358u;
            goto label_114358;
        }
    }
    ctx->pc = 0x114340u;
    // 0x114340: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x114340u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x114344: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x114344u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x114348: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x114348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11434c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11434cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x114350: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x114350u;
    {
        const bool branch_taken_0x114350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114350u;
            // 0x114354: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114350) {
            ctx->pc = 0x11435Cu;
            goto label_11435c;
        }
    }
    ctx->pc = 0x114358u;
label_114358:
    // 0x114358: 0x24507788  addiu       $s0, $v0, 0x7788
    ctx->pc = 0x114358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_11435c:
    // 0x11435c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x11435cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x114360: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x114360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x114364: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x114364u;
    {
        const bool branch_taken_0x114364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114364u;
            // 0x114368: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114364) {
            ctx->pc = 0x114394u;
            goto label_114394;
        }
    }
    ctx->pc = 0x11436Cu;
    // 0x11436c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x11436cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x114370: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x114370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x114374: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x114374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11437c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x11437cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x114380: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x114380u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x114384: 0xc08c476  jal         func_2311D8
    ctx->pc = 0x114384u;
    SET_GPR_U32(ctx, 31, 0x11438Cu);
    ctx->pc = 0x114388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114384u;
            // 0x114388: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2311D8u;
    if (runtime->hasFunction(0x2311D8u)) {
        auto targetFn = runtime->lookupFunction(0x2311D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11438Cu; }
        if (ctx->pc != 0x11438Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2311d8_0x2315a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11438Cu; }
        if (ctx->pc != 0x11438Cu) { return; }
    }
    ctx->pc = 0x11438Cu;
    // 0x11438c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x11438Cu;
    {
        const bool branch_taken_0x11438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11438Cu;
            // 0x114390: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11438c) {
            ctx->pc = 0x11461Cu;
            goto label_11461c;
        }
    }
    ctx->pc = 0x114394u;
label_114394:
    // 0x114394: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x114394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11439c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x11439cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1143a0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1143a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1143a4: 0xc08c56a  jal         func_2315A8
    ctx->pc = 0x1143A4u;
    SET_GPR_U32(ctx, 31, 0x1143ACu);
    ctx->pc = 0x1143A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1143A4u;
            // 0x1143a8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2315A8u;
    if (runtime->hasFunction(0x2315A8u)) {
        auto targetFn = runtime->lookupFunction(0x2315A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1143ACu; }
        if (ctx->pc != 0x1143ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2315a8_0x231860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1143ACu; }
        if (ctx->pc != 0x1143ACu) { return; }
    }
    ctx->pc = 0x1143ACu;
    // 0x1143ac: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x1143ACu;
    {
        const bool branch_taken_0x1143ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1143ACu;
            // 0x1143b0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143ac) {
            ctx->pc = 0x11461Cu;
            goto label_11461c;
        }
    }
    ctx->pc = 0x1143B4u;
label_1143b4:
    // 0x1143b4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1143b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1143b8: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x1143b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1143bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1143bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1143c0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1143c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1143c4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1143c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1143c8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1143c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1143cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1143CCu;
    {
        const bool branch_taken_0x1143cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1143CCu;
            // 0x1143d0: 0x449821  addu        $s3, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143cc) {
            ctx->pc = 0x1143E8u;
            goto label_1143e8;
        }
    }
    ctx->pc = 0x1143D4u;
    // 0x1143d4: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x1143d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1143d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1143d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1143dc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1143dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1143e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1143E0u;
    {
        const bool branch_taken_0x1143e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1143E0u;
            // 0x1143e4: 0x262a021  addu        $s4, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143e0) {
            ctx->pc = 0x1143F0u;
            goto label_1143f0;
        }
    }
    ctx->pc = 0x1143E8u;
label_1143e8:
    // 0x1143e8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1143e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1143ec: 0x24547788  addiu       $s4, $v0, 0x7788
    ctx->pc = 0x1143ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_1143f0:
    // 0x1143f0: 0x92760000  lbu         $s6, 0x0($s3)
    ctx->pc = 0x1143f0u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1143f4: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x1143f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1143f8: 0x12c00044  beqz        $s6, . + 4 + (0x44 << 2)
    ctx->pc = 0x1143F8u;
    {
        const bool branch_taken_0x1143f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1143F8u;
            // 0x1143fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143f8) {
            ctx->pc = 0x11450Cu;
            goto label_11450c;
        }
    }
    ctx->pc = 0x114400u;
    // 0x114400: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x114400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114404: 0x0  nop
    ctx->pc = 0x114404u;
    // NOP
label_114408:
    // 0x114408: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x114408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11440c: 0x0  nop
    ctx->pc = 0x11440cu;
    // NOP
    // 0x114410: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x114410u;
    {
        const bool branch_taken_0x114410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114410u;
            // 0x114414: 0x96040002  lhu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114410) {
            ctx->pc = 0x114470u;
            goto label_114470;
        }
    }
    ctx->pc = 0x114418u;
    // 0x114418: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x114418u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11441c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x11441cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x114420: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x114424: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114428: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11442c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114430: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114434: 0x4602b040  add.s       $f1, $f22, $f2
    ctx->pc = 0x114434u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
    // 0x114438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x114438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11443c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11443cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114440: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114444: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x114444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114448: 0x0  nop
    ctx->pc = 0x114448u;
    // NOP
    // 0x11444c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x11444Cu;
    {
        const bool branch_taken_0x11444c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11444Cu;
            // 0x114450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11444c) {
            ctx->pc = 0x1144CCu;
            goto label_1144cc;
        }
    }
    ctx->pc = 0x114454u;
    // 0x114454: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114454u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114458: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11445c: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x11445cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x114460: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114464: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x114464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114468: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x114468u;
    {
        const bool branch_taken_0x114468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114468) {
            ctx->pc = 0x1144C4u;
            goto label_1144c4;
        }
    }
    ctx->pc = 0x114470u;
label_114470:
    // 0x114470: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114474: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114478: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114478u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11447c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11447cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114480: 0x4602b041  sub.s       $f1, $f22, $f2
    ctx->pc = 0x114480u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x114484: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114488: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x114488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11448c: 0x0  nop
    ctx->pc = 0x11448cu;
    // NOP
    // 0x114490: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x114490u;
    {
        const bool branch_taken_0x114490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114490u;
            // 0x114494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114490) {
            ctx->pc = 0x1144CCu;
            goto label_1144cc;
        }
    }
    ctx->pc = 0x114498u;
    // 0x114498: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x114498u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11449c: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x11449cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x1144a0: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1144a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1144a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1144a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1144a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1144a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1144ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1144acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1144b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1144b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1144b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1144b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1144b8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1144b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1144bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1144bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1144c0: 0x0  nop
    ctx->pc = 0x1144c0u;
    // NOP
label_1144c4:
    // 0x1144c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1144C4u;
    {
        const bool branch_taken_0x1144c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1144c4) {
            ctx->pc = 0x1144C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1144C4u;
            // 0x1144c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1144CCu;
            goto label_1144cc;
        }
    }
    ctx->pc = 0x1144CCu;
label_1144cc:
    // 0x1144cc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1144ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1144D0u;
    {
        const bool branch_taken_0x1144d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1144D0u;
            // 0x1144d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144d0) {
            ctx->pc = 0x1144FCu;
            goto label_1144fc;
        }
    }
    ctx->pc = 0x1144D8u;
    // 0x1144d8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1144d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1144dc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1144dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1144e0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1144e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1144e4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1144e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x1144e8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1144e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1144ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1144ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1144f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144f4: 0xc08c476  jal         func_2311D8
    ctx->pc = 0x1144F4u;
    SET_GPR_U32(ctx, 31, 0x1144FCu);
    ctx->pc = 0x1144F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1144F4u;
            // 0x1144f8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2311D8u;
    if (runtime->hasFunction(0x2311D8u)) {
        auto targetFn = runtime->lookupFunction(0x2311D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144FCu; }
        if (ctx->pc != 0x1144FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2311d8_0x2315a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144FCu; }
        if (ctx->pc != 0x1144FCu) { return; }
    }
    ctx->pc = 0x1144FCu;
label_1144fc:
    // 0x1144fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1144fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x114500: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x114500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x114504: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x114504u;
    {
        const bool branch_taken_0x114504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114504u;
            // 0x114508: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114504) {
            ctx->pc = 0x114408u;
            runtime->cooperativeGuestYield();
            goto label_114408;
        }
    }
    ctx->pc = 0x11450Cu;
label_11450c:
    // 0x11450c: 0x92730001  lbu         $s3, 0x1($s3)
    ctx->pc = 0x11450cu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x114510: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x114510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x114514: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x114514u;
    {
        const bool branch_taken_0x114514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114514u;
            // 0x114518: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114514) {
            ctx->pc = 0x114618u;
            goto label_114618;
        }
    }
    ctx->pc = 0x11451Cu;
    // 0x11451c: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x11451cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_114520:
    // 0x114520: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x114520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114524: 0x0  nop
    ctx->pc = 0x114524u;
    // NOP
    // 0x114528: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x114528u;
    {
        const bool branch_taken_0x114528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11452Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114528u;
            // 0x11452c: 0x96040002  lhu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114528) {
            ctx->pc = 0x114588u;
            goto label_114588;
        }
    }
    ctx->pc = 0x114530u;
    // 0x114530: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x114530u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x114534: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x114534u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x114538: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11453c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11453cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114540: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114548: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11454c: 0x4602b040  add.s       $f1, $f22, $f2
    ctx->pc = 0x11454cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
    // 0x114550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x114550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114554: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114558: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11455c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11455cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114560: 0x0  nop
    ctx->pc = 0x114560u;
    // NOP
    // 0x114564: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x114564u;
    {
        const bool branch_taken_0x114564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114564u;
            // 0x114568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114564) {
            ctx->pc = 0x1145E4u;
            goto label_1145e4;
        }
    }
    ctx->pc = 0x11456Cu;
    // 0x11456c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11456cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114570: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114574: 0x4602b840  add.s       $f1, $f23, $f2
    ctx->pc = 0x114574u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x114578: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11457c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11457cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114580: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x114580u;
    {
        const bool branch_taken_0x114580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114580) {
            ctx->pc = 0x1145DCu;
            goto label_1145dc;
        }
    }
    ctx->pc = 0x114588u;
label_114588:
    // 0x114588: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11458c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11458cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114590: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114590u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114598: 0x4602b041  sub.s       $f1, $f22, $f2
    ctx->pc = 0x114598u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x11459c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x11459cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1145a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1145a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1145a4: 0x0  nop
    ctx->pc = 0x1145a4u;
    // NOP
    // 0x1145a8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1145A8u;
    {
        const bool branch_taken_0x1145a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1145ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1145A8u;
            // 0x1145ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145a8) {
            ctx->pc = 0x1145E4u;
            goto label_1145e4;
        }
    }
    ctx->pc = 0x1145B0u;
    // 0x1145b0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1145b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1145b4: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x1145b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x1145b8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1145b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1145bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1145bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1145c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1145c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1145c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1145c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1145c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1145c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1145cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1145ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1145d0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1145d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1145d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1145d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1145d8: 0x0  nop
    ctx->pc = 0x1145d8u;
    // NOP
label_1145dc:
    // 0x1145dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1145DCu;
    {
        const bool branch_taken_0x1145dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1145dc) {
            ctx->pc = 0x1145E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1145DCu;
            // 0x1145e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1145E4u;
            goto label_1145e4;
        }
    }
    ctx->pc = 0x1145E4u;
label_1145e4:
    // 0x1145e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1145e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1145E8u;
    {
        const bool branch_taken_0x1145e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1145E8u;
            // 0x1145ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145e8) {
            ctx->pc = 0x114608u;
            goto label_114608;
        }
    }
    ctx->pc = 0x1145F0u;
    // 0x1145f0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1145f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1145f4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1145f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1145f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1145f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1145fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114600: 0xc08c56a  jal         func_2315A8
    ctx->pc = 0x114600u;
    SET_GPR_U32(ctx, 31, 0x114608u);
    ctx->pc = 0x114604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114600u;
            // 0x114604: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2315A8u;
    if (runtime->hasFunction(0x2315A8u)) {
        auto targetFn = runtime->lookupFunction(0x2315A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114608u; }
        if (ctx->pc != 0x114608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2315a8_0x231860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114608u; }
        if (ctx->pc != 0x114608u) { return; }
    }
    ctx->pc = 0x114608u;
label_114608:
    // 0x114608: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x114608u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11460c: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x11460cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x114610: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x114610u;
    {
        const bool branch_taken_0x114610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114610u;
            // 0x114614: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114610) {
            ctx->pc = 0x114520u;
            runtime->cooperativeGuestYield();
            goto label_114520;
        }
    }
    ctx->pc = 0x114618u;
label_114618:
    // 0x114618: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x114618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11461c:
    // 0x11461c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x11461cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x114620: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x114620u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x114624: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x114624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x114628: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x114628u;
    {
        const bool branch_taken_0x114628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11462Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114628u;
            // 0x11462c: 0x32102  srl         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114628) {
            ctx->pc = 0x114678u;
            goto label_114678;
        }
    }
    ctx->pc = 0x114630u;
    // 0x114630: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x114630u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x114634: 0x27c300f0  addiu       $v1, $fp, 0xF0
    ctx->pc = 0x114634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 240));
    // 0x114638: 0x11000018  beqz        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x114638u;
    {
        const bool branch_taken_0x114638 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11463Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114638u;
            // 0x11463c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114638) {
            ctx->pc = 0x11469Cu;
            goto label_11469c;
        }
    }
    ctx->pc = 0x114640u;
    // 0x114640: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x114640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x114644: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x114644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_114648:
    // 0x114648: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x114648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11464c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11464cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x114650: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x114650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x114654: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x114654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x114658: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x114658u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11465c: 0xc8202b  sltu        $a0, $a2, $t0
    ctx->pc = 0x11465cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x114660: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x114660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x114664: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x114664u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x114668: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x114668u;
    {
        const bool branch_taken_0x114668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11466Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114668u;
            // 0x11466c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114668) {
            ctx->pc = 0x114648u;
            runtime->cooperativeGuestYield();
            goto label_114648;
        }
    }
    ctx->pc = 0x114670u;
    // 0x114670: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x114670u;
    {
        const bool branch_taken_0x114670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114670u;
            // 0x114674: 0x8fa60068  lw          $a2, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114670) {
            ctx->pc = 0x1146A0u;
            goto label_1146a0;
        }
    }
    ctx->pc = 0x114678u;
label_114678:
    // 0x114678: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x114678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x11467c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x11467cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x114680: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x114680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x114684: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114688: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x114688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x11468c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x11468cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x114690: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x114690u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x114694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x114698: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x114698u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_11469c:
    // 0x11469c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x11469cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1146a0:
    // 0x1146a0: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x1146a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1146a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1146a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1146a8: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x1146a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1146ac: 0x1440fe10  bnez        $v0, . + 4 + (-0x1F0 << 2)
    ctx->pc = 0x1146ACu;
    {
        const bool branch_taken_0x1146ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1146B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1146ACu;
            // 0x1146b0: 0xafa60068  sw          $a2, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146ac) {
            ctx->pc = 0x113EF0u;
            runtime->cooperativeGuestYield();
            goto label_113ef0;
        }
    }
    ctx->pc = 0x1146B4u;
label_1146b4:
    // 0x1146b4: 0x8fc3004c  lw          $v1, 0x4C($fp)
    ctx->pc = 0x1146b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x1146b8: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1146b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1146bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1146bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1146c0: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x1146c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_1146c4:
    // 0x1146c4: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1146c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x1146c8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1146c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1146cc: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1146ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1146d0: 0x14400498  bnez        $v0, . + 4 + (0x498 << 2)
    ctx->pc = 0x1146D0u;
    {
        const bool branch_taken_0x1146d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1146D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1146D0u;
            // 0x1146d4: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146d0) {
            ctx->pc = 0x115934u;
            goto label_115934;
        }
    }
    ctx->pc = 0x1146D8u;
    // 0x1146d8: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x1146d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x1146dc: 0x944200a2  lhu         $v0, 0xA2($v0)
    ctx->pc = 0x1146dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 162)));
    // 0x1146e0: 0x10400494  beqz        $v0, . + 4 + (0x494 << 2)
    ctx->pc = 0x1146E0u;
    {
        const bool branch_taken_0x1146e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1146E0u;
            // 0x1146e4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146e0) {
            ctx->pc = 0x115934u;
            goto label_115934;
        }
    }
    ctx->pc = 0x1146E8u;
    // 0x1146e8: 0x1040048d  beqz        $v0, . + 4 + (0x48D << 2)
    ctx->pc = 0x1146E8u;
    {
        const bool branch_taken_0x1146e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1146E8u;
            // 0x1146ec: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146e8) {
            ctx->pc = 0x115920u;
            goto label_115920;
        }
    }
    ctx->pc = 0x1146F0u;
    // 0x1146f0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1146f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1146f4: 0x0  nop
    ctx->pc = 0x1146f4u;
    // NOP
label_1146f8:
    // 0x1146f8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1146f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1146fc: 0x2e31818  mult        $v1, $s7, $v1
    ctx->pc = 0x1146fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x114700: 0x4617c034  c.lt.s      $f24, $f23
    ctx->pc = 0x114700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114704: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x114704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x114708: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11470c: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x11470cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114710: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x114710u;
    {
        const bool branch_taken_0x114710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114710u;
            // 0x114714: 0x25630004  addiu       $v1, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114710) {
            ctx->pc = 0x114774u;
            goto label_114774;
        }
    }
    ctx->pc = 0x114718u;
    // 0x114718: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x114718u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x11471c: 0x95620004  lhu         $v0, 0x4($t3)
    ctx->pc = 0x11471cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x114720: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x114720u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x114724: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x114728: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11472c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11472cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114734: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114738: 0x4602c040  add.s       $f1, $f24, $f2
    ctx->pc = 0x114738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x11473c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11473cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114744: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114748: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x114748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11474c: 0x0  nop
    ctx->pc = 0x11474cu;
    // NOP
    // 0x114750: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x114750u;
    {
        const bool branch_taken_0x114750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114750u;
            // 0x114754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114750) {
            ctx->pc = 0x1147D4u;
            goto label_1147d4;
        }
    }
    ctx->pc = 0x114758u;
    // 0x114758: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114758u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11475c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11475cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114760: 0x4602b840  add.s       $f1, $f23, $f2
    ctx->pc = 0x114760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x114764: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114768: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x114768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11476c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11476Cu;
    {
        const bool branch_taken_0x11476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11476c) {
            ctx->pc = 0x1147CCu;
            goto label_1147cc;
        }
    }
    ctx->pc = 0x114774u;
label_114774:
    // 0x114774: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x114774u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x114778: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11477c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11477cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114780: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114780u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114784: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114788: 0x4602c041  sub.s       $f1, $f24, $f2
    ctx->pc = 0x114788u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
    // 0x11478c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x11478cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114790: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x114790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114794: 0x0  nop
    ctx->pc = 0x114794u;
    // NOP
    // 0x114798: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x114798u;
    {
        const bool branch_taken_0x114798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114798u;
            // 0x11479c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114798) {
            ctx->pc = 0x1147D4u;
            goto label_1147d4;
        }
    }
    ctx->pc = 0x1147A0u;
    // 0x1147a0: 0x95620004  lhu         $v0, 0x4($t3)
    ctx->pc = 0x1147a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1147a4: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x1147a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x1147a8: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x1147a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1147ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1147acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1147b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1147b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1147b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1147b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1147b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1147b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1147bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1147bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1147c0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1147c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1147c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1147c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1147c8: 0x0  nop
    ctx->pc = 0x1147c8u;
    // NOP
label_1147cc:
    // 0x1147cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1147CCu;
    {
        const bool branch_taken_0x1147cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1147cc) {
            ctx->pc = 0x1147D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1147CCu;
            // 0x1147d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1147D4u;
            goto label_1147d4;
        }
    }
    ctx->pc = 0x1147D4u;
label_1147d4:
    // 0x1147d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1147d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147d8: 0x1040044c  beqz        $v0, . + 4 + (0x44C << 2)
    ctx->pc = 0x1147D8u;
    {
        const bool branch_taken_0x1147d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1147DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1147D8u;
            // 0x1147dc: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1147d8) {
            ctx->pc = 0x11590Cu;
            goto label_11590c;
        }
    }
    ctx->pc = 0x1147E0u;
    // 0x1147e0: 0x8fd50060  lw          $s5, 0x60($fp)
    ctx->pc = 0x1147e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1147e4: 0x460db801  sub.s       $f0, $f23, $f13
    ctx->pc = 0x1147e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[13]);
    // 0x1147e8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1147e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1147ec: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1147ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1147f0: 0x0  nop
    ctx->pc = 0x1147f0u;
    // NOP
    // 0x1147f4: 0x4502021a  bc1fl       . + 4 + (0x21A << 2)
    ctx->pc = 0x1147F4u;
    {
        const bool branch_taken_0x1147f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1147f4) {
            ctx->pc = 0x1147F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1147F4u;
            // 0x1147f8: 0x95620004  lhu         $v0, 0x4($t3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x115060u;
            goto label_115060;
        }
    }
    ctx->pc = 0x1147FCu;
    // 0x1147fc: 0x46176834  c.lt.s      $f13, $f23
    ctx->pc = 0x1147fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114800: 0x0  nop
    ctx->pc = 0x114800u;
    // NOP
    // 0x114804: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x114804u;
    {
        const bool branch_taken_0x114804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x114808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114804u;
            // 0x114808: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114804) {
            ctx->pc = 0x114810u;
            goto label_114810;
        }
    }
    ctx->pc = 0x11480Cu;
    // 0x11480c: 0x4600ab87  neg.s       $f14, $f21
    ctx->pc = 0x11480cu;
    ctx->f[14] = FPU_NEG_S(ctx->f[21]);
label_114810:
    // 0x114810: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x114810u;
    {
        const bool branch_taken_0x114810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114810u;
            // 0x114814: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114810) {
            ctx->pc = 0x115048u;
            goto label_115048;
        }
    }
    ctx->pc = 0x114818u;
label_114818:
    // 0x114818: 0x460e6300  add.s       $f12, $f12, $f14
    ctx->pc = 0x114818u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x11481c: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x11481Cu;
    {
        const bool branch_taken_0x11481c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11481Cu;
            // 0x114820: 0x25650004  addiu       $a1, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11481c) {
            ctx->pc = 0x114BB4u;
            goto label_114bb4;
        }
    }
    ctx->pc = 0x114824u;
    // 0x114824: 0x91620002  lbu         $v0, 0x2($t3)
    ctx->pc = 0x114824u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x114828: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x114828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11482c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11482Cu;
    {
        const bool branch_taken_0x11482c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11482Cu;
            // 0x114830: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11482c) {
            ctx->pc = 0x11484Cu;
            goto label_11484c;
        }
    }
    ctx->pc = 0x114834u;
    // 0x114834: 0x91620003  lbu         $v0, 0x3($t3)
    ctx->pc = 0x114834u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x114838: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x114838u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x11483c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11483cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x114840: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x114840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x114844: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x114844u;
    {
        const bool branch_taken_0x114844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114844u;
            // 0x114848: 0x436821  addu        $t5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114844) {
            ctx->pc = 0x114850u;
            goto label_114850;
        }
    }
    ctx->pc = 0x11484Cu;
label_11484c:
    // 0x11484c: 0x244d7788  addiu       $t5, $v0, 0x7788
    ctx->pc = 0x11484cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_114850:
    // 0x114850: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114854: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114858: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11485c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11485cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114860: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x114860u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x114864: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x114864u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x114868: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x114868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11486c: 0x956f0004  lhu         $t7, 0x4($t3)
    ctx->pc = 0x11486cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x114870: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x114870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x114874: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114874u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x114878: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x114878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11487c: 0x444823  subu        $t1, $v0, $a0
    ctx->pc = 0x11487cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x114880: 0x12f102b  sltu        $v0, $t1, $t7
    ctx->pc = 0x114880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x114884: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114884u;
    {
        const bool branch_taken_0x114884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114884u;
            // 0x114888: 0x460060c6  mov.s       $f3, $f12 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114884) {
            ctx->pc = 0x1148A0u;
            goto label_1148a0;
        }
    }
    ctx->pc = 0x11488Cu;
    // 0x11488c: 0x25e9ffff  addiu       $t1, $t7, -0x1
    ctx->pc = 0x11488cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x114890: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x114890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x114894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x114894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114898: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11489c: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x11489cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1148a0:
    // 0x1148a0: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1148A0u;
    {
        const bool branch_taken_0x1148a0 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x1148a0) {
            ctx->pc = 0x1148A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1148A0u;
            // 0x1148a4: 0x91620003  lbu         $v0, 0x3($t3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1148E0u;
            goto label_1148e0;
        }
    }
    ctx->pc = 0x1148A8u;
    // 0x1148a8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1148A8u;
    {
        const bool branch_taken_0x1148a8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1148ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1148A8u;
            // 0x1148ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148a8) {
            ctx->pc = 0x1148C0u;
            goto label_1148c0;
        }
    }
    ctx->pc = 0x1148B0u;
    // 0x1148b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1148b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1148b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1148b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1148b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1148B8u;
    {
        const bool branch_taken_0x1148b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1148B8u;
            // 0x1148bc: 0x461500c2  mul.s       $f3, $f0, $f21 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148b8) {
            ctx->pc = 0x1148DCu;
            goto label_1148dc;
        }
    }
    ctx->pc = 0x1148C0u;
label_1148c0:
    // 0x1148c0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1148c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1148c4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1148c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1148c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1148c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1148cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1148ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1148d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1148d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1148d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1148d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1148d8: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x1148d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1148dc:
    // 0x1148dc: 0x91620003  lbu         $v0, 0x3($t3)
    ctx->pc = 0x1148dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
label_1148e0:
    // 0x1148e0: 0x1244021  addu        $t0, $t1, $a0
    ctx->pc = 0x1148e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1148e4: 0x91a30001  lbu         $v1, 0x1($t5)
    ctx->pc = 0x1148e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x1148e8: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x1148e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1148ec: 0x94a50006  lhu         $a1, 0x6($a1)
    ctx->pc = 0x1148ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1148f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1148f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1148f4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1148f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1148f8: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x1148f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1148fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1148fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x114900: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x114900u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114904: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x114904u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x114908: 0x95640000  lhu         $a0, 0x0($t3)
    ctx->pc = 0x114908u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x11490c: 0x25310002  addiu       $s1, $t1, 0x2
    ctx->pc = 0x11490cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x114910: 0x1e91823  subu        $v1, $t7, $t1
    ctx->pc = 0x114910u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x114914: 0x22f282b  sltu        $a1, $s1, $t7
    ctx->pc = 0x114914u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x114918: 0x95a70002  lhu         $a3, 0x2($t5)
    ctx->pc = 0x114918u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x11491c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x11491cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x114920: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x114920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x114924: 0x65400a  movz        $t0, $v1, $a1
    ctx->pc = 0x114924u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x114928: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x114928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11492c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11492cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114930: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x114930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x114934: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x114934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x114938: 0x2d040002  sltiu       $a0, $t0, 0x2
    ctx->pc = 0x114938u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11493c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x11493Cu;
    {
        const bool branch_taken_0x11493c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x114940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11493Cu;
            // 0x114940: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11493c) {
            ctx->pc = 0x114968u;
            goto label_114968;
        }
    }
    ctx->pc = 0x114944u;
    // 0x114944: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x114944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x114948: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11494c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11494cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x114950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114954: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114958: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x114958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11495c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11495cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x114960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114960u;
    {
        const bool branch_taken_0x114960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114960u;
            // 0x114964: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114960) {
            ctx->pc = 0x114970u;
            goto label_114970;
        }
    }
    ctx->pc = 0x114968u;
label_114968:
    // 0x114968: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x114968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11496c: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x11496cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_114970:
    // 0x114970: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x114970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114974: 0x460102c2  mul.s       $f11, $f0, $f1
    ctx->pc = 0x114974u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x114978: 0x46025834  c.lt.s      $f11, $f2
    ctx->pc = 0x114978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11497c: 0x0  nop
    ctx->pc = 0x11497cu;
    // NOP
    // 0x114980: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x114980u;
    {
        const bool branch_taken_0x114980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x114980) {
            ctx->pc = 0x114984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114980u;
            // 0x114984: 0x460012c6  mov.s       $f11, $f2 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x114988u;
            goto label_114988;
        }
    }
    ctx->pc = 0x114988u;
label_114988:
    // 0x114988: 0x14800062  bnez        $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x114988u;
    {
        const bool branch_taken_0x114988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x114988) {
            ctx->pc = 0x114B14u;
            goto label_114b14;
        }
    }
    ctx->pc = 0x114990u;
    // 0x114990: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114994: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114998: 0x46015801  sub.s       $f0, $f11, $f1
    ctx->pc = 0x114998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
    // 0x11499c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x11499cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1149a0: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x1149A0u;
    {
        const bool branch_taken_0x1149a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1149a0) {
            ctx->pc = 0x114B14u;
            goto label_114b14;
        }
    }
    ctx->pc = 0x1149A8u;
    // 0x1149a8: 0x46015840  add.s       $f1, $f11, $f1
    ctx->pc = 0x1149a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x1149ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1149acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1149b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1149b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1149b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1149b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1149b8: 0x0  nop
    ctx->pc = 0x1149b8u;
    // NOP
    // 0x1149bc: 0x45000055  bc1f        . + 4 + (0x55 << 2)
    ctx->pc = 0x1149BCu;
    {
        const bool branch_taken_0x1149bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1149C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1149BCu;
            // 0x1149c0: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149bc) {
            ctx->pc = 0x114B14u;
            goto label_114b14;
        }
    }
    ctx->pc = 0x1149C4u;
    // 0x1149c4: 0x91b20000  lbu         $s2, 0x0($t5)
    ctx->pc = 0x1149c4u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1149c8: 0x1240019e  beqz        $s2, . + 4 + (0x19E << 2)
    ctx->pc = 0x1149C8u;
    {
        const bool branch_taken_0x1149c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1149C8u;
            // 0x1149cc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149c8) {
            ctx->pc = 0x115044u;
            goto label_115044;
        }
    }
    ctx->pc = 0x1149D0u;
    // 0x1149d0: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x1149d0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149d4: 0x0  nop
    ctx->pc = 0x1149d4u;
    // NOP
label_1149d8:
    // 0x1149d8: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x1149d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1149dc: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x1149dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1149e0: 0x84480004  lh          $t0, 0x4($v0)
    ctx->pc = 0x1149e0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1149e4: 0x51000046  beql        $t0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1149E4u;
    {
        const bool branch_taken_0x1149e4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1149e4) {
            ctx->pc = 0x1149E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1149E4u;
            // 0x1149e8: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114B00u;
            goto label_114b00;
        }
    }
    ctx->pc = 0x1149ECu;
    // 0x1149ec: 0x0  nop
    ctx->pc = 0x1149ecu;
    // NOP
label_1149f0:
    // 0x1149f0: 0x2524ffff  addiu       $a0, $t1, -0x1
    ctx->pc = 0x1149f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1149f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1149f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1149f8: 0x25e5ffff  addiu       $a1, $t7, -0x1
    ctx->pc = 0x1149f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x1149fc: 0x25270001  addiu       $a3, $t1, 0x1
    ctx->pc = 0x1149fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x114a00: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x114a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x114a04: 0xa7302a  slt         $a2, $a1, $a3
    ctx->pc = 0x114a04u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x114a08: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x114a08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a0c: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x114a0cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x114a10: 0xe6180a  movz        $v1, $a3, $a2
    ctx->pc = 0x114a10u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x114a14: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x114a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x114a18: 0x903018  mult        $a2, $a0, $s0
    ctx->pc = 0x114a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x114a1c: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x114a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x114a20: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x114a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x114a24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114a28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114a2c: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x114a2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x114a30: 0xc5470000  lwc1        $f7, 0x0($t2)
    ctx->pc = 0x114a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x114a34: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x114a34u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x114a38: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x114a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x114a3c: 0xca2021  addu        $a0, $a2, $t2
    ctx->pc = 0x114a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x114a40: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x114a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x114a44: 0x703018  mult        $a2, $v1, $s0
    ctx->pc = 0x114a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x114a48: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x114a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x114a4c: 0x46000242  mul.s       $f9, $f0, $f0
    ctx->pc = 0x114a4cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x114a50: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x114a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x114a54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x114a54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x114a58: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x114a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x114a5c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x114a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x114a60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114a64: 0x460b5a82  mul.s       $f10, $f11, $f11
    ctx->pc = 0x114a64u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x114a68: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x114a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x114a6c: 0x82023  negu        $a0, $t0
    ctx->pc = 0x114a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x114a70: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x114a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x114a74: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x114a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x114a78: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x114a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x114a7c: 0x46014902  mul.s       $f4, $f9, $f1
    ctx->pc = 0x114a7cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x114a80: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x114a80u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x114a84: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x114a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x114a88: 0x46024081  sub.s       $f2, $f8, $f2
    ctx->pc = 0x114a88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x114a8c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x114a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x114a90: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x114a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x114a94: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x114a94u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x114a98: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x114a98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x114a9c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x114a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x114aa0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x114aa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x114aa4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x114aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114aa8: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x114aa8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x114aac: 0x1042026  xor         $a0, $t0, $a0
    ctx->pc = 0x114aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 4));
    // 0x114ab0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x114ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x114ab4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x114ab8: 0x46023880  add.s       $f2, $f7, $f2
    ctx->pc = 0x114ab8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x114abc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x114abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x114ac0: 0x460340c1  sub.s       $f3, $f8, $f3
    ctx->pc = 0x114ac0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x114ac4: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x114ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x114ac8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x114ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x114acc: 0x44403  sra         $t0, $a0, 16
    ctx->pc = 0x114accu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 16));
    // 0x114ad0: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x114ad0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x114ad4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x114ad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x114ad8: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x114ad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x114adc: 0x460a5942  mul.s       $f5, $f11, $f10
    ctx->pc = 0x114adcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x114ae0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x114ae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x114ae4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x114ae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x114ae8: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x114ae8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x114aec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x114af0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x114af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x114af4: 0x1500ffbe  bnez        $t0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x114AF4u;
    {
        const bool branch_taken_0x114af4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x114AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114AF4u;
            // 0x114af8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114af4) {
            ctx->pc = 0x1149F0u;
            runtime->cooperativeGuestYield();
            goto label_1149f0;
        }
    }
    ctx->pc = 0x114AFCu;
    // 0x114afc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x114afcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_114b00:
    // 0x114b00: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x114b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x114b04: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x114B04u;
    {
        const bool branch_taken_0x114b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B04u;
            // 0x114b08: 0x25ce0040  addiu       $t6, $t6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b04) {
            ctx->pc = 0x1149D8u;
            runtime->cooperativeGuestYield();
            goto label_1149d8;
        }
    }
    ctx->pc = 0x114B0Cu;
    // 0x114b0c: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x114B0Cu;
    {
        const bool branch_taken_0x114b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B0Cu;
            // 0x114b10: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b0c) {
            ctx->pc = 0x115048u;
            goto label_115048;
        }
    }
    ctx->pc = 0x114B14u;
label_114b14:
    // 0x114b14: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114b18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114b1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x114b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114b20: 0x91a90000  lbu         $t1, 0x0($t5)
    ctx->pc = 0x114b20u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x114b24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x114b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b28: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x114b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x114b2c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x114b2cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x114b30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114b30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x114b34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x114b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x114b38: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x114b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x114b3c: 0x11200141  beqz        $t1, . + 4 + (0x141 << 2)
    ctx->pc = 0x114B3Cu;
    {
        const bool branch_taken_0x114b3c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B3Cu;
            // 0x114b40: 0x834021  addu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b3c) {
            ctx->pc = 0x115044u;
            goto label_115044;
        }
    }
    ctx->pc = 0x114B44u;
    // 0x114b44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x114b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_114b48:
    // 0x114b48: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x114b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x114b4c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x114b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x114b50: 0x84450004  lh          $a1, 0x4($v0)
    ctx->pc = 0x114b50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x114b54: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x114B54u;
    {
        const bool branch_taken_0x114b54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x114b54) {
            ctx->pc = 0x114B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114B54u;
            // 0x114b58: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114BA0u;
            goto label_114ba0;
        }
    }
    ctx->pc = 0x114B5Cu;
    // 0x114b5c: 0x0  nop
    ctx->pc = 0x114b5cu;
    // NOP
label_114b60:
    // 0x114b60: 0x51023  negu        $v0, $a1
    ctx->pc = 0x114b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x114b64: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x114b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x114b68: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x114b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x114b6c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x114b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114b70: 0x22023  negu        $a0, $v0
    ctx->pc = 0x114b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x114b74: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x114b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x114b78: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x114b78u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x114b7c: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x114b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x114b80: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x114b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x114b84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x114b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x114b88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x114b8c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x114b8cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x114b90: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x114b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x114b94: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x114B94u;
    {
        const bool branch_taken_0x114b94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x114B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114B94u;
            // 0x114b98: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b94) {
            ctx->pc = 0x114B60u;
            runtime->cooperativeGuestYield();
            goto label_114b60;
        }
    }
    ctx->pc = 0x114B9Cu;
    // 0x114b9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x114b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_114ba0:
    // 0x114ba0: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x114ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x114ba4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x114BA4u;
    {
        const bool branch_taken_0x114ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114BA4u;
            // 0x114ba8: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ba4) {
            ctx->pc = 0x114B48u;
            runtime->cooperativeGuestYield();
            goto label_114b48;
        }
    }
    ctx->pc = 0x114BACu;
    // 0x114bac: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x114BACu;
    {
        const bool branch_taken_0x114bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114BACu;
            // 0x114bb0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114bac) {
            ctx->pc = 0x115048u;
            goto label_115048;
        }
    }
    ctx->pc = 0x114BB4u;
label_114bb4:
    // 0x114bb4: 0x91620003  lbu         $v0, 0x3($t3)
    ctx->pc = 0x114bb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x114bb8: 0x94a40006  lhu         $a0, 0x6($a1)
    ctx->pc = 0x114bb8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x114bbc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x114bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x114bc0: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x114bc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x114bc4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x114bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x114bc8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x114bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x114bcc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x114BCCu;
    {
        const bool branch_taken_0x114bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114BCCu;
            // 0x114bd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114bcc) {
            ctx->pc = 0x114BE8u;
            goto label_114be8;
        }
    }
    ctx->pc = 0x114BD4u;
    // 0x114bd4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x114bd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x114bd8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x114bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x114bdc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x114bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x114be0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114BE0u;
    {
        const bool branch_taken_0x114be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114BE0u;
            // 0x114be4: 0x827821  addu        $t7, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114be0) {
            ctx->pc = 0x114BF0u;
            goto label_114bf0;
        }
    }
    ctx->pc = 0x114BE8u;
label_114be8:
    // 0x114be8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x114be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x114bec: 0x244f7788  addiu       $t7, $v0, 0x7788
    ctx->pc = 0x114becu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_114bf0:
    // 0x114bf0: 0x90960001  lbu         $s6, 0x1($a0)
    ctx->pc = 0x114bf0u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x114bf4: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x114bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x114bf8: 0x12c00112  beqz        $s6, . + 4 + (0x112 << 2)
    ctx->pc = 0x114BF8u;
    {
        const bool branch_taken_0x114bf8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x114BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114BF8u;
            // 0x114bfc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114bf8) {
            ctx->pc = 0x115044u;
            goto label_115044;
        }
    }
    ctx->pc = 0x114C00u;
    // 0x114c00: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x114c00u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c04: 0x0  nop
    ctx->pc = 0x114c04u;
    // NOP
label_114c08:
    // 0x114c08: 0x460c6834  c.lt.s      $f13, $f12
    ctx->pc = 0x114c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114c0c: 0x0  nop
    ctx->pc = 0x114c0cu;
    // NOP
    // 0x114c10: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x114C10u;
    {
        const bool branch_taken_0x114c10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114C10u;
            // 0x114c14: 0x95840002  lhu         $a0, 0x2($t4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c10) {
            ctx->pc = 0x114C70u;
            goto label_114c70;
        }
    }
    ctx->pc = 0x114C18u;
    // 0x114c18: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x114c18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x114c1c: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x114c1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x114c20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x114c24: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114c28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114c30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114c34: 0x46026840  add.s       $f1, $f13, $f2
    ctx->pc = 0x114c34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x114c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x114c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114c3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114c40: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114c44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x114c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114c48: 0x0  nop
    ctx->pc = 0x114c48u;
    // NOP
    // 0x114c4c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x114C4Cu;
    {
        const bool branch_taken_0x114c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114C4Cu;
            // 0x114c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c4c) {
            ctx->pc = 0x114CCCu;
            goto label_114ccc;
        }
    }
    ctx->pc = 0x114C54u;
    // 0x114c54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114c54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114c58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114c5c: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x114c5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x114c60: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114c64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x114c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114c68: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x114C68u;
    {
        const bool branch_taken_0x114c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114c68) {
            ctx->pc = 0x114CC4u;
            goto label_114cc4;
        }
    }
    ctx->pc = 0x114C70u;
label_114c70:
    // 0x114c70: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114c74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114c78: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114c78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114c7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114c80: 0x46026841  sub.s       $f1, $f13, $f2
    ctx->pc = 0x114c80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x114c84: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114c88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x114c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114c8c: 0x0  nop
    ctx->pc = 0x114c8cu;
    // NOP
    // 0x114c90: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x114C90u;
    {
        const bool branch_taken_0x114c90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114C90u;
            // 0x114c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c90) {
            ctx->pc = 0x114CCCu;
            goto label_114ccc;
        }
    }
    ctx->pc = 0x114C98u;
    // 0x114c98: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x114c98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x114c9c: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x114c9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x114ca0: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x114ca0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x114ca4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x114ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114cac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x114cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114cb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114cb8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x114cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x114cbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x114cbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114cc0: 0x0  nop
    ctx->pc = 0x114cc0u;
    // NOP
label_114cc4:
    // 0x114cc4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x114CC4u;
    {
        const bool branch_taken_0x114cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x114cc4) {
            ctx->pc = 0x114CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114CC4u;
            // 0x114cc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114CCCu;
            goto label_114ccc;
        }
    }
    ctx->pc = 0x114CCCu;
label_114ccc:
    // 0x114ccc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x114cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cd0: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x114CD0u;
    {
        const bool branch_taken_0x114cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114CD0u;
            // 0x114cd4: 0x460060c6  mov.s       $f3, $f12 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114cd0) {
            ctx->pc = 0x115034u;
            goto label_115034;
        }
    }
    ctx->pc = 0x114CD8u;
    // 0x114cd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114cdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114ce0: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114ce8: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x114ce8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x114cec: 0x95840002  lhu         $a0, 0x2($t4)
    ctx->pc = 0x114cecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x114cf0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x114cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x114cf4: 0x95900000  lhu         $s0, 0x0($t4)
    ctx->pc = 0x114cf4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x114cf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x114cf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x114cfc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114cfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x114d00: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x114d00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x114d04: 0x444823  subu        $t1, $v0, $a0
    ctx->pc = 0x114d04u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x114d08: 0x130102b  sltu        $v0, $t1, $s0
    ctx->pc = 0x114d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x114d0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114D0Cu;
    {
        const bool branch_taken_0x114d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D0Cu;
            // 0x114d10: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d0c) {
            ctx->pc = 0x114D28u;
            goto label_114d28;
        }
    }
    ctx->pc = 0x114D14u;
    // 0x114d14: 0x2609ffff  addiu       $t1, $s0, -0x1
    ctx->pc = 0x114d14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x114d18: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x114d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x114d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x114d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114d20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114d24: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x114d24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_114d28:
    // 0x114d28: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x114D28u;
    {
        const bool branch_taken_0x114d28 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x114d28) {
            ctx->pc = 0x114D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114D28u;
            // 0x114d2c: 0x91620003  lbu         $v0, 0x3($t3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114D68u;
            goto label_114d68;
        }
    }
    ctx->pc = 0x114D30u;
    // 0x114d30: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114D30u;
    {
        const bool branch_taken_0x114d30 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x114D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D30u;
            // 0x114d34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d30) {
            ctx->pc = 0x114D48u;
            goto label_114d48;
        }
    }
    ctx->pc = 0x114D38u;
    // 0x114d38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114d38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114d40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x114D40u;
    {
        const bool branch_taken_0x114d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D40u;
            // 0x114d44: 0x461500c2  mul.s       $f3, $f0, $f21 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d40) {
            ctx->pc = 0x114D64u;
            goto label_114d64;
        }
    }
    ctx->pc = 0x114D48u;
label_114d48:
    // 0x114d48: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x114d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x114d4c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x114d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x114d50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x114d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x114d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114d58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114d5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x114d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x114d60: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x114d60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_114d64:
    // 0x114d64: 0x91620003  lbu         $v0, 0x3($t3)
    ctx->pc = 0x114d64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
label_114d68:
    // 0x114d68: 0x1244021  addu        $t0, $t1, $a0
    ctx->pc = 0x114d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x114d6c: 0x91e30001  lbu         $v1, 0x1($t7)
    ctx->pc = 0x114d6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x114d70: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x114d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x114d74: 0x94a50006  lhu         $a1, 0x6($a1)
    ctx->pc = 0x114d74u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x114d78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x114d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x114d7c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x114d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x114d80: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x114d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x114d84: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x114d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x114d88: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x114d88u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114d8c: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x114d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x114d90: 0x95640000  lhu         $a0, 0x0($t3)
    ctx->pc = 0x114d90u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x114d94: 0x25320002  addiu       $s2, $t1, 0x2
    ctx->pc = 0x114d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x114d98: 0x2091823  subu        $v1, $s0, $t1
    ctx->pc = 0x114d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x114d9c: 0x250282b  sltu        $a1, $s2, $s0
    ctx->pc = 0x114d9cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x114da0: 0x95e70002  lhu         $a3, 0x2($t7)
    ctx->pc = 0x114da0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x114da4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x114da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x114da8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x114da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x114dac: 0x65400a  movz        $t0, $v1, $a1
    ctx->pc = 0x114dacu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x114db0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x114db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x114db4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114db4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114db8: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x114db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x114dbc: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x114dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x114dc0: 0x2d040002  sltiu       $a0, $t0, 0x2
    ctx->pc = 0x114dc0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x114dc4: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x114DC4u;
    {
        const bool branch_taken_0x114dc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x114DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114DC4u;
            // 0x114dc8: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dc4) {
            ctx->pc = 0x114DF0u;
            goto label_114df0;
        }
    }
    ctx->pc = 0x114DCCu;
    // 0x114dcc: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x114dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x114dd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x114dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114ddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114de0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x114de0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x114de4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x114de4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x114de8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114DE8u;
    {
        const bool branch_taken_0x114de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114DE8u;
            // 0x114dec: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114de8) {
            ctx->pc = 0x114DF8u;
            goto label_114df8;
        }
    }
    ctx->pc = 0x114DF0u;
label_114df0:
    // 0x114df0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x114df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114df4: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x114df4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_114df8:
    // 0x114df8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x114df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114dfc: 0x460102c2  mul.s       $f11, $f0, $f1
    ctx->pc = 0x114dfcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x114e00: 0x46025834  c.lt.s      $f11, $f2
    ctx->pc = 0x114e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114e04: 0x0  nop
    ctx->pc = 0x114e04u;
    // NOP
    // 0x114e08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x114E08u;
    {
        const bool branch_taken_0x114e08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x114e08) {
            ctx->pc = 0x114E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114E08u;
            // 0x114e0c: 0x460012c6  mov.s       $f11, $f2 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x114E10u;
            goto label_114e10;
        }
    }
    ctx->pc = 0x114E10u;
label_114e10:
    // 0x114e10: 0x14800062  bnez        $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x114E10u;
    {
        const bool branch_taken_0x114e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x114e10) {
            ctx->pc = 0x114F9Cu;
            goto label_114f9c;
        }
    }
    ctx->pc = 0x114E18u;
    // 0x114e18: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114e1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114e20: 0x46015801  sub.s       $f0, $f11, $f1
    ctx->pc = 0x114e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
    // 0x114e24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x114e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114e28: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x114E28u;
    {
        const bool branch_taken_0x114e28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x114e28) {
            ctx->pc = 0x114F9Cu;
            goto label_114f9c;
        }
    }
    ctx->pc = 0x114E30u;
    // 0x114e30: 0x46015840  add.s       $f1, $f11, $f1
    ctx->pc = 0x114e30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x114e34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114e38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114e3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x114e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114e40: 0x0  nop
    ctx->pc = 0x114e40u;
    // NOP
    // 0x114e44: 0x45000055  bc1f        . + 4 + (0x55 << 2)
    ctx->pc = 0x114E44u;
    {
        const bool branch_taken_0x114e44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x114E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114E44u;
            // 0x114e48: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e44) {
            ctx->pc = 0x114F9Cu;
            goto label_114f9c;
        }
    }
    ctx->pc = 0x114E4Cu;
    // 0x114e4c: 0x91f30000  lbu         $s3, 0x0($t7)
    ctx->pc = 0x114e4cu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x114e50: 0x12600078  beqz        $s3, . + 4 + (0x78 << 2)
    ctx->pc = 0x114E50u;
    {
        const bool branch_taken_0x114e50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114E50u;
            // 0x114e54: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e50) {
            ctx->pc = 0x115034u;
            goto label_115034;
        }
    }
    ctx->pc = 0x114E58u;
    // 0x114e58: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x114e58u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e5c: 0x0  nop
    ctx->pc = 0x114e5cu;
    // NOP
label_114e60:
    // 0x114e60: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x114e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x114e64: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x114e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x114e68: 0x84480004  lh          $t0, 0x4($v0)
    ctx->pc = 0x114e68u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x114e6c: 0x51000046  beql        $t0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x114E6Cu;
    {
        const bool branch_taken_0x114e6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x114e6c) {
            ctx->pc = 0x114E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114E6Cu;
            // 0x114e70: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114F88u;
            goto label_114f88;
        }
    }
    ctx->pc = 0x114E74u;
    // 0x114e74: 0x0  nop
    ctx->pc = 0x114e74u;
    // NOP
label_114e78:
    // 0x114e78: 0x2524ffff  addiu       $a0, $t1, -0x1
    ctx->pc = 0x114e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x114e7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x114e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114e80: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x114e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x114e84: 0x25270001  addiu       $a3, $t1, 0x1
    ctx->pc = 0x114e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x114e88: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x114e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x114e8c: 0xa7302a  slt         $a2, $a1, $a3
    ctx->pc = 0x114e8cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x114e90: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x114e90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e94: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x114e94u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x114e98: 0xe6180a  movz        $v1, $a3, $a2
    ctx->pc = 0x114e98u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x114e9c: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x114e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x114ea0: 0x913018  mult        $a2, $a0, $s1
    ctx->pc = 0x114ea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x114ea4: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x114ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x114ea8: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x114ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x114eac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114eb4: 0x242280a  movz        $a1, $s2, $v0
    ctx->pc = 0x114eb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x114eb8: 0xc5470000  lwc1        $f7, 0x0($t2)
    ctx->pc = 0x114eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x114ebc: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x114ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x114ec0: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x114ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x114ec4: 0xca2021  addu        $a0, $a2, $t2
    ctx->pc = 0x114ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x114ec8: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x114ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x114ecc: 0x713018  mult        $a2, $v1, $s1
    ctx->pc = 0x114eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x114ed0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x114ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x114ed4: 0x46000242  mul.s       $f9, $f0, $f0
    ctx->pc = 0x114ed4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x114ed8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x114ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x114edc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x114edcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x114ee0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x114ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x114ee4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x114ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x114ee8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114eec: 0x460b5a82  mul.s       $f10, $f11, $f11
    ctx->pc = 0x114eecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x114ef0: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x114ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x114ef4: 0x82023  negu        $a0, $t0
    ctx->pc = 0x114ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x114ef8: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x114ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x114efc: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x114efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x114f00: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x114f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x114f04: 0x46014902  mul.s       $f4, $f9, $f1
    ctx->pc = 0x114f04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x114f08: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x114f08u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x114f0c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x114f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x114f10: 0x46024081  sub.s       $f2, $f8, $f2
    ctx->pc = 0x114f10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x114f14: 0x41023  negu        $v0, $a0
    ctx->pc = 0x114f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x114f18: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x114f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x114f1c: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x114f1cu;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x114f20: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x114f20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x114f24: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x114f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x114f28: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x114f28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x114f2c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x114f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114f30: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x114f30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x114f34: 0x1042026  xor         $a0, $t0, $a0
    ctx->pc = 0x114f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 4));
    // 0x114f38: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x114f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x114f3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x114f40: 0x46023880  add.s       $f2, $f7, $f2
    ctx->pc = 0x114f40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x114f44: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x114f44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x114f48: 0x460340c1  sub.s       $f3, $f8, $f3
    ctx->pc = 0x114f48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x114f4c: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x114f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x114f50: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x114f50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x114f54: 0x44403  sra         $t0, $a0, 16
    ctx->pc = 0x114f54u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 16));
    // 0x114f58: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x114f58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x114f5c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x114f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x114f60: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x114f60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x114f64: 0x460a5942  mul.s       $f5, $f11, $f10
    ctx->pc = 0x114f64u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x114f68: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x114f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x114f6c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x114f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x114f70: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x114f70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x114f74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x114f78: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x114f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x114f7c: 0x1500ffbe  bnez        $t0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x114F7Cu;
    {
        const bool branch_taken_0x114f7c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x114F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114F7Cu;
            // 0x114f80: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f7c) {
            ctx->pc = 0x114E78u;
            runtime->cooperativeGuestYield();
            goto label_114e78;
        }
    }
    ctx->pc = 0x114F84u;
    // 0x114f84: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x114f84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_114f88:
    // 0x114f88: 0x1b3102b  sltu        $v0, $t5, $s3
    ctx->pc = 0x114f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x114f8c: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x114F8Cu;
    {
        const bool branch_taken_0x114f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114F8Cu;
            // 0x114f90: 0x25ce0040  addiu       $t6, $t6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f8c) {
            ctx->pc = 0x114E60u;
            runtime->cooperativeGuestYield();
            goto label_114e60;
        }
    }
    ctx->pc = 0x114F94u;
    // 0x114f94: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x114F94u;
    {
        const bool branch_taken_0x114f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114F94u;
            // 0x114f98: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f94) {
            ctx->pc = 0x115038u;
            goto label_115038;
        }
    }
    ctx->pc = 0x114F9Cu;
label_114f9c:
    // 0x114f9c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x114f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x114fa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114fa4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x114fa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114fa8: 0x91e90000  lbu         $t1, 0x0($t7)
    ctx->pc = 0x114fa8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x114fac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x114facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fb0: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x114fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x114fb4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x114fb4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x114fb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114fb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x114fbc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x114fbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x114fc0: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x114fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x114fc4: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x114FC4u;
    {
        const bool branch_taken_0x114fc4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x114FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114FC4u;
            // 0x114fc8: 0x834021  addu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fc4) {
            ctx->pc = 0x115034u;
            goto label_115034;
        }
    }
    ctx->pc = 0x114FCCu;
    // 0x114fcc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x114fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_114fd0:
    // 0x114fd0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x114fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x114fd4: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x114fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x114fd8: 0x84450004  lh          $a1, 0x4($v0)
    ctx->pc = 0x114fd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x114fdc: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x114FDCu;
    {
        const bool branch_taken_0x114fdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x114fdc) {
            ctx->pc = 0x114FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114FDCu;
            // 0x114fe0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x115028u;
            goto label_115028;
        }
    }
    ctx->pc = 0x114FE4u;
    // 0x114fe4: 0x0  nop
    ctx->pc = 0x114fe4u;
    // NOP
label_114fe8:
    // 0x114fe8: 0x51023  negu        $v0, $a1
    ctx->pc = 0x114fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x114fec: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x114fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x114ff0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x114ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x114ff4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x114ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114ff8: 0x22023  negu        $a0, $v0
    ctx->pc = 0x114ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x114ffc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x114ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x115000: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x115000u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x115004: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x115004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x115008: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x115008u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11500c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11500cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x115010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x115010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x115014: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x115014u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x115018: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x115018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11501c: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11501Cu;
    {
        const bool branch_taken_0x11501c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x115020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11501Cu;
            // 0x115020: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11501c) {
            ctx->pc = 0x114FE8u;
            runtime->cooperativeGuestYield();
            goto label_114fe8;
        }
    }
    ctx->pc = 0x115024u;
    // 0x115024: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x115024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_115028:
    // 0x115028: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x115028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11502c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x11502Cu;
    {
        const bool branch_taken_0x11502c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11502Cu;
            // 0x115030: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11502c) {
            ctx->pc = 0x114FD0u;
            runtime->cooperativeGuestYield();
            goto label_114fd0;
        }
    }
    ctx->pc = 0x115034u;
label_115034:
    // 0x115034: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x115034u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_115038:
    // 0x115038: 0x296102b  sltu        $v0, $s4, $s6
    ctx->pc = 0x115038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x11503c: 0x1440fef2  bnez        $v0, . + 4 + (-0x10E << 2)
    ctx->pc = 0x11503Cu;
    {
        const bool branch_taken_0x11503c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11503Cu;
            // 0x115040: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11503c) {
            ctx->pc = 0x114C08u;
            runtime->cooperativeGuestYield();
            goto label_114c08;
        }
    }
    ctx->pc = 0x115044u;
label_115044:
    // 0x115044: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x115044u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_115048:
    // 0x115048: 0x460cb801  sub.s       $f0, $f23, $f12
    ctx->pc = 0x115048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[12]);
    // 0x11504c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x11504cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x115050: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x115050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115054: 0x0  nop
    ctx->pc = 0x115054u;
    // NOP
    // 0x115058: 0x4501fdef  bc1t        . + 4 + (-0x211 << 2)
    ctx->pc = 0x115058u;
    {
        const bool branch_taken_0x115058 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11505Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115058u;
            // 0x11505c: 0x95620004  lhu         $v0, 0x4($t3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115058) {
            ctx->pc = 0x114818u;
            runtime->cooperativeGuestYield();
            goto label_114818;
        }
    }
    ctx->pc = 0x115060u;
label_115060:
    // 0x115060: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x115060u;
    {
        const bool branch_taken_0x115060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115060u;
            // 0x115064: 0x25650004  addiu       $a1, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115060) {
            ctx->pc = 0x1153F4u;
            goto label_1153f4;
        }
    }
    ctx->pc = 0x115068u;
    // 0x115068: 0x91620002  lbu         $v0, 0x2($t3)
    ctx->pc = 0x115068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x11506c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11506cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x115070: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115070u;
    {
        const bool branch_taken_0x115070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115070u;
            // 0x115074: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115070) {
            ctx->pc = 0x115090u;
            goto label_115090;
        }
    }
    ctx->pc = 0x115078u;
    // 0x115078: 0x91620003  lbu         $v0, 0x3($t3)
    ctx->pc = 0x115078u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x11507c: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x11507cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x115080: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x115080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x115084: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x115084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x115088: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x115088u;
    {
        const bool branch_taken_0x115088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11508Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115088u;
            // 0x11508c: 0x436021  addu        $t4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115088) {
            ctx->pc = 0x115094u;
            goto label_115094;
        }
    }
    ctx->pc = 0x115090u;
label_115090:
    // 0x115090: 0x244c7788  addiu       $t4, $v0, 0x7788
    ctx->pc = 0x115090u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_115094:
    // 0x115094: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115098: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x115098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11509c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x11509cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1150a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1150a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1150a4: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x1150a4u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x1150a8: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x1150a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1150ac: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x1150acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1150b0: 0x956f0004  lhu         $t7, 0x4($t3)
    ctx->pc = 0x1150b0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1150b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1150b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1150b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1150b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1150bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1150bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1150c0: 0x444823  subu        $t1, $v0, $a0
    ctx->pc = 0x1150c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1150c4: 0x12f102b  sltu        $v0, $t1, $t7
    ctx->pc = 0x1150c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x1150c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1150C8u;
    {
        const bool branch_taken_0x1150c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1150CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1150C8u;
            // 0x1150cc: 0x4600b8c6  mov.s       $f3, $f23 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150c8) {
            ctx->pc = 0x1150E4u;
            goto label_1150e4;
        }
    }
    ctx->pc = 0x1150D0u;
    // 0x1150d0: 0x25e9ffff  addiu       $t1, $t7, -0x1
    ctx->pc = 0x1150d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x1150d4: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x1150d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1150d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1150d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1150dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1150dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1150e0: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x1150e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1150e4:
    // 0x1150e4: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1150E4u;
    {
        const bool branch_taken_0x1150e4 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x1150e4) {
            ctx->pc = 0x1150E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1150E4u;
            // 0x1150e8: 0x91620003  lbu         $v0, 0x3($t3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x115124u;
            goto label_115124;
        }
    }
    ctx->pc = 0x1150ECu;
    // 0x1150ec: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1150ECu;
    {
        const bool branch_taken_0x1150ec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1150F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1150ECu;
            // 0x1150f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150ec) {
            ctx->pc = 0x115104u;
            goto label_115104;
        }
    }
    ctx->pc = 0x1150F4u;
    // 0x1150f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1150f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1150f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1150f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1150fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1150FCu;
    {
        const bool branch_taken_0x1150fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1150FCu;
            // 0x115100: 0x461500c2  mul.s       $f3, $f0, $f21 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150fc) {
            ctx->pc = 0x115120u;
            goto label_115120;
        }
    }
    ctx->pc = 0x115104u;
label_115104:
    // 0x115104: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x115104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x115108: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x115108u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x11510c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x115110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x115110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115114: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x115114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x115118: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x115118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11511c: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x11511cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_115120:
    // 0x115120: 0x91620003  lbu         $v0, 0x3($t3)
    ctx->pc = 0x115120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
label_115124:
    // 0x115124: 0x1244021  addu        $t0, $t1, $a0
    ctx->pc = 0x115124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x115128: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x115128u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x11512c: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x11512cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x115130: 0x94a50006  lhu         $a1, 0x6($a1)
    ctx->pc = 0x115130u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x115134: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x115134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x115138: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x115138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x11513c: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x11513cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x115140: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x115140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x115144: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x115144u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115148: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x115148u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11514c: 0x95640000  lhu         $a0, 0x0($t3)
    ctx->pc = 0x11514cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x115150: 0x25310002  addiu       $s1, $t1, 0x2
    ctx->pc = 0x115150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x115154: 0x1e91823  subu        $v1, $t7, $t1
    ctx->pc = 0x115154u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x115158: 0x22f282b  sltu        $a1, $s1, $t7
    ctx->pc = 0x115158u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x11515c: 0x95870002  lhu         $a3, 0x2($t4)
    ctx->pc = 0x11515cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x115160: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x115160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115164: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x115164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x115168: 0x65400a  movz        $t0, $v1, $a1
    ctx->pc = 0x115168u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x11516c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x11516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x115170: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x115170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x115174: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x115174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x115178: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x115178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11517c: 0x2d040002  sltiu       $a0, $t0, 0x2
    ctx->pc = 0x11517cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x115180: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x115180u;
    {
        const bool branch_taken_0x115180 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x115184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115180u;
            // 0x115184: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115180) {
            ctx->pc = 0x1151ACu;
            goto label_1151ac;
        }
    }
    ctx->pc = 0x115188u;
    // 0x115188: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x115188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x11518c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11518cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x115190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x115194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x115198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11519c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11519cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1151a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1151a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1151a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1151A4u;
    {
        const bool branch_taken_0x1151a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1151A4u;
            // 0x1151a8: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151a4) {
            ctx->pc = 0x1151B4u;
            goto label_1151b4;
        }
    }
    ctx->pc = 0x1151ACu;
label_1151ac:
    // 0x1151ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1151acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1151b0: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1151b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1151b4:
    // 0x1151b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1151b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1151b8: 0x460102c2  mul.s       $f11, $f0, $f1
    ctx->pc = 0x1151b8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1151bc: 0x46025834  c.lt.s      $f11, $f2
    ctx->pc = 0x1151bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1151c0: 0x0  nop
    ctx->pc = 0x1151c0u;
    // NOP
    // 0x1151c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1151C4u;
    {
        const bool branch_taken_0x1151c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1151c4) {
            ctx->pc = 0x1151C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1151C4u;
            // 0x1151c8: 0x460012c6  mov.s       $f11, $f2 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1151CCu;
            goto label_1151cc;
        }
    }
    ctx->pc = 0x1151CCu;
label_1151cc:
    // 0x1151cc: 0x14800061  bnez        $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1151CCu;
    {
        const bool branch_taken_0x1151cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1151cc) {
            ctx->pc = 0x115354u;
            goto label_115354;
        }
    }
    ctx->pc = 0x1151D4u;
    // 0x1151d4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1151d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1151d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1151d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1151dc: 0x46015801  sub.s       $f0, $f11, $f1
    ctx->pc = 0x1151dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
    // 0x1151e0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1151e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1151e4: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
    ctx->pc = 0x1151E4u;
    {
        const bool branch_taken_0x1151e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1151e4) {
            ctx->pc = 0x115354u;
            goto label_115354;
        }
    }
    ctx->pc = 0x1151ECu;
    // 0x1151ec: 0x46015840  add.s       $f1, $f11, $f1
    ctx->pc = 0x1151ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x1151f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1151f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1151f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1151f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1151f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1151f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1151fc: 0x0  nop
    ctx->pc = 0x1151fcu;
    // NOP
    // 0x115200: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x115200u;
    {
        const bool branch_taken_0x115200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x115204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115200u;
            // 0x115204: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115200) {
            ctx->pc = 0x115354u;
            goto label_115354;
        }
    }
    ctx->pc = 0x115208u;
    // 0x115208: 0x91920000  lbu         $s2, 0x0($t4)
    ctx->pc = 0x115208u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11520c: 0x12400077  beqz        $s2, . + 4 + (0x77 << 2)
    ctx->pc = 0x11520Cu;
    {
        const bool branch_taken_0x11520c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x115210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11520Cu;
            // 0x115210: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11520c) {
            ctx->pc = 0x1153ECu;
            goto label_1153ec;
        }
    }
    ctx->pc = 0x115214u;
    // 0x115214: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x115214u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_115218:
    // 0x115218: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x115218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x11521c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x11521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x115220: 0x84480004  lh          $t0, 0x4($v0)
    ctx->pc = 0x115220u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x115224: 0x51000046  beql        $t0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x115224u;
    {
        const bool branch_taken_0x115224 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x115224) {
            ctx->pc = 0x115228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x115224u;
            // 0x115228: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x115340u;
            goto label_115340;
        }
    }
    ctx->pc = 0x11522Cu;
    // 0x11522c: 0x0  nop
    ctx->pc = 0x11522cu;
    // NOP
label_115230:
    // 0x115230: 0x2524ffff  addiu       $a0, $t1, -0x1
    ctx->pc = 0x115230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x115234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115238: 0x25e5ffff  addiu       $a1, $t7, -0x1
    ctx->pc = 0x115238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x11523c: 0x25270001  addiu       $a3, $t1, 0x1
    ctx->pc = 0x11523cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x115240: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x115240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x115244: 0xa7302a  slt         $a2, $a1, $a3
    ctx->pc = 0x115244u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x115248: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x115248u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11524c: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x11524cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x115250: 0xe6180a  movz        $v1, $a3, $a2
    ctx->pc = 0x115250u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x115254: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x115254u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x115258: 0x903018  mult        $a2, $a0, $s0
    ctx->pc = 0x115258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11525c: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x11525cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x115260: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x115260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x115264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11526c: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x11526cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x115270: 0xc5470000  lwc1        $f7, 0x0($t2)
    ctx->pc = 0x115270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x115274: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x115274u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x115278: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x115278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x11527c: 0xca2021  addu        $a0, $a2, $t2
    ctx->pc = 0x11527cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x115280: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x115280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115284: 0x703018  mult        $a2, $v1, $s0
    ctx->pc = 0x115284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x115288: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x115288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11528c: 0x46000242  mul.s       $f9, $f0, $f0
    ctx->pc = 0x11528cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x115290: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x115290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x115294: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x115294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x115298: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x115298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11529c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11529cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1152a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1152a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1152a4: 0x460b5a82  mul.s       $f10, $f11, $f11
    ctx->pc = 0x1152a4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x1152a8: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x1152a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1152ac: 0x82023  negu        $a0, $t0
    ctx->pc = 0x1152acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x1152b0: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x1152b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1152b4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1152b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1152b8: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x1152b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1152bc: 0x46014902  mul.s       $f4, $f9, $f1
    ctx->pc = 0x1152bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x1152c0: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x1152c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x1152c4: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x1152c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x1152c8: 0x46024081  sub.s       $f2, $f8, $f2
    ctx->pc = 0x1152c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x1152cc: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1152ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1152d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1152d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1152d4: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x1152d4u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x1152d8: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x1152d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x1152dc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1152dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1152e0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x1152e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x1152e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1152e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1152e8: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x1152e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x1152ec: 0x1042026  xor         $a0, $t0, $a0
    ctx->pc = 0x1152ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 4));
    // 0x1152f0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x1152f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x1152f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1152f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1152f8: 0x46023880  add.s       $f2, $f7, $f2
    ctx->pc = 0x1152f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x1152fc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1152fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x115300: 0x460340c1  sub.s       $f3, $f8, $f3
    ctx->pc = 0x115300u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x115304: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x115304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x115308: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x115308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x11530c: 0x44403  sra         $t0, $a0, 16
    ctx->pc = 0x11530cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 16));
    // 0x115310: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x115310u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x115314: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x115314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x115318: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x115318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x11531c: 0x460a5942  mul.s       $f5, $f11, $f10
    ctx->pc = 0x11531cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x115320: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x115320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x115324: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x115324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x115328: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x115328u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x11532c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11532cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x115330: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x115330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x115334: 0x1500ffbe  bnez        $t0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x115334u;
    {
        const bool branch_taken_0x115334 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x115338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115334u;
            // 0x115338: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115334) {
            ctx->pc = 0x115230u;
            runtime->cooperativeGuestYield();
            goto label_115230;
        }
    }
    ctx->pc = 0x11533Cu;
    // 0x11533c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x11533cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_115340:
    // 0x115340: 0x1b2102b  sltu        $v0, $t5, $s2
    ctx->pc = 0x115340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x115344: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x115344u;
    {
        const bool branch_taken_0x115344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115344u;
            // 0x115348: 0x25ce0040  addiu       $t6, $t6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115344) {
            ctx->pc = 0x115218u;
            runtime->cooperativeGuestYield();
            goto label_115218;
        }
    }
    ctx->pc = 0x11534Cu;
    // 0x11534c: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x11534Cu;
    {
        const bool branch_taken_0x11534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11534Cu;
            // 0x115350: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11534c) {
            ctx->pc = 0x115888u;
            goto label_115888;
        }
    }
    ctx->pc = 0x115354u;
label_115354:
    // 0x115354: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x115354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x115358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11535c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11535cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115360: 0x91890000  lbu         $t1, 0x0($t4)
    ctx->pc = 0x115360u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x115364: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115368: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x115368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x11536c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x11536cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x115370: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x115370u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x115374: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x115374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x115378: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x115378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11537c: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x11537Cu;
    {
        const bool branch_taken_0x11537c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x115380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11537Cu;
            // 0x115380: 0x834021  addu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11537c) {
            ctx->pc = 0x1153ECu;
            goto label_1153ec;
        }
    }
    ctx->pc = 0x115384u;
    // 0x115384: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x115384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_115388:
    // 0x115388: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x115388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x11538c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x11538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x115390: 0x84450004  lh          $a1, 0x4($v0)
    ctx->pc = 0x115390u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x115394: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x115394u;
    {
        const bool branch_taken_0x115394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x115394) {
            ctx->pc = 0x115398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x115394u;
            // 0x115398: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1153E0u;
            goto label_1153e0;
        }
    }
    ctx->pc = 0x11539Cu;
    // 0x11539c: 0x0  nop
    ctx->pc = 0x11539cu;
    // NOP
label_1153a0:
    // 0x1153a0: 0x51023  negu        $v0, $a1
    ctx->pc = 0x1153a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1153a4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1153a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1153a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1153a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1153ac: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1153acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1153b0: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1153b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1153b4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1153b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1153b8: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x1153b8u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x1153bc: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x1153bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x1153c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1153c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1153c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1153c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1153c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1153c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1153cc: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1153ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1153d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1153d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1153d4: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1153D4u;
    {
        const bool branch_taken_0x1153d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1153D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1153D4u;
            // 0x1153d8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153d4) {
            ctx->pc = 0x1153A0u;
            runtime->cooperativeGuestYield();
            goto label_1153a0;
        }
    }
    ctx->pc = 0x1153DCu;
    // 0x1153dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1153dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1153e0:
    // 0x1153e0: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x1153e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1153e4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1153E4u;
    {
        const bool branch_taken_0x1153e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1153E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1153E4u;
            // 0x1153e8: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153e4) {
            ctx->pc = 0x115388u;
            runtime->cooperativeGuestYield();
            goto label_115388;
        }
    }
    ctx->pc = 0x1153ECu;
label_1153ec:
    // 0x1153ec: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x1153ECu;
    {
        const bool branch_taken_0x1153ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1153ECu;
            // 0x1153f0: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153ec) {
            ctx->pc = 0x115888u;
            goto label_115888;
        }
    }
    ctx->pc = 0x1153F4u;
label_1153f4:
    // 0x1153f4: 0x91620003  lbu         $v0, 0x3($t3)
    ctx->pc = 0x1153f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1153f8: 0x94a40006  lhu         $a0, 0x6($a1)
    ctx->pc = 0x1153f8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1153fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1153fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x115400: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x115400u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x115404: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x115404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x115408: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x115408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x11540c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11540Cu;
    {
        const bool branch_taken_0x11540c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11540Cu;
            // 0x115410: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11540c) {
            ctx->pc = 0x115428u;
            goto label_115428;
        }
    }
    ctx->pc = 0x115414u;
    // 0x115414: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x115414u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x115418: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x115418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11541c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x11541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x115420: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115420u;
    {
        const bool branch_taken_0x115420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115420u;
            // 0x115424: 0x827821  addu        $t7, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115420) {
            ctx->pc = 0x115430u;
            goto label_115430;
        }
    }
    ctx->pc = 0x115428u;
label_115428:
    // 0x115428: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x115428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11542c: 0x244f7788  addiu       $t7, $v0, 0x7788
    ctx->pc = 0x11542cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 30600));
label_115430:
    // 0x115430: 0x90960001  lbu         $s6, 0x1($a0)
    ctx->pc = 0x115430u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x115434: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x115434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x115438: 0x12c00112  beqz        $s6, . + 4 + (0x112 << 2)
    ctx->pc = 0x115438u;
    {
        const bool branch_taken_0x115438 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115438u;
            // 0x11543c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115438) {
            ctx->pc = 0x115884u;
            goto label_115884;
        }
    }
    ctx->pc = 0x115440u;
    // 0x115440: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x115440u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115444: 0x0  nop
    ctx->pc = 0x115444u;
    // NOP
label_115448:
    // 0x115448: 0x46176834  c.lt.s      $f13, $f23
    ctx->pc = 0x115448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11544c: 0x0  nop
    ctx->pc = 0x11544cu;
    // NOP
    // 0x115450: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x115450u;
    {
        const bool branch_taken_0x115450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x115454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115450u;
            // 0x115454: 0x95840002  lhu         $a0, 0x2($t4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115450) {
            ctx->pc = 0x1154B0u;
            goto label_1154b0;
        }
    }
    ctx->pc = 0x115458u;
    // 0x115458: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x115458u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11545c: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x11545cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x115460: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x115460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x115464: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x115464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x115468: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x115468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11546c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115470: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x115470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x115474: 0x46026840  add.s       $f1, $f13, $f2
    ctx->pc = 0x115474u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x115478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x115478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11547c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11547cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x115480: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x115480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x115484: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x115484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115488: 0x0  nop
    ctx->pc = 0x115488u;
    // NOP
    // 0x11548c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x11548Cu;
    {
        const bool branch_taken_0x11548c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x115490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11548Cu;
            // 0x115490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11548c) {
            ctx->pc = 0x11550Cu;
            goto label_11550c;
        }
    }
    ctx->pc = 0x115494u;
    // 0x115494: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x115494u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115498: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x115498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11549c: 0x4602b840  add.s       $f1, $f23, $f2
    ctx->pc = 0x11549cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x1154a0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1154a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1154a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1154a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1154a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1154A8u;
    {
        const bool branch_taken_0x1154a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1154a8) {
            ctx->pc = 0x115504u;
            goto label_115504;
        }
    }
    ctx->pc = 0x1154B0u;
label_1154b0:
    // 0x1154b0: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1154b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1154b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1154b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1154b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1154b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1154bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1154bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1154c0: 0x46026841  sub.s       $f1, $f13, $f2
    ctx->pc = 0x1154c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x1154c4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1154c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1154c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1154c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1154cc: 0x0  nop
    ctx->pc = 0x1154ccu;
    // NOP
    // 0x1154d0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1154D0u;
    {
        const bool branch_taken_0x1154d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1154D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1154D0u;
            // 0x1154d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154d0) {
            ctx->pc = 0x11550Cu;
            goto label_11550c;
        }
    }
    ctx->pc = 0x1154D8u;
    // 0x1154d8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x1154d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1154dc: 0x4602b841  sub.s       $f1, $f23, $f2
    ctx->pc = 0x1154dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x1154e0: 0x95830004  lhu         $v1, 0x4($t4)
    ctx->pc = 0x1154e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1154e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1154e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1154e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1154e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1154ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1154ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1154f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1154f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1154f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1154f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1154f8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1154f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1154fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1154fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115500: 0x0  nop
    ctx->pc = 0x115500u;
    // NOP
label_115504:
    // 0x115504: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x115504u;
    {
        const bool branch_taken_0x115504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x115504) {
            ctx->pc = 0x115508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x115504u;
            // 0x115508: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11550Cu;
            goto label_11550c;
        }
    }
    ctx->pc = 0x11550Cu;
label_11550c:
    // 0x11550c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11550cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115510: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x115510u;
    {
        const bool branch_taken_0x115510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115510u;
            // 0x115514: 0x4600b886  mov.s       $f2, $f23 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115510) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x115518u;
    // 0x115518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11551c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11551cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115520: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x115520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x115524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115528: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x115528u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x11552c: 0x95840002  lhu         $a0, 0x2($t4)
    ctx->pc = 0x11552cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x115530: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x115530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x115534: 0x95900000  lhu         $s0, 0x0($t4)
    ctx->pc = 0x115534u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x115538: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x115538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11553c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11553cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x115540: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x115540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x115544: 0x444823  subu        $t1, $v0, $a0
    ctx->pc = 0x115544u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x115548: 0x130102b  sltu        $v0, $t1, $s0
    ctx->pc = 0x115548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x11554c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11554Cu;
    {
        const bool branch_taken_0x11554c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11554Cu;
            // 0x115550: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11554c) {
            ctx->pc = 0x115568u;
            goto label_115568;
        }
    }
    ctx->pc = 0x115554u;
    // 0x115554: 0x2609ffff  addiu       $t1, $s0, -0x1
    ctx->pc = 0x115554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x115558: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x115558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x11555c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11555cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115560: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x115560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x115564: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x115564u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_115568:
    // 0x115568: 0x523000f  bgezl       $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x115568u;
    {
        const bool branch_taken_0x115568 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x115568) {
            ctx->pc = 0x11556Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x115568u;
            // 0x11556c: 0x91620003  lbu         $v0, 0x3($t3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1155A8u;
            goto label_1155a8;
        }
    }
    ctx->pc = 0x115570u;
    // 0x115570: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115570u;
    {
        const bool branch_taken_0x115570 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x115574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115570u;
            // 0x115574: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115570) {
            ctx->pc = 0x115588u;
            goto label_115588;
        }
    }
    ctx->pc = 0x115578u;
    // 0x115578: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x115578u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11557c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11557cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x115580: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115580u;
    {
        const bool branch_taken_0x115580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115580u;
            // 0x115584: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115580) {
            ctx->pc = 0x1155A4u;
            goto label_1155a4;
        }
    }
    ctx->pc = 0x115588u;
label_115588:
    // 0x115588: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x115588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x11558c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x11558cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x115590: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x115594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x115594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115598: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x115598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11559c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11559cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1155a0: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x1155a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1155a4:
    // 0x1155a4: 0x91620003  lbu         $v0, 0x3($t3)
    ctx->pc = 0x1155a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
label_1155a8:
    // 0x1155a8: 0x1244021  addu        $t0, $t1, $a0
    ctx->pc = 0x1155a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1155ac: 0x91e30001  lbu         $v1, 0x1($t7)
    ctx->pc = 0x1155acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x1155b0: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x1155b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1155b4: 0x94a50006  lhu         $a1, 0x6($a1)
    ctx->pc = 0x1155b4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1155b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1155b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1155bc: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1155bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1155c0: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x1155c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1155c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1155c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1155c8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1155c8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1155cc: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x1155ccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1155d0: 0x95640000  lhu         $a0, 0x0($t3)
    ctx->pc = 0x1155d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1155d4: 0x25320002  addiu       $s2, $t1, 0x2
    ctx->pc = 0x1155d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1155d8: 0x2091823  subu        $v1, $s0, $t1
    ctx->pc = 0x1155d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1155dc: 0x250282b  sltu        $a1, $s2, $s0
    ctx->pc = 0x1155dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1155e0: 0x95e70002  lhu         $a3, 0x2($t7)
    ctx->pc = 0x1155e0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x1155e4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1155e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1155e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1155e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1155ec: 0x65400a  movz        $t0, $v1, $a1
    ctx->pc = 0x1155ecu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x1155f0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1155f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1155f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1155f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1155f8: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x1155f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1155fc: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1155fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x115600: 0x2d040002  sltiu       $a0, $t0, 0x2
    ctx->pc = 0x115600u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x115604: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x115604u;
    {
        const bool branch_taken_0x115604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x115608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115604u;
            // 0x115608: 0x461500c2  mul.s       $f3, $f0, $f21 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115604) {
            ctx->pc = 0x115630u;
            goto label_115630;
        }
    }
    ctx->pc = 0x11560Cu;
    // 0x11560c: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x11560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x115610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115614: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x115614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x115618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11561c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11561cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x115620: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x115620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x115624: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x115624u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x115628: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115628u;
    {
        const bool branch_taken_0x115628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11562Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115628u;
            // 0x11562c: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115628) {
            ctx->pc = 0x115638u;
            goto label_115638;
        }
    }
    ctx->pc = 0x115630u;
label_115630:
    // 0x115630: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x115630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115634: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x115634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_115638:
    // 0x115638: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x115638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11563c: 0x460102c2  mul.s       $f11, $f0, $f1
    ctx->pc = 0x11563cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x115640: 0x46025834  c.lt.s      $f11, $f2
    ctx->pc = 0x115640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115644: 0x0  nop
    ctx->pc = 0x115644u;
    // NOP
    // 0x115648: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x115648u;
    {
        const bool branch_taken_0x115648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x115648) {
            ctx->pc = 0x11564Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x115648u;
            // 0x11564c: 0x460012c6  mov.s       $f11, $f2 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x115650u;
            goto label_115650;
        }
    }
    ctx->pc = 0x115650u;
label_115650:
    // 0x115650: 0x14800062  bnez        $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x115650u;
    {
        const bool branch_taken_0x115650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x115650) {
            ctx->pc = 0x1157DCu;
            goto label_1157dc;
        }
    }
    ctx->pc = 0x115658u;
    // 0x115658: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x115658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x11565c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11565cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115660: 0x46015801  sub.s       $f0, $f11, $f1
    ctx->pc = 0x115660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
    // 0x115664: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x115664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115668: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x115668u;
    {
        const bool branch_taken_0x115668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x115668) {
            ctx->pc = 0x1157DCu;
            goto label_1157dc;
        }
    }
    ctx->pc = 0x115670u;
    // 0x115670: 0x46015840  add.s       $f1, $f11, $f1
    ctx->pc = 0x115670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x115674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11567c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11567cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115680: 0x0  nop
    ctx->pc = 0x115680u;
    // NOP
    // 0x115684: 0x45000055  bc1f        . + 4 + (0x55 << 2)
    ctx->pc = 0x115684u;
    {
        const bool branch_taken_0x115684 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x115688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115684u;
            // 0x115688: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115684) {
            ctx->pc = 0x1157DCu;
            goto label_1157dc;
        }
    }
    ctx->pc = 0x11568Cu;
    // 0x11568c: 0x91f30000  lbu         $s3, 0x0($t7)
    ctx->pc = 0x11568cu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x115690: 0x12600078  beqz        $s3, . + 4 + (0x78 << 2)
    ctx->pc = 0x115690u;
    {
        const bool branch_taken_0x115690 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x115694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115690u;
            // 0x115694: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115690) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x115698u;
    // 0x115698: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x115698u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11569c: 0x0  nop
    ctx->pc = 0x11569cu;
    // NOP
label_1156a0:
    // 0x1156a0: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x1156a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1156a4: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x1156a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1156a8: 0x84480004  lh          $t0, 0x4($v0)
    ctx->pc = 0x1156a8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1156ac: 0x51000046  beql        $t0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1156ACu;
    {
        const bool branch_taken_0x1156ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1156ac) {
            ctx->pc = 0x1156B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1156ACu;
            // 0x1156b0: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1157C8u;
            goto label_1157c8;
        }
    }
    ctx->pc = 0x1156B4u;
    // 0x1156b4: 0x0  nop
    ctx->pc = 0x1156b4u;
    // NOP
label_1156b8:
    // 0x1156b8: 0x2524ffff  addiu       $a0, $t1, -0x1
    ctx->pc = 0x1156b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1156bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1156bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1156c0: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x1156c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1156c4: 0x25270001  addiu       $a3, $t1, 0x1
    ctx->pc = 0x1156c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1156c8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1156c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1156cc: 0xa7302a  slt         $a2, $a1, $a3
    ctx->pc = 0x1156ccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1156d0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1156d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156d4: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1156d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1156d8: 0xe6180a  movz        $v1, $a3, $a2
    ctx->pc = 0x1156d8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1156dc: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x1156dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1156e0: 0x913018  mult        $a2, $a0, $s1
    ctx->pc = 0x1156e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1156e4: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x1156e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1156e8: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x1156e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1156ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1156ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1156f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1156f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1156f4: 0x242280a  movz        $a1, $s2, $v0
    ctx->pc = 0x1156f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x1156f8: 0xc5470000  lwc1        $f7, 0x0($t2)
    ctx->pc = 0x1156f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1156fc: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x1156fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x115700: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x115700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x115704: 0xca2021  addu        $a0, $a2, $t2
    ctx->pc = 0x115704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x115708: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x115708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11570c: 0x713018  mult        $a2, $v1, $s1
    ctx->pc = 0x11570cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x115710: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x115710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115714: 0x46000242  mul.s       $f9, $f0, $f0
    ctx->pc = 0x115714u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x115718: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x115718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x11571c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11571cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x115720: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x115720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x115724: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x115724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x115728: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x115728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11572c: 0x460b5a82  mul.s       $f10, $f11, $f11
    ctx->pc = 0x11572cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x115730: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x115730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x115734: 0x82023  negu        $a0, $t0
    ctx->pc = 0x115734u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x115738: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x115738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x11573c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x11573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115740: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x115740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x115744: 0x46014902  mul.s       $f4, $f9, $f1
    ctx->pc = 0x115744u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x115748: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x115748u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x11574c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x11574cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x115750: 0x46024081  sub.s       $f2, $f8, $f2
    ctx->pc = 0x115750u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x115754: 0x41023  negu        $v0, $a0
    ctx->pc = 0x115754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x115758: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x115758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11575c: 0x70401004  plzcw       $v0, $v0
    ctx->pc = 0x11575cu;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x115760: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x115760u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x115764: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x115764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x115768: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x115768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x11576c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11576cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115770: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x115770u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x115774: 0x1042026  xor         $a0, $t0, $a0
    ctx->pc = 0x115774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 4));
    // 0x115778: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x115778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x11577c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11577cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x115780: 0x46023880  add.s       $f2, $f7, $f2
    ctx->pc = 0x115780u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x115784: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x115784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x115788: 0x460340c1  sub.s       $f3, $f8, $f3
    ctx->pc = 0x115788u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x11578c: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x11578cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x115790: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x115790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x115794: 0x44403  sra         $t0, $a0, 16
    ctx->pc = 0x115794u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 16));
    // 0x115798: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x115798u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x11579c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x11579cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1157a0: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x1157a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x1157a4: 0x460a5942  mul.s       $f5, $f11, $f10
    ctx->pc = 0x1157a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x1157a8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1157a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1157ac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1157acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1157b0: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x1157b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x1157b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1157b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1157b8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1157b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1157bc: 0x1500ffbe  bnez        $t0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1157BCu;
    {
        const bool branch_taken_0x1157bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1157C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1157BCu;
            // 0x1157c0: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157bc) {
            ctx->pc = 0x1156B8u;
            runtime->cooperativeGuestYield();
            goto label_1156b8;
        }
    }
    ctx->pc = 0x1157C4u;
    // 0x1157c4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1157c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1157c8:
    // 0x1157c8: 0x1b3102b  sltu        $v0, $t5, $s3
    ctx->pc = 0x1157c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1157cc: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1157CCu;
    {
        const bool branch_taken_0x1157cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1157D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1157CCu;
            // 0x1157d0: 0x25ce0040  addiu       $t6, $t6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157cc) {
            ctx->pc = 0x1156A0u;
            runtime->cooperativeGuestYield();
            goto label_1156a0;
        }
    }
    ctx->pc = 0x1157D4u;
    // 0x1157d4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1157D4u;
    {
        const bool branch_taken_0x1157d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1157D4u;
            // 0x1157d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157d4) {
            ctx->pc = 0x115878u;
            goto label_115878;
        }
    }
    ctx->pc = 0x1157DCu;
label_1157dc:
    // 0x1157dc: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x1157dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x1157e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1157e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1157e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1157e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1157e8: 0x91e90000  lbu         $t1, 0x0($t7)
    ctx->pc = 0x1157e8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1157ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1157ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157f0: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x1157f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x1157f4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1157f4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1157f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1157f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1157fc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1157fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x115800: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x115800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x115804: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x115804u;
    {
        const bool branch_taken_0x115804 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x115808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115804u;
            // 0x115808: 0x834021  addu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115804) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x11580Cu;
    // 0x11580c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11580cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_115810:
    // 0x115810: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x115810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x115814: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x115814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x115818: 0x84450004  lh          $a1, 0x4($v0)
    ctx->pc = 0x115818u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11581c: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x11581Cu;
    {
        const bool branch_taken_0x11581c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11581c) {
            ctx->pc = 0x115820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11581Cu;
            // 0x115820: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x115868u;
            goto label_115868;
        }
    }
    ctx->pc = 0x115824u;
    // 0x115824: 0x0  nop
    ctx->pc = 0x115824u;
    // NOP
label_115828:
    // 0x115828: 0x51023  negu        $v0, $a1
    ctx->pc = 0x115828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x11582c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x11582cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x115830: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x115830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x115834: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x115834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115838: 0x22023  negu        $a0, $v0
    ctx->pc = 0x115838u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11583c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x11583cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x115840: 0x70802004  plzcw       $a0, $a0
    ctx->pc = 0x115840u;
    { uint64_t v = GPR_U64(ctx, 4); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 4, out); }
    // 0x115844: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x115844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x115848: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x115848u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11584c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11584cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x115850: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x115850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x115854: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x115854u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x115858: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x115858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11585c: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11585Cu;
    {
        const bool branch_taken_0x11585c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x115860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11585Cu;
            // 0x115860: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11585c) {
            ctx->pc = 0x115828u;
            runtime->cooperativeGuestYield();
            goto label_115828;
        }
    }
    ctx->pc = 0x115864u;
    // 0x115864: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x115864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_115868:
    // 0x115868: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x115868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11586c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x11586Cu;
    {
        const bool branch_taken_0x11586c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11586Cu;
            // 0x115870: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11586c) {
            ctx->pc = 0x115810u;
            runtime->cooperativeGuestYield();
            goto label_115810;
        }
    }
    ctx->pc = 0x115874u;
label_115874:
    // 0x115874: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x115874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_115878:
    // 0x115878: 0x296102b  sltu        $v0, $s4, $s6
    ctx->pc = 0x115878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x11587c: 0x1440fef2  bnez        $v0, . + 4 + (-0x10E << 2)
    ctx->pc = 0x11587Cu;
    {
        const bool branch_taken_0x11587c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11587Cu;
            // 0x115880: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11587c) {
            ctx->pc = 0x115448u;
            runtime->cooperativeGuestYield();
            goto label_115448;
        }
    }
    ctx->pc = 0x115884u;
label_115884:
    // 0x115884: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x115884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_115888:
    // 0x115888: 0x91620002  lbu         $v0, 0x2($t3)
    ctx->pc = 0x115888u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x11588c: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x11588cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x115890: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x115890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x115894: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x115894u;
    {
        const bool branch_taken_0x115894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115894u;
            // 0x115898: 0x32102  srl         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115894) {
            ctx->pc = 0x1158E8u;
            goto label_1158e8;
        }
    }
    ctx->pc = 0x11589Cu;
    // 0x11589c: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x11589cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1158a0: 0x27c300f0  addiu       $v1, $fp, 0xF0
    ctx->pc = 0x1158a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 240));
    // 0x1158a4: 0x11000019  beqz        $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1158A4u;
    {
        const bool branch_taken_0x1158a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1158A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1158A4u;
            // 0x1158a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158a4) {
            ctx->pc = 0x11590Cu;
            goto label_11590c;
        }
    }
    ctx->pc = 0x1158ACu;
    // 0x1158ac: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1158acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1158b0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1158b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1158b4: 0x0  nop
    ctx->pc = 0x1158b4u;
    // NOP
label_1158b8:
    // 0x1158b8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1158b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1158bc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1158bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1158c0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1158c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1158c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1158c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1158c8: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1158c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1158cc: 0xc8202b  sltu        $a0, $a2, $t0
    ctx->pc = 0x1158ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1158d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1158d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1158d4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1158d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1158d8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1158D8u;
    {
        const bool branch_taken_0x1158d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1158DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1158D8u;
            // 0x1158dc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158d8) {
            ctx->pc = 0x1158B8u;
            runtime->cooperativeGuestYield();
            goto label_1158b8;
        }
    }
    ctx->pc = 0x1158E0u;
    // 0x1158e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1158E0u;
    {
        const bool branch_taken_0x1158e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1158E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1158E0u;
            // 0x1158e4: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158e0) {
            ctx->pc = 0x115910u;
            goto label_115910;
        }
    }
    ctx->pc = 0x1158E8u;
label_1158e8:
    // 0x1158e8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1158e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1158ec: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1158ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1158f0: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x1158f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1158f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1158f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1158f8: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x1158f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x1158fc: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1158fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x115900: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x115900u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x115904: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x115908: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x115908u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_11590c:
    // 0x11590c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x11590cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_115910:
    // 0x115910: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x115910u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x115914: 0x2e6102b  sltu        $v0, $s7, $a2
    ctx->pc = 0x115914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x115918: 0x1440fb77  bnez        $v0, . + 4 + (-0x489 << 2)
    ctx->pc = 0x115918u;
    {
        const bool branch_taken_0x115918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115918u;
            // 0x11591c: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115918) {
            ctx->pc = 0x1146F8u;
            runtime->cooperativeGuestYield();
            goto label_1146f8;
        }
    }
    ctx->pc = 0x115920u;
label_115920:
    // 0x115920: 0x8fc3004c  lw          $v1, 0x4C($fp)
    ctx->pc = 0x115920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x115924: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x115924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x115928: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x115928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x11592c: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x11592cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x115930: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x115930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_115934:
    // 0x115934: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x115934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x115938: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x115938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11593c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x11593cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x115940: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x115940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x115944: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x115944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x115948: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x115948u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11594c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x11594cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115950: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x115950u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115954: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x115954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115958: 0xc7b90138  lwc1        $f25, 0x138($sp)
    ctx->pc = 0x115958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x11595c: 0xc7b80130  lwc1        $f24, 0x130($sp)
    ctx->pc = 0x11595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x115960: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x115960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x115964: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x115964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x115968: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x115968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11596c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x11596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x115970: 0x3e00008  jr          $ra
    ctx->pc = 0x115970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115970u;
            // 0x115974: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111544u: goto label_111544;
            case 0x111570u: goto label_111570;
            case 0x11158Cu: goto label_11158c;
            case 0x1115A0u: goto label_1115a0;
            case 0x11160Cu: goto label_11160c;
            case 0x111628u: goto label_111628;
            case 0x11164Cu: goto label_11164c;
            case 0x111678u: goto label_111678;
            case 0x111694u: goto label_111694;
            case 0x1116A8u: goto label_1116a8;
            case 0x1116C4u: goto label_1116c4;
            case 0x1116D8u: goto label_1116d8;
            case 0x1116F4u: goto label_1116f4;
            case 0x1116F8u: goto label_1116f8;
            case 0x111708u: goto label_111708;
            case 0x111730u: goto label_111730;
            case 0x111748u: goto label_111748;
            case 0x1117F0u: goto label_1117f0;
            case 0x111838u: goto label_111838;
            case 0x111858u: goto label_111858;
            case 0x1118DCu: goto label_1118dc;
            case 0x111934u: goto label_111934;
            case 0x11193Cu: goto label_11193c;
            case 0x11197Cu: goto label_11197c;
            case 0x111988u: goto label_111988;
            case 0x1119BCu: goto label_1119bc;
            case 0x1119C0u: goto label_1119c0;
            case 0x111A28u: goto label_111a28;
            case 0x111A40u: goto label_111a40;
            case 0x111A88u: goto label_111a88;
            case 0x111A98u: goto label_111a98;
            case 0x111AF8u: goto label_111af8;
            case 0x111B10u: goto label_111b10;
            case 0x111B50u: goto label_111b50;
            case 0x111B54u: goto label_111b54;
            case 0x111B7Cu: goto label_111b7c;
            case 0x111B90u: goto label_111b90;
            case 0x111BFCu: goto label_111bfc;
            case 0x111C30u: goto label_111c30;
            case 0x111C68u: goto label_111c68;
            case 0x111C88u: goto label_111c88;
            case 0x111CD0u: goto label_111cd0;
            case 0x111CE0u: goto label_111ce0;
            case 0x111D14u: goto label_111d14;
            case 0x111D28u: goto label_111d28;
            case 0x111D78u: goto label_111d78;
            case 0x111D98u: goto label_111d98;
            case 0x111DB4u: goto label_111db4;
            case 0x111DB8u: goto label_111db8;
            case 0x111DF0u: goto label_111df0;
            case 0x111E0Cu: goto label_111e0c;
            case 0x111E3Cu: goto label_111e3c;
            case 0x111E40u: goto label_111e40;
            case 0x111E58u: goto label_111e58;
            case 0x111EF0u: goto label_111ef0;
            case 0x111F10u: goto label_111f10;
            case 0x111F68u: goto label_111f68;
            case 0x111F80u: goto label_111f80;
            case 0x111FF0u: goto label_111ff0;
            case 0x112000u: goto label_112000;
            case 0x112044u: goto label_112044;
            case 0x112060u: goto label_112060;
            case 0x112094u: goto label_112094;
            case 0x11209Cu: goto label_11209c;
            case 0x1120B8u: goto label_1120b8;
            case 0x112120u: goto label_112120;
            case 0x112174u: goto label_112174;
            case 0x11217Cu: goto label_11217c;
            case 0x1121E8u: goto label_1121e8;
            case 0x112200u: goto label_112200;
            case 0x112248u: goto label_112248;
            case 0x112258u: goto label_112258;
            case 0x1122B8u: goto label_1122b8;
            case 0x1122D0u: goto label_1122d0;
            case 0x112310u: goto label_112310;
            case 0x112314u: goto label_112314;
            case 0x11233Cu: goto label_11233c;
            case 0x112350u: goto label_112350;
            case 0x1123BCu: goto label_1123bc;
            case 0x1123F0u: goto label_1123f0;
            case 0x112428u: goto label_112428;
            case 0x112448u: goto label_112448;
            case 0x112490u: goto label_112490;
            case 0x1124A0u: goto label_1124a0;
            case 0x1124D4u: goto label_1124d4;
            case 0x1124E0u: goto label_1124e0;
            case 0x1124E4u: goto label_1124e4;
            case 0x1124F4u: goto label_1124f4;
            case 0x112510u: goto label_112510;
            case 0x112578u: goto label_112578;
            case 0x1125CCu: goto label_1125cc;
            case 0x1125D4u: goto label_1125d4;
            case 0x112630u: goto label_112630;
            case 0x112650u: goto label_112650;
            case 0x11266Cu: goto label_11266c;
            case 0x112670u: goto label_112670;
            case 0x1126A8u: goto label_1126a8;
            case 0x1126C4u: goto label_1126c4;
            case 0x1126F4u: goto label_1126f4;
            case 0x1126F8u: goto label_1126f8;
            case 0x112710u: goto label_112710;
            case 0x1127A8u: goto label_1127a8;
            case 0x1127C8u: goto label_1127c8;
            case 0x112820u: goto label_112820;
            case 0x112838u: goto label_112838;
            case 0x1128A8u: goto label_1128a8;
            case 0x1128B8u: goto label_1128b8;
            case 0x1128FCu: goto label_1128fc;
            case 0x112910u: goto label_112910;
            case 0x112914u: goto label_112914;
            case 0x112920u: goto label_112920;
            case 0x112924u: goto label_112924;
            case 0x11293Cu: goto label_11293c;
            case 0x112970u: goto label_112970;
            case 0x112974u: goto label_112974;
            case 0x1129DCu: goto label_1129dc;
            case 0x1129F4u: goto label_1129f4;
            case 0x112A38u: goto label_112a38;
            case 0x112A48u: goto label_112a48;
            case 0x112AA8u: goto label_112aa8;
            case 0x112AC0u: goto label_112ac0;
            case 0x112B00u: goto label_112b00;
            case 0x112B04u: goto label_112b04;
            case 0x112B2Cu: goto label_112b2c;
            case 0x112B40u: goto label_112b40;
            case 0x112BACu: goto label_112bac;
            case 0x112BE0u: goto label_112be0;
            case 0x112C18u: goto label_112c18;
            case 0x112C38u: goto label_112c38;
            case 0x112C80u: goto label_112c80;
            case 0x112C90u: goto label_112c90;
            case 0x112CC4u: goto label_112cc4;
            case 0x112CD8u: goto label_112cd8;
            case 0x112D28u: goto label_112d28;
            case 0x112D48u: goto label_112d48;
            case 0x112D64u: goto label_112d64;
            case 0x112D68u: goto label_112d68;
            case 0x112DA0u: goto label_112da0;
            case 0x112DBCu: goto label_112dbc;
            case 0x112DECu: goto label_112dec;
            case 0x112DF0u: goto label_112df0;
            case 0x112E08u: goto label_112e08;
            case 0x112EA0u: goto label_112ea0;
            case 0x112EC0u: goto label_112ec0;
            case 0x112F18u: goto label_112f18;
            case 0x112F30u: goto label_112f30;
            case 0x112FA0u: goto label_112fa0;
            case 0x112FB0u: goto label_112fb0;
            case 0x112FF4u: goto label_112ff4;
            case 0x113008u: goto label_113008;
            case 0x113010u: goto label_113010;
            case 0x113044u: goto label_113044;
            case 0x11304Cu: goto label_11304c;
            case 0x113068u: goto label_113068;
            case 0x1130D0u: goto label_1130d0;
            case 0x113124u: goto label_113124;
            case 0x11312Cu: goto label_11312c;
            case 0x113198u: goto label_113198;
            case 0x1131B0u: goto label_1131b0;
            case 0x1131F8u: goto label_1131f8;
            case 0x113208u: goto label_113208;
            case 0x113268u: goto label_113268;
            case 0x113280u: goto label_113280;
            case 0x1132C0u: goto label_1132c0;
            case 0x1132C4u: goto label_1132c4;
            case 0x1132ECu: goto label_1132ec;
            case 0x113300u: goto label_113300;
            case 0x11336Cu: goto label_11336c;
            case 0x1133A0u: goto label_1133a0;
            case 0x1133D8u: goto label_1133d8;
            case 0x1133F8u: goto label_1133f8;
            case 0x113440u: goto label_113440;
            case 0x113450u: goto label_113450;
            case 0x113484u: goto label_113484;
            case 0x113490u: goto label_113490;
            case 0x113494u: goto label_113494;
            case 0x1134A4u: goto label_1134a4;
            case 0x1134C0u: goto label_1134c0;
            case 0x113528u: goto label_113528;
            case 0x11357Cu: goto label_11357c;
            case 0x113584u: goto label_113584;
            case 0x1135E0u: goto label_1135e0;
            case 0x113600u: goto label_113600;
            case 0x11361Cu: goto label_11361c;
            case 0x113620u: goto label_113620;
            case 0x113658u: goto label_113658;
            case 0x113674u: goto label_113674;
            case 0x1136A4u: goto label_1136a4;
            case 0x1136A8u: goto label_1136a8;
            case 0x1136C0u: goto label_1136c0;
            case 0x113758u: goto label_113758;
            case 0x113778u: goto label_113778;
            case 0x1137D0u: goto label_1137d0;
            case 0x1137E8u: goto label_1137e8;
            case 0x113858u: goto label_113858;
            case 0x113868u: goto label_113868;
            case 0x1138ACu: goto label_1138ac;
            case 0x1138C0u: goto label_1138c0;
            case 0x1138C4u: goto label_1138c4;
            case 0x1138D0u: goto label_1138d0;
            case 0x1138D4u: goto label_1138d4;
            case 0x113900u: goto label_113900;
            case 0x113930u: goto label_113930;
            case 0x113954u: goto label_113954;
            case 0x113958u: goto label_113958;
            case 0x113970u: goto label_113970;
            case 0x113988u: goto label_113988;
            case 0x1139A8u: goto label_1139a8;
            case 0x113A24u: goto label_113a24;
            case 0x113A7Cu: goto label_113a7c;
            case 0x113A84u: goto label_113a84;
            case 0x113AC0u: goto label_113ac0;
            case 0x113AC8u: goto label_113ac8;
            case 0x113AFCu: goto label_113afc;
            case 0x113B00u: goto label_113b00;
            case 0x113B1Cu: goto label_113b1c;
            case 0x113B50u: goto label_113b50;
            case 0x113B58u: goto label_113b58;
            case 0x113B70u: goto label_113b70;
            case 0x113BD8u: goto label_113bd8;
            case 0x113C2Cu: goto label_113c2c;
            case 0x113C34u: goto label_113c34;
            case 0x113C58u: goto label_113c58;
            case 0x113C68u: goto label_113c68;
            case 0x113C6Cu: goto label_113c6c;
            case 0x113C84u: goto label_113c84;
            case 0x113CB8u: goto label_113cb8;
            case 0x113CBCu: goto label_113cbc;
            case 0x113CDCu: goto label_113cdc;
            case 0x113D10u: goto label_113d10;
            case 0x113D18u: goto label_113d18;
            case 0x113D30u: goto label_113d30;
            case 0x113D98u: goto label_113d98;
            case 0x113DECu: goto label_113dec;
            case 0x113DF4u: goto label_113df4;
            case 0x113E18u: goto label_113e18;
            case 0x113E28u: goto label_113e28;
            case 0x113E2Cu: goto label_113e2c;
            case 0x113E58u: goto label_113e58;
            case 0x113E88u: goto label_113e88;
            case 0x113EACu: goto label_113eac;
            case 0x113EB0u: goto label_113eb0;
            case 0x113EC0u: goto label_113ec0;
            case 0x113ED8u: goto label_113ed8;
            case 0x113EF0u: goto label_113ef0;
            case 0x113F78u: goto label_113f78;
            case 0x113FD0u: goto label_113fd0;
            case 0x113FD8u: goto label_113fd8;
            case 0x114014u: goto label_114014;
            case 0x114020u: goto label_114020;
            case 0x114054u: goto label_114054;
            case 0x114058u: goto label_114058;
            case 0x11408Cu: goto label_11408c;
            case 0x1140A8u: goto label_1140a8;
            case 0x1140DCu: goto label_1140dc;
            case 0x1140E4u: goto label_1140e4;
            case 0x1140F8u: goto label_1140f8;
            case 0x114160u: goto label_114160;
            case 0x1141B4u: goto label_1141b4;
            case 0x1141BCu: goto label_1141bc;
            case 0x1141ECu: goto label_1141ec;
            case 0x1141FCu: goto label_1141fc;
            case 0x114210u: goto label_114210;
            case 0x114278u: goto label_114278;
            case 0x1142CCu: goto label_1142cc;
            case 0x1142D4u: goto label_1142d4;
            case 0x1142F8u: goto label_1142f8;
            case 0x114308u: goto label_114308;
            case 0x11430Cu: goto label_11430c;
            case 0x114324u: goto label_114324;
            case 0x114358u: goto label_114358;
            case 0x11435Cu: goto label_11435c;
            case 0x114394u: goto label_114394;
            case 0x1143B4u: goto label_1143b4;
            case 0x1143E8u: goto label_1143e8;
            case 0x1143F0u: goto label_1143f0;
            case 0x114408u: goto label_114408;
            case 0x114470u: goto label_114470;
            case 0x1144C4u: goto label_1144c4;
            case 0x1144CCu: goto label_1144cc;
            case 0x1144FCu: goto label_1144fc;
            case 0x11450Cu: goto label_11450c;
            case 0x114520u: goto label_114520;
            case 0x114588u: goto label_114588;
            case 0x1145DCu: goto label_1145dc;
            case 0x1145E4u: goto label_1145e4;
            case 0x114608u: goto label_114608;
            case 0x114618u: goto label_114618;
            case 0x11461Cu: goto label_11461c;
            case 0x114648u: goto label_114648;
            case 0x114678u: goto label_114678;
            case 0x11469Cu: goto label_11469c;
            case 0x1146A0u: goto label_1146a0;
            case 0x1146B4u: goto label_1146b4;
            case 0x1146C4u: goto label_1146c4;
            case 0x1146F8u: goto label_1146f8;
            case 0x114774u: goto label_114774;
            case 0x1147CCu: goto label_1147cc;
            case 0x1147D4u: goto label_1147d4;
            case 0x114810u: goto label_114810;
            case 0x114818u: goto label_114818;
            case 0x11484Cu: goto label_11484c;
            case 0x114850u: goto label_114850;
            case 0x1148A0u: goto label_1148a0;
            case 0x1148C0u: goto label_1148c0;
            case 0x1148DCu: goto label_1148dc;
            case 0x1148E0u: goto label_1148e0;
            case 0x114968u: goto label_114968;
            case 0x114970u: goto label_114970;
            case 0x114988u: goto label_114988;
            case 0x1149D8u: goto label_1149d8;
            case 0x1149F0u: goto label_1149f0;
            case 0x114B00u: goto label_114b00;
            case 0x114B14u: goto label_114b14;
            case 0x114B48u: goto label_114b48;
            case 0x114B60u: goto label_114b60;
            case 0x114BA0u: goto label_114ba0;
            case 0x114BB4u: goto label_114bb4;
            case 0x114BE8u: goto label_114be8;
            case 0x114BF0u: goto label_114bf0;
            case 0x114C08u: goto label_114c08;
            case 0x114C70u: goto label_114c70;
            case 0x114CC4u: goto label_114cc4;
            case 0x114CCCu: goto label_114ccc;
            case 0x114D28u: goto label_114d28;
            case 0x114D48u: goto label_114d48;
            case 0x114D64u: goto label_114d64;
            case 0x114D68u: goto label_114d68;
            case 0x114DF0u: goto label_114df0;
            case 0x114DF8u: goto label_114df8;
            case 0x114E10u: goto label_114e10;
            case 0x114E60u: goto label_114e60;
            case 0x114E78u: goto label_114e78;
            case 0x114F88u: goto label_114f88;
            case 0x114F9Cu: goto label_114f9c;
            case 0x114FD0u: goto label_114fd0;
            case 0x114FE8u: goto label_114fe8;
            case 0x115028u: goto label_115028;
            case 0x115034u: goto label_115034;
            case 0x115038u: goto label_115038;
            case 0x115044u: goto label_115044;
            case 0x115048u: goto label_115048;
            case 0x115060u: goto label_115060;
            case 0x115090u: goto label_115090;
            case 0x115094u: goto label_115094;
            case 0x1150E4u: goto label_1150e4;
            case 0x115104u: goto label_115104;
            case 0x115120u: goto label_115120;
            case 0x115124u: goto label_115124;
            case 0x1151ACu: goto label_1151ac;
            case 0x1151B4u: goto label_1151b4;
            case 0x1151CCu: goto label_1151cc;
            case 0x115218u: goto label_115218;
            case 0x115230u: goto label_115230;
            case 0x115340u: goto label_115340;
            case 0x115354u: goto label_115354;
            case 0x115388u: goto label_115388;
            case 0x1153A0u: goto label_1153a0;
            case 0x1153E0u: goto label_1153e0;
            case 0x1153ECu: goto label_1153ec;
            case 0x1153F4u: goto label_1153f4;
            case 0x115428u: goto label_115428;
            case 0x115430u: goto label_115430;
            case 0x115448u: goto label_115448;
            case 0x1154B0u: goto label_1154b0;
            case 0x115504u: goto label_115504;
            case 0x11550Cu: goto label_11550c;
            case 0x115568u: goto label_115568;
            case 0x115588u: goto label_115588;
            case 0x1155A4u: goto label_1155a4;
            case 0x1155A8u: goto label_1155a8;
            case 0x115630u: goto label_115630;
            case 0x115638u: goto label_115638;
            case 0x115650u: goto label_115650;
            case 0x1156A0u: goto label_1156a0;
            case 0x1156B8u: goto label_1156b8;
            case 0x1157C8u: goto label_1157c8;
            case 0x1157DCu: goto label_1157dc;
            case 0x115810u: goto label_115810;
            case 0x115828u: goto label_115828;
            case 0x115868u: goto label_115868;
            case 0x115874u: goto label_115874;
            case 0x115878u: goto label_115878;
            case 0x115884u: goto label_115884;
            case 0x115888u: goto label_115888;
            case 0x1158B8u: goto label_1158b8;
            case 0x1158E8u: goto label_1158e8;
            case 0x11590Cu: goto label_11590c;
            case 0x115910u: goto label_115910;
            case 0x115920u: goto label_115920;
            case 0x115934u: goto label_115934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115978u;
}
