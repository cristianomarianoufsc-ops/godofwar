#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153C28
// Address: 0x153c28 - 0x153cb0
void sub_00153C28_0x153c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153C28_0x153c28");
#endif

    ctx->pc = 0x153c28u;

    // 0x153c28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x153c2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x153c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x153c30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x153c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x153c34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x153c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x153c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x153c3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153c44: 0x86220040  lh          $v0, 0x40($s1)
    ctx->pc = 0x153c44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x153c48: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x153C48u;
    {
        const bool branch_taken_0x153c48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x153C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C48u;
            // 0x153c4c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c48) {
            ctx->pc = 0x153C7Cu;
            goto label_153c7c;
        }
    }
    ctx->pc = 0x153C50u;
    // 0x153c50: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x153c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x153c54: 0x0  nop
    ctx->pc = 0x153c54u;
    // NOP
label_153c58:
    // 0x153c58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x153c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153c5c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x153c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x153c60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x153c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x153c64: 0xc054dc8  jal         func_153720
    ctx->pc = 0x153C64u;
    SET_GPR_U32(ctx, 31, 0x153C6Cu);
    ctx->pc = 0x153C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153C64u;
            // 0x153c68: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    if (runtime->hasFunction(0x153720u)) {
        auto targetFn = runtime->lookupFunction(0x153720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C6Cu; }
        if (ctx->pc != 0x153C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_153720_0x153728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C6Cu; }
        if (ctx->pc != 0x153C6Cu) { return; }
    }
    ctx->pc = 0x153C6Cu;
    // 0x153c6c: 0x86220040  lh          $v0, 0x40($s1)
    ctx->pc = 0x153c6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x153c70: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x153c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x153c74: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x153C74u;
    {
        const bool branch_taken_0x153c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C74u;
            // 0x153c78: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c74) {
            ctx->pc = 0x153C58u;
            runtime->cooperativeGuestYield();
            goto label_153c58;
        }
    }
    ctx->pc = 0x153C7Cu;
label_153c7c:
    // 0x153c7c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x153c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x153c80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153C80u;
    {
        const bool branch_taken_0x153c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C80u;
            // 0x153c84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c80) {
            ctx->pc = 0x153C9Cu;
            goto label_153c9c;
        }
    }
    ctx->pc = 0x153C88u;
    // 0x153c88: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x153C88u;
    {
        const bool branch_taken_0x153c88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c88) {
            ctx->pc = 0x153C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153C88u;
            // 0x153c8c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153CA0u;
            goto label_153ca0;
        }
    }
    ctx->pc = 0x153C90u;
    // 0x153c90: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x153C90u;
    SET_GPR_U32(ctx, 31, 0x153C98u);
    ctx->pc = 0x153C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153C90u;
            // 0x153c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C98u; }
        if (ctx->pc != 0x153C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C98u; }
        if (ctx->pc != 0x153C98u) { return; }
    }
    ctx->pc = 0x153C98u;
    // 0x153c98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x153c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_153c9c:
    // 0x153c9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x153c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_153ca0:
    // 0x153ca0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x153ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x153CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153CA8u;
            // 0x153cac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153C58u: goto label_153c58;
            case 0x153C7Cu: goto label_153c7c;
            case 0x153C9Cu: goto label_153c9c;
            case 0x153CA0u: goto label_153ca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x153CB0u;
}
