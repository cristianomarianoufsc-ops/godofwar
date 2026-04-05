#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136490
// Address: 0x136490 - 0x1364f0
void sub_00136490_0x136490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136490_0x136490");
#endif

    ctx->pc = 0x136490u;

    // 0x136490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136494: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x136494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x136498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13649c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13649cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1364a0: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x1364a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1364a4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1364A4u;
    {
        const bool branch_taken_0x1364a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1364a4) {
            ctx->pc = 0x1364A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1364A4u;
            // 0x1364a8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1364B8u;
            goto label_1364b8;
        }
    }
    ctx->pc = 0x1364ACu;
    // 0x1364ac: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1364ACu;
    SET_GPR_U32(ctx, 31, 0x1364B4u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1364B4u; }
        if (ctx->pc != 0x1364B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1364B4u; }
        if (ctx->pc != 0x1364B4u) { return; }
    }
    ctx->pc = 0x1364B4u;
    // 0x1364b4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1364b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1364b8:
    // 0x1364b8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1364B8u;
    {
        const bool branch_taken_0x1364b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1364b8) {
            ctx->pc = 0x1364BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1364B8u;
            // 0x1364bc: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1364CCu;
            goto label_1364cc;
        }
    }
    ctx->pc = 0x1364C0u;
    // 0x1364c0: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1364C0u;
    SET_GPR_U32(ctx, 31, 0x1364C8u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1364C8u; }
        if (ctx->pc != 0x1364C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1364C8u; }
        if (ctx->pc != 0x1364C8u) { return; }
    }
    ctx->pc = 0x1364C8u;
    // 0x1364c8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x1364c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1364cc:
    // 0x1364cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1364CCu;
    {
        const bool branch_taken_0x1364cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1364CCu;
            // 0x1364d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364cc) {
            ctx->pc = 0x1364E0u;
            goto label_1364e0;
        }
    }
    ctx->pc = 0x1364D4u;
    // 0x1364d4: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1364D4u;
    SET_GPR_U32(ctx, 31, 0x1364DCu);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1364DCu; }
        if (ctx->pc != 0x1364DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1364DCu; }
        if (ctx->pc != 0x1364DCu) { return; }
    }
    ctx->pc = 0x1364DCu;
    // 0x1364dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1364dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1364e0:
    // 0x1364e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1364e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1364e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1364E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1364E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1364E4u;
            // 0x1364e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1364B8u: goto label_1364b8;
            case 0x1364CCu: goto label_1364cc;
            case 0x1364E0u: goto label_1364e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1364ECu;
    // 0x1364ec: 0x0  nop
    ctx->pc = 0x1364ecu;
    // NOP
}
