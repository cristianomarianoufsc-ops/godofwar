#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B6A8
// Address: 0x28b6a8 - 0x28b6e8
void sub_0028B6A8_0x28b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B6A8_0x28b6a8");
#endif

    ctx->pc = 0x28b6a8u;

    // 0x28b6a8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x28b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x28b6ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28b6acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28b6b0: 0x8c6245fc  lw          $v0, 0x45FC($v1)
    ctx->pc = 0x28b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17916)));
    // 0x28b6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b6b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28b6bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B6BCu;
    {
        const bool branch_taken_0x28b6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6BCu;
            // 0x28b6c0: 0xac6245fc  sw          $v0, 0x45FC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6bc) {
            ctx->pc = 0x28B6DCu;
            goto label_28b6dc;
        }
    }
    ctx->pc = 0x28B6C4u;
    // 0x28b6c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x28b6c8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x28b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x28b6cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b6d0: 0x8c444b80  lw          $a0, 0x4B80($v0)
    ctx->pc = 0x28b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19328)));
    // 0x28b6d4: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x28B6D4u;
    SET_GPR_U32(ctx, 31, 0x28B6DCu);
    ctx->pc = 0x28B6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6D4u;
            // 0x28b6d8: 0xaca345f8  sw          $v1, 0x45F8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 17912), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6DCu; }
        if (ctx->pc != 0x28B6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6DCu; }
        if (ctx->pc != 0x28B6DCu) { return; }
    }
    ctx->pc = 0x28B6DCu;
label_28b6dc:
    // 0x28b6dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x28B6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6E0u;
            // 0x28b6e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6DCu: goto label_28b6dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28B6E8u;
}
