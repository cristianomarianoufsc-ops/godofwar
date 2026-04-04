#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00129A18
// Address: 0x129a18 - 0x12a2a8
void sub_00129A18_0x129a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129A18_0x129a18");
#endif

    ctx->pc = 0x129a18u;

    // 0x129a18: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x129a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x129a1c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x129a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x129a20: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x129a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x129a24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x129a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a28: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x129a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x129a2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x129a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a30: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x129a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x129a34: 0x2664001c  addiu       $a0, $s3, 0x1C
    ctx->pc = 0x129a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x129a38: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x129a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x129a3c: 0x3c17002c  lui         $s7, 0x2C
    ctx->pc = 0x129a3cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)44 << 16));
    // 0x129a40: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x129a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x129a44: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x129a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x129a48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x129a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x129a4c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x129a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x129a50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x129a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x129a54: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x129a54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x129a58: 0xc08fc72  jal         func_23F1C8
    ctx->pc = 0x129A58u;
    SET_GPR_U32(ctx, 31, 0x129A60u);
    ctx->pc = 0x129A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129A58u;
            // 0x129a5c: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F1C8u;
    if (runtime->hasFunction(0x23F1C8u)) {
        auto targetFn = runtime->lookupFunction(0x23F1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A60u; }
        if (ctx->pc != 0x129A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f1c8_0x23f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A60u; }
        if (ctx->pc != 0x129A60u) { return; }
    }
    ctx->pc = 0x129A60u;
    // 0x129a60: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x129a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x129a64: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x129a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x129a68: 0xc04fa88  jal         func_13EA20
    ctx->pc = 0x129A68u;
    SET_GPR_U32(ctx, 31, 0x129A70u);
    ctx->pc = 0x129A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129A68u;
            // 0x129a6c: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EA20u;
    if (runtime->hasFunction(0x13EA20u)) {
        auto targetFn = runtime->lookupFunction(0x13EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A70u; }
        if (ctx->pc != 0x129A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EA20_0x13ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A70u; }
        if (ctx->pc != 0x129A70u) { return; }
    }
    ctx->pc = 0x129A70u;
    // 0x129a70: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x129a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x129a74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a78: 0xc04fa96  jal         func_13EA58
    ctx->pc = 0x129A78u;
    SET_GPR_U32(ctx, 31, 0x129A80u);
    ctx->pc = 0x129A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129A78u;
            // 0x129a7c: 0x24a5baf0  addiu       $a1, $a1, -0x4510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EA58u;
    if (runtime->hasFunction(0x13EA58u)) {
        auto targetFn = runtime->lookupFunction(0x13EA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A80u; }
        if (ctx->pc != 0x129A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EA58_0x13ea58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A80u; }
        if (ctx->pc != 0x129A80u) { return; }
    }
    ctx->pc = 0x129A80u;
    // 0x129a80: 0xc04f824  jal         func_13E090
    ctx->pc = 0x129A80u;
    SET_GPR_U32(ctx, 31, 0x129A88u);
    ctx->pc = 0x129A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129A80u;
            // 0x129a84: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A88u; }
        if (ctx->pc != 0x129A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A88u; }
        if (ctx->pc != 0x129A88u) { return; }
    }
    ctx->pc = 0x129A88u;
    // 0x129a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a8c: 0x240503c0  addiu       $a1, $zero, 0x3C0
    ctx->pc = 0x129a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x129a90: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x129A90u;
    SET_GPR_U32(ctx, 31, 0x129A98u);
    ctx->pc = 0x129A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129A90u;
            // 0x129a94: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A98u; }
        if (ctx->pc != 0x129A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A98u; }
        if (ctx->pc != 0x129A98u) { return; }
    }
    ctx->pc = 0x129A98u;
    // 0x129a98: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x129a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x129a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129aa0: 0xc05a372  jal         func_168DC8
    ctx->pc = 0x129AA0u;
    SET_GPR_U32(ctx, 31, 0x129AA8u);
    ctx->pc = 0x129AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129AA0u;
            // 0x129aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168DC8u;
    if (runtime->hasFunction(0x168DC8u)) {
        auto targetFn = runtime->lookupFunction(0x168DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129AA8u; }
        if (ctx->pc != 0x129AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168DC8_0x168dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129AA8u; }
        if (ctx->pc != 0x129AA8u) { return; }
    }
    ctx->pc = 0x129AA8u;
    // 0x129aa8: 0x8c4303ac  lw          $v1, 0x3AC($v0)
    ctx->pc = 0x129aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 940)));
    // 0x129aac: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x129aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x129ab0: 0x34840055  ori         $a0, $a0, 0x55
    ctx->pc = 0x129ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)85);
    // 0x129ab4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x129ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x129ab8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x129ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x129abc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x129abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x129ac0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x129AC0u;
    SET_GPR_U32(ctx, 31, 0x129AC8u);
    ctx->pc = 0x129AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129AC0u;
            // 0x129ac4: 0xac4303ac  sw          $v1, 0x3AC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 940), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129AC8u; }
        if (ctx->pc != 0x129AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129AC8u; }
        if (ctx->pc != 0x129AC8u) { return; }
    }
    ctx->pc = 0x129AC8u;
    // 0x129ac8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x129ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x129acc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ad0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x129AD0u;
    SET_GPR_U32(ctx, 31, 0x129AD8u);
    ctx->pc = 0x129AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129AD0u;
            // 0x129ad4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129AD8u; }
        if (ctx->pc != 0x129AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129AD8u; }
        if (ctx->pc != 0x129AD8u) { return; }
    }
    ctx->pc = 0x129AD8u;
    // 0x129ad8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x129ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x129adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ae0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x129ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x129ae4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x129ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x129ae8: 0x8c6503ac  lw          $a1, 0x3AC($v1)
    ctx->pc = 0x129ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 940)));
    // 0x129aec: 0x2442cb18  addiu       $v0, $v0, -0x34E8
    ctx->pc = 0x129aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953752));
    // 0x129af0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x129af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129af4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x129af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x129af8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x129af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x129afc: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x129afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x129b00: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x129b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x129b04: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x129b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x129b08: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x129B08u;
    SET_GPR_U32(ctx, 31, 0x129B10u);
    ctx->pc = 0x129B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129B08u;
            // 0x129b0c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B10u; }
        if (ctx->pc != 0x129B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B10u; }
        if (ctx->pc != 0x129B10u) { return; }
    }
    ctx->pc = 0x129B10u;
    // 0x129b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x129b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b18: 0x26e2fd30  addiu       $v0, $s7, -0x2D0
    ctx->pc = 0x129b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966576));
    // 0x129b1c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x129b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x129b20: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x129b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x129b24: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x129b24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b28: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x129b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x129b2c: 0x0  nop
    ctx->pc = 0x129b2cu;
    // NOP
label_129b30:
    // 0x129b30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x129b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129b34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x129b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x129b38: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x129b38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x129b3c: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x129b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x129b40: 0x0  nop
    ctx->pc = 0x129b40u;
    // NOP
    // 0x129b44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129B44u;
    {
        const bool branch_taken_0x129b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B44u;
            // 0x129b48: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b44) {
            ctx->pc = 0x129B30u;
            runtime->cooperativeGuestYield();
            goto label_129b30;
        }
    }
    ctx->pc = 0x129B4Cu;
    // 0x129b4c: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x129b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x129b50: 0x3c16002c  lui         $s6, 0x2C
    ctx->pc = 0x129b50u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)44 << 16));
    // 0x129b54: 0xc04f824  jal         func_13E090
    ctx->pc = 0x129B54u;
    SET_GPR_U32(ctx, 31, 0x129B5Cu);
    ctx->pc = 0x129B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129B54u;
            // 0x129b58: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B5Cu; }
        if (ctx->pc != 0x129B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B5Cu; }
        if (ctx->pc != 0x129B5Cu) { return; }
    }
    ctx->pc = 0x129B5Cu;
    // 0x129b5c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x129b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x129b60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b64: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x129B64u;
    SET_GPR_U32(ctx, 31, 0x129B6Cu);
    ctx->pc = 0x129B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129B64u;
            // 0x129b68: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B6Cu; }
        if (ctx->pc != 0x129B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B6Cu; }
        if (ctx->pc != 0x129B6Cu) { return; }
    }
    ctx->pc = 0x129B6Cu;
    // 0x129b6c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x129b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b74: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x129b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129b78: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x129b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x129b7c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x129b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x129b80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x129b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129b84: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x129b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x129b88: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x129B88u;
    SET_GPR_U32(ctx, 31, 0x129B90u);
    ctx->pc = 0x129B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129B88u;
            // 0x129b8c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B90u; }
        if (ctx->pc != 0x129B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B90u; }
        if (ctx->pc != 0x129B90u) { return; }
    }
    ctx->pc = 0x129B90u;
    // 0x129b90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x129b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129b94: 0x26c4fd10  addiu       $a0, $s6, -0x2F0
    ctx->pc = 0x129b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966544));
    // 0x129b98: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x129b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x129b9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x129b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129ba0: 0x24434000  addiu       $v1, $v0, 0x4000
    ctx->pc = 0x129ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x129ba4: 0xae040658  sw          $a0, 0x658($s0)
    ctx->pc = 0x129ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 4));
    // 0x129ba8: 0xae050660  sw          $a1, 0x660($s0)
    ctx->pc = 0x129ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 5));
    // 0x129bac: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x129bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x129bb0: 0xae060664  sw          $a2, 0x664($s0)
    ctx->pc = 0x129bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 6));
    // 0x129bb4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x129bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x129bb8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x129bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x129bbc: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x129bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x129bc0: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x129bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x129bc4: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x129bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x129bc8: 0xae710014  sw          $s1, 0x14($s3)
    ctx->pc = 0x129bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 17));
    // 0x129bcc: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x129bccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x129bd0: 0x26a2e848  addiu       $v0, $s5, -0x17B8
    ctx->pc = 0x129bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
    // 0x129bd4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x129bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129bd8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x129bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x129bdc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x129bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129be0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x129be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x129be4: 0xc057c7a  jal         func_15F1E8
    ctx->pc = 0x129BE4u;
    SET_GPR_U32(ctx, 31, 0x129BECu);
    ctx->pc = 0x129BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129BE4u;
            // 0x129be8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E8u;
    if (runtime->hasFunction(0x15F1E8u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BECu; }
        if (ctx->pc != 0x129BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f1e8_0x15f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BECu; }
        if (ctx->pc != 0x129BECu) { return; }
    }
    ctx->pc = 0x129BECu;
    // 0x129bec: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x129becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x129bf0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x129bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x129bf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x129bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129bf8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x129bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129bfc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x129bfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129c00: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x129C00u;
    {
        const bool branch_taken_0x129c00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129c00) {
            ctx->pc = 0x129C18u;
            goto label_129c18;
        }
    }
    ctx->pc = 0x129C08u;
    // 0x129c08: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x129c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x129c0c: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x129c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x129c10: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x129c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x129c14: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x129c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_129c18:
    // 0x129c18: 0xc04f824  jal         func_13E090
    ctx->pc = 0x129C18u;
    SET_GPR_U32(ctx, 31, 0x129C20u);
    ctx->pc = 0x129C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129C18u;
            // 0x129c1c: 0x3c1e002c  lui         $fp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C20u; }
        if (ctx->pc != 0x129C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C20u; }
        if (ctx->pc != 0x129C20u) { return; }
    }
    ctx->pc = 0x129C20u;
    // 0x129c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c24: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x129c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x129c28: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x129C28u;
    SET_GPR_U32(ctx, 31, 0x129C30u);
    ctx->pc = 0x129C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129C28u;
            // 0x129c2c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C30u; }
        if (ctx->pc != 0x129C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C30u; }
        if (ctx->pc != 0x129C30u) { return; }
    }
    ctx->pc = 0x129C30u;
    // 0x129c30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x129c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129c38: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x129c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x129c3c: 0x27c4caf0  addiu       $a0, $fp, -0x3510
    ctx->pc = 0x129c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953712));
    // 0x129c40: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x129c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x129c44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x129c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129c48: 0x8c4203ac  lw          $v0, 0x3AC($v0)
    ctx->pc = 0x129c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 940)));
    // 0x129c4c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x129c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x129c50: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x129c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x129c54: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x129c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x129c58: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x129c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x129c5c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x129c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x129c60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x129c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129c64: 0x0  nop
    ctx->pc = 0x129c64u;
    // NOP
label_129c68:
    // 0x129c68: 0x0  nop
    ctx->pc = 0x129c68u;
    // NOP
    // 0x129c6c: 0x0  nop
    ctx->pc = 0x129c6cu;
    // NOP
    // 0x129c70: 0x0  nop
    ctx->pc = 0x129c70u;
    // NOP
    // 0x129c74: 0x0  nop
    ctx->pc = 0x129c74u;
    // NOP
    // 0x129c78: 0x0  nop
    ctx->pc = 0x129c78u;
    // NOP
    // 0x129c7c: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129C7Cu;
    {
        const bool branch_taken_0x129c7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x129C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C7Cu;
            // 0x129c80: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c7c) {
            ctx->pc = 0x129C68u;
            runtime->cooperativeGuestYield();
            goto label_129c68;
        }
    }
    ctx->pc = 0x129C84u;
    // 0x129c84: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x129C84u;
    SET_GPR_U32(ctx, 31, 0x129C8Cu);
    ctx->pc = 0x129C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129C84u;
            // 0x129c88: 0x24040670  addiu       $a0, $zero, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C8Cu; }
        if (ctx->pc != 0x129C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C8Cu; }
        if (ctx->pc != 0x129C8Cu) { return; }
    }
    ctx->pc = 0x129C8Cu;
    // 0x129c8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x129c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c94: 0x26e2fd30  addiu       $v0, $s7, -0x2D0
    ctx->pc = 0x129c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966576));
    // 0x129c98: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x129c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x129c9c: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x129c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x129ca0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x129ca0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ca4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x129ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_129ca8:
    // 0x129ca8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x129ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129cac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x129cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x129cb0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x129cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x129cb4: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x129cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x129cb8: 0x0  nop
    ctx->pc = 0x129cb8u;
    // NOP
    // 0x129cbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129CBCu;
    {
        const bool branch_taken_0x129cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129CBCu;
            // 0x129cc0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cbc) {
            ctx->pc = 0x129CA8u;
            runtime->cooperativeGuestYield();
            goto label_129ca8;
        }
    }
    ctx->pc = 0x129CC4u;
    // 0x129cc4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x129cc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x129cc8: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x129cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x129ccc: 0xfc800638  sd          $zero, 0x638($a0)
    ctx->pc = 0x129cccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
    // 0x129cd0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x129cd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129cd4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x129CD4u;
    SET_GPR_U32(ctx, 31, 0x129CDCu);
    ctx->pc = 0x129CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129CD4u;
            // 0x129cd8: 0xfba10020  sqc2        $vf1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129CDCu; }
        if (ctx->pc != 0x129CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129CDCu; }
        if (ctx->pc != 0x129CDCu) { return; }
    }
    ctx->pc = 0x129CDCu;
    // 0x129cdc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x129cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x129ce0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ce4: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x129CE4u;
    SET_GPR_U32(ctx, 31, 0x129CECu);
    ctx->pc = 0x129CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129CE4u;
            // 0x129ce8: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129CECu; }
        if (ctx->pc != 0x129CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129CECu; }
        if (ctx->pc != 0x129CECu) { return; }
    }
    ctx->pc = 0x129CECu;
    // 0x129cec: 0x24432800  addiu       $v1, $v0, 0x2800
    ctx->pc = 0x129cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x129cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cf4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x129cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x129cf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x129cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129cfc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x129cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x129d00: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x129d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x129d04: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x129D04u;
    SET_GPR_U32(ctx, 31, 0x129D0Cu);
    ctx->pc = 0x129D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129D04u;
            // 0x129d08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D0Cu; }
        if (ctx->pc != 0x129D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D0Cu; }
        if (ctx->pc != 0x129D0Cu) { return; }
    }
    ctx->pc = 0x129D0Cu;
    // 0x129d0c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x129d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129d10: 0x26c2fd10  addiu       $v0, $s6, -0x2F0
    ctx->pc = 0x129d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966544));
    // 0x129d14: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x129d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x129d18: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x129d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x129d1c: 0x24621400  addiu       $v0, $v1, 0x1400
    ctx->pc = 0x129d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x129d20: 0xae040660  sw          $a0, 0x660($s0)
    ctx->pc = 0x129d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 4));
    // 0x129d24: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x129d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x129d28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x129d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x129d2c: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x129d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
    // 0x129d30: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x129d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x129d34: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x129d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x129d38: 0xae140664  sw          $s4, 0x664($s0)
    ctx->pc = 0x129d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 20));
    // 0x129d3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x129d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x129d40: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x129d40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129d44: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x129d44u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x129d48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x129d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x129d4c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x129d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x129d50: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x129d50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x129d54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x129d58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x129d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x129d5c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x129d5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x129d60: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x129d60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x129d64: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x129d64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x129d68: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x129d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x129d6c: 0xae340054  sw          $s4, 0x54($s1)
    ctx->pc = 0x129d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 20));
    // 0x129d70: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x129d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
    // 0x129d74: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x129d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x129d78: 0xe6350060  swc1        $f21, 0x60($s1)
    ctx->pc = 0x129d78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x129d7c: 0xe6340064  swc1        $f20, 0x64($s1)
    ctx->pc = 0x129d7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x129d80: 0xfe200068  sd          $zero, 0x68($s1)
    ctx->pc = 0x129d80u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 0));
    // 0x129d84: 0xae340070  sw          $s4, 0x70($s1)
    ctx->pc = 0x129d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 20));
    // 0x129d88: 0xae71000c  sw          $s1, 0xC($s3)
    ctx->pc = 0x129d88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 17));
    // 0x129d8c: 0x26a2e848  addiu       $v0, $s5, -0x17B8
    ctx->pc = 0x129d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
    // 0x129d90: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x129d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x129d94: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x129d94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x129d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129d9c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x129d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x129da0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x129da0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129da4: 0xc057c7a  jal         func_15F1E8
    ctx->pc = 0x129DA4u;
    SET_GPR_U32(ctx, 31, 0x129DACu);
    ctx->pc = 0x129DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129DA4u;
            // 0x129da8: 0x7bb20020  lq          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E8u;
    if (runtime->hasFunction(0x15F1E8u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129DACu; }
        if (ctx->pc != 0x129DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f1e8_0x15f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129DACu; }
        if (ctx->pc != 0x129DACu) { return; }
    }
    ctx->pc = 0x129DACu;
    // 0x129dac: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x129dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x129db0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x129db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x129db4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129DB4u;
    {
        const bool branch_taken_0x129db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129DB4u;
            // 0x129db8: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129db4) {
            ctx->pc = 0x129DD0u;
            goto label_129dd0;
        }
    }
    ctx->pc = 0x129DBCu;
    // 0x129dbc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x129dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x129dc0: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x129dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x129dc4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x129dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x129dc8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x129dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x129dcc: 0x0  nop
    ctx->pc = 0x129dccu;
    // NOP
label_129dd0:
    // 0x129dd0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x129dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x129dd4: 0x50540006  beql        $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x129DD4u;
    {
        const bool branch_taken_0x129dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x129dd4) {
            ctx->pc = 0x129DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129DD4u;
            // 0x129dd8: 0x8c620058  lw          $v0, 0x58($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129DF0u;
            goto label_129df0;
        }
    }
    ctx->pc = 0x129DDCu;
    // 0x129ddc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x129ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x129de0: 0xac740054  sw          $s4, 0x54($v1)
    ctx->pc = 0x129de0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 20));
    // 0x129de4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x129de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x129de8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x129de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x129dec: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x129decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_129df0:
    // 0x129df0: 0x50500006  beql        $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129DF0u;
    {
        const bool branch_taken_0x129df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x129df0) {
            ctx->pc = 0x129DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129DF0u;
            // 0x129df4: 0x78620020  lq          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129E0Cu;
            goto label_129e0c;
        }
    }
    ctx->pc = 0x129DF8u;
    // 0x129df8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x129df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x129dfc: 0xac700058  sw          $s0, 0x58($v1)
    ctx->pc = 0x129dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 16));
    // 0x129e00: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x129e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x129e04: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x129e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x129e08: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x129e08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_129e0c:
    // 0x129e0c: 0x724210a8  pceqw       $v0, $s2, $v0
    ctx->pc = 0x129e0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 2)));
    // 0x129e10: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x129e10u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x129e14: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x129e14u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x129e18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x129e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x129e1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129e20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x129e20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x129e24: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x129E24u;
    {
        const bool branch_taken_0x129e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e24) {
            ctx->pc = 0x129E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129E24u;
            // 0x129e28: 0xdc620068  ld          $v0, 0x68($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129E48u;
            goto label_129e48;
        }
    }
    ctx->pc = 0x129E2Cu;
    // 0x129e2c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x129e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x129e30: 0x7c720040  sq          $s2, 0x40($v1)
    ctx->pc = 0x129e30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 18));
    // 0x129e34: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x129e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x129e38: 0x7c720030  sq          $s2, 0x30($v1)
    ctx->pc = 0x129e38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 18));
    // 0x129e3c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x129e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x129e40: 0x7c720020  sq          $s2, 0x20($v1)
    ctx->pc = 0x129e40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 18));
    // 0x129e44: 0xdc620068  ld          $v0, 0x68($v1)
    ctx->pc = 0x129e44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 104)));
label_129e48:
    // 0x129e48: 0xe4750060  swc1        $f21, 0x60($v1)
    ctx->pc = 0x129e48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x129e4c: 0xe4740064  swc1        $f20, 0x64($v1)
    ctx->pc = 0x129e4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x129e50: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129E50u;
    {
        const bool branch_taken_0x129e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x129E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E50u;
            // 0x129e54: 0xac60005c  sw          $zero, 0x5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e50) {
            ctx->pc = 0x129E68u;
            goto label_129e68;
        }
    }
    ctx->pc = 0x129E58u;
    // 0x129e58: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x129e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x129e5c: 0xfc640068  sd          $a0, 0x68($v1)
    ctx->pc = 0x129e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
    // 0x129e60: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x129e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x129e64: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x129e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_129e68:
    // 0x129e68: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x129e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x129e6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129E6Cu;
    {
        const bool branch_taken_0x129e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e6c) {
            ctx->pc = 0x129E84u;
            goto label_129e84;
        }
    }
    ctx->pc = 0x129E74u;
    // 0x129e74: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x129e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x129e78: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x129e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x129e7c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x129e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x129e80: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x129e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_129e84:
    // 0x129e84: 0xc04f824  jal         func_13E090
    ctx->pc = 0x129E84u;
    SET_GPR_U32(ctx, 31, 0x129E8Cu);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E8Cu; }
        if (ctx->pc != 0x129E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E8Cu; }
        if (ctx->pc != 0x129E8Cu) { return; }
    }
    ctx->pc = 0x129E8Cu;
    // 0x129e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e90: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x129e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x129e94: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x129E94u;
    SET_GPR_U32(ctx, 31, 0x129E9Cu);
    ctx->pc = 0x129E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129E94u;
            // 0x129e98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E9Cu; }
        if (ctx->pc != 0x129E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E9Cu; }
        if (ctx->pc != 0x129E9Cu) { return; }
    }
    ctx->pc = 0x129E9Cu;
    // 0x129e9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ea0: 0x27c4caf0  addiu       $a0, $fp, -0x3510
    ctx->pc = 0x129ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953712));
    // 0x129ea4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x129ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x129ea8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x129ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129eac: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x129eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x129eb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x129eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129eb4: 0x8c4203ac  lw          $v0, 0x3AC($v0)
    ctx->pc = 0x129eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 940)));
    // 0x129eb8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x129eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x129ebc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x129ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x129ec0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x129ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x129ec4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x129ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x129ec8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x129ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x129ecc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x129eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_129ed0:
    // 0x129ed0: 0x0  nop
    ctx->pc = 0x129ed0u;
    // NOP
    // 0x129ed4: 0x0  nop
    ctx->pc = 0x129ed4u;
    // NOP
    // 0x129ed8: 0x0  nop
    ctx->pc = 0x129ed8u;
    // NOP
    // 0x129edc: 0x0  nop
    ctx->pc = 0x129edcu;
    // NOP
    // 0x129ee0: 0x0  nop
    ctx->pc = 0x129ee0u;
    // NOP
    // 0x129ee4: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129EE4u;
    {
        const bool branch_taken_0x129ee4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x129EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129EE4u;
            // 0x129ee8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ee4) {
            ctx->pc = 0x129ED0u;
            runtime->cooperativeGuestYield();
            goto label_129ed0;
        }
    }
    ctx->pc = 0x129EECu;
    // 0x129eec: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x129EECu;
    SET_GPR_U32(ctx, 31, 0x129EF4u);
    ctx->pc = 0x129EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129EECu;
            // 0x129ef0: 0x24040670  addiu       $a0, $zero, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129EF4u; }
        if (ctx->pc != 0x129EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129EF4u; }
        if (ctx->pc != 0x129EF4u) { return; }
    }
    ctx->pc = 0x129EF4u;
    // 0x129ef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x129ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129efc: 0x26e2fd30  addiu       $v0, $s7, -0x2D0
    ctx->pc = 0x129efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966576));
    // 0x129f00: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x129f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x129f04: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x129f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x129f08: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x129f08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f0c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x129f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_129f10:
    // 0x129f10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x129f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129f14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x129f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x129f18: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x129f18u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x129f1c: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x129f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x129f20: 0x0  nop
    ctx->pc = 0x129f20u;
    // NOP
    // 0x129f24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129F24u;
    {
        const bool branch_taken_0x129f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F24u;
            // 0x129f28: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f24) {
            ctx->pc = 0x129F10u;
            runtime->cooperativeGuestYield();
            goto label_129f10;
        }
    }
    ctx->pc = 0x129F2Cu;
    // 0x129f2c: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x129f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x129f30: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x129f30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129f34: 0xc04f824  jal         func_13E090
    ctx->pc = 0x129F34u;
    SET_GPR_U32(ctx, 31, 0x129F3Cu);
    ctx->pc = 0x129F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F34u;
            // 0x129f38: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F3Cu; }
        if (ctx->pc != 0x129F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F3Cu; }
        if (ctx->pc != 0x129F3Cu) { return; }
    }
    ctx->pc = 0x129F3Cu;
    // 0x129f3c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x129f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x129f40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f44: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x129F44u;
    SET_GPR_U32(ctx, 31, 0x129F4Cu);
    ctx->pc = 0x129F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F44u;
            // 0x129f48: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F4Cu; }
        if (ctx->pc != 0x129F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F4Cu; }
        if (ctx->pc != 0x129F4Cu) { return; }
    }
    ctx->pc = 0x129F4Cu;
    // 0x129f4c: 0x24432800  addiu       $v1, $v0, 0x2800
    ctx->pc = 0x129f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x129f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f54: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x129f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x129f58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x129f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129f5c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x129f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x129f60: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x129f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x129f64: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x129F64u;
    SET_GPR_U32(ctx, 31, 0x129F6Cu);
    ctx->pc = 0x129F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F64u;
            // 0x129f68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F6Cu; }
        if (ctx->pc != 0x129F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F6Cu; }
        if (ctx->pc != 0x129F6Cu) { return; }
    }
    ctx->pc = 0x129F6Cu;
    // 0x129f6c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x129f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129f70: 0x26c2fd10  addiu       $v0, $s6, -0x2F0
    ctx->pc = 0x129f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966544));
    // 0x129f74: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x129f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x129f78: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x129f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x129f7c: 0x24621400  addiu       $v0, $v1, 0x1400
    ctx->pc = 0x129f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x129f80: 0xae040660  sw          $a0, 0x660($s0)
    ctx->pc = 0x129f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 4));
    // 0x129f84: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x129f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x129f88: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x129f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x129f8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x129f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x129f90: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x129f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
    // 0x129f94: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x129f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x129f98: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x129f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x129f9c: 0xae140664  sw          $s4, 0x664($s0)
    ctx->pc = 0x129f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 20));
    // 0x129fa0: 0x7e320040  sq          $s2, 0x40($s1)
    ctx->pc = 0x129fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 18));
    // 0x129fa4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x129fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x129fa8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x129fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x129fac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x129facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x129fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x129fb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x129fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x129fb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x129fbc: 0x7e320020  sq          $s2, 0x20($s1)
    ctx->pc = 0x129fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 18));
    // 0x129fc0: 0x7e320030  sq          $s2, 0x30($s1)
    ctx->pc = 0x129fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 18));
    // 0x129fc4: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x129fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x129fc8: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x129fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x129fcc: 0xae340054  sw          $s4, 0x54($s1)
    ctx->pc = 0x129fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 20));
    // 0x129fd0: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x129fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x129fd4: 0xe6350060  swc1        $f21, 0x60($s1)
    ctx->pc = 0x129fd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x129fd8: 0xe6340064  swc1        $f20, 0x64($s1)
    ctx->pc = 0x129fd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x129fdc: 0xfe200068  sd          $zero, 0x68($s1)
    ctx->pc = 0x129fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 0));
    // 0x129fe0: 0xae340070  sw          $s4, 0x70($s1)
    ctx->pc = 0x129fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 20));
    // 0x129fe4: 0xae710010  sw          $s1, 0x10($s3)
    ctx->pc = 0x129fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
    // 0x129fe8: 0x26a2e848  addiu       $v0, $s5, -0x17B8
    ctx->pc = 0x129fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
    // 0x129fec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x129fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x129ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x129ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ff4: 0x24077fff  addiu       $a3, $zero, 0x7FFF
    ctx->pc = 0x129ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x129ff8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x129ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ffc: 0xc057c7a  jal         func_15F1E8
    ctx->pc = 0x129FFCu;
    SET_GPR_U32(ctx, 31, 0x12A004u);
    ctx->pc = 0x12A000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129FFCu;
            // 0x12a000: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E8u;
    if (runtime->hasFunction(0x15F1E8u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A004u; }
        if (ctx->pc != 0x12A004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f1e8_0x15f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A004u; }
        if (ctx->pc != 0x12A004u) { return; }
    }
    ctx->pc = 0x12A004u;
    // 0x12a004: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x12a004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x12a008: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x12a008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12a00c: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x12a00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12a010: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x12a010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12a014: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x12a014u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x12a018: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x12a018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12a01c: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x12a01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12a020: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x12a020u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x12a024: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x12a024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x12a028: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x12a028u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12a02c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12a030: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A030u;
    {
        const bool branch_taken_0x12a030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A030u;
            // 0x12a034: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a030) {
            ctx->pc = 0x12A048u;
            goto label_12a048;
        }
    }
    ctx->pc = 0x12A038u;
    // 0x12a038: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x12a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12a03c: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x12a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x12a040: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12a040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x12a044: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x12a044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_12a048:
    // 0x12a048: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x12a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x12a04c: 0x50470006  beql        $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A04Cu;
    {
        const bool branch_taken_0x12a04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x12a04c) {
            ctx->pc = 0x12A050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A04Cu;
            // 0x12a050: 0x8ca20058  lw          $v0, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A068u;
            goto label_12a068;
        }
    }
    ctx->pc = 0x12A054u;
    // 0x12a054: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x12a054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12a058: 0xaca70054  sw          $a3, 0x54($a1)
    ctx->pc = 0x12a058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 7));
    // 0x12a05c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x12a060: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x12a060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x12a064: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x12a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_12a068:
    // 0x12a068: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A068u;
    {
        const bool branch_taken_0x12a068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a068) {
            ctx->pc = 0x12A06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A068u;
            // 0x12a06c: 0x78a20020  lq          $v0, 0x20($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A084u;
            goto label_12a084;
        }
    }
    ctx->pc = 0x12A070u;
    // 0x12a070: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x12a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12a074: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x12a074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
    // 0x12a078: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12a078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x12a07c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x12a07cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x12a080: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x12a080u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_12a084:
    // 0x12a084: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x12a084u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a088: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x12a088u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12a08c: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x12a08cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12a090: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12a090u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12a094: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12a094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12a098: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a09c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12a09cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12a0a0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A0A0u;
    {
        const bool branch_taken_0x12a0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a0a0) {
            ctx->pc = 0x12A0A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0A0u;
            // 0x12a0a4: 0xdca20068  ld          $v0, 0x68($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A0C4u;
            goto label_12a0c4;
        }
    }
    ctx->pc = 0x12A0A8u;
    // 0x12a0a8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x12a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12a0ac: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x12a0acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x12a0b0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12a0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x12a0b4: 0x7ca30040  sq          $v1, 0x40($a1)
    ctx->pc = 0x12a0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 3));
    // 0x12a0b8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x12a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x12a0bc: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x12a0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x12a0c0: 0xdca20068  ld          $v0, 0x68($a1)
    ctx->pc = 0x12a0c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 104)));
label_12a0c4:
    // 0x12a0c4: 0xe4b50060  swc1        $f21, 0x60($a1)
    ctx->pc = 0x12a0c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x12a0c8: 0xe4b40064  swc1        $f20, 0x64($a1)
    ctx->pc = 0x12a0c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x12a0cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A0CCu;
    {
        const bool branch_taken_0x12a0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0CCu;
            // 0x12a0d0: 0xaca0005c  sw          $zero, 0x5C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0cc) {
            ctx->pc = 0x12A0E4u;
            goto label_12a0e4;
        }
    }
    ctx->pc = 0x12A0D4u;
    // 0x12a0d4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x12a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12a0d8: 0xfca00068  sd          $zero, 0x68($a1)
    ctx->pc = 0x12a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 0));
    // 0x12a0dc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x12a0e0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x12a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_12a0e4:
    // 0x12a0e4: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x12a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x12a0e8: 0x10540005  beq         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A0E8u;
    {
        const bool branch_taken_0x12a0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x12a0e8) {
            ctx->pc = 0x12A100u;
            goto label_12a100;
        }
    }
    ctx->pc = 0x12A0F0u;
    // 0x12a0f0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x12a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12a0f4: 0xacb40070  sw          $s4, 0x70($a1)
    ctx->pc = 0x12a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 20));
    // 0x12a0f8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x12a0fc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x12a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_12a100:
    // 0x12a100: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12A100u;
    SET_GPR_U32(ctx, 31, 0x12A108u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A108u; }
        if (ctx->pc != 0x12A108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A108u; }
        if (ctx->pc != 0x12A108u) { return; }
    }
    ctx->pc = 0x12A108u;
    // 0x12a108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a10c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x12a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x12a110: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x12A110u;
    SET_GPR_U32(ctx, 31, 0x12A118u);
    ctx->pc = 0x12A114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A110u;
            // 0x12a114: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A118u; }
        if (ctx->pc != 0x12A118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A118u; }
        if (ctx->pc != 0x12A118u) { return; }
    }
    ctx->pc = 0x12A118u;
    // 0x12a118: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x12a118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12a11c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12a11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a120: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12a120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12a124: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x12a124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x12a128: 0x8c6403ac  lw          $a0, 0x3AC($v1)
    ctx->pc = 0x12a128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 940)));
    // 0x12a12c: 0x2442c4c0  addiu       $v0, $v0, -0x3B40
    ctx->pc = 0x12a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952128));
    // 0x12a130: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12a134: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x12a134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x12a138: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x12a138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x12a13c: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x12a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x12a140: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x12a140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x12a144: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x12A144u;
    SET_GPR_U32(ctx, 31, 0x12A14Cu);
    ctx->pc = 0x12A148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A144u;
            // 0x12a148: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A14Cu; }
        if (ctx->pc != 0x12A14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A14Cu; }
        if (ctx->pc != 0x12A14Cu) { return; }
    }
    ctx->pc = 0x12A14Cu;
    // 0x12a14c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12a150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a154: 0x26e2fd30  addiu       $v0, $s7, -0x2D0
    ctx->pc = 0x12a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966576));
    // 0x12a158: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x12a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x12a15c: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x12a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x12a160: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x12a160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a164: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x12a164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_12a168:
    // 0x12a168: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a16c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12a170: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x12a170u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x12a174: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x12a174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x12a178: 0x0  nop
    ctx->pc = 0x12a178u;
    // NOP
    // 0x12a17c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A17Cu;
    {
        const bool branch_taken_0x12a17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A17Cu;
            // 0x12a180: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a17c) {
            ctx->pc = 0x12A168u;
            runtime->cooperativeGuestYield();
            goto label_12a168;
        }
    }
    ctx->pc = 0x12A184u;
    // 0x12a184: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x12a184u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x12a188: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12A188u;
    SET_GPR_U32(ctx, 31, 0x12A190u);
    ctx->pc = 0x12A18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A188u;
            // 0x12a18c: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A190u; }
        if (ctx->pc != 0x12A190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A190u; }
        if (ctx->pc != 0x12A190u) { return; }
    }
    ctx->pc = 0x12A190u;
    // 0x12a190: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x12a190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12a194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a198: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x12A198u;
    SET_GPR_U32(ctx, 31, 0x12A1A0u);
    ctx->pc = 0x12A19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A198u;
            // 0x12a19c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1A0u; }
        if (ctx->pc != 0x12A1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1A0u; }
        if (ctx->pc != 0x12A1A0u) { return; }
    }
    ctx->pc = 0x12A1A0u;
    // 0x12a1a0: 0x24431000  addiu       $v1, $v0, 0x1000
    ctx->pc = 0x12a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x12a1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1a8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12a1ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12a1b0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x12a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x12a1b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x12a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x12a1b8: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x12A1B8u;
    SET_GPR_U32(ctx, 31, 0x12A1C0u);
    ctx->pc = 0x12A1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1B8u;
            // 0x12a1bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1C0u; }
        if (ctx->pc != 0x12A1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1C0u; }
        if (ctx->pc != 0x12A1C0u) { return; }
    }
    ctx->pc = 0x12A1C0u;
    // 0x12a1c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12a1c4: 0x26c4fd10  addiu       $a0, $s6, -0x2F0
    ctx->pc = 0x12a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966544));
    // 0x12a1c8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x12a1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12a1cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12a1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a1d0: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x12a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x12a1d4: 0xae040658  sw          $a0, 0x658($s0)
    ctx->pc = 0x12a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 4));
    // 0x12a1d8: 0xae050660  sw          $a1, 0x660($s0)
    ctx->pc = 0x12a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 5));
    // 0x12a1dc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x12a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x12a1e0: 0xae060664  sw          $a2, 0x664($s0)
    ctx->pc = 0x12a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 6));
    // 0x12a1e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x12a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x12a1e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12a1ec: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x12a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x12a1f0: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x12a1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x12a1f4: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x12a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x12a1f8: 0xae710018  sw          $s1, 0x18($s3)
    ctx->pc = 0x12a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 17));
    // 0x12a1fc: 0x26a2e848  addiu       $v0, $s5, -0x17B8
    ctx->pc = 0x12a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
    // 0x12a200: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x12a200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12a204: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x12a204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12a208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a20c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x12a20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12a210: 0xc057c7a  jal         func_15F1E8
    ctx->pc = 0x12A210u;
    SET_GPR_U32(ctx, 31, 0x12A218u);
    ctx->pc = 0x12A214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A210u;
            // 0x12a214: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E8u;
    if (runtime->hasFunction(0x15F1E8u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A218u; }
        if (ctx->pc != 0x12A218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f1e8_0x15f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A218u; }
        if (ctx->pc != 0x12A218u) { return; }
    }
    ctx->pc = 0x12A218u;
    // 0x12a218: 0xc04a8aa  jal         func_12A2A8
    ctx->pc = 0x12A218u;
    SET_GPR_U32(ctx, 31, 0x12A220u);
    ctx->pc = 0x12A21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A218u;
            // 0x12a21c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A2A8u;
    if (runtime->hasFunction(0x12A2A8u)) {
        auto targetFn = runtime->lookupFunction(0x12A2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A220u; }
        if (ctx->pc != 0x12A220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12a2a8_0x12a330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A220u; }
        if (ctx->pc != 0x12A220u) { return; }
    }
    ctx->pc = 0x12A220u;
    // 0x12a220: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x12a220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x12a224: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x12a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x12a228: 0x9042463c  lbu         $v0, 0x463C($v0)
    ctx->pc = 0x12a228u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17980)));
    // 0x12a22c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A22Cu;
    {
        const bool branch_taken_0x12a22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A22Cu;
            // 0x12a230: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a22c) {
            ctx->pc = 0x12A248u;
            goto label_12a248;
        }
    }
    ctx->pc = 0x12A234u;
    // 0x12a234: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x12a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x12a238: 0x90424642  lbu         $v0, 0x4642($v0)
    ctx->pc = 0x12a238u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17986)));
    // 0x12a23c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A23Cu;
    {
        const bool branch_taken_0x12a23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12A240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A23Cu;
            // 0x12a240: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a23c) {
            ctx->pc = 0x12A264u;
            goto label_12a264;
        }
    }
    ctx->pc = 0x12A244u;
    // 0x12a244: 0x0  nop
    ctx->pc = 0x12a244u;
    // NOP
label_12a248:
    // 0x12a248: 0x0  nop
    ctx->pc = 0x12a248u;
    // NOP
    // 0x12a24c: 0x0  nop
    ctx->pc = 0x12a24cu;
    // NOP
    // 0x12a250: 0x0  nop
    ctx->pc = 0x12a250u;
    // NOP
    // 0x12a254: 0x0  nop
    ctx->pc = 0x12a254u;
    // NOP
    // 0x12a258: 0x0  nop
    ctx->pc = 0x12a258u;
    // NOP
    // 0x12a25c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A25Cu;
    {
        const bool branch_taken_0x12a25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a25c) {
            ctx->pc = 0x12A248u;
            runtime->cooperativeGuestYield();
            goto label_12a248;
        }
    }
    ctx->pc = 0x12A264u;
label_12a264:
    // 0x12a264: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x12a264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12a268: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x12a268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12a26c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x12a26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12a270: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x12a270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12a274: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x12a274u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12a278: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x12a278u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a27c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12a27cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12a280: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x12a280u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12a284: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x12a284u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a288: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12a288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a28c: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x12a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12a290: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x12a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12a294: 0x3e00008  jr          $ra
    ctx->pc = 0x12A294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A294u;
            // 0x12a298: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129B30u: goto label_129b30;
            case 0x129C18u: goto label_129c18;
            case 0x129C68u: goto label_129c68;
            case 0x129CA8u: goto label_129ca8;
            case 0x129DD0u: goto label_129dd0;
            case 0x129DF0u: goto label_129df0;
            case 0x129E0Cu: goto label_129e0c;
            case 0x129E48u: goto label_129e48;
            case 0x129E68u: goto label_129e68;
            case 0x129E84u: goto label_129e84;
            case 0x129ED0u: goto label_129ed0;
            case 0x129F10u: goto label_129f10;
            case 0x12A048u: goto label_12a048;
            case 0x12A068u: goto label_12a068;
            case 0x12A084u: goto label_12a084;
            case 0x12A0C4u: goto label_12a0c4;
            case 0x12A0E4u: goto label_12a0e4;
            case 0x12A100u: goto label_12a100;
            case 0x12A168u: goto label_12a168;
            case 0x12A248u: goto label_12a248;
            case 0x12A264u: goto label_12a264;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A29Cu;
    // 0x12a29c: 0x0  nop
    ctx->pc = 0x12a29cu;
    // NOP
    // 0x12a2a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12a2a4: 0x0  nop
    ctx->pc = 0x12a2a4u;
    // NOP
}
