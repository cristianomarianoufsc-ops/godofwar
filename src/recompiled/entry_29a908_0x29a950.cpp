#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29a908
// Address: 0x29a908 - 0x29a950
void entry_29a908_0x29a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29a908_0x29a950");
#endif

    ctx->pc = 0x29a908u;

    // 0x29a908: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x29a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x29a90c: 0xc  syscall     0
    ctx->pc = 0x29a90cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x29a910: 0x3e00008  jr          $ra
    ctx->pc = 0x29A910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A928u: goto label_29a928;
            case 0x29A948u: goto label_29a948;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A918u;
    // 0x29a918: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x29a918u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x29a91c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x29A91Cu;
    {
        const bool branch_taken_0x29a91c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A91Cu;
            // 0x29a920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a91c) {
            ctx->pc = 0x29A948u;
            goto label_29a948;
        }
    }
    ctx->pc = 0x29A924u;
    // 0x29a924: 0x0  nop
    ctx->pc = 0x29a924u;
    // NOP
label_29a928:
    // 0x29a928: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29a928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29a92c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29a92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29a930: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x29a930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x29a934: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x29a934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29a938: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x29a938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x29a93c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x29a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x29a940: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29A940u;
    {
        const bool branch_taken_0x29a940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a940) {
            ctx->pc = 0x29A928u;
            runtime->cooperativeGuestYield();
            goto label_29a928;
        }
    }
    ctx->pc = 0x29A948u;
label_29a948:
    // 0x29a948: 0x3e00008  jr          $ra
    ctx->pc = 0x29A948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A948u;
            // 0x29a94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A928u: goto label_29a928;
            case 0x29A948u: goto label_29a948;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A950u;
}
