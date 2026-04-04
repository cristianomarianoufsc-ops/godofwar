#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_150138
// Address: 0x150138 - 0x1501c0
void entry_150138_0x1501c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_150138_0x1501c0");
#endif

    ctx->pc = 0x150138u;

    // 0x150138: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x150138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x15013c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15013cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150140: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x150140u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x150144: 0x24890060  addiu       $t1, $a0, 0x60
    ctx->pc = 0x150144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x150148: 0x248a0040  addiu       $t2, $a0, 0x40
    ctx->pc = 0x150148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x15014c: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x15014cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x150150: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x150150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150158: 0x30c6001f  andi        $a2, $a2, 0x1F
    ctx->pc = 0x150158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x15015c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x15015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x150160: 0xc83004  sllv        $a2, $t0, $a2
    ctx->pc = 0x150160u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x150164: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x150164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150168: 0x71142  srl         $v0, $a3, 5
    ctx->pc = 0x150168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x15016c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15016cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150170: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x150170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150174: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x150174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x150178: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x150178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x15017c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15017cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x150180: 0x30e7001f  andi        $a3, $a3, 0x1F
    ctx->pc = 0x150180u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x150184: 0xe83804  sllv        $a3, $t0, $a3
    ctx->pc = 0x150184u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x150188: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x150188u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x15018c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x15018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x150190: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150194: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x150194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x150198: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x150198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x15019c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x15019cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1501a0: 0xa84004  sllv        $t0, $t0, $a1
    ctx->pc = 0x1501a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1501a4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x1501a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x1501a8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1501a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1501ac: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1501acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1501b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1501B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1501B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1501B0u;
            // 0x1501b4: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1501B8u;
    // 0x1501b8: 0x0  nop
    ctx->pc = 0x1501b8u;
    // NOP
    // 0x1501bc: 0x0  nop
    ctx->pc = 0x1501bcu;
    // NOP
}
