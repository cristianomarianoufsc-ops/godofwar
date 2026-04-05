#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296328
// Address: 0x296328 - 0x296378
void sub_00296328_0x296328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296328_0x296328");
#endif

    ctx->pc = 0x296328u;

    // 0x296328: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x296328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29632c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29632cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296330: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x296330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x296334: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x296334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29633c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x29633cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x296340: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x296340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296344: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x296344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x296348: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x296348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x29634c: 0xc0a555a  jal         func_295568
    ctx->pc = 0x29634Cu;
    SET_GPR_U32(ctx, 31, 0x296354u);
    ctx->pc = 0x296350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29634Cu;
            // 0x296350: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295568u;
    if (runtime->hasFunction(0x295568u)) {
        auto targetFn = runtime->lookupFunction(0x295568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296354u; }
        if (ctx->pc != 0x296354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295568_0x295568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296354u; }
        if (ctx->pc != 0x296354u) { return; }
    }
    ctx->pc = 0x296354u;
    // 0x296354: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x296354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29635c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29635cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296360: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x296360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x296364: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x296364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x296368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29636c: 0x3e00008  jr          $ra
    ctx->pc = 0x29636Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29636Cu;
            // 0x296370: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296374u;
    // 0x296374: 0x0  nop
    ctx->pc = 0x296374u;
    // NOP
}
