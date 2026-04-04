#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_284dc8
// Address: 0x284dc8 - 0x284ee0
void entry_284dc8_0x284ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_284dc8_0x284ee0");
#endif

    ctx->pc = 0x284dc8u;

    // 0x284dc8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x284dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x284dcc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x284dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x284dd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284DD0u;
    {
        const bool branch_taken_0x284dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284dd0) {
            ctx->pc = 0x284DE8u;
            goto label_284de8;
        }
    }
    ctx->pc = 0x284DD8u;
    // 0x284dd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x284dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x284ddc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x284ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x284de0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284DE0u;
    {
        const bool branch_taken_0x284de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284DE0u;
            // 0x284de4: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284de0) {
            ctx->pc = 0x284DF0u;
            goto label_284df0;
        }
    }
    ctx->pc = 0x284DE8u;
label_284de8:
    // 0x284de8: 0x3e00008  jr          $ra
    ctx->pc = 0x284DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284DE8u;
            // 0x284dec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284DE8u: goto label_284de8;
            case 0x284DF0u: goto label_284df0;
            case 0x284E10u: goto label_284e10;
            case 0x284E20u: goto label_284e20;
            case 0x284E3Cu: goto label_284e3c;
            case 0x284E54u: goto label_284e54;
            case 0x284E64u: goto label_284e64;
            case 0x284E80u: goto label_284e80;
            case 0x284E8Cu: goto label_284e8c;
            case 0x284EACu: goto label_284eac;
            case 0x284EB8u: goto label_284eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284DF0u;
label_284df0:
    // 0x284df0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x284DF0u;
    {
        const bool branch_taken_0x284df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284DF0u;
            // 0x284df4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284df0) {
            ctx->pc = 0x284E20u;
            goto label_284e20;
        }
    }
    ctx->pc = 0x284DF8u;
    // 0x284df8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x284DF8u;
    {
        const bool branch_taken_0x284df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284df8) {
            ctx->pc = 0x284DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284DF8u;
            // 0x284dfc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284E10u;
            goto label_284e10;
        }
    }
    ctx->pc = 0x284E00u;
    // 0x284e00: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x284e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x284e04: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x284e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x284e08: 0x3e00008  jr          $ra
    ctx->pc = 0x284E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284E08u;
            // 0x284e0c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284DE8u: goto label_284de8;
            case 0x284DF0u: goto label_284df0;
            case 0x284E10u: goto label_284e10;
            case 0x284E20u: goto label_284e20;
            case 0x284E3Cu: goto label_284e3c;
            case 0x284E54u: goto label_284e54;
            case 0x284E64u: goto label_284e64;
            case 0x284E80u: goto label_284e80;
            case 0x284E8Cu: goto label_284e8c;
            case 0x284EACu: goto label_284eac;
            case 0x284EB8u: goto label_284eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284E10u;
label_284e10:
    // 0x284e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x284e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284e14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x284e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284e18: 0x3e00008  jr          $ra
    ctx->pc = 0x284E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284E18u;
            // 0x284e1c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284DE8u: goto label_284de8;
            case 0x284DF0u: goto label_284df0;
            case 0x284E10u: goto label_284e10;
            case 0x284E20u: goto label_284e20;
            case 0x284E3Cu: goto label_284e3c;
            case 0x284E54u: goto label_284e54;
            case 0x284E64u: goto label_284e64;
            case 0x284E80u: goto label_284e80;
            case 0x284E8Cu: goto label_284e8c;
            case 0x284EACu: goto label_284eac;
            case 0x284EB8u: goto label_284eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284E20u;
label_284e20:
    // 0x284e20: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x284E20u;
    {
        const bool branch_taken_0x284e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284e20) {
            ctx->pc = 0x284E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284E20u;
            // 0x284e24: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x284E3Cu;
            goto label_284e3c;
        }
    }
    ctx->pc = 0x284E28u;
    // 0x284e28: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x284e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x284e2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x284e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284e34: 0x3e00008  jr          $ra
    ctx->pc = 0x284E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284E34u;
            // 0x284e38: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284DE8u: goto label_284de8;
            case 0x284DF0u: goto label_284df0;
            case 0x284E10u: goto label_284e10;
            case 0x284E20u: goto label_284e20;
            case 0x284E3Cu: goto label_284e3c;
            case 0x284E54u: goto label_284e54;
            case 0x284E64u: goto label_284e64;
            case 0x284E80u: goto label_284e80;
            case 0x284E8Cu: goto label_284e8c;
            case 0x284EACu: goto label_284eac;
            case 0x284EB8u: goto label_284eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284E3Cu;
label_284e3c:
    // 0x284e3c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x284E3Cu;
    {
        const bool branch_taken_0x284e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284E3Cu;
            // 0x284e40: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e3c) {
            ctx->pc = 0x284E64u;
            goto label_284e64;
        }
    }
    ctx->pc = 0x284E44u;
    // 0x284e44: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x284E44u;
    {
        const bool branch_taken_0x284e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284e44) {
            ctx->pc = 0x284E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284E44u;
            // 0x284e48: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284E54u;
            goto label_284e54;
        }
    }
    ctx->pc = 0x284E4Cu;
    // 0x284e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x284E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284E4Cu;
            // 0x284e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284DE8u: goto label_284de8;
            case 0x284DF0u: goto label_284df0;
            case 0x284E10u: goto label_284e10;
            case 0x284E20u: goto label_284e20;
            case 0x284E3Cu: goto label_284e3c;
            case 0x284E54u: goto label_284e54;
            case 0x284E64u: goto label_284e64;
            case 0x284E80u: goto label_284e80;
            case 0x284E8Cu: goto label_284e8c;
            case 0x284EACu: goto label_284eac;
            case 0x284EB8u: goto label_284eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284E54u;
label_284e54:
    // 0x284e54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x284e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284e58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x284e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x284E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284E5Cu;
            // 0x284e60: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284DE8u: goto label_284de8;
            case 0x284DF0u: goto label_284df0;
            case 0x284E10u: goto label_284e10;
            case 0x284E20u: goto label_284e20;
            case 0x284E3Cu: goto label_284e3c;
            case 0x284E54u: goto label_284e54;
            case 0x284E64u: goto label_284e64;
            case 0x284E80u: goto label_284e80;
            case 0x284E8Cu: goto label_284e8c;
            case 0x284EACu: goto label_284eac;
            case 0x284EB8u: goto label_284eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284E64u;
label_284e64:
    // 0x284e64: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x284E64u;
    {
        const bool branch_taken_0x284e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284e64) {
            ctx->pc = 0x284E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284E64u;
            // 0x284e68: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284E10u;
            runtime->cooperativeGuestYield();
            goto label_284e10;
        }
    }
    ctx->pc = 0x284E6Cu;
    // 0x284e6c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x284e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x284e70: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x284e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x284e74: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284E74u;
    {
        const bool branch_taken_0x284e74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x284e74) {
            ctx->pc = 0x284E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284E74u;
            // 0x284e78: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284E8Cu;
            goto label_284e8c;
        }
    }
    ctx->pc = 0x284E7Cu;
    // 0x284e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x284e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284e80:
    // 0x284e80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x284e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284e84: 0x3e00008  jr          $ra
    ctx->pc = 0x284E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284E84u;
            // 0x284e88: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284DE8u: goto label_284de8;
            case 0x284DF0u: goto label_284df0;
            case 0x284E10u: goto label_284e10;
            case 0x284E20u: goto label_284e20;
            case 0x284E3Cu: goto label_284e3c;
            case 0x284E54u: goto label_284e54;
            case 0x284E64u: goto label_284e64;
            case 0x284E80u: goto label_284e80;
            case 0x284E8Cu: goto label_284e8c;
            case 0x284EACu: goto label_284eac;
            case 0x284EB8u: goto label_284eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284E8Cu;
label_284e8c:
    // 0x284e8c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x284e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x284e90: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x284e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x284e94: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x284E94u;
    {
        const bool branch_taken_0x284e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284e94) {
            ctx->pc = 0x284E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284E94u;
            // 0x284e98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284E80u;
            runtime->cooperativeGuestYield();
            goto label_284e80;
        }
    }
    ctx->pc = 0x284E9Cu;
    // 0x284e9c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x284e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x284ea0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x284EA0u;
    {
        const bool branch_taken_0x284ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284ea0) {
            ctx->pc = 0x284EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284EA0u;
            // 0x284ea4: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284EB8u;
            goto label_284eb8;
        }
    }
    ctx->pc = 0x284EA8u;
    // 0x284ea8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x284ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_284eac:
    // 0x284eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x284EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284EB0u;
            // 0x284eb4: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284DE8u: goto label_284de8;
            case 0x284DF0u: goto label_284df0;
            case 0x284E10u: goto label_284e10;
            case 0x284E20u: goto label_284e20;
            case 0x284E3Cu: goto label_284e3c;
            case 0x284E54u: goto label_284e54;
            case 0x284E64u: goto label_284e64;
            case 0x284E80u: goto label_284e80;
            case 0x284E8Cu: goto label_284e8c;
            case 0x284EACu: goto label_284eac;
            case 0x284EB8u: goto label_284eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284EB8u;
label_284eb8:
    // 0x284eb8: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x284eb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x284ebc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x284ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x284ec0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x284EC0u;
    {
        const bool branch_taken_0x284ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284ec0) {
            ctx->pc = 0x284EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284EC0u;
            // 0x284ec4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284E80u;
            runtime->cooperativeGuestYield();
            goto label_284e80;
        }
    }
    ctx->pc = 0x284EC8u;
    // 0x284ec8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x284ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x284ecc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x284ECCu;
    {
        const bool branch_taken_0x284ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284ECCu;
            // 0x284ed0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ecc) {
            ctx->pc = 0x284EACu;
            runtime->cooperativeGuestYield();
            goto label_284eac;
        }
    }
    ctx->pc = 0x284ED4u;
    // 0x284ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x284ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284ED4u;
            // 0x284ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284DE8u: goto label_284de8;
            case 0x284DF0u: goto label_284df0;
            case 0x284E10u: goto label_284e10;
            case 0x284E20u: goto label_284e20;
            case 0x284E3Cu: goto label_284e3c;
            case 0x284E54u: goto label_284e54;
            case 0x284E64u: goto label_284e64;
            case 0x284E80u: goto label_284e80;
            case 0x284E8Cu: goto label_284e8c;
            case 0x284EACu: goto label_284eac;
            case 0x284EB8u: goto label_284eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284EDCu;
    // 0x284edc: 0x0  nop
    ctx->pc = 0x284edcu;
    // NOP
}
