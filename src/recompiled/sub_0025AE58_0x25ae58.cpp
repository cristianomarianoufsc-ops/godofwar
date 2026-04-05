#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025AE58
// Address: 0x25ae58 - 0x25aec0
void sub_0025AE58_0x25ae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AE58_0x25ae58");
#endif

    ctx->pc = 0x25ae58u;

    // 0x25ae58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ae5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25ae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25ae60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ae64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25ae64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae68: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x25ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25ae6c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AE6Cu;
    {
        const bool branch_taken_0x25ae6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE6Cu;
            // 0x25ae70: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae6c) {
            ctx->pc = 0x25AE8Cu;
            goto label_25ae8c;
        }
    }
    ctx->pc = 0x25AE74u;
    // 0x25ae74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25ae78: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25ae7c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x25ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x25ae80: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x25ae80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x25ae84: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AE84u;
    {
        const bool branch_taken_0x25ae84 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x25ae84) {
            ctx->pc = 0x25AE88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE84u;
            // 0x25ae88: 0x9603007c  lhu         $v1, 0x7C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25AE98u;
            goto label_25ae98;
        }
    }
    ctx->pc = 0x25AE8Cu;
label_25ae8c:
    // 0x25ae8c: 0xc0742fe  jal         func_1D0BF8
    ctx->pc = 0x25AE8Cu;
    SET_GPR_U32(ctx, 31, 0x25AE94u);
    ctx->pc = 0x25AE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE8Cu;
            // 0x25ae90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF8u;
    if (runtime->hasFunction(0x1D0BF8u)) {
        auto targetFn = runtime->lookupFunction(0x1D0BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE94u; }
        if (ctx->pc != 0x25AE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0BF8_0x1d0bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE94u; }
        if (ctx->pc != 0x25AE94u) { return; }
    }
    ctx->pc = 0x25AE94u;
    // 0x25ae94: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x25ae94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_25ae98:
    // 0x25ae98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25ae9c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25AE9Cu;
    {
        const bool branch_taken_0x25ae9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ae9c) {
            ctx->pc = 0x25AEA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE9Cu;
            // 0x25aea0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25AEB4u;
            goto label_25aeb4;
        }
    }
    ctx->pc = 0x25AEA4u;
    // 0x25aea4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x25aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25aea8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x25aea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x25aeac: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x25aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x25aeb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25aeb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25aeb4:
    // 0x25aeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25aeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25aeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x25AEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AEB8u;
            // 0x25aebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25AE8Cu: goto label_25ae8c;
            case 0x25AE98u: goto label_25ae98;
            case 0x25AEB4u: goto label_25aeb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25AEC0u;
}
