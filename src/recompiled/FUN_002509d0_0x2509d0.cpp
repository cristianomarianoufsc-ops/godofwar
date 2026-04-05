#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002509d0
// Address: 0x2509d0 - 0x250ab0
void FUN_002509d0_0x2509d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002509d0_0x2509d0");
#endif

    ctx->pc = 0x2509d0u;

    // 0x2509d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2509d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2509d4: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x2509d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x2509d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2509d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2509dc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2509dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2509e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2509e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509e4: 0x0  nop
    ctx->pc = 0x2509e4u;
    // NOP
label_2509e8:
    // 0x2509e8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2509e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2509ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2509ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2509f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2509f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2509f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2509f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2509f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2509f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2509fc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2509FCu;
    {
        const bool branch_taken_0x2509fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2509fc) {
            ctx->pc = 0x250A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2509FCu;
            // 0x250a00: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x250A18u;
            goto label_250a18;
        }
    }
    ctx->pc = 0x250A04u;
    // 0x250a04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250a08: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x250A08u;
    {
        const bool branch_taken_0x250a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250a08) {
            ctx->pc = 0x250A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x250A08u;
            // 0x250a0c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x250A18u;
            goto label_250a18;
        }
    }
    ctx->pc = 0x250A10u;
    // 0x250a10: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x250A10u;
    {
        const bool branch_taken_0x250a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250A10u;
            // 0x250a14: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a10) {
            ctx->pc = 0x250A98u;
            goto label_250a98;
        }
    }
    ctx->pc = 0x250A18u;
label_250a18:
    // 0x250a18: 0x2843000e  slti        $v1, $v0, 0xE
    ctx->pc = 0x250a18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x250a1c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x250A1Cu;
    {
        const bool branch_taken_0x250a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x250A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250A1Cu;
            // 0x250a20: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a1c) {
            ctx->pc = 0x2509E8u;
            runtime->cooperativeGuestYield();
            goto label_2509e8;
        }
    }
    ctx->pc = 0x250A24u;
    // 0x250a24: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x250A24u;
    {
        const bool branch_taken_0x250a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250A24u;
            // 0x250a28: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a24) {
            ctx->pc = 0x250A9Cu;
            goto label_250a9c;
        }
    }
    ctx->pc = 0x250A2Cu;
    // 0x250a2c: 0x0  nop
    ctx->pc = 0x250a2cu;
    // NOP
label_250a30:
    // 0x250a30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x250a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a34: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x250a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x250a38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x250a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250a3c: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x250a3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x250a40: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x250a40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x250a44: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x250a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x250a48: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x250a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x250a4c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x250a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x250a50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x250a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x250a54: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x250A54u;
    {
        const bool branch_taken_0x250a54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x250A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250A54u;
            // 0x250a58: 0xa4830004  sh          $v1, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a54) {
            ctx->pc = 0x250A98u;
            goto label_250a98;
        }
    }
    ctx->pc = 0x250A5Cu;
    // 0x250a5c: 0x0  nop
    ctx->pc = 0x250a5cu;
    // NOP
label_250a60:
    // 0x250a60: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x250a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_250a64:
    // 0x250a64: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x250a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x250a68: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x250a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x250a6c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x250A6Cu;
    {
        const bool branch_taken_0x250a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x250A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250A6Cu;
            // 0x250a70: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a6c) {
            ctx->pc = 0x250A98u;
            goto label_250a98;
        }
    }
    ctx->pc = 0x250A74u;
    // 0x250a74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x250a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x250a78: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x250a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x250a7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250a80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250a84: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x250A84u;
    {
        const bool branch_taken_0x250a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250a84) {
            ctx->pc = 0x250A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x250A84u;
            // 0x250a88: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x250A64u;
            runtime->cooperativeGuestYield();
            goto label_250a64;
        }
    }
    ctx->pc = 0x250A8Cu;
    // 0x250a8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250a90: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x250A90u;
    {
        const bool branch_taken_0x250a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250A90u;
            // 0x250a94: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a90) {
            ctx->pc = 0x250A60u;
            runtime->cooperativeGuestYield();
            goto label_250a60;
        }
    }
    ctx->pc = 0x250A98u;
label_250a98:
    // 0x250a98: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x250a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_250a9c:
    // 0x250a9c: 0x2842000e  slti        $v0, $v0, 0xE
    ctx->pc = 0x250a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x250aa0: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x250AA0u;
    {
        const bool branch_taken_0x250aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250aa0) {
            ctx->pc = 0x250AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x250AA0u;
            // 0x250aa4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x250A30u;
            runtime->cooperativeGuestYield();
            goto label_250a30;
        }
    }
    ctx->pc = 0x250AA8u;
    // 0x250aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x250AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250AA8u;
            // 0x250aac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2509E8u: goto label_2509e8;
            case 0x250A18u: goto label_250a18;
            case 0x250A30u: goto label_250a30;
            case 0x250A60u: goto label_250a60;
            case 0x250A64u: goto label_250a64;
            case 0x250A98u: goto label_250a98;
            case 0x250A9Cu: goto label_250a9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x250AB0u;
}
