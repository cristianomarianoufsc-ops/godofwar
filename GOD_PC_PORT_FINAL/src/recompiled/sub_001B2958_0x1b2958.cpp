#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2958
// Address: 0x1b2958 - 0x1b2cd0
void sub_001B2958_0x1b2958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2958_0x1b2958");
#endif

    ctx->pc = 0x1b2958u;

    // 0x1b2958: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b295c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b295cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b2960: 0x8c43e560  lw          $v1, -0x1AA0($v0)
    ctx->pc = 0x1b2960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x1b2964: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1b2964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1b2968: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1b2968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1b296c: 0x3862000b  xori        $v0, $v1, 0xB
    ctx->pc = 0x1b296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)11);
    // 0x1b2970: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1b2970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1b2974: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1b2974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1b2978: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b2978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b297c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B297Cu;
    {
        const bool branch_taken_0x1b297c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B297Cu;
            // 0x1b2980: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b297c) {
            ctx->pc = 0x1B2994u;
            goto label_1b2994;
        }
    }
    ctx->pc = 0x1B2984u;
    // 0x1b2984: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x1b2984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1b2988: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b2988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b298c: 0x104000c8  beqz        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x1B298Cu;
    {
        const bool branch_taken_0x1b298c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B298Cu;
            // 0x1b2990: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b298c) {
            ctx->pc = 0x1B2CB0u;
            goto label_1b2cb0;
        }
    }
    ctx->pc = 0x1B2994u;
label_1b2994:
    // 0x1b2994: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b2994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b2998: 0x8c42ec50  lw          $v0, -0x13B0($v0)
    ctx->pc = 0x1b2998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x1b299c: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1B299Cu;
    {
        const bool branch_taken_0x1b299c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B29A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B299Cu;
            // 0x1b29a0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b299c) {
            ctx->pc = 0x1B2CB0u;
            goto label_1b2cb0;
        }
    }
    ctx->pc = 0x1B29A4u;
    // 0x1b29a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b29a8: 0x8c42cb04  lw          $v0, -0x34FC($v0)
    ctx->pc = 0x1b29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953732)));
    // 0x1b29ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B29ACu;
    {
        const bool branch_taken_0x1b29ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B29B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29ACu;
            // 0x1b29b0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29ac) {
            ctx->pc = 0x1B29E8u;
            goto label_1b29e8;
        }
    }
    ctx->pc = 0x1B29B4u;
    // 0x1b29b4: 0x8c42cb88  lw          $v0, -0x3478($v0)
    ctx->pc = 0x1b29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953864)));
    // 0x1b29b8: 0x184000be  blez        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1B29B8u;
    {
        const bool branch_taken_0x1b29b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B29BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29B8u;
            // 0x1b29bc: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29b8) {
            ctx->pc = 0x1B2CB4u;
            goto label_1b2cb4;
        }
    }
    ctx->pc = 0x1B29C0u;
    // 0x1b29c0: 0xc06cefa  jal         func_1B3BE8
    ctx->pc = 0x1B29C0u;
    SET_GPR_U32(ctx, 31, 0x1B29C8u);
    ctx->pc = 0x1B3BE8u;
    if (runtime->hasFunction(0x1B3BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1B3BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29C8u; }
        if (ctx->pc != 0x1B29C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3BE8_0x1b3be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29C8u; }
        if (ctx->pc != 0x1B29C8u) { return; }
    }
    ctx->pc = 0x1B29C8u;
    // 0x1b29c8: 0xc0699f2  jal         func_1A67C8
    ctx->pc = 0x1B29C8u;
    SET_GPR_U32(ctx, 31, 0x1B29D0u);
    ctx->pc = 0x1A67C8u;
    if (runtime->hasFunction(0x1A67C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A67C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29D0u; }
        if (ctx->pc != 0x1B29D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A67C8_0x1a67c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29D0u; }
        if (ctx->pc != 0x1B29D0u) { return; }
    }
    ctx->pc = 0x1B29D0u;
    // 0x1b29d0: 0xc06cb34  jal         func_1B2CD0
    ctx->pc = 0x1B29D0u;
    SET_GPR_U32(ctx, 31, 0x1B29D8u);
    ctx->pc = 0x1B2CD0u;
    if (runtime->hasFunction(0x1B2CD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B2CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29D8u; }
        if (ctx->pc != 0x1B29D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b2cd0_0x1b2d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29D8u; }
        if (ctx->pc != 0x1B29D8u) { return; }
    }
    ctx->pc = 0x1B29D8u;
    // 0x1b29d8: 0xc06cbb0  jal         func_1B2EC0
    ctx->pc = 0x1B29D8u;
    SET_GPR_U32(ctx, 31, 0x1B29E0u);
    ctx->pc = 0x1B2EC0u;
    if (runtime->hasFunction(0x1B2EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B2EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29E0u; }
        if (ctx->pc != 0x1B29E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2EC0_0x1b2ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29E0u; }
        if (ctx->pc != 0x1B29E0u) { return; }
    }
    ctx->pc = 0x1B29E0u;
    // 0x1b29e0: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x1B29E0u;
    {
        const bool branch_taken_0x1b29e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B29E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29E0u;
            // 0x1b29e4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29e0) {
            ctx->pc = 0x1B2CB0u;
            goto label_1b2cb0;
        }
    }
    ctx->pc = 0x1B29E8u;
label_1b29e8:
    // 0x1b29e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b29ec: 0x8c42caf8  lw          $v0, -0x3508($v0)
    ctx->pc = 0x1b29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953720)));
    // 0x1b29f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B29F0u;
    {
        const bool branch_taken_0x1b29f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B29F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29F0u;
            // 0x1b29f4: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29f0) {
            ctx->pc = 0x1B2A08u;
            goto label_1b2a08;
        }
    }
    ctx->pc = 0x1B29F8u;
    // 0x1b29f8: 0xc087314  jal         func_21CC50
    ctx->pc = 0x1B29F8u;
    SET_GPR_U32(ctx, 31, 0x1B2A00u);
    ctx->pc = 0x21CC50u;
    if (runtime->hasFunction(0x21CC50u)) {
        auto targetFn = runtime->lookupFunction(0x21CC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A00u; }
        if (ctx->pc != 0x1B2A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CC50_0x21cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A00u; }
        if (ctx->pc != 0x1B2A00u) { return; }
    }
    ctx->pc = 0x1B2A00u;
    // 0x1b2a00: 0xc06cb34  jal         func_1B2CD0
    ctx->pc = 0x1B2A00u;
    SET_GPR_U32(ctx, 31, 0x1B2A08u);
    ctx->pc = 0x1B2CD0u;
    if (runtime->hasFunction(0x1B2CD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B2CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A08u; }
        if (ctx->pc != 0x1B2A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b2cd0_0x1b2d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A08u; }
        if (ctx->pc != 0x1B2A08u) { return; }
    }
    ctx->pc = 0x1B2A08u;
label_1b2a08:
    // 0x1b2a08: 0x8e82cb14  lw          $v0, -0x34EC($s4)
    ctx->pc = 0x1b2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953748)));
    // 0x1b2a0c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1B2A0Cu;
    {
        const bool branch_taken_0x1b2a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A0Cu;
            // 0x1b2a10: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a0c) {
            ctx->pc = 0x1B2B80u;
            goto label_1b2b80;
        }
    }
    ctx->pc = 0x1B2A14u;
    // 0x1b2a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2a18: 0x8e43cb18  lw          $v1, -0x34E8($s2)
    ctx->pc = 0x1b2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953752)));
    // 0x1b2a1c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B2A1Cu;
    {
        const bool branch_taken_0x1b2a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A1Cu;
            // 0x1b2a20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a1c) {
            ctx->pc = 0x1B2A90u;
            goto label_1b2a90;
        }
    }
    ctx->pc = 0x1B2A24u;
    // 0x1b2a24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2A24u;
    {
        const bool branch_taken_0x1b2a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A24u;
            // 0x1b2a28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a24) {
            ctx->pc = 0x1B2A3Cu;
            goto label_1b2a3c;
        }
    }
    ctx->pc = 0x1B2A2Cu;
    // 0x1b2a2c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2A2Cu;
    {
        const bool branch_taken_0x1b2a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A2Cu;
            // 0x1b2a30: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a2c) {
            ctx->pc = 0x1B2A4Cu;
            goto label_1b2a4c;
        }
    }
    ctx->pc = 0x1B2A34u;
    // 0x1b2a34: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1B2A34u;
    {
        const bool branch_taken_0x1b2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A34u;
            // 0x1b2a38: 0x8e02cb00  lw          $v0, -0x3500($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a34) {
            ctx->pc = 0x1B2B88u;
            goto label_1b2b88;
        }
    }
    ctx->pc = 0x1B2A3Cu;
label_1b2a3c:
    // 0x1b2a3c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B2A3Cu;
    {
        const bool branch_taken_0x1b2a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A3Cu;
            // 0x1b2a40: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a3c) {
            ctx->pc = 0x1B2AACu;
            goto label_1b2aac;
        }
    }
    ctx->pc = 0x1B2A44u;
    // 0x1b2a44: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1B2A44u;
    {
        const bool branch_taken_0x1b2a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A44u;
            // 0x1b2a48: 0x8e02cb00  lw          $v0, -0x3500($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a44) {
            ctx->pc = 0x1B2B88u;
            goto label_1b2b88;
        }
    }
    ctx->pc = 0x1B2A4Cu;
label_1b2a4c:
    // 0x1b2a4c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1b2a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1b2a50: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b2a54: 0x2484509e  addiu       $a0, $a0, 0x509E
    ctx->pc = 0x1b2a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20638));
    // 0x1b2a58: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b2a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b2a5c: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x1b2a5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x1b2a60: 0x24c64820  addiu       $a2, $a2, 0x4820
    ctx->pc = 0x1b2a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18464));
    // 0x1b2a64: 0x8c67cc90  lw          $a3, -0x3370($v1)
    ctx->pc = 0x1b2a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954128)));
    // 0x1b2a68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2a6c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b2a70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1b2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1b2a74: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x1b2a74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x1b2a78: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1b2a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2a7c: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x1b2a7cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b2a80: 0xc062328  jal         func_188CA0
    ctx->pc = 0x1B2A80u;
    SET_GPR_U32(ctx, 31, 0x1B2A88u);
    ctx->pc = 0x1B2A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A80u;
            // 0x1b2a84: 0x8c65cb0c  lw          $a1, -0x34F4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953740)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188CA0u;
    if (runtime->hasFunction(0x188CA0u)) {
        auto targetFn = runtime->lookupFunction(0x188CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A88u; }
        if (ctx->pc != 0x1B2A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188CA0_0x188ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A88u; }
        if (ctx->pc != 0x1B2A88u) { return; }
    }
    ctx->pc = 0x1B2A88u;
    // 0x1b2a88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2A88u;
    {
        const bool branch_taken_0x1b2a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A88u;
            // 0x1b2a8c: 0x8e42cb18  lw          $v0, -0x34E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a88) {
            ctx->pc = 0x1B2AA0u;
            goto label_1b2aa0;
        }
    }
    ctx->pc = 0x1B2A90u;
label_1b2a90:
    // 0x1b2a90: 0xc0623b6  jal         func_188ED8
    ctx->pc = 0x1B2A90u;
    SET_GPR_U32(ctx, 31, 0x1B2A98u);
    ctx->pc = 0x188ED8u;
    if (runtime->hasFunction(0x188ED8u)) {
        auto targetFn = runtime->lookupFunction(0x188ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A98u; }
        if (ctx->pc != 0x1B2A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_188ed8_0x188ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A98u; }
        if (ctx->pc != 0x1B2A98u) { return; }
    }
    ctx->pc = 0x1B2A98u;
    // 0x1b2a98: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1B2A98u;
    {
        const bool branch_taken_0x1b2a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A98u;
            // 0x1b2a9c: 0x8e42cb18  lw          $v0, -0x34E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a98) {
            ctx->pc = 0x1B2B80u;
            goto label_1b2b80;
        }
    }
    ctx->pc = 0x1B2AA0u;
label_1b2aa0:
    // 0x1b2aa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b2aa4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1B2AA4u;
    {
        const bool branch_taken_0x1b2aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AA4u;
            // 0x1b2aa8: 0xae42cb18  sw          $v0, -0x34E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294953752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2aa4) {
            ctx->pc = 0x1B2B80u;
            goto label_1b2b80;
        }
    }
    ctx->pc = 0x1B2AACu;
label_1b2aac:
    // 0x1b2aac: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x1b2aacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x1b2ab0: 0x26645078  addiu       $a0, $s3, 0x5078
    ctx->pc = 0x1b2ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20600));
    // 0x1b2ab4: 0x90820024  lbu         $v0, 0x24($a0)
    ctx->pc = 0x1b2ab4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1b2ab8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1B2AB8u;
    {
        const bool branch_taken_0x1b2ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AB8u;
            // 0x1b2abc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ab8) {
            ctx->pc = 0x1B2B80u;
            goto label_1b2b80;
        }
    }
    ctx->pc = 0x1B2AC0u;
    // 0x1b2ac0: 0x8c42cb10  lw          $v0, -0x34F0($v0)
    ctx->pc = 0x1b2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953744)));
    // 0x1b2ac4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2AC4u;
    {
        const bool branch_taken_0x1b2ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AC4u;
            // 0x1b2ac8: 0x24840026  addiu       $a0, $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ac4) {
            ctx->pc = 0x1B2ADCu;
            goto label_1b2adc;
        }
    }
    ctx->pc = 0x1B2ACCu;
    // 0x1b2acc: 0xc06cbd4  jal         func_1B2F50
    ctx->pc = 0x1B2ACCu;
    SET_GPR_U32(ctx, 31, 0x1B2AD4u);
    ctx->pc = 0x1B2AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2ACCu;
            // 0x1b2ad0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2F50u;
    if (runtime->hasFunction(0x1B2F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B2F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AD4u; }
        if (ctx->pc != 0x1B2AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2F50_0x1b2f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AD4u; }
        if (ctx->pc != 0x1B2AD4u) { return; }
    }
    ctx->pc = 0x1B2AD4u;
    // 0x1b2ad4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2AD4u;
    {
        const bool branch_taken_0x1b2ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2ad4) {
            ctx->pc = 0x1B2AF0u;
            goto label_1b2af0;
        }
    }
    ctx->pc = 0x1B2ADCu;
label_1b2adc:
    // 0x1b2adc: 0xc0623c0  jal         func_188F00
    ctx->pc = 0x1B2ADCu;
    SET_GPR_U32(ctx, 31, 0x1B2AE4u);
    ctx->pc = 0x1B2AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2ADCu;
            // 0x1b2ae0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188F00u;
    if (runtime->hasFunction(0x188F00u)) {
        auto targetFn = runtime->lookupFunction(0x188F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AE4u; }
        if (ctx->pc != 0x1B2AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_188f00_0x188f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AE4u; }
        if (ctx->pc != 0x1B2AE4u) { return; }
    }
    ctx->pc = 0x1B2AE4u;
    // 0x1b2ae4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2AE4u;
    {
        const bool branch_taken_0x1b2ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AE4u;
            // 0x1b2ae8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ae4) {
            ctx->pc = 0x1B2B00u;
            goto label_1b2b00;
        }
    }
    ctx->pc = 0x1B2AECu;
    // 0x1b2aec: 0x0  nop
    ctx->pc = 0x1b2aecu;
    // NOP
label_1b2af0:
    // 0x1b2af0: 0xc0623c0  jal         func_188F00
    ctx->pc = 0x1B2AF0u;
    SET_GPR_U32(ctx, 31, 0x1B2AF8u);
    ctx->pc = 0x1B2AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AF0u;
            // 0x1b2af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188F00u;
    if (runtime->hasFunction(0x188F00u)) {
        auto targetFn = runtime->lookupFunction(0x188F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AF8u; }
        if (ctx->pc != 0x1B2AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_188f00_0x188f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AF8u; }
        if (ctx->pc != 0x1B2AF8u) { return; }
    }
    ctx->pc = 0x1B2AF8u;
    // 0x1b2af8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2afc: 0x0  nop
    ctx->pc = 0x1b2afcu;
    // NOP
label_1b2b00:
    // 0x1b2b00: 0xc0623a0  jal         func_188E80
    ctx->pc = 0x1B2B00u;
    SET_GPR_U32(ctx, 31, 0x1B2B08u);
    ctx->pc = 0x1B2B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B00u;
            // 0x1b2b04: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188E80u;
    if (runtime->hasFunction(0x188E80u)) {
        auto targetFn = runtime->lookupFunction(0x188E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B08u; }
        if (ctx->pc != 0x1B2B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_188e80_0x188ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B08u; }
        if (ctx->pc != 0x1B2B08u) { return; }
    }
    ctx->pc = 0x1B2B08u;
    // 0x1b2b08: 0x8e22cd58  lw          $v0, -0x32A8($s1)
    ctx->pc = 0x1b2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x1b2b0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B2B0Cu;
    {
        const bool branch_taken_0x1b2b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B0Cu;
            // 0x1b2b10: 0x3c10002c  lui         $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b0c) {
            ctx->pc = 0x1B2B50u;
            goto label_1b2b50;
        }
    }
    ctx->pc = 0x1B2B14u;
    // 0x1b2b14: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1b2b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1b2b18: 0x261073d8  addiu       $s0, $s0, 0x73D8
    ctx->pc = 0x1b2b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29656));
    // 0x1b2b1c: 0x24a5509e  addiu       $a1, $a1, 0x509E
    ctx->pc = 0x1b2b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20638));
    // 0x1b2b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b24: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1B2B24u;
    SET_GPR_U32(ctx, 31, 0x1B2B2Cu);
    ctx->pc = 0x1B2B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B24u;
            // 0x1b2b28: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B2Cu; }
        if (ctx->pc != 0x1B2B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B2Cu; }
        if (ctx->pc != 0x1B2B2Cu) { return; }
    }
    ctx->pc = 0x1B2B2Cu;
    // 0x1b2b2c: 0x8e22cd58  lw          $v0, -0x32A8($s1)
    ctx->pc = 0x1b2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x1b2b30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b34: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x1b2b34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2b38: 0x240401f5  addiu       $a0, $zero, 0x1F5
    ctx->pc = 0x1b2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 501));
    // 0x1b2b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b2b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b2b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2b48: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1B2B48u;
    SET_GPR_U32(ctx, 31, 0x1B2B50u);
    ctx->pc = 0x1B2B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B48u;
            // 0x1b2b4c: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B50u; }
        if (ctx->pc != 0x1B2B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B50u; }
        if (ctx->pc != 0x1B2B50u) { return; }
    }
    ctx->pc = 0x1B2B50u;
label_1b2b50:
    // 0x1b2b50: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b2b54: 0x26635078  addiu       $v1, $s3, 0x5078
    ctx->pc = 0x1b2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 20600));
    // 0x1b2b58: 0x8c44cabc  lw          $a0, -0x3544($v0)
    ctx->pc = 0x1b2b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953660)));
    // 0x1b2b5c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1b2b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1b2b60: 0xa0600026  sb          $zero, 0x26($v1)
    ctx->pc = 0x1b2b60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2b64: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b2b68: 0xac44cb1c  sw          $a0, -0x34E4($v0)
    ctx->pc = 0x1b2b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953756), GPR_U32(ctx, 4));
    // 0x1b2b6c: 0xaca0cb0c  sw          $zero, -0x34F4($a1)
    ctx->pc = 0x1b2b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294953740), GPR_U32(ctx, 0));
    // 0x1b2b70: 0xae80cb14  sw          $zero, -0x34EC($s4)
    ctx->pc = 0x1b2b70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294953748), GPR_U32(ctx, 0));
    // 0x1b2b74: 0xae40cb18  sw          $zero, -0x34E8($s2)
    ctx->pc = 0x1b2b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294953752), GPR_U32(ctx, 0));
    // 0x1b2b78: 0xa0600024  sb          $zero, 0x24($v1)
    ctx->pc = 0x1b2b78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2b7c: 0xa0600025  sb          $zero, 0x25($v1)
    ctx->pc = 0x1b2b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 0));
label_1b2b80:
    // 0x1b2b80: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1b2b80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1b2b84: 0x8e02cb00  lw          $v0, -0x3500($s0)
    ctx->pc = 0x1b2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953728)));
label_1b2b88:
    // 0x1b2b88: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B2B88u;
    {
        const bool branch_taken_0x1b2b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B88u;
            // 0x1b2b8c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b88) {
            ctx->pc = 0x1B2C3Cu;
            goto label_1b2c3c;
        }
    }
    ctx->pc = 0x1B2B90u;
    // 0x1b2b90: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1b2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1b2b94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b2b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2b98: 0x8ca30174  lw          $v1, 0x174($a1)
    ctx->pc = 0x1b2b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1b2b9c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1b2b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1b2ba0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B2BA0u;
    {
        const bool branch_taken_0x1b2ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BA0u;
            // 0x1b2ba4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ba0) {
            ctx->pc = 0x1B2BE4u;
            goto label_1b2be4;
        }
    }
    ctx->pc = 0x1B2BA8u;
    // 0x1b2ba8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1b2ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1b2bac: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1B2BACu;
    {
        const bool branch_taken_0x1b2bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2bac) {
            ctx->pc = 0x1B2BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BACu;
            // 0x1b2bb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2BE8u;
            goto label_1b2be8;
        }
    }
    ctx->pc = 0x1B2BB4u;
    // 0x1b2bb4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1b2bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1b2bb8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2BB8u;
    {
        const bool branch_taken_0x1b2bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2bb8) {
            ctx->pc = 0x1B2BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BB8u;
            // 0x1b2bbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2BE8u;
            goto label_1b2be8;
        }
    }
    ctx->pc = 0x1B2BC0u;
    // 0x1b2bc0: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1b2bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1b2bc4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2BC4u;
    {
        const bool branch_taken_0x1b2bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2bc4) {
            ctx->pc = 0x1B2BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BC4u;
            // 0x1b2bc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2BE8u;
            goto label_1b2be8;
        }
    }
    ctx->pc = 0x1B2BCCu;
    // 0x1b2bcc: 0xc4a10178  lwc1        $f1, 0x178($a1)
    ctx->pc = 0x1b2bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2bd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2bd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2bd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2bdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2BDCu;
    {
        const bool branch_taken_0x1b2bdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2bdc) {
            ctx->pc = 0x1B2BE8u;
            goto label_1b2be8;
        }
    }
    ctx->pc = 0x1B2BE4u;
label_1b2be4:
    // 0x1b2be4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b2be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2be8:
    // 0x1b2be8: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2BE8u;
    {
        const bool branch_taken_0x1b2be8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BE8u;
            // 0x1b2bec: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2be8) {
            ctx->pc = 0x1B2C40u;
            goto label_1b2c40;
        }
    }
    ctx->pc = 0x1B2BF0u;
    // 0x1b2bf0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b2bf4: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x1b2bf4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b2bf8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1b2bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1b2bfc: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x1b2bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x1b2c00: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1b2c00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b2c04: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1b2c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1b2c08: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1b2c08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b2c0c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1b2c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1b2c10: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1b2c10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1b2c14: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1b2c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1b2c18: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x1b2c18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
    // 0x1b2c1c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1b2c1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2c20: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x1b2c20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x1b2c24: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1b2c24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2c28: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x1b2c28u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x1b2c2c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1b2c2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2c30: 0xc08b234  jal         func_22C8D0
    ctx->pc = 0x1B2C30u;
    SET_GPR_U32(ctx, 31, 0x1B2C38u);
    ctx->pc = 0x1B2C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C30u;
            // 0x1b2c34: 0x7ca20040  sq          $v0, 0x40($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C8D0u;
    if (runtime->hasFunction(0x22C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x22C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C38u; }
        if (ctx->pc != 0x1B2C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C8D0_0x22c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C38u; }
        if (ctx->pc != 0x1B2C38u) { return; }
    }
    ctx->pc = 0x1B2C38u;
    // 0x1b2c38: 0xae00cb00  sw          $zero, -0x3500($s0)
    ctx->pc = 0x1b2c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953728), GPR_U32(ctx, 0));
label_1b2c3c:
    // 0x1b2c3c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1b2c40:
    // 0x1b2c40: 0x8c42caf4  lw          $v0, -0x350C($v0)
    ctx->pc = 0x1b2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953716)));
    // 0x1b2c44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2C44u;
    {
        const bool branch_taken_0x1b2c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C44u;
            // 0x1b2c48: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c44) {
            ctx->pc = 0x1B2C60u;
            goto label_1b2c60;
        }
    }
    ctx->pc = 0x1B2C4Cu;
    // 0x1b2c4c: 0xc087a74  jal         func_21E9D0
    ctx->pc = 0x1B2C4Cu;
    SET_GPR_U32(ctx, 31, 0x1B2C54u);
    ctx->pc = 0x21E9D0u;
    if (runtime->hasFunction(0x21E9D0u)) {
        auto targetFn = runtime->lookupFunction(0x21E9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C54u; }
        if (ctx->pc != 0x1B2C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E9D0_0x21e9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C54u; }
        if (ctx->pc != 0x1B2C54u) { return; }
    }
    ctx->pc = 0x1B2C54u;
    // 0x1b2c54: 0xc06cb34  jal         func_1B2CD0
    ctx->pc = 0x1B2C54u;
    SET_GPR_U32(ctx, 31, 0x1B2C5Cu);
    ctx->pc = 0x1B2CD0u;
    if (runtime->hasFunction(0x1B2CD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B2CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C5Cu; }
        if (ctx->pc != 0x1B2C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b2cd0_0x1b2d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C5Cu; }
        if (ctx->pc != 0x1B2C5Cu) { return; }
    }
    ctx->pc = 0x1B2C5Cu;
    // 0x1b2c5c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1b2c60:
    // 0x1b2c60: 0x8c44cae8  lw          $a0, -0x3518($v0)
    ctx->pc = 0x1b2c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953704)));
    // 0x1b2c64: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2C64u;
    {
        const bool branch_taken_0x1b2c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C64u;
            // 0x1b2c68: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c64) {
            ctx->pc = 0x1B2C7Cu;
            goto label_1b2c7c;
        }
    }
    ctx->pc = 0x1B2C6Cu;
    // 0x1b2c6c: 0xc08b212  jal         func_22C848
    ctx->pc = 0x1B2C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B2C74u);
    ctx->pc = 0x22C848u;
    if (runtime->hasFunction(0x22C848u)) {
        auto targetFn = runtime->lookupFunction(0x22C848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C74u; }
        if (ctx->pc != 0x1B2C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C848_0x22c848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C74u; }
        if (ctx->pc != 0x1B2C74u) { return; }
    }
    ctx->pc = 0x1B2C74u;
    // 0x1b2c74: 0xc06cb34  jal         func_1B2CD0
    ctx->pc = 0x1B2C74u;
    SET_GPR_U32(ctx, 31, 0x1B2C7Cu);
    ctx->pc = 0x1B2CD0u;
    if (runtime->hasFunction(0x1B2CD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B2CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C7Cu; }
        if (ctx->pc != 0x1B2C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b2cd0_0x1b2d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C7Cu; }
        if (ctx->pc != 0x1B2C7Cu) { return; }
    }
    ctx->pc = 0x1B2C7Cu;
label_1b2c7c:
    // 0x1b2c7c: 0x8e04caec  lw          $a0, -0x3514($s0)
    ctx->pc = 0x1b2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953708)));
    // 0x1b2c80: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2C80u;
    {
        const bool branch_taken_0x1b2c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C80u;
            // 0x1b2c84: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c80) {
            ctx->pc = 0x1B2C98u;
            goto label_1b2c98;
        }
    }
    ctx->pc = 0x1B2C88u;
    // 0x1b2c88: 0xc08733e  jal         func_21CCF8
    ctx->pc = 0x1B2C88u;
    SET_GPR_U32(ctx, 31, 0x1B2C90u);
    ctx->pc = 0x21CCF8u;
    if (runtime->hasFunction(0x21CCF8u)) {
        auto targetFn = runtime->lookupFunction(0x21CCF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C90u; }
        if (ctx->pc != 0x1B2C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CCF8_0x21ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C90u; }
        if (ctx->pc != 0x1B2C90u) { return; }
    }
    ctx->pc = 0x1B2C90u;
    // 0x1b2c90: 0xae00caec  sw          $zero, -0x3514($s0)
    ctx->pc = 0x1b2c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953708), GPR_U32(ctx, 0));
    // 0x1b2c94: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1b2c98:
    // 0x1b2c98: 0x8c42cafc  lw          $v0, -0x3504($v0)
    ctx->pc = 0x1b2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953724)));
    // 0x1b2c9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2C9Cu;
    {
        const bool branch_taken_0x1b2c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C9Cu;
            // 0x1b2ca0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c9c) {
            ctx->pc = 0x1B2CB0u;
            goto label_1b2cb0;
        }
    }
    ctx->pc = 0x1B2CA4u;
    // 0x1b2ca4: 0xc06c972  jal         func_1B25C8
    ctx->pc = 0x1B2CA4u;
    SET_GPR_U32(ctx, 31, 0x1B2CACu);
    ctx->pc = 0x1B25C8u;
    if (runtime->hasFunction(0x1B25C8u)) {
        auto targetFn = runtime->lookupFunction(0x1B25C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CACu; }
        if (ctx->pc != 0x1B2CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B25C8_0x1b25c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CACu; }
        if (ctx->pc != 0x1B2CACu) { return; }
    }
    ctx->pc = 0x1B2CACu;
    // 0x1b2cac: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1b2cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b2cb0:
    // 0x1b2cb0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1b2cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b2cb4:
    // 0x1b2cb4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1b2cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b2cb8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1b2cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b2cbc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b2cbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2cc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b2cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2CC4u;
            // 0x1b2cc8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2994u: goto label_1b2994;
            case 0x1B29E8u: goto label_1b29e8;
            case 0x1B2A08u: goto label_1b2a08;
            case 0x1B2A3Cu: goto label_1b2a3c;
            case 0x1B2A4Cu: goto label_1b2a4c;
            case 0x1B2A90u: goto label_1b2a90;
            case 0x1B2AA0u: goto label_1b2aa0;
            case 0x1B2AACu: goto label_1b2aac;
            case 0x1B2ADCu: goto label_1b2adc;
            case 0x1B2AF0u: goto label_1b2af0;
            case 0x1B2B00u: goto label_1b2b00;
            case 0x1B2B50u: goto label_1b2b50;
            case 0x1B2B80u: goto label_1b2b80;
            case 0x1B2B88u: goto label_1b2b88;
            case 0x1B2BE4u: goto label_1b2be4;
            case 0x1B2BE8u: goto label_1b2be8;
            case 0x1B2C3Cu: goto label_1b2c3c;
            case 0x1B2C40u: goto label_1b2c40;
            case 0x1B2C60u: goto label_1b2c60;
            case 0x1B2C7Cu: goto label_1b2c7c;
            case 0x1B2C98u: goto label_1b2c98;
            case 0x1B2CB0u: goto label_1b2cb0;
            case 0x1B2CB4u: goto label_1b2cb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2CCCu;
    // 0x1b2ccc: 0x0  nop
    ctx->pc = 0x1b2cccu;
    // NOP
}
