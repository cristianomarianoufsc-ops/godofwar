#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ed68
// Address: 0x26ed68 - 0x26ede0
void entry_26ed68_0x26ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ed68_0x26ede0");
#endif

    ctx->pc = 0x26ed68u;

    // 0x26ed68: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x26ed68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed6c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26ed70: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x26ed70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x26ed74: 0x24421438  addiu       $v0, $v0, 0x1438
    ctx->pc = 0x26ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5176));
    // 0x26ed78: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x26ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x26ed7c: 0x3c03cfff  lui         $v1, 0xCFFF
    ctx->pc = 0x26ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53247 << 16));
    // 0x26ed80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26ed80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26ed84: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x26ed84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ed88: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x26ed88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26ed8c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x26ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x26ed90: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26ed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26ed94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26ED94u;
    {
        const bool branch_taken_0x26ed94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED94u;
            // 0x26ed98: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed94) {
            ctx->pc = 0x26EDA0u;
            goto label_26eda0;
        }
    }
    ctx->pc = 0x26ED9Cu;
    // 0x26ed9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x26ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_26eda0:
    // 0x26eda0: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x26eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x26eda4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eda8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x26edac: 0xace60020  sw          $a2, 0x20($a3)
    ctx->pc = 0x26edacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 6));
    // 0x26edb0: 0x1042004  sllv        $a0, $a0, $t0
    ctx->pc = 0x26edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
    // 0x26edb4: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x26edb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x26edb8: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26edbc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26edc0: 0x2442a5d8  addiu       $v0, $v0, -0x5A28
    ctx->pc = 0x26edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944216));
    // 0x26edc4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x26edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x26edc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26edcc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x26edccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x26edd0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x26edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x26edd4: 0xf  sync
    ctx->pc = 0x26edd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x26edd8: 0x3e00008  jr          $ra
    ctx->pc = 0x26EDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26EDA0u: goto label_26eda0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26EDE0u;
}
