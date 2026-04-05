#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a5800
// Address: 0x1a5800 - 0x1a5870
void entry_1a5800_0x1a5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a5800_0x1a5870");
#endif

    ctx->pc = 0x1a5800u;

    // 0x1a5800: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a5800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5804: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1a5804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1a5808: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1a5808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1a580c: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x1a580cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x1a5810: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1a5810u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1a5814: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1a5814u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a5818: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a5818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a581c: 0xacc50024  sw          $a1, 0x24($a2)
    ctx->pc = 0x1a581cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 5));
    // 0x1a5820: 0xa4c00028  sh          $zero, 0x28($a2)
    ctx->pc = 0x1a5820u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a5824: 0xa4c0002a  sh          $zero, 0x2A($a2)
    ctx->pc = 0x1a5824u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a5828: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x1a5828u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x1a582c: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x1a582cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x1a5830: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x1a5830u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x1a5834: 0x0  nop
    ctx->pc = 0x1a5834u;
    // NOP
label_1a5838:
    // 0x1a5838: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1a5838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a583c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1a583cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1a5840: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a5840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a5844: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1a5844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a5848: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a5848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a584c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a584cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5850: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a5850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a5854: 0xa4440068  sh          $a0, 0x68($v0)
    ctx->pc = 0x1a5854u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5858: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1a5858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1a585c: 0x28e2000c  slti        $v0, $a3, 0xC
    ctx->pc = 0x1a585cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1a5860: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A5860u;
    {
        const bool branch_taken_0x1a5860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5860u;
            // 0x1a5864: 0xaca00080  sw          $zero, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5860) {
            ctx->pc = 0x1A5838u;
            runtime->cooperativeGuestYield();
            goto label_1a5838;
        }
    }
    ctx->pc = 0x1A5868u;
    // 0x1a5868: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5868u;
            // 0x1a586c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5838u: goto label_1a5838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5870u;
}
