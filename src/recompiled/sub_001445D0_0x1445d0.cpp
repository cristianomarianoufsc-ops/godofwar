#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001445D0
// Address: 0x1445d0 - 0x144628
void sub_001445D0_0x1445d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001445D0_0x1445d0");
#endif

    ctx->pc = 0x1445d0u;

    // 0x1445d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1445d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1445d4: 0x248600c8  addiu       $a2, $a0, 0xC8
    ctx->pc = 0x1445d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x1445d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1445d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1445dc: 0x8cc20c00  lw          $v0, 0xC00($a2)
    ctx->pc = 0x1445dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3072)));
    // 0x1445e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1445e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1445e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1445e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1445e8: 0xacc20c00  sw          $v0, 0xC00($a2)
    ctx->pc = 0x1445e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3072), GPR_U32(ctx, 2));
    // 0x1445ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1445ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1445f0: 0x948200ca  lhu         $v0, 0xCA($a0)
    ctx->pc = 0x1445f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 202)));
    // 0x1445f4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1445f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1445f8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1445f8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1445fc: 0xacc20c04  sw          $v0, 0xC04($a2)
    ctx->pc = 0x1445fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3076), GPR_U32(ctx, 2));
    // 0x144600: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x144600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x144604: 0x8cc20c04  lw          $v0, 0xC04($a2)
    ctx->pc = 0x144604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3076)));
    // 0x144608: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x144608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x14460c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x14460cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x144610: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x144610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144614: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x144614u;
    SET_GPR_U32(ctx, 31, 0x14461Cu);
    ctx->pc = 0x144618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144614u;
            // 0x144618: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143D70u;
    if (runtime->hasFunction(0x143D70u)) {
        auto targetFn = runtime->lookupFunction(0x143D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14461Cu; }
        if (ctx->pc != 0x14461Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143d70_0x143e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14461Cu; }
        if (ctx->pc != 0x14461Cu) { return; }
    }
    ctx->pc = 0x14461Cu;
    // 0x14461c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14461cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144620: 0x3e00008  jr          $ra
    ctx->pc = 0x144620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144620u;
            // 0x144624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144628u;
}
