#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1bba78
// Address: 0x1bba78 - 0x1bbb30
void entry_1bba78_0x1bbb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1bba78_0x1bbb30");
#endif

    ctx->pc = 0x1bba78u;

    // 0x1bba78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bba78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bba7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bba80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bba80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bba84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bba84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bba88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1bba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1bba8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bba90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bba94: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bba94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bba98: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x1bba98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bba9c: 0x24725280  addiu       $s2, $v1, 0x5280
    ctx->pc = 0x1bba9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 21120));
    // 0x1bbaa0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bbaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bbaa4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bbaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bbaa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbaac: 0x8c50005c  lw          $s0, 0x5C($v0)
    ctx->pc = 0x1bbaacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1bbab0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1bbab0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bbab4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1bbab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1bbab8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBAB8u;
    {
        const bool branch_taken_0x1bbab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAB8u;
            // 0x1bbabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbab8) {
            ctx->pc = 0x1BBAD8u;
            goto label_1bbad8;
        }
    }
    ctx->pc = 0x1BBAC0u;
    // 0x1bbac0: 0xc06f748  jal         func_1BDD20
    ctx->pc = 0x1BBAC0u;
    SET_GPR_U32(ctx, 31, 0x1BBAC8u);
    ctx->pc = 0x1BDD20u;
    if (runtime->hasFunction(0x1BDD20u)) {
        auto targetFn = runtime->lookupFunction(0x1BDD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAC8u; }
        if (ctx->pc != 0x1BBAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDD20_0x1bdd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAC8u; }
        if (ctx->pc != 0x1BBAC8u) { return; }
    }
    ctx->pc = 0x1BBAC8u;
    // 0x1bbac8: 0xc06f96a  jal         func_1BE5A8
    ctx->pc = 0x1BBAC8u;
    SET_GPR_U32(ctx, 31, 0x1BBAD0u);
    ctx->pc = 0x1BBACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAC8u;
            // 0x1bbacc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE5A8u;
    if (runtime->hasFunction(0x1BE5A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAD0u; }
        if (ctx->pc != 0x1BBAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE5A8_0x1be5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAD0u; }
        if (ctx->pc != 0x1BBAD0u) { return; }
    }
    ctx->pc = 0x1BBAD0u;
    // 0x1bbad0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbad4: 0x0  nop
    ctx->pc = 0x1bbad4u;
    // NOP
label_1bbad8:
    // 0x1bbad8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1bbad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bbadc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bbadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bbae0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbae4: 0x8c50005c  lw          $s0, 0x5C($v0)
    ctx->pc = 0x1bbae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1bbae8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1bbae8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bbaec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1bbaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1bbaf0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBAF0u;
    {
        const bool branch_taken_0x1bbaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbaf0) {
            ctx->pc = 0x1BBB04u;
            goto label_1bbb04;
        }
    }
    ctx->pc = 0x1BBAF8u;
    // 0x1bbaf8: 0xc06f954  jal         func_1BE550
    ctx->pc = 0x1BBAF8u;
    SET_GPR_U32(ctx, 31, 0x1BBB00u);
    ctx->pc = 0x1BBAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAF8u;
            // 0x1bbafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE550u;
    if (runtime->hasFunction(0x1BE550u)) {
        auto targetFn = runtime->lookupFunction(0x1BE550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB00u; }
        if (ctx->pc != 0x1BBB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE550_0x1be550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB00u; }
        if (ctx->pc != 0x1BBB00u) { return; }
    }
    ctx->pc = 0x1BBB00u;
    // 0x1bbb00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbb04:
    // 0x1bbb04: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBB04u;
    {
        const bool branch_taken_0x1bbb04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB04u;
            // 0x1bbb08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb04) {
            ctx->pc = 0x1BBB18u;
            goto label_1bbb18;
        }
    }
    ctx->pc = 0x1BBB0Cu;
    // 0x1bbb0c: 0xc06f6d6  jal         func_1BDB58
    ctx->pc = 0x1BBB0Cu;
    SET_GPR_U32(ctx, 31, 0x1BBB14u);
    ctx->pc = 0x1BBB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB0Cu;
            // 0x1bbb10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB58u;
    if (runtime->hasFunction(0x1BDB58u)) {
        auto targetFn = runtime->lookupFunction(0x1BDB58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB14u; }
        if (ctx->pc != 0x1BBB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDB58_0x1bdb58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB14u; }
        if (ctx->pc != 0x1BBB14u) { return; }
    }
    ctx->pc = 0x1BBB14u;
    // 0x1bbb14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bbb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bbb18:
    // 0x1bbb18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bbb18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbb1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1bbb1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbb20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbb24: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB24u;
            // 0x1bbb28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBAD8u: goto label_1bbad8;
            case 0x1BBB04u: goto label_1bbb04;
            case 0x1BBB18u: goto label_1bbb18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBB2Cu;
    // 0x1bbb2c: 0x0  nop
    ctx->pc = 0x1bbb2cu;
    // NOP
}
