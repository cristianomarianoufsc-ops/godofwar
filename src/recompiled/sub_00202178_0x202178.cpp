#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202178
// Address: 0x202178 - 0x2021f8
void sub_00202178_0x202178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202178_0x202178");
#endif

    ctx->pc = 0x202178u;

    // 0x202178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x202178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20217c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x202180: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x202180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x202184: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202188: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x202188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20218c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20218cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202194: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x202194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_202198:
    // 0x202198: 0x26420048  addiu       $v0, $s2, 0x48
    ctx->pc = 0x202198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x20219c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x20219cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2021a0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2021a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2021a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2021a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2021a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2021a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2021ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2021ACu;
    {
        const bool branch_taken_0x2021ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2021B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2021ACu;
            // 0x2021b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021ac) {
            ctx->pc = 0x2021D0u;
            goto label_2021d0;
        }
    }
    ctx->pc = 0x2021B4u;
    // 0x2021b4: 0x8c83e434  lw          $v1, -0x1BCC($a0)
    ctx->pc = 0x2021b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960180)));
    // 0x2021b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2021b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2021bc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2021bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2021c0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2021c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2021c4: 0x40f809  jalr        $v0
    ctx->pc = 0x2021C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2021CCu);
        ctx->pc = 0x2021C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2021C4u;
            // 0x2021c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2021CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202198u: goto label_202198;
            case 0x2021D0u: goto label_2021d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2021CCu; }
            if (ctx->pc != 0x2021CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2021CCu;
    // 0x2021cc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2021ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2021d0:
    // 0x2021d0: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2021d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2021d4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2021D4u;
    {
        const bool branch_taken_0x2021d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2021D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2021D4u;
            // 0x2021d8: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021d4) {
            ctx->pc = 0x202198u;
            runtime->cooperativeGuestYield();
            goto label_202198;
        }
    }
    ctx->pc = 0x2021DCu;
    // 0x2021dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2021dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2021e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2021e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2021e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2021e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2021e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2021e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2021ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2021ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2021F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2021ECu;
            // 0x2021f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202198u: goto label_202198;
            case 0x2021D0u: goto label_2021d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2021F4u;
    // 0x2021f4: 0x0  nop
    ctx->pc = 0x2021f4u;
    // NOP
}
