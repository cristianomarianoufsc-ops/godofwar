#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185E78
// Address: 0x185e78 - 0x185f28
void sub_00185E78_0x185e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185E78_0x185e78");
#endif

    ctx->pc = 0x185e78u;

    // 0x185e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x185e7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x185e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x185e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185e88: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x185e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x185e8c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x185e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x185e90: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x185e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x185e94: 0xac623834  sw          $v0, 0x3834($v1)
    ctx->pc = 0x185e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14388), GPR_U32(ctx, 2));
    // 0x185e98: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x185e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x185e9c: 0xc05ebba  jal         func_17AEE8
    ctx->pc = 0x185E9Cu;
    SET_GPR_U32(ctx, 31, 0x185EA4u);
    ctx->pc = 0x185EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E9Cu;
            // 0x185ea0: 0xaca03830  sw          $zero, 0x3830($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 14384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AEE8u;
    if (runtime->hasFunction(0x17AEE8u)) {
        auto targetFn = runtime->lookupFunction(0x17AEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EA4u; }
        if (ctx->pc != 0x185EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AEE8_0x17aee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185EA4u; }
        if (ctx->pc != 0x185EA4u) { return; }
    }
    ctx->pc = 0x185EA4u;
    // 0x185ea4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x185ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x185ea8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185EA8u;
    {
        const bool branch_taken_0x185ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185EA8u;
            // 0x185eac: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ea8) {
            ctx->pc = 0x185EC8u;
            goto label_185ec8;
        }
    }
    ctx->pc = 0x185EB0u;
    // 0x185eb0: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x185eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x185eb4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x185eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x185eb8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x185eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x185ebc: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x185ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x185ec0: 0x40f809  jalr        $v0
    ctx->pc = 0x185EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185EC8u);
        ctx->pc = 0x185EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185EC0u;
            // 0x185ec4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185EC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185EC8u: goto label_185ec8;
            case 0x185EF0u: goto label_185ef0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185EC8u; }
            if (ctx->pc != 0x185EC8u) { return; }
        }
        }
    }
    ctx->pc = 0x185EC8u;
label_185ec8:
    // 0x185ec8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x185ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x185ecc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x185ECCu;
    {
        const bool branch_taken_0x185ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185ECCu;
            // 0x185ed0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ecc) {
            ctx->pc = 0x185EF0u;
            goto label_185ef0;
        }
    }
    ctx->pc = 0x185ED4u;
    // 0x185ed4: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x185ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x185ed8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x185ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x185edc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x185edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x185ee0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x185ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x185ee4: 0x40f809  jalr        $v0
    ctx->pc = 0x185EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185EECu);
        ctx->pc = 0x185EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185EE4u;
            // 0x185ee8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185EECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185EC8u: goto label_185ec8;
            case 0x185EF0u: goto label_185ef0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185EECu; }
            if (ctx->pc != 0x185EECu) { return; }
        }
        }
    }
    ctx->pc = 0x185EECu;
    // 0x185eec: 0x0  nop
    ctx->pc = 0x185eecu;
    // NOP
label_185ef0:
    // 0x185ef0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x185ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x185ef4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185ef8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x185ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x185efc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x185f00: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x185f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x185f04: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x185f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x185f08: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x185f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x185f0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x185f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185f14: 0xac40c814  sw          $zero, -0x37EC($v0)
    ctx->pc = 0x185f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952980), GPR_U32(ctx, 0));
    // 0x185f18: 0xac60c818  sw          $zero, -0x37E8($v1)
    ctx->pc = 0x185f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952984), GPR_U32(ctx, 0));
    // 0x185f1c: 0xac80c81c  sw          $zero, -0x37E4($a0)
    ctx->pc = 0x185f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952988), GPR_U32(ctx, 0));
    // 0x185f20: 0x3e00008  jr          $ra
    ctx->pc = 0x185F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F20u;
            // 0x185f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185EC8u: goto label_185ec8;
            case 0x185EF0u: goto label_185ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x185F28u;
}
