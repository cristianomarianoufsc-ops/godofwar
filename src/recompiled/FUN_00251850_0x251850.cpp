#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00251850
// Address: 0x251850 - 0x2519c4
void FUN_00251850_0x251850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00251850_0x251850");
#endif

    ctx->pc = 0x251850u;

    // 0x251850: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x251850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x251854: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x251854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x251858: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x251858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25185c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x25185cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x251860: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x251860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x251864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x251864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_251868:
    // 0x251868: 0x0  nop
    ctx->pc = 0x251868u;
    // NOP
    // 0x25186c: 0x0  nop
    ctx->pc = 0x25186cu;
    // NOP
    // 0x251870: 0x0  nop
    ctx->pc = 0x251870u;
    // NOP
    // 0x251874: 0x0  nop
    ctx->pc = 0x251874u;
    // NOP
    // 0x251878: 0x0  nop
    ctx->pc = 0x251878u;
    // NOP
    // 0x25187c: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25187Cu;
    {
        const bool branch_taken_0x25187c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x25187c) {
            ctx->pc = 0x251880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25187Cu;
            // 0x251880: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x251868u;
            runtime->cooperativeGuestYield();
            goto label_251868;
        }
    }
    ctx->pc = 0x251884u;
    // 0x251884: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x251884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x251888: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x251888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
    // 0x25188c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x25188cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x251890: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x251890u;
    {
        const bool branch_taken_0x251890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251890u;
            // 0x251894: 0xacc00084  sw          $zero, 0x84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251890) {
            ctx->pc = 0x2518D0u;
            goto label_2518d0;
        }
    }
    ctx->pc = 0x251898u;
    // 0x251898: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x251898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25189c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x25189Cu;
    {
        const bool branch_taken_0x25189c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2518A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25189Cu;
            // 0x2518a0: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25189c) {
            ctx->pc = 0x2518D4u;
            goto label_2518d4;
        }
    }
    ctx->pc = 0x2518A4u;
    // 0x2518a4: 0xacc00080  sw          $zero, 0x80($a2)
    ctx->pc = 0x2518a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
    // 0x2518a8: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x2518a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2518ac: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x2518acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2518b0: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x2518b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2518b4: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x2518b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2518b8: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2518b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2518bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2518bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2518c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2518c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2518c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2518c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2518c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2518c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2518cc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2518ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2518d0:
    // 0x2518d0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2518d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2518d4:
    // 0x2518d4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x2518d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2518d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2518d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2518dc: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2518DCu;
    {
        const bool branch_taken_0x2518dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2518dc) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2518E4u;
    // 0x2518e4: 0x0  nop
    ctx->pc = 0x2518e4u;
    // NOP
label_2518e8:
    // 0x2518e8: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x2518e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2518ec: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2518ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518f0: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2518f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2518f4: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x2518f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2518f8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2518f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2518fc: 0x2483fff8  addiu       $v1, $a0, -0x8
    ctx->pc = 0x2518fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x251900: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x251900u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x251904: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x251904u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x251908: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x251908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x25190c: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x25190cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x251910: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x251910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x251914: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x251914u;
    {
        const bool branch_taken_0x251914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251914u;
            // 0x251918: 0x8c660024  lw          $a2, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251914) {
            ctx->pc = 0x251968u;
            goto label_251968;
        }
    }
    ctx->pc = 0x25191Cu;
    // 0x25191c: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x25191Cu;
    {
        const bool branch_taken_0x25191c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25191c) {
            ctx->pc = 0x251920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25191Cu;
            // 0x251920: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25196Cu;
            goto label_25196c;
        }
    }
    ctx->pc = 0x251924u;
    // 0x251924: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x251924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x251928: 0x1046000f  beq         $v0, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x251928u;
    {
        const bool branch_taken_0x251928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x25192Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251928u;
            // 0x25192c: 0x25030001  addiu       $v1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251928) {
            ctx->pc = 0x251968u;
            goto label_251968;
        }
    }
    ctx->pc = 0x251930u;
    // 0x251930: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x251930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x251934: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x251934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x251938: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x251938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x25193c: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x25193cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x251940: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x251940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x251944: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x251944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x251948: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x251948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25194c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x25194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x251950: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x251950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x251954: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x251954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x251958: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x251958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x25195c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x25195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x251960: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x251960u;
    {
        const bool branch_taken_0x251960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251960u;
            // 0x251964: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251960) {
            ctx->pc = 0x2519B0u;
            goto label_2519b0;
        }
    }
    ctx->pc = 0x251968u;
label_251968:
    // 0x251968: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x251968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25196c:
    // 0x25196c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x25196cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251970: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x251970u;
    {
        const bool branch_taken_0x251970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x251974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251970u;
            // 0x251974: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251970) {
            ctx->pc = 0x2519B0u;
            goto label_2519b0;
        }
    }
    ctx->pc = 0x251978u;
label_251978:
    // 0x251978: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x251978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x25197c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x25197cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x251980: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x251980u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x251984: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x251984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x251988: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x251988u;
    {
        const bool branch_taken_0x251988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251988u;
            // 0x25198c: 0xace30080  sw          $v1, 0x80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251988) {
            ctx->pc = 0x2519B0u;
            goto label_2519b0;
        }
    }
    ctx->pc = 0x251990u;
    // 0x251990: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x251990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x251994: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x251994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x251998: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x251998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25199c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x25199cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2519a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2519a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2519a4: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2519A4u;
    {
        const bool branch_taken_0x2519a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2519A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2519A4u;
            // 0x2519a8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519a4) {
            ctx->pc = 0x251978u;
            runtime->cooperativeGuestYield();
            goto label_251978;
        }
    }
    ctx->pc = 0x2519ACu;
    // 0x2519ac: 0x0  nop
    ctx->pc = 0x2519acu;
    // NOP
label_2519b0:
    // 0x2519b0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2519b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2519b4: 0x441ffcc  bgez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2519B4u;
    {
        const bool branch_taken_0x2519b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2519B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2519B4u;
            // 0x2519b8: 0xace00084  sw          $zero, 0x84($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519b4) {
            ctx->pc = 0x2518E8u;
            runtime->cooperativeGuestYield();
            goto label_2518e8;
        }
    }
    ctx->pc = 0x2519BCu;
label_2519bc:
    // 0x2519bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2519BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2519C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2519BCu;
            // 0x2519c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x251868u: goto label_251868;
            case 0x2518D0u: goto label_2518d0;
            case 0x2518D4u: goto label_2518d4;
            case 0x2518E8u: goto label_2518e8;
            case 0x251968u: goto label_251968;
            case 0x25196Cu: goto label_25196c;
            case 0x251978u: goto label_251978;
            case 0x2519B0u: goto label_2519b0;
            case 0x2519BCu: goto label_2519bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2519C4u;
}
