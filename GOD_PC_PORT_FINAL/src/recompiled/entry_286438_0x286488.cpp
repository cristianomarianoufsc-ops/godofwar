#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_286438
// Address: 0x286438 - 0x286488
void entry_286438_0x286488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_286438_0x286488");
#endif

    ctx->pc = 0x286438u;

    // 0x286438: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x286438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28643c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28643cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286440:
    // 0x286440: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x286440u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286444: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x286444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x286448: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x286448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x28644c: 0x30c30080  andi        $v1, $a2, 0x80
    ctx->pc = 0x28644cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x286450: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x286450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x286454: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x286454u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x286458: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x286458u;
    {
        const bool branch_taken_0x286458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28645Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286458u;
            // 0x28645c: 0x24e70007  addiu       $a3, $a3, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286458) {
            ctx->pc = 0x286440u;
            runtime->cooperativeGuestYield();
            goto label_286440;
        }
    }
    ctx->pc = 0x286460u;
    // 0x286460: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x286460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x286464: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286464u;
    {
        const bool branch_taken_0x286464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286464u;
            // 0x286468: 0x30c20040  andi        $v0, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286464) {
            ctx->pc = 0x28647Cu;
            goto label_28647c;
        }
    }
    ctx->pc = 0x28646Cu;
    // 0x28646c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28646Cu;
    {
        const bool branch_taken_0x28646c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28646Cu;
            // 0x286470: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28646c) {
            ctx->pc = 0x28647Cu;
            goto label_28647c;
        }
    }
    ctx->pc = 0x286474u;
    // 0x286474: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x286474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x286478: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x286478u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_28647c:
    // 0x28647c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x28647cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x286480: 0x3e00008  jr          $ra
    ctx->pc = 0x286480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286480u;
            // 0x286484: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286440u: goto label_286440;
            case 0x28647Cu: goto label_28647c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286488u;
}
