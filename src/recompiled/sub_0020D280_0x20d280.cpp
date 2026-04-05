#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020D280
// Address: 0x20d280 - 0x20d350
void sub_0020D280_0x20d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D280_0x20d280");
#endif

    ctx->pc = 0x20d280u;

    // 0x20d280: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20d280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20d284: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x20d284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x20d288: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x20d288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x20d28c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d290: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x20d290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x20d294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20d294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20d298: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20d298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20d29c: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x20d29cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x20d2a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20d2a4: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x20d2a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x20d2a8: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x20d2a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20d2ac: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D2ACu;
    {
        const bool branch_taken_0x20d2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x20D2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D2ACu;
            // 0x20d2b0: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2ac) {
            ctx->pc = 0x20D2C0u;
            goto label_20d2c0;
        }
    }
    ctx->pc = 0x20D2B4u;
    // 0x20d2b4: 0xc04da64  jal         func_136990
    ctx->pc = 0x20D2B4u;
    SET_GPR_U32(ctx, 31, 0x20D2BCu);
    ctx->pc = 0x20D2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D2B4u;
            // 0x20d2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D2BCu; }
        if (ctx->pc != 0x20D2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D2BCu; }
        if (ctx->pc != 0x20D2BCu) { return; }
    }
    ctx->pc = 0x20D2BCu;
    // 0x20d2bc: 0x0  nop
    ctx->pc = 0x20d2bcu;
    // NOP
label_20d2c0:
    // 0x20d2c0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x20d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x20d2c4: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x20d2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x20d2c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20d2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d2d0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x20d2d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d2d4: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x20d2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x20d2d8: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x20d2d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20d2dc: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x20d2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x20d2e0: 0x78470020  lq          $a3, 0x20($v0)
    ctx->pc = 0x20d2e0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x20d2e4: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x20d2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x20d2e8: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x20d2e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x20d2ec: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x20D2ECu;
    SET_GPR_U32(ctx, 31, 0x20D2F4u);
    ctx->pc = 0x20D2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D2ECu;
            // 0x20d2f0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D2F4u; }
        if (ctx->pc != 0x20D2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D2F4u; }
        if (ctx->pc != 0x20D2F4u) { return; }
    }
    ctx->pc = 0x20D2F4u;
    // 0x20d2f4: 0x8e28001c  lw          $t0, 0x1C($s1)
    ctx->pc = 0x20d2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x20d2f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20d2f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2fc: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x20D2FCu;
    {
        const bool branch_taken_0x20d2fc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x20D300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D2FCu;
            // 0x20d300: 0x7ba70040  lq          $a3, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2fc) {
            ctx->pc = 0x20D334u;
            goto label_20d334;
        }
    }
    ctx->pc = 0x20D304u;
    // 0x20d304: 0x0  nop
    ctx->pc = 0x20d304u;
    // NOP
label_20d308:
    // 0x20d308: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x20d308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20d30c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x20d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20d310: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20d310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20d314: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d318: 0xc8282a  slt         $a1, $a2, $t0
    ctx->pc = 0x20d318u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x20d31c: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x20d31cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x20d320: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x20d320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x20d324: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x20d324u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d328: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20d328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20d32c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x20D32Cu;
    {
        const bool branch_taken_0x20d32c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D32Cu;
            // 0x20d330: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d32c) {
            ctx->pc = 0x20D308u;
            runtime->cooperativeGuestYield();
            goto label_20d308;
        }
    }
    ctx->pc = 0x20D334u;
label_20d334:
    // 0x20d334: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x20d334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20d338: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x20d338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20d33c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x20d33cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20d340: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20d340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d344: 0x3e00008  jr          $ra
    ctx->pc = 0x20D344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D344u;
            // 0x20d348: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D2C0u: goto label_20d2c0;
            case 0x20D308u: goto label_20d308;
            case 0x20D334u: goto label_20d334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D34Cu;
    // 0x20d34c: 0x0  nop
    ctx->pc = 0x20d34cu;
    // NOP
}
