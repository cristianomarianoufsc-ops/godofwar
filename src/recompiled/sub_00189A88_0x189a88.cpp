#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189A88
// Address: 0x189a88 - 0x189b00
void sub_00189A88_0x189a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189A88_0x189a88");
#endif

    ctx->pc = 0x189a88u;

    // 0x189a88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189a8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x189a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x189a90: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x189a90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x189a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189a98: 0x8e034f20  lw          $v1, 0x4F20($s0)
    ctx->pc = 0x189a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x189a9c: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x189a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x189aa0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x189AA0u;
    {
        const bool branch_taken_0x189aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189AA0u;
            // 0x189aa4: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189aa0) {
            ctx->pc = 0x189AF0u;
            goto label_189af0;
        }
    }
    ctx->pc = 0x189AA8u;
    // 0x189aa8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x189aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189aac: 0x8c6400fc  lw          $a0, 0xFC($v1)
    ctx->pc = 0x189aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x189ab0: 0x8c650100  lw          $a1, 0x100($v1)
    ctx->pc = 0x189ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x189ab4: 0x8c660104  lw          $a2, 0x104($v1)
    ctx->pc = 0x189ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x189ab8: 0x120f809  jalr        $t1
    ctx->pc = 0x189AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x189AC0u);
        ctx->pc = 0x189ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189AB8u;
            // 0x189abc: 0x8c670108  lw          $a3, 0x108($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x189AC0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189AE8u: goto label_189ae8;
            case 0x189AF0u: goto label_189af0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x189AC0u; }
            if (ctx->pc != 0x189AC0u) { return; }
        }
        }
    }
    ctx->pc = 0x189AC0u;
    // 0x189ac0: 0x8e064f20  lw          $a2, 0x4F20($s0)
    ctx->pc = 0x189ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x189ac4: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x189ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x189ac8: 0x8cc50100  lw          $a1, 0x100($a2)
    ctx->pc = 0x189ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x189acc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x189accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x189ad0: 0x8cc30108  lw          $v1, 0x108($a2)
    ctx->pc = 0x189ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
    // 0x189ad4: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x189ad4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189ad8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x189ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189adc: 0xacc30108  sw          $v1, 0x108($a2)
    ctx->pc = 0x189adcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 264), GPR_U32(ctx, 3));
    // 0x189ae0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x189AE0u;
    {
        const bool branch_taken_0x189ae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x189ae0) {
            ctx->pc = 0x189AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x189AE0u;
            // 0x189ae4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x189AE8u;
            goto label_189ae8;
        }
    }
    ctx->pc = 0x189AE8u;
label_189ae8:
    // 0x189ae8: 0x2010  mfhi        $a0
    ctx->pc = 0x189ae8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x189aec: 0xacc40104  sw          $a0, 0x104($a2)
    ctx->pc = 0x189aecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 260), GPR_U32(ctx, 4));
label_189af0:
    // 0x189af0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189af8: 0x3e00008  jr          $ra
    ctx->pc = 0x189AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189AF8u;
            // 0x189afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189AE8u: goto label_189ae8;
            case 0x189AF0u: goto label_189af0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189B00u;
}
