#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_297d68
// Address: 0x297d68 - 0x297dc0
void entry_297d68_0x297dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_297d68_0x297dc0");
#endif

    ctx->pc = 0x297d68u;

    // 0x297d68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x297d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x297d6c: 0x80a4f10  j           func_293C40
    ctx->pc = 0x297D6Cu;
    ctx->pc = 0x297D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297D6Cu;
            // 0x297d70: 0x8c444b4c  lw          $a0, 0x4B4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19276)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FUN_00293c40_0x293c40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x297D74u;
    // 0x297d74: 0x0  nop
    ctx->pc = 0x297d74u;
    // NOP
    // 0x297d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297d7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x297d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x297d80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297d84: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x297D84u;
    {
        const bool branch_taken_0x297d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297D84u;
            // 0x297d88: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d84) {
            ctx->pc = 0x297DA4u;
            goto label_297da4;
        }
    }
    ctx->pc = 0x297D8Cu;
    // 0x297d8c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x297d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x297d90: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x297d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d94: 0x8c5cab00  lw          $gp, -0x5500($v0)
    ctx->pc = 0x297d94u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945536)));
    // 0x297d98: 0x60f809  jalr        $v1
    ctx->pc = 0x297D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x297DA0u);
        ctx->pc = 0x297D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297D98u;
            // 0x297d9c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x297DA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297DA4u: goto label_297da4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x297DA0u; }
            if (ctx->pc != 0x297DA0u) { return; }
        }
        }
    }
    ctx->pc = 0x297DA0u;
    // 0x297da0: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x297da0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297da4:
    // 0x297da4: 0xf  sync
    ctx->pc = 0x297da4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x297da8: 0x42000038  ei
    ctx->pc = 0x297da8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x297dac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297db4: 0x3e00008  jr          $ra
    ctx->pc = 0x297DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297DB4u;
            // 0x297db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297DA4u: goto label_297da4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297DBCu;
    // 0x297dbc: 0x0  nop
    ctx->pc = 0x297dbcu;
    // NOP
}
