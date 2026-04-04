#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2274b8
// Address: 0x2274b8 - 0x227520
void entry_2274b8_0x227520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2274b8_0x227520");
#endif

    ctx->pc = 0x2274b8u;

    // 0x2274b8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2274b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2274bc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2274BCu;
    {
        const bool branch_taken_0x2274bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2274C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2274BCu;
            // 0x2274c0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274bc) {
            ctx->pc = 0x227510u;
            goto label_227510;
        }
    }
    ctx->pc = 0x2274C4u;
    // 0x2274c4: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x2274c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x2274c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2274c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2274cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2274ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2274d0: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x2274d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2274d4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2274D4u;
    {
        const bool branch_taken_0x2274d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2274D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2274D4u;
            // 0x2274d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274d4) {
            ctx->pc = 0x227514u;
            goto label_227514;
        }
    }
    ctx->pc = 0x2274DCu;
    // 0x2274dc: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x2274dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_2274e0:
    // 0x2274e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2274e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274e4: 0x44280b  movn        $a1, $v0, $a0
    ctx->pc = 0x2274e4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x2274e8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2274e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2274ec: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x2274ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2274f0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2274F0u;
    {
        const bool branch_taken_0x2274f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2274f0) {
            ctx->pc = 0x2274F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2274F0u;
            // 0x2274f4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227508u;
            goto label_227508;
        }
    }
    ctx->pc = 0x2274F8u;
    // 0x2274f8: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x2274f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x2274fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2274FCu;
    {
        const bool branch_taken_0x2274fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2274fc) {
            ctx->pc = 0x227514u;
            goto label_227514;
        }
    }
    ctx->pc = 0x227504u;
    // 0x227504: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x227504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227508:
    // 0x227508: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x227508u;
    {
        const bool branch_taken_0x227508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22750Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227508u;
            // 0x22750c: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227508) {
            ctx->pc = 0x2274E0u;
            runtime->cooperativeGuestYield();
            goto label_2274e0;
        }
    }
    ctx->pc = 0x227510u;
label_227510:
    // 0x227510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227514:
    // 0x227514: 0x3e00008  jr          $ra
    ctx->pc = 0x227514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2274E0u: goto label_2274e0;
            case 0x227508u: goto label_227508;
            case 0x227510u: goto label_227510;
            case 0x227514u: goto label_227514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22751Cu;
    // 0x22751c: 0x0  nop
    ctx->pc = 0x22751cu;
    // NOP
}
