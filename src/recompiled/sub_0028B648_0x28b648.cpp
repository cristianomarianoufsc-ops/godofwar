#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B648
// Address: 0x28b648 - 0x28b6a8
void sub_0028B648_0x28b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B648_0x28b648");
#endif

    ctx->pc = 0x28b648u;

    // 0x28b648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28b64c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28b650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b658: 0xc0a4ec4  jal         func_293B10
    ctx->pc = 0x28B658u;
    SET_GPR_U32(ctx, 31, 0x28B660u);
    ctx->pc = 0x28B65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B658u;
            // 0x28b65c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293B10u;
    if (runtime->hasFunction(0x293B10u)) {
        auto targetFn = runtime->lookupFunction(0x293B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B660u; }
        if (ctx->pc != 0x28B660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293b10_0x293b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B660u; }
        if (ctx->pc != 0x28B660u) { return; }
    }
    ctx->pc = 0x28B660u;
    // 0x28b660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b664: 0x8e2245f8  lw          $v0, 0x45F8($s1)
    ctx->pc = 0x28b664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17912)));
    // 0x28b668: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B668u;
    {
        const bool branch_taken_0x28b668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x28B66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B668u;
            // 0x28b66c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b668) {
            ctx->pc = 0x28B678u;
            goto label_28b678;
        }
    }
    ctx->pc = 0x28B670u;
    // 0x28b670: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28B670u;
    {
        const bool branch_taken_0x28b670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B670u;
            // 0x28b674: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b670) {
            ctx->pc = 0x28B688u;
            goto label_28b688;
        }
    }
    ctx->pc = 0x28B678u;
label_28b678:
    // 0x28b678: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x28B678u;
    SET_GPR_U32(ctx, 31, 0x28B680u);
    ctx->pc = 0x28B67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B678u;
            // 0x28b67c: 0x8c444b80  lw          $a0, 0x4B80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B680u; }
        if (ctx->pc != 0x28B680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B680u; }
        if (ctx->pc != 0x28B680u) { return; }
    }
    ctx->pc = 0x28B680u;
    // 0x28b680: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x28b680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x28b684: 0xae3045f8  sw          $s0, 0x45F8($s1)
    ctx->pc = 0x28b684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17912), GPR_U32(ctx, 16));
label_28b688:
    // 0x28b688: 0x8c6245fc  lw          $v0, 0x45FC($v1)
    ctx->pc = 0x28b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17916)));
    // 0x28b68c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b690: 0xac6245fc  sw          $v0, 0x45FC($v1)
    ctx->pc = 0x28b690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17916), GPR_U32(ctx, 2));
    // 0x28b694: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28b694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b69c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x28B6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6A0u;
            // 0x28b6a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B678u: goto label_28b678;
            case 0x28B688u: goto label_28b688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28B6A8u;
}
