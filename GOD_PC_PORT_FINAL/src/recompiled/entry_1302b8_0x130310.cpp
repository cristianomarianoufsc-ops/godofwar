#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1302b8
// Address: 0x1302b8 - 0x130310
void entry_1302b8_0x130310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1302b8_0x130310");
#endif

    ctx->pc = 0x1302b8u;

    // 0x1302b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1302b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302bc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1302bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1302c0: 0x4830003  bgezl       $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1302C0u;
    {
        const bool branch_taken_0x1302c0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1302c0) {
            ctx->pc = 0x1302C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1302C0u;
            // 0x1302c4: 0x8c430018  lw          $v1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1302D0u;
            goto label_1302d0;
        }
    }
    ctx->pc = 0x1302C8u;
label_1302c8:
    // 0x1302c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1302C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1302C8u;
            // 0x1302cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1302C8u: goto label_1302c8;
            case 0x1302D0u: goto label_1302d0;
            case 0x130304u: goto label_130304;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1302D0u;
label_1302d0:
    // 0x1302d0: 0x1060fffd  beqz        $v1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1302D0u;
    {
        const bool branch_taken_0x1302d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302d0) {
            ctx->pc = 0x1302C8u;
            runtime->cooperativeGuestYield();
            goto label_1302c8;
        }
    }
    ctx->pc = 0x1302D8u;
    // 0x1302d8: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x1302d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1302dc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1302DCu;
    {
        const bool branch_taken_0x1302dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1302DCu;
            // 0x1302e0: 0x41942  srl         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302dc) {
            ctx->pc = 0x130304u;
            goto label_130304;
        }
    }
    ctx->pc = 0x1302E4u;
    // 0x1302e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1302e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1302e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1302e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1302ec: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x1302ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1302f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1302f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1302f4: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x1302f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1302f8: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x1302f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1302fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1302FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1302FCu;
            // 0x130300: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1302C8u: goto label_1302c8;
            case 0x1302D0u: goto label_1302d0;
            case 0x130304u: goto label_130304;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130304u;
label_130304:
    // 0x130304: 0x3e00008  jr          $ra
    ctx->pc = 0x130304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130304u;
            // 0x130308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1302C8u: goto label_1302c8;
            case 0x1302D0u: goto label_1302d0;
            case 0x130304u: goto label_130304;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13030Cu;
    // 0x13030c: 0x0  nop
    ctx->pc = 0x13030cu;
    // NOP
}
