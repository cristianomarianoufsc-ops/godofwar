#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144520
// Address: 0x144520 - 0x144578
void sub_00144520_0x144520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144520_0x144520");
#endif

    ctx->pc = 0x144520u;

    // 0x144520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144524: 0x248600c8  addiu       $a2, $a0, 0xC8
    ctx->pc = 0x144524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x144528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x144528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14452c: 0x8cc20c00  lw          $v0, 0xC00($a2)
    ctx->pc = 0x14452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3072)));
    // 0x144530: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x144530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x144534: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x144534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144538: 0xacc20c00  sw          $v0, 0xC00($a2)
    ctx->pc = 0x144538u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3072), GPR_U32(ctx, 2));
    // 0x14453c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14453cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x144540: 0x948200ca  lhu         $v0, 0xCA($a0)
    ctx->pc = 0x144540u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 202)));
    // 0x144544: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x144544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x144548: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x144548u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14454c: 0xacc20c04  sw          $v0, 0xC04($a2)
    ctx->pc = 0x14454cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3076), GPR_U32(ctx, 2));
    // 0x144550: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x144550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x144554: 0x8cc20c04  lw          $v0, 0xC04($a2)
    ctx->pc = 0x144554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3076)));
    // 0x144558: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x144558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x14455c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x14455cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x144560: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x144560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144564: 0xc050f26  jal         func_143C98
    ctx->pc = 0x144564u;
    SET_GPR_U32(ctx, 31, 0x14456Cu);
    ctx->pc = 0x144568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144564u;
            // 0x144568: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C98u;
    if (runtime->hasFunction(0x143C98u)) {
        auto targetFn = runtime->lookupFunction(0x143C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14456Cu; }
        if (ctx->pc != 0x14456Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C98_0x143c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14456Cu; }
        if (ctx->pc != 0x14456Cu) { return; }
    }
    ctx->pc = 0x14456Cu;
    // 0x14456c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14456cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144570: 0x3e00008  jr          $ra
    ctx->pc = 0x144570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144570u;
            // 0x144574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144578u;
}
