#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14d9a0
// Address: 0x14d9a0 - 0x14da78
void entry_14d9a0_0x14da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14d9a0_0x14da78");
#endif

    ctx->pc = 0x14d9a0u;

    // 0x14d9a0: 0x308b001f  andi        $t3, $a0, 0x1F
    ctx->pc = 0x14d9a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x14d9a4: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x14d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x14d9a8: 0x11600020  beqz        $t3, . + 4 + (0x20 << 2)
    ctx->pc = 0x14D9A8u;
    {
        const bool branch_taken_0x14d9a8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9A8u;
            // 0x14d9ac: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9a8) {
            ctx->pc = 0x14DA2Cu;
            goto label_14da2c;
        }
    }
    ctx->pc = 0x14D9B0u;
    // 0x14d9b0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14d9b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14d9b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9b8: 0x1180001a  beqz        $t4, . + 4 + (0x1A << 2)
    ctx->pc = 0x14D9B8u;
    {
        const bool branch_taken_0x14d9b8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9B8u;
            // 0x14d9bc: 0x4b6823  subu        $t5, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9b8) {
            ctx->pc = 0x14DA24u;
            goto label_14da24;
        }
    }
    ctx->pc = 0x14D9C0u;
    // 0x14d9c0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x14d9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9c4: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x14d9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d9c8: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x14d9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d9cc: 0x0  nop
    ctx->pc = 0x14d9ccu;
    // NOP
label_14d9d0:
    // 0x14d9d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14d9d4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x14d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14d9d8: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x14d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x14d9dc: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x14d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x14d9e0: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x14d9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x14d9e4: 0x1642004  sllv        $a0, $a0, $t3
    ctx->pc = 0x14d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 11) & 0x1F));
    // 0x14d9e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14d9ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14d9f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x14d9f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x14d9f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14d9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14d9f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x14d9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14d9fc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x14d9fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x14da00: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x14da00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x14da04: 0x14c202b  sltu        $a0, $t2, $t4
    ctx->pc = 0x14da04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x14da08: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14da0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14da10: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x14da10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x14da14: 0x1a21006  srlv        $v0, $v0, $t5
    ctx->pc = 0x14da14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x14da18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14da18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14da1c: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x14DA1Cu;
    {
        const bool branch_taken_0x14da1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA1Cu;
            // 0x14da20: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da1c) {
            ctx->pc = 0x14D9D0u;
            runtime->cooperativeGuestYield();
            goto label_14d9d0;
        }
    }
    ctx->pc = 0x14DA24u;
label_14da24:
    // 0x14da24: 0x3e00008  jr          $ra
    ctx->pc = 0x14DA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D9D0u: goto label_14d9d0;
            case 0x14DA24u: goto label_14da24;
            case 0x14DA2Cu: goto label_14da2c;
            case 0x14DA40u: goto label_14da40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DA2Cu;
label_14da2c:
    // 0x14da2c: 0x1180fffd  beqz        $t4, . + 4 + (-0x3 << 2)
    ctx->pc = 0x14DA2Cu;
    {
        const bool branch_taken_0x14da2c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA2Cu;
            // 0x14da30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da2c) {
            ctx->pc = 0x14DA24u;
            runtime->cooperativeGuestYield();
            goto label_14da24;
        }
    }
    ctx->pc = 0x14DA34u;
    // 0x14da34: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x14da34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da38: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x14da38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14da3c: 0x0  nop
    ctx->pc = 0x14da3cu;
    // NOP
label_14da40:
    // 0x14da40: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14da40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14da44: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x14da44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14da48: 0x24631910  addiu       $v1, $v1, 0x1910
    ctx->pc = 0x14da48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6416));
    // 0x14da4c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14da4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14da50: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14da50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14da54: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x14da54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x14da58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14da5c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x14da5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14da60: 0x10c202b  sltu        $a0, $t0, $t4
    ctx->pc = 0x14da60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x14da64: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x14da64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14da68: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DA68u;
    {
        const bool branch_taken_0x14da68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA68u;
            // 0x14da6c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da68) {
            ctx->pc = 0x14DA40u;
            runtime->cooperativeGuestYield();
            goto label_14da40;
        }
    }
    ctx->pc = 0x14DA70u;
    // 0x14da70: 0x3e00008  jr          $ra
    ctx->pc = 0x14DA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D9D0u: goto label_14d9d0;
            case 0x14DA24u: goto label_14da24;
            case 0x14DA2Cu: goto label_14da2c;
            case 0x14DA40u: goto label_14da40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DA78u;
}
