#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F380
// Address: 0x19f380 - 0x19f3d8
void sub_0019F380_0x19f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F380_0x19f380");
#endif

    ctx->pc = 0x19f380u;

    // 0x19f380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f384: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19f388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f38c: 0xc05d656  jal         func_175958
    ctx->pc = 0x19F38Cu;
    SET_GPR_U32(ctx, 31, 0x19F394u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F394u; }
        if (ctx->pc != 0x19F394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F394u; }
        if (ctx->pc != 0x19F394u) { return; }
    }
    ctx->pc = 0x19F394u;
    // 0x19f394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f398: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f39c: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19f39cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19f3a0: 0x24a53d90  addiu       $a1, $a1, 0x3D90
    ctx->pc = 0x19f3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15760));
    // 0x19f3a4: 0x24c6f1e8  addiu       $a2, $a2, -0xE18
    ctx->pc = 0x19f3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963688));
    // 0x19f3a8: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19F3A8u;
    SET_GPR_U32(ctx, 31, 0x19F3B0u);
    ctx->pc = 0x19F3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3A8u;
            // 0x19f3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3B0u; }
        if (ctx->pc != 0x19F3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3B0u; }
        if (ctx->pc != 0x19F3B0u) { return; }
    }
    ctx->pc = 0x19F3B0u;
    // 0x19f3b0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19f3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19f3b4: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19f3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19f3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3bc: 0x24a53da0  addiu       $a1, $a1, 0x3DA0
    ctx->pc = 0x19f3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15776));
    // 0x19f3c0: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19F3C0u;
    SET_GPR_U32(ctx, 31, 0x19F3C8u);
    ctx->pc = 0x19F3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3C0u;
            // 0x19f3c4: 0x24c6f040  addiu       $a2, $a2, -0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3C8u; }
        if (ctx->pc != 0x19F3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3C8u; }
        if (ctx->pc != 0x19F3C8u) { return; }
    }
    ctx->pc = 0x19F3C8u;
    // 0x19f3c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f3cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3D0u;
            // 0x19f3d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F3D8u;
}
