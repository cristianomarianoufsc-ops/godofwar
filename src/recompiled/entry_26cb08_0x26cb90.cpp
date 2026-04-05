#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26cb08
// Address: 0x26cb08 - 0x26cb90
void entry_26cb08_0x26cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26cb08_0x26cb90");
#endif

    ctx->pc = 0x26cb08u;

    // 0x26cb08: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26cb0c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26cb10: 0xac44a318  sw          $a0, -0x5CE8($v0)
    ctx->pc = 0x26cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943512), GPR_U32(ctx, 4));
    // 0x26cb14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cb18: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CB18u;
    {
        const bool branch_taken_0x26cb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB18u;
            // 0x26cb1c: 0xac65a31c  sw          $a1, -0x5CE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb18) {
            ctx->pc = 0x26CB34u;
            goto label_26cb34;
        }
    }
    ctx->pc = 0x26CB20u;
    // 0x26cb20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26cb24: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26CB24u;
    {
        const bool branch_taken_0x26cb24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB24u;
            // 0x26cb28: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb24) {
            ctx->pc = 0x26CB58u;
            goto label_26cb58;
        }
    }
    ctx->pc = 0x26CB2Cu;
    // 0x26cb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x26CB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CB34u: goto label_26cb34;
            case 0x26CB58u: goto label_26cb58;
            case 0x26CB74u: goto label_26cb74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26CB34u;
label_26cb34:
    // 0x26cb34: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x26cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x26cb38: 0x3c090031  lui         $t1, 0x31
    ctx->pc = 0x26cb38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49 << 16));
    // 0x26cb3c: 0x2442d048  addiu       $v0, $v0, -0x2FB8
    ctx->pc = 0x26cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955080));
    // 0x26cb40: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x26cb40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x26cb44: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x26cb44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x26cb48: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x26cb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x26cb4c: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x26cb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x26cb50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26CB50u;
    {
        const bool branch_taken_0x26cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB50u;
            // 0x26cb54: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb50) {
            ctx->pc = 0x26CB74u;
            goto label_26cb74;
        }
    }
    ctx->pc = 0x26CB58u;
label_26cb58:
    // 0x26cb58: 0x3c090031  lui         $t1, 0x31
    ctx->pc = 0x26cb58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49 << 16));
    // 0x26cb5c: 0x2442cf20  addiu       $v0, $v0, -0x30E0
    ctx->pc = 0x26cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x26cb60: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x26cb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x26cb64: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x26cb64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x26cb68: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x26cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x26cb6c: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x26cb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x26cb70: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26cb74:
    // 0x26cb74: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x26cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x26cb78: 0xa527a320  sh          $a3, -0x5CE0($t1)
    ctx->pc = 0x26cb78u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294943520), (uint16_t)GPR_U32(ctx, 7));
    // 0x26cb7c: 0xa505a322  sh          $a1, -0x5CDE($t0)
    ctx->pc = 0x26cb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294943522), (uint16_t)GPR_U32(ctx, 5));
    // 0x26cb80: 0xacc3a324  sw          $v1, -0x5CDC($a2)
    ctx->pc = 0x26cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943524), GPR_U32(ctx, 3));
    // 0x26cb84: 0x3e00008  jr          $ra
    ctx->pc = 0x26CB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB84u;
            // 0x26cb88: 0xac82a328  sw          $v0, -0x5CD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294943528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CB34u: goto label_26cb34;
            case 0x26CB58u: goto label_26cb58;
            case 0x26CB74u: goto label_26cb74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26CB8Cu;
    // 0x26cb8c: 0x0  nop
    ctx->pc = 0x26cb8cu;
    // NOP
}
