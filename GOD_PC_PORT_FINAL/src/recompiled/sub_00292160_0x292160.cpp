#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292160
// Address: 0x292160 - 0x2921c0
void sub_00292160_0x292160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292160_0x292160");
#endif

    ctx->pc = 0x292160u;

    // 0x292160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292164: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x292168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29216c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292170: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x292170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292174: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x292174u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x292178: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x292178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29217c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292180: 0xae20c1a4  sw          $zero, -0x3E5C($s1)
    ctx->pc = 0x292180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951332), GPR_U32(ctx, 0));
    // 0x292184: 0xc0a509a  jal         func_294268
    ctx->pc = 0x292184u;
    SET_GPR_U32(ctx, 31, 0x29218Cu);
    ctx->pc = 0x292188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292184u;
            // 0x292188: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294268u;
    if (runtime->hasFunction(0x294268u)) {
        auto targetFn = runtime->lookupFunction(0x294268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29218Cu; }
        if (ctx->pc != 0x29218Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294268_0x294268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29218Cu; }
        if (ctx->pc != 0x29218Cu) { return; }
    }
    ctx->pc = 0x29218Cu;
    // 0x29218c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29218cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292190: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x292190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x292194: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292194u;
    {
        const bool branch_taken_0x292194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292194) {
            ctx->pc = 0x292198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292194u;
            // 0x292198: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2921ACu;
            goto label_2921ac;
        }
    }
    ctx->pc = 0x29219Cu;
    // 0x29219c: 0x8e22c1a4  lw          $v0, -0x3E5C($s1)
    ctx->pc = 0x29219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951332)));
    // 0x2921a0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2921A0u;
    {
        const bool branch_taken_0x2921a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2921a0) {
            ctx->pc = 0x2921A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2921A0u;
            // 0x2921a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2921A8u;
            goto label_2921a8;
        }
    }
    ctx->pc = 0x2921A8u;
label_2921a8:
    // 0x2921a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2921a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2921ac:
    // 0x2921ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2921acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2921b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2921b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2921b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2921b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2921B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2921BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2921B8u;
            // 0x2921bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2921A8u: goto label_2921a8;
            case 0x2921ACu: goto label_2921ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2921C0u;
}
