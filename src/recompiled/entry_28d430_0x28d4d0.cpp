#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_28d430
// Address: 0x28d430 - 0x28d4d0
void entry_28d430_0x28d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_28d430_0x28d4d0");
#endif

    ctx->pc = 0x28d430u;

    // 0x28d430: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D430u;
    {
        const bool branch_taken_0x28d430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D430u;
            // 0x28d434: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d430) {
            ctx->pc = 0x28D44Cu;
            goto label_28d44c;
        }
    }
    ctx->pc = 0x28D438u;
    // 0x28d438: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x28d438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28d43c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D43Cu;
    {
        const bool branch_taken_0x28d43c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d43c) {
            ctx->pc = 0x28D440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D43Cu;
            // 0x28d440: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D450u;
            goto label_28d450;
        }
    }
    ctx->pc = 0x28D444u;
    // 0x28d444: 0x3e00008  jr          $ra
    ctx->pc = 0x28D444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D444u;
            // 0x28d448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D44Cu: goto label_28d44c;
            case 0x28D450u: goto label_28d450;
            case 0x28D460u: goto label_28d460;
            case 0x28D478u: goto label_28d478;
            case 0x28D48Cu: goto label_28d48c;
            case 0x28D490u: goto label_28d490;
            case 0x28D4A0u: goto label_28d4a0;
            case 0x28D4B4u: goto label_28d4b4;
            case 0x28D4BCu: goto label_28d4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D44Cu;
label_28d44c:
    // 0x28d44c: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x28d44cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_28d450:
    // 0x28d450: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x28d450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28d454: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28d454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28d458: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28D458u;
    {
        const bool branch_taken_0x28d458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D458u;
            // 0x28d45c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d458) {
            ctx->pc = 0x28D478u;
            goto label_28d478;
        }
    }
    ctx->pc = 0x28D460u;
label_28d460:
    // 0x28d460: 0x5103fffa  beql        $t0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28D460u;
    {
        const bool branch_taken_0x28d460 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x28d460) {
            ctx->pc = 0x28D464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D460u;
            // 0x28d464: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D44Cu;
            runtime->cooperativeGuestYield();
            goto label_28d44c;
        }
    }
    ctx->pc = 0x28D468u;
    // 0x28d468: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x28d468u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28d46c: 0x0  nop
    ctx->pc = 0x28d46cu;
    // NOP
    // 0x28d470: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28D470u;
    {
        const bool branch_taken_0x28d470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D470u;
            // 0x28d474: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d470) {
            ctx->pc = 0x28D460u;
            runtime->cooperativeGuestYield();
            goto label_28d460;
        }
    }
    ctx->pc = 0x28D478u;
label_28d478:
    // 0x28d478: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D478u;
    {
        const bool branch_taken_0x28d478 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D478u;
            // 0x28d47c: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d478) {
            ctx->pc = 0x28D48Cu;
            goto label_28d48c;
        }
    }
    ctx->pc = 0x28D480u;
    // 0x28d480: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x28d480u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x28d484: 0x3e00008  jr          $ra
    ctx->pc = 0x28D484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D484u;
            // 0x28d488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D44Cu: goto label_28d44c;
            case 0x28D450u: goto label_28d450;
            case 0x28D460u: goto label_28d460;
            case 0x28D478u: goto label_28d478;
            case 0x28D48Cu: goto label_28d48c;
            case 0x28D490u: goto label_28d490;
            case 0x28D4A0u: goto label_28d4a0;
            case 0x28D4B4u: goto label_28d4b4;
            case 0x28D4BCu: goto label_28d4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D48Cu;
label_28d48c:
    // 0x28d48c: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x28d48cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_28d490:
    // 0x28d490: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x28d490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d494: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28d494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28d498: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x28d498u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28d49c: 0x0  nop
    ctx->pc = 0x28d49cu;
    // NOP
label_28d4a0:
    // 0x28d4a0: 0x14680006  bne         $v1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D4A0u;
    {
        const bool branch_taken_0x28d4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x28D4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4A0u;
            // 0x28d4a4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4a0) {
            ctx->pc = 0x28D4BCu;
            goto label_28d4bc;
        }
    }
    ctx->pc = 0x28D4A8u;
    // 0x28d4a8: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x28D4A8u;
    {
        const bool branch_taken_0x28d4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d4a8) {
            ctx->pc = 0x28D4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4A8u;
            // 0x28d4ac: 0xa080ffff  sb          $zero, -0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D4B4u;
            goto label_28d4b4;
        }
    }
    ctx->pc = 0x28D4B0u;
    // 0x28d4b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28d4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d4b4:
    // 0x28d4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4B4u;
            // 0x28d4b8: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D44Cu: goto label_28d44c;
            case 0x28D450u: goto label_28d450;
            case 0x28D460u: goto label_28d460;
            case 0x28D478u: goto label_28d478;
            case 0x28D48Cu: goto label_28d48c;
            case 0x28D490u: goto label_28d490;
            case 0x28D4A0u: goto label_28d4a0;
            case 0x28D4B4u: goto label_28d4b4;
            case 0x28D4BCu: goto label_28d4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D4BCu;
label_28d4bc:
    // 0x28d4bc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28D4BCu;
    {
        const bool branch_taken_0x28d4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d4bc) {
            ctx->pc = 0x28D4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4BCu;
            // 0x28d4c0: 0x80e30000  lb          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D4A0u;
            runtime->cooperativeGuestYield();
            goto label_28d4a0;
        }
    }
    ctx->pc = 0x28D4C4u;
    // 0x28d4c4: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x28D4C4u;
    {
        const bool branch_taken_0x28d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4C4u;
            // 0x28d4c8: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4c4) {
            ctx->pc = 0x28D490u;
            runtime->cooperativeGuestYield();
            goto label_28d490;
        }
    }
    ctx->pc = 0x28D4CCu;
    // 0x28d4cc: 0x0  nop
    ctx->pc = 0x28d4ccu;
    // NOP
}
