#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29a008
// Address: 0x29a008 - 0x29a078
void entry_29a008_0x29a078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29a008_0x29a078");
#endif

    ctx->pc = 0x29a008u;

    // 0x29a008: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29a008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29a00c: 0x24475af8  addiu       $a3, $v0, 0x5AF8
    ctx->pc = 0x29a00cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23288));
    // 0x29a010: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x29a010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x29a014: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A014u;
    {
        const bool branch_taken_0x29a014 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a014) {
            ctx->pc = 0x29A028u;
            goto label_29a028;
        }
    }
    ctx->pc = 0x29A01Cu;
    // 0x29a01c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29a020: 0x3e00008  jr          $ra
    ctx->pc = 0x29A020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A020u;
            // 0x29a024: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A028u: goto label_29a028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A028u;
label_29a028:
    // 0x29a028: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x29a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x29a02c: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x29a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a030: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x29a030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29a034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29a034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29a038: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x29a038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x29a03c: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x29a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x29a040: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x29a040u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x29a044: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x29a044u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x29a048: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x29a048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x29a04c: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x29a04cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x29a050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29a054: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x29a054u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x29a058: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x29a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x29a05c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x29a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29a060: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x29a060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x29a064: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29a064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x29a068: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x29a068u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x29a06c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x29a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x29a070: 0x3e00008  jr          $ra
    ctx->pc = 0x29A070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A070u;
            // 0x29a074: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A028u: goto label_29a028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A078u;
}
