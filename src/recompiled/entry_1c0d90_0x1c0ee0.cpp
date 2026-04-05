#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1c0d90
// Address: 0x1c0d90 - 0x1c0ee0
void entry_1c0d90_0x1c0ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1c0d90_0x1c0ee0");
#endif

    ctx->pc = 0x1c0d90u;

    // 0x1c0d90: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C0D90u;
    {
        const bool branch_taken_0x1c0d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D90u;
            // 0x1c0d94: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d90) {
            ctx->pc = 0x1C0E38u;
            goto label_1c0e38;
        }
    }
    ctx->pc = 0x1C0D98u;
    // 0x1c0d98: 0x8c830374  lw          $v1, 0x374($a0)
    ctx->pc = 0x1c0d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x1c0d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0da0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C0DA0u;
    {
        const bool branch_taken_0x1c0da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DA0u;
            // 0x1c0da4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0da0) {
            ctx->pc = 0x1C0DE0u;
            goto label_1c0de0;
        }
    }
    ctx->pc = 0x1C0DA8u;
    // 0x1c0da8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0DA8u;
    {
        const bool branch_taken_0x1c0da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DA8u;
            // 0x1c0dac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0da8) {
            ctx->pc = 0x1C0DC0u;
            goto label_1c0dc0;
        }
    }
    ctx->pc = 0x1C0DB0u;
    // 0x1c0db0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0DB0u;
    {
        const bool branch_taken_0x1c0db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DB0u;
            // 0x1c0db4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0db0) {
            ctx->pc = 0x1C0DD8u;
            goto label_1c0dd8;
        }
    }
    ctx->pc = 0x1C0DB8u;
    // 0x1c0db8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1C0DB8u;
    {
        const bool branch_taken_0x1c0db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0db8) {
            ctx->pc = 0x1C0ED0u;
            goto label_1c0ed0;
        }
    }
    ctx->pc = 0x1C0DC0u;
label_1c0dc0:
    // 0x1c0dc0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0DC0u;
    {
        const bool branch_taken_0x1c0dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DC0u;
            // 0x1c0dc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0dc0) {
            ctx->pc = 0x1C0DE8u;
            goto label_1c0de8;
        }
    }
    ctx->pc = 0x1C0DC8u;
    // 0x1c0dc8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C0DC8u;
    {
        const bool branch_taken_0x1c0dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DC8u;
            // 0x1c0dcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0dc8) {
            ctx->pc = 0x1C0E30u;
            goto label_1c0e30;
        }
    }
    ctx->pc = 0x1C0DD0u;
    // 0x1c0dd0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1C0DD0u;
    {
        const bool branch_taken_0x1c0dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0dd0) {
            ctx->pc = 0x1C0ED0u;
            goto label_1c0ed0;
        }
    }
    ctx->pc = 0x1C0DD8u;
label_1c0dd8:
    // 0x1c0dd8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1C0DD8u;
    {
        const bool branch_taken_0x1c0dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DD8u;
            // 0x1c0ddc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0dd8) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0DE0u;
label_1c0de0:
    // 0x1c0de0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1C0DE0u;
    {
        const bool branch_taken_0x1c0de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DE0u;
            // 0x1c0de4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0de0) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0DE8u;
label_1c0de8:
    // 0x1c0de8: 0x8c830378  lw          $v1, 0x378($a0)
    ctx->pc = 0x1c0de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 888)));
    // 0x1c0dec: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1c0decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c0df0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C0DF0u;
    {
        const bool branch_taken_0x1c0df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DF0u;
            // 0x1c0df4: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0df0) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0DF8u;
    // 0x1c0df8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c0dfc: 0x24425df0  addiu       $v0, $v0, 0x5DF0
    ctx->pc = 0x1c0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24048));
    // 0x1c0e00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0e04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0e08: 0x400008  jr          $v0
    ctx->pc = 0x1C0E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0E10u: goto label_1c0e10;
            case 0x1C0E18u: goto label_1c0e18;
            case 0x1C0E20u: goto label_1c0e20;
            case 0x1C0E28u: goto label_1c0e28;
            case 0x1C0E78u: goto label_1c0e78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0E10u;
label_1c0e10:
    // 0x1c0e10: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C0E10u;
    {
        const bool branch_taken_0x1c0e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E10u;
            // 0x1c0e14: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e10) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0E18u;
label_1c0e18:
    // 0x1c0e18: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C0E18u;
    {
        const bool branch_taken_0x1c0e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E18u;
            // 0x1c0e1c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e18) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0E20u;
label_1c0e20:
    // 0x1c0e20: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1C0E20u;
    {
        const bool branch_taken_0x1c0e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E20u;
            // 0x1c0e24: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e20) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0E28u;
label_1c0e28:
    // 0x1c0e28: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1C0E28u;
    {
        const bool branch_taken_0x1c0e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E28u;
            // 0x1c0e2c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e28) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0E30u;
label_1c0e30:
    // 0x1c0e30: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C0E30u;
    {
        const bool branch_taken_0x1c0e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E30u;
            // 0x1c0e34: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e30) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0E38u;
label_1c0e38:
    // 0x1c0e38: 0x8c830374  lw          $v1, 0x374($a0)
    ctx->pc = 0x1c0e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x1c0e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0e40: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C0E40u;
    {
        const bool branch_taken_0x1c0e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E40u;
            // 0x1c0e44: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e40) {
            ctx->pc = 0x1C0E78u;
            goto label_1c0e78;
        }
    }
    ctx->pc = 0x1C0E48u;
    // 0x1c0e48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0E48u;
    {
        const bool branch_taken_0x1c0e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E48u;
            // 0x1c0e4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e48) {
            ctx->pc = 0x1C0E60u;
            goto label_1c0e60;
        }
    }
    ctx->pc = 0x1C0E50u;
    // 0x1c0e50: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0E50u;
    {
        const bool branch_taken_0x1c0e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E50u;
            // 0x1c0e54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e50) {
            ctx->pc = 0x1C0E70u;
            goto label_1c0e70;
        }
    }
    ctx->pc = 0x1C0E58u;
    // 0x1c0e58: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C0E58u;
    {
        const bool branch_taken_0x1c0e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e58) {
            ctx->pc = 0x1C0ED0u;
            goto label_1c0ed0;
        }
    }
    ctx->pc = 0x1C0E60u;
label_1c0e60:
    // 0x1c0e60: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0E60u;
    {
        const bool branch_taken_0x1c0e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E60u;
            // 0x1c0e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e60) {
            ctx->pc = 0x1C0E80u;
            goto label_1c0e80;
        }
    }
    ctx->pc = 0x1C0E68u;
    // 0x1c0e68: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C0E68u;
    {
        const bool branch_taken_0x1c0e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e68) {
            ctx->pc = 0x1C0ED0u;
            goto label_1c0ed0;
        }
    }
    ctx->pc = 0x1C0E70u;
label_1c0e70:
    // 0x1c0e70: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C0E70u;
    {
        const bool branch_taken_0x1c0e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E70u;
            // 0x1c0e74: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e70) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0E78u;
label_1c0e78:
    // 0x1c0e78: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C0E78u;
    {
        const bool branch_taken_0x1c0e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E78u;
            // 0x1c0e7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e78) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0E80u;
label_1c0e80:
    // 0x1c0e80: 0x8c830378  lw          $v1, 0x378($a0)
    ctx->pc = 0x1c0e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 888)));
    // 0x1c0e84: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1c0e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c0e88: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0E88u;
    {
        const bool branch_taken_0x1c0e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E88u;
            // 0x1c0e8c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e88) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0E90u;
    // 0x1c0e90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c0e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c0e94: 0x24425e10  addiu       $v0, $v0, 0x5E10
    ctx->pc = 0x1c0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24080));
    // 0x1c0e98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c0e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0e9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0ea0: 0x400008  jr          $v0
    ctx->pc = 0x1C0EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0EA8u: goto label_1c0ea8;
            case 0x1C0EB0u: goto label_1c0eb0;
            case 0x1C0EB8u: goto label_1c0eb8;
            case 0x1C0EC0u: goto label_1c0ec0;
            case 0x1C0EC8u: goto label_1c0ec8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0EA8u;
label_1c0ea8:
    // 0x1c0ea8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0EA8u;
    {
        const bool branch_taken_0x1c0ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0EA8u;
            // 0x1c0eac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ea8) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0EB0u;
label_1c0eb0:
    // 0x1c0eb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0EB0u;
    {
        const bool branch_taken_0x1c0eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0EB0u;
            // 0x1c0eb4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0eb0) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0EB8u;
label_1c0eb8:
    // 0x1c0eb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0EB8u;
    {
        const bool branch_taken_0x1c0eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0EB8u;
            // 0x1c0ebc: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0eb8) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0EC0u;
label_1c0ec0:
    // 0x1c0ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0EC0u;
    {
        const bool branch_taken_0x1c0ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0EC0u;
            // 0x1c0ec4: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ec0) {
            ctx->pc = 0x1C0ECCu;
            goto label_1c0ecc;
        }
    }
    ctx->pc = 0x1C0EC8u;
label_1c0ec8:
    // 0x1c0ec8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c0ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1c0ecc:
    // 0x1c0ecc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c0ed0:
    // 0x1c0ed0: 0x54c20001  bnel        $a2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C0ED0u;
    {
        const bool branch_taken_0x1c0ed0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0ed0) {
            ctx->pc = 0x1C0ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0ED0u;
            // 0x1c0ed4: 0xac860380  sw          $a2, 0x380($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0ED8u;
            goto label_1c0ed8;
        }
    }
    ctx->pc = 0x1C0ED8u;
label_1c0ed8:
    // 0x1c0ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0DC0u: goto label_1c0dc0;
            case 0x1C0DD8u: goto label_1c0dd8;
            case 0x1C0DE0u: goto label_1c0de0;
            case 0x1C0DE8u: goto label_1c0de8;
            case 0x1C0E10u: goto label_1c0e10;
            case 0x1C0E18u: goto label_1c0e18;
            case 0x1C0E20u: goto label_1c0e20;
            case 0x1C0E28u: goto label_1c0e28;
            case 0x1C0E30u: goto label_1c0e30;
            case 0x1C0E38u: goto label_1c0e38;
            case 0x1C0E60u: goto label_1c0e60;
            case 0x1C0E70u: goto label_1c0e70;
            case 0x1C0E78u: goto label_1c0e78;
            case 0x1C0E80u: goto label_1c0e80;
            case 0x1C0EA8u: goto label_1c0ea8;
            case 0x1C0EB0u: goto label_1c0eb0;
            case 0x1C0EB8u: goto label_1c0eb8;
            case 0x1C0EC0u: goto label_1c0ec0;
            case 0x1C0EC8u: goto label_1c0ec8;
            case 0x1C0ECCu: goto label_1c0ecc;
            case 0x1C0ED0u: goto label_1c0ed0;
            case 0x1C0ED8u: goto label_1c0ed8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0EE0u;
}
