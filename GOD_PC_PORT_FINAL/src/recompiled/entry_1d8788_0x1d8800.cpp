#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d8788
// Address: 0x1d8788 - 0x1d8800
void entry_1d8788_0x1d8800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d8788_0x1d8800");
#endif

    ctx->pc = 0x1d8788u;

    // 0x1d8788: 0x24a3fffd  addiu       $v1, $a1, -0x3
    ctx->pc = 0x1d8788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x1d878c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1d878cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d8790: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D8790u;
    {
        const bool branch_taken_0x1d8790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8790u;
            // 0x1d8794: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8790) {
            ctx->pc = 0x1D87ECu;
            goto label_1d87ec;
        }
    }
    ctx->pc = 0x1D8798u;
    // 0x1d8798: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d879c: 0x24426b00  addiu       $v0, $v0, 0x6B00
    ctx->pc = 0x1d879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x1d87a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d87a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d87a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d87a8: 0x400008  jr          $v0
    ctx->pc = 0x1D87A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D87B0u: goto label_1d87b0;
            case 0x1D87BCu: goto label_1d87bc;
            case 0x1D87C8u: goto label_1d87c8;
            case 0x1D87D4u: goto label_1d87d4;
            case 0x1D87E0u: goto label_1d87e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D87B0u;
label_1d87b0:
    // 0x1d87b0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d87b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D87B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D87B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87B4u;
            // 0x1d87b8: 0x90422d38  lbu         $v0, 0x2D38($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11576)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D87B0u: goto label_1d87b0;
            case 0x1D87BCu: goto label_1d87bc;
            case 0x1D87C8u: goto label_1d87c8;
            case 0x1D87D4u: goto label_1d87d4;
            case 0x1D87E0u: goto label_1d87e0;
            case 0x1D87ECu: goto label_1d87ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D87BCu;
label_1d87bc:
    // 0x1d87bc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d87c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D87C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D87C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87C0u;
            // 0x1d87c4: 0x90422d39  lbu         $v0, 0x2D39($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11577)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D87B0u: goto label_1d87b0;
            case 0x1D87BCu: goto label_1d87bc;
            case 0x1D87C8u: goto label_1d87c8;
            case 0x1D87D4u: goto label_1d87d4;
            case 0x1D87E0u: goto label_1d87e0;
            case 0x1D87ECu: goto label_1d87ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D87C8u;
label_1d87c8:
    // 0x1d87c8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d87cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D87CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D87D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87CCu;
            // 0x1d87d0: 0x90422d3a  lbu         $v0, 0x2D3A($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11578)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D87B0u: goto label_1d87b0;
            case 0x1D87BCu: goto label_1d87bc;
            case 0x1D87C8u: goto label_1d87c8;
            case 0x1D87D4u: goto label_1d87d4;
            case 0x1D87E0u: goto label_1d87e0;
            case 0x1D87ECu: goto label_1d87ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D87D4u;
label_1d87d4:
    // 0x1d87d4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d87d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d87d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D87D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D87DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87D8u;
            // 0x1d87dc: 0x90422d3b  lbu         $v0, 0x2D3B($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11579)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D87B0u: goto label_1d87b0;
            case 0x1D87BCu: goto label_1d87bc;
            case 0x1D87C8u: goto label_1d87c8;
            case 0x1D87D4u: goto label_1d87d4;
            case 0x1D87E0u: goto label_1d87e0;
            case 0x1D87ECu: goto label_1d87ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D87E0u;
label_1d87e0:
    // 0x1d87e0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d87e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D87E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D87E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87E4u;
            // 0x1d87e8: 0x90422d3c  lbu         $v0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D87B0u: goto label_1d87b0;
            case 0x1D87BCu: goto label_1d87bc;
            case 0x1D87C8u: goto label_1d87c8;
            case 0x1D87D4u: goto label_1d87d4;
            case 0x1D87E0u: goto label_1d87e0;
            case 0x1D87ECu: goto label_1d87ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D87ECu;
label_1d87ec:
    // 0x1d87ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D87ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D87F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87ECu;
            // 0x1d87f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D87B0u: goto label_1d87b0;
            case 0x1D87BCu: goto label_1d87bc;
            case 0x1D87C8u: goto label_1d87c8;
            case 0x1D87D4u: goto label_1d87d4;
            case 0x1D87E0u: goto label_1d87e0;
            case 0x1D87ECu: goto label_1d87ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D87F4u;
    // 0x1d87f4: 0x0  nop
    ctx->pc = 0x1d87f4u;
    // NOP
    // 0x1d87f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d87f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d87fc: 0x0  nop
    ctx->pc = 0x1d87fcu;
    // NOP
}
