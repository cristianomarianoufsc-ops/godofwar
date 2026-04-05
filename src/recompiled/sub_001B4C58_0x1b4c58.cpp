#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4C58
// Address: 0x1b4c58 - 0x1b4d28
void sub_001B4C58_0x1b4c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4C58_0x1b4c58");
#endif

    ctx->pc = 0x1b4c58u;

    // 0x1b4c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b4c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b4c5c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1b4c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1b4c60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b4c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b4c64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b4c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b4c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b4c6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b4c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b4c70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b4c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4c78: 0x8ce2cb90  lw          $v0, -0x3470($a3)
    ctx->pc = 0x1b4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294953872)));
    // 0x1b4c7c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b4c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b4c80: 0x18a0001e  blez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B4C80u;
    {
        const bool branch_taken_0x1b4c80 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B4C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C80u;
            // 0x1b4c84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c80) {
            ctx->pc = 0x1B4CFCu;
            goto label_1b4cfc;
        }
    }
    ctx->pc = 0x1B4C88u;
    // 0x1b4c88: 0x8cf0cb90  lw          $s0, -0x3470($a3)
    ctx->pc = 0x1b4c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294953872)));
    // 0x1b4c8c: 0x0  nop
    ctx->pc = 0x1b4c8cu;
    // NOP
label_1b4c90:
    // 0x1b4c90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b4c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4c94: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1b4c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b4c98: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x1b4c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1b4c9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4ca0: 0x14510013  bne         $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B4CA0u;
    {
        const bool branch_taken_0x1b4ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B4CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CA0u;
            // 0x1b4ca4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ca0) {
            ctx->pc = 0x1B4CF0u;
            goto label_1b4cf0;
        }
    }
    ctx->pc = 0x1B4CA8u;
    // 0x1b4ca8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b4cac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b4cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4cb0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1b4cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1b4cb4: 0x24c2fffc  addiu       $v0, $a2, -0x4
    ctx->pc = 0x1b4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1b4cb8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4CB8u;
    {
        const bool branch_taken_0x1b4cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CB8u;
            // 0x1b4cbc: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cb8) {
            ctx->pc = 0x1B4CE0u;
            goto label_1b4ce0;
        }
    }
    ctx->pc = 0x1B4CC0u;
    // 0x1b4cc0: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x1b4cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b4cc4: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1b4cc4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x1b4cc8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1B4CC8u;
    SET_GPR_U32(ctx, 31, 0x1B4CD0u);
    ctx->pc = 0x1B4CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CC8u;
            // 0x1b4ccc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CD0u; }
        if (ctx->pc != 0x1B4CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CD0u; }
        if (ctx->pc != 0x1B4CD0u) { return; }
    }
    ctx->pc = 0x1B4CD0u;
    // 0x1b4cd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b4cd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4cd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4CD8u;
    {
        const bool branch_taken_0x1b4cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CD8u;
            // 0x1b4cdc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cd8) {
            ctx->pc = 0x1B4CFCu;
            goto label_1b4cfc;
        }
    }
    ctx->pc = 0x1B4CE0u;
label_1b4ce0:
    // 0x1b4ce0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1b4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b4ce4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4CE4u;
    {
        const bool branch_taken_0x1b4ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CE4u;
            // 0x1b4ce8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ce4) {
            ctx->pc = 0x1B4CFCu;
            goto label_1b4cfc;
        }
    }
    ctx->pc = 0x1B4CECu;
    // 0x1b4cec: 0x0  nop
    ctx->pc = 0x1b4cecu;
    // NOP
label_1b4cf0:
    // 0x1b4cf0: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1b4cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b4cf4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1B4CF4u;
    {
        const bool branch_taken_0x1b4cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CF4u;
            // 0x1b4cf8: 0x8cf0cb90  lw          $s0, -0x3470($a3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294953872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cf4) {
            ctx->pc = 0x1B4C90u;
            runtime->cooperativeGuestYield();
            goto label_1b4c90;
        }
    }
    ctx->pc = 0x1B4CFCu;
label_1b4cfc:
    // 0x1b4cfc: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1b4cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1b4d00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4D00u;
    {
        const bool branch_taken_0x1b4d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D00u;
            // 0x1b4d04: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d00) {
            ctx->pc = 0x1B4D14u;
            goto label_1b4d14;
        }
    }
    ctx->pc = 0x1B4D08u;
    // 0x1b4d08: 0xc06d2ca  jal         func_1B4B28
    ctx->pc = 0x1B4D08u;
    SET_GPR_U32(ctx, 31, 0x1B4D10u);
    ctx->pc = 0x1B4D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D08u;
            // 0x1b4d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B28u;
    if (runtime->hasFunction(0x1B4B28u)) {
        auto targetFn = runtime->lookupFunction(0x1B4B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D10u; }
        if (ctx->pc != 0x1B4D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b4b28_0x1b4b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D10u; }
        if (ctx->pc != 0x1B4D10u) { return; }
    }
    ctx->pc = 0x1B4D10u;
    // 0x1b4d10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b4d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b4d14:
    // 0x1b4d14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b4d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4d18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b4d18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D20u;
            // 0x1b4d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4C90u: goto label_1b4c90;
            case 0x1B4CE0u: goto label_1b4ce0;
            case 0x1B4CF0u: goto label_1b4cf0;
            case 0x1B4CFCu: goto label_1b4cfc;
            case 0x1B4D14u: goto label_1b4d14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4D28u;
}
