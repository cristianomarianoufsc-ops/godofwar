#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218E40
// Address: 0x218e40 - 0x218ef0
void sub_00218E40_0x218e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218E40_0x218e40");
#endif

    ctx->pc = 0x218e40u;

    // 0x218e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218e44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x218e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x218e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e50: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x218e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x218e54: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x218e54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x218e58: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x218e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x218e5c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x218E5Cu;
    {
        const bool branch_taken_0x218e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218e5c) {
            ctx->pc = 0x218E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218E5Cu;
            // 0x218e60: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x218E98u;
            goto label_218e98;
        }
    }
    ctx->pc = 0x218E64u;
    // 0x218e64: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x218e64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218e68: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x218e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x218e6c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x218e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x218e70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x218e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218e74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218e78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x218e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218e7c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x218e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218e80: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x218e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x218e84: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x218e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x218e88: 0x40f809  jalr        $v0
    ctx->pc = 0x218E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218E90u);
        ctx->pc = 0x218E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218E88u;
            // 0x218e8c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218E90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218E98u: goto label_218e98;
            case 0x218EE0u: goto label_218ee0;
            case 0x218EE4u: goto label_218ee4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218E90u; }
            if (ctx->pc != 0x218E90u) { return; }
        }
        }
    }
    ctx->pc = 0x218E90u;
    // 0x218e90: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x218e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x218e94: 0x0  nop
    ctx->pc = 0x218e94u;
    // NOP
label_218e98:
    // 0x218e98: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x218E98u;
    {
        const bool branch_taken_0x218e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218E98u;
            // 0x218e9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e98) {
            ctx->pc = 0x218EE0u;
            goto label_218ee0;
        }
    }
    ctx->pc = 0x218EA0u;
    // 0x218ea0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x218ea0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x218ea4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x218ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x218ea8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x218EA8u;
    {
        const bool branch_taken_0x218ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218EA8u;
            // 0x218eac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ea8) {
            ctx->pc = 0x218EE4u;
            goto label_218ee4;
        }
    }
    ctx->pc = 0x218EB0u;
    // 0x218eb0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x218eb0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218eb4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x218eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x218eb8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x218eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x218ebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x218ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218ec0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218ec4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x218ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218ec8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x218ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218ecc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x218eccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x218ed0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x218ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x218ed4: 0x40f809  jalr        $v0
    ctx->pc = 0x218ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218EDCu);
        ctx->pc = 0x218ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218ED4u;
            // 0x218ed8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218EDCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218E98u: goto label_218e98;
            case 0x218EE0u: goto label_218ee0;
            case 0x218EE4u: goto label_218ee4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218EDCu; }
            if (ctx->pc != 0x218EDCu) { return; }
        }
        }
    }
    ctx->pc = 0x218EDCu;
    // 0x218edc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x218edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_218ee0:
    // 0x218ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_218ee4:
    // 0x218ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x218EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218EE4u;
            // 0x218ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218E98u: goto label_218e98;
            case 0x218EE0u: goto label_218ee0;
            case 0x218EE4u: goto label_218ee4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218EECu;
    // 0x218eec: 0x0  nop
    ctx->pc = 0x218eecu;
    // NOP
}
