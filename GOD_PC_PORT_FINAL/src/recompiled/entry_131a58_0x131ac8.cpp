#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_131a58
// Address: 0x131a58 - 0x131ac8
void entry_131a58_0x131ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_131a58_0x131ac8");
#endif

    ctx->pc = 0x131a58u;

    // 0x131a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131a60: 0xc05d656  jal         func_175958
    ctx->pc = 0x131A60u;
    SET_GPR_U32(ctx, 31, 0x131A68u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A68u; }
        if (ctx->pc != 0x131A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A68u; }
        if (ctx->pc != 0x131A68u) { return; }
    }
    ctx->pc = 0x131A68u;
    // 0x131a68: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x131a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x131a6c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x131a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x131a70: 0x8c6614e0  lw          $a2, 0x14E0($v1)
    ctx->pc = 0x131a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5344)));
    // 0x131a74: 0x24a515c8  addiu       $a1, $a1, 0x15C8
    ctx->pc = 0x131a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5576));
    // 0x131a78: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x131A78u;
    SET_GPR_U32(ctx, 31, 0x131A80u);
    ctx->pc = 0x131A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131A78u;
            // 0x131a7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A80u; }
        if (ctx->pc != 0x131A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A80u; }
        if (ctx->pc != 0x131A80u) { return; }
    }
    ctx->pc = 0x131A80u;
    // 0x131a80: 0xc05d656  jal         func_175958
    ctx->pc = 0x131A80u;
    SET_GPR_U32(ctx, 31, 0x131A88u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A88u; }
        if (ctx->pc != 0x131A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A88u; }
        if (ctx->pc != 0x131A88u) { return; }
    }
    ctx->pc = 0x131A88u;
    // 0x131a88: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x131a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x131a8c: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x131a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x131a90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a94: 0x24a515d8  addiu       $a1, $a1, 0x15D8
    ctx->pc = 0x131a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5592));
    // 0x131a98: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x131A98u;
    SET_GPR_U32(ctx, 31, 0x131AA0u);
    ctx->pc = 0x131A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131A98u;
            // 0x131a9c: 0x24c661f8  addiu       $a2, $a2, 0x61F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AA0u; }
        if (ctx->pc != 0x131AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AA0u; }
        if (ctx->pc != 0x131AA0u) { return; }
    }
    ctx->pc = 0x131AA0u;
    // 0x131aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x131AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131AA4u;
            // 0x131aa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131AACu;
    // 0x131aac: 0x0  nop
    ctx->pc = 0x131aacu;
    // NOP
    // 0x131ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x131AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131AB8u;
    // 0x131ab8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x131ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x131abc: 0x0  nop
    ctx->pc = 0x131abcu;
    // NOP
    // 0x131ac0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x131ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x131ac4: 0x0  nop
    ctx->pc = 0x131ac4u;
    // NOP
}
