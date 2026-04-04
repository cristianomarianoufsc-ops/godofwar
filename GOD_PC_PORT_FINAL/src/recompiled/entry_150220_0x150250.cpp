#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_150220
// Address: 0x150220 - 0x150250
void entry_150220_0x150250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_150220_0x150250");
#endif

    ctx->pc = 0x150220u;

    // 0x150220: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x150220u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x150224: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x150224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x150228: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x150228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15022c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x15022cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x150230: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150234: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x150234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x150238: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x150238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15023c: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x15023cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x150240: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x150240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150244: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x150244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x150248: 0x3e00008  jr          $ra
    ctx->pc = 0x150248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15024Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150248u;
            // 0x15024c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150250u;
}
