#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002516d0
// Address: 0x2516d0 - 0x25184c
void FUN_002516d0_0x2516d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002516d0_0x2516d0");
#endif

    ctx->pc = 0x2516d0u;

    // 0x2516d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2516d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2516d4: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x2516d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x2516d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2516d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516dc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2516dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2516e0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2516e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2516e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2516e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2516e8:
    // 0x2516e8: 0x0  nop
    ctx->pc = 0x2516e8u;
    // NOP
    // 0x2516ec: 0x0  nop
    ctx->pc = 0x2516ecu;
    // NOP
    // 0x2516f0: 0x0  nop
    ctx->pc = 0x2516f0u;
    // NOP
    // 0x2516f4: 0x0  nop
    ctx->pc = 0x2516f4u;
    // NOP
    // 0x2516f8: 0x0  nop
    ctx->pc = 0x2516f8u;
    // NOP
    // 0x2516fc: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2516FCu;
    {
        const bool branch_taken_0x2516fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2516fc) {
            ctx->pc = 0x251700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2516FCu;
            // 0x251700: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2516E8u;
            runtime->cooperativeGuestYield();
            goto label_2516e8;
        }
    }
    ctx->pc = 0x251704u;
    // 0x251704: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x251704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x251708: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x251708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
    // 0x25170c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x25170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x251710: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x251710u;
    {
        const bool branch_taken_0x251710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251710u;
            // 0x251714: 0xacc00084  sw          $zero, 0x84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251710) {
            ctx->pc = 0x251750u;
            goto label_251750;
        }
    }
    ctx->pc = 0x251718u;
    // 0x251718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x251718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25171c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x25171Cu;
    {
        const bool branch_taken_0x25171c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x251720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25171Cu;
            // 0x251720: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25171c) {
            ctx->pc = 0x251754u;
            goto label_251754;
        }
    }
    ctx->pc = 0x251724u;
    // 0x251724: 0xacc00080  sw          $zero, 0x80($a2)
    ctx->pc = 0x251724u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
    // 0x251728: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x251728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x25172c: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x25172cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x251730: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x251730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x251734: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x251734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x251738: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x251738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x25173c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x25173cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x251740: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x251740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x251744: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x251744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x251748: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x251748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25174c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x25174cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_251750:
    // 0x251750: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x251750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_251754:
    // 0x251754: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x251754u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x251758: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x251758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x25175c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x25175Cu;
    {
        const bool branch_taken_0x25175c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25175c) {
            ctx->pc = 0x251844u;
            goto label_251844;
        }
    }
    ctx->pc = 0x251764u;
    // 0x251764: 0x0  nop
    ctx->pc = 0x251764u;
    // NOP
label_251768:
    // 0x251768: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x251768u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25176c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x25176cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251770: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x251770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x251774: 0x3a23021  addu        $a2, $sp, $v0
    ctx->pc = 0x251774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x251778: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x251778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x25177c: 0x24a4fff8  addiu       $a0, $a1, -0x8
    ctx->pc = 0x25177cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x251780: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x251780u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x251784: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x251784u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x251788: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x251788u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25178c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x251790: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x251790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x251794: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x251794u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x251798: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x251798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x25179c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25179Cu;
    {
        const bool branch_taken_0x25179c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2517A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25179Cu;
            // 0x2517a0: 0x8c840024  lw          $a0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25179c) {
            ctx->pc = 0x2517F0u;
            goto label_2517f0;
        }
    }
    ctx->pc = 0x2517A4u;
    // 0x2517a4: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2517A4u;
    {
        const bool branch_taken_0x2517a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2517a4) {
            ctx->pc = 0x2517A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2517A4u;
            // 0x2517a8: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2517F4u;
            goto label_2517f4;
        }
    }
    ctx->pc = 0x2517ACu;
    // 0x2517ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2517acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2517b0: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2517B0u;
    {
        const bool branch_taken_0x2517b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2517B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2517B0u;
            // 0x2517b4: 0x25030001  addiu       $v1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517b0) {
            ctx->pc = 0x2517F0u;
            goto label_2517f0;
        }
    }
    ctx->pc = 0x2517B8u;
    // 0x2517b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2517b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2517bc: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x2517bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x2517c0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2517c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2517c4: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x2517c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2517c8: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x2517c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2517cc: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x2517ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2517d0: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x2517d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2517d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2517d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2517d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2517d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2517dc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2517dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2517e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2517e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2517e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2517e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2517e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2517E8u;
    {
        const bool branch_taken_0x2517e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2517ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2517E8u;
            // 0x2517ec: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517e8) {
            ctx->pc = 0x251838u;
            goto label_251838;
        }
    }
    ctx->pc = 0x2517F0u;
label_2517f0:
    // 0x2517f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2517f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2517f4:
    // 0x2517f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2517f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2517f8: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2517F8u;
    {
        const bool branch_taken_0x2517f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2517FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2517F8u;
            // 0x2517fc: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517f8) {
            ctx->pc = 0x251838u;
            goto label_251838;
        }
    }
    ctx->pc = 0x251800u;
label_251800:
    // 0x251800: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x251800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x251804: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x251804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x251808: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x251808u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x25180c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x25180cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x251810: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x251810u;
    {
        const bool branch_taken_0x251810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251810u;
            // 0x251814: 0xace30080  sw          $v1, 0x80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251810) {
            ctx->pc = 0x251838u;
            goto label_251838;
        }
    }
    ctx->pc = 0x251818u;
    // 0x251818: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x251818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25181c: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x25181cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x251820: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x251820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x251824: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x251824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x251828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25182c: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x25182Cu;
    {
        const bool branch_taken_0x25182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x251830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25182Cu;
            // 0x251830: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25182c) {
            ctx->pc = 0x251800u;
            runtime->cooperativeGuestYield();
            goto label_251800;
        }
    }
    ctx->pc = 0x251834u;
    // 0x251834: 0x0  nop
    ctx->pc = 0x251834u;
    // NOP
label_251838:
    // 0x251838: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x251838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25183c: 0x441ffca  bgez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x25183Cu;
    {
        const bool branch_taken_0x25183c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x251840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25183Cu;
            // 0x251840: 0xace00084  sw          $zero, 0x84($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25183c) {
            ctx->pc = 0x251768u;
            runtime->cooperativeGuestYield();
            goto label_251768;
        }
    }
    ctx->pc = 0x251844u;
label_251844:
    // 0x251844: 0x3e00008  jr          $ra
    ctx->pc = 0x251844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251844u;
            // 0x251848: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2516E8u: goto label_2516e8;
            case 0x251750u: goto label_251750;
            case 0x251754u: goto label_251754;
            case 0x251768u: goto label_251768;
            case 0x2517F0u: goto label_2517f0;
            case 0x2517F4u: goto label_2517f4;
            case 0x251800u: goto label_251800;
            case 0x251838u: goto label_251838;
            case 0x251844u: goto label_251844;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25184Cu;
}
