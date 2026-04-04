#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DABC8
// Address: 0x1dabc8 - 0x1daf50
void sub_001DABC8_0x1dabc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DABC8_0x1dabc8");
#endif

    ctx->pc = 0x1dabc8u;

    // 0x1dabc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1dabc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1dabcc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1dabccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1dabd0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1dabd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1dabd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1dabd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabd8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1dabd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1dabdc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1dabdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1dabe0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1dabe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1dabe4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1dabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1dabe8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1dabe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1dabec: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x1DABECu;
    {
        const bool branch_taken_0x1dabec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DABF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DABECu;
            // 0x1dabf0: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dabec) {
            ctx->pc = 0x1DAF30u;
            goto label_1daf30;
        }
    }
    ctx->pc = 0x1DABF4u;
    // 0x1dabf4: 0x8e02c9b8  lw          $v0, -0x3648($s0)
    ctx->pc = 0x1dabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953400)));
    // 0x1dabf8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DABF8u;
    {
        const bool branch_taken_0x1dabf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dabf8) {
            ctx->pc = 0x1DABFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DABF8u;
            // 0x1dabfc: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAC18u;
            goto label_1dac18;
        }
    }
    ctx->pc = 0x1DAC00u;
    // 0x1dac00: 0xc066ed2  jal         func_19BB48
    ctx->pc = 0x1DAC00u;
    SET_GPR_U32(ctx, 31, 0x1DAC08u);
    ctx->pc = 0x1DAC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC00u;
            // 0x1dac04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BB48u;
    if (runtime->hasFunction(0x19BB48u)) {
        auto targetFn = runtime->lookupFunction(0x19BB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC08u; }
        if (ctx->pc != 0x1DAC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BB48_0x19bb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC08u; }
        if (ctx->pc != 0x1DAC08u) { return; }
    }
    ctx->pc = 0x1DAC08u;
    // 0x1dac08: 0x8e02c9b8  lw          $v0, -0x3648($s0)
    ctx->pc = 0x1dac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953400)));
    // 0x1dac0c: 0x504000c9  beql        $v0, $zero, . + 4 + (0xC9 << 2)
    ctx->pc = 0x1DAC0Cu;
    {
        const bool branch_taken_0x1dac0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dac0c) {
            ctx->pc = 0x1DAC10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC0Cu;
            // 0x1dac10: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DAF34u;
            goto label_1daf34;
        }
    }
    ctx->pc = 0x1DAC14u;
    // 0x1dac14: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x1dac14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dac18:
    // 0x1dac18: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1dac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1dac1c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1dac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1dac20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAC20u;
    {
        const bool branch_taken_0x1dac20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC20u;
            // 0x1dac24: 0x8e11c9b8  lw          $s1, -0x3648($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac20) {
            ctx->pc = 0x1DAC38u;
            goto label_1dac38;
        }
    }
    ctx->pc = 0x1DAC28u;
    // 0x1dac28: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1dac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1dac2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dac2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dac30: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DAC30u;
    {
        const bool branch_taken_0x1dac30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dac30) {
            ctx->pc = 0x1DAC60u;
            goto label_1dac60;
        }
    }
    ctx->pc = 0x1DAC38u;
label_1dac38:
    // 0x1dac38: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1dac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1dac3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DAC3Cu;
    {
        const bool branch_taken_0x1dac3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC3Cu;
            // 0x1dac40: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac3c) {
            ctx->pc = 0x1DAC70u;
            goto label_1dac70;
        }
    }
    ctx->pc = 0x1DAC44u;
    // 0x1dac44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dac48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DAC48u;
    {
        const bool branch_taken_0x1dac48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC48u;
            // 0x1dac4c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac48) {
            ctx->pc = 0x1DAC74u;
            goto label_1dac74;
        }
    }
    ctx->pc = 0x1DAC50u;
    // 0x1dac50: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1dac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1dac54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dac54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dac58: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DAC58u;
    {
        const bool branch_taken_0x1dac58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC58u;
            // 0x1dac5c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac58) {
            ctx->pc = 0x1DAC74u;
            goto label_1dac74;
        }
    }
    ctx->pc = 0x1DAC60u;
label_1dac60:
    // 0x1dac60: 0xc066ed2  jal         func_19BB48
    ctx->pc = 0x1DAC60u;
    SET_GPR_U32(ctx, 31, 0x1DAC68u);
    ctx->pc = 0x1DAC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC60u;
            // 0x1dac64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BB48u;
    if (runtime->hasFunction(0x19BB48u)) {
        auto targetFn = runtime->lookupFunction(0x19BB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC68u; }
        if (ctx->pc != 0x1DAC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BB48_0x19bb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC68u; }
        if (ctx->pc != 0x1DAC68u) { return; }
    }
    ctx->pc = 0x1DAC68u;
    // 0x1dac68: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1DAC68u;
    {
        const bool branch_taken_0x1dac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC68u;
            // 0x1dac6c: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac68) {
            ctx->pc = 0x1DADC8u;
            goto label_1dadc8;
        }
    }
    ctx->pc = 0x1DAC70u;
label_1dac70:
    // 0x1dac70: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1dac74:
    // 0x1dac74: 0x8c42c9b4  lw          $v0, -0x364C($v0)
    ctx->pc = 0x1dac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953396)));
    // 0x1dac78: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DAC78u;
    {
        const bool branch_taken_0x1dac78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dac78) {
            ctx->pc = 0x1DAC7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC78u;
            // 0x1dac7c: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DACE4u;
            goto label_1dace4;
        }
    }
    ctx->pc = 0x1DAC80u;
    // 0x1dac80: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1dac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1dac84: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x1dac84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1dac88: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DAC88u;
    {
        const bool branch_taken_0x1dac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dac88) {
            ctx->pc = 0x1DAC8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC88u;
            // 0x1dac8c: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DACE4u;
            goto label_1dace4;
        }
    }
    ctx->pc = 0x1DAC90u;
    // 0x1dac90: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1dac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1dac94: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DAC94u;
    {
        const bool branch_taken_0x1dac94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dac94) {
            ctx->pc = 0x1DAC98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC94u;
            // 0x1dac98: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DACE4u;
            goto label_1dace4;
        }
    }
    ctx->pc = 0x1DAC9Cu;
    // 0x1dac9c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1dac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1daca0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DACA0u;
    {
        const bool branch_taken_0x1daca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daca0) {
            ctx->pc = 0x1DACA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACA0u;
            // 0x1daca4: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DACE4u;
            goto label_1dace4;
        }
    }
    ctx->pc = 0x1DACA8u;
    // 0x1daca8: 0x30620380  andi        $v0, $v1, 0x380
    ctx->pc = 0x1daca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
    // 0x1dacac: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1DACACu;
    {
        const bool branch_taken_0x1dacac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dacac) {
            ctx->pc = 0x1DACB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACACu;
            // 0x1dacb0: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DACE4u;
            goto label_1dace4;
        }
    }
    ctx->pc = 0x1DACB4u;
    // 0x1dacb4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1dacb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1dacb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dacb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dacbc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DACBCu;
    {
        const bool branch_taken_0x1dacbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dacbc) {
            ctx->pc = 0x1DACC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACBCu;
            // 0x1dacc0: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DACE4u;
            goto label_1dace4;
        }
    }
    ctx->pc = 0x1DACC4u;
    // 0x1dacc4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1dacc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1dacc8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DACC8u;
    {
        const bool branch_taken_0x1dacc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dacc8) {
            ctx->pc = 0x1DACCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACC8u;
            // 0x1daccc: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DACE4u;
            goto label_1dace4;
        }
    }
    ctx->pc = 0x1DACD0u;
    // 0x1dacd0: 0x8e4202d8  lw          $v0, 0x2D8($s2)
    ctx->pc = 0x1dacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
    // 0x1dacd4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1dacd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1dacd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1dacd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1dacdc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DACDCu;
    {
        const bool branch_taken_0x1dacdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DACE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACDCu;
            // 0x1dace0: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dacdc) {
            ctx->pc = 0x1DAD58u;
            goto label_1dad58;
        }
    }
    ctx->pc = 0x1DACE4u;
label_1dace4:
    // 0x1dace4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1dace4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1dace8: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1DACE8u;
    {
        const bool branch_taken_0x1dace8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACE8u;
            // 0x1dacec: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dace8) {
            ctx->pc = 0x1DAF30u;
            goto label_1daf30;
        }
    }
    ctx->pc = 0x1DACF0u;
    // 0x1dacf0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1dacf0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dacf4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1dacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1dacf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dacf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dacfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dad00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dad00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dad08: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1dad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dad0c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1dad0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dad10: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1dad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1dad14: 0x40f809  jalr        $v0
    ctx->pc = 0x1DAD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAD1Cu);
        ctx->pc = 0x1DAD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD14u;
            // 0x1dad18: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DAD1Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAC18u: goto label_1dac18;
            case 0x1DAC38u: goto label_1dac38;
            case 0x1DAC60u: goto label_1dac60;
            case 0x1DAC70u: goto label_1dac70;
            case 0x1DAC74u: goto label_1dac74;
            case 0x1DACE4u: goto label_1dace4;
            case 0x1DAD58u: goto label_1dad58;
            case 0x1DADC8u: goto label_1dadc8;
            case 0x1DADD8u: goto label_1dadd8;
            case 0x1DAE20u: goto label_1dae20;
            case 0x1DAE3Cu: goto label_1dae3c;
            case 0x1DAF30u: goto label_1daf30;
            case 0x1DAF34u: goto label_1daf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD1Cu; }
            if (ctx->pc != 0x1DAD1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DAD1Cu;
    // 0x1dad1c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1dad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dad20: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1dad20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1dad24: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1dad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1dad28: 0x40f809  jalr        $v0
    ctx->pc = 0x1DAD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAD30u);
        ctx->pc = 0x1DAD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD28u;
            // 0x1dad2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DAD30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAC18u: goto label_1dac18;
            case 0x1DAC38u: goto label_1dac38;
            case 0x1DAC60u: goto label_1dac60;
            case 0x1DAC70u: goto label_1dac70;
            case 0x1DAC74u: goto label_1dac74;
            case 0x1DACE4u: goto label_1dace4;
            case 0x1DAD58u: goto label_1dad58;
            case 0x1DADC8u: goto label_1dadc8;
            case 0x1DADD8u: goto label_1dadd8;
            case 0x1DAE20u: goto label_1dae20;
            case 0x1DAE3Cu: goto label_1dae3c;
            case 0x1DAF30u: goto label_1daf30;
            case 0x1DAF34u: goto label_1daf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD30u; }
            if (ctx->pc != 0x1DAD30u) { return; }
        }
        }
    }
    ctx->pc = 0x1DAD30u;
    // 0x1dad30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dad30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dad34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad38: 0xc080358  jal         func_200D60
    ctx->pc = 0x1DAD38u;
    SET_GPR_U32(ctx, 31, 0x1DAD40u);
    ctx->pc = 0x1DAD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD38u;
            // 0x1dad3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D60u;
    if (runtime->hasFunction(0x200D60u)) {
        auto targetFn = runtime->lookupFunction(0x200D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD40u; }
        if (ctx->pc != 0x1DAD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d60_0x200d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD40u; }
        if (ctx->pc != 0x1DAD40u) { return; }
    }
    ctx->pc = 0x1DAD40u;
    // 0x1dad40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dad40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad44: 0xc080358  jal         func_200D60
    ctx->pc = 0x1DAD44u;
    SET_GPR_U32(ctx, 31, 0x1DAD4Cu);
    ctx->pc = 0x1DAD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD44u;
            // 0x1dad48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D60u;
    if (runtime->hasFunction(0x200D60u)) {
        auto targetFn = runtime->lookupFunction(0x200D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD4Cu; }
        if (ctx->pc != 0x1DAD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d60_0x200d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD4Cu; }
        if (ctx->pc != 0x1DAD4Cu) { return; }
    }
    ctx->pc = 0x1DAD4Cu;
    // 0x1dad4c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1DAD4Cu;
    {
        const bool branch_taken_0x1dad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD4Cu;
            // 0x1dad50: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad4c) {
            ctx->pc = 0x1DADC8u;
            goto label_1dadc8;
        }
    }
    ctx->pc = 0x1DAD54u;
    // 0x1dad54: 0x0  nop
    ctx->pc = 0x1dad54u;
    // NOP
label_1dad58:
    // 0x1dad58: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1dad58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1dad5c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DAD5Cu;
    {
        const bool branch_taken_0x1dad5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dad5c) {
            ctx->pc = 0x1DAD60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD5Cu;
            // 0x1dad60: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DADD8u;
            goto label_1dadd8;
        }
    }
    ctx->pc = 0x1DAD64u;
    // 0x1dad64: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1dad64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dad68: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dad68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dad6c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1dad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1dad70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dad70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dad74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dad74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dad78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dad78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dad80: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1dad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dad84: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1dad84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1dad88: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1dad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1dad8c: 0x40f809  jalr        $v0
    ctx->pc = 0x1DAD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAD94u);
        ctx->pc = 0x1DAD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD8Cu;
            // 0x1dad90: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DAD94u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAC18u: goto label_1dac18;
            case 0x1DAC38u: goto label_1dac38;
            case 0x1DAC60u: goto label_1dac60;
            case 0x1DAC70u: goto label_1dac70;
            case 0x1DAC74u: goto label_1dac74;
            case 0x1DACE4u: goto label_1dace4;
            case 0x1DAD58u: goto label_1dad58;
            case 0x1DADC8u: goto label_1dadc8;
            case 0x1DADD8u: goto label_1dadd8;
            case 0x1DAE20u: goto label_1dae20;
            case 0x1DAE3Cu: goto label_1dae3c;
            case 0x1DAF30u: goto label_1daf30;
            case 0x1DAF34u: goto label_1daf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD94u; }
            if (ctx->pc != 0x1DAD94u) { return; }
        }
        }
    }
    ctx->pc = 0x1DAD94u;
    // 0x1dad94: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1dad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dad98: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1dad98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1dad9c: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1dad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1dada0: 0x40f809  jalr        $v0
    ctx->pc = 0x1DADA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DADA8u);
        ctx->pc = 0x1DADA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADA0u;
            // 0x1dada4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DADA8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAC18u: goto label_1dac18;
            case 0x1DAC38u: goto label_1dac38;
            case 0x1DAC60u: goto label_1dac60;
            case 0x1DAC70u: goto label_1dac70;
            case 0x1DAC74u: goto label_1dac74;
            case 0x1DACE4u: goto label_1dace4;
            case 0x1DAD58u: goto label_1dad58;
            case 0x1DADC8u: goto label_1dadc8;
            case 0x1DADD8u: goto label_1dadd8;
            case 0x1DAE20u: goto label_1dae20;
            case 0x1DAE3Cu: goto label_1dae3c;
            case 0x1DAF30u: goto label_1daf30;
            case 0x1DAF34u: goto label_1daf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DADA8u; }
            if (ctx->pc != 0x1DADA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DADA8u;
    // 0x1dada8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dada8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dadacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadb0: 0xc080362  jal         func_200D88
    ctx->pc = 0x1DADB0u;
    SET_GPR_U32(ctx, 31, 0x1DADB8u);
    ctx->pc = 0x1DADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADB0u;
            // 0x1dadb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D88u;
    if (runtime->hasFunction(0x200D88u)) {
        auto targetFn = runtime->lookupFunction(0x200D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADB8u; }
        if (ctx->pc != 0x1DADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d88_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADB8u; }
        if (ctx->pc != 0x1DADB8u) { return; }
    }
    ctx->pc = 0x1DADB8u;
    // 0x1dadb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dadb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadbc: 0xc080362  jal         func_200D88
    ctx->pc = 0x1DADBCu;
    SET_GPR_U32(ctx, 31, 0x1DADC4u);
    ctx->pc = 0x1DADC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADBCu;
            // 0x1dadc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D88u;
    if (runtime->hasFunction(0x200D88u)) {
        auto targetFn = runtime->lookupFunction(0x200D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADC4u; }
        if (ctx->pc != 0x1DADC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d88_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADC4u; }
        if (ctx->pc != 0x1DADC4u) { return; }
    }
    ctx->pc = 0x1DADC4u;
    // 0x1dadc4: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1dadc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1dadc8:
    // 0x1dadc8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1dadc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1dadcc: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1DADCCu;
    {
        const bool branch_taken_0x1dadcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADCCu;
            // 0x1dadd0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dadcc) {
            ctx->pc = 0x1DAF34u;
            goto label_1daf34;
        }
    }
    ctx->pc = 0x1DADD4u;
    // 0x1dadd4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1dadd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1dadd8:
    // 0x1dadd8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1dadd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1daddc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1daddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1dade0: 0x40f809  jalr        $v0
    ctx->pc = 0x1DADE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DADE8u);
        ctx->pc = 0x1DADE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADE0u;
            // 0x1dade4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DADE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAC18u: goto label_1dac18;
            case 0x1DAC38u: goto label_1dac38;
            case 0x1DAC60u: goto label_1dac60;
            case 0x1DAC70u: goto label_1dac70;
            case 0x1DAC74u: goto label_1dac74;
            case 0x1DACE4u: goto label_1dace4;
            case 0x1DAD58u: goto label_1dad58;
            case 0x1DADC8u: goto label_1dadc8;
            case 0x1DADD8u: goto label_1dadd8;
            case 0x1DAE20u: goto label_1dae20;
            case 0x1DAE3Cu: goto label_1dae3c;
            case 0x1DAF30u: goto label_1daf30;
            case 0x1DAF34u: goto label_1daf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DADE8u; }
            if (ctx->pc != 0x1DADE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DADE8u;
    // 0x1dade8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dade8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadec: 0xc082458  jal         func_209160
    ctx->pc = 0x1DADECu;
    SET_GPR_U32(ctx, 31, 0x1DADF4u);
    ctx->pc = 0x1DADF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADECu;
            // 0x1dadf0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209160u;
    if (runtime->hasFunction(0x209160u)) {
        auto targetFn = runtime->lookupFunction(0x209160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADF4u; }
        if (ctx->pc != 0x1DADF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209160_0x209160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADF4u; }
        if (ctx->pc != 0x1DADF4u) { return; }
    }
    ctx->pc = 0x1DADF4u;
    // 0x1dadf4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dadf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dadf8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1dadf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dadfc: 0x0  nop
    ctx->pc = 0x1dadfcu;
    // NOP
    // 0x1dae00: 0x4501004c  bc1t        . + 4 + (0x4C << 2)
    ctx->pc = 0x1DAE00u;
    {
        const bool branch_taken_0x1dae00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE00u;
            // 0x1dae04: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae00) {
            ctx->pc = 0x1DAF34u;
            goto label_1daf34;
        }
    }
    ctx->pc = 0x1DAE08u;
    // 0x1dae08: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1dae08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1dae0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dae10: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAE10u;
    {
        const bool branch_taken_0x1dae10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DAE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE10u;
            // 0x1dae14: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae10) {
            ctx->pc = 0x1DAE20u;
            goto label_1dae20;
        }
    }
    ctx->pc = 0x1DAE18u;
    // 0x1dae18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DAE18u;
    {
        const bool branch_taken_0x1dae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE18u;
            // 0x1dae1c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae18) {
            ctx->pc = 0x1DAE3Cu;
            goto label_1dae3c;
        }
    }
    ctx->pc = 0x1DAE20u;
label_1dae20:
    // 0x1dae20: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1dae20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1dae24: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1dae24u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1dae28: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAE28u;
    {
        const bool branch_taken_0x1dae28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DAE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE28u;
            // 0x1dae2c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae28) {
            ctx->pc = 0x1DAE3Cu;
            goto label_1dae3c;
        }
    }
    ctx->pc = 0x1DAE30u;
    // 0x1dae30: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1DAE30u;
    SET_GPR_U32(ctx, 31, 0x1DAE38u);
    ctx->pc = 0x1DAE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE30u;
            // 0x1dae34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE38u; }
        if (ctx->pc != 0x1DAE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE38u; }
        if (ctx->pc != 0x1DAE38u) { return; }
    }
    ctx->pc = 0x1DAE38u;
    // 0x1dae38: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x1dae38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1dae3c:
    // 0x1dae3c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1dae3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dae40: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1dae40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1dae44: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1dae44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1dae48: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1dae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1dae4c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1dae4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dae50: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1dae50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1dae54: 0xd8820020  lqc2        $vf2, 0x20($a0)
    ctx->pc = 0x1dae54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1dae58: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1dae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dae5c: 0x78850030  lq          $a1, 0x30($a0)
    ctx->pc = 0x1dae5cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1dae60: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1dae60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dae64: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x1dae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x1dae68: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1dae68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dae6c: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1dae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dae70: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1dae70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1dae74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1dae74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dae78: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1dae78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dae7c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1dae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dae80: 0x3c03ff9c  lui         $v1, 0xFF9C
    ctx->pc = 0x1dae80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65436 << 16));
    // 0x1dae84: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1dae84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1dae88: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1dae88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dae8c: 0x3463e00f  ori         $v1, $v1, 0xE00F
    ctx->pc = 0x1dae8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57359);
    // 0x1dae90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dae94: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1dae94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1dae98: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1dae98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1dae9c: 0x3c070b13  lui         $a3, 0xB13
    ctx->pc = 0x1dae9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2835 << 16));
    // 0x1daea0: 0x24c2f170  addiu       $v0, $a2, -0xE90
    ctx->pc = 0x1daea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x1daea4: 0xacc3f170  sw          $v1, -0xE90($a2)
    ctx->pc = 0x1daea4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 3));
    // 0x1daea8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1daea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1daeac: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1daeacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1daeb0: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1daeb0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1daeb4: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1daeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1daeb8: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1daeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1daebc: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x1daebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x1daec0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1daec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1daec4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1daec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1daec8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1daec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1daecc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1daeccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1daed0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1daed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1daed4: 0xc047864  jal         func_11E190
    ctx->pc = 0x1DAED4u;
    SET_GPR_U32(ctx, 31, 0x1DAEDCu);
    ctx->pc = 0x1DAED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAED4u;
            // 0x1daed8: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEDCu; }
        if (ctx->pc != 0x1DAEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEDCu; }
        if (ctx->pc != 0x1DAEDCu) { return; }
    }
    ctx->pc = 0x1DAEDCu;
    // 0x1daedc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DAEDCu;
    {
        const bool branch_taken_0x1daedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAEDCu;
            // 0x1daee0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daedc) {
            ctx->pc = 0x1DAF34u;
            goto label_1daf34;
        }
    }
    ctx->pc = 0x1DAEE4u;
    // 0x1daee4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1daee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1daee8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1daee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1daeec: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1daeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1daef0: 0x40f809  jalr        $v0
    ctx->pc = 0x1DAEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAEF8u);
        ctx->pc = 0x1DAEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAEF0u;
            // 0x1daef4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DAEF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAC18u: goto label_1dac18;
            case 0x1DAC38u: goto label_1dac38;
            case 0x1DAC60u: goto label_1dac60;
            case 0x1DAC70u: goto label_1dac70;
            case 0x1DAC74u: goto label_1dac74;
            case 0x1DACE4u: goto label_1dace4;
            case 0x1DAD58u: goto label_1dad58;
            case 0x1DADC8u: goto label_1dadc8;
            case 0x1DADD8u: goto label_1dadd8;
            case 0x1DAE20u: goto label_1dae20;
            case 0x1DAE3Cu: goto label_1dae3c;
            case 0x1DAF30u: goto label_1daf30;
            case 0x1DAF34u: goto label_1daf34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEF8u; }
            if (ctx->pc != 0x1DAEF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DAEF8u;
    // 0x1daef8: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x1daef8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x1daefc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1daefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1daf00: 0x25087790  addiu       $t0, $t0, 0x7790
    ctx->pc = 0x1daf00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30608));
    // 0x1daf04: 0x8c645e7c  lw          $a0, 0x5E7C($v1)
    ctx->pc = 0x1daf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24188)));
    // 0x1daf08: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x1daf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x1daf0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1daf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1daf10: 0x8d090028  lw          $t1, 0x28($t0)
    ctx->pc = 0x1daf10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x1daf14: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x1daf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x1daf18: 0x79070000  lq          $a3, 0x0($t0)
    ctx->pc = 0x1daf18u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1daf1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1daf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf20: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1daf20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1daf24: 0xc0805a8  jal         func_2016A0
    ctx->pc = 0x1DAF24u;
    SET_GPR_U32(ctx, 31, 0x1DAF2Cu);
    ctx->pc = 0x1DAF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF24u;
            // 0x1daf28: 0x79080010  lq          $t0, 0x10($t0) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2016A0u;
    if (runtime->hasFunction(0x2016A0u)) {
        auto targetFn = runtime->lookupFunction(0x2016A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF2Cu; }
        if (ctx->pc != 0x1DAF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002016A0_0x2016a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF2Cu; }
        if (ctx->pc != 0x1DAF2Cu) { return; }
    }
    ctx->pc = 0x1DAF2Cu;
    // 0x1daf2c: 0x0  nop
    ctx->pc = 0x1daf2cu;
    // NOP
label_1daf30:
    // 0x1daf30: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1daf30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1daf34:
    // 0x1daf34: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1daf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1daf38: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1daf38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1daf3c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1daf3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1daf40: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1daf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1daf44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF44u;
            // 0x1daf48: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAC18u: goto label_1dac18;
            case 0x1DAC38u: goto label_1dac38;
            case 0x1DAC60u: goto label_1dac60;
            case 0x1DAC70u: goto label_1dac70;
            case 0x1DAC74u: goto label_1dac74;
            case 0x1DACE4u: goto label_1dace4;
            case 0x1DAD58u: goto label_1dad58;
            case 0x1DADC8u: goto label_1dadc8;
            case 0x1DADD8u: goto label_1dadd8;
            case 0x1DAE20u: goto label_1dae20;
            case 0x1DAE3Cu: goto label_1dae3c;
            case 0x1DAF30u: goto label_1daf30;
            case 0x1DAF34u: goto label_1daf34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DAF4Cu;
    // 0x1daf4c: 0x0  nop
    ctx->pc = 0x1daf4cu;
    // NOP
}
