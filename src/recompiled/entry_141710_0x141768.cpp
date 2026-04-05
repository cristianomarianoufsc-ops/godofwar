#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_141710
// Address: 0x141710 - 0x141768
void entry_141710_0x141768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_141710_0x141768");
#endif

    ctx->pc = 0x141710u;

    // 0x141710: 0xa0800144  sb          $zero, 0x144($a0)
    ctx->pc = 0x141710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 324), (uint8_t)GPR_U32(ctx, 0));
    // 0x141714: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x141714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x141718: 0xac800134  sw          $zero, 0x134($a0)
    ctx->pc = 0x141718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
    // 0x14171c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x14171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x141720: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x141720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x141724: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x141724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x141728: 0x8ca500f0  lw          $a1, 0xF0($a1)
    ctx->pc = 0x141728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x14172c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x14172cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x141730: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x141730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x141734: 0x34c6fff0  ori         $a2, $a2, 0xFFF0
    ctx->pc = 0x141734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65520);
    // 0x141738: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x141738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x14173c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14173cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x141740: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x141740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x141744: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x141744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x141748: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x141748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x14174c: 0x24420043  addiu       $v0, $v0, 0x43
    ctx->pc = 0x14174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 67));
    // 0x141750: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x141750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x141754: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x141754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x141758: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x141758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x14175c: 0x3e00008  jr          $ra
    ctx->pc = 0x14175Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14175Cu;
            // 0x141760: 0xac82013c  sw          $v0, 0x13C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141764u;
    // 0x141764: 0x0  nop
    ctx->pc = 0x141764u;
    // NOP
}
