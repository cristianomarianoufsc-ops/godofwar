#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_138778
// Address: 0x138778 - 0x1387c0
void entry_138778_0x1387c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_138778_0x1387c0");
#endif

    ctx->pc = 0x138778u;

    // 0x138778: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x138778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x13877c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13877cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138780: 0x80a2be0c  lb          $v0, -0x41F4($a1)
    ctx->pc = 0x138780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294950412)));
    // 0x138784: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138784u;
    {
        const bool branch_taken_0x138784 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x138788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138784u;
            // 0x138788: 0x90a4be0c  lbu         $a0, -0x41F4($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294950412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138784) {
            ctx->pc = 0x138794u;
            goto label_138794;
        }
    }
    ctx->pc = 0x13878Cu;
    // 0x13878c: 0x3e00008  jr          $ra
    ctx->pc = 0x13878Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13878Cu;
            // 0x138790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138794u: goto label_138794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138794u;
label_138794:
    // 0x138794: 0x90a3be0c  lbu         $v1, -0x41F4($a1)
    ctx->pc = 0x138794u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294950412)));
    // 0x138798: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x138798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13879c: 0x2442f1f8  addiu       $v0, $v0, -0xE08
    ctx->pc = 0x13879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963704));
    // 0x1387a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1387a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1387a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1387a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1387a8: 0xa0a4be0c  sb          $a0, -0x41F4($a1)
    ctx->pc = 0x1387a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294950412), (uint8_t)GPR_U32(ctx, 4));
    // 0x1387ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1387acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1387b0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1387b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1387b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1387B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1387B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1387B4u;
            // 0x1387b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138794u: goto label_138794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1387BCu;
    // 0x1387bc: 0x0  nop
    ctx->pc = 0x1387bcu;
    // NOP
}
