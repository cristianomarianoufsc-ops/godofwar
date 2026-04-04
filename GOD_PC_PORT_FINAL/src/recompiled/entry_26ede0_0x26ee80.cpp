#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ede0
// Address: 0x26ede0 - 0x26ee80
void entry_26ede0_0x26ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ede0_0x26ee80");
#endif

    ctx->pc = 0x26ede0u;

    // 0x26ede0: 0x3c02cfff  lui         $v0, 0xCFFF
    ctx->pc = 0x26ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53247 << 16));
    // 0x26ede4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26ede4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ede8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26ede8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26edec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26edecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26edf0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x26edf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26edf4: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x26edf4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x26edf8: 0x24631438  addiu       $v1, $v1, 0x1438
    ctx->pc = 0x26edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5176));
    // 0x26edfc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x26edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x26ee00: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x26ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x26ee04: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26ee04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26ee08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EE08u;
    {
        const bool branch_taken_0x26ee08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE08u;
            // 0x26ee0c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee08) {
            ctx->pc = 0x26EE18u;
            goto label_26ee18;
        }
    }
    ctx->pc = 0x26EE10u;
    // 0x26ee10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x26ee14: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x26ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_26ee18:
    // 0x26ee18: 0xacc50030  sw          $a1, 0x30($a2)
    ctx->pc = 0x26ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
    // 0x26ee1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ee20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x26ee24: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x26ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x26ee28: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x26ee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x26ee2c: 0xe42004  sllv        $a0, $a0, $a3
    ctx->pc = 0x26ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x26ee30: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26ee34: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26ee38: 0x2442a5d8  addiu       $v0, $v0, -0x5A28
    ctx->pc = 0x26ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944216));
    // 0x26ee3c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26ee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26ee40: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x26ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x26ee44: 0x3463fff3  ori         $v1, $v1, 0xFFF3
    ctx->pc = 0x26ee44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65523);
    // 0x26ee48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ee4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ee50: 0x34420104  ori         $v0, $v0, 0x104
    ctx->pc = 0x26ee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)260);
    // 0x26ee54: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x26ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x26ee58: 0xf  sync
    ctx->pc = 0x26ee58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x26ee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x26EE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26EE18u: goto label_26ee18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26EE64u;
    // 0x26ee64: 0x0  nop
    ctx->pc = 0x26ee64u;
    // NOP
    // 0x26ee68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26ee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26ee6c: 0x0  nop
    ctx->pc = 0x26ee6cu;
    // NOP
    // 0x26ee70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26ee74: 0x0  nop
    ctx->pc = 0x26ee74u;
    // NOP
    // 0x26ee78: 0x0  nop
    ctx->pc = 0x26ee78u;
    // NOP
    // 0x26ee7c: 0x0  nop
    ctx->pc = 0x26ee7cu;
    // NOP
}
