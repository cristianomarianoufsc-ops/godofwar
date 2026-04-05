#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_284618
// Address: 0x284618 - 0x2846b8
void entry_284618_0x2846b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_284618_0x2846b8");
#endif

    ctx->pc = 0x284618u;

    // 0x284618: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x284618u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28461c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284620: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x284620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x284624: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x284624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x284628: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x284628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28462c: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x28462cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x284630: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x284630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x284634: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x284634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x284638: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284638u;
    {
        const bool branch_taken_0x284638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28463Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284638u;
            // 0x28463c: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284638) {
            ctx->pc = 0x284650u;
            goto label_284650;
        }
    }
    ctx->pc = 0x284640u;
    // 0x284640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x284640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284644: 0x3e00008  jr          $ra
    ctx->pc = 0x284644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284644u;
            // 0x284648: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284650u: goto label_284650;
            case 0x284668u: goto label_284668;
            case 0x284684u: goto label_284684;
            case 0x284688u: goto label_284688;
            case 0x284690u: goto label_284690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28464Cu;
    // 0x28464c: 0x0  nop
    ctx->pc = 0x28464cu;
    // NOP
label_284650:
    // 0x284650: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x284650u;
    {
        const bool branch_taken_0x284650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x284650) {
            ctx->pc = 0x284654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284650u;
            // 0x284654: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x284690u;
            goto label_284690;
        }
    }
    ctx->pc = 0x284658u;
    // 0x284658: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x284658u;
    {
        const bool branch_taken_0x284658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28465Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284658u;
            // 0x28465c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284658) {
            ctx->pc = 0x284668u;
            goto label_284668;
        }
    }
    ctx->pc = 0x284660u;
    // 0x284660: 0x3e00008  jr          $ra
    ctx->pc = 0x284660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284660u;
            // 0x284664: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284650u: goto label_284650;
            case 0x284668u: goto label_284668;
            case 0x284684u: goto label_284684;
            case 0x284688u: goto label_284688;
            case 0x284690u: goto label_284690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284668u;
label_284668:
    // 0x284668: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x284668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x28466c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x28466cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x284670: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x284670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x284674: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284674u;
    {
        const bool branch_taken_0x284674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284674u;
            // 0x284678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284674) {
            ctx->pc = 0x284684u;
            goto label_284684;
        }
    }
    ctx->pc = 0x28467Cu;
    // 0x28467c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28467Cu;
    {
        const bool branch_taken_0x28467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28467Cu;
            // 0x284680: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28467c) {
            ctx->pc = 0x284688u;
            goto label_284688;
        }
    }
    ctx->pc = 0x284684u;
label_284684:
    // 0x284684: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x284684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_284688:
    // 0x284688: 0x3e00008  jr          $ra
    ctx->pc = 0x284688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284688u;
            // 0x28468c: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284650u: goto label_284650;
            case 0x284668u: goto label_284668;
            case 0x284684u: goto label_284684;
            case 0x284688u: goto label_284688;
            case 0x284690u: goto label_284690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284690u;
label_284690:
    // 0x284690: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x284690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x284694: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x284694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x284698: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x284698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28469c: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x28469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x2846a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2846a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2846a4: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x2846a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x2846a8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2846a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2846ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2846ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2846B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2846ACu;
            // 0x2846b0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284650u: goto label_284650;
            case 0x284668u: goto label_284668;
            case 0x284684u: goto label_284684;
            case 0x284688u: goto label_284688;
            case 0x284690u: goto label_284690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2846B4u;
    // 0x2846b4: 0x0  nop
    ctx->pc = 0x2846b4u;
    // NOP
}
