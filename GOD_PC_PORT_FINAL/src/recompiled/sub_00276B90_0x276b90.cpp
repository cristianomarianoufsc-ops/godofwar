#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00276B90
// Address: 0x276b90 - 0x276cb8
void sub_00276B90_0x276b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276B90_0x276b90");
#endif

    ctx->pc = 0x276b90u;

    // 0x276b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276b94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x276b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x276b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276b9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x276b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x276ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ba4: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x276ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x276ba8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276BA8u;
    {
        const bool branch_taken_0x276ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276BA8u;
            // 0x276bac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ba8) {
            ctx->pc = 0x276BC0u;
            goto label_276bc0;
        }
    }
    ctx->pc = 0x276BB0u;
    // 0x276bb0: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x276bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x276bb4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x276bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x276bb8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x276BB8u;
    {
        const bool branch_taken_0x276bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276bb8) {
            ctx->pc = 0x276BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276BB8u;
            // 0x276bbc: 0x8e030848  lw          $v1, 0x848($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276C00u;
            goto label_276c00;
        }
    }
    ctx->pc = 0x276BC0u;
label_276bc0:
    // 0x276bc0: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x276BC0u;
    SET_GPR_U32(ctx, 31, 0x276BC8u);
    ctx->pc = 0x276BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276BC0u;
            // 0x276bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BC8u; }
        if (ctx->pc != 0x276BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BC8u; }
        if (ctx->pc != 0x276BC8u) { return; }
    }
    ctx->pc = 0x276BC8u;
    // 0x276bc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x276bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x276bcc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x276bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x276bd0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x276bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x276bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x276bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x276bdc: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x276bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x276be0: 0xc09da4a  jal         func_276928
    ctx->pc = 0x276BE0u;
    SET_GPR_U32(ctx, 31, 0x276BE8u);
    ctx->pc = 0x276BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276BE0u;
            // 0x276be4: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276928u;
    if (runtime->hasFunction(0x276928u)) {
        auto targetFn = runtime->lookupFunction(0x276928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BE8u; }
        if (ctx->pc != 0x276BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276928_0x276928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276BE8u; }
        if (ctx->pc != 0x276BE8u) { return; }
    }
    ctx->pc = 0x276BE8u;
    // 0x276be8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x276be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x276bec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x276becu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x276bf0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x276bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x276bf4: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x276bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x276bf8: 0xae03084c  sw          $v1, 0x84C($s0)
    ctx->pc = 0x276bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 3));
    // 0x276bfc: 0x8e030848  lw          $v1, 0x848($s0)
    ctx->pc = 0x276bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_276c00:
    // 0x276c00: 0x111023  negu        $v0, $s1
    ctx->pc = 0x276c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x276c04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x276c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276c08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x276c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276c0c: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x276c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x276c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276c14: 0x3e00008  jr          $ra
    ctx->pc = 0x276C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276C14u;
            // 0x276c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276BC0u: goto label_276bc0;
            case 0x276C00u: goto label_276c00;
            case 0x276C78u: goto label_276c78;
            case 0x276C80u: goto label_276c80;
            case 0x276C84u: goto label_276c84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276C1Cu;
    // 0x276c1c: 0x0  nop
    ctx->pc = 0x276c1cu;
    // NOP
    // 0x276c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276c24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x276c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x276c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x276c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x276c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x276c34: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x276C34u;
    SET_GPR_U32(ctx, 31, 0x276C3Cu);
    ctx->pc = 0x276C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276C34u;
            // 0x276c38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C3Cu; }
        if (ctx->pc != 0x276C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C3Cu; }
        if (ctx->pc != 0x276C3Cu) { return; }
    }
    ctx->pc = 0x276C3Cu;
    // 0x276c3c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x276c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x276c40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x276c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x276c44: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x276c44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x276c48: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x276c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x276c4c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x276c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x276c50: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x276c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x276c54: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x276c54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x276c58: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x276c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x276c5c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276C5Cu;
    {
        const bool branch_taken_0x276c5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x276C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276C5Cu;
            // 0x276c60: 0xae30082c  sw          $s0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c5c) {
            ctx->pc = 0x276C78u;
            goto label_276c78;
        }
    }
    ctx->pc = 0x276C64u;
    // 0x276c64: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x276c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x276c68: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276C68u;
    {
        const bool branch_taken_0x276c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x276c68) {
            ctx->pc = 0x276C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276C68u;
            // 0x276c6c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276C84u;
            goto label_276c84;
        }
    }
    ctx->pc = 0x276C70u;
    // 0x276c70: 0x16040003  bne         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276C70u;
    {
        const bool branch_taken_0x276c70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x276C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276C70u;
            // 0x276c74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c70) {
            ctx->pc = 0x276C80u;
            goto label_276c80;
        }
    }
    ctx->pc = 0x276C78u;
label_276c78:
    // 0x276c78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x276C78u;
    {
        const bool branch_taken_0x276c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276C78u;
            // 0x276c7c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c78) {
            ctx->pc = 0x276C84u;
            goto label_276c84;
        }
    }
    ctx->pc = 0x276C80u;
label_276c80:
    // 0x276c80: 0xae220828  sw          $v0, 0x828($s1)
    ctx->pc = 0x276c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
label_276c84:
    // 0x276c84: 0xc09da4a  jal         func_276928
    ctx->pc = 0x276C84u;
    SET_GPR_U32(ctx, 31, 0x276C8Cu);
    ctx->pc = 0x276C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276C84u;
            // 0x276c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276928u;
    if (runtime->hasFunction(0x276928u)) {
        auto targetFn = runtime->lookupFunction(0x276928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C8Cu; }
        if (ctx->pc != 0x276C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276928_0x276928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276C8Cu; }
        if (ctx->pc != 0x276C8Cu) { return; }
    }
    ctx->pc = 0x276C8Cu;
    // 0x276c8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x276c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x276c90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x276c90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x276c94: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x276c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x276c98: 0xae23084c  sw          $v1, 0x84C($s1)
    ctx->pc = 0x276c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 3));
    // 0x276c9c: 0xae220848  sw          $v0, 0x848($s1)
    ctx->pc = 0x276c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
    // 0x276ca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x276ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276ca4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x276ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276cac: 0x3e00008  jr          $ra
    ctx->pc = 0x276CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276CACu;
            // 0x276cb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276BC0u: goto label_276bc0;
            case 0x276C00u: goto label_276c00;
            case 0x276C78u: goto label_276c78;
            case 0x276C80u: goto label_276c80;
            case 0x276C84u: goto label_276c84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276CB4u;
    // 0x276cb4: 0x0  nop
    ctx->pc = 0x276cb4u;
    // NOP
}
