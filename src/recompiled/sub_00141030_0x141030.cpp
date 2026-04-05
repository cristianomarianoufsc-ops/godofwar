#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141030
// Address: 0x141030 - 0x141090
void sub_00141030_0x141030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141030_0x141030");
#endif

    ctx->pc = 0x141030u;

    // 0x141030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141034: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x141034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x141038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14103c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14103cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141044: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x141044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x141048: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x141048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x14104c: 0xc05046e  jal         func_1411B8
    ctx->pc = 0x14104Cu;
    SET_GPR_U32(ctx, 31, 0x141054u);
    ctx->pc = 0x141050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14104Cu;
            // 0x141050: 0x82110147  lb          $s1, 0x147($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 327)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1411B8u;
    if (runtime->hasFunction(0x1411B8u)) {
        auto targetFn = runtime->lookupFunction(0x1411B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141054u; }
        if (ctx->pc != 0x141054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001411B8_0x1411b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141054u; }
        if (ctx->pc != 0x141054u) { return; }
    }
    ctx->pc = 0x141054u;
    // 0x141054: 0x2e310001  sltiu       $s1, $s1, 0x1
    ctx->pc = 0x141054u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x141058: 0x260300f0  addiu       $v1, $s0, 0xF0
    ctx->pc = 0x141058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x14105c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x14105cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x141060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141064: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x141064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x141068: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x141068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14106c: 0x82050147  lb          $a1, 0x147($s0)
    ctx->pc = 0x14106cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 327)));
    // 0x141070: 0xc0505c4  jal         func_141710
    ctx->pc = 0x141070u;
    SET_GPR_U32(ctx, 31, 0x141078u);
    ctx->pc = 0x141074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141070u;
            // 0x141074: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141710u;
    if (runtime->hasFunction(0x141710u)) {
        auto targetFn = runtime->lookupFunction(0x141710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141078u; }
        if (ctx->pc != 0x141078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_141710_0x141768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141078u; }
        if (ctx->pc != 0x141078u) { return; }
    }
    ctx->pc = 0x141078u;
    // 0x141078: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x141078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14107c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14107cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141084: 0x3e00008  jr          $ra
    ctx->pc = 0x141084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141084u;
            // 0x141088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14108Cu;
    // 0x14108c: 0x0  nop
    ctx->pc = 0x14108cu;
    // NOP
}
