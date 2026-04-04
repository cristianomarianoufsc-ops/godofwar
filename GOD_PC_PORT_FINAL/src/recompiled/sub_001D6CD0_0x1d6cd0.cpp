#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D6CD0
// Address: 0x1d6cd0 - 0x1d7250
void sub_001D6CD0_0x1d6cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6CD0_0x1d6cd0");
#endif

    ctx->pc = 0x1d6cd0u;

    // 0x1d6cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d6cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d6cd4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d6cd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d6cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d6cdc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d6cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d6ce0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d6ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d6ce4: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x1d6ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
    // 0x1d6ce8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d6ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d6cec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d6cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d6cf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d6cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6cf8: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x1d6cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x1d6cfc: 0x8c45cb94  lw          $a1, -0x346C($v0)
    ctx->pc = 0x1d6cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d6d00: 0x90a201ec  lbu         $v0, 0x1EC($a1)
    ctx->pc = 0x1d6d00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 492)));
    // 0x1d6d04: 0xa0620078  sb          $v0, 0x78($v1)
    ctx->pc = 0x1d6d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d6d08: 0x90a201f0  lbu         $v0, 0x1F0($a1)
    ctx->pc = 0x1d6d08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 496)));
    // 0x1d6d0c: 0xa0620079  sb          $v0, 0x79($v1)
    ctx->pc = 0x1d6d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 121), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d6d10: 0x90a201f4  lbu         $v0, 0x1F4($a1)
    ctx->pc = 0x1d6d10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 500)));
    // 0x1d6d14: 0xa062007a  sb          $v0, 0x7A($v1)
    ctx->pc = 0x1d6d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 122), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d6d18: 0x90a201f8  lbu         $v0, 0x1F8($a1)
    ctx->pc = 0x1d6d18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 504)));
    // 0x1d6d1c: 0xa062007b  sb          $v0, 0x7B($v1)
    ctx->pc = 0x1d6d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 123), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d6d20: 0x90a201fc  lbu         $v0, 0x1FC($a1)
    ctx->pc = 0x1d6d20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 508)));
    // 0x1d6d24: 0xa062007c  sb          $v0, 0x7C($v1)
    ctx->pc = 0x1d6d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d6d28: 0x90a20200  lbu         $v0, 0x200($a1)
    ctx->pc = 0x1d6d28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 512)));
    // 0x1d6d2c: 0xa062007d  sb          $v0, 0x7D($v1)
    ctx->pc = 0x1d6d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 125), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d6d30: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1d6d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d6d34: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1d6d34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d6d38: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1d6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d6d3c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1d6d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1d6d40: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1d6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1d6d44: 0x40f809  jalr        $v0
    ctx->pc = 0x1D6D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6D4Cu);
        ctx->pc = 0x1D6D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D44u;
            // 0x1d6d48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6D4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6D70u: goto label_1d6d70;
            case 0x1D6D98u: goto label_1d6d98;
            case 0x1D6DB4u: goto label_1d6db4;
            case 0x1D6E20u: goto label_1d6e20;
            case 0x1D6E54u: goto label_1d6e54;
            case 0x1D6E7Cu: goto label_1d6e7c;
            case 0x1D6E8Cu: goto label_1d6e8c;
            case 0x1D6EF8u: goto label_1d6ef8;
            case 0x1D6F28u: goto label_1d6f28;
            case 0x1D6F50u: goto label_1d6f50;
            case 0x1D6F60u: goto label_1d6f60;
            case 0x1D6FC8u: goto label_1d6fc8;
            case 0x1D6FF8u: goto label_1d6ff8;
            case 0x1D7020u: goto label_1d7020;
            case 0x1D7030u: goto label_1d7030;
            case 0x1D7098u: goto label_1d7098;
            case 0x1D70C8u: goto label_1d70c8;
            case 0x1D70F0u: goto label_1d70f0;
            case 0x1D7100u: goto label_1d7100;
            case 0x1D7168u: goto label_1d7168;
            case 0x1D7198u: goto label_1d7198;
            case 0x1D71C0u: goto label_1d71c0;
            case 0x1D71D0u: goto label_1d71d0;
            case 0x1D7238u: goto label_1d7238;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D4Cu; }
            if (ctx->pc != 0x1D6D4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D6D4Cu;
    // 0x1d6d4c: 0x8e635a40  lw          $v1, 0x5A40($s3)
    ctx->pc = 0x1d6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 23104)));
    // 0x1d6d50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d6d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d54: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d6d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d6d58: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1d6d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1d6d5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6D5Cu;
    {
        const bool branch_taken_0x1d6d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D5Cu;
            // 0x1d6d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d5c) {
            ctx->pc = 0x1D6D70u;
            goto label_1d6d70;
        }
    }
    ctx->pc = 0x1D6D64u;
    // 0x1d6d64: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1d6d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d6d68: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1d6d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1d6d6c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1d6d6cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d6d70:
    // 0x1d6d70: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D6D70u;
    {
        const bool branch_taken_0x1d6d70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D70u;
            // 0x1d6d74: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d70) {
            ctx->pc = 0x1D6DB4u;
            goto label_1d6db4;
        }
    }
    ctx->pc = 0x1D6D78u;
    // 0x1d6d78: 0xc080382  jal         func_200E08
    ctx->pc = 0x1D6D78u;
    SET_GPR_U32(ctx, 31, 0x1D6D80u);
    ctx->pc = 0x1D6D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D78u;
            // 0x1d6d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E08u;
    if (runtime->hasFunction(0x200E08u)) {
        auto targetFn = runtime->lookupFunction(0x200E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D80u; }
        if (ctx->pc != 0x1D6D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200e08_0x200e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D80u; }
        if (ctx->pc != 0x1D6D80u) { return; }
    }
    ctx->pc = 0x1D6D80u;
    // 0x1d6d80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6D80u;
    {
        const bool branch_taken_0x1d6d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6d80) {
            ctx->pc = 0x1D6D98u;
            goto label_1d6d98;
        }
    }
    ctx->pc = 0x1D6D88u;
    // 0x1d6d88: 0xc08036c  jal         func_200DB0
    ctx->pc = 0x1D6D88u;
    SET_GPR_U32(ctx, 31, 0x1D6D90u);
    ctx->pc = 0x1D6D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D88u;
            // 0x1d6d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200DB0u;
    if (runtime->hasFunction(0x200DB0u)) {
        auto targetFn = runtime->lookupFunction(0x200DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D90u; }
        if (ctx->pc != 0x1D6D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200DB0_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D90u; }
        if (ctx->pc != 0x1D6D90u) { return; }
    }
    ctx->pc = 0x1D6D90u;
    // 0x1d6d90: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D6D90u;
    {
        const bool branch_taken_0x1d6d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D90u;
            // 0x1d6d94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d90) {
            ctx->pc = 0x1D6E20u;
            goto label_1d6e20;
        }
    }
    ctx->pc = 0x1D6D98u;
label_1d6d98:
    // 0x1d6d98: 0xc0802f2  jal         func_200BC8
    ctx->pc = 0x1D6D98u;
    SET_GPR_U32(ctx, 31, 0x1D6DA0u);
    ctx->pc = 0x1D6D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D98u;
            // 0x1d6d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200BC8u;
    if (runtime->hasFunction(0x200BC8u)) {
        auto targetFn = runtime->lookupFunction(0x200BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6DA0u; }
        if (ctx->pc != 0x1D6DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200BC8_0x200bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6DA0u; }
        if (ctx->pc != 0x1D6DA0u) { return; }
    }
    ctx->pc = 0x1D6DA0u;
    // 0x1d6da0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6da4: 0xc06f798  jal         func_1BDE60
    ctx->pc = 0x1D6DA4u;
    SET_GPR_U32(ctx, 31, 0x1D6DACu);
    ctx->pc = 0x1D6DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DA4u;
            // 0x1d6da8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE60u;
    if (runtime->hasFunction(0x1BDE60u)) {
        auto targetFn = runtime->lookupFunction(0x1BDE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6DACu; }
        if (ctx->pc != 0x1D6DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDE60_0x1bde60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6DACu; }
        if (ctx->pc != 0x1D6DACu) { return; }
    }
    ctx->pc = 0x1D6DACu;
    // 0x1d6dac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D6DACu;
    {
        const bool branch_taken_0x1d6dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DACu;
            // 0x1d6db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6dac) {
            ctx->pc = 0x1D6E20u;
            goto label_1d6e20;
        }
    }
    ctx->pc = 0x1D6DB4u;
label_1d6db4:
    // 0x1d6db4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D6DB4u;
    {
        const bool branch_taken_0x1d6db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6db4) {
            ctx->pc = 0x1D6DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DB4u;
            // 0x1d6db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6E20u;
            goto label_1d6e20;
        }
    }
    ctx->pc = 0x1D6DBCu;
    // 0x1d6dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6dc0: 0xc09105e  jal         func_244178
    ctx->pc = 0x1D6DC0u;
    SET_GPR_U32(ctx, 31, 0x1D6DC8u);
    ctx->pc = 0x1D6DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DC0u;
            // 0x1d6dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244178u;
    if (runtime->hasFunction(0x244178u)) {
        auto targetFn = runtime->lookupFunction(0x244178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6DC8u; }
        if (ctx->pc != 0x1D6DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244178_0x244190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6DC8u; }
        if (ctx->pc != 0x1D6DC8u) { return; }
    }
    ctx->pc = 0x1D6DC8u;
    // 0x1d6dc8: 0x8e635a40  lw          $v1, 0x5A40($s3)
    ctx->pc = 0x1d6dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 23104)));
    // 0x1d6dcc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d6dd0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d6dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d6dd4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1d6dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1d6dd8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d6dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d6ddc: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1d6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1d6de0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d6de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d6de4: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x1d6de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1d6de8: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1d6de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1d6dec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d6decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d6df0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1d6df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d6df4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d6df4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d6df8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1d6dfc: 0x24a56a00  addiu       $a1, $a1, 0x6A00
    ctx->pc = 0x1d6dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27136));
    // 0x1d6e00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d6e04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6e08: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d6e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d6e0c: 0xc061e64  jal         func_187990
    ctx->pc = 0x1D6E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E14u);
    ctx->pc = 0x1D6E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E0Cu;
            // 0x1d6e10: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E14u; }
        if (ctx->pc != 0x1D6E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E14u; }
        if (ctx->pc != 0x1D6E14u) { return; }
    }
    ctx->pc = 0x1D6E14u;
    // 0x1d6e14: 0xc06ebd6  jal         func_1BAF58
    ctx->pc = 0x1D6E14u;
    SET_GPR_U32(ctx, 31, 0x1D6E1Cu);
    ctx->pc = 0x1D6E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E14u;
            // 0x1d6e18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF58u;
    if (runtime->hasFunction(0x1BAF58u)) {
        auto targetFn = runtime->lookupFunction(0x1BAF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E1Cu; }
        if (ctx->pc != 0x1D6E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAF58_0x1baf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E1Cu; }
        if (ctx->pc != 0x1D6E1Cu) { return; }
    }
    ctx->pc = 0x1D6E1Cu;
    // 0x1d6e1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d6e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d6e20:
    // 0x1d6e20: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1D6E20u;
    SET_GPR_U32(ctx, 31, 0x1D6E28u);
    ctx->pc = 0x1D6E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E20u;
            // 0x1d6e24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E28u; }
        if (ctx->pc != 0x1D6E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E28u; }
        if (ctx->pc != 0x1D6E28u) { return; }
    }
    ctx->pc = 0x1D6E28u;
    // 0x1d6e28: 0x26715a40  addiu       $s1, $s3, 0x5A40
    ctx->pc = 0x1d6e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 23104));
    // 0x1d6e2c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1d6e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d6e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e34: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1d6e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d6e38: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x1d6e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1d6e3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6E3Cu;
    {
        const bool branch_taken_0x1d6e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E3Cu;
            // 0x1d6e40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e3c) {
            ctx->pc = 0x1D6E54u;
            goto label_1d6e54;
        }
    }
    ctx->pc = 0x1D6E44u;
    // 0x1d6e44: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1d6e44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d6e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6e4c: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1d6e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1d6e50: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1d6e50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1d6e54:
    // 0x1d6e54: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6E54u;
    {
        const bool branch_taken_0x1d6e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E54u;
            // 0x1d6e58: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e54) {
            ctx->pc = 0x1D6E8Cu;
            goto label_1d6e8c;
        }
    }
    ctx->pc = 0x1D6E5Cu;
    // 0x1d6e5c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d6e60: 0x8c42c9ec  lw          $v0, -0x3614($v0)
    ctx->pc = 0x1d6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953452)));
    // 0x1d6e64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6E64u;
    {
        const bool branch_taken_0x1d6e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E64u;
            // 0x1d6e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e64) {
            ctx->pc = 0x1D6E7Cu;
            goto label_1d6e7c;
        }
    }
    ctx->pc = 0x1D6E6Cu;
    // 0x1d6e6c: 0xc067db8  jal         func_19F6E0
    ctx->pc = 0x1D6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E74u);
    ctx->pc = 0x1D6E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E6Cu;
            // 0x1d6e70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F6E0u;
    if (runtime->hasFunction(0x19F6E0u)) {
        auto targetFn = runtime->lookupFunction(0x19F6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E74u; }
        if (ctx->pc != 0x1D6E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6E0_0x19f6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E74u; }
        if (ctx->pc != 0x1D6E74u) { return; }
    }
    ctx->pc = 0x1D6E74u;
    // 0x1d6e74: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D6E74u;
    {
        const bool branch_taken_0x1d6e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E74u;
            // 0x1d6e78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e74) {
            ctx->pc = 0x1D6EF8u;
            goto label_1d6ef8;
        }
    }
    ctx->pc = 0x1D6E7Cu;
label_1d6e7c:
    // 0x1d6e7c: 0xc06f798  jal         func_1BDE60
    ctx->pc = 0x1D6E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E84u);
    ctx->pc = 0x1D6E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E7Cu;
            // 0x1d6e80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE60u;
    if (runtime->hasFunction(0x1BDE60u)) {
        auto targetFn = runtime->lookupFunction(0x1BDE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E84u; }
        if (ctx->pc != 0x1D6E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDE60_0x1bde60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E84u; }
        if (ctx->pc != 0x1D6E84u) { return; }
    }
    ctx->pc = 0x1D6E84u;
    // 0x1d6e84: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D6E84u;
    {
        const bool branch_taken_0x1d6e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E84u;
            // 0x1d6e88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e84) {
            ctx->pc = 0x1D6EF8u;
            goto label_1d6ef8;
        }
    }
    ctx->pc = 0x1D6E8Cu;
label_1d6e8c:
    // 0x1d6e8c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D6E8Cu;
    {
        const bool branch_taken_0x1d6e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e8c) {
            ctx->pc = 0x1D6E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E8Cu;
            // 0x1d6e90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6EF8u;
            goto label_1d6ef8;
        }
    }
    ctx->pc = 0x1D6E94u;
    // 0x1d6e94: 0xc067db8  jal         func_19F6E0
    ctx->pc = 0x1D6E94u;
    SET_GPR_U32(ctx, 31, 0x1D6E9Cu);
    ctx->pc = 0x1D6E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E94u;
            // 0x1d6e98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F6E0u;
    if (runtime->hasFunction(0x19F6E0u)) {
        auto targetFn = runtime->lookupFunction(0x19F6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E9Cu; }
        if (ctx->pc != 0x1D6E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6E0_0x19f6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E9Cu; }
        if (ctx->pc != 0x1D6E9Cu) { return; }
    }
    ctx->pc = 0x1D6E9Cu;
    // 0x1d6e9c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1d6e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d6ea0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d6ea4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d6ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d6ea8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1d6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1d6eac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d6eb0: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1d6eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1d6eb4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d6eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d6eb8: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x1d6eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1d6ebc: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1d6ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1d6ec0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d6ec4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1d6ec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d6ec8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d6ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d6ecc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1d6ed0: 0x24a53ed8  addiu       $a1, $a1, 0x3ED8
    ctx->pc = 0x1d6ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16088));
    // 0x1d6ed4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d6ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d6ed8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6edc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d6edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d6ee0: 0xc061e64  jal         func_187990
    ctx->pc = 0x1D6EE0u;
    SET_GPR_U32(ctx, 31, 0x1D6EE8u);
    ctx->pc = 0x1D6EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6EE0u;
            // 0x1d6ee4: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6EE8u; }
        if (ctx->pc != 0x1D6EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6EE8u; }
        if (ctx->pc != 0x1D6EE8u) { return; }
    }
    ctx->pc = 0x1D6EE8u;
    // 0x1d6ee8: 0xc06ebd6  jal         func_1BAF58
    ctx->pc = 0x1D6EE8u;
    SET_GPR_U32(ctx, 31, 0x1D6EF0u);
    ctx->pc = 0x1D6EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6EE8u;
            // 0x1d6eec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF58u;
    if (runtime->hasFunction(0x1BAF58u)) {
        auto targetFn = runtime->lookupFunction(0x1BAF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6EF0u; }
        if (ctx->pc != 0x1D6EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAF58_0x1baf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6EF0u; }
        if (ctx->pc != 0x1D6EF0u) { return; }
    }
    ctx->pc = 0x1D6EF0u;
    // 0x1d6ef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d6ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ef4: 0x0  nop
    ctx->pc = 0x1d6ef4u;
    // NOP
label_1d6ef8:
    // 0x1d6ef8: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1D6EF8u;
    SET_GPR_U32(ctx, 31, 0x1D6F00u);
    ctx->pc = 0x1D6EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6EF8u;
            // 0x1d6efc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F00u; }
        if (ctx->pc != 0x1D6F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F00u; }
        if (ctx->pc != 0x1D6F00u) { return; }
    }
    ctx->pc = 0x1D6F00u;
    // 0x1d6f00: 0x26715a40  addiu       $s1, $s3, 0x5A40
    ctx->pc = 0x1d6f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 23104));
    // 0x1d6f04: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d6f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d6f08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f0c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d6f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d6f10: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1d6f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1d6f14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6F14u;
    {
        const bool branch_taken_0x1d6f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F14u;
            // 0x1d6f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f14) {
            ctx->pc = 0x1D6F28u;
            goto label_1d6f28;
        }
    }
    ctx->pc = 0x1D6F1Cu;
    // 0x1d6f1c: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1d6f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d6f20: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1d6f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1d6f24: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1d6f24u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d6f28:
    // 0x1d6f28: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6F28u;
    {
        const bool branch_taken_0x1d6f28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F28u;
            // 0x1d6f2c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f28) {
            ctx->pc = 0x1D6F60u;
            goto label_1d6f60;
        }
    }
    ctx->pc = 0x1D6F30u;
    // 0x1d6f30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d6f34: 0x8c42c9c0  lw          $v0, -0x3640($v0)
    ctx->pc = 0x1d6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953408)));
    // 0x1d6f38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6F38u;
    {
        const bool branch_taken_0x1d6f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F38u;
            // 0x1d6f3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f38) {
            ctx->pc = 0x1D6F50u;
            goto label_1d6f50;
        }
    }
    ctx->pc = 0x1D6F40u;
    // 0x1d6f40: 0xc0674b2  jal         func_19D2C8
    ctx->pc = 0x1D6F40u;
    SET_GPR_U32(ctx, 31, 0x1D6F48u);
    ctx->pc = 0x1D6F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F40u;
            // 0x1d6f44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D2C8u;
    if (runtime->hasFunction(0x19D2C8u)) {
        auto targetFn = runtime->lookupFunction(0x19D2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F48u; }
        if (ctx->pc != 0x1D6F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D2C8_0x19d2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F48u; }
        if (ctx->pc != 0x1D6F48u) { return; }
    }
    ctx->pc = 0x1D6F48u;
    // 0x1d6f48: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D6F48u;
    {
        const bool branch_taken_0x1d6f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F48u;
            // 0x1d6f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f48) {
            ctx->pc = 0x1D6FC8u;
            goto label_1d6fc8;
        }
    }
    ctx->pc = 0x1D6F50u;
label_1d6f50:
    // 0x1d6f50: 0xc06f798  jal         func_1BDE60
    ctx->pc = 0x1D6F50u;
    SET_GPR_U32(ctx, 31, 0x1D6F58u);
    ctx->pc = 0x1D6F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F50u;
            // 0x1d6f54: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE60u;
    if (runtime->hasFunction(0x1BDE60u)) {
        auto targetFn = runtime->lookupFunction(0x1BDE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F58u; }
        if (ctx->pc != 0x1D6F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDE60_0x1bde60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F58u; }
        if (ctx->pc != 0x1D6F58u) { return; }
    }
    ctx->pc = 0x1D6F58u;
    // 0x1d6f58: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D6F58u;
    {
        const bool branch_taken_0x1d6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F58u;
            // 0x1d6f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f58) {
            ctx->pc = 0x1D6FC8u;
            goto label_1d6fc8;
        }
    }
    ctx->pc = 0x1D6F60u;
label_1d6f60:
    // 0x1d6f60: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D6F60u;
    {
        const bool branch_taken_0x1d6f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f60) {
            ctx->pc = 0x1D6F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F60u;
            // 0x1d6f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6FC8u;
            goto label_1d6fc8;
        }
    }
    ctx->pc = 0x1D6F68u;
    // 0x1d6f68: 0xc0674b2  jal         func_19D2C8
    ctx->pc = 0x1D6F68u;
    SET_GPR_U32(ctx, 31, 0x1D6F70u);
    ctx->pc = 0x1D6F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F68u;
            // 0x1d6f6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D2C8u;
    if (runtime->hasFunction(0x19D2C8u)) {
        auto targetFn = runtime->lookupFunction(0x19D2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F70u; }
        if (ctx->pc != 0x1D6F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D2C8_0x19d2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F70u; }
        if (ctx->pc != 0x1D6F70u) { return; }
    }
    ctx->pc = 0x1D6F70u;
    // 0x1d6f70: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d6f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d6f74: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d6f78: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d6f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d6f7c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1d6f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1d6f80: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d6f84: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1d6f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1d6f88: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d6f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d6f8c: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x1d6f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1d6f90: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1d6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1d6f94: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d6f98: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1d6f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d6f9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d6f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d6fa0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1d6fa4: 0x24a53d00  addiu       $a1, $a1, 0x3D00
    ctx->pc = 0x1d6fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15616));
    // 0x1d6fa8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d6fac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6fb0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d6fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d6fb4: 0xc061e64  jal         func_187990
    ctx->pc = 0x1D6FB4u;
    SET_GPR_U32(ctx, 31, 0x1D6FBCu);
    ctx->pc = 0x1D6FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6FB4u;
            // 0x1d6fb8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FBCu; }
        if (ctx->pc != 0x1D6FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FBCu; }
        if (ctx->pc != 0x1D6FBCu) { return; }
    }
    ctx->pc = 0x1D6FBCu;
    // 0x1d6fbc: 0xc06ebd6  jal         func_1BAF58
    ctx->pc = 0x1D6FBCu;
    SET_GPR_U32(ctx, 31, 0x1D6FC4u);
    ctx->pc = 0x1D6FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6FBCu;
            // 0x1d6fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF58u;
    if (runtime->hasFunction(0x1BAF58u)) {
        auto targetFn = runtime->lookupFunction(0x1BAF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FC4u; }
        if (ctx->pc != 0x1D6FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAF58_0x1baf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FC4u; }
        if (ctx->pc != 0x1D6FC4u) { return; }
    }
    ctx->pc = 0x1D6FC4u;
    // 0x1d6fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d6fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d6fc8:
    // 0x1d6fc8: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1D6FC8u;
    SET_GPR_U32(ctx, 31, 0x1D6FD0u);
    ctx->pc = 0x1D6FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6FC8u;
            // 0x1d6fcc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FD0u; }
        if (ctx->pc != 0x1D6FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FD0u; }
        if (ctx->pc != 0x1D6FD0u) { return; }
    }
    ctx->pc = 0x1D6FD0u;
    // 0x1d6fd0: 0x26715a40  addiu       $s1, $s3, 0x5A40
    ctx->pc = 0x1d6fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 23104));
    // 0x1d6fd4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d6fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d6fd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6fdc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d6fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d6fe0: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1d6fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1d6fe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6FE4u;
    {
        const bool branch_taken_0x1d6fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6FE4u;
            // 0x1d6fe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fe4) {
            ctx->pc = 0x1D6FF8u;
            goto label_1d6ff8;
        }
    }
    ctx->pc = 0x1D6FECu;
    // 0x1d6fec: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1d6fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d6ff0: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1d6ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1d6ff4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1d6ff4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d6ff8:
    // 0x1d6ff8: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6FF8u;
    {
        const bool branch_taken_0x1d6ff8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6FF8u;
            // 0x1d6ffc: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ff8) {
            ctx->pc = 0x1D7030u;
            goto label_1d7030;
        }
    }
    ctx->pc = 0x1D7000u;
    // 0x1d7000: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d7000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d7004: 0x8c42c94c  lw          $v0, -0x36B4($v0)
    ctx->pc = 0x1d7004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953292)));
    // 0x1d7008: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7008u;
    {
        const bool branch_taken_0x1d7008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D700Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7008u;
            // 0x1d700c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7008) {
            ctx->pc = 0x1D7020u;
            goto label_1d7020;
        }
    }
    ctx->pc = 0x1D7010u;
    // 0x1d7010: 0xc065a66  jal         func_196998
    ctx->pc = 0x1D7010u;
    SET_GPR_U32(ctx, 31, 0x1D7018u);
    ctx->pc = 0x1D7014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7010u;
            // 0x1d7014: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196998u;
    if (runtime->hasFunction(0x196998u)) {
        auto targetFn = runtime->lookupFunction(0x196998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7018u; }
        if (ctx->pc != 0x1D7018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196998_0x196998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7018u; }
        if (ctx->pc != 0x1D7018u) { return; }
    }
    ctx->pc = 0x1D7018u;
    // 0x1d7018: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D7018u;
    {
        const bool branch_taken_0x1d7018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7018u;
            // 0x1d701c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7018) {
            ctx->pc = 0x1D7098u;
            goto label_1d7098;
        }
    }
    ctx->pc = 0x1D7020u;
label_1d7020:
    // 0x1d7020: 0xc06f798  jal         func_1BDE60
    ctx->pc = 0x1D7020u;
    SET_GPR_U32(ctx, 31, 0x1D7028u);
    ctx->pc = 0x1D7024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7020u;
            // 0x1d7024: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE60u;
    if (runtime->hasFunction(0x1BDE60u)) {
        auto targetFn = runtime->lookupFunction(0x1BDE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7028u; }
        if (ctx->pc != 0x1D7028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDE60_0x1bde60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7028u; }
        if (ctx->pc != 0x1D7028u) { return; }
    }
    ctx->pc = 0x1D7028u;
    // 0x1d7028: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D7028u;
    {
        const bool branch_taken_0x1d7028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D702Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7028u;
            // 0x1d702c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7028) {
            ctx->pc = 0x1D7098u;
            goto label_1d7098;
        }
    }
    ctx->pc = 0x1D7030u;
label_1d7030:
    // 0x1d7030: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D7030u;
    {
        const bool branch_taken_0x1d7030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7030) {
            ctx->pc = 0x1D7034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7030u;
            // 0x1d7034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7098u;
            goto label_1d7098;
        }
    }
    ctx->pc = 0x1D7038u;
    // 0x1d7038: 0xc065a66  jal         func_196998
    ctx->pc = 0x1D7038u;
    SET_GPR_U32(ctx, 31, 0x1D7040u);
    ctx->pc = 0x1D703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7038u;
            // 0x1d703c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196998u;
    if (runtime->hasFunction(0x196998u)) {
        auto targetFn = runtime->lookupFunction(0x196998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7040u; }
        if (ctx->pc != 0x1D7040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196998_0x196998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7040u; }
        if (ctx->pc != 0x1D7040u) { return; }
    }
    ctx->pc = 0x1D7040u;
    // 0x1d7040: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d7040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d7044: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d7044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d7048: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d7048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d704c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1d704cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1d7050: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d7050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d7054: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1d7054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1d7058: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d7058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d705c: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x1d705cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1d7060: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1d7060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1d7064: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d7064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d7068: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1d7068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d706c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d706cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d7070: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1d7074: 0x24a53900  addiu       $a1, $a1, 0x3900
    ctx->pc = 0x1d7074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14592));
    // 0x1d7078: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d7078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d707c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7080: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d7080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d7084: 0xc061e64  jal         func_187990
    ctx->pc = 0x1D7084u;
    SET_GPR_U32(ctx, 31, 0x1D708Cu);
    ctx->pc = 0x1D7088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7084u;
            // 0x1d7088: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D708Cu; }
        if (ctx->pc != 0x1D708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D708Cu; }
        if (ctx->pc != 0x1D708Cu) { return; }
    }
    ctx->pc = 0x1D708Cu;
    // 0x1d708c: 0xc06ebd6  jal         func_1BAF58
    ctx->pc = 0x1D708Cu;
    SET_GPR_U32(ctx, 31, 0x1D7094u);
    ctx->pc = 0x1D7090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D708Cu;
            // 0x1d7090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF58u;
    if (runtime->hasFunction(0x1BAF58u)) {
        auto targetFn = runtime->lookupFunction(0x1BAF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7094u; }
        if (ctx->pc != 0x1D7094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAF58_0x1baf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7094u; }
        if (ctx->pc != 0x1D7094u) { return; }
    }
    ctx->pc = 0x1D7094u;
    // 0x1d7094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d7098:
    // 0x1d7098: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1D7098u;
    SET_GPR_U32(ctx, 31, 0x1D70A0u);
    ctx->pc = 0x1D709Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7098u;
            // 0x1d709c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70A0u; }
        if (ctx->pc != 0x1D70A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70A0u; }
        if (ctx->pc != 0x1D70A0u) { return; }
    }
    ctx->pc = 0x1D70A0u;
    // 0x1d70a0: 0x26715a40  addiu       $s1, $s3, 0x5A40
    ctx->pc = 0x1d70a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 23104));
    // 0x1d70a4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1d70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d70a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d70a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70ac: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d70acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d70b0: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1d70b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1d70b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D70B4u;
    {
        const bool branch_taken_0x1d70b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70B4u;
            // 0x1d70b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70b4) {
            ctx->pc = 0x1D70C8u;
            goto label_1d70c8;
        }
    }
    ctx->pc = 0x1D70BCu;
    // 0x1d70bc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1d70bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d70c0: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1d70c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1d70c4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1d70c4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d70c8:
    // 0x1d70c8: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D70C8u;
    {
        const bool branch_taken_0x1d70c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D70CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70C8u;
            // 0x1d70cc: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70c8) {
            ctx->pc = 0x1D7100u;
            goto label_1d7100;
        }
    }
    ctx->pc = 0x1D70D0u;
    // 0x1d70d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d70d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d70d4: 0x8c42c90c  lw          $v0, -0x36F4($v0)
    ctx->pc = 0x1d70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953228)));
    // 0x1d70d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D70D8u;
    {
        const bool branch_taken_0x1d70d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D70DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70D8u;
            // 0x1d70dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70d8) {
            ctx->pc = 0x1D70F0u;
            goto label_1d70f0;
        }
    }
    ctx->pc = 0x1D70E0u;
    // 0x1d70e0: 0xc064fec  jal         func_193FB0
    ctx->pc = 0x1D70E0u;
    SET_GPR_U32(ctx, 31, 0x1D70E8u);
    ctx->pc = 0x1D70E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70E0u;
            // 0x1d70e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193FB0u;
    if (runtime->hasFunction(0x193FB0u)) {
        auto targetFn = runtime->lookupFunction(0x193FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70E8u; }
        if (ctx->pc != 0x1D70E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193FB0_0x193fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70E8u; }
        if (ctx->pc != 0x1D70E8u) { return; }
    }
    ctx->pc = 0x1D70E8u;
    // 0x1d70e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D70E8u;
    {
        const bool branch_taken_0x1d70e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70E8u;
            // 0x1d70ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70e8) {
            ctx->pc = 0x1D7168u;
            goto label_1d7168;
        }
    }
    ctx->pc = 0x1D70F0u;
label_1d70f0:
    // 0x1d70f0: 0xc06f798  jal         func_1BDE60
    ctx->pc = 0x1D70F0u;
    SET_GPR_U32(ctx, 31, 0x1D70F8u);
    ctx->pc = 0x1D70F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70F0u;
            // 0x1d70f4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE60u;
    if (runtime->hasFunction(0x1BDE60u)) {
        auto targetFn = runtime->lookupFunction(0x1BDE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70F8u; }
        if (ctx->pc != 0x1D70F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDE60_0x1bde60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70F8u; }
        if (ctx->pc != 0x1D70F8u) { return; }
    }
    ctx->pc = 0x1D70F8u;
    // 0x1d70f8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D70F8u;
    {
        const bool branch_taken_0x1d70f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70F8u;
            // 0x1d70fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70f8) {
            ctx->pc = 0x1D7168u;
            goto label_1d7168;
        }
    }
    ctx->pc = 0x1D7100u;
label_1d7100:
    // 0x1d7100: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D7100u;
    {
        const bool branch_taken_0x1d7100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7100) {
            ctx->pc = 0x1D7104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7100u;
            // 0x1d7104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7168u;
            goto label_1d7168;
        }
    }
    ctx->pc = 0x1D7108u;
    // 0x1d7108: 0xc064fec  jal         func_193FB0
    ctx->pc = 0x1D7108u;
    SET_GPR_U32(ctx, 31, 0x1D7110u);
    ctx->pc = 0x1D710Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7108u;
            // 0x1d710c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193FB0u;
    if (runtime->hasFunction(0x193FB0u)) {
        auto targetFn = runtime->lookupFunction(0x193FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7110u; }
        if (ctx->pc != 0x1D7110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193FB0_0x193fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7110u; }
        if (ctx->pc != 0x1D7110u) { return; }
    }
    ctx->pc = 0x1D7110u;
    // 0x1d7110: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1d7110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d7114: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d7114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d7118: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d7118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d711c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1d711cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1d7120: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d7120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d7124: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1d7124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1d7128: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d7128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d712c: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x1d712cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1d7130: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1d7130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1d7134: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d7134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d7138: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1d7138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d713c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d713cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d7140: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d7140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1d7144: 0x24a53650  addiu       $a1, $a1, 0x3650
    ctx->pc = 0x1d7144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13904));
    // 0x1d7148: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d7148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d714c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7150: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d7150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d7154: 0xc061e64  jal         func_187990
    ctx->pc = 0x1D7154u;
    SET_GPR_U32(ctx, 31, 0x1D715Cu);
    ctx->pc = 0x1D7158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7154u;
            // 0x1d7158: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D715Cu; }
        if (ctx->pc != 0x1D715Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D715Cu; }
        if (ctx->pc != 0x1D715Cu) { return; }
    }
    ctx->pc = 0x1D715Cu;
    // 0x1d715c: 0xc06ebd6  jal         func_1BAF58
    ctx->pc = 0x1D715Cu;
    SET_GPR_U32(ctx, 31, 0x1D7164u);
    ctx->pc = 0x1D7160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D715Cu;
            // 0x1d7160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF58u;
    if (runtime->hasFunction(0x1BAF58u)) {
        auto targetFn = runtime->lookupFunction(0x1BAF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7164u; }
        if (ctx->pc != 0x1D7164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAF58_0x1baf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7164u; }
        if (ctx->pc != 0x1D7164u) { return; }
    }
    ctx->pc = 0x1D7164u;
    // 0x1d7164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d7168:
    // 0x1d7168: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x1D7168u;
    SET_GPR_U32(ctx, 31, 0x1D7170u);
    ctx->pc = 0x1D716Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7168u;
            // 0x1d716c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7170u; }
        if (ctx->pc != 0x1D7170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7170u; }
        if (ctx->pc != 0x1D7170u) { return; }
    }
    ctx->pc = 0x1D7170u;
    // 0x1d7170: 0x26715a40  addiu       $s1, $s3, 0x5A40
    ctx->pc = 0x1d7170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 23104));
    // 0x1d7174: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1d7174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d7178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d7178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d717c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d7180: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1d7180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1d7184: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7184u;
    {
        const bool branch_taken_0x1d7184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7184u;
            // 0x1d7188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7184) {
            ctx->pc = 0x1D7198u;
            goto label_1d7198;
        }
    }
    ctx->pc = 0x1D718Cu;
    // 0x1d718c: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1d718cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d7190: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1d7190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1d7194: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1d7194u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d7198:
    // 0x1d7198: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7198u;
    {
        const bool branch_taken_0x1d7198 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D719Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7198u;
            // 0x1d719c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7198) {
            ctx->pc = 0x1D71D0u;
            goto label_1d71d0;
        }
    }
    ctx->pc = 0x1D71A0u;
    // 0x1d71a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d71a4: 0x8c42c9b0  lw          $v0, -0x3650($v0)
    ctx->pc = 0x1d71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953392)));
    // 0x1d71a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D71A8u;
    {
        const bool branch_taken_0x1d71a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D71ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71A8u;
            // 0x1d71ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71a8) {
            ctx->pc = 0x1D71C0u;
            goto label_1d71c0;
        }
    }
    ctx->pc = 0x1D71B0u;
    // 0x1d71b0: 0xc066f8a  jal         func_19BE28
    ctx->pc = 0x1D71B0u;
    SET_GPR_U32(ctx, 31, 0x1D71B8u);
    ctx->pc = 0x1D71B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71B0u;
            // 0x1d71b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BE28u;
    if (runtime->hasFunction(0x19BE28u)) {
        auto targetFn = runtime->lookupFunction(0x19BE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71B8u; }
        if (ctx->pc != 0x1D71B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BE28_0x19be28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71B8u; }
        if (ctx->pc != 0x1D71B8u) { return; }
    }
    ctx->pc = 0x1D71B8u;
    // 0x1d71b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D71B8u;
    {
        const bool branch_taken_0x1d71b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71B8u;
            // 0x1d71bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71b8) {
            ctx->pc = 0x1D7238u;
            goto label_1d7238;
        }
    }
    ctx->pc = 0x1D71C0u;
label_1d71c0:
    // 0x1d71c0: 0xc06f798  jal         func_1BDE60
    ctx->pc = 0x1D71C0u;
    SET_GPR_U32(ctx, 31, 0x1D71C8u);
    ctx->pc = 0x1D71C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71C0u;
            // 0x1d71c4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDE60u;
    if (runtime->hasFunction(0x1BDE60u)) {
        auto targetFn = runtime->lookupFunction(0x1BDE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71C8u; }
        if (ctx->pc != 0x1D71C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDE60_0x1bde60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71C8u; }
        if (ctx->pc != 0x1D71C8u) { return; }
    }
    ctx->pc = 0x1D71C8u;
    // 0x1d71c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D71C8u;
    {
        const bool branch_taken_0x1d71c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71C8u;
            // 0x1d71cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71c8) {
            ctx->pc = 0x1D7238u;
            goto label_1d7238;
        }
    }
    ctx->pc = 0x1D71D0u;
label_1d71d0:
    // 0x1d71d0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D71D0u;
    {
        const bool branch_taken_0x1d71d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D71D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71D0u;
            // 0x1d71d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71d0) {
            ctx->pc = 0x1D7238u;
            goto label_1d7238;
        }
    }
    ctx->pc = 0x1D71D8u;
    // 0x1d71d8: 0xc066f8a  jal         func_19BE28
    ctx->pc = 0x1D71D8u;
    SET_GPR_U32(ctx, 31, 0x1D71E0u);
    ctx->pc = 0x1D71DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71D8u;
            // 0x1d71dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BE28u;
    if (runtime->hasFunction(0x19BE28u)) {
        auto targetFn = runtime->lookupFunction(0x19BE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71E0u; }
        if (ctx->pc != 0x1D71E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BE28_0x19be28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71E0u; }
        if (ctx->pc != 0x1D71E0u) { return; }
    }
    ctx->pc = 0x1D71E0u;
    // 0x1d71e0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1d71e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d71e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d71e8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d71e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d71ec: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1d71ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1d71f0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d71f4: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1d71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1d71f8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d71f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d71fc: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x1d71fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1d7200: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1d7200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1d7204: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d7204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d7208: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1d7208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d720c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d720cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d7210: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1d7214: 0x24a53ad0  addiu       $a1, $a1, 0x3AD0
    ctx->pc = 0x1d7214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15056));
    // 0x1d7218: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d721c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7220: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d7220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d7224: 0xc061e64  jal         func_187990
    ctx->pc = 0x1D7224u;
    SET_GPR_U32(ctx, 31, 0x1D722Cu);
    ctx->pc = 0x1D7228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7224u;
            // 0x1d7228: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D722Cu; }
        if (ctx->pc != 0x1D722Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D722Cu; }
        if (ctx->pc != 0x1D722Cu) { return; }
    }
    ctx->pc = 0x1D722Cu;
    // 0x1d722c: 0xc06ebd6  jal         func_1BAF58
    ctx->pc = 0x1D722Cu;
    SET_GPR_U32(ctx, 31, 0x1D7234u);
    ctx->pc = 0x1D7230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D722Cu;
            // 0x1d7230: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF58u;
    if (runtime->hasFunction(0x1BAF58u)) {
        auto targetFn = runtime->lookupFunction(0x1BAF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7234u; }
        if (ctx->pc != 0x1D7234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAF58_0x1baf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7234u; }
        if (ctx->pc != 0x1D7234u) { return; }
    }
    ctx->pc = 0x1D7234u;
    // 0x1d7234: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d7234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d7238:
    // 0x1d7238: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d7238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d723c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d723cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7240: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d7240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7248: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D724Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7248u;
            // 0x1d724c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6D70u: goto label_1d6d70;
            case 0x1D6D98u: goto label_1d6d98;
            case 0x1D6DB4u: goto label_1d6db4;
            case 0x1D6E20u: goto label_1d6e20;
            case 0x1D6E54u: goto label_1d6e54;
            case 0x1D6E7Cu: goto label_1d6e7c;
            case 0x1D6E8Cu: goto label_1d6e8c;
            case 0x1D6EF8u: goto label_1d6ef8;
            case 0x1D6F28u: goto label_1d6f28;
            case 0x1D6F50u: goto label_1d6f50;
            case 0x1D6F60u: goto label_1d6f60;
            case 0x1D6FC8u: goto label_1d6fc8;
            case 0x1D6FF8u: goto label_1d6ff8;
            case 0x1D7020u: goto label_1d7020;
            case 0x1D7030u: goto label_1d7030;
            case 0x1D7098u: goto label_1d7098;
            case 0x1D70C8u: goto label_1d70c8;
            case 0x1D70F0u: goto label_1d70f0;
            case 0x1D7100u: goto label_1d7100;
            case 0x1D7168u: goto label_1d7168;
            case 0x1D7198u: goto label_1d7198;
            case 0x1D71C0u: goto label_1d71c0;
            case 0x1D71D0u: goto label_1d71d0;
            case 0x1D7238u: goto label_1d7238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7250u;
}
