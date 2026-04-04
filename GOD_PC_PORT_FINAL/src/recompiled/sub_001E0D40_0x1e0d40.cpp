#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0D40
// Address: 0x1e0d40 - 0x1e0e28
void sub_001E0D40_0x1e0d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0D40_0x1e0d40");
#endif

    ctx->pc = 0x1e0d40u;

    // 0x1e0d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0d44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e0d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d50: 0x8e050188  lw          $a1, 0x188($s0)
    ctx->pc = 0x1e0d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1e0d54: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E0D54u;
    {
        const bool branch_taken_0x1e0d54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D54u;
            // 0x1e0d58: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d54) {
            ctx->pc = 0x1E0DF8u;
            goto label_1e0df8;
        }
    }
    ctx->pc = 0x1E0D5Cu;
    // 0x1e0d5c: 0x8ca30174  lw          $v1, 0x174($a1)
    ctx->pc = 0x1e0d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1e0d60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e0d64: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1e0d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1e0d68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e0d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e0d6c: 0xaca40190  sw          $a0, 0x190($a1)
    ctx->pc = 0x1e0d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 400), GPR_U32(ctx, 4));
    // 0x1e0d70: 0xaca30174  sw          $v1, 0x174($a1)
    ctx->pc = 0x1e0d70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 372), GPR_U32(ctx, 3));
    // 0x1e0d74: 0xaca00194  sw          $zero, 0x194($a1)
    ctx->pc = 0x1e0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 404), GPR_U32(ctx, 0));
    // 0x1e0d78: 0xaca0018c  sw          $zero, 0x18C($a1)
    ctx->pc = 0x1e0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 396), GPR_U32(ctx, 0));
    // 0x1e0d7c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e0d80: 0x443001e  bgezl       $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E0D80u;
    {
        const bool branch_taken_0x1e0d80 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e0d80) {
            ctx->pc = 0x1E0D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D80u;
            // 0x1e0d84: 0x8e030174  lw          $v1, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0DFCu;
            goto label_1e0dfc;
        }
    }
    ctx->pc = 0x1E0D88u;
    // 0x1e0d88: 0x92020194  lbu         $v0, 0x194($s0)
    ctx->pc = 0x1e0d88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x1e0d8c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1e0d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e0d90: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x1e0d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1e0d94: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E0D94u;
    {
        const bool branch_taken_0x1e0d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D94u;
            // 0x1e0d98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d94) {
            ctx->pc = 0x1E0DD8u;
            goto label_1e0dd8;
        }
    }
    ctx->pc = 0x1E0D9Cu;
    // 0x1e0d9c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1e0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1e0da0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e0da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e0da4: 0x24426e60  addiu       $v0, $v0, 0x6E60
    ctx->pc = 0x1e0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28256));
    // 0x1e0da8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0dac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0db0: 0x400008  jr          $v0
    ctx->pc = 0x1E0DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0DB8u: goto label_1e0db8;
            case 0x1E0DC4u: goto label_1e0dc4;
            case 0x1E0DD0u: goto label_1e0dd0;
            case 0x1E0DD8u: goto label_1e0dd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0DB8u;
label_1e0db8:
    // 0x1e0db8: 0x8e020188  lw          $v0, 0x188($s0)
    ctx->pc = 0x1e0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1e0dbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0DBCu;
    {
        const bool branch_taken_0x1e0dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DBCu;
            // 0x1e0dc0: 0x8c450284  lw          $a1, 0x284($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dbc) {
            ctx->pc = 0x1E0DD8u;
            goto label_1e0dd8;
        }
    }
    ctx->pc = 0x1E0DC4u;
label_1e0dc4:
    // 0x1e0dc4: 0x8e020188  lw          $v0, 0x188($s0)
    ctx->pc = 0x1e0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1e0dc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0DC8u;
    {
        const bool branch_taken_0x1e0dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DC8u;
            // 0x1e0dcc: 0x8c4501d0  lw          $a1, 0x1D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dc8) {
            ctx->pc = 0x1E0DD8u;
            goto label_1e0dd8;
        }
    }
    ctx->pc = 0x1E0DD0u;
label_1e0dd0:
    // 0x1e0dd0: 0x8e020188  lw          $v0, 0x188($s0)
    ctx->pc = 0x1e0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1e0dd4: 0x8c4501cc  lw          $a1, 0x1CC($v0)
    ctx->pc = 0x1e0dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
label_1e0dd8:
    // 0x1e0dd8: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1e0dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0ddc: 0x24040419  addiu       $a0, $zero, 0x419
    ctx->pc = 0x1e0ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1049));
    // 0x1e0de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0de4: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1E0DE4u;
    SET_GPR_U32(ctx, 31, 0x1E0DECu);
    ctx->pc = 0x1E0DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DE4u;
            // 0x1e0de8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DECu; }
        if (ctx->pc != 0x1E0DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DECu; }
        if (ctx->pc != 0x1E0DECu) { return; }
    }
    ctx->pc = 0x1E0DECu;
    // 0x1e0dec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e0decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0df0: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x1E0DF0u;
    SET_GPR_U32(ctx, 31, 0x1E0DF8u);
    ctx->pc = 0x1E0DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DF0u;
            // 0x1e0df4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DF8u; }
        if (ctx->pc != 0x1E0DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DF8u; }
        if (ctx->pc != 0x1E0DF8u) { return; }
    }
    ctx->pc = 0x1E0DF8u;
label_1e0df8:
    // 0x1e0df8: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1e0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1e0dfc:
    // 0x1e0dfc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e0e00: 0x3442bfff  ori         $v0, $v0, 0xBFFF
    ctx->pc = 0x1e0e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49151);
    // 0x1e0e04: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x1e0e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x1e0e08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e0e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e0e0c: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x1e0e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x1e0e10: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x1e0e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
    // 0x1e0e14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E1Cu;
            // 0x1e0e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0DB8u: goto label_1e0db8;
            case 0x1E0DC4u: goto label_1e0dc4;
            case 0x1E0DD0u: goto label_1e0dd0;
            case 0x1E0DD8u: goto label_1e0dd8;
            case 0x1E0DF8u: goto label_1e0df8;
            case 0x1E0DFCu: goto label_1e0dfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0E24u;
    // 0x1e0e24: 0x0  nop
    ctx->pc = 0x1e0e24u;
    // NOP
}
