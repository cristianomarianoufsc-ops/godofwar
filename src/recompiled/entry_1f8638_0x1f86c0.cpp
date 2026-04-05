#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f8638
// Address: 0x1f8638 - 0x1f86c0
void entry_1f8638_0x1f86c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f8638_0x1f86c0");
#endif

    ctx->pc = 0x1f8638u;

    // 0x1f8638: 0x90820332  lbu         $v0, 0x332($a0)
    ctx->pc = 0x1f8638u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 818)));
    // 0x1f863c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F863Cu;
    {
        const bool branch_taken_0x1f863c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F863Cu;
            // 0x1f8640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f863c) {
            ctx->pc = 0x1F8668u;
            goto label_1f8668;
        }
    }
    ctx->pc = 0x1F8644u;
    // 0x1f8644: 0x24830332  addiu       $v1, $a0, 0x332
    ctx->pc = 0x1f8644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 818));
    // 0x1f8648: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f8648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f864c: 0x0  nop
    ctx->pc = 0x1f864cu;
    // NOP
label_1f8650:
    // 0x1f8650: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1f8650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f8654: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8654u;
    {
        const bool branch_taken_0x1f8654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8654u;
            // 0x1f8658: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8654) {
            ctx->pc = 0x1F86B4u;
            goto label_1f86b4;
        }
    }
    ctx->pc = 0x1F865Cu;
    // 0x1f865c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f865cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8660: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F8660u;
    {
        const bool branch_taken_0x1f8660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8660) {
            ctx->pc = 0x1F8664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8660u;
            // 0x1f8664: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8650u;
            runtime->cooperativeGuestYield();
            goto label_1f8650;
        }
    }
    ctx->pc = 0x1F8668u;
label_1f8668:
    // 0x1f8668: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1f8668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f866c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F866Cu;
    {
        const bool branch_taken_0x1f866c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F866Cu;
            // 0x1f8670: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f866c) {
            ctx->pc = 0x1F86B4u;
            goto label_1f86b4;
        }
    }
    ctx->pc = 0x1F8674u;
    // 0x1f8674: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x1f8674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x1f8678: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1f8678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f867c: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x1f867cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x1f8680: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8680u;
    {
        const bool branch_taken_0x1f8680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8680) {
            ctx->pc = 0x1F8684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8680u;
            // 0x1f8684: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F86A0u;
            goto label_1f86a0;
        }
    }
    ctx->pc = 0x1F8688u;
    // 0x1f8688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f8688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f868c: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x1f868cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f8690: 0x90820731  lbu         $v0, 0x731($a0)
    ctx->pc = 0x1f8690u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1841)));
    // 0x1f8694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f8694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f8698: 0xa0820731  sb          $v0, 0x731($a0)
    ctx->pc = 0x1f8698u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1841), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f869c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f869cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1f86a0:
    // 0x1f86a0: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x1f86a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x1f86a4: 0x9442e3b8  lhu         $v0, -0x1C48($v0)
    ctx->pc = 0x1f86a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x1f86a8: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x1f86a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x1f86ac: 0xa4620030  sh          $v0, 0x30($v1)
    ctx->pc = 0x1f86acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f86b0: 0x7c650020  sq          $a1, 0x20($v1)
    ctx->pc = 0x1f86b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 5));
label_1f86b4:
    // 0x1f86b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F86B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F8650u: goto label_1f8650;
            case 0x1F8668u: goto label_1f8668;
            case 0x1F86A0u: goto label_1f86a0;
            case 0x1F86B4u: goto label_1f86b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F86BCu;
    // 0x1f86bc: 0x0  nop
    ctx->pc = 0x1f86bcu;
    // NOP
}
