#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136260
// Address: 0x136260 - 0x1362b0
void sub_00136260_0x136260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136260_0x136260");
#endif

    ctx->pc = 0x136260u;

    // 0x136260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136264: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x136264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x136268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13626c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13626cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136270: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x136270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x136274: 0x844300a0  lh          $v1, 0xA0($v0)
    ctx->pc = 0x136274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x136278: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x136278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x13627c: 0x40f809  jalr        $v0
    ctx->pc = 0x13627Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x136284u);
        ctx->pc = 0x136280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13627Cu;
            // 0x136280: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x136284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x136284u; }
            if (ctx->pc != 0x136284u) { return; }
        }
        }
    }
    ctx->pc = 0x136284u;
    // 0x136284: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x136284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x136288: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x136288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x13628c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x136290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136294: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x136294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x136298: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x136298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x13629c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1362a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1362a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1362a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1362a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1362a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1362A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1362ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1362A8u;
            // 0x1362ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1362B0u;
}
