#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011CBD0
// Address: 0x11cbd0 - 0x11cf78
void sub_0011CBD0_0x11cbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CBD0_0x11cbd0");
#endif

    ctx->pc = 0x11cbd0u;

    // 0x11cbd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11cbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11cbd4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11cbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11cbd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11cbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11cbdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11cbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11cbe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cbe4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11cbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11cbe8: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x11cbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x11cbec: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11CBECu;
    {
        const bool branch_taken_0x11cbec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBECu;
            // 0x11cbf0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbec) {
            ctx->pc = 0x11CC38u;
            goto label_11cc38;
        }
    }
    ctx->pc = 0x11CBF4u;
    // 0x11cbf4: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x11cbf4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x11cbf8: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x11cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11cbfc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x11CBFCu;
    {
        const bool branch_taken_0x11cbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBFCu;
            // 0x11cc00: 0x8e51bcf0  lw          $s1, -0x4310($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbfc) {
            ctx->pc = 0x11CC38u;
            goto label_11cc38;
        }
    }
    ctx->pc = 0x11CC04u;
    // 0x11cc04: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x11cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11cc08:
    // 0x11cc08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11cc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc0c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x11cc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11cc10: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x11cc10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11cc14: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x11cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x11cc18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x11cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11cc1c: 0x40f809  jalr        $v0
    ctx->pc = 0x11CC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CC24u);
        ctx->pc = 0x11CC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC1Cu;
            // 0x11cc20: 0xae43bcf0  sw          $v1, -0x4310($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294950128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CC24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CC24u; }
            if (ctx->pc != 0x11CC24u) { return; }
        }
        }
    }
    ctx->pc = 0x11CC24u;
    // 0x11cc24: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CC24u;
    {
        const bool branch_taken_0x11cc24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC24u;
            // 0x11cc28: 0xae51bcf0  sw          $s1, -0x4310($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294950128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc24) {
            ctx->pc = 0x11CC38u;
            goto label_11cc38;
        }
    }
    ctx->pc = 0x11CC2Cu;
    // 0x11cc2c: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x11cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11cc30: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x11CC30u;
    {
        const bool branch_taken_0x11cc30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cc30) {
            ctx->pc = 0x11CC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC30u;
            // 0x11cc34: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CC08u;
            runtime->cooperativeGuestYield();
            goto label_11cc08;
        }
    }
    ctx->pc = 0x11CC38u;
label_11cc38:
    // 0x11cc38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11cc38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11cc3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11cc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cc40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11cc40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cc44: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11cc44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cc48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC4Cu;
            // 0x11cc50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CC54u;
    // 0x11cc54: 0x0  nop
    ctx->pc = 0x11cc54u;
    // NOP
    // 0x11cc58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11cc5c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11cc60: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x11cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x11cc64: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x11cc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x11cc68: 0x8c50ed5c  lw          $s0, -0x12A4($v0)
    ctx->pc = 0x11cc68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962524)));
    // 0x11cc6c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x11cc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x11cc70: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x11cc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x11cc74: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x11cc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x11cc78: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x11cc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x11cc7c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x11cc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x11cc80: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x11cc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x11cc84: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x11cc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x11cc88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cc8c: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x11cc8cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x11cc90: 0x8ec3ed60  lw          $v1, -0x12A0($s6)
    ctx->pc = 0x11cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
    // 0x11cc94: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x11cc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11cc98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11cc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11cc9c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11CC9Cu;
    {
        const bool branch_taken_0x11cc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC9Cu;
            // 0x11cca0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc9c) {
            ctx->pc = 0x11CCC8u;
            goto label_11ccc8;
        }
    }
    ctx->pc = 0x11CCA4u;
    // 0x11cca4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11cca8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11ccac: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x11ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x11ccb0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x11ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x11ccb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ccb8: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x11ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x11ccbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ccc0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x11ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x11ccc4: 0x8ec3ed60  lw          $v1, -0x12A0($s6)
    ctx->pc = 0x11ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
label_11ccc8:
    // 0x11ccc8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11cccc: 0x2445ed68  addiu       $a1, $v0, -0x1298
    ctx->pc = 0x11ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x11ccd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11ccd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x11ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11ccdc: 0xaec3ed60  sw          $v1, -0x12A0($s6)
    ctx->pc = 0x11ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294962528), GPR_U32(ctx, 3));
    // 0x11cce0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11cce4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x11CCE4u;
    SET_GPR_U32(ctx, 31, 0x11CCECu);
    ctx->pc = 0x11CCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CCE4u;
            // 0x11cce8: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CCECu; }
        if (ctx->pc != 0x11CCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CCECu; }
        if (ctx->pc != 0x11CCECu) { return; }
    }
    ctx->pc = 0x11CCECu;
    // 0x11ccec: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x11ccecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x11ccf0: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x11ccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x11ccf4: 0x24c4bb98  addiu       $a0, $a2, -0x4468
    ctx->pc = 0x11ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949784));
    // 0x11ccf8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x11ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11ccfc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x11ccfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11cd04: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x11cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11cd08: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x11cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x11cd0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11cd10: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x11cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x11cd14: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11cd18: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11cd1c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11cd20: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x11cd20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x11cd24: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x11cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x11cd28: 0x40f809  jalr        $v0
    ctx->pc = 0x11CD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CD30u);
        ctx->pc = 0x11CD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD28u;
            // 0x11cd2c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CD30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CD30u; }
            if (ctx->pc != 0x11CD30u) { return; }
        }
        }
    }
    ctx->pc = 0x11CD30u;
    // 0x11cd30: 0x8e920024  lw          $s2, 0x24($s4)
    ctx->pc = 0x11cd30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x11cd34: 0x1240005a  beqz        $s2, . + 4 + (0x5A << 2)
    ctx->pc = 0x11CD34u;
    {
        const bool branch_taken_0x11cd34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD34u;
            // 0x11cd38: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd34) {
            ctx->pc = 0x11CEA0u;
            goto label_11cea0;
        }
    }
    ctx->pc = 0x11CD3Cu;
    // 0x11cd3c: 0x2642fff8  addiu       $v0, $s2, -0x8
    ctx->pc = 0x11cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
label_11cd40:
    // 0x11cd40: 0x8e570000  lw          $s7, 0x0($s2)
    ctx->pc = 0x11cd40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11cd44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11cd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd48: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x11cd48u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x11cd4c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x11cd4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11cd50: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x11cd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x11cd54: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x11CD54u;
    {
        const bool branch_taken_0x11cd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD54u;
            // 0x11cd58: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd54) {
            ctx->pc = 0x11CE98u;
            goto label_11ce98;
        }
    }
    ctx->pc = 0x11CD5Cu;
    // 0x11cd5c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x11cd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x11cd60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CD60u;
    {
        const bool branch_taken_0x11cd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD60u;
            // 0x11cd64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd60) {
            ctx->pc = 0x11CD88u;
            goto label_11cd88;
        }
    }
    ctx->pc = 0x11CD68u;
    // 0x11cd68: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x11cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x11cd6c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x11cd6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11cd70: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x11cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x11cd74: 0x40f809  jalr        $v0
    ctx->pc = 0x11CD74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CD7Cu);
        ctx->pc = 0x11CD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD74u;
            // 0x11cd78: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CD7Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CD7Cu; }
            if (ctx->pc != 0x11CD7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11CD7Cu;
    // 0x11cd7c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x11CD7Cu;
    {
        const bool branch_taken_0x11cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cd7c) {
            ctx->pc = 0x11CE98u;
            goto label_11ce98;
        }
    }
    ctx->pc = 0x11CD84u;
    // 0x11cd84: 0x0  nop
    ctx->pc = 0x11cd84u;
    // NOP
label_11cd88:
    // 0x11cd88: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x11cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x11cd8c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x11CD8Cu;
    {
        const bool branch_taken_0x11cd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cd8c) {
            ctx->pc = 0x11CE98u;
            goto label_11ce98;
        }
    }
    ctx->pc = 0x11CD94u;
    // 0x11cd94: 0x8e110044  lw          $s1, 0x44($s0)
    ctx->pc = 0x11cd94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x11cd98: 0x12710017  beq         $s3, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x11CD98u;
    {
        const bool branch_taken_0x11cd98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x11CD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD98u;
            // 0x11cd9c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd98) {
            ctx->pc = 0x11CDF8u;
            goto label_11cdf8;
        }
    }
    ctx->pc = 0x11CDA0u;
    // 0x11cda0: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CDA0u;
    {
        const bool branch_taken_0x11cda0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDA0u;
            // 0x11cda4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cda0) {
            ctx->pc = 0x11CDC0u;
            goto label_11cdc0;
        }
    }
    ctx->pc = 0x11CDA8u;
    // 0x11cda8: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11cdac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11cdb0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x11cdb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11cdb4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x11cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x11cdb8: 0x40f809  jalr        $v0
    ctx->pc = 0x11CDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CDC0u);
        ctx->pc = 0x11CDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDB8u;
            // 0x11cdbc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CDC0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CDC0u; }
            if (ctx->pc != 0x11CDC0u) { return; }
        }
        }
    }
    ctx->pc = 0x11CDC0u;
label_11cdc0:
    // 0x11cdc0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x11cdc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdc4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x11cdc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11cdc8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11cdcc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x11cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x11cdd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11cdd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11cdd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11cdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cddc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cde0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x11cde0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cde4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11cde8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x11cde8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x11cdec: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x11cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x11cdf0: 0x40f809  jalr        $v0
    ctx->pc = 0x11CDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CDF8u);
        ctx->pc = 0x11CDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDF0u;
            // 0x11cdf4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CDF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CDF8u; }
            if (ctx->pc != 0x11CDF8u) { return; }
        }
        }
    }
    ctx->pc = 0x11CDF8u;
label_11cdf8:
    // 0x11cdf8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x11cdf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11cdfc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x11cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11ce00: 0x2471e848  addiu       $s1, $v1, -0x17B8
    ctx->pc = 0x11ce00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x11ce04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ce08: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11ce0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ce10: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11ce14: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x11ce14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x11ce18: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x11ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x11ce1c: 0x40f809  jalr        $v0
    ctx->pc = 0x11CE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CE24u);
        ctx->pc = 0x11CE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE1Cu;
            // 0x11ce20: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CE24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CE24u; }
            if (ctx->pc != 0x11CE24u) { return; }
        }
        }
    }
    ctx->pc = 0x11CE24u;
    // 0x11ce24: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x11CE24u;
    {
        const bool branch_taken_0x11ce24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x11CE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE24u;
            // 0x11ce28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce24) {
            ctx->pc = 0x11CE58u;
            goto label_11ce58;
        }
    }
    ctx->pc = 0x11CE2Cu;
    // 0x11ce2c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x11ce2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11ce30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ce34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11ce38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ce3c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x11ce3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ce40: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11ce44: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x11ce44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x11ce48: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x11ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x11ce4c: 0x40f809  jalr        $v0
    ctx->pc = 0x11CE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CE54u);
        ctx->pc = 0x11CE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE4Cu;
            // 0x11ce50: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CE54u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CE54u; }
            if (ctx->pc != 0x11CE54u) { return; }
        }
        }
    }
    ctx->pc = 0x11CE54u;
    // 0x11ce54: 0x0  nop
    ctx->pc = 0x11ce54u;
    // NOP
label_11ce58:
    // 0x11ce58: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x11ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x11ce5c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x11ce5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11ce60: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x11ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11ce64: 0x40f809  jalr        $v0
    ctx->pc = 0x11CE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CE6Cu);
        ctx->pc = 0x11CE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE64u;
            // 0x11ce68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CE6Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CE6Cu; }
            if (ctx->pc != 0x11CE6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11CE6Cu;
    // 0x11ce6c: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x11CE6Cu;
    {
        const bool branch_taken_0x11ce6c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce6c) {
            ctx->pc = 0x11CE98u;
            goto label_11ce98;
        }
    }
    ctx->pc = 0x11CE74u;
    // 0x11ce74: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x11ce74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11ce78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ce7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11ce80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ce84: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11ce88: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x11ce88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11ce8c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x11ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x11ce90: 0x40f809  jalr        $v0
    ctx->pc = 0x11CE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CE98u);
        ctx->pc = 0x11CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE90u;
            // 0x11ce94: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CE98u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CE98u; }
            if (ctx->pc != 0x11CE98u) { return; }
        }
        }
    }
    ctx->pc = 0x11CE98u;
label_11ce98:
    // 0x11ce98: 0x16e0ffa9  bnez        $s7, . + 4 + (-0x57 << 2)
    ctx->pc = 0x11CE98u;
    {
        const bool branch_taken_0x11ce98 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE98u;
            // 0x11ce9c: 0x2642fff8  addiu       $v0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce98) {
            ctx->pc = 0x11CD40u;
            runtime->cooperativeGuestYield();
            goto label_11cd40;
        }
    }
    ctx->pc = 0x11CEA0u;
label_11cea0:
    // 0x11cea0: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CEA0u;
    {
        const bool branch_taken_0x11cea0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CEA0u;
            // 0x11cea4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cea0) {
            ctx->pc = 0x11CEC0u;
            goto label_11cec0;
        }
    }
    ctx->pc = 0x11CEA8u;
    // 0x11cea8: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11ceac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11ceb0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x11ceb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11ceb4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x11ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x11ceb8: 0x40f809  jalr        $v0
    ctx->pc = 0x11CEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CEC0u);
        ctx->pc = 0x11CEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CEB8u;
            // 0x11cebc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11CEC0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11CEC0u; }
            if (ctx->pc != 0x11CEC0u) { return; }
        }
        }
    }
    ctx->pc = 0x11CEC0u;
label_11cec0:
    // 0x11cec0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x11cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11cec4: 0x8c64f168  lw          $a0, -0xE98($v1)
    ctx->pc = 0x11cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x11cec8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x11cec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x11cecc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11CECCu;
    {
        const bool branch_taken_0x11cecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CECCu;
            // 0x11ced0: 0x8ec2ed60  lw          $v0, -0x12A0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cecc) {
            ctx->pc = 0x11CEF8u;
            goto label_11cef8;
        }
    }
    ctx->pc = 0x11CED4u;
    // 0x11ced4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x11ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_11ced8:
    // 0x11ced8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11cedc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x11cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x11cee0: 0x0  nop
    ctx->pc = 0x11cee0u;
    // NOP
    // 0x11cee4: 0x0  nop
    ctx->pc = 0x11cee4u;
    // NOP
    // 0x11cee8: 0x0  nop
    ctx->pc = 0x11cee8u;
    // NOP
    // 0x11ceec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CEECu;
    {
        const bool branch_taken_0x11ceec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ceec) {
            ctx->pc = 0x11CEF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CEECu;
            // 0x11cef0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CED8u;
            runtime->cooperativeGuestYield();
            goto label_11ced8;
        }
    }
    ctx->pc = 0x11CEF4u;
    // 0x11cef4: 0x8ec2ed60  lw          $v0, -0x12A0($s6)
    ctx->pc = 0x11cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
label_11cef8:
    // 0x11cef8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x11cef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x11cefc: 0x24c5ed68  addiu       $a1, $a2, -0x1298
    ctx->pc = 0x11cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962536));
    // 0x11cf00: 0xac64f168  sw          $a0, -0xE98($v1)
    ctx->pc = 0x11cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 4));
    // 0x11cf04: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x11cf04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11cf08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11cf0c: 0xaec6ed60  sw          $a2, -0x12A0($s6)
    ctx->pc = 0x11cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294962528), GPR_U32(ctx, 6));
    // 0x11cf10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11cf14: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x11cf14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11cf18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11cf1c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CF1Cu;
    {
        const bool branch_taken_0x11cf1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF1Cu;
            // 0x11cf20: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf1c) {
            ctx->pc = 0x11CF34u;
            goto label_11cf34;
        }
    }
    ctx->pc = 0x11CF24u;
    // 0x11cf24: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11cf28: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11cf2c: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x11CF2Cu;
    SET_GPR_U32(ctx, 31, 0x11CF34u);
    ctx->pc = 0x11CF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF2Cu;
            // 0x11cf30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CF34u; }
        if (ctx->pc != 0x11CF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CF34u; }
        if (ctx->pc != 0x11CF34u) { return; }
    }
    ctx->pc = 0x11CF34u;
label_11cf34:
    // 0x11cf34: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x11cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x11cf38: 0x2443bb98  addiu       $v1, $v0, -0x4468
    ctx->pc = 0x11cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949784));
    // 0x11cf3c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x11cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11cf40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11cf44: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x11cf44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11cf48: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x11cf48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11cf4c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x11cf4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11cf50: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x11cf50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11cf54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x11cf54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11cf58: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x11cf58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11cf5c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x11cf5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cf60: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x11cf60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cf64: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x11cf64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cf68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cf6c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x11cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x11cf70: 0x3e00008  jr          $ra
    ctx->pc = 0x11CF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF70u;
            // 0x11cf74: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC08u: goto label_11cc08;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CCC8u: goto label_11ccc8;
            case 0x11CD40u: goto label_11cd40;
            case 0x11CD88u: goto label_11cd88;
            case 0x11CDC0u: goto label_11cdc0;
            case 0x11CDF8u: goto label_11cdf8;
            case 0x11CE58u: goto label_11ce58;
            case 0x11CE98u: goto label_11ce98;
            case 0x11CEA0u: goto label_11cea0;
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CED8u: goto label_11ced8;
            case 0x11CEF8u: goto label_11cef8;
            case 0x11CF34u: goto label_11cf34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CF78u;
}
