#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170968
// Address: 0x170968 - 0x1709c8
void sub_00170968_0x170968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170968_0x170968");
#endif

    ctx->pc = 0x170968u;

    // 0x170968: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x170968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x17096c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17096cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170970: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x170970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x170974: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x170974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x170978: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x170978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17097c: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x17097Cu;
    {
        const bool branch_taken_0x17097c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x170980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17097Cu;
            // 0x170980: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17097c) {
            ctx->pc = 0x1709B8u;
            goto label_1709b8;
        }
    }
    ctx->pc = 0x170984u;
    // 0x170984: 0x0  nop
    ctx->pc = 0x170984u;
    // NOP
label_170988:
    // 0x170988: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x170988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17098c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x170990: 0x2483fff0  addiu       $v1, $a0, -0x10
    ctx->pc = 0x170990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x170994: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x170994u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x170998: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x170998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x17099c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17099Cu;
    {
        const bool branch_taken_0x17099c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17099c) {
            ctx->pc = 0x1709A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17099Cu;
            // 0x1709a0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1709ACu;
            goto label_1709ac;
        }
    }
    ctx->pc = 0x1709A4u;
    // 0x1709a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1709A4u;
    {
        const bool branch_taken_0x1709a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1709A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1709A4u;
            // 0x1709a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709a4) {
            ctx->pc = 0x1709BCu;
            goto label_1709bc;
        }
    }
    ctx->pc = 0x1709ACu;
label_1709ac:
    // 0x1709ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1709acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1709b0: 0x1443fff5  bne         $v0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1709B0u;
    {
        const bool branch_taken_0x1709b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1709B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1709B0u;
            // 0x1709b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709b0) {
            ctx->pc = 0x170988u;
            runtime->cooperativeGuestYield();
            goto label_170988;
        }
    }
    ctx->pc = 0x1709B8u;
label_1709b8:
    // 0x1709b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1709b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1709bc:
    // 0x1709bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1709BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1709C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1709BCu;
            // 0x1709c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170988u: goto label_170988;
            case 0x1709ACu: goto label_1709ac;
            case 0x1709B8u: goto label_1709b8;
            case 0x1709BCu: goto label_1709bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1709C4u;
    // 0x1709c4: 0x0  nop
    ctx->pc = 0x1709c4u;
    // NOP
}
