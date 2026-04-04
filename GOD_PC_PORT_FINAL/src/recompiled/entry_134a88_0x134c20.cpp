#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_134a88
// Address: 0x134a88 - 0x134c20
void entry_134a88_0x134c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_134a88_0x134c20");
#endif

    ctx->pc = 0x134a88u;

    // 0x134a88: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x134a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x134a8c: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x134a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x134a90: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134A90u;
    {
        const bool branch_taken_0x134a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x134A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A90u;
            // 0x134a94: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a90) {
            ctx->pc = 0x134AA8u;
            goto label_134aa8;
        }
    }
    ctx->pc = 0x134A98u;
    // 0x134a98: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x134A98u;
    {
        const bool branch_taken_0x134a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A98u;
            // 0x134a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a98) {
            ctx->pc = 0x134C18u;
            goto label_134c18;
        }
    }
    ctx->pc = 0x134AA0u;
label_134aa0:
    // 0x134aa0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x134AA0u;
    {
        const bool branch_taken_0x134aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134AA0u;
            // 0x134aa4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134aa0) {
            ctx->pc = 0x134C18u;
            goto label_134c18;
        }
    }
    ctx->pc = 0x134AA8u;
label_134aa8:
    // 0x134aa8: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x134aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x134aac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x134aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ab0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x134ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x134ab4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x134ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x134ab8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x134ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134abc: 0x0  nop
    ctx->pc = 0x134abcu;
    // NOP
label_134ac0:
    // 0x134ac0: 0x0  nop
    ctx->pc = 0x134ac0u;
    // NOP
    // 0x134ac4: 0x0  nop
    ctx->pc = 0x134ac4u;
    // NOP
    // 0x134ac8: 0x0  nop
    ctx->pc = 0x134ac8u;
    // NOP
    // 0x134acc: 0x0  nop
    ctx->pc = 0x134accu;
    // NOP
    // 0x134ad0: 0x0  nop
    ctx->pc = 0x134ad0u;
    // NOP
    // 0x134ad4: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x134AD4u;
    {
        const bool branch_taken_0x134ad4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x134ad4) {
            ctx->pc = 0x134AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134AD4u;
            // 0x134ad8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134AC0u;
            runtime->cooperativeGuestYield();
            goto label_134ac0;
        }
    }
    ctx->pc = 0x134ADCu;
    // 0x134adc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x134adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134ae0: 0xace50080  sw          $a1, 0x80($a3)
    ctx->pc = 0x134ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 5));
    // 0x134ae4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x134ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x134ae8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x134AE8u;
    {
        const bool branch_taken_0x134ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134AE8u;
            // 0x134aec: 0xace00084  sw          $zero, 0x84($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ae8) {
            ctx->pc = 0x134B28u;
            goto label_134b28;
        }
    }
    ctx->pc = 0x134AF0u;
    // 0x134af0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134af4: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x134AF4u;
    {
        const bool branch_taken_0x134af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x134AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134AF4u;
            // 0x134af8: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134af4) {
            ctx->pc = 0x134B2Cu;
            goto label_134b2c;
        }
    }
    ctx->pc = 0x134AFCu;
    // 0x134afc: 0xace00080  sw          $zero, 0x80($a3)
    ctx->pc = 0x134afcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 0));
    // 0x134b00: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x134b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x134b04: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x134b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x134b08: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x134b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134b0c: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x134b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134b10: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x134b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x134b14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134b18: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x134b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x134b1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x134b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x134b20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x134b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134b24: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x134b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_134b28:
    // 0x134b28: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x134b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_134b2c:
    // 0x134b2c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x134b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x134b30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x134b30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x134b34: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x134B34u;
    {
        const bool branch_taken_0x134b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B34u;
            // 0x134b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b34) {
            ctx->pc = 0x134C18u;
            goto label_134c18;
        }
    }
    ctx->pc = 0x134B3Cu;
    // 0x134b3c: 0x0  nop
    ctx->pc = 0x134b3cu;
    // NOP
label_134b40:
    // 0x134b40: 0x8fa90080  lw          $t1, 0x80($sp)
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134b44: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x134b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x134b48: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x134b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x134b4c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x134b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x134b50: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x134b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x134b54: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x134b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x134b58: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x134b58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x134b5c: 0x1046ffd0  beq         $v0, $a2, . + 4 + (-0x30 << 2)
    ctx->pc = 0x134B5Cu;
    {
        const bool branch_taken_0x134b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x134B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B5Cu;
            // 0x134b60: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b5c) {
            ctx->pc = 0x134AA0u;
            runtime->cooperativeGuestYield();
            goto label_134aa0;
        }
    }
    ctx->pc = 0x134B64u;
    // 0x134b64: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x134b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b68: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x134b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x134b6c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x134B6Cu;
    {
        const bool branch_taken_0x134b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B6Cu;
            // 0x134b70: 0x8ca500b4  lw          $a1, 0xB4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b6c) {
            ctx->pc = 0x134BC0u;
            goto label_134bc0;
        }
    }
    ctx->pc = 0x134B74u;
    // 0x134b74: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x134B74u;
    {
        const bool branch_taken_0x134b74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b74) {
            ctx->pc = 0x134B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134B74u;
            // 0x134b78: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134BC4u;
            goto label_134bc4;
        }
    }
    ctx->pc = 0x134B7Cu;
    // 0x134b7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134b80: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x134B80u;
    {
        const bool branch_taken_0x134b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x134B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B80u;
            // 0x134b84: 0x25230001  addiu       $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b80) {
            ctx->pc = 0x134BC0u;
            goto label_134bc0;
        }
    }
    ctx->pc = 0x134B88u;
    // 0x134b88: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x134b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134b8c: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x134b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x134b90: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x134b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x134b94: 0x6ba900a7  ldl         $t1, 0xA7($sp)
    ctx->pc = 0x134b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x134b98: 0x6fa900a0  ldr         $t1, 0xA0($sp)
    ctx->pc = 0x134b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x134b9c: 0xb0490007  sdl         $t1, 0x7($v0)
    ctx->pc = 0x134b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134ba0: 0xb4490000  sdr         $t1, 0x0($v0)
    ctx->pc = 0x134ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134ba4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x134ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134ba8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134bac: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x134bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x134bb0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x134bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x134bb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134bb8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x134BB8u;
    {
        const bool branch_taken_0x134bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134BB8u;
            // 0x134bbc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bb8) {
            ctx->pc = 0x134C08u;
            goto label_134c08;
        }
    }
    ctx->pc = 0x134BC0u;
label_134bc0:
    // 0x134bc0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x134bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_134bc4:
    // 0x134bc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134bc8: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x134BC8u;
    {
        const bool branch_taken_0x134bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x134BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134BC8u;
            // 0x134bcc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bc8) {
            ctx->pc = 0x134C08u;
            goto label_134c08;
        }
    }
    ctx->pc = 0x134BD0u;
label_134bd0:
    // 0x134bd0: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x134bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x134bd4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x134bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x134bd8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x134bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x134bdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x134bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x134be0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134BE0u;
    {
        const bool branch_taken_0x134be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134BE0u;
            // 0x134be4: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134be0) {
            ctx->pc = 0x134C08u;
            goto label_134c08;
        }
    }
    ctx->pc = 0x134BE8u;
    // 0x134be8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x134be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134bec: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x134becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x134bf0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x134bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134bf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134bf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134bfc: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x134BFCu;
    {
        const bool branch_taken_0x134bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x134C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134BFCu;
            // 0x134c00: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bfc) {
            ctx->pc = 0x134BD0u;
            runtime->cooperativeGuestYield();
            goto label_134bd0;
        }
    }
    ctx->pc = 0x134C04u;
    // 0x134c04: 0x0  nop
    ctx->pc = 0x134c04u;
    // NOP
label_134c08:
    // 0x134c08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x134c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134c0c: 0x441ffcc  bgez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x134C0Cu;
    {
        const bool branch_taken_0x134c0c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x134C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134C0Cu;
            // 0x134c10: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c0c) {
            ctx->pc = 0x134B40u;
            runtime->cooperativeGuestYield();
            goto label_134b40;
        }
    }
    ctx->pc = 0x134C14u;
    // 0x134c14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x134c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_134c18:
    // 0x134c18: 0x3e00008  jr          $ra
    ctx->pc = 0x134C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134C18u;
            // 0x134c1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134AA0u: goto label_134aa0;
            case 0x134AA8u: goto label_134aa8;
            case 0x134AC0u: goto label_134ac0;
            case 0x134B28u: goto label_134b28;
            case 0x134B2Cu: goto label_134b2c;
            case 0x134B40u: goto label_134b40;
            case 0x134BC0u: goto label_134bc0;
            case 0x134BC4u: goto label_134bc4;
            case 0x134BD0u: goto label_134bd0;
            case 0x134C08u: goto label_134c08;
            case 0x134C18u: goto label_134c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134C20u;
}
