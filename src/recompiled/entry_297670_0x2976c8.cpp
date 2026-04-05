#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_297670
// Address: 0x297670 - 0x2976c8
void entry_297670_0x2976c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_297670_0x2976c8");
#endif

    ctx->pc = 0x297670u;

    // 0x297670: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x297670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x297674: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x297674u;
    {
        const bool branch_taken_0x297674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x297674) {
            ctx->pc = 0x29769Cu;
            goto label_29769c;
        }
    }
    ctx->pc = 0x29767Cu;
    // 0x29767c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x297680: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x297680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x297684: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297684u;
    {
        const bool branch_taken_0x297684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x297684) {
            ctx->pc = 0x29769Cu;
            goto label_29769c;
        }
    }
    ctx->pc = 0x29768Cu;
    // 0x29768c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x29768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x297690: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x297690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x297694: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297694u;
    {
        const bool branch_taken_0x297694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297694) {
            ctx->pc = 0x2976A4u;
            goto label_2976a4;
        }
    }
    ctx->pc = 0x29769Cu;
label_29769c:
    // 0x29769c: 0x3e00008  jr          $ra
    ctx->pc = 0x29769Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2976A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29769Cu;
            // 0x2976a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29769Cu: goto label_29769c;
            case 0x2976A4u: goto label_2976a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2976A4u;
label_2976a4:
    // 0x2976a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2976A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2976A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2976A4u;
            // 0x2976a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29769Cu: goto label_29769c;
            case 0x2976A4u: goto label_2976a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2976ACu;
    // 0x2976ac: 0x0  nop
    ctx->pc = 0x2976acu;
    // NOP
    // 0x2976b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2976b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2976b4: 0x0  nop
    ctx->pc = 0x2976b4u;
    // NOP
    // 0x2976b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2976b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2976bc: 0x0  nop
    ctx->pc = 0x2976bcu;
    // NOP
    // 0x2976c0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2976c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2976c4: 0x0  nop
    ctx->pc = 0x2976c4u;
    // NOP
}
