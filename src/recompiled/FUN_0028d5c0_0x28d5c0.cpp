#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0028d5c0
// Address: 0x28d5c0 - 0x28d638
void FUN_0028d5c0_0x28d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0028d5c0_0x28d5c0");
#endif

    ctx->pc = 0x28d5c0u;

    // 0x28d5c0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x28d5c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d5c4: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x28d5c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28d5c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28D5C8u;
    {
        const bool branch_taken_0x28d5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D5C8u;
            // 0x28d5cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5c8) {
            ctx->pc = 0x28D5F0u;
            goto label_28d5f0;
        }
    }
    ctx->pc = 0x28D5D0u;
    // 0x28d5d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28d5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x28d5d4: 0x0  nop
    ctx->pc = 0x28d5d4u;
    // NOP
label_28d5d8:
    // 0x28d5d8: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x28d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x28d5dc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x28d5dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28d5e0: 0x0  nop
    ctx->pc = 0x28d5e0u;
    // NOP
    // 0x28d5e4: 0x0  nop
    ctx->pc = 0x28d5e4u;
    // NOP
    // 0x28d5e8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28D5E8u;
    {
        const bool branch_taken_0x28d5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d5e8) {
            ctx->pc = 0x28D5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D5E8u;
            // 0x28d5ec: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D5D8u;
            runtime->cooperativeGuestYield();
            goto label_28d5d8;
        }
    }
    ctx->pc = 0x28D5F0u;
label_28d5f0:
    // 0x28d5f0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28d5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28d5f4: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x28D5F4u;
    {
        const bool branch_taken_0x28d5f4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x28D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D5F4u;
            // 0x28d5f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5f4) {
            ctx->pc = 0x28D630u;
            goto label_28d630;
        }
    }
    ctx->pc = 0x28D5FCu;
    // 0x28d5fc: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x28d5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x28d600: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x28d600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d604: 0x0  nop
    ctx->pc = 0x28d604u;
    // NOP
label_28d608:
    // 0x28d608: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x28d608u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28d60c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x28d60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x28d610: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x28d610u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28d614: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28d614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28d618: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x28d618u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28d61c: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x28d61cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28d620: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x28d620u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28d624: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28d624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28d628: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x28D628u;
    {
        const bool branch_taken_0x28d628 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D628u;
            // 0x28d62c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d628) {
            ctx->pc = 0x28D608u;
            runtime->cooperativeGuestYield();
            goto label_28d608;
        }
    }
    ctx->pc = 0x28D630u;
label_28d630:
    // 0x28d630: 0x3e00008  jr          $ra
    ctx->pc = 0x28D630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D630u;
            // 0x28d634: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D5D8u: goto label_28d5d8;
            case 0x28D5F0u: goto label_28d5f0;
            case 0x28D608u: goto label_28d608;
            case 0x28D630u: goto label_28d630;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D638u;
}
