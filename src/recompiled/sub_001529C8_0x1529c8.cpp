#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001529C8
// Address: 0x1529c8 - 0x153250
void sub_001529C8_0x1529c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001529C8_0x1529c8");
#endif

    ctx->pc = 0x1529c8u;

    // 0x1529c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1529c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1529cc: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x1529ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x1529d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1529d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1529d4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x1529d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x1529d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1529d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1529dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1529dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1529e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1529e4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1529e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1529e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1529e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1529ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1529ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1529f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1529f4: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x1529f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x1529f8: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x1529f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x1529fc: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1529fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x152a00: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x152a00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x152a04: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x152a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x152a08: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x152a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x152a0c: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x152a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x152a10: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x152a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x152a14: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x152a14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x152a18: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x152a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x152a1c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x152a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x152a20: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x152a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x152a24: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x152a24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x152a28: 0xc08e222  jal         func_238888
    ctx->pc = 0x152A28u;
    SET_GPR_U32(ctx, 31, 0x152A30u);
    ctx->pc = 0x152A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152A28u;
            // 0x152a2c: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A30u; }
        if (ctx->pc != 0x152A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A30u; }
        if (ctx->pc != 0x152A30u) { return; }
    }
    ctx->pc = 0x152A30u;
    // 0x152a30: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x152a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x152a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x152a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a3c: 0xc08e222  jal         func_238888
    ctx->pc = 0x152A3Cu;
    SET_GPR_U32(ctx, 31, 0x152A44u);
    ctx->pc = 0x152A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152A3Cu;
            // 0x152a40: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A44u; }
        if (ctx->pc != 0x152A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A44u; }
        if (ctx->pc != 0x152A44u) { return; }
    }
    ctx->pc = 0x152A44u;
    // 0x152a44: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x152a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x152a48: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x152a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x152a4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x152a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x152a50: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x152a50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x152a54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x152a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152a58: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x152a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x152a5c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x152a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x152a60: 0x26430024  addiu       $v1, $s2, 0x24
    ctx->pc = 0x152a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x152a64: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x152a64u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x152a68: 0x2484d608  addiu       $a0, $a0, -0x29F8
    ctx->pc = 0x152a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956552));
    // 0x152a6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x152a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x152a70: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x152a70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x152a74: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x152a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x152a78: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x152a78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x152a7c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x152a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x152a80: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x152a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x152a84: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x152a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
    // 0x152a88: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x152a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x152a8c: 0xacc23980  sw          $v0, 0x3980($a2)
    ctx->pc = 0x152a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 14720), GPR_U32(ctx, 2));
    // 0x152a90: 0xae440020  sw          $a0, 0x20($s2)
    ctx->pc = 0x152a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
    // 0x152a94: 0xa6450004  sh          $a1, 0x4($s2)
    ctx->pc = 0x152a94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x152a98: 0xae203978  sw          $zero, 0x3978($s1)
    ctx->pc = 0x152a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 14712), GPR_U32(ctx, 0));
    // 0x152a9c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x152A9Cu;
    SET_GPR_U32(ctx, 31, 0x152AA4u);
    ctx->pc = 0x152AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152A9Cu;
            // 0x152aa0: 0xae60397c  sw          $zero, 0x397C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 14716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AA4u; }
        if (ctx->pc != 0x152AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AA4u; }
        if (ctx->pc != 0x152AA4u) { return; }
    }
    ctx->pc = 0x152AA4u;
    // 0x152aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x152aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152aa8: 0x3405a000  ori         $a1, $zero, 0xA000
    ctx->pc = 0x152aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x152aac: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x152AACu;
    SET_GPR_U32(ctx, 31, 0x152AB4u);
    ctx->pc = 0x152AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152AACu;
            // 0x152ab0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AB4u; }
        if (ctx->pc != 0x152AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AB4u; }
        if (ctx->pc != 0x152AB4u) { return; }
    }
    ctx->pc = 0x152AB4u;
    // 0x152ab4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x152ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x152ab8: 0x8e64397c  lw          $a0, 0x397C($s3)
    ctx->pc = 0x152ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14716)));
    // 0x152abc: 0x8cc51060  lw          $a1, 0x1060($a2)
    ctx->pc = 0x152abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4192)));
    // 0x152ac0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x152ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x152ac4: 0xac62105c  sw          $v0, 0x105C($v1)
    ctx->pc = 0x152ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4188), GPR_U32(ctx, 2));
    // 0x152ac8: 0x85202b  sltu        $a0, $a0, $a1
    ctx->pc = 0x152ac8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x152acc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x152ACCu;
    {
        const bool branch_taken_0x152acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152ACCu;
            // 0x152ad0: 0xae253978  sw          $a1, 0x3978($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 14712), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152acc) {
            ctx->pc = 0x152AD8u;
            goto label_152ad8;
        }
    }
    ctx->pc = 0x152AD4u;
    // 0x152ad4: 0xae65397c  sw          $a1, 0x397C($s3)
    ctx->pc = 0x152ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 14716), GPR_U32(ctx, 5));
label_152ad8:
    // 0x152ad8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x152ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x152adc: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x152adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x152ae0: 0xac40104c  sw          $zero, 0x104C($v0)
    ctx->pc = 0x152ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4172), GPR_U32(ctx, 0));
    // 0x152ae4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x152ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ae8: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x152ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x152aec: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x152aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x152af0: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x152af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x152af4: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x152af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x152af8: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x152af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x152afc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x152afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152b00: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x152b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152b04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152b08: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x152b08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152b10: 0xacc01060  sw          $zero, 0x1060($a2)
    ctx->pc = 0x152b10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4192), GPR_U32(ctx, 0));
    // 0x152b14: 0x3e00008  jr          $ra
    ctx->pc = 0x152B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152B14u;
            // 0x152b18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x152B1Cu;
    // 0x152b1c: 0x0  nop
    ctx->pc = 0x152b1cu;
    // NOP
    // 0x152b20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x152b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x152b24: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x152b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x152b28: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x152b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x152b2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x152b2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b30: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x152b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x152b34: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x152b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x152b38: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x152b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x152b3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x152b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x152b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152b44: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x152b44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x152b48: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x152b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x152b4c: 0x2443fff1  addiu       $v1, $v0, -0xF
    ctx->pc = 0x152b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x152b50: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x152b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x152b54: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x152B54u;
    {
        const bool branch_taken_0x152b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152B54u;
            // 0x152b58: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b54) {
            ctx->pc = 0x152DFCu;
            goto label_152dfc;
        }
    }
    ctx->pc = 0x152B5Cu;
    // 0x152b5c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x152b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x152b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x152b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x152b64: 0x244222b0  addiu       $v0, $v0, 0x22B0
    ctx->pc = 0x152b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8880));
    // 0x152b68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x152b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152b6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x152b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152b70: 0x400008  jr          $v0
    ctx->pc = 0x152B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x152B78u;
label_152b78:
    // 0x152b78: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x152B78u;
    SET_GPR_U32(ctx, 31, 0x152B80u);
    ctx->pc = 0x152B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152B78u;
            // 0x152b7c: 0x240400d8  addiu       $a0, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B80u; }
        if (ctx->pc != 0x152B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B80u; }
        if (ctx->pc != 0x152B80u) { return; }
    }
    ctx->pc = 0x152B80u;
    // 0x152b80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x152b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b84: 0xc055d16  jal         func_157458
    ctx->pc = 0x152B84u;
    SET_GPR_U32(ctx, 31, 0x152B8Cu);
    ctx->pc = 0x152B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152B84u;
            // 0x152b88: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157458u;
    if (runtime->hasFunction(0x157458u)) {
        auto targetFn = runtime->lookupFunction(0x157458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B8Cu; }
        if (ctx->pc != 0x152B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157458_0x157458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B8Cu; }
        if (ctx->pc != 0x152B8Cu) { return; }
    }
    ctx->pc = 0x152B8Cu;
    // 0x152b8c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x152B8Cu;
    {
        const bool branch_taken_0x152b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152B8Cu;
            // 0x152b90: 0xaea20034  sw          $v0, 0x34($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b8c) {
            ctx->pc = 0x152E00u;
            goto label_152e00;
        }
    }
    ctx->pc = 0x152B94u;
label_152b94:
    // 0x152b94: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x152B94u;
    SET_GPR_U32(ctx, 31, 0x152B9Cu);
    ctx->pc = 0x152B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152B94u;
            // 0x152b98: 0x240400d8  addiu       $a0, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B9Cu; }
        if (ctx->pc != 0x152B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B9Cu; }
        if (ctx->pc != 0x152B9Cu) { return; }
    }
    ctx->pc = 0x152B9Cu;
    // 0x152b9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x152b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ba0: 0xc050632  jal         func_1418C8
    ctx->pc = 0x152BA0u;
    SET_GPR_U32(ctx, 31, 0x152BA8u);
    ctx->pc = 0x152BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152BA0u;
            // 0x152ba4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1418C8u;
    if (runtime->hasFunction(0x1418C8u)) {
        auto targetFn = runtime->lookupFunction(0x1418C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BA8u; }
        if (ctx->pc != 0x152BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1418c8_0x141af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BA8u; }
        if (ctx->pc != 0x152BA8u) { return; }
    }
    ctx->pc = 0x152BA8u;
    // 0x152ba8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x152BA8u;
    {
        const bool branch_taken_0x152ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152BA8u;
            // 0x152bac: 0xaea20038  sw          $v0, 0x38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ba8) {
            ctx->pc = 0x152E00u;
            goto label_152e00;
        }
    }
    ctx->pc = 0x152BB0u;
label_152bb0:
    // 0x152bb0: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x152BB0u;
    SET_GPR_U32(ctx, 31, 0x152BB8u);
    ctx->pc = 0x152BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152BB0u;
            // 0x152bb4: 0x240400d8  addiu       $a0, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BB8u; }
        if (ctx->pc != 0x152BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BB8u; }
        if (ctx->pc != 0x152BB8u) { return; }
    }
    ctx->pc = 0x152BB8u;
    // 0x152bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x152bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bbc: 0xc05760a  jal         func_15D828
    ctx->pc = 0x152BBCu;
    SET_GPR_U32(ctx, 31, 0x152BC4u);
    ctx->pc = 0x152BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152BBCu;
            // 0x152bc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D828u;
    if (runtime->hasFunction(0x15D828u)) {
        auto targetFn = runtime->lookupFunction(0x15D828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BC4u; }
        if (ctx->pc != 0x152BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D828_0x15d828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BC4u; }
        if (ctx->pc != 0x152BC4u) { return; }
    }
    ctx->pc = 0x152BC4u;
    // 0x152bc4: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x152BC4u;
    {
        const bool branch_taken_0x152bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152BC4u;
            // 0x152bc8: 0xaea2003c  sw          $v0, 0x3C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bc4) {
            ctx->pc = 0x152E00u;
            goto label_152e00;
        }
    }
    ctx->pc = 0x152BCCu;
label_152bcc:
    // 0x152bcc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x152BCCu;
    SET_GPR_U32(ctx, 31, 0x152BD4u);
    ctx->pc = 0x152BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152BCCu;
            // 0x152bd0: 0x240400d8  addiu       $a0, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BD4u; }
        if (ctx->pc != 0x152BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BD4u; }
        if (ctx->pc != 0x152BD4u) { return; }
    }
    ctx->pc = 0x152BD4u;
    // 0x152bd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x152bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bd8: 0xc052cb4  jal         func_14B2D0
    ctx->pc = 0x152BD8u;
    SET_GPR_U32(ctx, 31, 0x152BE0u);
    ctx->pc = 0x152BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152BD8u;
            // 0x152bdc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2D0u;
    if (runtime->hasFunction(0x14B2D0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BE0u; }
        if (ctx->pc != 0x152BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B2D0_0x14b2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BE0u; }
        if (ctx->pc != 0x152BE0u) { return; }
    }
    ctx->pc = 0x152BE0u;
    // 0x152be0: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x152BE0u;
    {
        const bool branch_taken_0x152be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152BE0u;
            // 0x152be4: 0xaea20040  sw          $v0, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152be0) {
            ctx->pc = 0x152E00u;
            goto label_152e00;
        }
    }
    ctx->pc = 0x152BE8u;
label_152be8:
    // 0x152be8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x152BE8u;
    SET_GPR_U32(ctx, 31, 0x152BF0u);
    ctx->pc = 0x152BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152BE8u;
            // 0x152bec: 0x240400d8  addiu       $a0, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BF0u; }
        if (ctx->pc != 0x152BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BF0u; }
        if (ctx->pc != 0x152BF0u) { return; }
    }
    ctx->pc = 0x152BF0u;
    // 0x152bf0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x152bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x152bf4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x152bf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bf8: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x152bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x152bfc: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x152bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x152c00: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x152c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x152c04: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x152c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x152c08: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x152c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x152c0c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x152c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x152c10: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x152c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x152c14: 0xa6650000  sh          $a1, 0x0($s3)
    ctx->pc = 0x152c14u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x152c18: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x152c18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
    // 0x152c1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x152c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c20: 0xae670020  sw          $a3, 0x20($s3)
    ctx->pc = 0x152c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 7));
    // 0x152c24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x152c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c28: 0xa6630004  sh          $v1, 0x4($s3)
    ctx->pc = 0x152c28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x152c2c: 0x26710028  addiu       $s1, $s3, 0x28
    ctx->pc = 0x152c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x152c30: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x152c30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x152c34: 0x26720034  addiu       $s2, $s3, 0x34
    ctx->pc = 0x152c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x152c38: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x152c38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x152c3c: 0xc08e222  jal         func_238888
    ctx->pc = 0x152C3Cu;
    SET_GPR_U32(ctx, 31, 0x152C44u);
    ctx->pc = 0x152C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152C3Cu;
            // 0x152c40: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C44u; }
        if (ctx->pc != 0x152C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C44u; }
        if (ctx->pc != 0x152C44u) { return; }
    }
    ctx->pc = 0x152C44u;
    // 0x152c44: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x152c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x152c48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x152c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x152c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c50: 0xc08e222  jal         func_238888
    ctx->pc = 0x152C50u;
    SET_GPR_U32(ctx, 31, 0x152C58u);
    ctx->pc = 0x152C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152C50u;
            // 0x152c54: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C58u; }
        if (ctx->pc != 0x152C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C58u; }
        if (ctx->pc != 0x152C58u) { return; }
    }
    ctx->pc = 0x152C58u;
    // 0x152c58: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x152c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x152c5c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x152c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x152c60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x152c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x152c64: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x152c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x152c68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x152c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152c6c: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x152c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
    // 0x152c70: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x152c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x152c74: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x152c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
    // 0x152c78: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x152C78u;
    SET_GPR_U32(ctx, 31, 0x152C80u);
    ctx->pc = 0x152C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152C78u;
            // 0x152c7c: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C80u; }
        if (ctx->pc != 0x152C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C80u; }
        if (ctx->pc != 0x152C80u) { return; }
    }
    ctx->pc = 0x152C80u;
    // 0x152c80: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x152c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x152c84: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x152c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x152c88: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x152c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x152c8c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x152c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x152c90: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x152c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x152c94: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x152C94u;
    SET_GPR_U32(ctx, 31, 0x152C9Cu);
    ctx->pc = 0x152C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152C94u;
            // 0x152c98: 0xae620028  sw          $v0, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C9Cu; }
        if (ctx->pc != 0x152C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C9Cu; }
        if (ctx->pc != 0x152C9Cu) { return; }
    }
    ctx->pc = 0x152C9Cu;
    // 0x152c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152ca0: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x152ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x152ca4: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x152ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x152ca8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x152ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x152cac: 0xae630040  sw          $v1, 0x40($s3)
    ctx->pc = 0x152cacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
    // 0x152cb0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x152CB0u;
    SET_GPR_U32(ctx, 31, 0x152CB8u);
    ctx->pc = 0x152CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152CB0u;
            // 0x152cb4: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152CB8u; }
        if (ctx->pc != 0x152CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152CB8u; }
        if (ctx->pc != 0x152CB8u) { return; }
    }
    ctx->pc = 0x152CB8u;
    // 0x152cb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x152cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x152cbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x152cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x152cc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_152cc8:
    // 0x152cc8: 0x0  nop
    ctx->pc = 0x152cc8u;
    // NOP
    // 0x152ccc: 0x0  nop
    ctx->pc = 0x152cccu;
    // NOP
    // 0x152cd0: 0x0  nop
    ctx->pc = 0x152cd0u;
    // NOP
    // 0x152cd4: 0x0  nop
    ctx->pc = 0x152cd4u;
    // NOP
    // 0x152cd8: 0x0  nop
    ctx->pc = 0x152cd8u;
    // NOP
    // 0x152cdc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x152CDCu;
    {
        const bool branch_taken_0x152cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x152CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152CDCu;
            // 0x152ce0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cdc) {
            ctx->pc = 0x152CC8u;
            runtime->cooperativeGuestYield();
            goto label_152cc8;
        }
    }
    ctx->pc = 0x152CE4u;
    // 0x152ce4: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x152ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x152ce8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x152ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cec: 0xae640024  sw          $a0, 0x24($s3)
    ctx->pc = 0x152cecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 4));
    // 0x152cf0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x152CF0u;
    {
        const bool branch_taken_0x152cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152CF0u;
            // 0x152cf4: 0xae600044  sw          $zero, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cf0) {
            ctx->pc = 0x152DA4u;
            goto label_152da4;
        }
    }
    ctx->pc = 0x152CF8u;
    // 0x152cf8: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x152cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x152cfc: 0x0  nop
    ctx->pc = 0x152cfcu;
    // NOP
label_152d00:
    // 0x152d00: 0x8e710014  lw          $s1, 0x14($s3)
    ctx->pc = 0x152d00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x152d04: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x152d04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x152d08: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x152d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x152d0c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x152d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x152d10: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x152D10u;
    SET_GPR_U32(ctx, 31, 0x152D18u);
    ctx->pc = 0x152D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152D10u;
            // 0x152d14: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152D18u; }
        if (ctx->pc != 0x152D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152D18u; }
        if (ctx->pc != 0x152D18u) { return; }
    }
    ctx->pc = 0x152D18u;
    // 0x152d18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x152d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x152d1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x152d1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x152d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x152d24: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x152D24u;
    {
        const bool branch_taken_0x152d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D24u;
            // 0x152d28: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d24) {
            ctx->pc = 0x152D54u;
            goto label_152d54;
        }
    }
    ctx->pc = 0x152D2Cu;
    // 0x152d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x152d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d30: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x152d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x152d34: 0x0  nop
    ctx->pc = 0x152d34u;
    // NOP
label_152d38:
    // 0x152d38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x152d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x152d3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x152d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x152d40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x152d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x152d44: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x152d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x152d48: 0x0  nop
    ctx->pc = 0x152d48u;
    // NOP
    // 0x152d4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x152D4Cu;
    {
        const bool branch_taken_0x152d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D4Cu;
            // 0x152d50: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d4c) {
            ctx->pc = 0x152D38u;
            runtime->cooperativeGuestYield();
            goto label_152d38;
        }
    }
    ctx->pc = 0x152D54u;
label_152d54:
    // 0x152d54: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x152d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x152d58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x152D58u;
    {
        const bool branch_taken_0x152d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D58u;
            // 0x152d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d58) {
            ctx->pc = 0x152D90u;
            goto label_152d90;
        }
    }
    ctx->pc = 0x152D60u;
    // 0x152d60: 0x8e670024  lw          $a3, 0x24($s3)
    ctx->pc = 0x152d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x152d64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_152d68:
    // 0x152d68: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x152d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x152d6c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x152d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x152d70: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x152d70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x152d74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x152d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x152d78: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x152d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x152d7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152d80: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x152d80u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x152d84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x152d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152d88: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x152D88u;
    {
        const bool branch_taken_0x152d88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x152D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D88u;
            // 0x152d8c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d88) {
            ctx->pc = 0x152D68u;
            runtime->cooperativeGuestYield();
            goto label_152d68;
        }
    }
    ctx->pc = 0x152D90u;
label_152d90:
    // 0x152d90: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x152d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x152d94: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x152d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x152d98: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x152d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x152d9c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x152D9Cu;
    {
        const bool branch_taken_0x152d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D9Cu;
            // 0x152da0: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d9c) {
            ctx->pc = 0x152D00u;
            runtime->cooperativeGuestYield();
            goto label_152d00;
        }
    }
    ctx->pc = 0x152DA4u;
label_152da4:
    // 0x152da4: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x152da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x152da8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152dac: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x152dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x152db0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x152db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x152db4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x152db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x152db8: 0x2463b6c8  addiu       $v1, $v1, -0x4938
    ctx->pc = 0x152db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948552));
    // 0x152dbc: 0xae6200c8  sw          $v0, 0xC8($s3)
    ctx->pc = 0x152dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 2));
    // 0x152dc0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x152dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152dc4: 0xae6500d0  sw          $a1, 0xD0($s3)
    ctx->pc = 0x152dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 5));
    // 0x152dc8: 0xae6400cc  sw          $a0, 0xCC($s3)
    ctx->pc = 0x152dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 4));
    // 0x152dcc: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x152dccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
    // 0x152dd0: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x152dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
    // 0x152dd4: 0xaeb30044  sw          $s3, 0x44($s5)
    ctx->pc = 0x152dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 19));
    // 0x152dd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x152DD8u;
    {
        const bool branch_taken_0x152dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152DD8u;
            // 0x152ddc: 0xae6000d4  sw          $zero, 0xD4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152dd8) {
            ctx->pc = 0x152E00u;
            goto label_152e00;
        }
    }
    ctx->pc = 0x152DE0u;
label_152de0:
    // 0x152de0: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x152DE0u;
    SET_GPR_U32(ctx, 31, 0x152DE8u);
    ctx->pc = 0x152DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152DE0u;
            // 0x152de4: 0x240400d8  addiu       $a0, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152DE8u; }
        if (ctx->pc != 0x152DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152DE8u; }
        if (ctx->pc != 0x152DE8u) { return; }
    }
    ctx->pc = 0x152DE8u;
    // 0x152de8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x152de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152dec: 0xc059538  jal         func_1654E0
    ctx->pc = 0x152DECu;
    SET_GPR_U32(ctx, 31, 0x152DF4u);
    ctx->pc = 0x152DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152DECu;
            // 0x152df0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1654E0u;
    if (runtime->hasFunction(0x1654E0u)) {
        auto targetFn = runtime->lookupFunction(0x1654E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152DF4u; }
        if (ctx->pc != 0x152DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001654E0_0x1654e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152DF4u; }
        if (ctx->pc != 0x152DF4u) { return; }
    }
    ctx->pc = 0x152DF4u;
    // 0x152df4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x152DF4u;
    {
        const bool branch_taken_0x152df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152DF4u;
            // 0x152df8: 0xaea20048  sw          $v0, 0x48($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152df4) {
            ctx->pc = 0x152E00u;
            goto label_152e00;
        }
    }
    ctx->pc = 0x152DFCu;
label_152dfc:
    // 0x152dfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x152dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152e00:
    // 0x152e00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x152e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152e04: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x152e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152e08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x152e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152e0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152e10: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x152e10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152e14: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x152e14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x152E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152E1Cu;
            // 0x152e20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x152E24u;
    // 0x152e24: 0x0  nop
    ctx->pc = 0x152e24u;
    // NOP
    // 0x152e28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x152e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x152e2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x152e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x152e30: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x152e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x152e34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x152e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e38: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x152e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x152e3c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x152e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x152e40: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x152e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x152e44: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x152e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x152e48: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x152e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x152e4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152e50: 0xc053d24  jal         func_14F490
    ctx->pc = 0x152E50u;
    SET_GPR_U32(ctx, 31, 0x152E58u);
    ctx->pc = 0x152E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152E50u;
            // 0x152e54: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F490u;
    if (runtime->hasFunction(0x14F490u)) {
        auto targetFn = runtime->lookupFunction(0x14F490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E58u; }
        if (ctx->pc != 0x152E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F490_0x14f490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E58u; }
        if (ctx->pc != 0x152E58u) { return; }
    }
    ctx->pc = 0x152E58u;
    // 0x152e58: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x152e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x152e5c: 0x8c44c088  lw          $a0, -0x3F78($v0)
    ctx->pc = 0x152e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951048)));
    // 0x152e60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152E60u;
    {
        const bool branch_taken_0x152e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152E60u;
            // 0x152e64: 0x2450c088  addiu       $s0, $v0, -0x3F78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e60) {
            ctx->pc = 0x152E70u;
            goto label_152e70;
        }
    }
    ctx->pc = 0x152E68u;
    // 0x152e68: 0xc04a9b2  jal         func_12A6C8
    ctx->pc = 0x152E68u;
    SET_GPR_U32(ctx, 31, 0x152E70u);
    ctx->pc = 0x12A6C8u;
    if (runtime->hasFunction(0x12A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x12A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E70u; }
        if (ctx->pc != 0x152E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A6C8_0x12a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E70u; }
        if (ctx->pc != 0x152E70u) { return; }
    }
    ctx->pc = 0x152E70u;
label_152e70:
    // 0x152e70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x152e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152e74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152E74u;
    {
        const bool branch_taken_0x152e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152E74u;
            // 0x152e78: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e74) {
            ctx->pc = 0x152E88u;
            goto label_152e88;
        }
    }
    ctx->pc = 0x152E7Cu;
    // 0x152e7c: 0xc04a9b2  jal         func_12A6C8
    ctx->pc = 0x152E7Cu;
    SET_GPR_U32(ctx, 31, 0x152E84u);
    ctx->pc = 0x12A6C8u;
    if (runtime->hasFunction(0x12A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x12A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E84u; }
        if (ctx->pc != 0x152E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A6C8_0x12a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E84u; }
        if (ctx->pc != 0x152E84u) { return; }
    }
    ctx->pc = 0x152E84u;
    // 0x152e84: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x152e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_152e88:
    // 0x152e88: 0x3c14002d  lui         $s4, 0x2D
    ctx->pc = 0x152e88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)45 << 16));
    // 0x152e8c: 0xc047bca  jal         func_11EF28
    ctx->pc = 0x152E8Cu;
    SET_GPR_U32(ctx, 31, 0x152E94u);
    ctx->pc = 0x152E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152E8Cu;
            // 0x152e90: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EF28u;
    if (runtime->hasFunction(0x11EF28u)) {
        auto targetFn = runtime->lookupFunction(0x11EF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E94u; }
        if (ctx->pc != 0x152E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11ef28_0x11ef98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E94u; }
        if (ctx->pc != 0x152E94u) { return; }
    }
    ctx->pc = 0x152E94u;
    // 0x152e94: 0x8e92bc78  lw          $s2, -0x4388($s4)
    ctx->pc = 0x152e94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950008)));
    // 0x152e98: 0x2682bc78  addiu       $v0, $s4, -0x4388
    ctx->pc = 0x152e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950008));
    // 0x152e9c: 0x12420027  beq         $s2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x152E9Cu;
    {
        const bool branch_taken_0x152e9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x152EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152E9Cu;
            // 0x152ea0: 0x3c16002a  lui         $s6, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e9c) {
            ctx->pc = 0x152F3Cu;
            goto label_152f3c;
        }
    }
    ctx->pc = 0x152EA4u;
    // 0x152ea4: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x152ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_152ea8:
    // 0x152ea8: 0x8e2203a4  lw          $v0, 0x3A4($s1)
    ctx->pc = 0x152ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x152eac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x152EACu;
    {
        const bool branch_taken_0x152eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152EACu;
            // 0x152eb0: 0x26220360  addiu       $v0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152eac) {
            ctx->pc = 0x152F18u;
            goto label_152f18;
        }
    }
    ctx->pc = 0x152EB4u;
    // 0x152eb4: 0x8e240360  lw          $a0, 0x360($s1)
    ctx->pc = 0x152eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x152eb8: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x152EB8u;
    {
        const bool branch_taken_0x152eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x152EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152EB8u;
            // 0x152ebc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152eb8) {
            ctx->pc = 0x152EC4u;
            goto label_152ec4;
        }
    }
    ctx->pc = 0x152EC0u;
    // 0x152ec0: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x152ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_152ec4:
    // 0x152ec4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x152EC4u;
    {
        const bool branch_taken_0x152ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152EC4u;
            // 0x152ec8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ec4) {
            ctx->pc = 0x152F28u;
            goto label_152f28;
        }
    }
    ctx->pc = 0x152ECCu;
    // 0x152ecc: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x152eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x152ed0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152ED0u;
    {
        const bool branch_taken_0x152ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x152ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152ED0u;
            // 0x152ed4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ed0) {
            ctx->pc = 0x152EE0u;
            goto label_152ee0;
        }
    }
    ctx->pc = 0x152ED8u;
    // 0x152ed8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x152ED8u;
    {
        const bool branch_taken_0x152ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152ED8u;
            // 0x152edc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ed8) {
            ctx->pc = 0x152EFCu;
            goto label_152efc;
        }
    }
    ctx->pc = 0x152EE0u;
label_152ee0:
    // 0x152ee0: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x152ee0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x152ee4: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x152ee4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x152ee8: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x152EE8u;
    {
        const bool branch_taken_0x152ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x152EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152EE8u;
            // 0x152eec: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ee8) {
            ctx->pc = 0x152EFCu;
            goto label_152efc;
        }
    }
    ctx->pc = 0x152EF0u;
    // 0x152ef0: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x152EF0u;
    SET_GPR_U32(ctx, 31, 0x152EF8u);
    ctx->pc = 0x152EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152EF0u;
            // 0x152ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152EF8u; }
        if (ctx->pc != 0x152EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152EF8u; }
        if (ctx->pc != 0x152EF8u) { return; }
    }
    ctx->pc = 0x152EF8u;
    // 0x152ef8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x152ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_152efc:
    // 0x152efc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x152efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x152f00: 0x78850030  lq          $a1, 0x30($a0)
    ctx->pc = 0x152f00u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x152f04: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x152f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x152f08: 0xc047c26  jal         func_11F098
    ctx->pc = 0x152F08u;
    SET_GPR_U32(ctx, 31, 0x152F10u);
    ctx->pc = 0x152F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152F08u;
            // 0x152f0c: 0x8e2603ac  lw          $a2, 0x3AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F098u;
    if (runtime->hasFunction(0x11F098u)) {
        auto targetFn = runtime->lookupFunction(0x11F098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F10u; }
        if (ctx->pc != 0x152F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F098_0x11f098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F10u; }
        if (ctx->pc != 0x152F10u) { return; }
    }
    ctx->pc = 0x152F10u;
    // 0x152f10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x152F10u;
    {
        const bool branch_taken_0x152f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152F10u;
            // 0x152f14: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f10) {
            ctx->pc = 0x152F2Cu;
            goto label_152f2c;
        }
    }
    ctx->pc = 0x152F18u;
label_152f18:
    // 0x152f18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x152f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x152f1c: 0x8e2503ac  lw          $a1, 0x3AC($s1)
    ctx->pc = 0x152f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x152f20: 0xc047c06  jal         func_11F018
    ctx->pc = 0x152F20u;
    SET_GPR_U32(ctx, 31, 0x152F28u);
    ctx->pc = 0x152F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152F20u;
            // 0x152f24: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F018u;
    if (runtime->hasFunction(0x11F018u)) {
        auto targetFn = runtime->lookupFunction(0x11F018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F28u; }
        if (ctx->pc != 0x152F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F018_0x11f018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F28u; }
        if (ctx->pc != 0x152F28u) { return; }
    }
    ctx->pc = 0x152F28u;
label_152f28:
    // 0x152f28: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x152f28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_152f2c:
    // 0x152f2c: 0x2682bc78  addiu       $v0, $s4, -0x4388
    ctx->pc = 0x152f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950008));
    // 0x152f30: 0x5642ffdd  bnel        $s2, $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x152F30u;
    {
        const bool branch_taken_0x152f30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x152f30) {
            ctx->pc = 0x152F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152F30u;
            // 0x152f34: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152EA8u;
            runtime->cooperativeGuestYield();
            goto label_152ea8;
        }
    }
    ctx->pc = 0x152F38u;
    // 0x152f38: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x152f38u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
label_152f3c:
    // 0x152f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f40: 0x8ec4bcf8  lw          $a0, -0x4308($s6)
    ctx->pc = 0x152f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
    // 0x152f44: 0xc047be6  jal         func_11EF98
    ctx->pc = 0x152F44u;
    SET_GPR_U32(ctx, 31, 0x152F4Cu);
    ctx->pc = 0x152F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152F44u;
            // 0x152f48: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EF98u;
    if (runtime->hasFunction(0x11EF98u)) {
        auto targetFn = runtime->lookupFunction(0x11EF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F4Cu; }
        if (ctx->pc != 0x152F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EF98_0x11ef98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F4Cu; }
        if (ctx->pc != 0x152F4Cu) { return; }
    }
    ctx->pc = 0x152F4Cu;
    // 0x152f4c: 0x8e82bde0  lw          $v0, -0x4220($s4)
    ctx->pc = 0x152f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950368)));
    // 0x152f50: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x152F50u;
    {
        const bool branch_taken_0x152f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152f50) {
            ctx->pc = 0x152F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152F50u;
            // 0x152f54: 0x8e630040  lw          $v1, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152FB0u;
            goto label_152fb0;
        }
    }
    ctx->pc = 0x152F58u;
    // 0x152f58: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x152f58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x152f5c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x152f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x152f60: 0x8e12bc78  lw          $s2, -0x4388($s0)
    ctx->pc = 0x152f60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950008)));
    // 0x152f64: 0x2602bc78  addiu       $v0, $s0, -0x4388
    ctx->pc = 0x152f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950008));
    // 0x152f68: 0x52420011  beql        $s2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x152F68u;
    {
        const bool branch_taken_0x152f68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x152f68) {
            ctx->pc = 0x152F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152F68u;
            // 0x152f6c: 0x8e630040  lw          $v1, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152FB0u;
            goto label_152fb0;
        }
    }
    ctx->pc = 0x152F70u;
    // 0x152f70: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x152f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x152f74: 0x0  nop
    ctx->pc = 0x152f74u;
    // NOP
label_152f78:
    // 0x152f78: 0x8ca203a4  lw          $v0, 0x3A4($a1)
    ctx->pc = 0x152f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x152f7c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x152F7Cu;
    {
        const bool branch_taken_0x152f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152f7c) {
            ctx->pc = 0x152F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152F7Cu;
            // 0x152f80: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152FA0u;
            goto label_152fa0;
        }
    }
    ctx->pc = 0x152F84u;
    // 0x152f84: 0x8ca203ac  lw          $v0, 0x3AC($a1)
    ctx->pc = 0x152f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 940)));
    // 0x152f88: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x152f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x152f8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x152F8Cu;
    {
        const bool branch_taken_0x152f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152f8c) {
            ctx->pc = 0x152F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152F8Cu;
            // 0x152f90: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152FA0u;
            goto label_152fa0;
        }
    }
    ctx->pc = 0x152F94u;
    // 0x152f94: 0xc0496f8  jal         func_125BE0
    ctx->pc = 0x152F94u;
    SET_GPR_U32(ctx, 31, 0x152F9Cu);
    ctx->pc = 0x152F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152F94u;
            // 0x152f98: 0x8e84bde0  lw          $a0, -0x4220($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125BE0u;
    if (runtime->hasFunction(0x125BE0u)) {
        auto targetFn = runtime->lookupFunction(0x125BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F9Cu; }
        if (ctx->pc != 0x152F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_125be0_0x125c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F9Cu; }
        if (ctx->pc != 0x152F9Cu) { return; }
    }
    ctx->pc = 0x152F9Cu;
    // 0x152f9c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x152f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_152fa0:
    // 0x152fa0: 0x2602bc78  addiu       $v0, $s0, -0x4388
    ctx->pc = 0x152fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950008));
    // 0x152fa4: 0x5642fff4  bnel        $s2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x152FA4u;
    {
        const bool branch_taken_0x152fa4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x152fa4) {
            ctx->pc = 0x152FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152FA4u;
            // 0x152fa8: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152F78u;
            runtime->cooperativeGuestYield();
            goto label_152f78;
        }
    }
    ctx->pc = 0x152FACu;
    // 0x152fac: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x152facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_152fb0:
    // 0x152fb0: 0x3c15002d  lui         $s5, 0x2D
    ctx->pc = 0x152fb0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)45 << 16));
    // 0x152fb4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x152fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x152fb8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x152fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x152fbc: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x152fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x152fc0: 0x40f809  jalr        $v0
    ctx->pc = 0x152FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152FC8u);
        ctx->pc = 0x152FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152FC0u;
            // 0x152fc4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x152FC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x152FC8u; }
            if (ctx->pc != 0x152FC8u) { return; }
        }
        }
    }
    ctx->pc = 0x152FC8u;
    // 0x152fc8: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x152fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x152fcc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x152fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x152fd0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x152fd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x152fd4: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x152fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x152fd8: 0x40f809  jalr        $v0
    ctx->pc = 0x152FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152FE0u);
        ctx->pc = 0x152FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152FD8u;
            // 0x152fdc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x152FE0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x152FE0u; }
            if (ctx->pc != 0x152FE0u) { return; }
        }
        }
    }
    ctx->pc = 0x152FE0u;
    // 0x152fe0: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x152fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x152fe4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x152fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x152fe8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x152fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x152fec: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x152fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x152ff0: 0x40f809  jalr        $v0
    ctx->pc = 0x152FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152FF8u);
        ctx->pc = 0x152FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152FF0u;
            // 0x152ff4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x152FF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x152FF8u; }
            if (ctx->pc != 0x152FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x152FF8u;
    // 0x152ff8: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x152ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x152ffc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x152ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x153000: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x153000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x153004: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x153004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x153008: 0x40f809  jalr        $v0
    ctx->pc = 0x153008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153010u);
        ctx->pc = 0x15300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153008u;
            // 0x15300c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x153010u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x153010u; }
            if (ctx->pc != 0x153010u) { return; }
        }
        }
    }
    ctx->pc = 0x153010u;
    // 0x153010: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x153010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x153014: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x153014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x153018: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x153018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x15301c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x15301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x153020: 0x40f809  jalr        $v0
    ctx->pc = 0x153020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153028u);
        ctx->pc = 0x153024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153020u;
            // 0x153024: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x153028u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x153028u; }
            if (ctx->pc != 0x153028u) { return; }
        }
        }
    }
    ctx->pc = 0x153028u;
    // 0x153028: 0x8eb2bc78  lw          $s2, -0x4388($s5)
    ctx->pc = 0x153028u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950008)));
    // 0x15302c: 0x26a2bc78  addiu       $v0, $s5, -0x4388
    ctx->pc = 0x15302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950008));
    // 0x153030: 0x52420053  beql        $s2, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x153030u;
    {
        const bool branch_taken_0x153030 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x153030) {
            ctx->pc = 0x153034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153030u;
            // 0x153034: 0x8e630038  lw          $v1, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153180u;
            goto label_153180;
        }
    }
    ctx->pc = 0x153038u;
    // 0x153038: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x153038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x15303c: 0x0  nop
    ctx->pc = 0x15303cu;
    // NOP
label_153040:
    // 0x153040: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x153040u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x153044: 0x8c8203a4  lw          $v0, 0x3A4($a0)
    ctx->pc = 0x153044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x153048: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x153048u;
    {
        const bool branch_taken_0x153048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153048u;
            // 0x15304c: 0xae84104c  sw          $a0, 0x104C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153048) {
            ctx->pc = 0x15316Cu;
            goto label_15316c;
        }
    }
    ctx->pc = 0x153050u;
    // 0x153050: 0xc05a75c  jal         func_169D70
    ctx->pc = 0x153050u;
    SET_GPR_U32(ctx, 31, 0x153058u);
    ctx->pc = 0x153054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153050u;
            // 0x153054: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169D70u;
    if (runtime->hasFunction(0x169D70u)) {
        auto targetFn = runtime->lookupFunction(0x169D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153058u; }
        if (ctx->pc != 0x153058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_169d70_0x169df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153058u; }
        if (ctx->pc != 0x153058u) { return; }
    }
    ctx->pc = 0x153058u;
    // 0x153058: 0x8e83104c  lw          $v1, 0x104C($s4)
    ctx->pc = 0x153058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4172)));
    // 0x15305c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x15305cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x153060: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x153064: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x153064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x153068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15306c: 0xc4740384  lwc1        $f20, 0x384($v1)
    ctx->pc = 0x15306cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153070: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x153070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153074: 0xae021068  sw          $v0, 0x1068($s0)
    ctx->pc = 0x153074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4200), GPR_U32(ctx, 2));
    // 0x153078: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x153078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x15307c: 0x26101068  addiu       $s0, $s0, 0x1068
    ctx->pc = 0x15307cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4200));
    // 0x153080: 0xac6203b0  sw          $v0, 0x3B0($v1)
    ctx->pc = 0x153080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 944), GPR_U32(ctx, 2));
    // 0x153084: 0xac71039c  sw          $s1, 0x39C($v1)
    ctx->pc = 0x153084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 924), GPR_U32(ctx, 17));
    // 0x153088: 0xc05a75c  jal         func_169D70
    ctx->pc = 0x153088u;
    SET_GPR_U32(ctx, 31, 0x153090u);
    ctx->pc = 0x15308Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153088u;
            // 0x15308c: 0xe4600384  swc1        $f0, 0x384($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 900), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x169D70u;
    if (runtime->hasFunction(0x169D70u)) {
        auto targetFn = runtime->lookupFunction(0x169D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153090u; }
        if (ctx->pc != 0x153090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_169d70_0x169df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153090u; }
        if (ctx->pc != 0x153090u) { return; }
    }
    ctx->pc = 0x153090u;
    // 0x153090: 0x8e86104c  lw          $a2, 0x104C($s4)
    ctx->pc = 0x153090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4172)));
    // 0x153094: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x153094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x153098: 0x346300aa  ori         $v1, $v1, 0xAA
    ctx->pc = 0x153098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)170);
    // 0x15309c: 0x8ec4bcf8  lw          $a0, -0x4308($s6)
    ctx->pc = 0x15309cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950136)));
    // 0x1530a0: 0x8cc503ac  lw          $a1, 0x3AC($a2)
    ctx->pc = 0x1530a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 940)));
    // 0x1530a4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1530a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1530a8: 0xacd1039c  sw          $s1, 0x39C($a2)
    ctx->pc = 0x1530a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 924), GPR_U32(ctx, 17));
    // 0x1530ac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1530acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1530b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1530b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1530b4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1530b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1530b8: 0xe4d40384  swc1        $f20, 0x384($a2)
    ctx->pc = 0x1530b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 900), bits); }
    // 0x1530bc: 0xc047be6  jal         func_11EF98
    ctx->pc = 0x1530BCu;
    SET_GPR_U32(ctx, 31, 0x1530C4u);
    ctx->pc = 0x1530C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1530BCu;
            // 0x1530c0: 0xace31058  sw          $v1, 0x1058($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EF98u;
    if (runtime->hasFunction(0x11EF98u)) {
        auto targetFn = runtime->lookupFunction(0x11EF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1530C4u; }
        if (ctx->pc != 0x1530C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EF98_0x11ef98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1530C4u; }
        if (ctx->pc != 0x1530C4u) { return; }
    }
    ctx->pc = 0x1530C4u;
    // 0x1530c4: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x1530c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1530c8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1530c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1530cc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1530ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1530d0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1530d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1530d4: 0x40f809  jalr        $v0
    ctx->pc = 0x1530D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1530DCu);
        ctx->pc = 0x1530D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1530D4u;
            // 0x1530d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1530DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1530DCu; }
            if (ctx->pc != 0x1530DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1530DCu;
    // 0x1530dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1530dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1530e0: 0x8c42f1f0  lw          $v0, -0xE10($v0)
    ctx->pc = 0x1530e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963696)));
    // 0x1530e4: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1530E4u;
    {
        const bool branch_taken_0x1530e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1530e4) {
            ctx->pc = 0x1530E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1530E4u;
            // 0x1530e8: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153170u;
            goto label_153170;
        }
    }
    ctx->pc = 0x1530ECu;
    // 0x1530ec: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x1530ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1530f0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1530f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1530f4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1530f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1530f8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1530f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1530fc: 0x40f809  jalr        $v0
    ctx->pc = 0x1530FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153104u);
        ctx->pc = 0x153100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1530FCu;
            // 0x153100: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x153104u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x153104u; }
            if (ctx->pc != 0x153104u) { return; }
        }
        }
    }
    ctx->pc = 0x153104u;
    // 0x153104: 0x8e82104c  lw          $v0, 0x104C($s4)
    ctx->pc = 0x153104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4172)));
    // 0x153108: 0x8c430360  lw          $v1, 0x360($v0)
    ctx->pc = 0x153108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
    // 0x15310c: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x15310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x153110: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x153110u;
    {
        const bool branch_taken_0x153110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x153110) {
            ctx->pc = 0x153114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153110u;
            // 0x153114: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15311Cu;
            goto label_15311c;
        }
    }
    ctx->pc = 0x153118u;
    // 0x153118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15311c:
    // 0x15311c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15311Cu;
    {
        const bool branch_taken_0x15311c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15311c) {
            ctx->pc = 0x153120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15311Cu;
            // 0x153120: 0x8e630048  lw          $v1, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153140u;
            goto label_153140;
        }
    }
    ctx->pc = 0x153124u;
    // 0x153124: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x153124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x153128: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x153128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15312c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15312cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x153130: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x153130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x153134: 0x40f809  jalr        $v0
    ctx->pc = 0x153134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15313Cu);
        ctx->pc = 0x153138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153134u;
            // 0x153138: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15313Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15313Cu; }
            if (ctx->pc != 0x15313Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15313Cu;
    // 0x15313c: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x15313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_153140:
    // 0x153140: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x153140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x153144: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x153144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x153148: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x153148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x15314c: 0x40f809  jalr        $v0
    ctx->pc = 0x15314Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153154u);
        ctx->pc = 0x153150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15314Cu;
            // 0x153150: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x153154u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x153154u; }
            if (ctx->pc != 0x153154u) { return; }
        }
        }
    }
    ctx->pc = 0x153154u;
    // 0x153154: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x153154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x153158: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x153158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15315c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15315cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x153160: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x153160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x153164: 0x40f809  jalr        $v0
    ctx->pc = 0x153164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15316Cu);
        ctx->pc = 0x153168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153164u;
            // 0x153168: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15316Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15316Cu; }
            if (ctx->pc != 0x15316Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15316Cu;
label_15316c:
    // 0x15316c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x15316cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_153170:
    // 0x153170: 0x26a2bc78  addiu       $v0, $s5, -0x4388
    ctx->pc = 0x153170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950008));
    // 0x153174: 0x5642ffb2  bnel        $s2, $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x153174u;
    {
        const bool branch_taken_0x153174 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x153174) {
            ctx->pc = 0x153178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153174u;
            // 0x153178: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153040u;
            runtime->cooperativeGuestYield();
            goto label_153040;
        }
    }
    ctx->pc = 0x15317Cu;
    // 0x15317c: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x15317cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_153180:
    // 0x153180: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x153180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x153184: 0xac40104c  sw          $zero, 0x104C($v0)
    ctx->pc = 0x153184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4172), GPR_U32(ctx, 0));
    // 0x153188: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x153188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15318c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x15318cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x153190: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x153190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x153194: 0x40f809  jalr        $v0
    ctx->pc = 0x153194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15319Cu);
        ctx->pc = 0x153198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153194u;
            // 0x153198: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15319Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15319Cu; }
            if (ctx->pc != 0x15319Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15319Cu;
    // 0x15319c: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x15319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1531a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1531a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1531a4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1531a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1531a8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1531a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1531ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1531ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1531B4u);
        ctx->pc = 0x1531B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1531ACu;
            // 0x1531b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1531B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1531B4u; }
            if (ctx->pc != 0x1531B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1531B4u;
    // 0x1531b4: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x1531b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1531b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1531b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1531bc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1531bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1531c0: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1531c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1531c4: 0x40f809  jalr        $v0
    ctx->pc = 0x1531C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1531CCu);
        ctx->pc = 0x1531C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1531C4u;
            // 0x1531c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1531CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1531CCu; }
            if (ctx->pc != 0x1531CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1531CCu;
    // 0x1531cc: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x1531ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1531d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1531d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1531d4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1531d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1531d8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1531d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1531dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1531DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1531E4u);
        ctx->pc = 0x1531E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1531DCu;
            // 0x1531e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1531E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1531E4u; }
            if (ctx->pc != 0x1531E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1531E4u;
    // 0x1531e4: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x1531e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1531e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1531e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1531ec: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1531ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1531f0: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1531f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1531f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1531F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1531FCu);
        ctx->pc = 0x1531F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1531F4u;
            // 0x1531f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1531FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1531FCu; }
            if (ctx->pc != 0x1531FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1531FCu;
    // 0x1531fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1531fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x153200: 0x8c42ec50  lw          $v0, -0x13B0($v0)
    ctx->pc = 0x153200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x153204: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153204u;
    {
        const bool branch_taken_0x153204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153204u;
            // 0x153208: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153204) {
            ctx->pc = 0x153220u;
            goto label_153220;
        }
    }
    ctx->pc = 0x15320Cu;
    // 0x15320c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x153210: 0xc04623c  jal         func_1188F0
    ctx->pc = 0x153210u;
    SET_GPR_U32(ctx, 31, 0x153218u);
    ctx->pc = 0x153214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153210u;
            // 0x153214: 0x8c44e854  lw          $a0, -0x17AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1188F0u;
    if (runtime->hasFunction(0x1188F0u)) {
        auto targetFn = runtime->lookupFunction(0x1188F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153218u; }
        if (ctx->pc != 0x153218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001188F0_0x1188f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153218u; }
        if (ctx->pc != 0x153218u) { return; }
    }
    ctx->pc = 0x153218u;
    // 0x153218: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x153218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15321c: 0x0  nop
    ctx->pc = 0x15321cu;
    // NOP
label_153220:
    // 0x153220: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x153220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x153224: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x153224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153228: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x153228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15322c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x15322cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153230: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x153230u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153234: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x153234u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15323c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x15323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153240: 0x3e00008  jr          $ra
    ctx->pc = 0x153240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153240u;
            // 0x153244: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152AD8u: goto label_152ad8;
            case 0x152B78u: goto label_152b78;
            case 0x152B94u: goto label_152b94;
            case 0x152BB0u: goto label_152bb0;
            case 0x152BCCu: goto label_152bcc;
            case 0x152BE8u: goto label_152be8;
            case 0x152CC8u: goto label_152cc8;
            case 0x152D00u: goto label_152d00;
            case 0x152D38u: goto label_152d38;
            case 0x152D54u: goto label_152d54;
            case 0x152D68u: goto label_152d68;
            case 0x152D90u: goto label_152d90;
            case 0x152DA4u: goto label_152da4;
            case 0x152DE0u: goto label_152de0;
            case 0x152DFCu: goto label_152dfc;
            case 0x152E00u: goto label_152e00;
            case 0x152E70u: goto label_152e70;
            case 0x152E88u: goto label_152e88;
            case 0x152EA8u: goto label_152ea8;
            case 0x152EC4u: goto label_152ec4;
            case 0x152EE0u: goto label_152ee0;
            case 0x152EFCu: goto label_152efc;
            case 0x152F18u: goto label_152f18;
            case 0x152F28u: goto label_152f28;
            case 0x152F2Cu: goto label_152f2c;
            case 0x152F3Cu: goto label_152f3c;
            case 0x152F78u: goto label_152f78;
            case 0x152FA0u: goto label_152fa0;
            case 0x152FB0u: goto label_152fb0;
            case 0x153040u: goto label_153040;
            case 0x15311Cu: goto label_15311c;
            case 0x153140u: goto label_153140;
            case 0x15316Cu: goto label_15316c;
            case 0x153170u: goto label_153170;
            case 0x153180u: goto label_153180;
            case 0x153220u: goto label_153220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x153248u;
    // 0x153248: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x153248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15324c: 0x0  nop
    ctx->pc = 0x15324cu;
    // NOP
}
