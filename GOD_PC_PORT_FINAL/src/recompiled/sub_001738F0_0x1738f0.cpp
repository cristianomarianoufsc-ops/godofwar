#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001738F0
// Address: 0x1738f0 - 0x173e30
void sub_001738F0_0x1738f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001738F0_0x1738f0");
#endif

    ctx->pc = 0x1738f0u;

    // 0x1738f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1738f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1738f4: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x1738f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x1738f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1738f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1738fc: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x1738fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x173900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17390c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17390cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173910: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x173910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x173914: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x173914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x173918: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x173918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17391c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x17391cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x173920: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x173920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x173924: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x173924u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x173928: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x173928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x17392c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x17392cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x173930: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x173930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x173934: 0xa6080000  sh          $t0, 0x0($s0)
    ctx->pc = 0x173934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x173938: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x173938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x17393c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x17393cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x173940: 0xc08e222  jal         func_238888
    ctx->pc = 0x173940u;
    SET_GPR_U32(ctx, 31, 0x173948u);
    ctx->pc = 0x173944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173940u;
            // 0x173944: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173948u; }
        if (ctx->pc != 0x173948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173948u; }
        if (ctx->pc != 0x173948u) { return; }
    }
    ctx->pc = 0x173948u;
    // 0x173948: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x173948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17394c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17394cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173954: 0xc08e222  jal         func_238888
    ctx->pc = 0x173954u;
    SET_GPR_U32(ctx, 31, 0x17395Cu);
    ctx->pc = 0x173958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173954u;
            // 0x173958: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17395Cu; }
        if (ctx->pc != 0x17395Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17395Cu; }
        if (ctx->pc != 0x17395Cu) { return; }
    }
    ctx->pc = 0x17395Cu;
    // 0x17395c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17395cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x173960: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x173960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x173964: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x173964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x173968: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x173968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x17396c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x173970: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x173970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x173974: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x173974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x173978: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x173978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x17397c: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x17397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x173980: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x173980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x173984: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x173984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x173988: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x173988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x17398c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x17398cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x173990: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x173990u;
    SET_GPR_U32(ctx, 31, 0x173998u);
    ctx->pc = 0x173994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173990u;
            // 0x173994: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173998u; }
        if (ctx->pc != 0x173998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173998u; }
        if (ctx->pc != 0x173998u) { return; }
    }
    ctx->pc = 0x173998u;
    // 0x173998: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x173998u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17399c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1739a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1739a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1739a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1739a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1739a8: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x1739a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1739ac: 0x2442e470  addiu       $v0, $v0, -0x1B90
    ctx->pc = 0x1739acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960240));
    // 0x1739b0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1739b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1739b4: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x1739b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x1739b8: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1739b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1739bc: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x1739bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x1739c0: 0xc08f3c2  jal         func_23CF08
    ctx->pc = 0x1739C0u;
    SET_GPR_U32(ctx, 31, 0x1739C8u);
    ctx->pc = 0x1739C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1739C0u;
            // 0x1739c4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CF08u;
    if (runtime->hasFunction(0x23CF08u)) {
        auto targetFn = runtime->lookupFunction(0x23CF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739C8u; }
        if (ctx->pc != 0x1739C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cf08_0x23cf18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739C8u; }
        if (ctx->pc != 0x1739C8u) { return; }
    }
    ctx->pc = 0x1739C8u;
    // 0x1739c8: 0xc08f3ca  jal         func_23CF28
    ctx->pc = 0x1739C8u;
    SET_GPR_U32(ctx, 31, 0x1739D0u);
    ctx->pc = 0x1739CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1739C8u;
            // 0x1739cc: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CF28u;
    if (runtime->hasFunction(0x23CF28u)) {
        auto targetFn = runtime->lookupFunction(0x23CF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739D0u; }
        if (ctx->pc != 0x1739D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cf28_0x23cf38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739D0u; }
        if (ctx->pc != 0x1739D0u) { return; }
    }
    ctx->pc = 0x1739D0u;
    // 0x1739d0: 0xc08f3ce  jal         func_23CF38
    ctx->pc = 0x1739D0u;
    SET_GPR_U32(ctx, 31, 0x1739D8u);
    ctx->pc = 0x1739D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1739D0u;
            // 0x1739d4: 0x2604005c  addiu       $a0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CF38u;
    if (runtime->hasFunction(0x23CF38u)) {
        auto targetFn = runtime->lookupFunction(0x23CF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739D8u; }
        if (ctx->pc != 0x1739D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cf38_0x23cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739D8u; }
        if (ctx->pc != 0x1739D8u) { return; }
    }
    ctx->pc = 0x1739D8u;
    // 0x1739d8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1739D8u;
    SET_GPR_U32(ctx, 31, 0x1739E0u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739E0u; }
        if (ctx->pc != 0x1739E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739E0u; }
        if (ctx->pc != 0x1739E0u) { return; }
    }
    ctx->pc = 0x1739E0u;
    // 0x1739e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1739e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739e4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1739e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1739e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1739e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739ec: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1739ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1739f0: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1739F0u;
    SET_GPR_U32(ctx, 31, 0x1739F8u);
    ctx->pc = 0x1739F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1739F0u;
            // 0x1739f4: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739F8u; }
        if (ctx->pc != 0x1739F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739F8u; }
        if (ctx->pc != 0x1739F8u) { return; }
    }
    ctx->pc = 0x1739F8u;
    // 0x1739f8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1739f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1739fc: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1739fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x173a00: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x173a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x173a04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x173a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a08: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x173a08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x173a0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x173a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a18: 0x3e00008  jr          $ra
    ctx->pc = 0x173A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A18u;
            // 0x173a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173A68u: goto label_173a68;
            case 0x173A7Cu: goto label_173a7c;
            case 0x173A98u: goto label_173a98;
            case 0x173AB0u: goto label_173ab0;
            case 0x173ACCu: goto label_173acc;
            case 0x173AD0u: goto label_173ad0;
            case 0x173B00u: goto label_173b00;
            case 0x173B18u: goto label_173b18;
            case 0x173B34u: goto label_173b34;
            case 0x173B38u: goto label_173b38;
            case 0x173B70u: goto label_173b70;
            case 0x173B98u: goto label_173b98;
            case 0x173BD0u: goto label_173bd0;
            case 0x173BF8u: goto label_173bf8;
            case 0x173C78u: goto label_173c78;
            case 0x173C88u: goto label_173c88;
            case 0x173CA4u: goto label_173ca4;
            case 0x173CD8u: goto label_173cd8;
            case 0x173D2Cu: goto label_173d2c;
            case 0x173D3Cu: goto label_173d3c;
            case 0x173D80u: goto label_173d80;
            case 0x173DB0u: goto label_173db0;
            case 0x173DE0u: goto label_173de0;
            case 0x173DE4u: goto label_173de4;
            case 0x173E10u: goto label_173e10;
            case 0x173E1Cu: goto label_173e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173A20u;
    // 0x173a20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x173a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x173a24: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x173a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x173a28: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x173a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x173a2c: 0x2442e470  addiu       $v0, $v0, -0x1B90
    ctx->pc = 0x173a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960240));
    // 0x173a30: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x173a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x173a34: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x173a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x173a38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a3c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x173a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x173a40: 0x2630005c  addiu       $s0, $s1, 0x5C
    ctx->pc = 0x173a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x173a44: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x173a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x173a48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x173a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x173a4c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x173a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x173a50: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x173a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x173a54: 0x10700009  beq         $v1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x173A54u;
    {
        const bool branch_taken_0x173a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x173A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A54u;
            // 0x173a58: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a54) {
            ctx->pc = 0x173A7Cu;
            goto label_173a7c;
        }
    }
    ctx->pc = 0x173A5Cu;
    // 0x173a5c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x173a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x173a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a64: 0x0  nop
    ctx->pc = 0x173a64u;
    // NOP
label_173a68:
    // 0x173a68: 0xc05cfa4  jal         func_173E90
    ctx->pc = 0x173A68u;
    SET_GPR_U32(ctx, 31, 0x173A70u);
    ctx->pc = 0x173A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173A68u;
            // 0x173a6c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173E90u;
    if (runtime->hasFunction(0x173E90u)) {
        auto targetFn = runtime->lookupFunction(0x173E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A70u; }
        if (ctx->pc != 0x173A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173E90_0x173e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A70u; }
        if (ctx->pc != 0x173A70u) { return; }
    }
    ctx->pc = 0x173A70u;
    // 0x173a70: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x173a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x173a74: 0x1450fffc  bne         $v0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x173A74u;
    {
        const bool branch_taken_0x173a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x173A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A74u;
            // 0x173a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a74) {
            ctx->pc = 0x173A68u;
            runtime->cooperativeGuestYield();
            goto label_173a68;
        }
    }
    ctx->pc = 0x173A7Cu;
label_173a7c:
    // 0x173a7c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x173a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x173a80: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x173a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x173a84: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x173a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x173a88: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x173a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x173a8c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x173a8cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x173a90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x173A90u;
    {
        const bool branch_taken_0x173a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A90u;
            // 0x173a94: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a90) {
            ctx->pc = 0x173AB0u;
            goto label_173ab0;
        }
    }
    ctx->pc = 0x173A98u;
label_173a98:
    // 0x173a98: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x173a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x173a9c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x173a9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x173aa0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173AA0u;
    {
        const bool branch_taken_0x173aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173AA0u;
            // 0x173aa4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173aa0) {
            ctx->pc = 0x173AB0u;
            goto label_173ab0;
        }
    }
    ctx->pc = 0x173AA8u;
    // 0x173aa8: 0xc05cc06  jal         func_173018
    ctx->pc = 0x173AA8u;
    SET_GPR_U32(ctx, 31, 0x173AB0u);
    ctx->pc = 0x173AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173AA8u;
            // 0x173aac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173018u;
    if (runtime->hasFunction(0x173018u)) {
        auto targetFn = runtime->lookupFunction(0x173018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AB0u; }
        if (ctx->pc != 0x173AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173018_0x173018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AB0u; }
        if (ctx->pc != 0x173AB0u) { return; }
    }
    ctx->pc = 0x173AB0u;
label_173ab0:
    // 0x173ab0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x173ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x173ab4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173AB4u;
    {
        const bool branch_taken_0x173ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173AB4u;
            // 0x173ab8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ab4) {
            ctx->pc = 0x173ACCu;
            goto label_173acc;
        }
    }
    ctx->pc = 0x173ABCu;
    // 0x173abc: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x173abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x173ac0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x173ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x173ac4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173AC4u;
    {
        const bool branch_taken_0x173ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173AC4u;
            // 0x173ac8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ac4) {
            ctx->pc = 0x173AD0u;
            goto label_173ad0;
        }
    }
    ctx->pc = 0x173ACCu;
label_173acc:
    // 0x173acc: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x173accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_173ad0:
    // 0x173ad0: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x173AD0u;
    {
        const bool branch_taken_0x173ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173ad0) {
            ctx->pc = 0x173AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173AD0u;
            // 0x173ad4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173A98u;
            runtime->cooperativeGuestYield();
            goto label_173a98;
        }
    }
    ctx->pc = 0x173AD8u;
    // 0x173ad8: 0xae30004c  sw          $s0, 0x4C($s1)
    ctx->pc = 0x173ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 16));
    // 0x173adc: 0x26320054  addiu       $s2, $s1, 0x54
    ctx->pc = 0x173adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x173ae0: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x173ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x173ae4: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x173ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x173ae8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x173ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x173aec: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x173aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x173af0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x173af0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x173af4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x173AF4u;
    {
        const bool branch_taken_0x173af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173AF4u;
            // 0x173af8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173af4) {
            ctx->pc = 0x173B18u;
            goto label_173b18;
        }
    }
    ctx->pc = 0x173AFCu;
    // 0x173afc: 0x0  nop
    ctx->pc = 0x173afcu;
    // NOP
label_173b00:
    // 0x173b00: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x173b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x173b04: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x173b04u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x173b08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173B08u;
    {
        const bool branch_taken_0x173b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B08u;
            // 0x173b0c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b08) {
            ctx->pc = 0x173B18u;
            goto label_173b18;
        }
    }
    ctx->pc = 0x173B10u;
    // 0x173b10: 0xc05ccc6  jal         func_173318
    ctx->pc = 0x173B10u;
    SET_GPR_U32(ctx, 31, 0x173B18u);
    ctx->pc = 0x173B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B10u;
            // 0x173b14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173318u;
    if (runtime->hasFunction(0x173318u)) {
        auto targetFn = runtime->lookupFunction(0x173318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B18u; }
        if (ctx->pc != 0x173B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173318_0x173318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B18u; }
        if (ctx->pc != 0x173B18u) { return; }
    }
    ctx->pc = 0x173B18u;
label_173b18:
    // 0x173b18: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x173b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x173b1c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173B1Cu;
    {
        const bool branch_taken_0x173b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B1Cu;
            // 0x173b20: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b1c) {
            ctx->pc = 0x173B34u;
            goto label_173b34;
        }
    }
    ctx->pc = 0x173B24u;
    // 0x173b24: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x173b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x173b28: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x173b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x173b2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173B2Cu;
    {
        const bool branch_taken_0x173b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B2Cu;
            // 0x173b30: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b2c) {
            ctx->pc = 0x173B38u;
            goto label_173b38;
        }
    }
    ctx->pc = 0x173B34u;
label_173b34:
    // 0x173b34: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x173b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_173b38:
    // 0x173b38: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x173B38u;
    {
        const bool branch_taken_0x173b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173b38) {
            ctx->pc = 0x173B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173B38u;
            // 0x173b3c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173B00u;
            runtime->cooperativeGuestYield();
            goto label_173b00;
        }
    }
    ctx->pc = 0x173B40u;
    // 0x173b40: 0xae320054  sw          $s2, 0x54($s1)
    ctx->pc = 0x173b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 18));
    // 0x173b44: 0x2630005c  addiu       $s0, $s1, 0x5C
    ctx->pc = 0x173b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x173b48: 0xae520004  sw          $s2, 0x4($s2)
    ctx->pc = 0x173b48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 18));
    // 0x173b4c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x173b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173b50: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x173b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x173b54: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x173b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x173b58: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x173b58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x173b5c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x173b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x173b60: 0x5050000d  beql        $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x173B60u;
    {
        const bool branch_taken_0x173b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x173b60) {
            ctx->pc = 0x173B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173B60u;
            // 0x173b64: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173B98u;
            goto label_173b98;
        }
    }
    ctx->pc = 0x173B68u;
    // 0x173b68: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x173b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x173b6c: 0x0  nop
    ctx->pc = 0x173b6cu;
    // NOP
label_173b70:
    // 0x173b70: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x173b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x173b74: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x173b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x173b78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x173b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x173b7c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x173B7Cu;
    SET_GPR_U32(ctx, 31, 0x173B84u);
    ctx->pc = 0x173B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B7Cu;
            // 0x173b80: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B84u; }
        if (ctx->pc != 0x173B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B84u; }
        if (ctx->pc != 0x173B84u) { return; }
    }
    ctx->pc = 0x173B84u;
    // 0x173b84: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x173b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x173b88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x173b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173b8c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x173B8Cu;
    {
        const bool branch_taken_0x173b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x173B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B8Cu;
            // 0x173b90: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b8c) {
            ctx->pc = 0x173B70u;
            runtime->cooperativeGuestYield();
            goto label_173b70;
        }
    }
    ctx->pc = 0x173B94u;
    // 0x173b94: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x173b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
label_173b98:
    // 0x173b98: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x173b98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173b9c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x173b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x173ba0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x173ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x173ba4: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x173ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x173ba8: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x173ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x173bac: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x173bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x173bb0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x173bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x173bb4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x173bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x173bb8: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x173bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x173bbc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x173bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x173bc0: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x173BC0u;
    {
        const bool branch_taken_0x173bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x173BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173BC0u;
            // 0x173bc4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bc0) {
            ctx->pc = 0x173BF8u;
            goto label_173bf8;
        }
    }
    ctx->pc = 0x173BC8u;
    // 0x173bc8: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x173bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x173bcc: 0x0  nop
    ctx->pc = 0x173bccu;
    // NOP
label_173bd0:
    // 0x173bd0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x173bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x173bd4: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x173bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x173bd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x173bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x173bdc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x173BDCu;
    SET_GPR_U32(ctx, 31, 0x173BE4u);
    ctx->pc = 0x173BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173BDCu;
            // 0x173be0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BE4u; }
        if (ctx->pc != 0x173BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BE4u; }
        if (ctx->pc != 0x173BE4u) { return; }
    }
    ctx->pc = 0x173BE4u;
    // 0x173be4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x173be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x173be8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173bec: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x173BECu;
    {
        const bool branch_taken_0x173bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x173BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173BECu;
            // 0x173bf0: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bec) {
            ctx->pc = 0x173BD0u;
            runtime->cooperativeGuestYield();
            goto label_173bd0;
        }
    }
    ctx->pc = 0x173BF4u;
    // 0x173bf4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x173bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_173bf8:
    // 0x173bf8: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x173bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x173bfc: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x173bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x173c00: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x173c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x173c04: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x173c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x173c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c0c: 0xc08e218  jal         func_238860
    ctx->pc = 0x173C0Cu;
    SET_GPR_U32(ctx, 31, 0x173C14u);
    ctx->pc = 0x173C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C0Cu;
            // 0x173c10: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C14u; }
        if (ctx->pc != 0x173C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C14u; }
        if (ctx->pc != 0x173C14u) { return; }
    }
    ctx->pc = 0x173C14u;
    // 0x173c14: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x173c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x173c18: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x173c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173c1c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x173c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x173c20: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x173c20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x173c24: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x173c24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173c28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x173c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x173C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C2Cu;
            // 0x173c30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173A68u: goto label_173a68;
            case 0x173A7Cu: goto label_173a7c;
            case 0x173A98u: goto label_173a98;
            case 0x173AB0u: goto label_173ab0;
            case 0x173ACCu: goto label_173acc;
            case 0x173AD0u: goto label_173ad0;
            case 0x173B00u: goto label_173b00;
            case 0x173B18u: goto label_173b18;
            case 0x173B34u: goto label_173b34;
            case 0x173B38u: goto label_173b38;
            case 0x173B70u: goto label_173b70;
            case 0x173B98u: goto label_173b98;
            case 0x173BD0u: goto label_173bd0;
            case 0x173BF8u: goto label_173bf8;
            case 0x173C78u: goto label_173c78;
            case 0x173C88u: goto label_173c88;
            case 0x173CA4u: goto label_173ca4;
            case 0x173CD8u: goto label_173cd8;
            case 0x173D2Cu: goto label_173d2c;
            case 0x173D3Cu: goto label_173d3c;
            case 0x173D80u: goto label_173d80;
            case 0x173DB0u: goto label_173db0;
            case 0x173DE0u: goto label_173de0;
            case 0x173DE4u: goto label_173de4;
            case 0x173E10u: goto label_173e10;
            case 0x173E1Cu: goto label_173e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173C34u;
    // 0x173c34: 0x0  nop
    ctx->pc = 0x173c34u;
    // NOP
    // 0x173c38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x173c3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x173c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x173c40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x173c44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x173c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x173c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x173c4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x173c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173c54: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x173c54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x173c58: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x173c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x173c5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173C5Cu;
    {
        const bool branch_taken_0x173c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C5Cu;
            // 0x173c60: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c5c) {
            ctx->pc = 0x173C78u;
            goto label_173c78;
        }
    }
    ctx->pc = 0x173C64u;
    // 0x173c64: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x173c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x173c68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x173C68u;
    {
        const bool branch_taken_0x173c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173c68) {
            ctx->pc = 0x173CA4u;
            goto label_173ca4;
        }
    }
    ctx->pc = 0x173C70u;
    // 0x173c70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x173C70u;
    {
        const bool branch_taken_0x173c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173c70) {
            ctx->pc = 0x173C88u;
            goto label_173c88;
        }
    }
    ctx->pc = 0x173C78u;
label_173c78:
    // 0x173c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c7c: 0xc05cc20  jal         func_173080
    ctx->pc = 0x173C7Cu;
    SET_GPR_U32(ctx, 31, 0x173C84u);
    ctx->pc = 0x173C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C7Cu;
            // 0x173c80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173080u;
    if (runtime->hasFunction(0x173080u)) {
        auto targetFn = runtime->lookupFunction(0x173080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C84u; }
        if (ctx->pc != 0x173C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173080_0x173090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C84u; }
        if (ctx->pc != 0x173C84u) { return; }
    }
    ctx->pc = 0x173C84u;
    // 0x173c84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x173c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173c88:
    // 0x173c88: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x173C88u;
    SET_GPR_U32(ctx, 31, 0x173C90u);
    ctx->pc = 0x173C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C88u;
            // 0x173c8c: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C90u; }
        if (ctx->pc != 0x173C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C90u; }
        if (ctx->pc != 0x173C90u) { return; }
    }
    ctx->pc = 0x173C90u;
    // 0x173c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173C90u;
    {
        const bool branch_taken_0x173c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173C90u;
            // 0x173c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c90) {
            ctx->pc = 0x173CA4u;
            goto label_173ca4;
        }
    }
    ctx->pc = 0x173C98u;
    // 0x173c98: 0xc05cda4  jal         func_173690
    ctx->pc = 0x173C98u;
    SET_GPR_U32(ctx, 31, 0x173CA0u);
    ctx->pc = 0x173C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173C98u;
            // 0x173c9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173690u;
    if (runtime->hasFunction(0x173690u)) {
        auto targetFn = runtime->lookupFunction(0x173690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173CA0u; }
        if (ctx->pc != 0x173CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173690_0x173690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173CA0u; }
        if (ctx->pc != 0x173CA0u) { return; }
    }
    ctx->pc = 0x173CA0u;
    // 0x173ca0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x173ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173ca4:
    // 0x173ca4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x173CA4u;
    {
        const bool branch_taken_0x173ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x173CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173CA4u;
            // 0x173ca8: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ca4) {
            ctx->pc = 0x173CD8u;
            goto label_173cd8;
        }
    }
    ctx->pc = 0x173CACu;
    // 0x173cac: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x173cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x173cb0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x173CB0u;
    SET_GPR_U32(ctx, 31, 0x173CB8u);
    ctx->pc = 0x173CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173CB0u;
            // 0x173cb4: 0x8c447910  lw          $a0, 0x7910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173CB8u; }
        if (ctx->pc != 0x173CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173CB8u; }
        if (ctx->pc != 0x173CB8u) { return; }
    }
    ctx->pc = 0x173CB8u;
    // 0x173cb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x173cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x173cbc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x173cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x173cc0: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x173cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x173cc4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x173cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x173cc8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x173cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x173ccc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x173cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x173cd0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x173cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x173cd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x173cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_173cd8:
    // 0x173cd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x173cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173cdc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x173cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173ce0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x173ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173ce4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x173ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173cec: 0x3e00008  jr          $ra
    ctx->pc = 0x173CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173CECu;
            // 0x173cf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173A68u: goto label_173a68;
            case 0x173A7Cu: goto label_173a7c;
            case 0x173A98u: goto label_173a98;
            case 0x173AB0u: goto label_173ab0;
            case 0x173ACCu: goto label_173acc;
            case 0x173AD0u: goto label_173ad0;
            case 0x173B00u: goto label_173b00;
            case 0x173B18u: goto label_173b18;
            case 0x173B34u: goto label_173b34;
            case 0x173B38u: goto label_173b38;
            case 0x173B70u: goto label_173b70;
            case 0x173B98u: goto label_173b98;
            case 0x173BD0u: goto label_173bd0;
            case 0x173BF8u: goto label_173bf8;
            case 0x173C78u: goto label_173c78;
            case 0x173C88u: goto label_173c88;
            case 0x173CA4u: goto label_173ca4;
            case 0x173CD8u: goto label_173cd8;
            case 0x173D2Cu: goto label_173d2c;
            case 0x173D3Cu: goto label_173d3c;
            case 0x173D80u: goto label_173d80;
            case 0x173DB0u: goto label_173db0;
            case 0x173DE0u: goto label_173de0;
            case 0x173DE4u: goto label_173de4;
            case 0x173E10u: goto label_173e10;
            case 0x173E1Cu: goto label_173e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173CF4u;
    // 0x173cf4: 0x0  nop
    ctx->pc = 0x173cf4u;
    // NOP
    // 0x173cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173cfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x173cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x173d00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173d04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x173d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d08: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x173d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x173d0c: 0x316c2  srl         $v0, $v1, 27
    ctx->pc = 0x173d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 27));
    // 0x173d10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x173d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x173d14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173D14u;
    {
        const bool branch_taken_0x173d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173D14u;
            // 0x173d18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d14) {
            ctx->pc = 0x173D2Cu;
            goto label_173d2c;
        }
    }
    ctx->pc = 0x173D1Cu;
    // 0x173d1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d20: 0xc05cd0c  jal         func_173430
    ctx->pc = 0x173D20u;
    SET_GPR_U32(ctx, 31, 0x173D28u);
    ctx->pc = 0x173D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173D20u;
            // 0x173d24: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173430u;
    if (runtime->hasFunction(0x173430u)) {
        auto targetFn = runtime->lookupFunction(0x173430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D28u; }
        if (ctx->pc != 0x173D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173430_0x1734a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D28u; }
        if (ctx->pc != 0x173D28u) { return; }
    }
    ctx->pc = 0x173D28u;
    // 0x173d28: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x173d28u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_173d2c:
    // 0x173d2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173D2Cu;
    {
        const bool branch_taken_0x173d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173D2Cu;
            // 0x173d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d2c) {
            ctx->pc = 0x173D3Cu;
            goto label_173d3c;
        }
    }
    ctx->pc = 0x173D34u;
    // 0x173d34: 0xc05cdde  jal         func_173778
    ctx->pc = 0x173D34u;
    SET_GPR_U32(ctx, 31, 0x173D3Cu);
    ctx->pc = 0x173D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173D34u;
            // 0x173d38: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173778u;
    if (runtime->hasFunction(0x173778u)) {
        auto targetFn = runtime->lookupFunction(0x173778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D3Cu; }
        if (ctx->pc != 0x173D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173778_0x173778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D3Cu; }
        if (ctx->pc != 0x173D3Cu) { return; }
    }
    ctx->pc = 0x173D3Cu;
label_173d3c:
    // 0x173d3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x173d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173d48: 0x3e00008  jr          $ra
    ctx->pc = 0x173D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173D48u;
            // 0x173d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173A68u: goto label_173a68;
            case 0x173A7Cu: goto label_173a7c;
            case 0x173A98u: goto label_173a98;
            case 0x173AB0u: goto label_173ab0;
            case 0x173ACCu: goto label_173acc;
            case 0x173AD0u: goto label_173ad0;
            case 0x173B00u: goto label_173b00;
            case 0x173B18u: goto label_173b18;
            case 0x173B34u: goto label_173b34;
            case 0x173B38u: goto label_173b38;
            case 0x173B70u: goto label_173b70;
            case 0x173B98u: goto label_173b98;
            case 0x173BD0u: goto label_173bd0;
            case 0x173BF8u: goto label_173bf8;
            case 0x173C78u: goto label_173c78;
            case 0x173C88u: goto label_173c88;
            case 0x173CA4u: goto label_173ca4;
            case 0x173CD8u: goto label_173cd8;
            case 0x173D2Cu: goto label_173d2c;
            case 0x173D3Cu: goto label_173d3c;
            case 0x173D80u: goto label_173d80;
            case 0x173DB0u: goto label_173db0;
            case 0x173DE0u: goto label_173de0;
            case 0x173DE4u: goto label_173de4;
            case 0x173E10u: goto label_173e10;
            case 0x173E1Cu: goto label_173e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173D50u;
    // 0x173d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173d54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173d5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x173d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d60: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x173d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x173d64: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x173D64u;
    {
        const bool branch_taken_0x173d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173d64) {
            ctx->pc = 0x173D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173D64u;
            // 0x173d68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173E1Cu;
            goto label_173e1c;
        }
    }
    ctx->pc = 0x173D6Cu;
    // 0x173d6c: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x173d6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x173d70: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x173D70u;
    {
        const bool branch_taken_0x173d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173d70) {
            ctx->pc = 0x173D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173D70u;
            // 0x173d74: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173DB0u;
            goto label_173db0;
        }
    }
    ctx->pc = 0x173D78u;
    // 0x173d78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x173d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x173d7c: 0x0  nop
    ctx->pc = 0x173d7cu;
    // NOP
label_173d80:
    // 0x173d80: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x173d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x173d84: 0x8c44c3ac  lw          $a0, -0x3C54($v0)
    ctx->pc = 0x173d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951852)));
    // 0x173d88: 0x8c62c3b0  lw          $v0, -0x3C50($v1)
    ctx->pc = 0x173d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951856)));
    // 0x173d8c: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x173D8Cu;
    {
        const bool branch_taken_0x173d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x173d8c) {
            ctx->pc = 0x173D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173D8Cu;
            // 0x173d90: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173DB0u;
            goto label_173db0;
        }
    }
    ctx->pc = 0x173D94u;
    // 0x173d94: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x173D94u;
    SET_GPR_U32(ctx, 31, 0x173D9Cu);
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D9Cu; }
        if (ctx->pc != 0x173D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D9Cu; }
        if (ctx->pc != 0x173D9Cu) { return; }
    }
    ctx->pc = 0x173D9Cu;
    // 0x173d9c: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x173d9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x173da0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x173DA0u;
    {
        const bool branch_taken_0x173da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173DA0u;
            // 0x173da4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173da0) {
            ctx->pc = 0x173D80u;
            runtime->cooperativeGuestYield();
            goto label_173d80;
        }
    }
    ctx->pc = 0x173DA8u;
    // 0x173da8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x173da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x173dac: 0x0  nop
    ctx->pc = 0x173dacu;
    // NOP
label_173db0:
    // 0x173db0: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x173db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x173db4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x173db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x173db8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x173DB8u;
    {
        const bool branch_taken_0x173db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173DB8u;
            // 0x173dbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173db8) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173DC0u;
    // 0x173dc0: 0x82030018  lb          $v1, 0x18($s0)
    ctx->pc = 0x173dc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x173dc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x173dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x173dc8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173DC8u;
    {
        const bool branch_taken_0x173dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173dc8) {
            ctx->pc = 0x173DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173DC8u;
            // 0x173dcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173DE4u;
            goto label_173de4;
        }
    }
    ctx->pc = 0x173DD0u;
    // 0x173dd0: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x173dd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x173dd4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x173dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x173dd8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x173DD8u;
    {
        const bool branch_taken_0x173dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173dd8) {
            ctx->pc = 0x173DE4u;
            goto label_173de4;
        }
    }
    ctx->pc = 0x173DE0u;
label_173de0:
    // 0x173de0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x173de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173de4:
    // 0x173de4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x173DE4u;
    {
        const bool branch_taken_0x173de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173DE4u;
            // 0x173de8: 0x3c04534d  lui         $a0, 0x534D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173de4) {
            ctx->pc = 0x173E10u;
            goto label_173e10;
        }
    }
    ctx->pc = 0x173DECu;
    // 0x173dec: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x173decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x173df0: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x173df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x173df4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x173df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x173df8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173dfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173e00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e04: 0xc09b260  jal         func_26C980
    ctx->pc = 0x173E04u;
    SET_GPR_U32(ctx, 31, 0x173E0Cu);
    ctx->pc = 0x173E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173E04u;
            // 0x173e08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E0Cu; }
        if (ctx->pc != 0x173E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E0Cu; }
        if (ctx->pc != 0x173E0Cu) { return; }
    }
    ctx->pc = 0x173E0Cu;
    // 0x173e0c: 0x0  nop
    ctx->pc = 0x173e0cu;
    // NOP
label_173e10:
    // 0x173e10: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x173e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x173e14: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x173e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x173e18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173e1c:
    // 0x173e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173e24: 0x3e00008  jr          $ra
    ctx->pc = 0x173E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173E24u;
            // 0x173e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173A68u: goto label_173a68;
            case 0x173A7Cu: goto label_173a7c;
            case 0x173A98u: goto label_173a98;
            case 0x173AB0u: goto label_173ab0;
            case 0x173ACCu: goto label_173acc;
            case 0x173AD0u: goto label_173ad0;
            case 0x173B00u: goto label_173b00;
            case 0x173B18u: goto label_173b18;
            case 0x173B34u: goto label_173b34;
            case 0x173B38u: goto label_173b38;
            case 0x173B70u: goto label_173b70;
            case 0x173B98u: goto label_173b98;
            case 0x173BD0u: goto label_173bd0;
            case 0x173BF8u: goto label_173bf8;
            case 0x173C78u: goto label_173c78;
            case 0x173C88u: goto label_173c88;
            case 0x173CA4u: goto label_173ca4;
            case 0x173CD8u: goto label_173cd8;
            case 0x173D2Cu: goto label_173d2c;
            case 0x173D3Cu: goto label_173d3c;
            case 0x173D80u: goto label_173d80;
            case 0x173DB0u: goto label_173db0;
            case 0x173DE0u: goto label_173de0;
            case 0x173DE4u: goto label_173de4;
            case 0x173E10u: goto label_173e10;
            case 0x173E1Cu: goto label_173e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173E2Cu;
    // 0x173e2c: 0x0  nop
    ctx->pc = 0x173e2cu;
    // NOP
}
