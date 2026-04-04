#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018C040
// Address: 0x18c040 - 0x18c0e8
void sub_0018C040_0x18c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C040_0x18c040");
#endif

    ctx->pc = 0x18c040u;

    // 0x18c040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18c044: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18c048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18c04c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18c04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c050: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18c050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18c054: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18c054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18c058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c05c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x18c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18c060: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18C060u;
    {
        const bool branch_taken_0x18c060 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18C064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C060u;
            // 0x18c064: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c060) {
            ctx->pc = 0x18C0CCu;
            goto label_18c0cc;
        }
    }
    ctx->pc = 0x18C068u;
    // 0x18c068: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x18c068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18c06c: 0x0  nop
    ctx->pc = 0x18c06cu;
    // NOP
label_18c070:
    // 0x18c070: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x18c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x18c074: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18c074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18c078: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18c078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c07c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18C07Cu;
    {
        const bool branch_taken_0x18c07c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18C080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C07Cu;
            // 0x18c080: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c07c) {
            ctx->pc = 0x18C0B8u;
            goto label_18c0b8;
        }
    }
    ctx->pc = 0x18C084u;
    // 0x18c084: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x18c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_18c088:
    // 0x18c088: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x18c088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18c08c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x18c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x18c090: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x18c094: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C094u;
    {
        const bool branch_taken_0x18c094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c094) {
            ctx->pc = 0x18C098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C094u;
            // 0x18c098: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18C0A8u;
            goto label_18c0a8;
        }
    }
    ctx->pc = 0x18C09Cu;
    // 0x18c09c: 0xc062ede  jal         func_18BB78
    ctx->pc = 0x18C09Cu;
    SET_GPR_U32(ctx, 31, 0x18C0A4u);
    ctx->pc = 0x18C0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C09Cu;
            // 0x18c0a0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BB78u;
    if (runtime->hasFunction(0x18BB78u)) {
        auto targetFn = runtime->lookupFunction(0x18BB78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C0A4u; }
        if (ctx->pc != 0x18C0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BB78_0x18bb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C0A4u; }
        if (ctx->pc != 0x18C0A4u) { return; }
    }
    ctx->pc = 0x18C0A4u;
    // 0x18c0a4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x18c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_18c0a8:
    // 0x18c0a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18c0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18c0ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x18c0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18c0b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18C0B0u;
    {
        const bool branch_taken_0x18c0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0B0u;
            // 0x18c0b4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0b0) {
            ctx->pc = 0x18C088u;
            runtime->cooperativeGuestYield();
            goto label_18c088;
        }
    }
    ctx->pc = 0x18C0B8u;
label_18c0b8:
    // 0x18c0b8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x18c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18c0bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18c0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18c0c0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18c0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18c0c4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x18C0C4u;
    {
        const bool branch_taken_0x18c0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0C4u;
            // 0x18c0c8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0c4) {
            ctx->pc = 0x18C070u;
            runtime->cooperativeGuestYield();
            goto label_18c070;
        }
    }
    ctx->pc = 0x18C0CCu;
label_18c0cc:
    // 0x18c0cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18c0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c0d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18c0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c0d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c0d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c0d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18c0d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18C0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0E0u;
            // 0x18c0e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C070u: goto label_18c070;
            case 0x18C088u: goto label_18c088;
            case 0x18C0A8u: goto label_18c0a8;
            case 0x18C0B8u: goto label_18c0b8;
            case 0x18C0CCu: goto label_18c0cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C0E8u;
}
