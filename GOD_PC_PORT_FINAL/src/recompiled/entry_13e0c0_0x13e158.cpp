#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e0c0
// Address: 0x13e0c0 - 0x13e158
void entry_13e0c0_0x13e158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e0c0_0x13e158");
#endif

    ctx->pc = 0x13e0c0u;

    // 0x13e0c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x13e0c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e0c4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x13e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x13e0c8: 0x2482b940  addiu       $v0, $a0, -0x46C0
    ctx->pc = 0x13e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    // 0x13e0cc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13e0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13e0d0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x13e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13e0d4: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E0D4u;
    {
        const bool branch_taken_0x13e0d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x13E0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0D4u;
            // 0x13e0d8: 0x8c83b940  lw          $v1, -0x46C0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0d4) {
            ctx->pc = 0x13E0F0u;
            goto label_13e0f0;
        }
    }
    ctx->pc = 0x13E0DCu;
    // 0x13e0dc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13e0e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e0e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E0E4u;
    {
        const bool branch_taken_0x13e0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0E4u;
            // 0x13e0e8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0e4) {
            ctx->pc = 0x13E0F4u;
            goto label_13e0f4;
        }
    }
    ctx->pc = 0x13E0ECu;
    // 0x13e0ec: 0x0  nop
    ctx->pc = 0x13e0ecu;
    // NOP
label_13e0f0:
    // 0x13e0f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13e0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e0f4:
    // 0x13e0f4: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E0F4u;
    {
        const bool branch_taken_0x13e0f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0F4u;
            // 0x13e0f8: 0x2485b940  addiu       $a1, $a0, -0x46C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0f4) {
            ctx->pc = 0x13E118u;
            goto label_13e118;
        }
    }
    ctx->pc = 0x13E0FCu;
    // 0x13e0fc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13e100: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x13e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13e104: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13E104u;
    {
        const bool branch_taken_0x13e104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e104) {
            ctx->pc = 0x13E108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E104u;
            // 0x13e108: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E138u;
            goto label_13e138;
        }
    }
    ctx->pc = 0x13E10Cu;
    // 0x13e10c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x13e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e110: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13E110u;
    {
        const bool branch_taken_0x13e110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E110u;
            // 0x13e114: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e110) {
            ctx->pc = 0x13E150u;
            goto label_13e150;
        }
    }
    ctx->pc = 0x13E118u;
label_13e118:
    // 0x13e118: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13e118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13e11c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x13e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13e120: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E120u;
    {
        const bool branch_taken_0x13e120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e120) {
            ctx->pc = 0x13E124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E120u;
            // 0x13e124: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E138u;
            goto label_13e138;
        }
    }
    ctx->pc = 0x13E128u;
    // 0x13e128: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x13e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e12c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x13e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x13e130: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x13e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13e134: 0x0  nop
    ctx->pc = 0x13e134u;
    // NOP
label_13e138:
    // 0x13e138: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x13e138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e13c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13e140: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13e140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e144: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x13e144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x13e148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13e148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e14c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x13e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_13e150:
    // 0x13e150: 0x3e00008  jr          $ra
    ctx->pc = 0x13E150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E150u;
            // 0x13e154: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E0F0u: goto label_13e0f0;
            case 0x13E0F4u: goto label_13e0f4;
            case 0x13E118u: goto label_13e118;
            case 0x13E138u: goto label_13e138;
            case 0x13E150u: goto label_13e150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E158u;
}
