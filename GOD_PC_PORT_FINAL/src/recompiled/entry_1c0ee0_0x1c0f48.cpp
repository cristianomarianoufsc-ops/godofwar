#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1c0ee0
// Address: 0x1c0ee0 - 0x1c0f48
void entry_1c0ee0_0x1c0f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1c0ee0_0x1c0f48");
#endif

    ctx->pc = 0x1c0ee0u;

    // 0x1c0ee0: 0x8c830374  lw          $v1, 0x374($a0)
    ctx->pc = 0x1c0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x1c0ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ee8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0EE8u;
    {
        const bool branch_taken_0x1c0ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0EE8u;
            // 0x1c0eec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ee8) {
            ctx->pc = 0x1C0F2Cu;
            goto label_1c0f2c;
        }
    }
    ctx->pc = 0x1C0EF0u;
    // 0x1c0ef0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0EF0u;
    {
        const bool branch_taken_0x1c0ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ef0) {
            ctx->pc = 0x1C0EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0EF0u;
            // 0x1c0ef4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0F08u;
            goto label_1c0f08;
        }
    }
    ctx->pc = 0x1C0EF8u;
    // 0x1c0ef8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0EF8u;
    {
        const bool branch_taken_0x1c0ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ef8) {
            ctx->pc = 0x1C0EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0EF8u;
            // 0x1c0efc: 0x8c8301a8  lw          $v1, 0x1A8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0F20u;
            goto label_1c0f20;
        }
    }
    ctx->pc = 0x1C0F00u;
    // 0x1c0f00: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0F08u: goto label_1c0f08;
            case 0x1C0F20u: goto label_1c0f20;
            case 0x1C0F2Cu: goto label_1c0f2c;
            case 0x1C0F38u: goto label_1c0f38;
            case 0x1C0F3Cu: goto label_1c0f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0F08u;
label_1c0f08:
    // 0x1c0f08: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0F08u;
    {
        const bool branch_taken_0x1c0f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F08u;
            // 0x1c0f0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f08) {
            ctx->pc = 0x1C0F38u;
            goto label_1c0f38;
        }
    }
    ctx->pc = 0x1C0F10u;
    // 0x1c0f10: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0F10u;
    {
        const bool branch_taken_0x1c0f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c0f10) {
            ctx->pc = 0x1C0F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F10u;
            // 0x1c0f14: 0x8c8201a8  lw          $v0, 0x1A8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0F3Cu;
            goto label_1c0f3c;
        }
    }
    ctx->pc = 0x1C0F18u;
    // 0x1c0f18: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0F08u: goto label_1c0f08;
            case 0x1C0F20u: goto label_1c0f20;
            case 0x1C0F2Cu: goto label_1c0f2c;
            case 0x1C0F38u: goto label_1c0f38;
            case 0x1C0F3Cu: goto label_1c0f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0F20u;
label_1c0f20:
    // 0x1c0f20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F24u;
            // 0x1c0f28: 0xa4620120  sh          $v0, 0x120($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 288), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0F08u: goto label_1c0f08;
            case 0x1C0F20u: goto label_1c0f20;
            case 0x1C0F2Cu: goto label_1c0f2c;
            case 0x1C0F38u: goto label_1c0f38;
            case 0x1C0F3Cu: goto label_1c0f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0F2Cu;
label_1c0f2c:
    // 0x1c0f2c: 0x8c8201a8  lw          $v0, 0x1A8($a0)
    ctx->pc = 0x1c0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x1c0f30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F30u;
            // 0x1c0f34: 0xa4430120  sh          $v1, 0x120($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 288), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0F08u: goto label_1c0f08;
            case 0x1C0F20u: goto label_1c0f20;
            case 0x1C0F2Cu: goto label_1c0f2c;
            case 0x1C0F38u: goto label_1c0f38;
            case 0x1C0F3Cu: goto label_1c0f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0F38u;
label_1c0f38:
    // 0x1c0f38: 0x8c8201a8  lw          $v0, 0x1A8($a0)
    ctx->pc = 0x1c0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
label_1c0f3c:
    // 0x1c0f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F3Cu;
            // 0x1c0f40: 0xa4400120  sh          $zero, 0x120($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 288), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0F08u: goto label_1c0f08;
            case 0x1C0F20u: goto label_1c0f20;
            case 0x1C0F2Cu: goto label_1c0f2c;
            case 0x1C0F38u: goto label_1c0f38;
            case 0x1C0F3Cu: goto label_1c0f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0F44u;
    // 0x1c0f44: 0x0  nop
    ctx->pc = 0x1c0f44u;
    // NOP
}
