#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0026e440
// Address: 0x26e440 - 0x26e4b4
void FUN_0026e440_0x26e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026e440_0x26e440");
#endif

    ctx->pc = 0x26e440u;

    // 0x26e440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26e444: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e448: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26e44c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26E44Cu;
    {
        const bool branch_taken_0x26e44c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26E450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E44Cu;
            // 0x26e450: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e44c) {
            ctx->pc = 0x26E4A8u;
            goto label_26e4a8;
        }
    }
    ctx->pc = 0x26E454u;
    // 0x26e454: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26e454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26e458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e45c: 0xac62a5d0  sw          $v0, -0x5A30($v1)
    ctx->pc = 0x26e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944208), GPR_U32(ctx, 2));
    // 0x26e460: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26e460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e464: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26e464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_26e468:
    // 0x26e468: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x26e468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26e46c: 0x2442a588  addiu       $v0, $v0, -0x5A78
    ctx->pc = 0x26e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944136));
    // 0x26e470: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26e474: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26e474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e478: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E478u;
    {
        const bool branch_taken_0x26e478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E478u;
            // 0x26e47c: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e478) {
            ctx->pc = 0x26E490u;
            goto label_26e490;
        }
    }
    ctx->pc = 0x26E480u;
    // 0x26e480: 0x2442a5a8  addiu       $v0, $v0, -0x5A58
    ctx->pc = 0x26e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944168));
    // 0x26e484: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26e488: 0x60f809  jalr        $v1
    ctx->pc = 0x26E488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26E490u);
        ctx->pc = 0x26E48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E488u;
            // 0x26e48c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26E490u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E468u: goto label_26e468;
            case 0x26E490u: goto label_26e490;
            case 0x26E4A8u: goto label_26e4a8;
            case 0x26E4B0u: goto label_26e4b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26E490u; }
            if (ctx->pc != 0x26E490u) { return; }
        }
        }
    }
    ctx->pc = 0x26E490u;
label_26e490:
    // 0x26e490: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e494: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x26e494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x26e498: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x26E498u;
    {
        const bool branch_taken_0x26e498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E498u;
            // 0x26e49c: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e498) {
            ctx->pc = 0x26E468u;
            runtime->cooperativeGuestYield();
            goto label_26e468;
        }
    }
    ctx->pc = 0x26E4A0u;
    // 0x26e4a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E4A0u;
    {
        const bool branch_taken_0x26e4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e4a0) {
            ctx->pc = 0x26E4B0u;
            goto label_26e4b0;
        }
    }
    ctx->pc = 0x26E4A8u;
label_26e4a8:
    // 0x26e4a8: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26e4ac: 0xac40a5d0  sw          $zero, -0x5A30($v0)
    ctx->pc = 0x26e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944208), GPR_U32(ctx, 0));
label_26e4b0:
    // 0x26e4b0: 0xf  sync
    ctx->pc = 0x26e4b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
}
