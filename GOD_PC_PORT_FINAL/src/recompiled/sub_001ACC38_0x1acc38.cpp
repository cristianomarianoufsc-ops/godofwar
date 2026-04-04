#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ACC38
// Address: 0x1acc38 - 0x1ad260
void sub_001ACC38_0x1acc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACC38_0x1acc38");
#endif

    ctx->pc = 0x1acc38u;

    // 0x1acc38: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1acc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1acc3c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1acc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1acc40: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1acc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1acc44: 0x3c11002c  lui         $s1, 0x2C
    ctx->pc = 0x1acc44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
    // 0x1acc48: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1acc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1acc4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1acc4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc50: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1acc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1acc54: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1acc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1acc58: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1acc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1acc5c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1acc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1acc60: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1acc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1acc64: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1acc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x1acc68: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1acc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1acc6c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1acc6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1acc70: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1acc70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1acc74: 0x8e227380  lw          $v0, 0x7380($s1)
    ctx->pc = 0x1acc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29568)));
    // 0x1acc78: 0x94be002a  lhu         $fp, 0x2A($a1)
    ctx->pc = 0x1acc78u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1acc7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ACC7Cu;
    {
        const bool branch_taken_0x1acc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC7Cu;
            // 0x1acc80: 0x8cb20020  lw          $s2, 0x20($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc7c) {
            ctx->pc = 0x1ACCA0u;
            goto label_1acca0;
        }
    }
    ctx->pc = 0x1ACC84u;
    // 0x1acc84: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1acc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1acc88: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x1acc88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x1acc8c: 0xc04e1f0  jal         func_1387C0
    ctx->pc = 0x1ACC8Cu;
    SET_GPR_U32(ctx, 31, 0x1ACC94u);
    ctx->pc = 0x1ACC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC8Cu;
            // 0x1acc90: 0x8c44ca88  lw          $a0, -0x3578($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1387C0u;
    if (runtime->hasFunction(0x1387C0u)) {
        auto targetFn = runtime->lookupFunction(0x1387C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC94u; }
        if (ctx->pc != 0x1ACC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001387C0_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC94u; }
        if (ctx->pc != 0x1ACC94u) { return; }
    }
    ctx->pc = 0x1ACC94u;
    // 0x1acc94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1acc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acc98: 0xae02737c  sw          $v0, 0x737C($s0)
    ctx->pc = 0x1acc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29564), GPR_U32(ctx, 2));
    // 0x1acc9c: 0xae237380  sw          $v1, 0x7380($s1)
    ctx->pc = 0x1acc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29568), GPR_U32(ctx, 3));
label_1acca0:
    // 0x1acca0: 0x3c11002c  lui         $s1, 0x2C
    ctx->pc = 0x1acca0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
    // 0x1acca4: 0x8e227388  lw          $v0, 0x7388($s1)
    ctx->pc = 0x1acca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29576)));
    // 0x1acca8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ACCA8u;
    {
        const bool branch_taken_0x1acca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acca8) {
            ctx->pc = 0x1ACCACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCA8u;
            // 0x1accac: 0x3c11002c  lui         $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACCD0u;
            goto label_1accd0;
        }
    }
    ctx->pc = 0x1ACCB0u;
    // 0x1accb0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1accb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1accb4: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x1accb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x1accb8: 0xc04e1f0  jal         func_1387C0
    ctx->pc = 0x1ACCB8u;
    SET_GPR_U32(ctx, 31, 0x1ACCC0u);
    ctx->pc = 0x1ACCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCB8u;
            // 0x1accbc: 0x8c44ca8c  lw          $a0, -0x3574($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953612)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1387C0u;
    if (runtime->hasFunction(0x1387C0u)) {
        auto targetFn = runtime->lookupFunction(0x1387C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCC0u; }
        if (ctx->pc != 0x1ACCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001387C0_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCC0u; }
        if (ctx->pc != 0x1ACCC0u) { return; }
    }
    ctx->pc = 0x1ACCC0u;
    // 0x1accc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1accc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1accc4: 0xae027384  sw          $v0, 0x7384($s0)
    ctx->pc = 0x1accc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29572), GPR_U32(ctx, 2));
    // 0x1accc8: 0xae237388  sw          $v1, 0x7388($s1)
    ctx->pc = 0x1accc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29576), GPR_U32(ctx, 3));
    // 0x1acccc: 0x3c11002c  lui         $s1, 0x2C
    ctx->pc = 0x1accccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
label_1accd0:
    // 0x1accd0: 0x8e227390  lw          $v0, 0x7390($s1)
    ctx->pc = 0x1accd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29584)));
    // 0x1accd4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ACCD4u;
    {
        const bool branch_taken_0x1accd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1accd4) {
            ctx->pc = 0x1ACCD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCD4u;
            // 0x1accd8: 0x3c11002c  lui         $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACCFCu;
            goto label_1accfc;
        }
    }
    ctx->pc = 0x1ACCDCu;
    // 0x1accdc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1accdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1acce0: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x1acce0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x1acce4: 0xc04e1f0  jal         func_1387C0
    ctx->pc = 0x1ACCE4u;
    SET_GPR_U32(ctx, 31, 0x1ACCECu);
    ctx->pc = 0x1ACCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCE4u;
            // 0x1acce8: 0x8c44ca90  lw          $a0, -0x3570($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1387C0u;
    if (runtime->hasFunction(0x1387C0u)) {
        auto targetFn = runtime->lookupFunction(0x1387C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCECu; }
        if (ctx->pc != 0x1ACCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001387C0_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCECu; }
        if (ctx->pc != 0x1ACCECu) { return; }
    }
    ctx->pc = 0x1ACCECu;
    // 0x1accec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1accecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1accf0: 0xae02738c  sw          $v0, 0x738C($s0)
    ctx->pc = 0x1accf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29580), GPR_U32(ctx, 2));
    // 0x1accf4: 0xae237390  sw          $v1, 0x7390($s1)
    ctx->pc = 0x1accf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29584), GPR_U32(ctx, 3));
    // 0x1accf8: 0x3c11002c  lui         $s1, 0x2C
    ctx->pc = 0x1accf8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
label_1accfc:
    // 0x1accfc: 0x8e227398  lw          $v0, 0x7398($s1)
    ctx->pc = 0x1accfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29592)));
    // 0x1acd00: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ACD00u;
    {
        const bool branch_taken_0x1acd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acd00) {
            ctx->pc = 0x1ACD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD00u;
            // 0x1acd04: 0x3c11002c  lui         $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACD28u;
            goto label_1acd28;
        }
    }
    ctx->pc = 0x1ACD08u;
    // 0x1acd08: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1acd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1acd0c: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x1acd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x1acd10: 0xc04e1f0  jal         func_1387C0
    ctx->pc = 0x1ACD10u;
    SET_GPR_U32(ctx, 31, 0x1ACD18u);
    ctx->pc = 0x1ACD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD10u;
            // 0x1acd14: 0x8c44ca94  lw          $a0, -0x356C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953620)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1387C0u;
    if (runtime->hasFunction(0x1387C0u)) {
        auto targetFn = runtime->lookupFunction(0x1387C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD18u; }
        if (ctx->pc != 0x1ACD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001387C0_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD18u; }
        if (ctx->pc != 0x1ACD18u) { return; }
    }
    ctx->pc = 0x1ACD18u;
    // 0x1acd18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1acd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acd1c: 0xae027394  sw          $v0, 0x7394($s0)
    ctx->pc = 0x1acd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29588), GPR_U32(ctx, 2));
    // 0x1acd20: 0xae237398  sw          $v1, 0x7398($s1)
    ctx->pc = 0x1acd20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29592), GPR_U32(ctx, 3));
    // 0x1acd24: 0x3c11002c  lui         $s1, 0x2C
    ctx->pc = 0x1acd24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
label_1acd28:
    // 0x1acd28: 0x8e2273a0  lw          $v0, 0x73A0($s1)
    ctx->pc = 0x1acd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29600)));
    // 0x1acd2c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ACD2Cu;
    {
        const bool branch_taken_0x1acd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD2Cu;
            // 0x1acd30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd2c) {
            ctx->pc = 0x1ACD54u;
            goto label_1acd54;
        }
    }
    ctx->pc = 0x1ACD34u;
    // 0x1acd34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1acd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1acd38: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x1acd38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x1acd3c: 0xc04e1f0  jal         func_1387C0
    ctx->pc = 0x1ACD3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD44u);
    ctx->pc = 0x1ACD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD3Cu;
            // 0x1acd40: 0x8c44ca98  lw          $a0, -0x3568($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953624)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1387C0u;
    if (runtime->hasFunction(0x1387C0u)) {
        auto targetFn = runtime->lookupFunction(0x1387C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD44u; }
        if (ctx->pc != 0x1ACD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001387C0_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD44u; }
        if (ctx->pc != 0x1ACD44u) { return; }
    }
    ctx->pc = 0x1ACD44u;
    // 0x1acd44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1acd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acd48: 0xae02739c  sw          $v0, 0x739C($s0)
    ctx->pc = 0x1acd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29596), GPR_U32(ctx, 2));
    // 0x1acd4c: 0xae2373a0  sw          $v1, 0x73A0($s1)
    ctx->pc = 0x1acd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29600), GPR_U32(ctx, 3));
    // 0x1acd50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1acd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1acd54:
    // 0x1acd54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1acd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd58: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1acd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1acd5c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1acd5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd60: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1acd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1acd64: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1acd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1acd68: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1acd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1acd6c: 0x2462ec58  addiu       $v0, $v1, -0x13A8
    ctx->pc = 0x1acd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x1acd70: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1acd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1acd74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1acd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1acd78: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1acd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1acd7c: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1acd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1acd80: 0x120000ba  beqz        $s0, . + 4 + (0xBA << 2)
    ctx->pc = 0x1ACD80u;
    {
        const bool branch_taken_0x1acd80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD80u;
            // 0x1acd84: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd80) {
            ctx->pc = 0x1AD06Cu;
            goto label_1ad06c;
        }
    }
    ctx->pc = 0x1ACD88u;
    // 0x1acd88: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACD88u;
    {
        const bool branch_taken_0x1acd88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD88u;
            // 0x1acd8c: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd88) {
            ctx->pc = 0x1ACD98u;
            goto label_1acd98;
        }
    }
    ctx->pc = 0x1ACD90u;
    // 0x1acd90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd94: 0x0  nop
    ctx->pc = 0x1acd94u;
    // NOP
label_1acd98:
    // 0x1acd98: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1acd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1acd9c: 0x10a000b0  beqz        $a1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1ACD9Cu;
    {
        const bool branch_taken_0x1acd9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD9Cu;
            // 0x1acda0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd9c) {
            ctx->pc = 0x1AD060u;
            goto label_1ad060;
        }
    }
    ctx->pc = 0x1ACDA4u;
    // 0x1acda4: 0x80b40008  lb          $s4, 0x8($a1)
    ctx->pc = 0x1acda4u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1acda8: 0x8c42737c  lw          $v0, 0x737C($v0)
    ctx->pc = 0x1acda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29564)));
    // 0x1acdac: 0x1682006d  bne         $s4, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1ACDACu;
    {
        const bool branch_taken_0x1acdac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDACu;
            // 0x1acdb0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdac) {
            ctx->pc = 0x1ACF64u;
            goto label_1acf64;
        }
    }
    ctx->pc = 0x1ACDB4u;
    // 0x1acdb4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1acdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1acdb8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1ACDB8u;
    SET_GPR_U32(ctx, 31, 0x1ACDC0u);
    ctx->pc = 0x1ACDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDB8u;
            // 0x1acdbc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDC0u; }
        if (ctx->pc != 0x1ACDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDC0u; }
        if (ctx->pc != 0x1ACDC0u) { return; }
    }
    ctx->pc = 0x1ACDC0u;
    // 0x1acdc0: 0x8e4300fc  lw          $v1, 0xFC($s2)
    ctx->pc = 0x1acdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x1acdc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1acdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1acdc8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1ACDC8u;
    {
        const bool branch_taken_0x1acdc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDC8u;
            // 0x1acdcc: 0xa7a20026  sh          $v0, 0x26($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdc8) {
            ctx->pc = 0x1ACE08u;
            goto label_1ace08;
        }
    }
    ctx->pc = 0x1ACDD0u;
    // 0x1acdd0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1acdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x1acdd4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1acdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1acdd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ACDD8u;
    {
        const bool branch_taken_0x1acdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDD8u;
            // 0x1acddc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdd8) {
            ctx->pc = 0x1ACDF8u;
            goto label_1acdf8;
        }
    }
    ctx->pc = 0x1ACDE0u;
label_1acde0:
    // 0x1acde0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1acde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1acde4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1acde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1acde8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ACDE8u;
    {
        const bool branch_taken_0x1acde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acde8) {
            ctx->pc = 0x1ACDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDE8u;
            // 0x1acdec: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACE0Cu;
            goto label_1ace0c;
        }
    }
    ctx->pc = 0x1ACDF0u;
    // 0x1acdf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1acdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1acdf4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1acdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1acdf8:
    // 0x1acdf8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1acdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1acdfc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1acdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1ace00: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1ACE00u;
    {
        const bool branch_taken_0x1ace00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ACE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE00u;
            // 0x1ace04: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace00) {
            ctx->pc = 0x1ACDE0u;
            runtime->cooperativeGuestYield();
            goto label_1acde0;
        }
    }
    ctx->pc = 0x1ACE08u;
label_1ace08:
    // 0x1ace08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ace08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ace0c:
    // 0x1ace0c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1ace0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1ace10: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ACE10u;
    {
        const bool branch_taken_0x1ace10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE10u;
            // 0x1ace14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace10) {
            ctx->pc = 0x1ACE48u;
            goto label_1ace48;
        }
    }
    ctx->pc = 0x1ACE18u;
    // 0x1ace18: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ace18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ace1c: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1ace1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1ace20: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1ace20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ace24: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ace24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ace28: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1ace28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1ace2c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ace2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ace30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ace30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ace34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ace34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ace38: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACE38u;
    {
        const bool branch_taken_0x1ace38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1ACE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE38u;
            // 0x1ace3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace38) {
            ctx->pc = 0x1ACE44u;
            goto label_1ace44;
        }
    }
    ctx->pc = 0x1ACE40u;
    // 0x1ace40: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ace40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ace44:
    // 0x1ace44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ace44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ace48:
    // 0x1ace48: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1ACE48u;
    {
        const bool branch_taken_0x1ace48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ace48) {
            ctx->pc = 0x1ACF04u;
            goto label_1acf04;
        }
    }
    ctx->pc = 0x1ACE50u;
    // 0x1ace50: 0xc6000178  lwc1        $f0, 0x178($s0)
    ctx->pc = 0x1ace50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ace54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ace54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ace58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ace58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ace5c: 0x8e1101b0  lw          $s1, 0x1B0($s0)
    ctx->pc = 0x1ace5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1ace60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ace60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ace64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ace64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ace68: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ace68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ace6c: 0xa7a2002c  sh          $v0, 0x2C($sp)
    ctx->pc = 0x1ace6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ace70: 0x96230072  lhu         $v1, 0x72($s1)
    ctx->pc = 0x1ace70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
    // 0x1ace74: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1ace74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1ace78: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1ACE78u;
    {
        const bool branch_taken_0x1ace78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE78u;
            // 0x1ace7c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace78) {
            ctx->pc = 0x1AD18Cu;
            goto label_1ad18c;
        }
    }
    ctx->pc = 0x1ACE80u;
    // 0x1ace80: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1ACE80u;
    {
        const bool branch_taken_0x1ace80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ace80) {
            ctx->pc = 0x1ACE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE80u;
            // 0x1ace84: 0xa7a00028  sh          $zero, 0x28($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACED4u;
            goto label_1aced4;
        }
    }
    ctx->pc = 0x1ACE88u;
    // 0x1ace88: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ace88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ace8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACE8Cu;
    {
        const bool branch_taken_0x1ace8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE8Cu;
            // 0x1ace90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace8c) {
            ctx->pc = 0x1ACE9Cu;
            goto label_1ace9c;
        }
    }
    ctx->pc = 0x1ACE94u;
    // 0x1ace94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1ACE94u;
    {
        const bool branch_taken_0x1ace94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE94u;
            // 0x1ace98: 0xa7a20028  sh          $v0, 0x28($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace94) {
            ctx->pc = 0x1ACED4u;
            goto label_1aced4;
        }
    }
    ctx->pc = 0x1ACE9Cu;
label_1ace9c:
    // 0x1ace9c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1ace9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1acea0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ACEA0u;
    {
        const bool branch_taken_0x1acea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEA0u;
            // 0x1acea4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acea0) {
            ctx->pc = 0x1ACEB8u;
            goto label_1aceb8;
        }
    }
    ctx->pc = 0x1ACEA8u;
    // 0x1acea8: 0xa7a20028  sh          $v0, 0x28($sp)
    ctx->pc = 0x1acea8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x1aceac: 0x9622007e  lhu         $v0, 0x7E($s1)
    ctx->pc = 0x1aceacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 126)));
    // 0x1aceb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ACEB0u;
    {
        const bool branch_taken_0x1aceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEB0u;
            // 0x1aceb4: 0xa7a2002a  sh          $v0, 0x2A($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aceb0) {
            ctx->pc = 0x1ACED4u;
            goto label_1aced4;
        }
    }
    ctx->pc = 0x1ACEB8u;
label_1aceb8:
    // 0x1aceb8: 0x9622007c  lhu         $v0, 0x7C($s1)
    ctx->pc = 0x1aceb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1acebc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1acebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acec0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1acec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1acec4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1acec4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1acec8: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACEC8u;
    {
        const bool branch_taken_0x1acec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1ACECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEC8u;
            // 0x1acecc: 0xa7a20028  sh          $v0, 0x28($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acec8) {
            ctx->pc = 0x1ACED4u;
            goto label_1aced4;
        }
    }
    ctx->pc = 0x1ACED0u;
    // 0x1aced0: 0xa7a00028  sh          $zero, 0x28($sp)
    ctx->pc = 0x1aced0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 0));
label_1aced4:
    // 0x1aced4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1aced4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aced8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1aced8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1acedc: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x1acedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1acee0: 0x40f809  jalr        $v0
    ctx->pc = 0x1ACEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACEE8u);
        ctx->pc = 0x1ACEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEE0u;
            // 0x1acee4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ACEE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACCA0u: goto label_1acca0;
            case 0x1ACCD0u: goto label_1accd0;
            case 0x1ACCFCu: goto label_1accfc;
            case 0x1ACD28u: goto label_1acd28;
            case 0x1ACD54u: goto label_1acd54;
            case 0x1ACD98u: goto label_1acd98;
            case 0x1ACDE0u: goto label_1acde0;
            case 0x1ACDF8u: goto label_1acdf8;
            case 0x1ACE08u: goto label_1ace08;
            case 0x1ACE0Cu: goto label_1ace0c;
            case 0x1ACE44u: goto label_1ace44;
            case 0x1ACE48u: goto label_1ace48;
            case 0x1ACE9Cu: goto label_1ace9c;
            case 0x1ACEB8u: goto label_1aceb8;
            case 0x1ACED4u: goto label_1aced4;
            case 0x1ACEF4u: goto label_1acef4;
            case 0x1ACF04u: goto label_1acf04;
            case 0x1ACF28u: goto label_1acf28;
            case 0x1ACF48u: goto label_1acf48;
            case 0x1ACF64u: goto label_1acf64;
            case 0x1ACF84u: goto label_1acf84;
            case 0x1ACFB8u: goto label_1acfb8;
            case 0x1ACFD0u: goto label_1acfd0;
            case 0x1ACFE0u: goto label_1acfe0;
            case 0x1ACFE4u: goto label_1acfe4;
            case 0x1AD01Cu: goto label_1ad01c;
            case 0x1AD03Cu: goto label_1ad03c;
            case 0x1AD054u: goto label_1ad054;
            case 0x1AD060u: goto label_1ad060;
            case 0x1AD064u: goto label_1ad064;
            case 0x1AD06Cu: goto label_1ad06c;
            case 0x1AD0B8u: goto label_1ad0b8;
            case 0x1AD0BCu: goto label_1ad0bc;
            case 0x1AD128u: goto label_1ad128;
            case 0x1AD144u: goto label_1ad144;
            case 0x1AD150u: goto label_1ad150;
            case 0x1AD168u: goto label_1ad168;
            case 0x1AD18Cu: goto label_1ad18c;
            case 0x1AD194u: goto label_1ad194;
            case 0x1AD1B4u: goto label_1ad1b4;
            case 0x1AD228u: goto label_1ad228;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEE8u; }
            if (ctx->pc != 0x1ACEE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1ACEE8u;
    // 0x1acee8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACEE8u;
    {
        const bool branch_taken_0x1acee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEE8u;
            // 0x1aceec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acee8) {
            ctx->pc = 0x1ACEF4u;
            goto label_1acef4;
        }
    }
    ctx->pc = 0x1ACEF0u;
    // 0x1acef0: 0xa7a20028  sh          $v0, 0x28($sp)
    ctx->pc = 0x1acef0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 2));
label_1acef4:
    // 0x1acef4: 0x96220080  lhu         $v0, 0x80($s1)
    ctx->pc = 0x1acef4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1acef8: 0xa7a20022  sh          $v0, 0x22($sp)
    ctx->pc = 0x1acef8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x1acefc: 0x9202035c  lbu         $v0, 0x35C($s0)
    ctx->pc = 0x1acefcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1acf00: 0xa3a2002e  sb          $v0, 0x2E($sp)
    ctx->pc = 0x1acf00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 46), (uint8_t)GPR_U32(ctx, 2));
label_1acf04:
    // 0x1acf04: 0xc06927a  jal         func_1A49E8
    ctx->pc = 0x1ACF04u;
    SET_GPR_U32(ctx, 31, 0x1ACF0Cu);
    ctx->pc = 0x1ACF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF04u;
            // 0x1acf08: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A49E8u;
    if (runtime->hasFunction(0x1A49E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A49E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF0Cu; }
        if (ctx->pc != 0x1ACF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A49E8_0x1a49e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF0Cu; }
        if (ctx->pc != 0x1ACF0Cu) { return; }
    }
    ctx->pc = 0x1ACF0Cu;
    // 0x1acf0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acf0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf10: 0x86430060  lh          $v1, 0x60($s2)
    ctx->pc = 0x1acf10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1acf14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1acf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1acf18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACF18u;
    {
        const bool branch_taken_0x1acf18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF18u;
            // 0x1acf1c: 0x96710042  lhu         $s1, 0x42($s3) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf18) {
            ctx->pc = 0x1ACF28u;
            goto label_1acf28;
        }
    }
    ctx->pc = 0x1ACF20u;
    // 0x1acf20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1ACF20u;
    {
        const bool branch_taken_0x1acf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF20u;
            // 0x1acf24: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf20) {
            ctx->pc = 0x1ACF48u;
            goto label_1acf48;
        }
    }
    ctx->pc = 0x1ACF28u;
label_1acf28:
    // 0x1acf28: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1acf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1acf2c: 0xde430068  ld          $v1, 0x68($s2)
    ctx->pc = 0x1acf2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1acf30: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1acf30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1acf34: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACF34u;
    {
        const bool branch_taken_0x1acf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1ACF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF34u;
            // 0x1acf38: 0x26460070  addiu       $a2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf34) {
            ctx->pc = 0x1ACF48u;
            goto label_1acf48;
        }
    }
    ctx->pc = 0x1ACF3Cu;
    // 0x1acf3c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1ACF3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF44u);
    ctx->pc = 0x1ACF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF3Cu;
            // 0x1acf40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF44u; }
        if (ctx->pc != 0x1ACF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF44u; }
        if (ctx->pc != 0x1ACF44u) { return; }
    }
    ctx->pc = 0x1ACF44u;
    // 0x1acf44: 0x26460070  addiu       $a2, $s2, 0x70
    ctx->pc = 0x1acf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1acf48:
    // 0x1acf48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1acf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf50: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1acf50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1acf54: 0xc0691ae  jal         func_1A46B8
    ctx->pc = 0x1ACF54u;
    SET_GPR_U32(ctx, 31, 0x1ACF5Cu);
    ctx->pc = 0x1ACF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF54u;
            // 0x1acf58: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A46B8u;
    if (runtime->hasFunction(0x1A46B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A46B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF5Cu; }
        if (ctx->pc != 0x1ACF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A46B8_0x1a46b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF5Cu; }
        if (ctx->pc != 0x1ACF5Cu) { return; }
    }
    ctx->pc = 0x1ACF5Cu;
    // 0x1acf5c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1ACF5Cu;
    {
        const bool branch_taken_0x1acf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF5Cu;
            // 0x1acf60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf5c) {
            ctx->pc = 0x1AD06Cu;
            goto label_1ad06c;
        }
    }
    ctx->pc = 0x1ACF64u;
label_1acf64:
    // 0x1acf64: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1acf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1acf68: 0x8c427384  lw          $v0, 0x7384($v0)
    ctx->pc = 0x1acf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29572)));
    // 0x1acf6c: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ACF6Cu;
    {
        const bool branch_taken_0x1acf6c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF6Cu;
            // 0x1acf70: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf6c) {
            ctx->pc = 0x1ACF84u;
            goto label_1acf84;
        }
    }
    ctx->pc = 0x1ACF74u;
    // 0x1acf74: 0x8cb50004  lw          $s5, 0x4($a1)
    ctx->pc = 0x1acf74u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1acf78: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1acf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1acf7c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1ACF7Cu;
    {
        const bool branch_taken_0x1acf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF7Cu;
            // 0x1acf80: 0xafa50050  sw          $a1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf7c) {
            ctx->pc = 0x1AD060u;
            goto label_1ad060;
        }
    }
    ctx->pc = 0x1ACF84u;
label_1acf84:
    // 0x1acf84: 0x8c427394  lw          $v0, 0x7394($v0)
    ctx->pc = 0x1acf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29588)));
    // 0x1acf88: 0x1682002c  bne         $s4, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1ACF88u;
    {
        const bool branch_taken_0x1acf88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF88u;
            // 0x1acf8c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf88) {
            ctx->pc = 0x1AD03Cu;
            goto label_1ad03c;
        }
    }
    ctx->pc = 0x1ACF90u;
    // 0x1acf90: 0x8cb50004  lw          $s5, 0x4($a1)
    ctx->pc = 0x1acf90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1acf94: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1acf94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1acf98: 0x8e4300fc  lw          $v1, 0xFC($s2)
    ctx->pc = 0x1acf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x1acf9c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ACF9Cu;
    {
        const bool branch_taken_0x1acf9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF9Cu;
            // 0x1acfa0: 0xafa50058  sw          $a1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf9c) {
            ctx->pc = 0x1ACFE0u;
            goto label_1acfe0;
        }
    }
    ctx->pc = 0x1ACFA4u;
    // 0x1acfa4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1acfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1acfa8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1acfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1acfac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ACFACu;
    {
        const bool branch_taken_0x1acfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFACu;
            // 0x1acfb0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfac) {
            ctx->pc = 0x1ACFD0u;
            goto label_1acfd0;
        }
    }
    ctx->pc = 0x1ACFB4u;
    // 0x1acfb4: 0x0  nop
    ctx->pc = 0x1acfb4u;
    // NOP
label_1acfb8:
    // 0x1acfb8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1acfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1acfbc: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1acfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1acfc0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ACFC0u;
    {
        const bool branch_taken_0x1acfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acfc0) {
            ctx->pc = 0x1ACFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFC0u;
            // 0x1acfc4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACFE4u;
            goto label_1acfe4;
        }
    }
    ctx->pc = 0x1ACFC8u;
    // 0x1acfc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1acfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1acfcc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1acfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1acfd0:
    // 0x1acfd0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1acfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1acfd4: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x1acfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1acfd8: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1ACFD8u;
    {
        const bool branch_taken_0x1acfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ACFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFD8u;
            // 0x1acfdc: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfd8) {
            ctx->pc = 0x1ACFB8u;
            runtime->cooperativeGuestYield();
            goto label_1acfb8;
        }
    }
    ctx->pc = 0x1ACFE0u;
label_1acfe0:
    // 0x1acfe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acfe4:
    // 0x1acfe4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1acfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1acfe8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ACFE8u;
    {
        const bool branch_taken_0x1acfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFE8u;
            // 0x1acfec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfe8) {
            ctx->pc = 0x1AD01Cu;
            goto label_1ad01c;
        }
    }
    ctx->pc = 0x1ACFF0u;
    // 0x1acff0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1acff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1acff4: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1acff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1acff8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1acff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1acffc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1acffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ad000: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1ad000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1ad004: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ad004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ad008: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ad008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad00c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ad00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad010: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD010u;
    {
        const bool branch_taken_0x1ad010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ad010) {
            ctx->pc = 0x1AD01Cu;
            goto label_1ad01c;
        }
    }
    ctx->pc = 0x1AD018u;
    // 0x1ad018: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ad018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ad01c:
    // 0x1ad01c: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AD01Cu;
    {
        const bool branch_taken_0x1ad01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad01c) {
            ctx->pc = 0x1AD020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD01Cu;
            // 0x1ad020: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD064u;
            goto label_1ad064;
        }
    }
    ctx->pc = 0x1AD024u;
    // 0x1ad024: 0xc085314  jal         func_214C50
    ctx->pc = 0x1AD024u;
    SET_GPR_U32(ctx, 31, 0x1AD02Cu);
    ctx->pc = 0x214C50u;
    if (runtime->hasFunction(0x214C50u)) {
        auto targetFn = runtime->lookupFunction(0x214C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD02Cu; }
        if (ctx->pc != 0x1AD02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_214c50_0x214c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD02Cu; }
        if (ctx->pc != 0x1AD02Cu) { return; }
    }
    ctx->pc = 0x1AD02Cu;
    // 0x1ad02c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ad02cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad030: 0x36a28000  ori         $v0, $s5, 0x8000
    ctx->pc = 0x1ad030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32768);
    // 0x1ad034: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AD034u;
    {
        const bool branch_taken_0x1ad034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD034u;
            // 0x1ad038: 0x43a80b  movn        $s5, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad034) {
            ctx->pc = 0x1AD060u;
            goto label_1ad060;
        }
    }
    ctx->pc = 0x1AD03Cu;
label_1ad03c:
    // 0x1ad03c: 0x8c42738c  lw          $v0, 0x738C($v0)
    ctx->pc = 0x1ad03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29580)));
    // 0x1ad040: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD040u;
    {
        const bool branch_taken_0x1ad040 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD040u;
            // 0x1ad044: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad040) {
            ctx->pc = 0x1AD054u;
            goto label_1ad054;
        }
    }
    ctx->pc = 0x1AD048u;
    // 0x1ad048: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1ad048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ad04c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD04Cu;
    {
        const bool branch_taken_0x1ad04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD04Cu;
            // 0x1ad050: 0xafa50054  sw          $a1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad04c) {
            ctx->pc = 0x1AD060u;
            goto label_1ad060;
        }
    }
    ctx->pc = 0x1AD054u;
label_1ad054:
    // 0x1ad054: 0x8c42739c  lw          $v0, 0x739C($v0)
    ctx->pc = 0x1ad054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29596)));
    // 0x1ad058: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD058u;
    {
        const bool branch_taken_0x1ad058 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad058) {
            ctx->pc = 0x1AD05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD058u;
            // 0x1ad05c: 0x8cb50000  lw          $s5, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD060u;
            goto label_1ad060;
        }
    }
    ctx->pc = 0x1AD060u;
label_1ad060:
    // 0x1ad060: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1ad060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ad064:
    // 0x1ad064: 0x1600ff4c  bnez        $s0, . + 4 + (-0xB4 << 2)
    ctx->pc = 0x1AD064u;
    {
        const bool branch_taken_0x1ad064 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD064u;
            // 0x1ad068: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad064) {
            ctx->pc = 0x1ACD98u;
            runtime->cooperativeGuestYield();
            goto label_1acd98;
        }
    }
    ctx->pc = 0x1AD06Cu;
label_1ad06c:
    // 0x1ad06c: 0x1620006e  bnez        $s1, . + 4 + (0x6E << 2)
    ctx->pc = 0x1AD06Cu;
    {
        const bool branch_taken_0x1ad06c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD06Cu;
            // 0x1ad070: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad06c) {
            ctx->pc = 0x1AD228u;
            goto label_1ad228;
        }
    }
    ctx->pc = 0x1AD074u;
    // 0x1ad074: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1ad074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ad078: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1ad078u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad07c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ad07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad080: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ad080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ad084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ad084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad088: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1ad088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1ad08c: 0x2462ec58  addiu       $v0, $v1, -0x13A8
    ctx->pc = 0x1ad08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x1ad090: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ad090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ad094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad098: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ad098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ad09c: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1ad09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1ad0a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD0A0u;
    {
        const bool branch_taken_0x1ad0a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0A0u;
            // 0x1ad0a4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0a0) {
            ctx->pc = 0x1AD0B8u;
            goto label_1ad0b8;
        }
    }
    ctx->pc = 0x1AD0A8u;
    // 0x1ad0a8: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x1ad0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1ad0ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ad0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD0B0u;
    {
        const bool branch_taken_0x1ad0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0B0u;
            // 0x1ad0b4: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0b0) {
            ctx->pc = 0x1AD0BCu;
            goto label_1ad0bc;
        }
    }
    ctx->pc = 0x1AD0B8u;
label_1ad0b8:
    // 0x1ad0b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ad0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0bc:
    // 0x1ad0bc: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1AD0BCu;
    {
        const bool branch_taken_0x1ad0bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad0bc) {
            ctx->pc = 0x1AD168u;
            goto label_1ad168;
        }
    }
    ctx->pc = 0x1AD0C4u;
    // 0x1ad0c4: 0xc06c67a  jal         func_1B19E8
    ctx->pc = 0x1AD0C4u;
    SET_GPR_U32(ctx, 31, 0x1AD0CCu);
    ctx->pc = 0x1AD0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0C4u;
            // 0x1ad0c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B19E8u;
    if (runtime->hasFunction(0x1B19E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B19E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0CCu; }
        if (ctx->pc != 0x1AD0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B19E8_0x1b19e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0CCu; }
        if (ctx->pc != 0x1AD0CCu) { return; }
    }
    ctx->pc = 0x1AD0CCu;
    // 0x1ad0cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ad0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ad0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0d4: 0xc040314  jal         func_100C50
    ctx->pc = 0x1AD0D4u;
    SET_GPR_U32(ctx, 31, 0x1AD0DCu);
    ctx->pc = 0x1AD0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0D4u;
            // 0x1ad0d8: 0x2bc03  sra         $s7, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100C50u;
    if (runtime->hasFunction(0x100C50u)) {
        auto targetFn = runtime->lookupFunction(0x100C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0DCu; }
        if (ctx->pc != 0x1AD0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100C50_0x100c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0DCu; }
        if (ctx->pc != 0x1AD0DCu) { return; }
    }
    ctx->pc = 0x1AD0DCu;
    // 0x1ad0dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ad0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ad0e0: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x1ad0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad0e4: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x1ad0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ad0e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ad0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad0ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ad0ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ad0f0: 0x46020d03  div.s       $f20, $f1, $f2
    ctx->pc = 0x1ad0f0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[2];
    // 0x1ad0f4: 0x16820013  bne         $s4, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AD0F4u;
    {
        const bool branch_taken_0x1ad0f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0F4u;
            // 0x1ad0f8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0f4) {
            ctx->pc = 0x1AD144u;
            goto label_1ad144;
        }
    }
    ctx->pc = 0x1AD0FCu;
    // 0x1ad0fc: 0x8e6300e0  lw          $v1, 0xE0($s3)
    ctx->pc = 0x1ad0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x1ad100: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD100u;
    {
        const bool branch_taken_0x1ad100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1AD104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD100u;
            // 0x1ad104: 0x267100e0  addiu       $s1, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad100) {
            ctx->pc = 0x1AD128u;
            goto label_1ad128;
        }
    }
    ctx->pc = 0x1AD108u;
    // 0x1ad108: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x1ad108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1ad10c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ad10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ad110: 0xac53cac8  sw          $s3, -0x3538($v0)
    ctx->pc = 0x1ad110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 19));
    // 0x1ad114: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x1ad114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    // 0x1ad118: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ad118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ad11c: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1AD11Cu;
    SET_GPR_U32(ctx, 31, 0x1AD124u);
    ctx->pc = 0x1AD120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD11Cu;
            // 0x1ad120: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD124u; }
        if (ctx->pc != 0x1AD124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD124u; }
        if (ctx->pc != 0x1AD124u) { return; }
    }
    ctx->pc = 0x1AD124u;
    // 0x1ad124: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ad124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ad128:
    // 0x1ad128: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1ad128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ad12c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1ad12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1ad130: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD130u;
    {
        const bool branch_taken_0x1ad130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad130) {
            ctx->pc = 0x1AD144u;
            goto label_1ad144;
        }
    }
    ctx->pc = 0x1AD138u;
    // 0x1ad138: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x1ad138u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x1ad13c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD13Cu;
    {
        const bool branch_taken_0x1ad13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD13Cu;
            // 0x1ad140: 0x3631ffff  ori         $s1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad13c) {
            ctx->pc = 0x1AD150u;
            goto label_1ad150;
        }
    }
    ctx->pc = 0x1AD144u;
label_1ad144:
    // 0x1ad144: 0xc0402ae  jal         func_100AB8
    ctx->pc = 0x1AD144u;
    SET_GPR_U32(ctx, 31, 0x1AD14Cu);
    ctx->pc = 0x1AD148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD144u;
            // 0x1ad148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AB8u;
    if (runtime->hasFunction(0x100AB8u)) {
        auto targetFn = runtime->lookupFunction(0x100AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD14Cu; }
        if (ctx->pc != 0x1AD14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100AB8_0x100ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD14Cu; }
        if (ctx->pc != 0x1AD14Cu) { return; }
    }
    ctx->pc = 0x1AD14Cu;
    // 0x1ad14c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ad14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad150:
    // 0x1ad150: 0xc06c6bc  jal         func_1B1AF0
    ctx->pc = 0x1AD150u;
    SET_GPR_U32(ctx, 31, 0x1AD158u);
    ctx->pc = 0x1AD154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD150u;
            // 0x1ad154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AF0u;
    if (runtime->hasFunction(0x1B1AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD158u; }
        if (ctx->pc != 0x1AD158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AF0_0x1b1af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD158u; }
        if (ctx->pc != 0x1AD158u) { return; }
    }
    ctx->pc = 0x1AD158u;
    // 0x1ad158: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1ad158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1ad15c: 0x24632648  addiu       $v1, $v1, 0x2648
    ctx->pc = 0x1ad15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9800));
    // 0x1ad160: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1ad160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1ad164: 0x2c560001  sltiu       $s6, $v0, 0x1
    ctx->pc = 0x1ad164u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ad168:
    // 0x1ad168: 0xc06941a  jal         func_1A5068
    ctx->pc = 0x1AD168u;
    SET_GPR_U32(ctx, 31, 0x1AD170u);
    ctx->pc = 0x1AD16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD168u;
            // 0x1ad16c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5068u;
    if (runtime->hasFunction(0x1A5068u)) {
        auto targetFn = runtime->lookupFunction(0x1A5068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD170u; }
        if (ctx->pc != 0x1AD170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5068_0x1a5068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD170u; }
        if (ctx->pc != 0x1AD170u) { return; }
    }
    ctx->pc = 0x1AD170u;
    // 0x1ad170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ad170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad174: 0x86430060  lh          $v1, 0x60($s2)
    ctx->pc = 0x1ad174u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1ad178: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ad178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad17c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD17Cu;
    {
        const bool branch_taken_0x1ad17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD17Cu;
            // 0x1ad180: 0x96730042  lhu         $s3, 0x42($s3) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad17c) {
            ctx->pc = 0x1AD194u;
            goto label_1ad194;
        }
    }
    ctx->pc = 0x1AD184u;
    // 0x1ad184: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AD184u;
    {
        const bool branch_taken_0x1ad184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD184u;
            // 0x1ad188: 0x26480020  addiu       $t0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad184) {
            ctx->pc = 0x1AD1B4u;
            goto label_1ad1b4;
        }
    }
    ctx->pc = 0x1AD18Cu;
label_1ad18c:
    // 0x1ad18c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1AD18Cu;
    {
        const bool branch_taken_0x1ad18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD18Cu;
            // 0x1ad190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad18c) {
            ctx->pc = 0x1AD228u;
            goto label_1ad228;
        }
    }
    ctx->pc = 0x1AD194u;
label_1ad194:
    // 0x1ad194: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ad194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ad198: 0xde430068  ld          $v1, 0x68($s2)
    ctx->pc = 0x1ad198u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1ad19c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ad19cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ad1a0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD1A0u;
    {
        const bool branch_taken_0x1ad1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AD1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1A0u;
            // 0x1ad1a4: 0x26480070  addiu       $t0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1a0) {
            ctx->pc = 0x1AD1B4u;
            goto label_1ad1b4;
        }
    }
    ctx->pc = 0x1AD1A8u;
    // 0x1ad1a8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1AD1A8u;
    SET_GPR_U32(ctx, 31, 0x1AD1B0u);
    ctx->pc = 0x1AD1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1A8u;
            // 0x1ad1ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1B0u; }
        if (ctx->pc != 0x1AD1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1B0u; }
        if (ctx->pc != 0x1AD1B0u) { return; }
    }
    ctx->pc = 0x1AD1B0u;
    // 0x1ad1b0: 0x26480070  addiu       $t0, $s2, 0x70
    ctx->pc = 0x1ad1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1ad1b4:
    // 0x1ad1b4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1ad1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad1b8: 0x153400  sll         $a2, $s5, 16
    ctx->pc = 0x1ad1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x1ad1bc: 0x8e47001c  lw          $a3, 0x1C($s2)
    ctx->pc = 0x1ad1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1ad1c0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x1ad1c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1ad1c4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1ad1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ad1c8: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x1ad1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x1ad1cc: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1ad1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1ad1d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ad1d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ad1d4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1ad1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1d8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1ad1d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1dc: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x1ad1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ad1e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ad1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ad1e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ad1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ad1e8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1ad1ec: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1ad1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1ad1f0: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1ad1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1ad1f4: 0x42c00  sll         $a1, $a0, 16
    ctx->pc = 0x1ad1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ad1f8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1ad1f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1fc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1ad1fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1ad200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad204: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1ad204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1ad208: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ad208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ad20c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ad20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad210: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ad210u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1ad214: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1ad214u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad218: 0xc06928e  jal         func_1A4A38
    ctx->pc = 0x1AD218u;
    SET_GPR_U32(ctx, 31, 0x1AD220u);
    ctx->pc = 0x1AD21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD218u;
            // 0x1ad21c: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A38u;
    if (runtime->hasFunction(0x1A4A38u)) {
        auto targetFn = runtime->lookupFunction(0x1A4A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD220u; }
        if (ctx->pc != 0x1AD220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4A38_0x1a4a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD220u; }
        if (ctx->pc != 0x1AD220u) { return; }
    }
    ctx->pc = 0x1AD220u;
    // 0x1ad220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ad220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad224: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ad224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ad228:
    // 0x1ad228: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1ad228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ad22c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1ad22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ad230: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1ad230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ad234: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1ad234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ad238: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1ad238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ad23c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1ad23cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ad240: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1ad240u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ad244: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1ad244u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ad248: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1ad248u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ad24c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ad24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ad250: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1ad250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ad254: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1ad254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ad258: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD258u;
            // 0x1ad25c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACCA0u: goto label_1acca0;
            case 0x1ACCD0u: goto label_1accd0;
            case 0x1ACCFCu: goto label_1accfc;
            case 0x1ACD28u: goto label_1acd28;
            case 0x1ACD54u: goto label_1acd54;
            case 0x1ACD98u: goto label_1acd98;
            case 0x1ACDE0u: goto label_1acde0;
            case 0x1ACDF8u: goto label_1acdf8;
            case 0x1ACE08u: goto label_1ace08;
            case 0x1ACE0Cu: goto label_1ace0c;
            case 0x1ACE44u: goto label_1ace44;
            case 0x1ACE48u: goto label_1ace48;
            case 0x1ACE9Cu: goto label_1ace9c;
            case 0x1ACEB8u: goto label_1aceb8;
            case 0x1ACED4u: goto label_1aced4;
            case 0x1ACEF4u: goto label_1acef4;
            case 0x1ACF04u: goto label_1acf04;
            case 0x1ACF28u: goto label_1acf28;
            case 0x1ACF48u: goto label_1acf48;
            case 0x1ACF64u: goto label_1acf64;
            case 0x1ACF84u: goto label_1acf84;
            case 0x1ACFB8u: goto label_1acfb8;
            case 0x1ACFD0u: goto label_1acfd0;
            case 0x1ACFE0u: goto label_1acfe0;
            case 0x1ACFE4u: goto label_1acfe4;
            case 0x1AD01Cu: goto label_1ad01c;
            case 0x1AD03Cu: goto label_1ad03c;
            case 0x1AD054u: goto label_1ad054;
            case 0x1AD060u: goto label_1ad060;
            case 0x1AD064u: goto label_1ad064;
            case 0x1AD06Cu: goto label_1ad06c;
            case 0x1AD0B8u: goto label_1ad0b8;
            case 0x1AD0BCu: goto label_1ad0bc;
            case 0x1AD128u: goto label_1ad128;
            case 0x1AD144u: goto label_1ad144;
            case 0x1AD150u: goto label_1ad150;
            case 0x1AD168u: goto label_1ad168;
            case 0x1AD18Cu: goto label_1ad18c;
            case 0x1AD194u: goto label_1ad194;
            case 0x1AD1B4u: goto label_1ad1b4;
            case 0x1AD228u: goto label_1ad228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD260u;
}
