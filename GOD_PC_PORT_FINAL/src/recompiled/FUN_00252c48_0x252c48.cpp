#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00252c48
// Address: 0x252c48 - 0x252dc4
void FUN_00252c48_0x252c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00252c48_0x252c48");
#endif

    ctx->pc = 0x252c48u;

    // 0x252c48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x252c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x252c4c: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x252c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x252c50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x252c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c54: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x252c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x252c58: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x252c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x252c5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x252c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_252c60:
    // 0x252c60: 0x0  nop
    ctx->pc = 0x252c60u;
    // NOP
    // 0x252c64: 0x0  nop
    ctx->pc = 0x252c64u;
    // NOP
    // 0x252c68: 0x0  nop
    ctx->pc = 0x252c68u;
    // NOP
    // 0x252c6c: 0x0  nop
    ctx->pc = 0x252c6cu;
    // NOP
    // 0x252c70: 0x0  nop
    ctx->pc = 0x252c70u;
    // NOP
    // 0x252c74: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x252C74u;
    {
        const bool branch_taken_0x252c74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x252c74) {
            ctx->pc = 0x252C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252C74u;
            // 0x252c78: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252C60u;
            runtime->cooperativeGuestYield();
            goto label_252c60;
        }
    }
    ctx->pc = 0x252C7Cu;
    // 0x252c7c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x252c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x252c80: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x252c80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
    // 0x252c84: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x252c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x252c88: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x252C88u;
    {
        const bool branch_taken_0x252c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252C88u;
            // 0x252c8c: 0xacc00084  sw          $zero, 0x84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c88) {
            ctx->pc = 0x252CC8u;
            goto label_252cc8;
        }
    }
    ctx->pc = 0x252C90u;
    // 0x252c90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252c94: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x252C94u;
    {
        const bool branch_taken_0x252c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x252C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252C94u;
            // 0x252c98: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c94) {
            ctx->pc = 0x252CCCu;
            goto label_252ccc;
        }
    }
    ctx->pc = 0x252C9Cu;
    // 0x252c9c: 0xacc00080  sw          $zero, 0x80($a2)
    ctx->pc = 0x252c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
    // 0x252ca0: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x252ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x252ca4: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x252ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x252ca8: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x252ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252cac: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x252cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252cb0: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x252cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x252cb4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x252cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x252cb8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x252cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x252cbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x252cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x252cc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x252cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252cc4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x252cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_252cc8:
    // 0x252cc8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x252cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_252ccc:
    // 0x252ccc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x252cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x252cd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x252cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x252cd4: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x252CD4u;
    {
        const bool branch_taken_0x252cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252cd4) {
            ctx->pc = 0x252DBCu;
            goto label_252dbc;
        }
    }
    ctx->pc = 0x252CDCu;
    // 0x252cdc: 0x0  nop
    ctx->pc = 0x252cdcu;
    // NOP
label_252ce0:
    // 0x252ce0: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x252ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252ce4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x252ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ce8: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x252ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x252cec: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x252cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x252cf0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x252cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x252cf4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x252cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x252cf8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x252cf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x252cfc: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x252cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x252d00: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x252d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x252d04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x252d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x252d08: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x252d08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x252d0c: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x252d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x252d10: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x252D10u;
    {
        const bool branch_taken_0x252d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D10u;
            // 0x252d14: 0x8c8400b4  lw          $a0, 0xB4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d10) {
            ctx->pc = 0x252D68u;
            goto label_252d68;
        }
    }
    ctx->pc = 0x252D18u;
    // 0x252d18: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x252D18u;
    {
        const bool branch_taken_0x252d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x252d18) {
            ctx->pc = 0x252D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252D18u;
            // 0x252d1c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252D6Cu;
            goto label_252d6c;
        }
    }
    ctx->pc = 0x252D20u;
    // 0x252d20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x252d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252d24: 0x10440010  beq         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x252D24u;
    {
        const bool branch_taken_0x252d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x252D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D24u;
            // 0x252d28: 0x25030001  addiu       $v1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d24) {
            ctx->pc = 0x252D68u;
            goto label_252d68;
        }
    }
    ctx->pc = 0x252D2Cu;
    // 0x252d2c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x252d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x252d30: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x252d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x252d34: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x252d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x252d38: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x252d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x252d3c: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x252d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x252d40: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x252d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252d44: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x252d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252d48: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x252d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252d4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x252d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x252d50: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x252d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x252d54: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x252d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x252d58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x252d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252d5c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x252D5Cu;
    {
        const bool branch_taken_0x252d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D5Cu;
            // 0x252d60: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d5c) {
            ctx->pc = 0x252DB0u;
            goto label_252db0;
        }
    }
    ctx->pc = 0x252D64u;
    // 0x252d64: 0x0  nop
    ctx->pc = 0x252d64u;
    // NOP
label_252d68:
    // 0x252d68: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x252d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_252d6c:
    // 0x252d6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x252d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252d70: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x252D70u;
    {
        const bool branch_taken_0x252d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x252D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D70u;
            // 0x252d74: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d70) {
            ctx->pc = 0x252DB0u;
            goto label_252db0;
        }
    }
    ctx->pc = 0x252D78u;
label_252d78:
    // 0x252d78: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x252d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x252d7c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x252d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x252d80: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x252d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x252d84: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x252d84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x252d88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x252D88u;
    {
        const bool branch_taken_0x252d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D88u;
            // 0x252d8c: 0xace30080  sw          $v1, 0x80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d88) {
            ctx->pc = 0x252DB0u;
            goto label_252db0;
        }
    }
    ctx->pc = 0x252D90u;
    // 0x252d90: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x252d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x252d94: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x252d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x252d98: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x252d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x252d9c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x252d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252da0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x252da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252da4: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x252DA4u;
    {
        const bool branch_taken_0x252da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x252DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DA4u;
            // 0x252da8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252da4) {
            ctx->pc = 0x252D78u;
            runtime->cooperativeGuestYield();
            goto label_252d78;
        }
    }
    ctx->pc = 0x252DACu;
    // 0x252dac: 0x0  nop
    ctx->pc = 0x252dacu;
    // NOP
label_252db0:
    // 0x252db0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x252db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252db4: 0x441ffca  bgez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x252DB4u;
    {
        const bool branch_taken_0x252db4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x252DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DB4u;
            // 0x252db8: 0xace00084  sw          $zero, 0x84($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252db4) {
            ctx->pc = 0x252CE0u;
            runtime->cooperativeGuestYield();
            goto label_252ce0;
        }
    }
    ctx->pc = 0x252DBCu;
label_252dbc:
    // 0x252dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x252DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DBCu;
            // 0x252dc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x252C60u: goto label_252c60;
            case 0x252CC8u: goto label_252cc8;
            case 0x252CCCu: goto label_252ccc;
            case 0x252CE0u: goto label_252ce0;
            case 0x252D68u: goto label_252d68;
            case 0x252D6Cu: goto label_252d6c;
            case 0x252D78u: goto label_252d78;
            case 0x252DB0u: goto label_252db0;
            case 0x252DBCu: goto label_252dbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x252DC4u;
}
