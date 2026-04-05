#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_175780
// Address: 0x175780 - 0x1757d8
void entry_175780_0x1757d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_175780_0x1757d8");
#endif

    ctx->pc = 0x175780u;

    // 0x175780: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x175780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175784: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x175784u;
    {
        const bool branch_taken_0x175784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175784u;
            // 0x175788: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175784) {
            ctx->pc = 0x1757CCu;
            goto label_1757cc;
        }
    }
    ctx->pc = 0x17578Cu;
    // 0x17578c: 0x0  nop
    ctx->pc = 0x17578cu;
    // NOP
label_175790:
    // 0x175790: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x175790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x175794: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x175794u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    // 0x175798: 0x24c2ff9f  addiu       $v0, $a2, -0x61
    ctx->pc = 0x175798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967199));
    // 0x17579c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x17579cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1757a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1757A0u;
    {
        const bool branch_taken_0x1757a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1757A0u;
            // 0x1757a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757a0) {
            ctx->pc = 0x1757B4u;
            goto label_1757b4;
        }
    }
    ctx->pc = 0x1757A8u;
    // 0x1757a8: 0x24c2ffe0  addiu       $v0, $a2, -0x20
    ctx->pc = 0x1757a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1757ac: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1757acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1757b0: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x1757b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_1757b4:
    // 0x1757b4: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x1757b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x1757b8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1757b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1757bc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1757bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1757c0: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x1757c0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1757c4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1757C4u;
    {
        const bool branch_taken_0x1757c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1757C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1757C4u;
            // 0x1757c8: 0x462821  addu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757c4) {
            ctx->pc = 0x175790u;
            runtime->cooperativeGuestYield();
            goto label_175790;
        }
    }
    ctx->pc = 0x1757CCu;
label_1757cc:
    // 0x1757cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1757CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1757D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1757CCu;
            // 0x1757d0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175790u: goto label_175790;
            case 0x1757B4u: goto label_1757b4;
            case 0x1757CCu: goto label_1757cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1757D4u;
    // 0x1757d4: 0x0  nop
    ctx->pc = 0x1757d4u;
    // NOP
}
