#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5F88
// Address: 0x1e5f88 - 0x1e6020
void sub_001E5F88_0x1e5f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5F88_0x1e5f88");
#endif

    ctx->pc = 0x1e5f88u;

    // 0x1e5f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5f90: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1e5f90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1e5f94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e5f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e5f98: 0x8e22d2ac  lw          $v0, -0x2D54($s1)
    ctx->pc = 0x1e5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955692)));
    // 0x1e5f9c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E5F9Cu;
    {
        const bool branch_taken_0x1e5f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F9Cu;
            // 0x1e5fa0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f9c) {
            ctx->pc = 0x1E6008u;
            goto label_1e6008;
        }
    }
    ctx->pc = 0x1E5FA4u;
    // 0x1e5fa4: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1E5FA4u;
    SET_GPR_U32(ctx, 31, 0x1E5FACu);
    ctx->pc = 0x1E5FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FA4u;
            // 0x1e5fa8: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FACu; }
        if (ctx->pc != 0x1E5FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FACu; }
        if (ctx->pc != 0x1E5FACu) { return; }
    }
    ctx->pc = 0x1E5FACu;
    // 0x1e5fac: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1e5facu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5fb0: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1e5fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1e5fb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e5fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e5fb8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e5fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e5fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e5fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e5fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5fc4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e5fc8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1e5fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1e5fcc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1e5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1e5fd0: 0x40f809  jalr        $v0
    ctx->pc = 0x1E5FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E5FD8u);
        ctx->pc = 0x1E5FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FD0u;
            // 0x1e5fd4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5FD8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6008u: goto label_1e6008;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FD8u; }
            if (ctx->pc != 0x1E5FD8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5FD8u;
    // 0x1e5fd8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1E5FD8u;
    SET_GPR_U32(ctx, 31, 0x1E5FE0u);
    ctx->pc = 0x1E5FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FD8u;
            // 0x1e5fdc: 0x24041808  addiu       $a0, $zero, 0x1808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FE0u; }
        if (ctx->pc != 0x1E5FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FE0u; }
        if (ctx->pc != 0x1E5FE0u) { return; }
    }
    ctx->pc = 0x1E5FE0u;
    // 0x1e5fe0: 0xc079710  jal         func_1E5C40
    ctx->pc = 0x1E5FE0u;
    SET_GPR_U32(ctx, 31, 0x1E5FE8u);
    ctx->pc = 0x1E5FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FE0u;
            // 0x1e5fe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5C40u;
    if (runtime->hasFunction(0x1E5C40u)) {
        auto targetFn = runtime->lookupFunction(0x1E5C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FE8u; }
        if (ctx->pc != 0x1E5FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5C40_0x1e5c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FE8u; }
        if (ctx->pc != 0x1E5FE8u) { return; }
    }
    ctx->pc = 0x1E5FE8u;
    // 0x1e5fe8: 0xae22d2ac  sw          $v0, -0x2D54($s1)
    ctx->pc = 0x1e5fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294955692), GPR_U32(ctx, 2));
    // 0x1e5fec: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1e5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1e5ff0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e5ff4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1e5ff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1e5ff8: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1e5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1e5ffc: 0x40f809  jalr        $v0
    ctx->pc = 0x1E5FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6004u);
        ctx->pc = 0x1E6000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FFCu;
            // 0x1e6000: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6004u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6008u: goto label_1e6008;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6004u; }
            if (ctx->pc != 0x1E6004u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6004u;
    // 0x1e6004: 0x0  nop
    ctx->pc = 0x1e6004u;
    // NOP
label_1e6008:
    // 0x1e6008: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e6008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e600c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e600cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6014: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6014u;
            // 0x1e6018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6008u: goto label_1e6008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E601Cu;
    // 0x1e601c: 0x0  nop
    ctx->pc = 0x1e601cu;
    // NOP
}
