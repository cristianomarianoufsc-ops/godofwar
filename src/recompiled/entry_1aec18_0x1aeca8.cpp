#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1aec18
// Address: 0x1aec18 - 0x1aeca8
void entry_1aec18_0x1aeca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1aec18_0x1aeca8");
#endif

    ctx->pc = 0x1aec18u;

    // 0x1aec18: 0x8c880018  lw          $t0, 0x18($a0)
    ctx->pc = 0x1aec18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1aec1c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1aec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1aec20: 0x2442fdcc  addiu       $v0, $v0, -0x234
    ctx->pc = 0x1aec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966732));
    // 0x1aec24: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1aec24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1aec28: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1aec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1aec2c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x1aec2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1aec30: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1aec30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1aec34: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x1aec34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x1aec38: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1aec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1aec3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1aec3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1aec40: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x1aec40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
    // 0x1aec44: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1aec44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1aec48: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1aec48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1aec4c: 0x73f80  sll         $a3, $a3, 30
    ctx->pc = 0x1aec4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 30));
    // 0x1aec50: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1aec50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1aec54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1aec58: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1aec58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1aec5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC5Cu;
            // 0x1aec60: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEC64u;
    // 0x1aec64: 0x0  nop
    ctx->pc = 0x1aec64u;
    // NOP
    // 0x1aec68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1aec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1aec6c: 0x8c42cac8  lw          $v0, -0x3538($v0)
    ctx->pc = 0x1aec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953672)));
    // 0x1aec70: 0x84430048  lh          $v1, 0x48($v0)
    ctx->pc = 0x1aec70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1aec74: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1aec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1aec78: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1aec78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1aec7c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1aec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1aec80: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1aec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1aec84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aec84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aec88: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1aec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1aec8c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1aec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1aec90: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1aec90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1aec94: 0x2463fdcc  addiu       $v1, $v1, -0x234
    ctx->pc = 0x1aec94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966732));
    // 0x1aec98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1aec98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aec9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1aec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1aeca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AECA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AECA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AECA0u;
            // 0x1aeca4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AECA8u;
}
