#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001753D0
// Address: 0x1753d0 - 0x175418
void sub_001753D0_0x1753d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001753D0_0x1753d0");
#endif

    ctx->pc = 0x1753d0u;

    // 0x1753d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1753d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1753d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1753d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1753d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1753d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1753dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1753dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1753e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1753e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1753e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753e8: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1753E8u;
    SET_GPR_U32(ctx, 31, 0x1753F0u);
    ctx->pc = 0x1753ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753E8u;
            // 0x1753ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753F0u; }
        if (ctx->pc != 0x1753F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753F0u; }
        if (ctx->pc != 0x1753F0u) { return; }
    }
    ctx->pc = 0x1753F0u;
    // 0x1753f0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1753f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1753f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1753F4u;
    {
        const bool branch_taken_0x1753f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1753F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1753F4u;
            // 0x1753f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1753f4) {
            ctx->pc = 0x175408u;
            goto label_175408;
        }
    }
    ctx->pc = 0x1753FCu;
    // 0x1753fc: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1753FCu;
    SET_GPR_U32(ctx, 31, 0x175404u);
    ctx->pc = 0x175400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753FCu;
            // 0x175400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175404u; }
        if (ctx->pc != 0x175404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175404u; }
        if (ctx->pc != 0x175404u) { return; }
    }
    ctx->pc = 0x175404u;
    // 0x175404: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x175404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_175408:
    // 0x175408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17540c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17540cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175410: 0x3e00008  jr          $ra
    ctx->pc = 0x175410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175410u;
            // 0x175414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175408u: goto label_175408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175418u;
}
