#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001916A8
// Address: 0x1916a8 - 0x1916f0
void sub_001916A8_0x1916a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001916A8_0x1916a8");
#endif

    ctx->pc = 0x1916a8u;

    // 0x1916a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1916a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1916ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1916acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1916b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1916b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1916b4: 0xc05d656  jal         func_175958
    ctx->pc = 0x1916B4u;
    SET_GPR_U32(ctx, 31, 0x1916BCu);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916BCu; }
        if (ctx->pc != 0x1916BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916BCu; }
        if (ctx->pc != 0x1916BCu) { return; }
    }
    ctx->pc = 0x1916BCu;
    // 0x1916bc: 0xc063f22  jal         func_18FC88
    ctx->pc = 0x1916BCu;
    SET_GPR_U32(ctx, 31, 0x1916C4u);
    ctx->pc = 0x1916C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1916BCu;
            // 0x1916c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18FC88u;
    if (runtime->hasFunction(0x18FC88u)) {
        auto targetFn = runtime->lookupFunction(0x18FC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916C4u; }
        if (ctx->pc != 0x1916C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18fc88_0x18ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916C4u; }
        if (ctx->pc != 0x1916C4u) { return; }
    }
    ctx->pc = 0x1916C4u;
    // 0x1916c4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1916c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1916c8: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x1916c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x1916cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1916ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916d0: 0x24a532c8  addiu       $a1, $a1, 0x32C8
    ctx->pc = 0x1916d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13000));
    // 0x1916d4: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1916D4u;
    SET_GPR_U32(ctx, 31, 0x1916DCu);
    ctx->pc = 0x1916D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1916D4u;
            // 0x1916d8: 0x24c61470  addiu       $a2, $a2, 0x1470 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916DCu; }
        if (ctx->pc != 0x1916DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916DCu; }
        if (ctx->pc != 0x1916DCu) { return; }
    }
    ctx->pc = 0x1916DCu;
    // 0x1916dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1916dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1916e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1916e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1916e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1916E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1916E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1916E4u;
            // 0x1916e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1916ECu;
    // 0x1916ec: 0x0  nop
    ctx->pc = 0x1916ecu;
    // NOP
}
