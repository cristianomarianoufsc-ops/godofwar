#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F328
// Address: 0x21f328 - 0x21f368
void sub_0021F328_0x21f328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F328_0x21f328");
#endif

    ctx->pc = 0x21f328u;

    // 0x21f328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f32c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f330: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21F330u;
    SET_GPR_U32(ctx, 31, 0x21F338u);
    ctx->pc = 0x21F334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F330u;
            // 0x21f334: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F338u; }
        if (ctx->pc != 0x21F338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F338u; }
        if (ctx->pc != 0x21F338u) { return; }
    }
    ctx->pc = 0x21F338u;
    // 0x21f338: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f33c: 0x8c42e574  lw          $v0, -0x1A8C($v0)
    ctx->pc = 0x21f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960500)));
    // 0x21f340: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F340u;
    {
        const bool branch_taken_0x21f340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F340u;
            // 0x21f344: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f340) {
            ctx->pc = 0x21F360u;
            goto label_21f360;
        }
    }
    ctx->pc = 0x21F348u;
    // 0x21f348: 0xc087622  jal         func_21D888
    ctx->pc = 0x21F348u;
    SET_GPR_U32(ctx, 31, 0x21F350u);
    ctx->pc = 0x21F34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F348u;
            // 0x21f34c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D888u;
    if (runtime->hasFunction(0x21D888u)) {
        auto targetFn = runtime->lookupFunction(0x21D888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F350u; }
        if (ctx->pc != 0x21F350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D888_0x21d888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F350u; }
        if (ctx->pc != 0x21F350u) { return; }
    }
    ctx->pc = 0x21F350u;
    // 0x21f350: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x21f350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21f354: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f358: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21f358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
    // 0x21f35c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f360:
    // 0x21f360: 0x3e00008  jr          $ra
    ctx->pc = 0x21F360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F360u;
            // 0x21f364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F360u: goto label_21f360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F368u;
}
