#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286AE8
// Address: 0x286ae8 - 0x286bf0
void sub_00286AE8_0x286ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286AE8_0x286ae8");
#endif

    ctx->pc = 0x286ae8u;

    // 0x286ae8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x286ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x286aec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x286aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286af0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x286af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x286af4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x286af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x286af8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x286af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286afc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x286afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x286b00: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x286b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x286b04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x286b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x286b08: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x286b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
    // 0x286b0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x286b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x286b10: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x286b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286b14: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x286b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x286b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b1c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x286B1Cu;
    SET_GPR_U32(ctx, 31, 0x286B24u);
    ctx->pc = 0x286B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286B1Cu;
            // 0x286b20: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B24u; }
        if (ctx->pc != 0x286B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B24u; }
        if (ctx->pc != 0x286B24u) { return; }
    }
    ctx->pc = 0x286B24u;
    // 0x286b24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x286B24u;
    {
        const bool branch_taken_0x286b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286B24u;
            // 0x286b28: 0x3c10002c  lui         $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b24) {
            ctx->pc = 0x286B50u;
            goto label_286b50;
        }
    }
    ctx->pc = 0x286B2Cu;
    // 0x286b2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x286b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x286b30: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x286B30u;
    SET_GPR_U32(ctx, 31, 0x286B38u);
    ctx->pc = 0x286B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286B30u;
            // 0x286b34: 0x26055528  addiu       $a1, $s0, 0x5528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 21800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B38u; }
        if (ctx->pc != 0x286B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B38u; }
        if (ctx->pc != 0x286B38u) { return; }
    }
    ctx->pc = 0x286B38u;
    // 0x286b38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286B38u;
    {
        const bool branch_taken_0x286b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286B38u;
            // 0x286b3c: 0x2404007a  addiu       $a0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b38) {
            ctx->pc = 0x286B50u;
            goto label_286b50;
        }
    }
    ctx->pc = 0x286B40u;
    // 0x286b40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x286b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x286b44: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x286b44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286b48: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x286B48u;
    {
        const bool branch_taken_0x286b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x286B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286B48u;
            // 0x286b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b48) {
            ctx->pc = 0x286BD4u;
            goto label_286bd4;
        }
    }
    ctx->pc = 0x286B50u;
label_286b50:
    // 0x286b50: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x286B50u;
    SET_GPR_U32(ctx, 31, 0x286B58u);
    ctx->pc = 0x286B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286B50u;
            // 0x286b54: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B58u; }
        if (ctx->pc != 0x286B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B58u; }
        if (ctx->pc != 0x286B58u) { return; }
    }
    ctx->pc = 0x286B58u;
    // 0x286b58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x286b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x286b5c: 0x26055528  addiu       $a1, $s0, 0x5528
    ctx->pc = 0x286b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 21800));
    // 0x286b60: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x286b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286b64: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x286B64u;
    SET_GPR_U32(ctx, 31, 0x286B6Cu);
    ctx->pc = 0x286B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286B64u;
            // 0x286b68: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B6Cu; }
        if (ctx->pc != 0x286B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B6Cu; }
        if (ctx->pc != 0x286B6Cu) { return; }
    }
    ctx->pc = 0x286B6Cu;
    // 0x286b6c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x286B6Cu;
    {
        const bool branch_taken_0x286b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286b6c) {
            ctx->pc = 0x286B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286B6Cu;
            // 0x286b70: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286B84u;
            goto label_286b84;
        }
    }
    ctx->pc = 0x286B74u;
    // 0x286b74: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x286b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x286b78: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x286b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x286b7c: 0x26500005  addiu       $s0, $s2, 0x5
    ctx->pc = 0x286b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x286b80: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x286b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_286b84:
    // 0x286b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b88: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286B88u;
    SET_GPR_U32(ctx, 31, 0x286B90u);
    ctx->pc = 0x286B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286B88u;
            // 0x286b8c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B90u; }
        if (ctx->pc != 0x286B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B90u; }
        if (ctx->pc != 0x286B90u) { return; }
    }
    ctx->pc = 0x286B90u;
    // 0x286b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b94: 0xc0a190e  jal         func_286438
    ctx->pc = 0x286B94u;
    SET_GPR_U32(ctx, 31, 0x286B9Cu);
    ctx->pc = 0x286B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286B94u;
            // 0x286b98: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286438u;
    if (runtime->hasFunction(0x286438u)) {
        auto targetFn = runtime->lookupFunction(0x286438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B9Cu; }
        if (ctx->pc != 0x286B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_286438_0x286488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B9Cu; }
        if (ctx->pc != 0x286B9Cu) { return; }
    }
    ctx->pc = 0x286B9Cu;
    // 0x286b9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ba0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x286ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x286ba4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x286ba4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286ba8: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x286ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x286bac: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x286bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x286bb0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x286bb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x286bb4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286BB4u;
    {
        const bool branch_taken_0x286bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x286BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286BB4u;
            // 0x286bb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bb4) {
            ctx->pc = 0x286BD0u;
            goto label_286bd0;
        }
    }
    ctx->pc = 0x286BBCu;
    // 0x286bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bc0: 0xc0a18fc  jal         func_2863F0
    ctx->pc = 0x286BC0u;
    SET_GPR_U32(ctx, 31, 0x286BC8u);
    ctx->pc = 0x286BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286BC0u;
            // 0x286bc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863F0u;
    if (runtime->hasFunction(0x2863F0u)) {
        auto targetFn = runtime->lookupFunction(0x2863F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286BC8u; }
        if (ctx->pc != 0x286BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2863f0_0x286438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286BC8u; }
        if (ctx->pc != 0x286BC8u) { return; }
    }
    ctx->pc = 0x286BC8u;
    // 0x286bc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x286bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286bcc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x286bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286bd0:
    // 0x286bd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x286bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286bd4:
    // 0x286bd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x286bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286bd8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x286bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286bdc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x286bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286be0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x286be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286be4: 0x3e00008  jr          $ra
    ctx->pc = 0x286BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286BE4u;
            // 0x286be8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286B50u: goto label_286b50;
            case 0x286B84u: goto label_286b84;
            case 0x286BD0u: goto label_286bd0;
            case 0x286BD4u: goto label_286bd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286BECu;
    // 0x286bec: 0x0  nop
    ctx->pc = 0x286becu;
    // NOP
}
