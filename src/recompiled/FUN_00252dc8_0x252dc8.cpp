#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00252dc8
// Address: 0x252dc8 - 0x252f3c
void FUN_00252dc8_0x252dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00252dc8_0x252dc8");
#endif

    ctx->pc = 0x252dc8u;

    // 0x252dc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x252dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x252dcc: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x252dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x252dd0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x252dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252dd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x252dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x252dd8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x252dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x252ddc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x252ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_252de0:
    // 0x252de0: 0x0  nop
    ctx->pc = 0x252de0u;
    // NOP
    // 0x252de4: 0x0  nop
    ctx->pc = 0x252de4u;
    // NOP
    // 0x252de8: 0x0  nop
    ctx->pc = 0x252de8u;
    // NOP
    // 0x252dec: 0x0  nop
    ctx->pc = 0x252decu;
    // NOP
    // 0x252df0: 0x0  nop
    ctx->pc = 0x252df0u;
    // NOP
    // 0x252df4: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x252DF4u;
    {
        const bool branch_taken_0x252df4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x252df4) {
            ctx->pc = 0x252DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252DF4u;
            // 0x252df8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252DE0u;
            runtime->cooperativeGuestYield();
            goto label_252de0;
        }
    }
    ctx->pc = 0x252DFCu;
    // 0x252dfc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x252dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x252e00: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x252e00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
    // 0x252e04: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x252e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x252e08: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x252E08u;
    {
        const bool branch_taken_0x252e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E08u;
            // 0x252e0c: 0xacc00084  sw          $zero, 0x84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e08) {
            ctx->pc = 0x252E48u;
            goto label_252e48;
        }
    }
    ctx->pc = 0x252E10u;
    // 0x252e10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252e14: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x252E14u;
    {
        const bool branch_taken_0x252e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x252E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E14u;
            // 0x252e18: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e14) {
            ctx->pc = 0x252E4Cu;
            goto label_252e4c;
        }
    }
    ctx->pc = 0x252E1Cu;
    // 0x252e1c: 0xacc00080  sw          $zero, 0x80($a2)
    ctx->pc = 0x252e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
    // 0x252e20: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x252e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x252e24: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x252e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x252e28: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x252e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e2c: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x252e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252e30: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x252e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x252e34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x252e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x252e38: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x252e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x252e3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x252e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x252e40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252e44: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x252e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_252e48:
    // 0x252e48: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x252e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_252e4c:
    // 0x252e4c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x252e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x252e50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x252e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x252e54: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x252E54u;
    {
        const bool branch_taken_0x252e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252e54) {
            ctx->pc = 0x252F34u;
            goto label_252f34;
        }
    }
    ctx->pc = 0x252E5Cu;
    // 0x252e5c: 0x0  nop
    ctx->pc = 0x252e5cu;
    // NOP
label_252e60:
    // 0x252e60: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x252e60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252e64: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x252e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e68: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x252e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x252e6c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x252e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x252e70: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x252e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x252e74: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x252e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x252e78: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x252e78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x252e7c: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x252e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x252e80: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x252e80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x252e84: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x252e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x252e88: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x252E88u;
    {
        const bool branch_taken_0x252e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E88u;
            // 0x252e8c: 0x8c6600b4  lw          $a2, 0xB4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e88) {
            ctx->pc = 0x252EE0u;
            goto label_252ee0;
        }
    }
    ctx->pc = 0x252E90u;
    // 0x252e90: 0x50c00014  beql        $a2, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x252E90u;
    {
        const bool branch_taken_0x252e90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x252e90) {
            ctx->pc = 0x252E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252E90u;
            // 0x252e94: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252EE4u;
            goto label_252ee4;
        }
    }
    ctx->pc = 0x252E98u;
    // 0x252e98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x252e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x252e9c: 0x10460010  beq         $v0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x252E9Cu;
    {
        const bool branch_taken_0x252e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x252EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E9Cu;
            // 0x252ea0: 0x25030001  addiu       $v1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e9c) {
            ctx->pc = 0x252EE0u;
            goto label_252ee0;
        }
    }
    ctx->pc = 0x252EA4u;
    // 0x252ea4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x252ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x252ea8: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x252ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x252eac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x252eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x252eb0: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x252eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x252eb4: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x252eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x252eb8: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x252eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252ebc: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x252ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252ec0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x252ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252ec4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x252ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x252ec8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x252ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x252ecc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x252eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x252ed0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x252ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x252ed4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x252ED4u;
    {
        const bool branch_taken_0x252ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252ED4u;
            // 0x252ed8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ed4) {
            ctx->pc = 0x252F28u;
            goto label_252f28;
        }
    }
    ctx->pc = 0x252EDCu;
    // 0x252edc: 0x0  nop
    ctx->pc = 0x252edcu;
    // NOP
label_252ee0:
    // 0x252ee0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x252ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_252ee4:
    // 0x252ee4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x252ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252ee8: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x252EE8u;
    {
        const bool branch_taken_0x252ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x252EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252EE8u;
            // 0x252eec: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ee8) {
            ctx->pc = 0x252F28u;
            goto label_252f28;
        }
    }
    ctx->pc = 0x252EF0u;
label_252ef0:
    // 0x252ef0: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x252ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x252ef4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x252ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x252ef8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x252ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x252efc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x252efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x252f00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x252F00u;
    {
        const bool branch_taken_0x252f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252F00u;
            // 0x252f04: 0xace30080  sw          $v1, 0x80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f00) {
            ctx->pc = 0x252F28u;
            goto label_252f28;
        }
    }
    ctx->pc = 0x252F08u;
    // 0x252f08: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x252f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x252f0c: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x252f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x252f10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x252f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x252f14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x252f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252f18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x252f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252f1c: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x252F1Cu;
    {
        const bool branch_taken_0x252f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x252F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252F1Cu;
            // 0x252f20: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f1c) {
            ctx->pc = 0x252EF0u;
            runtime->cooperativeGuestYield();
            goto label_252ef0;
        }
    }
    ctx->pc = 0x252F24u;
    // 0x252f24: 0x0  nop
    ctx->pc = 0x252f24u;
    // NOP
label_252f28:
    // 0x252f28: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x252f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252f2c: 0x441ffcc  bgez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x252F2Cu;
    {
        const bool branch_taken_0x252f2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x252F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252F2Cu;
            // 0x252f30: 0xace00084  sw          $zero, 0x84($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f2c) {
            ctx->pc = 0x252E60u;
            runtime->cooperativeGuestYield();
            goto label_252e60;
        }
    }
    ctx->pc = 0x252F34u;
label_252f34:
    // 0x252f34: 0x3e00008  jr          $ra
    ctx->pc = 0x252F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252F34u;
            // 0x252f38: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x252DE0u: goto label_252de0;
            case 0x252E48u: goto label_252e48;
            case 0x252E4Cu: goto label_252e4c;
            case 0x252E60u: goto label_252e60;
            case 0x252EE0u: goto label_252ee0;
            case 0x252EE4u: goto label_252ee4;
            case 0x252EF0u: goto label_252ef0;
            case 0x252F28u: goto label_252f28;
            case 0x252F34u: goto label_252f34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x252F3Cu;
}
