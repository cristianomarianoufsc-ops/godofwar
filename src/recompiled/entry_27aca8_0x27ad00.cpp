#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27aca8
// Address: 0x27aca8 - 0x27ad00
void entry_27aca8_0x27ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27aca8_0x27ad00");
#endif

    ctx->pc = 0x27aca8u;

    // 0x27aca8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27aca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27acac: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x27acacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x27acb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27acb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27acb4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27acb8: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x27acb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x27acbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27acbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27acc0: 0x2607ac40  addiu       $a3, $s0, -0x53C0
    ctx->pc = 0x27acc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945856));
    // 0x27acc4: 0x2484ab48  addiu       $a0, $a0, -0x54B8
    ctx->pc = 0x27acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945608));
    // 0x27acc8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27accc: 0x34a51363  ori         $a1, $a1, 0x1363
    ctx->pc = 0x27acccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4963);
    // 0x27acd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27acd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acd4: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x27acd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27acd8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x27acd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acdc: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x27acdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27ace0: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x27ACE0u;
    SET_GPR_U32(ctx, 31, 0x27ACE8u);
    ctx->pc = 0x27ACE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACE0u;
            // 0x27ace4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACE8u; }
        if (ctx->pc != 0x27ACE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ACE8u; }
        if (ctx->pc != 0x27ACE8u) { return; }
    }
    ctx->pc = 0x27ACE8u;
    // 0x27ace8: 0x8e02ac40  lw          $v0, -0x53C0($s0)
    ctx->pc = 0x27ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945856)));
    // 0x27acec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27acecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27acf0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27acf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27acf4: 0x3e00008  jr          $ra
    ctx->pc = 0x27ACF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27ACF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ACF4u;
            // 0x27acf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27ACFCu;
    // 0x27acfc: 0x0  nop
    ctx->pc = 0x27acfcu;
    // NOP
}
