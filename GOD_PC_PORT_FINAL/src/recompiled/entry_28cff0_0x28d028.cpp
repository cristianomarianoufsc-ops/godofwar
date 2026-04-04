#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_28cff0
// Address: 0x28cff0 - 0x28d028
void entry_28cff0_0x28d028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_28cff0_0x28d028");
#endif

    ctx->pc = 0x28cff0u;

    // 0x28cff0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28cff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cff4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x28cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x28cff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28cff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28cffc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x28cffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d000: 0x8c644294  lw          $a0, 0x4294($v1)
    ctx->pc = 0x28d000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17044)));
    // 0x28d004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d008: 0xc0a303e  jal         func_28C0F8
    ctx->pc = 0x28D008u;
    SET_GPR_U32(ctx, 31, 0x28D010u);
    ctx->pc = 0x28D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D008u;
            // 0x28d00c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0F8u;
    if (runtime->hasFunction(0x28C0F8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D010u; }
        if (ctx->pc != 0x28D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C0F8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D010u; }
        if (ctx->pc != 0x28D010u) { return; }
    }
    ctx->pc = 0x28D010u;
    // 0x28d010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d014: 0x3e00008  jr          $ra
    ctx->pc = 0x28D014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D014u;
            // 0x28d018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D01Cu;
    // 0x28d01c: 0x0  nop
    ctx->pc = 0x28d01cu;
    // NOP
    // 0x28d020: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28d024: 0x0  nop
    ctx->pc = 0x28d024u;
    // NOP
}
