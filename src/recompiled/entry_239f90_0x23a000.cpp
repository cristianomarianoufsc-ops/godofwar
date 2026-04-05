#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_239f90
// Address: 0x239f90 - 0x23a000
void entry_239f90_0x23a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_239f90_0x23a000");
#endif

    ctx->pc = 0x239f90u;

    // 0x239f90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x239f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f94: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x239f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x239f98: 0x3e00008  jr          $ra
    ctx->pc = 0x239F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239F98u;
            // 0x239f9c: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239FF8u: goto label_239ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239FA0u;
    // 0x239fa0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x239fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x239fa4: 0x0  nop
    ctx->pc = 0x239fa4u;
    // NOP
    // 0x239fa8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x239fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x239fac: 0x0  nop
    ctx->pc = 0x239facu;
    // NOP
    // 0x239fb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x239fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x239fb4: 0x0  nop
    ctx->pc = 0x239fb4u;
    // NOP
    // 0x239fb8: 0xac440c20  sw          $a0, 0xC20($v0)
    ctx->pc = 0x239fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3104), GPR_U32(ctx, 4));
    // 0x239fbc: 0x0  nop
    ctx->pc = 0x239fbcu;
    // NOP
    // 0x239fc0: 0x8c420c20  lw          $v0, 0xC20($v0)
    ctx->pc = 0x239fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x239fc4: 0x0  nop
    ctx->pc = 0x239fc4u;
    // NOP
    // 0x239fc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x239fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239fcc: 0x0  nop
    ctx->pc = 0x239fccu;
    // NOP
    // 0x239fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x239FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239FF8u: goto label_239ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239FD8u;
    // 0x239fd8: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x239fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x239fdc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x239fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x239fe0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239FE0u;
    {
        const bool branch_taken_0x239fe0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x239FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FE0u;
            // 0x239fe4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fe0) {
            ctx->pc = 0x239FF8u;
            goto label_239ff8;
        }
    }
    ctx->pc = 0x239FE8u;
    // 0x239fe8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x239fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x239fec: 0x3e00008  jr          $ra
    ctx->pc = 0x239FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FECu;
            // 0x239ff0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239FF8u: goto label_239ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239FF4u;
    // 0x239ff4: 0x0  nop
    ctx->pc = 0x239ff4u;
    // NOP
label_239ff8:
    // 0x239ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x239FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FF8u;
            // 0x239ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239FF8u: goto label_239ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23A000u;
}
