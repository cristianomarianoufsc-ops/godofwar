#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ed20
// Address: 0x26ed20 - 0x26ed68
void entry_26ed20_0x26ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ed20_0x26ed68");
#endif

    ctx->pc = 0x26ed20u;

    // 0x26ed20: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x26ed20u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x26ed24: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x26ed24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x26ed28: 0x34a20040  ori         $v0, $a1, 0x40
    ctx->pc = 0x26ed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x26ed2c: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x26ed2cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x26ed30: 0xa6100a  movz        $v0, $a1, $a2
    ctx->pc = 0x26ed30u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x26ed34: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x26ed34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x26ed38: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x26ed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x26ed3c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x26ed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x26ed40: 0x47180a  movz        $v1, $v0, $a3
    ctx->pc = 0x26ed40u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x26ed44: 0x24a5a5d8  addiu       $a1, $a1, -0x5A28
    ctx->pc = 0x26ed44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944216));
    // 0x26ed48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x26ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26ed4c: 0x356be030  ori         $t3, $t3, 0xE030
    ctx->pc = 0x26ed4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)57392);
    // 0x26ed50: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x26ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x26ed54: 0xad690000  sw          $t1, 0x0($t3)
    ctx->pc = 0x26ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x26ed58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x26ed5c: 0x68100a  movz        $v0, $v1, $t0
    ctx->pc = 0x26ed5cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x26ed60: 0x3e00008  jr          $ra
    ctx->pc = 0x26ED60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ED64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED60u;
            // 0x26ed64: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26ED68u;
}
