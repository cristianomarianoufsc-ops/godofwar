#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002211F8
// Address: 0x2211f8 - 0x221240
void sub_002211F8_0x2211f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002211F8_0x2211f8");
#endif

    ctx->pc = 0x2211f8u;

    // 0x2211f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2211f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2211fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2211fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x221200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x221200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x221204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x221204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22120c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22120cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221210: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x221210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x221214: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x221214u;
    SET_GPR_U32(ctx, 31, 0x22121Cu);
    ctx->pc = 0x221218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221214u;
            // 0x221218: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22121Cu; }
        if (ctx->pc != 0x22121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22121Cu; }
        if (ctx->pc != 0x22121Cu) { return; }
    }
    ctx->pc = 0x22121Cu;
    // 0x22121c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221220: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x221220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221224: 0xc0883b2  jal         func_220EC8
    ctx->pc = 0x221224u;
    SET_GPR_U32(ctx, 31, 0x22122Cu);
    ctx->pc = 0x221228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221224u;
            // 0x221228: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220EC8u;
    if (runtime->hasFunction(0x220EC8u)) {
        auto targetFn = runtime->lookupFunction(0x220EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22122Cu; }
        if (ctx->pc != 0x22122Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220EC8_0x220ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22122Cu; }
        if (ctx->pc != 0x22122Cu) { return; }
    }
    ctx->pc = 0x22122Cu;
    // 0x22122c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22122cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221238: 0x3e00008  jr          $ra
    ctx->pc = 0x221238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22123Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221238u;
            // 0x22123c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221240u;
}
