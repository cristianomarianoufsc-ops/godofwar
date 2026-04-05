#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144578
// Address: 0x144578 - 0x1445d0
void sub_00144578_0x144578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144578_0x144578");
#endif

    ctx->pc = 0x144578u;

    // 0x144578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14457c: 0x248600c8  addiu       $a2, $a0, 0xC8
    ctx->pc = 0x14457cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x144580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x144580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x144584: 0x8cc20c00  lw          $v0, 0xC00($a2)
    ctx->pc = 0x144584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3072)));
    // 0x144588: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x144588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14458c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14458cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144590: 0xacc20c00  sw          $v0, 0xC00($a2)
    ctx->pc = 0x144590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3072), GPR_U32(ctx, 2));
    // 0x144594: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x144594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x144598: 0x948200ca  lhu         $v0, 0xCA($a0)
    ctx->pc = 0x144598u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 202)));
    // 0x14459c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1445a0: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1445a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1445a4: 0xacc20c04  sw          $v0, 0xC04($a2)
    ctx->pc = 0x1445a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3076), GPR_U32(ctx, 2));
    // 0x1445a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1445a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1445ac: 0x8cc20c04  lw          $v0, 0xC04($a2)
    ctx->pc = 0x1445acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3076)));
    // 0x1445b0: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x1445b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1445b4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1445b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1445b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1445b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445bc: 0xc050f80  jal         func_143E00
    ctx->pc = 0x1445BCu;
    SET_GPR_U32(ctx, 31, 0x1445C4u);
    ctx->pc = 0x1445C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1445BCu;
            // 0x1445c0: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143E00u;
    if (runtime->hasFunction(0x143E00u)) {
        auto targetFn = runtime->lookupFunction(0x143E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1445C4u; }
        if (ctx->pc != 0x1445C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143e00_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1445C4u; }
        if (ctx->pc != 0x1445C4u) { return; }
    }
    ctx->pc = 0x1445C4u;
    // 0x1445c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1445c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1445c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1445C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1445CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1445C8u;
            // 0x1445cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1445D0u;
}
