#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD1E8
// Address: 0x1dd1e8 - 0x1dd230
void sub_001DD1E8_0x1dd1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD1E8_0x1dd1e8");
#endif

    ctx->pc = 0x1dd1e8u;

    // 0x1dd1e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd1ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1dd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1dd1f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dd1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dd1f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dd1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1f8: 0x8c43e89c  lw          $v1, -0x1764($v0)
    ctx->pc = 0x1dd1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1dd1fc: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x1dd1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1dd200: 0x240203f9  addiu       $v0, $zero, 0x3F9
    ctx->pc = 0x1dd200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1017));
    // 0x1dd204: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1dd204u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dd208: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dd208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd20c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1dd20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1dd210: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1dd210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1dd214: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1dd214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1dd218: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1DD218u;
    SET_GPR_U32(ctx, 31, 0x1DD220u);
    ctx->pc = 0x1DD21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD218u;
            // 0x1dd21c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD220u; }
        if (ctx->pc != 0x1DD220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD220u; }
        if (ctx->pc != 0x1DD220u) { return; }
    }
    ctx->pc = 0x1DD220u;
    // 0x1dd220: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dd220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd224: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD224u;
            // 0x1dd228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD22Cu;
    // 0x1dd22c: 0x0  nop
    ctx->pc = 0x1dd22cu;
    // NOP
}
