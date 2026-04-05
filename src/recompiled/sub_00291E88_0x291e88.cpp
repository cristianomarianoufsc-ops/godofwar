#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291E88
// Address: 0x291e88 - 0x292048
void sub_00291E88_0x291e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291E88_0x291e88");
#endif

    ctx->pc = 0x291e88u;

    // 0x291e88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x291e8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x291e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x291e90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x291e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x291e94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x291e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x291e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x291e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291ea0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x291ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ea4: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x291ea4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x291ea8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x291ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291eac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x291eacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x291eb0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x291eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x291eb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x291eb8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x291eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x291ebc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x291EBCu;
    {
        const bool branch_taken_0x291ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291EBCu;
            // 0x291ec0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ebc) {
            ctx->pc = 0x291F28u;
            goto label_291f28;
        }
    }
    ctx->pc = 0x291EC4u;
    // 0x291ec4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x291ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x291ec8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x291ecc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x291eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x291ed0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x291ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x291ed4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291ED4u;
    {
        const bool branch_taken_0x291ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291ED4u;
            // 0x291ed8: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ed4) {
            ctx->pc = 0x291EE8u;
            goto label_291ee8;
        }
    }
    ctx->pc = 0x291EDCu;
    // 0x291edc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x291EDCu;
    {
        const bool branch_taken_0x291edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291EDCu;
            // 0x291ee0: 0xdc626630  ld          $v0, 0x6630($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 26160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291edc) {
            ctx->pc = 0x292030u;
            goto label_292030;
        }
    }
    ctx->pc = 0x291EE4u;
    // 0x291ee4: 0x0  nop
    ctx->pc = 0x291ee4u;
    // NOP
label_291ee8:
    // 0x291ee8: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291EE8u;
    {
        const bool branch_taken_0x291ee8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x291EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291EE8u;
            // 0x291eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ee8) {
            ctx->pc = 0x291F0Cu;
            goto label_291f0c;
        }
    }
    ctx->pc = 0x291EF0u;
    // 0x291ef0: 0xc0a1254  jal         func_284950
    ctx->pc = 0x291EF0u;
    SET_GPR_U32(ctx, 31, 0x291EF8u);
    ctx->pc = 0x291EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291EF0u;
            // 0x291ef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EF8u; }
        if (ctx->pc != 0x291EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EF8u; }
        if (ctx->pc != 0x291EF8u) { return; }
    }
    ctx->pc = 0x291EF8u;
    // 0x291ef8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291efc: 0xc0a1318  jal         func_284C60
    ctx->pc = 0x291EFCu;
    SET_GPR_U32(ctx, 31, 0x291F04u);
    ctx->pc = 0x291F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291EFCu;
            // 0x291f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284C60u;
    if (runtime->hasFunction(0x284C60u)) {
        auto targetFn = runtime->lookupFunction(0x284C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F04u; }
        if (ctx->pc != 0x291F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284C60_0x284c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F04u; }
        if (ctx->pc != 0x291F04u) { return; }
    }
    ctx->pc = 0x291F04u;
    // 0x291f04: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x291F04u;
    {
        const bool branch_taken_0x291f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291F04u;
            // 0x291f08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f04) {
            ctx->pc = 0x292034u;
            goto label_292034;
        }
    }
    ctx->pc = 0x291F0Cu;
label_291f0c:
    // 0x291f0c: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x291f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x291f10: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x291f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x291f14: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291F14u;
    SET_GPR_U32(ctx, 31, 0x291F1Cu);
    ctx->pc = 0x291F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F14u;
            // 0x291f18: 0x2412ffca  addiu       $s2, $zero, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F1Cu; }
        if (ctx->pc != 0x291F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F1Cu; }
        if (ctx->pc != 0x291F1Cu) { return; }
    }
    ctx->pc = 0x291F1Cu;
    // 0x291f1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f20: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x291f20u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x291f24: 0x0  nop
    ctx->pc = 0x291f24u;
    // NOP
label_291f28:
    // 0x291f28: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x291f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x291f2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x291f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x291f30: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x291f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x291f34: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x291F34u;
    {
        const bool branch_taken_0x291f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291f34) {
            ctx->pc = 0x291F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x291F34u;
            // 0x291f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292020u;
            goto label_292020;
        }
    }
    ctx->pc = 0x291F3Cu;
    // 0x291f3c: 0x101503  sra         $v0, $s0, 20
    ctx->pc = 0x291f3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
    // 0x291f40: 0x2644fc01  addiu       $a0, $s2, -0x3FF
    ctx->pc = 0x291f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966273));
    // 0x291f44: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x291f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x291f48: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x291f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x291f4c: 0x1227c2  srl         $a0, $s2, 31
    ctx->pc = 0x291f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x291f50: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x291f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x291f54: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x291f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x291f58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x291f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x291f5c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x291f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x291f60: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x291f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x291f64: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x291f64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x291f68: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x291F68u;
    SET_GPR_U32(ctx, 31, 0x291F70u);
    ctx->pc = 0x291F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F68u;
            // 0x291f6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F70u; }
        if (ctx->pc != 0x291F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F70u; }
        if (ctx->pc != 0x291F70u) { return; }
    }
    ctx->pc = 0x291F70u;
    // 0x291f70: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x291f70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f74: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x291f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291f78: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x291f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x291f7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x291f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x291f80: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x291f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x291f84: 0x658825  or          $s1, $v1, $a1
    ctx->pc = 0x291f84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x291f88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x291f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f8c: 0xc0a4616  jal         func_291858
    ctx->pc = 0x291F8Cu;
    SET_GPR_U32(ctx, 31, 0x291F94u);
    ctx->pc = 0x291F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F8Cu;
            // 0x291f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291858u;
    if (runtime->hasFunction(0x291858u)) {
        auto targetFn = runtime->lookupFunction(0x291858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F94u; }
        if (ctx->pc != 0x291F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291858_0x291858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F94u; }
        if (ctx->pc != 0x291F94u) { return; }
    }
    ctx->pc = 0x291F94u;
    // 0x291f94: 0x3405f567  ori         $a1, $zero, 0xF567
    ctx->pc = 0x291f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62823);
    // 0x291f98: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x291f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x291f9c: 0x34a5fbcc  ori         $a1, $a1, 0xFBCC
    ctx->pc = 0x291f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64460);
    // 0x291fa0: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x291fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x291fa4: 0x34a58f89  ori         $a1, $a1, 0x8F89
    ctx->pc = 0x291fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36745);
    // 0x291fa8: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x291fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x291fac: 0x34a50b36  ori         $a1, $a1, 0xB36
    ctx->pc = 0x291facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2870);
    // 0x291fb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fb4: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291FB4u;
    SET_GPR_U32(ctx, 31, 0x291FBCu);
    ctx->pc = 0x291FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291FB4u;
            // 0x291fb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FBCu; }
        if (ctx->pc != 0x291FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FBCu; }
        if (ctx->pc != 0x291FBCu) { return; }
    }
    ctx->pc = 0x291FBCu;
    // 0x291fbc: 0x3405ff6f  ori         $a1, $zero, 0xFF6F
    ctx->pc = 0x291fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65391);
    // 0x291fc0: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x291fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x291fc4: 0x34a5b7b1  ori         $a1, $a1, 0xB7B1
    ctx->pc = 0x291fc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47025);
    // 0x291fc8: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x291fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x291fcc: 0x34a5a4dc  ori         $a1, $a1, 0xA4DC
    ctx->pc = 0x291fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42204);
    // 0x291fd0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x291fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x291fd4: 0x34a5050e  ori         $a1, $a1, 0x50E
    ctx->pc = 0x291fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1294);
    // 0x291fd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fdc: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x291FDCu;
    SET_GPR_U32(ctx, 31, 0x291FE4u);
    ctx->pc = 0x291FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291FDCu;
            // 0x291fe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FE4u; }
        if (ctx->pc != 0x291FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FE4u; }
        if (ctx->pc != 0x291FE4u) { return; }
    }
    ctx->pc = 0x291FE4u;
    // 0x291fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fe8: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x291FE8u;
    SET_GPR_U32(ctx, 31, 0x291FF0u);
    ctx->pc = 0x291FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291FE8u;
            // 0x291fec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FF0u; }
        if (ctx->pc != 0x291FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FF0u; }
        if (ctx->pc != 0x291FF0u) { return; }
    }
    ctx->pc = 0x291FF0u;
    // 0x291ff0: 0x3405ff4d  ori         $a1, $zero, 0xFF4D
    ctx->pc = 0x291ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65357);
    // 0x291ff4: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x291ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x291ff8: 0x34a5826a  ori         $a1, $a1, 0x826A
    ctx->pc = 0x291ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33386);
    // 0x291ffc: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x291ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x292000: 0x34a59f60  ori         $a1, $a1, 0x9F60
    ctx->pc = 0x292000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40800);
    // 0x292004: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x292004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x292008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29200c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x29200Cu;
    SET_GPR_U32(ctx, 31, 0x292014u);
    ctx->pc = 0x292010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29200Cu;
            // 0x292010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292014u; }
        if (ctx->pc != 0x292014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292014u; }
        if (ctx->pc != 0x292014u) { return; }
    }
    ctx->pc = 0x292014u;
    // 0x292014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x292018u;
    {
        const bool branch_taken_0x292018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292018u;
            // 0x29201c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292018) {
            ctx->pc = 0x292028u;
            goto label_292028;
        }
    }
    ctx->pc = 0x292020u;
label_292020:
    // 0x292020: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x292020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292024: 0x0  nop
    ctx->pc = 0x292024u;
    // NOP
label_292028:
    // 0x292028: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x292028u;
    SET_GPR_U32(ctx, 31, 0x292030u);
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292030u; }
        if (ctx->pc != 0x292030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292030u; }
        if (ctx->pc != 0x292030u) { return; }
    }
    ctx->pc = 0x292030u;
label_292030:
    // 0x292030: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x292030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_292034:
    // 0x292034: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x292034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292038: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x292038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29203c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29203cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292040: 0x3e00008  jr          $ra
    ctx->pc = 0x292040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292040u;
            // 0x292044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x291EE8u: goto label_291ee8;
            case 0x291F0Cu: goto label_291f0c;
            case 0x291F28u: goto label_291f28;
            case 0x292020u: goto label_292020;
            case 0x292028u: goto label_292028;
            case 0x292030u: goto label_292030;
            case 0x292034u: goto label_292034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292048u;
}
