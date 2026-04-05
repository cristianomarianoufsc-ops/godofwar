#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d86b8
// Address: 0x1d86b8 - 0x1d8730
void entry_1d86b8_0x1d8730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d86b8_0x1d8730");
#endif

    ctx->pc = 0x1d86b8u;

    // 0x1d86b8: 0x24a3fffd  addiu       $v1, $a1, -0x3
    ctx->pc = 0x1d86b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x1d86bc: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x1d86bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1d86c0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D86C0u;
    {
        const bool branch_taken_0x1d86c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86C0u;
            // 0x1d86c4: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86c0) {
            ctx->pc = 0x1D8724u;
            goto label_1d8724;
        }
    }
    ctx->pc = 0x1D86C8u;
    // 0x1d86c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d86c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d86cc: 0x24426aa0  addiu       $v0, $v0, 0x6AA0
    ctx->pc = 0x1d86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27296));
    // 0x1d86d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d86d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d86d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d86d8: 0x400008  jr          $v0
    ctx->pc = 0x1D86D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D86E0u: goto label_1d86e0;
            case 0x1D8700u: goto label_1d8700;
            case 0x1D870Cu: goto label_1d870c;
            case 0x1D8718u: goto label_1d8718;
            case 0x1D8724u: goto label_1d8724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D86E0u;
label_1d86e0:
    // 0x1d86e0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d86e4: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x1d86e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d86e8: 0x94422d42  lhu         $v0, 0x2D42($v0)
    ctx->pc = 0x1d86e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 11586)));
    // 0x1d86ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d86f0: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1d86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d86f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d86f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d86f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D86F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D86FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86F8u;
            // 0x1d86fc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D86E0u: goto label_1d86e0;
            case 0x1D8700u: goto label_1d8700;
            case 0x1D870Cu: goto label_1d870c;
            case 0x1D8718u: goto label_1d8718;
            case 0x1D8724u: goto label_1d8724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8700u;
label_1d8700:
    // 0x1d8700: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d8700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d8704: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8704u;
            // 0x1d8708: 0x90422d3f  lbu         $v0, 0x2D3F($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11583)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D86E0u: goto label_1d86e0;
            case 0x1D8700u: goto label_1d8700;
            case 0x1D870Cu: goto label_1d870c;
            case 0x1D8718u: goto label_1d8718;
            case 0x1D8724u: goto label_1d8724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D870Cu;
label_1d870c:
    // 0x1d870c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d8710: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8710u;
            // 0x1d8714: 0x90422d40  lbu         $v0, 0x2D40($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11584)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D86E0u: goto label_1d86e0;
            case 0x1D8700u: goto label_1d8700;
            case 0x1D870Cu: goto label_1d870c;
            case 0x1D8718u: goto label_1d8718;
            case 0x1D8724u: goto label_1d8724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8718u;
label_1d8718:
    // 0x1d8718: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d8718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d871c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D871Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D871Cu;
            // 0x1d8720: 0x90422d41  lbu         $v0, 0x2D41($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11585)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D86E0u: goto label_1d86e0;
            case 0x1D8700u: goto label_1d8700;
            case 0x1D870Cu: goto label_1d870c;
            case 0x1D8718u: goto label_1d8718;
            case 0x1D8724u: goto label_1d8724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8724u;
label_1d8724:
    // 0x1d8724: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8724u;
            // 0x1d8728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D86E0u: goto label_1d86e0;
            case 0x1D8700u: goto label_1d8700;
            case 0x1D870Cu: goto label_1d870c;
            case 0x1D8718u: goto label_1d8718;
            case 0x1D8724u: goto label_1d8724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D872Cu;
    // 0x1d872c: 0x0  nop
    ctx->pc = 0x1d872cu;
    // NOP
}
