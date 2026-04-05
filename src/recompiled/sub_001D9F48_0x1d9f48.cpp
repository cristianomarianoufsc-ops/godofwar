#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D9F48
// Address: 0x1d9f48 - 0x1da038
void sub_001D9F48_0x1d9f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9F48_0x1d9f48");
#endif

    ctx->pc = 0x1d9f48u;

    // 0x1d9f48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d9f4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d9f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d9f50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d9f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d9f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d9f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d9f5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d9f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f60: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d9f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d9f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9f68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9f6c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1d9f6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9f70: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1d9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d9f74: 0x0  nop
    ctx->pc = 0x1d9f74u;
    // NOP
label_1d9f78:
    // 0x1d9f78: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d9f7c: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x1d9f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1d9f80: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1d9f80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9f84: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d9f88: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1d9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1d9f8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d9f90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d9f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d9f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f98: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d9f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9f9c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d9fa0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1d9fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d9fa4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1d9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1d9fa8: 0x40f809  jalr        $v0
    ctx->pc = 0x1D9FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9FB0u);
        ctx->pc = 0x1D9FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9FA8u;
            // 0x1d9fac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9FB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9F78u: goto label_1d9f78;
            case 0x1D9FB8u: goto label_1d9fb8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FB0u; }
            if (ctx->pc != 0x1D9FB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9FB0u;
    // 0x1d9fb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9fb4: 0x0  nop
    ctx->pc = 0x1d9fb4u;
    // NOP
label_1d9fb8:
    // 0x1d9fb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9fbc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d9fc0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d9fc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d9fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d9fc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d9fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d9fcc: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D9FCCu;
    {
        const bool branch_taken_0x1d9fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9FCCu;
            // 0x1d9fd0: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9fcc) {
            ctx->pc = 0x1D9FB8u;
            runtime->cooperativeGuestYield();
            goto label_1d9fb8;
        }
    }
    ctx->pc = 0x1D9FD4u;
    // 0x1d9fd4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1d9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d9fd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9fdc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d9fe0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9fe4: 0x84460014  lh          $a2, 0x14($v0)
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d9fe8: 0xc04c518  jal         func_131460
    ctx->pc = 0x1D9FE8u;
    SET_GPR_U32(ctx, 31, 0x1D9FF0u);
    ctx->pc = 0x1D9FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9FE8u;
            // 0x1d9fec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FF0u; }
        if (ctx->pc != 0x1D9FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FF0u; }
        if (ctx->pc != 0x1D9FF0u) { return; }
    }
    ctx->pc = 0x1D9FF0u;
    // 0x1d9ff0: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1d9ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d9ff4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D9FF4u;
    {
        const bool branch_taken_0x1d9ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9FF4u;
            // 0x1d9ff8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ff4) {
            ctx->pc = 0x1D9F78u;
            runtime->cooperativeGuestYield();
            goto label_1d9f78;
        }
    }
    ctx->pc = 0x1D9FFCu;
    // 0x1d9ffc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1d9ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da000: 0xc04c992  jal         func_132648
    ctx->pc = 0x1DA000u;
    SET_GPR_U32(ctx, 31, 0x1DA008u);
    ctx->pc = 0x1DA004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA000u;
            // 0x1da004: 0x24843690  addiu       $a0, $a0, 0x3690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA008u; }
        if (ctx->pc != 0x1DA008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA008u; }
        if (ctx->pc != 0x1DA008u) { return; }
    }
    ctx->pc = 0x1DA008u;
    // 0x1da008: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1da008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1da00c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1da00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1da010: 0xc04c992  jal         func_132648
    ctx->pc = 0x1DA010u;
    SET_GPR_U32(ctx, 31, 0x1DA018u);
    ctx->pc = 0x1DA014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA010u;
            // 0x1da014: 0x24846b40  addiu       $a0, $a0, 0x6B40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA018u; }
        if (ctx->pc != 0x1DA018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA018u; }
        if (ctx->pc != 0x1DA018u) { return; }
    }
    ctx->pc = 0x1DA018u;
    // 0x1da018: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x1da018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x1da01c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1da01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da020: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1da020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da024: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da028: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1da028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da030: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA030u;
            // 0x1da034: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9F78u: goto label_1d9f78;
            case 0x1D9FB8u: goto label_1d9fb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA038u;
}
