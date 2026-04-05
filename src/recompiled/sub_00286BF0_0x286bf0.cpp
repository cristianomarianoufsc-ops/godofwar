#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286BF0
// Address: 0x286bf0 - 0x287028
void sub_00286BF0_0x286bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286BF0_0x286bf0");
#endif

    ctx->pc = 0x286bf0u;

    // 0x286bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x286bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x286bf4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x286bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x286bf8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x286bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x286bfc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x286bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x286c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x286c04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x286c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x286c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x286c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c10: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x286c10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286c14: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x286c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x286c18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286C18u;
    {
        const bool branch_taken_0x286c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C18u;
            // 0x286c1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c18) {
            ctx->pc = 0x286C34u;
            goto label_286c34;
        }
    }
    ctx->pc = 0x286C20u;
    // 0x286c20: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x286c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x286c24: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x286c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x286c28: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x286c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x286c2c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x286C2Cu;
    {
        const bool branch_taken_0x286c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C2Cu;
            // 0x286c30: 0x441018  mult        $v0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c2c) {
            ctx->pc = 0x286CCCu;
            goto label_286ccc;
        }
    }
    ctx->pc = 0x286C34u;
label_286c34:
    // 0x286c34: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x286c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x286c38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286C38u;
    {
        const bool branch_taken_0x286c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C38u;
            // 0x286c3c: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c38) {
            ctx->pc = 0x286C4Cu;
            goto label_286c4c;
        }
    }
    ctx->pc = 0x286C40u;
    // 0x286c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c44: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x286C44u;
    {
        const bool branch_taken_0x286c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C44u;
            // 0x286c48: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c44) {
            ctx->pc = 0x286D04u;
            goto label_286d04;
        }
    }
    ctx->pc = 0x286C4Cu;
label_286c4c:
    // 0x286c4c: 0x306200c0  andi        $v0, $v1, 0xC0
    ctx->pc = 0x286c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x286c50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286C50u;
    {
        const bool branch_taken_0x286c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C50u;
            // 0x286c54: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c50) {
            ctx->pc = 0x286C68u;
            goto label_286c68;
        }
    }
    ctx->pc = 0x286C58u;
    // 0x286c58: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x286c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x286c5c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x286c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x286c60: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x286C60u;
    {
        const bool branch_taken_0x286c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C60u;
            // 0x286c64: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c60) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286C68u;
label_286c68:
    // 0x286c68: 0x2c62002f  sltiu       $v0, $v1, 0x2F
    ctx->pc = 0x286c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x286c6c: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x286C6Cu;
    {
        const bool branch_taken_0x286c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C6Cu;
            // 0x286c70: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c6c) {
            ctx->pc = 0x286F64u;
            goto label_286f64;
        }
    }
    ctx->pc = 0x286C74u;
    // 0x286c74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x286c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x286c78: 0x24425530  addiu       $v0, $v0, 0x5530
    ctx->pc = 0x286c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21808));
    // 0x286c7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x286c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286c80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x286c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286c84: 0x800008  jr          $a0
    ctx->pc = 0x286C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286C8Cu: goto label_286c8c;
            case 0x286CA0u: goto label_286ca0;
            case 0x286CB0u: goto label_286cb0;
            case 0x286CD8u: goto label_286cd8;
            case 0x286CF4u: goto label_286cf4;
            case 0x286D44u: goto label_286d44;
            case 0x286D64u: goto label_286d64;
            case 0x286DACu: goto label_286dac;
            case 0x286DDCu: goto label_286ddc;
            case 0x286DF8u: goto label_286df8;
            case 0x286E14u: goto label_286e14;
            case 0x286E7Cu: goto label_286e7c;
            case 0x286EE4u: goto label_286ee4;
            case 0x286F48u: goto label_286f48;
            case 0x286F64u: goto label_286f64;
            case 0x286F6Cu: goto label_286f6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286C8Cu;
label_286c8c:
    // 0x286c8c: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x286c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x286c90: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x286c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x286c94: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x286c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286c98: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x286C98u;
    {
        const bool branch_taken_0x286c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C98u;
            // 0x286c9c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c98) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286CA0u;
label_286ca0:
    // 0x286ca0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x286ca0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286ca4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x286ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x286ca8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x286CA8u;
    {
        const bool branch_taken_0x286ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286CA8u;
            // 0x286cac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ca8) {
            ctx->pc = 0x286CE8u;
            goto label_286ce8;
        }
    }
    ctx->pc = 0x286CB0u;
label_286cb0:
    // 0x286cb0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x286cb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x286cb4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x286cb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286cb8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x286cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x286cbc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x286cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x286cc0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x286cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x286cc4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x286cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x286cc8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x286cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_286ccc:
    // 0x286ccc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x286cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286cd0: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x286CD0u;
    {
        const bool branch_taken_0x286cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286CD0u;
            // 0x286cd4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cd0) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286CD8u;
label_286cd8:
    // 0x286cd8: 0x8a030003  lwl         $v1, 0x3($s0)
    ctx->pc = 0x286cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x286cdc: 0x9a030000  lwr         $v1, 0x0($s0)
    ctx->pc = 0x286cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x286ce0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x286ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x286ce4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x286ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_286ce8:
    // 0x286ce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x286ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286cec: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x286CECu;
    {
        const bool branch_taken_0x286cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286CECu;
            // 0x286cf0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cec) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286CF4u;
label_286cf4:
    // 0x286cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cf8: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286CF8u;
    SET_GPR_U32(ctx, 31, 0x286D00u);
    ctx->pc = 0x286CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286CF8u;
            // 0x286cfc: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D00u; }
        if (ctx->pc != 0x286D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D00u; }
        if (ctx->pc != 0x286D00u) { return; }
    }
    ctx->pc = 0x286D00u;
    // 0x286d00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286d04:
    // 0x286d04: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286D04u;
    SET_GPR_U32(ctx, 31, 0x286D0Cu);
    ctx->pc = 0x286D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286D04u;
            // 0x286d08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D0Cu; }
        if (ctx->pc != 0x286D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D0Cu; }
        if (ctx->pc != 0x286D0Cu) { return; }
    }
    ctx->pc = 0x286D0Cu;
    // 0x286d0c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x286d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d14: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x286d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x286d18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x286d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286d1c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x286d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x286d20: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x286d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x286d24: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x286d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x286d28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x286d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x286d2c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x286d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x286d30: 0xa046029c  sb          $a2, 0x29C($v0)
    ctx->pc = 0x286d30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 668), (uint8_t)GPR_U32(ctx, 6));
    // 0x286d34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x286d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x286d38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x286d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d3c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x286D3Cu;
    {
        const bool branch_taken_0x286d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D3Cu;
            // 0x286d40: 0xfc620018  sd          $v0, 0x18($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d3c) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286D44u;
label_286d44:
    // 0x286d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d48: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286D48u;
    SET_GPR_U32(ctx, 31, 0x286D50u);
    ctx->pc = 0x286D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286D48u;
            // 0x286d4c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D50u; }
        if (ctx->pc != 0x286D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D50u; }
        if (ctx->pc != 0x286D50u) { return; }
    }
    ctx->pc = 0x286D50u;
    // 0x286d50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x286d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x286d54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d58: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x286d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x286d5c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x286D5Cu;
    {
        const bool branch_taken_0x286d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D5Cu;
            // 0x286d60: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d5c) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286D64u;
label_286d64:
    // 0x286d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d68: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286D68u;
    SET_GPR_U32(ctx, 31, 0x286D70u);
    ctx->pc = 0x286D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286D68u;
            // 0x286d6c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D70u; }
        if (ctx->pc != 0x286D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D70u; }
        if (ctx->pc != 0x286D70u) { return; }
    }
    ctx->pc = 0x286D70u;
    // 0x286d70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d74: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286D74u;
    SET_GPR_U32(ctx, 31, 0x286D7Cu);
    ctx->pc = 0x286D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286D74u;
            // 0x286d78: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D7Cu; }
        if (ctx->pc != 0x286D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286D7Cu; }
        if (ctx->pc != 0x286D7Cu) { return; }
    }
    ctx->pc = 0x286D7Cu;
    // 0x286d7c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x286d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x286d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x286d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286d88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x286d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286d8c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x286d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x286d90: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x286d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x286d94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286d98: 0xa085029c  sb          $a1, 0x29C($a0)
    ctx->pc = 0x286d98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 668), (uint8_t)GPR_U32(ctx, 5));
    // 0x286d9c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x286d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x286da0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x286da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x286da4: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x286DA4u;
    {
        const bool branch_taken_0x286da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286DA4u;
            // 0x286da8: 0xfc430018  sd          $v1, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286da4) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286DACu;
label_286dac:
    // 0x286dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286db0: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286DB0u;
    SET_GPR_U32(ctx, 31, 0x286DB8u);
    ctx->pc = 0x286DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286DB0u;
            // 0x286db4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DB8u; }
        if (ctx->pc != 0x286DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DB8u; }
        if (ctx->pc != 0x286DB8u) { return; }
    }
    ctx->pc = 0x286DB8u;
    // 0x286db8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dbc: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286DBCu;
    SET_GPR_U32(ctx, 31, 0x286DC4u);
    ctx->pc = 0x286DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286DBCu;
            // 0x286dc0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DC4u; }
        if (ctx->pc != 0x286DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DC4u; }
        if (ctx->pc != 0x286DC4u) { return; }
    }
    ctx->pc = 0x286DC4u;
    // 0x286dc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dc8: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x286dc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x286dcc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x286dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286dd0: 0xa6230298  sh          $v1, 0x298($s1)
    ctx->pc = 0x286dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
    // 0x286dd4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x286DD4u;
    {
        const bool branch_taken_0x286dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286DD4u;
            // 0x286dd8: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dd4) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286DDCu;
label_286ddc:
    // 0x286ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286de0: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286DE0u;
    SET_GPR_U32(ctx, 31, 0x286DE8u);
    ctx->pc = 0x286DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286DE0u;
            // 0x286de4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DE8u; }
        if (ctx->pc != 0x286DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DE8u; }
        if (ctx->pc != 0x286DE8u) { return; }
    }
    ctx->pc = 0x286DE8u;
    // 0x286de8: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x286de8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x286dec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286df0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x286DF0u;
    {
        const bool branch_taken_0x286df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286DF0u;
            // 0x286df4: 0xa6230298  sh          $v1, 0x298($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286df0) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286DF8u;
label_286df8:
    // 0x286df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dfc: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286DFCu;
    SET_GPR_U32(ctx, 31, 0x286E04u);
    ctx->pc = 0x286E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286DFCu;
            // 0x286e00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E04u; }
        if (ctx->pc != 0x286E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E04u; }
        if (ctx->pc != 0x286E04u) { return; }
    }
    ctx->pc = 0x286E04u;
    // 0x286e04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x286e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286e08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e0c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x286E0Cu;
    {
        const bool branch_taken_0x286e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286E0Cu;
            // 0x286e10: 0xfe230008  sd          $v1, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e0c) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286E14u;
label_286e14:
    // 0x286e14: 0xc0a2c9c  jal         func_28B270
    ctx->pc = 0x286E14u;
    SET_GPR_U32(ctx, 31, 0x286E1Cu);
    ctx->pc = 0x286E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286E14u;
            // 0x286e18: 0x240402f8  addiu       $a0, $zero, 0x2F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B270u;
    if (runtime->hasFunction(0x28B270u)) {
        auto targetFn = runtime->lookupFunction(0x28B270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E1Cu; }
        if (ctx->pc != 0x286E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B270_0x28b270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E1Cu; }
        if (ctx->pc != 0x286E1Cu) { return; }
    }
    ctx->pc = 0x286E1Cu;
    // 0x286e1c: 0x262502e0  addiu       $a1, $s1, 0x2E0
    ctx->pc = 0x286e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x286e20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e24: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x286e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286e28:
    // 0x286e28: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x286e28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286e2c: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x286e2cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x286e30: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x286e30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x286e34: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x286e34u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x286e38: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x286e38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x286e3c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x286e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x286e40: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x286e40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x286e44: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x286e44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x286e48: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x286e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x286e4c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x286e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x286e50: 0x0  nop
    ctx->pc = 0x286e50u;
    // NOP
    // 0x286e54: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x286E54u;
    {
        const bool branch_taken_0x286e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x286e54) {
            ctx->pc = 0x286E28u;
            runtime->cooperativeGuestYield();
            goto label_286e28;
        }
    }
    ctx->pc = 0x286E5Cu;
    // 0x286e5c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x286e5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286e60: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x286e60u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x286e64: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x286e64u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x286e68: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x286e68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x286e6c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x286e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x286e70: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x286e70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x286e74: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x286E74u;
    {
        const bool branch_taken_0x286e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286E74u;
            // 0x286e78: 0xae2202f0  sw          $v0, 0x2F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e74) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286E7Cu;
label_286e7c:
    // 0x286e7c: 0x8e2402f0  lw          $a0, 0x2F0($s1)
    ctx->pc = 0x286e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x286e80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e84: 0x248202e0  addiu       $v0, $a0, 0x2E0
    ctx->pc = 0x286e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x286e88: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x286e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286e8c:
    // 0x286e8c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x286e8cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x286e90: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x286e90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x286e94: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x286e94u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x286e98: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x286e98u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x286e9c: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x286e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x286ea0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x286ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x286ea4: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x286ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x286ea8: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x286ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x286eac: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x286eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x286eb0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x286eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x286eb4: 0x0  nop
    ctx->pc = 0x286eb4u;
    // NOP
    // 0x286eb8: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x286EB8u;
    {
        const bool branch_taken_0x286eb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x286eb8) {
            ctx->pc = 0x286E8Cu;
            runtime->cooperativeGuestYield();
            goto label_286e8c;
        }
    }
    ctx->pc = 0x286EC0u;
    // 0x286ec0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x286ec0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x286ec4: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x286ec4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x286ec8: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x286ec8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x286ecc: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x286eccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x286ed0: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x286ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x286ed4: 0xc0a2cb0  jal         func_28B2C0
    ctx->pc = 0x286ED4u;
    SET_GPR_U32(ctx, 31, 0x286EDCu);
    ctx->pc = 0x286ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286ED4u;
            // 0x286ed8: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B2C0u;
    if (runtime->hasFunction(0x28B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x28B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286EDCu; }
        if (ctx->pc != 0x286EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B2C0_0x28b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286EDCu; }
        if (ctx->pc != 0x286EDCu) { return; }
    }
    ctx->pc = 0x286EDCu;
    // 0x286edc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x286EDCu;
    {
        const bool branch_taken_0x286edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286EDCu;
            // 0x286ee0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286edc) {
            ctx->pc = 0x286F70u;
            goto label_286f70;
        }
    }
    ctx->pc = 0x286EE4u;
label_286ee4:
    // 0x286ee4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x286ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x286ee8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x286ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x286eec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x286eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x286ef0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x286ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x286ef4: 0x2629029c  addiu       $t1, $s1, 0x29C
    ctx->pc = 0x286ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x286ef8: 0x26280018  addiu       $t0, $s1, 0x18
    ctx->pc = 0x286ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x286efc: 0x0  nop
    ctx->pc = 0x286efcu;
    // NOP
label_286f00:
    // 0x286f00: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x286f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x286f04: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x286f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x286f08: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x286f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x286f0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x286f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286f14: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x286f14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x286f18: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x286f18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x286f1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x286f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x286f20: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x286f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x286f24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x286f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x286f28: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x286f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x286f2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x286f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f30: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x286f30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x286f34: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x286f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x286f38: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x286F38u;
    {
        const bool branch_taken_0x286f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286F38u;
            // 0x286f3c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f38) {
            ctx->pc = 0x286F00u;
            runtime->cooperativeGuestYield();
            goto label_286f00;
        }
    }
    ctx->pc = 0x286F40u;
    // 0x286f40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x286F40u;
    {
        const bool branch_taken_0x286f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286F40u;
            // 0x286f44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f40) {
            ctx->pc = 0x286F70u;
            goto label_286f70;
        }
    }
    ctx->pc = 0x286F48u;
label_286f48:
    // 0x286f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f4c: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286F4Cu;
    SET_GPR_U32(ctx, 31, 0x286F54u);
    ctx->pc = 0x286F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286F4Cu;
            // 0x286f50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286F54u; }
        if (ctx->pc != 0x286F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286F54u; }
        if (ctx->pc != 0x286F54u) { return; }
    }
    ctx->pc = 0x286F54u;
    // 0x286f54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x286f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286f58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x286F5Cu;
    {
        const bool branch_taken_0x286f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286F5Cu;
            // 0x286f60: 0xfe230010  sd          $v1, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f5c) {
            ctx->pc = 0x286F6Cu;
            goto label_286f6c;
        }
    }
    ctx->pc = 0x286F64u;
label_286f64:
    // 0x286f64: 0xc0a2c50  jal         func_28B140
    ctx->pc = 0x286F64u;
    SET_GPR_U32(ctx, 31, 0x286F6Cu);
    ctx->pc = 0x28B140u;
    if (runtime->hasFunction(0x28B140u)) {
        auto targetFn = runtime->lookupFunction(0x28B140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286F6Cu; }
        if (ctx->pc != 0x286F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B140_0x28b140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286F6Cu; }
        if (ctx->pc != 0x286F6Cu) { return; }
    }
    ctx->pc = 0x286F6Cu;
label_286f6c:
    // 0x286f6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x286f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286f70:
    // 0x286f70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x286f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286f74: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x286f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286f78: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x286f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286f7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x286f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286f80: 0x3e00008  jr          $ra
    ctx->pc = 0x286F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286F80u;
            // 0x286f84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286C34u: goto label_286c34;
            case 0x286C4Cu: goto label_286c4c;
            case 0x286C68u: goto label_286c68;
            case 0x286C8Cu: goto label_286c8c;
            case 0x286CA0u: goto label_286ca0;
            case 0x286CB0u: goto label_286cb0;
            case 0x286CCCu: goto label_286ccc;
            case 0x286CD8u: goto label_286cd8;
            case 0x286CE8u: goto label_286ce8;
            case 0x286CF4u: goto label_286cf4;
            case 0x286D04u: goto label_286d04;
            case 0x286D44u: goto label_286d44;
            case 0x286D64u: goto label_286d64;
            case 0x286DACu: goto label_286dac;
            case 0x286DDCu: goto label_286ddc;
            case 0x286DF8u: goto label_286df8;
            case 0x286E14u: goto label_286e14;
            case 0x286E28u: goto label_286e28;
            case 0x286E7Cu: goto label_286e7c;
            case 0x286E8Cu: goto label_286e8c;
            case 0x286EE4u: goto label_286ee4;
            case 0x286F00u: goto label_286f00;
            case 0x286F48u: goto label_286f48;
            case 0x286F64u: goto label_286f64;
            case 0x286F6Cu: goto label_286f6c;
            case 0x286F70u: goto label_286f70;
            case 0x286FD0u: goto label_286fd0;
            case 0x286FFCu: goto label_286ffc;
            case 0x287004u: goto label_287004;
            case 0x287014u: goto label_287014;
            case 0x287018u: goto label_287018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286F88u;
    // 0x286f88: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x286f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x286f8c: 0x8c626990  lw          $v0, 0x6990($v1)
    ctx->pc = 0x286f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27024)));
    // 0x286f90: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x286f90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x286f94: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x286f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x286f98: 0xac656990  sw          $a1, 0x6990($v1)
    ctx->pc = 0x286f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27024), GPR_U32(ctx, 5));
    // 0x286f9c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x286f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x286fa0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x286fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x286fa4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x286fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x286fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x286FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286FA8u;
            // 0x286fac: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286C34u: goto label_286c34;
            case 0x286C4Cu: goto label_286c4c;
            case 0x286C68u: goto label_286c68;
            case 0x286C8Cu: goto label_286c8c;
            case 0x286CA0u: goto label_286ca0;
            case 0x286CB0u: goto label_286cb0;
            case 0x286CCCu: goto label_286ccc;
            case 0x286CD8u: goto label_286cd8;
            case 0x286CE8u: goto label_286ce8;
            case 0x286CF4u: goto label_286cf4;
            case 0x286D04u: goto label_286d04;
            case 0x286D44u: goto label_286d44;
            case 0x286D64u: goto label_286d64;
            case 0x286DACu: goto label_286dac;
            case 0x286DDCu: goto label_286ddc;
            case 0x286DF8u: goto label_286df8;
            case 0x286E14u: goto label_286e14;
            case 0x286E28u: goto label_286e28;
            case 0x286E7Cu: goto label_286e7c;
            case 0x286E8Cu: goto label_286e8c;
            case 0x286EE4u: goto label_286ee4;
            case 0x286F00u: goto label_286f00;
            case 0x286F48u: goto label_286f48;
            case 0x286F64u: goto label_286f64;
            case 0x286F6Cu: goto label_286f6c;
            case 0x286F70u: goto label_286f70;
            case 0x286FD0u: goto label_286fd0;
            case 0x286FFCu: goto label_286ffc;
            case 0x287004u: goto label_287004;
            case 0x287014u: goto label_287014;
            case 0x287018u: goto label_287018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286FB0u;
    // 0x286fb0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x286fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x286fb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286fb8: 0x8c436990  lw          $v1, 0x6990($v0)
    ctx->pc = 0x286fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27024)));
    // 0x286fbc: 0x24456990  addiu       $a1, $v0, 0x6990
    ctx->pc = 0x286fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27024));
    // 0x286fc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286fc4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x286FC4u;
    {
        const bool branch_taken_0x286fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286FC4u;
            // 0x286fc8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fc4) {
            ctx->pc = 0x287004u;
            goto label_287004;
        }
    }
    ctx->pc = 0x286FCCu;
    // 0x286fcc: 0x0  nop
    ctx->pc = 0x286fccu;
    // NOP
label_286fd0:
    // 0x286fd0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x286fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x286fd4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x286fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x286fd8: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x286FD8u;
    {
        const bool branch_taken_0x286fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x286FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286FD8u;
            // 0x286fdc: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fd8) {
            ctx->pc = 0x286FFCu;
            goto label_286ffc;
        }
    }
    ctx->pc = 0x286FE0u;
    // 0x286fe0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x286fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286fe4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x286FE4u;
    {
        const bool branch_taken_0x286fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286FE4u;
            // 0x286fe8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fe4) {
            ctx->pc = 0x287014u;
            goto label_287014;
        }
    }
    ctx->pc = 0x286FECu;
    // 0x286fec: 0xc0a2cb0  jal         func_28B2C0
    ctx->pc = 0x286FECu;
    SET_GPR_U32(ctx, 31, 0x286FF4u);
    ctx->pc = 0x286FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286FECu;
            // 0x286ff0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B2C0u;
    if (runtime->hasFunction(0x28B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x28B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286FF4u; }
        if (ctx->pc != 0x286FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B2C0_0x28b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286FF4u; }
        if (ctx->pc != 0x286FF4u) { return; }
    }
    ctx->pc = 0x286FF4u;
    // 0x286ff4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286FF4u;
    {
        const bool branch_taken_0x286ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286FF4u;
            // 0x286ff8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ff4) {
            ctx->pc = 0x287018u;
            goto label_287018;
        }
    }
    ctx->pc = 0x286FFCu;
label_286ffc:
    // 0x286ffc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x286FFCu;
    {
        const bool branch_taken_0x286ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286FFCu;
            // 0x287000: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ffc) {
            ctx->pc = 0x286FD0u;
            runtime->cooperativeGuestYield();
            goto label_286fd0;
        }
    }
    ctx->pc = 0x287004u;
label_287004:
    // 0x287004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28700c: 0x80a2c50  j           func_28B140
    ctx->pc = 0x28700Cu;
    ctx->pc = 0x287010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28700Cu;
            // 0x287010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B140u;
    if (runtime->hasFunction(0x28B140u)) {
        auto targetFn = runtime->lookupFunction(0x28B140u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0028B140_0x28b140(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x287014u;
label_287014:
    // 0x287014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x287014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287018:
    // 0x287018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28701c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28701cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287020: 0x3e00008  jr          $ra
    ctx->pc = 0x287020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287020u;
            // 0x287024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286C34u: goto label_286c34;
            case 0x286C4Cu: goto label_286c4c;
            case 0x286C68u: goto label_286c68;
            case 0x286C8Cu: goto label_286c8c;
            case 0x286CA0u: goto label_286ca0;
            case 0x286CB0u: goto label_286cb0;
            case 0x286CCCu: goto label_286ccc;
            case 0x286CD8u: goto label_286cd8;
            case 0x286CE8u: goto label_286ce8;
            case 0x286CF4u: goto label_286cf4;
            case 0x286D04u: goto label_286d04;
            case 0x286D44u: goto label_286d44;
            case 0x286D64u: goto label_286d64;
            case 0x286DACu: goto label_286dac;
            case 0x286DDCu: goto label_286ddc;
            case 0x286DF8u: goto label_286df8;
            case 0x286E14u: goto label_286e14;
            case 0x286E28u: goto label_286e28;
            case 0x286E7Cu: goto label_286e7c;
            case 0x286E8Cu: goto label_286e8c;
            case 0x286EE4u: goto label_286ee4;
            case 0x286F00u: goto label_286f00;
            case 0x286F48u: goto label_286f48;
            case 0x286F64u: goto label_286f64;
            case 0x286F6Cu: goto label_286f6c;
            case 0x286F70u: goto label_286f70;
            case 0x286FD0u: goto label_286fd0;
            case 0x286FFCu: goto label_286ffc;
            case 0x287004u: goto label_287004;
            case 0x287014u: goto label_287014;
            case 0x287018u: goto label_287018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x287028u;
}
