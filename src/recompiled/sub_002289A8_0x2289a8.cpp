#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002289A8
// Address: 0x2289a8 - 0x228a98
void sub_002289A8_0x2289a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002289A8_0x2289a8");
#endif

    ctx->pc = 0x2289a8u;

    // 0x2289a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2289a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2289ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2289acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2289b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2289b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2289b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2289b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2289b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2289b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2289bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2289c0: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x2289c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2289c4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2289c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2289c8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2289c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2289cc: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2289CCu;
    {
        const bool branch_taken_0x2289cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2289D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2289CCu;
            // 0x2289d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289cc) {
            ctx->pc = 0x2289F4u;
            goto label_2289f4;
        }
    }
    ctx->pc = 0x2289D4u;
    // 0x2289d4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2289d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2289d8:
    // 0x2289d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2289d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2289dc: 0xc08a15a  jal         func_228568
    ctx->pc = 0x2289DCu;
    SET_GPR_U32(ctx, 31, 0x2289E4u);
    ctx->pc = 0x2289E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2289DCu;
            // 0x2289e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (runtime->hasFunction(0x228568u)) {
        auto targetFn = runtime->lookupFunction(0x228568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2289E4u; }
        if (ctx->pc != 0x2289E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_228568_0x228590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2289E4u; }
        if (ctx->pc != 0x2289E4u) { return; }
    }
    ctx->pc = 0x2289E4u;
    // 0x2289e4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2289e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2289e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2289e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2289ec: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2289ECu;
    {
        const bool branch_taken_0x2289ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2289F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2289ECu;
            // 0x2289f0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289ec) {
            ctx->pc = 0x2289D8u;
            runtime->cooperativeGuestYield();
            goto label_2289d8;
        }
    }
    ctx->pc = 0x2289F4u;
label_2289f4:
    // 0x2289f4: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x2289f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
    // 0x2289f8: 0x26510018  addiu       $s1, $s2, 0x18
    ctx->pc = 0x2289f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2289fc: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x2289fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x228a00: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x228a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x228a04: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x228a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x228a08: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x228A08u;
    {
        const bool branch_taken_0x228a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x228A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228A08u;
            // 0x228a0c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a08) {
            ctx->pc = 0x228A34u;
            goto label_228a34;
        }
    }
    ctx->pc = 0x228A10u;
    // 0x228a10: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x228a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x228a14: 0x0  nop
    ctx->pc = 0x228a14u;
    // NOP
label_228a18:
    // 0x228a18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x228a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x228a1c: 0xc08a176  jal         func_2285D8
    ctx->pc = 0x228A1Cu;
    SET_GPR_U32(ctx, 31, 0x228A24u);
    ctx->pc = 0x228A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228A1Cu;
            // 0x228a20: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2285D8u;
    if (runtime->hasFunction(0x2285D8u)) {
        auto targetFn = runtime->lookupFunction(0x2285D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A24u; }
        if (ctx->pc != 0x228A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2285d8_0x228600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A24u; }
        if (ctx->pc != 0x228A24u) { return; }
    }
    ctx->pc = 0x228A24u;
    // 0x228a24: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x228a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x228a28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x228a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228a2c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x228A2Cu;
    {
        const bool branch_taken_0x228a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x228A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228A2Cu;
            // 0x228a30: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a2c) {
            ctx->pc = 0x228A18u;
            runtime->cooperativeGuestYield();
            goto label_228a18;
        }
    }
    ctx->pc = 0x228A34u;
label_228a34:
    // 0x228a34: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x228a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
    // 0x228a38: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x228a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x228a3c: 0xae310004  sw          $s1, 0x4($s1)
    ctx->pc = 0x228a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 17));
    // 0x228a40: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x228a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x228a44: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x228a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x228a48: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x228A48u;
    {
        const bool branch_taken_0x228a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x228A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228A48u;
            // 0x228a4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a48) {
            ctx->pc = 0x228A74u;
            goto label_228a74;
        }
    }
    ctx->pc = 0x228A50u;
    // 0x228a50: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x228a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x228a54: 0x0  nop
    ctx->pc = 0x228a54u;
    // NOP
label_228a58:
    // 0x228a58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x228a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x228a5c: 0xc08a176  jal         func_2285D8
    ctx->pc = 0x228A5Cu;
    SET_GPR_U32(ctx, 31, 0x228A64u);
    ctx->pc = 0x228A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228A5Cu;
            // 0x228a60: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2285D8u;
    if (runtime->hasFunction(0x2285D8u)) {
        auto targetFn = runtime->lookupFunction(0x2285D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A64u; }
        if (ctx->pc != 0x228A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2285d8_0x228600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A64u; }
        if (ctx->pc != 0x228A64u) { return; }
    }
    ctx->pc = 0x228A64u;
    // 0x228a64: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x228a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x228a68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x228a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228a6c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x228A6Cu;
    {
        const bool branch_taken_0x228a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x228A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228A6Cu;
            // 0x228a70: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a6c) {
            ctx->pc = 0x228A58u;
            runtime->cooperativeGuestYield();
            goto label_228a58;
        }
    }
    ctx->pc = 0x228A74u;
label_228a74:
    // 0x228a74: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x228a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
    // 0x228a78: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x228a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x228a7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x228a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228a80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x228a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228a84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x228a84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x228A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228A8Cu;
            // 0x228a90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2289D8u: goto label_2289d8;
            case 0x2289F4u: goto label_2289f4;
            case 0x228A18u: goto label_228a18;
            case 0x228A34u: goto label_228a34;
            case 0x228A58u: goto label_228a58;
            case 0x228A74u: goto label_228a74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x228A94u;
    // 0x228a94: 0x0  nop
    ctx->pc = 0x228a94u;
    // NOP
}
