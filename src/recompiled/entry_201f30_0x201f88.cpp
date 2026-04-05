#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_201f30
// Address: 0x201f30 - 0x201f88
void entry_201f30_0x201f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_201f30_0x201f88");
#endif

    ctx->pc = 0x201f30u;

    // 0x201f30: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x201f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x201f34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x201f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f38: 0x2442a090  addiu       $v0, $v0, -0x5F70
    ctx->pc = 0x201f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942864));
    // 0x201f3c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x201f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x201f40: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x201f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x201f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f48: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x201f48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x201f4c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x201f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x201f50: 0xa4a00010  sh          $zero, 0x10($a1)
    ctx->pc = 0x201f50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x201f54: 0x0  nop
    ctx->pc = 0x201f54u;
    // NOP
label_201f58:
    // 0x201f58: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x201f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x201f5c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x201f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x201f60: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x201f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x201f64: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x201f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201f68: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x201f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x201f6c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x201f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x201f70: 0xa4440024  sh          $a0, 0x24($v0)
    ctx->pc = 0x201f70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 4));
    // 0x201f74: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x201f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x201f78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x201F78u;
    {
        const bool branch_taken_0x201f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F78u;
            // 0x201f7c: 0xac600048  sw          $zero, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f78) {
            ctx->pc = 0x201F58u;
            runtime->cooperativeGuestYield();
            goto label_201f58;
        }
    }
    ctx->pc = 0x201F80u;
    // 0x201f80: 0x3e00008  jr          $ra
    ctx->pc = 0x201F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F80u;
            // 0x201f84: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201F58u: goto label_201f58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201F88u;
}
