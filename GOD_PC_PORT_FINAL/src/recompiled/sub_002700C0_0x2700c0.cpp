#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002700C0
// Address: 0x2700c0 - 0x270108
void sub_002700C0_0x2700c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002700C0_0x2700c0");
#endif

    ctx->pc = 0x2700c0u;

    // 0x2700c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2700c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2700c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2700c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2700c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2700cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2700ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2700d0: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x2700d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x2700d4: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x2700d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x2700d8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2700D8u;
    {
        const bool branch_taken_0x2700d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2700d8) {
            ctx->pc = 0x2700F0u;
            goto label_2700f0;
        }
    }
    ctx->pc = 0x2700E0u;
    // 0x2700e0: 0xc09bef6  jal         func_26FBD8
    ctx->pc = 0x2700E0u;
    SET_GPR_U32(ctx, 31, 0x2700E8u);
    ctx->pc = 0x2700E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2700E0u;
            // 0x2700e4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FBD8u;
    if (runtime->hasFunction(0x26FBD8u)) {
        auto targetFn = runtime->lookupFunction(0x26FBD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700E8u; }
        if (ctx->pc != 0x2700E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026FBD8_0x26fbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700E8u; }
        if (ctx->pc != 0x2700E8u) { return; }
    }
    ctx->pc = 0x2700E8u;
    // 0x2700e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2700E8u;
    {
        const bool branch_taken_0x2700e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700E8u;
            // 0x2700ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700e8) {
            ctx->pc = 0x2700FCu;
            goto label_2700fc;
        }
    }
    ctx->pc = 0x2700F0u;
label_2700f0:
    // 0x2700f0: 0xc09be9a  jal         func_26FA68
    ctx->pc = 0x2700F0u;
    SET_GPR_U32(ctx, 31, 0x2700F8u);
    ctx->pc = 0x2700F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2700F0u;
            // 0x2700f4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FA68u;
    if (runtime->hasFunction(0x26FA68u)) {
        auto targetFn = runtime->lookupFunction(0x26FA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700F8u; }
        if (ctx->pc != 0x2700F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026FA68_0x26fa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700F8u; }
        if (ctx->pc != 0x2700F8u) { return; }
    }
    ctx->pc = 0x2700F8u;
    // 0x2700f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2700f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2700fc:
    // 0x2700fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2700FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700FCu;
            // 0x270100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2700F0u: goto label_2700f0;
            case 0x2700FCu: goto label_2700fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x270104u;
    // 0x270104: 0x0  nop
    ctx->pc = 0x270104u;
    // NOP
}
