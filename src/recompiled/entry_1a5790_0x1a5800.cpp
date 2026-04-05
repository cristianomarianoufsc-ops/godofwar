#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a5790
// Address: 0x1a5790 - 0x1a5800
void entry_1a5790_0x1a5800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a5790_0x1a5800");
#endif

    ctx->pc = 0x1a5790u;

    // 0x1a5790: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a5790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5794: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1a5794u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1a5798: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1a5798u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1a579c: 0xace50020  sw          $a1, 0x20($a3)
    ctx->pc = 0x1a579cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 5));
    // 0x1a57a0: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1a57a0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1a57a4: 0xf8e10010  sqc2        $vf1, 0x10($a3)
    ctx->pc = 0x1a57a4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a57a8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1a57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a57ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a57acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57b0: 0xace6002c  sw          $a2, 0x2C($a3)
    ctx->pc = 0x1a57b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 6));
    // 0x1a57b4: 0xace20030  sw          $v0, 0x30($a3)
    ctx->pc = 0x1a57b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
    // 0x1a57b8: 0xa4e00028  sh          $zero, 0x28($a3)
    ctx->pc = 0x1a57b8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a57bc: 0xa4e0002a  sh          $zero, 0x2A($a3)
    ctx->pc = 0x1a57bcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a57c0: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x1a57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x1a57c4: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x1a57c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
label_1a57c8:
    // 0x1a57c8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1a57c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a57cc: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1a57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1a57d0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1a57d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a57d4: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x1a57d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a57d8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a57d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a57dc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a57dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a57e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a57e4: 0xa4440068  sh          $a0, 0x68($v0)
    ctx->pc = 0x1a57e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a57e8: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1a57e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1a57ec: 0x2902000c  slti        $v0, $t0, 0xC
    ctx->pc = 0x1a57ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1a57f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A57F0u;
    {
        const bool branch_taken_0x1a57f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A57F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A57F0u;
            // 0x1a57f4: 0xaca00080  sw          $zero, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57f0) {
            ctx->pc = 0x1A57C8u;
            runtime->cooperativeGuestYield();
            goto label_1a57c8;
        }
    }
    ctx->pc = 0x1A57F8u;
    // 0x1a57f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A57F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A57FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A57F8u;
            // 0x1a57fc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A57C8u: goto label_1a57c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5800u;
}
