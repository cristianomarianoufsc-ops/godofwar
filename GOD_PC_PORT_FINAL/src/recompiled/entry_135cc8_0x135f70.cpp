#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_135cc8
// Address: 0x135cc8 - 0x135f70
void entry_135cc8_0x135f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_135cc8_0x135f70");
#endif

    ctx->pc = 0x135cc8u;

    // 0x135cc8: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x135cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x135ccc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x135CCCu;
    {
        const bool branch_taken_0x135ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x135CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135CCCu;
            // 0x135cd0: 0x2482fff8  addiu       $v0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ccc) {
            ctx->pc = 0x135D08u;
            goto label_135d08;
        }
    }
    ctx->pc = 0x135CD4u;
    // 0x135cd4: 0x0  nop
    ctx->pc = 0x135cd4u;
    // NOP
label_135cd8:
    // 0x135cd8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x135cd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cdc: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x135cdcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x135ce0: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x135ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x135ce4: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135CE4u;
    {
        const bool branch_taken_0x135ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x135ce4) {
            ctx->pc = 0x135CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135CE4u;
            // 0x135ce8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135D00u;
            goto label_135d00;
        }
    }
    ctx->pc = 0x135CECu;
    // 0x135cec: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x135cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x135cf0: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x135CF0u;
    {
        const bool branch_taken_0x135cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x135cf0) {
            ctx->pc = 0x135CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135CF0u;
            // 0x135cf4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135D00u;
            goto label_135d00;
        }
    }
    ctx->pc = 0x135CF8u;
    // 0x135cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x135CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135CF8u;
            // 0x135cfc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135CD8u: goto label_135cd8;
            case 0x135D00u: goto label_135d00;
            case 0x135D08u: goto label_135d08;
            case 0x135E08u: goto label_135e08;
            case 0x135E40u: goto label_135e40;
            case 0x135E78u: goto label_135e78;
            case 0x135E94u: goto label_135e94;
            case 0x135EA8u: goto label_135ea8;
            case 0x135ED0u: goto label_135ed0;
            case 0x135EE4u: goto label_135ee4;
            case 0x135F18u: goto label_135f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135D00u;
label_135d00:
    // 0x135d00: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x135D00u;
    {
        const bool branch_taken_0x135d00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x135D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135D00u;
            // 0x135d04: 0x2482fff8  addiu       $v0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d00) {
            ctx->pc = 0x135CD8u;
            runtime->cooperativeGuestYield();
            goto label_135cd8;
        }
    }
    ctx->pc = 0x135D08u;
label_135d08:
    // 0x135d08: 0x3e00008  jr          $ra
    ctx->pc = 0x135D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135D08u;
            // 0x135d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135CD8u: goto label_135cd8;
            case 0x135D00u: goto label_135d00;
            case 0x135D08u: goto label_135d08;
            case 0x135E08u: goto label_135e08;
            case 0x135E40u: goto label_135e40;
            case 0x135E78u: goto label_135e78;
            case 0x135E94u: goto label_135e94;
            case 0x135EA8u: goto label_135ea8;
            case 0x135ED0u: goto label_135ed0;
            case 0x135EE4u: goto label_135ee4;
            case 0x135F18u: goto label_135f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135D10u;
    // 0x135d10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x135d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135d14: 0x0  nop
    ctx->pc = 0x135d14u;
    // NOP
    // 0x135d18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x135d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x135d1c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x135d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x135d20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x135d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x135d24: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x135d24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x135d28: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x135d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x135d2c: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x135d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x135d30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x135d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x135d34: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x135d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x135d38: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x135d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x135d3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x135d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d40: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x135d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x135d44: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x135d44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135d4c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x135d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x135d50: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x135d50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x135d54: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x135d54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x135d58: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x135d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x135d5c: 0x26500028  addiu       $s0, $s2, 0x28
    ctx->pc = 0x135d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x135d60: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x135d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x135d64: 0xa6470004  sh          $a3, 0x4($s2)
    ctx->pc = 0x135d64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x135d68: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x135d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x135d6c: 0xa6480000  sh          $t0, 0x0($s2)
    ctx->pc = 0x135d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x135d70: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x135d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
    // 0x135d74: 0x26510034  addiu       $s1, $s2, 0x34
    ctx->pc = 0x135d74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x135d78: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x135d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x135d7c: 0xc08e222  jal         func_238888
    ctx->pc = 0x135D7Cu;
    SET_GPR_U32(ctx, 31, 0x135D84u);
    ctx->pc = 0x135D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135D7Cu;
            // 0x135d80: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D84u; }
        if (ctx->pc != 0x135D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D84u; }
        if (ctx->pc != 0x135D84u) { return; }
    }
    ctx->pc = 0x135D84u;
    // 0x135d84: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x135d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x135d88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x135d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d90: 0xc08e222  jal         func_238888
    ctx->pc = 0x135D90u;
    SET_GPR_U32(ctx, 31, 0x135D98u);
    ctx->pc = 0x135D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135D90u;
            // 0x135d94: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D98u; }
        if (ctx->pc != 0x135D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D98u; }
        if (ctx->pc != 0x135D98u) { return; }
    }
    ctx->pc = 0x135D98u;
    // 0x135d98: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x135d9c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x135d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x135da0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x135da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x135da4: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x135da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x135da8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x135da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x135dac: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x135dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x135db0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x135db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x135db4: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x135db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x135db8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x135DB8u;
    SET_GPR_U32(ctx, 31, 0x135DC0u);
    ctx->pc = 0x135DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135DB8u;
            // 0x135dbc: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DC0u; }
        if (ctx->pc != 0x135DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DC0u; }
        if (ctx->pc != 0x135DC0u) { return; }
    }
    ctx->pc = 0x135DC0u;
    // 0x135dc0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x135dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x135dc4: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x135dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x135dc8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x135dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x135dcc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x135dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x135dd0: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x135dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x135dd4: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x135DD4u;
    SET_GPR_U32(ctx, 31, 0x135DDCu);
    ctx->pc = 0x135DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135DD4u;
            // 0x135dd8: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DDCu; }
        if (ctx->pc != 0x135DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DDCu; }
        if (ctx->pc != 0x135DDCu) { return; }
    }
    ctx->pc = 0x135DDCu;
    // 0x135ddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135de0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x135de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x135de4: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x135de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x135de8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x135de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x135dec: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x135decu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x135df0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x135DF0u;
    SET_GPR_U32(ctx, 31, 0x135DF8u);
    ctx->pc = 0x135DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135DF0u;
            // 0x135df4: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DF8u; }
        if (ctx->pc != 0x135DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135DF8u; }
        if (ctx->pc != 0x135DF8u) { return; }
    }
    ctx->pc = 0x135DF8u;
    // 0x135df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x135df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135dfc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x135dfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x135e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135e04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x135e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_135e08:
    // 0x135e08: 0x0  nop
    ctx->pc = 0x135e08u;
    // NOP
    // 0x135e0c: 0x0  nop
    ctx->pc = 0x135e0cu;
    // NOP
    // 0x135e10: 0x0  nop
    ctx->pc = 0x135e10u;
    // NOP
    // 0x135e14: 0x0  nop
    ctx->pc = 0x135e14u;
    // NOP
    // 0x135e18: 0x0  nop
    ctx->pc = 0x135e18u;
    // NOP
    // 0x135e1c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x135E1Cu;
    {
        const bool branch_taken_0x135e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x135E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135E1Cu;
            // 0x135e20: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e1c) {
            ctx->pc = 0x135E08u;
            runtime->cooperativeGuestYield();
            goto label_135e08;
        }
    }
    ctx->pc = 0x135E24u;
    // 0x135e24: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x135e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x135e28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x135e28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e2c: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x135e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x135e30: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x135E30u;
    {
        const bool branch_taken_0x135e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135E30u;
            // 0x135e34: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e30) {
            ctx->pc = 0x135EE4u;
            goto label_135ee4;
        }
    }
    ctx->pc = 0x135E38u;
    // 0x135e38: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x135e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x135e3c: 0x0  nop
    ctx->pc = 0x135e3cu;
    // NOP
label_135e40:
    // 0x135e40: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x135e40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x135e44: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x135e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x135e48: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x135e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x135e4c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x135e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x135e50: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x135E50u;
    SET_GPR_U32(ctx, 31, 0x135E58u);
    ctx->pc = 0x135E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135E50u;
            // 0x135e54: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E58u; }
        if (ctx->pc != 0x135E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E58u; }
        if (ctx->pc != 0x135E58u) { return; }
    }
    ctx->pc = 0x135E58u;
    // 0x135e58: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x135e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x135e5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x135e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x135e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x135e64: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x135E64u;
    {
        const bool branch_taken_0x135e64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x135E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135E64u;
            // 0x135e68: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e64) {
            ctx->pc = 0x135E94u;
            goto label_135e94;
        }
    }
    ctx->pc = 0x135E6Cu;
    // 0x135e6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x135e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135e74: 0x0  nop
    ctx->pc = 0x135e74u;
    // NOP
label_135e78:
    // 0x135e78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x135e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x135e7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x135e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x135e80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x135e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x135e84: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x135e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x135e88: 0x0  nop
    ctx->pc = 0x135e88u;
    // NOP
    // 0x135e8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x135E8Cu;
    {
        const bool branch_taken_0x135e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135E8Cu;
            // 0x135e90: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e8c) {
            ctx->pc = 0x135E78u;
            runtime->cooperativeGuestYield();
            goto label_135e78;
        }
    }
    ctx->pc = 0x135E94u;
label_135e94:
    // 0x135e94: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x135e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x135e98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x135E98u;
    {
        const bool branch_taken_0x135e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135E98u;
            // 0x135e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e98) {
            ctx->pc = 0x135ED0u;
            goto label_135ed0;
        }
    }
    ctx->pc = 0x135EA0u;
    // 0x135ea0: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x135ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x135ea4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x135ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135ea8:
    // 0x135ea8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x135ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x135eac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x135eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x135eb0: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x135eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x135eb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x135eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x135eb8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x135eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x135ebc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135ec0: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x135ec0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x135ec4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x135ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135ec8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x135EC8u;
    {
        const bool branch_taken_0x135ec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x135ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135EC8u;
            // 0x135ecc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ec8) {
            ctx->pc = 0x135EA8u;
            runtime->cooperativeGuestYield();
            goto label_135ea8;
        }
    }
    ctx->pc = 0x135ED0u;
label_135ed0:
    // 0x135ed0: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x135ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x135ed4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x135ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x135ed8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x135ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x135edc: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x135EDCu;
    {
        const bool branch_taken_0x135edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135edc) {
            ctx->pc = 0x135EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135EDCu;
            // 0x135ee0: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135E40u;
            runtime->cooperativeGuestYield();
            goto label_135e40;
        }
    }
    ctx->pc = 0x135EE4u;
label_135ee4:
    // 0x135ee4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x135ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135ee8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x135ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x135eec: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x135eecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x135ef0: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x135ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x135ef4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x135ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x135ef8: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x135ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x135efc: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x135efcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x135f00: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x135f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x135f04: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x135f04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x135f08: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x135f08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x135f0c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x135f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x135f10: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x135f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x135f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135f18:
    // 0x135f18: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x135f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x135f1c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x135f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x135f20: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x135f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x135f24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x135f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x135f28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x135f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x135f2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x135f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135f30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x135f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x135f34: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x135f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x135f38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x135F38u;
    {
        const bool branch_taken_0x135f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135F38u;
            // 0x135f3c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f38) {
            ctx->pc = 0x135F18u;
            runtime->cooperativeGuestYield();
            goto label_135f18;
        }
    }
    ctx->pc = 0x135F40u;
    // 0x135f40: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x135F40u;
    SET_GPR_U32(ctx, 31, 0x135F48u);
    ctx->pc = 0x135F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135F40u;
            // 0x135f44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (runtime->hasFunction(0x135FC0u)) {
        auto targetFn = runtime->lookupFunction(0x135FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F48u; }
        if (ctx->pc != 0x135F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_135fc0_0x135fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F48u; }
        if (ctx->pc != 0x135F48u) { return; }
    }
    ctx->pc = 0x135F48u;
    // 0x135f48: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x135f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f4c: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x135f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x135f50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x135f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135f54: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x135f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135f58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x135f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135f5c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x135f5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135f60: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x135f60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135f68: 0x3e00008  jr          $ra
    ctx->pc = 0x135F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135F68u;
            // 0x135f6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135CD8u: goto label_135cd8;
            case 0x135D00u: goto label_135d00;
            case 0x135D08u: goto label_135d08;
            case 0x135E08u: goto label_135e08;
            case 0x135E40u: goto label_135e40;
            case 0x135E78u: goto label_135e78;
            case 0x135E94u: goto label_135e94;
            case 0x135EA8u: goto label_135ea8;
            case 0x135ED0u: goto label_135ed0;
            case 0x135EE4u: goto label_135ee4;
            case 0x135F18u: goto label_135f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135F70u;
}
