#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285440
// Address: 0x285440 - 0x285490
void sub_00285440_0x285440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285440_0x285440");
#endif

    ctx->pc = 0x285440u;

    // 0x285440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x285444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x285448: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x285448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28544c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x28544cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x285450: 0xc0a14ae  jal         func_2852B8
    ctx->pc = 0x285450u;
    SET_GPR_U32(ctx, 31, 0x285458u);
    ctx->pc = 0x285454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285450u;
            // 0x285454: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2852B8u;
    if (runtime->hasFunction(0x2852B8u)) {
        auto targetFn = runtime->lookupFunction(0x2852B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285458u; }
        if (ctx->pc != 0x285458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2852b8_0x285378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285458u; }
        if (ctx->pc != 0x285458u) { return; }
    }
    ctx->pc = 0x285458u;
    // 0x285458: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x285458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x28545c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x28545cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285460: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x285460u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x285464: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x285464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x285468: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x285468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28546c: 0xc0a1448  jal         func_285120
    ctx->pc = 0x28546Cu;
    SET_GPR_U32(ctx, 31, 0x285474u);
    ctx->pc = 0x285470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28546Cu;
            // 0x285470: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x285120u;
    if (runtime->hasFunction(0x285120u)) {
        auto targetFn = runtime->lookupFunction(0x285120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285474u; }
        if (ctx->pc != 0x285474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285120_0x285120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285474u; }
        if (ctx->pc != 0x285474u) { return; }
    }
    ctx->pc = 0x285474u;
    // 0x285474: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285478: 0x3e00008  jr          $ra
    ctx->pc = 0x285478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28547Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285478u;
            // 0x28547c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x285480u;
    // 0x285480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x285480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285488: 0xc0a2c50  jal         func_28B140
    ctx->pc = 0x285488u;
    SET_GPR_U32(ctx, 31, 0x285490u);
    ctx->pc = 0x28B140u;
    if (runtime->hasFunction(0x28B140u)) {
        auto targetFn = runtime->lookupFunction(0x28B140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285490u; }
        if (ctx->pc != 0x285490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B140_0x28b140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285490u; }
        if (ctx->pc != 0x285490u) { return; }
    }
    ctx->pc = 0x285490u;
}
