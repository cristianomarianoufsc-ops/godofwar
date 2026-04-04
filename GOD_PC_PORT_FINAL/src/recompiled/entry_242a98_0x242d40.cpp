#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_242a98
// Address: 0x242a98 - 0x242d40
void entry_242a98_0x242d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_242a98_0x242d40");
#endif

    ctx->pc = 0x242a98u;

label_242a98:
    // 0x242a98: 0x3e00008  jr          $ra
    ctx->pc = 0x242A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A98u;
            // 0x242a9c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242AA0u;
    // 0x242aa0: 0x8c4216b4  lw          $v0, 0x16B4($v0)
    ctx->pc = 0x242aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5812)));
    // 0x242aa4: 0x0  nop
    ctx->pc = 0x242aa4u;
    // NOP
    // 0x242aa8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x242aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x242aac: 0x0  nop
    ctx->pc = 0x242aacu;
    // NOP
    // 0x242ab0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x242ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x242ab4: 0x0  nop
    ctx->pc = 0x242ab4u;
    // NOP
    // 0x242ab8: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x242ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x242abc: 0x0  nop
    ctx->pc = 0x242abcu;
    // NOP
    // 0x242ac0: 0x8c8302d8  lw          $v1, 0x2D8($a0)
    ctx->pc = 0x242ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x242ac4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x242ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x242ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x242AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242AC8u;
            // 0x242acc: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242AD0u;
    // 0x242ad0: 0xac8302d8  sw          $v1, 0x2D8($a0)
    ctx->pc = 0x242ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 3));
    // 0x242ad4: 0x0  nop
    ctx->pc = 0x242ad4u;
    // NOP
    // 0x242ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242adc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x242adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x242ae0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x242ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x242ae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242ae8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242af0: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x242af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x242af4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x242af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x242af8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x242AF8u;
    {
        const bool branch_taken_0x242af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242AF8u;
            // 0x242afc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242af8) {
            ctx->pc = 0x242B1Cu;
            goto label_242b1c;
        }
    }
    ctx->pc = 0x242B00u;
    // 0x242b00: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x242b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x242b04: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x242B04u;
    {
        const bool branch_taken_0x242b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242b04) {
            ctx->pc = 0x242B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242B04u;
            // 0x242b08: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242B20u;
            goto label_242b20;
        }
    }
    ctx->pc = 0x242B0Cu;
    // 0x242b0c: 0xc090b50  jal         func_242D40
    ctx->pc = 0x242B0Cu;
    SET_GPR_U32(ctx, 31, 0x242B14u);
    ctx->pc = 0x242D40u;
    if (runtime->hasFunction(0x242D40u)) {
        auto targetFn = runtime->lookupFunction(0x242D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B14u; }
        if (ctx->pc != 0x242B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242d40_0x242ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B14u; }
        if (ctx->pc != 0x242B14u) { return; }
    }
    ctx->pc = 0x242B14u;
    // 0x242b14: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x242B14u;
    {
        const bool branch_taken_0x242b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242b14) {
            ctx->pc = 0x242B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242B14u;
            // 0x242b18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242B3Cu;
            goto label_242b3c;
        }
    }
    ctx->pc = 0x242B1Cu;
label_242b1c:
    // 0x242b1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x242b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_242b20:
    // 0x242b20: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x242b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x242b24: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x242b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x242b28: 0x40f809  jalr        $v0
    ctx->pc = 0x242B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242B30u);
        ctx->pc = 0x242B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B28u;
            // 0x242b2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242B30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242B30u; }
            if (ctx->pc != 0x242B30u) { return; }
        }
        }
    }
    ctx->pc = 0x242B30u;
    // 0x242b30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x242B30u;
    {
        const bool branch_taken_0x242b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B30u;
            // 0x242b34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b30) {
            ctx->pc = 0x242B40u;
            goto label_242b40;
        }
    }
    ctx->pc = 0x242B38u;
    // 0x242b38: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x242b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242b3c:
    // 0x242b3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x242b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_242b40:
    // 0x242b40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x242b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x242B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B4Cu;
            // 0x242b50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242B54u;
    // 0x242b54: 0x0  nop
    ctx->pc = 0x242b54u;
    // NOP
    // 0x242b58: 0x3e00008  jr          $ra
    ctx->pc = 0x242B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B58u;
            // 0x242b5c: 0x248202e0  addiu       $v0, $a0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242B60u;
    // 0x242b60: 0x3e00008  jr          $ra
    ctx->pc = 0x242B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B60u;
            // 0x242b64: 0x8c820328  lw          $v0, 0x328($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242B68u;
    // 0x242b68: 0x3e00008  jr          $ra
    ctx->pc = 0x242B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B68u;
            // 0x242b6c: 0x8c820324  lw          $v0, 0x324($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 804)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242B70u;
    // 0x242b70: 0x3e00008  jr          $ra
    ctx->pc = 0x242B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B70u;
            // 0x242b74: 0x8c820338  lw          $v0, 0x338($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242B78u;
    // 0x242b78: 0x3e00008  jr          $ra
    ctx->pc = 0x242B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B78u;
            // 0x242b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242B80u;
    // 0x242b80: 0x3e00008  jr          $ra
    ctx->pc = 0x242B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B80u;
            // 0x242b84: 0x8c82032c  lw          $v0, 0x32C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242B88u;
    // 0x242b88: 0x3e00008  jr          $ra
    ctx->pc = 0x242B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B88u;
            // 0x242b8c: 0x8c82033c  lw          $v0, 0x33C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242B90u;
    // 0x242b90: 0x8c820320  lw          $v0, 0x320($a0)
    ctx->pc = 0x242b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x242b94: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x242b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x242b98: 0x3e00008  jr          $ra
    ctx->pc = 0x242B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B98u;
            // 0x242b9c: 0xc4400084  lwc1        $f0, 0x84($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242BA0u;
    // 0x242ba0: 0x8c820320  lw          $v0, 0x320($a0)
    ctx->pc = 0x242ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x242ba4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x242ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x242ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x242BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242BA8u;
            // 0x242bac: 0xc4400238  lwc1        $f0, 0x238($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242BB0u;
    // 0x242bb0: 0x8c820320  lw          $v0, 0x320($a0)
    ctx->pc = 0x242bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x242bb4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x242bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x242bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x242BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242BB8u;
            // 0x242bbc: 0xc4400234  lwc1        $f0, 0x234($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242BC0u;
    // 0x242bc0: 0xc481028c  lwc1        $f1, 0x28C($a0)
    ctx->pc = 0x242bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242bc4: 0xc4800288  lwc1        $f0, 0x288($a0)
    ctx->pc = 0x242bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242bc8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x242bc8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x242bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x242BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242BD4u;
    // 0x242bd4: 0x0  nop
    ctx->pc = 0x242bd4u;
    // NOP
    // 0x242bd8: 0xc4810288  lwc1        $f1, 0x288($a0)
    ctx->pc = 0x242bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242bdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x242bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242be0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x242be0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242be4: 0x0  nop
    ctx->pc = 0x242be4u;
    // NOP
    // 0x242be8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x242BE8u;
    {
        const bool branch_taken_0x242be8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x242BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242BE8u;
            // 0x242bec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242be8) {
            ctx->pc = 0x242BF4u;
            goto label_242bf4;
        }
    }
    ctx->pc = 0x242BF0u;
    // 0x242bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x242bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242bf4:
    // 0x242bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x242BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242BFCu;
    // 0x242bfc: 0x0  nop
    ctx->pc = 0x242bfcu;
    // NOP
    // 0x242c00: 0x8c820320  lw          $v0, 0x320($a0)
    ctx->pc = 0x242c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x242c04: 0x3e00008  jr          $ra
    ctx->pc = 0x242C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242C04u;
            // 0x242c08: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242C0Cu;
    // 0x242c0c: 0x0  nop
    ctx->pc = 0x242c0cu;
    // NOP
    // 0x242c10: 0x8c840290  lw          $a0, 0x290($a0)
    ctx->pc = 0x242c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x242c14: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x242c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x242c18: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x242c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x242c1c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x242C1Cu;
    {
        const bool branch_taken_0x242c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242C1Cu;
            // 0x242c20: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c1c) {
            ctx->pc = 0x242C54u;
            goto label_242c54;
        }
    }
    ctx->pc = 0x242C24u;
    // 0x242c24: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x242c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x242c28: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x242c28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x242c2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x242c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x242c30: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x242c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x242c34: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x242c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x242c38: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x242c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242c3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242c40: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x242C40u;
    {
        const bool branch_taken_0x242c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x242C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242C40u;
            // 0x242c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c40) {
            ctx->pc = 0x242C4Cu;
            goto label_242c4c;
        }
    }
    ctx->pc = 0x242C48u;
    // 0x242c48: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x242c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_242c4c:
    // 0x242c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x242C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242C4Cu;
            // 0x242c50: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242C54u;
label_242c54:
    // 0x242c54: 0x3e00008  jr          $ra
    ctx->pc = 0x242C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242C54u;
            // 0x242c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242C5Cu;
    // 0x242c5c: 0x0  nop
    ctx->pc = 0x242c5cu;
    // NOP
    // 0x242c60: 0xe48c02c8  swc1        $f12, 0x2C8($a0)
    ctx->pc = 0x242c60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 712), bits); }
    // 0x242c64: 0x0  nop
    ctx->pc = 0x242c64u;
    // NOP
    // 0x242c68: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x242c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x242c6c: 0x0  nop
    ctx->pc = 0x242c6cu;
    // NOP
    // 0x242c70: 0xe48c02d0  swc1        $f12, 0x2D0($a0)
    ctx->pc = 0x242c70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
    // 0x242c74: 0x0  nop
    ctx->pc = 0x242c74u;
    // NOP
    // 0x242c78: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x242c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x242c7c: 0x0  nop
    ctx->pc = 0x242c7cu;
    // NOP
    // 0x242c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242c84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x242c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x242c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242c8c: 0x700584a9  por         $s0, $zero, $a1
    ctx->pc = 0x242c8cu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x242c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242c94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x242c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242c98: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x242C98u;
    SET_GPR_U32(ctx, 31, 0x242CA0u);
    ctx->pc = 0x242C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242C98u;
            // 0x242c9c: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    runtime->cooperativeGuestYield();
    goto label_242a98;
    ctx->pc = 0x242CA0u;
label_242ca0:
    // 0x242ca0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x242ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x242ca4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x242ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x242ca8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x242CA8u;
    {
        const bool branch_taken_0x242ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242ca8) {
            ctx->pc = 0x242CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242CA8u;
            // 0x242cac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242CFCu;
            goto label_242cfc;
        }
    }
    ctx->pc = 0x242CB0u;
    // 0x242cb0: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x242cb0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x242cb4: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x242cb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x242cb8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x242cb8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x242cbc: 0x70a310a8  pceqw       $v0, $a1, $v1
    ctx->pc = 0x242cbcu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x242cc0: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x242cc0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x242cc4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x242cc4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x242cc8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x242cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x242ccc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x242cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242cd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x242cd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x242cd4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x242CD4u;
    {
        const bool branch_taken_0x242cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242cd4) {
            ctx->pc = 0x242CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242CD4u;
            // 0x242cd8: 0x7e2500f0  sq          $a1, 0xF0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 240), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242CF8u;
            goto label_242cf8;
        }
    }
    ctx->pc = 0x242CDCu;
    // 0x242cdc: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x242cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x242ce0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x242ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x242ce4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x242ce4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x242ce8: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x242ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x242cec: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x242cecu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x242cf0: 0x7e2500f0  sq          $a1, 0xF0($s1)
    ctx->pc = 0x242cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 240), GPR_VEC(ctx, 5));
    // 0x242cf4: 0x0  nop
    ctx->pc = 0x242cf4u;
    // NOP
label_242cf8:
    // 0x242cf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x242cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242cfc:
    // 0x242cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242d04: 0x3e00008  jr          $ra
    ctx->pc = 0x242D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242D04u;
            // 0x242d08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A98u: goto label_242a98;
            case 0x242B1Cu: goto label_242b1c;
            case 0x242B20u: goto label_242b20;
            case 0x242B3Cu: goto label_242b3c;
            case 0x242B40u: goto label_242b40;
            case 0x242BF4u: goto label_242bf4;
            case 0x242C4Cu: goto label_242c4c;
            case 0x242C54u: goto label_242c54;
            case 0x242CA0u: goto label_242ca0;
            case 0x242CF8u: goto label_242cf8;
            case 0x242CFCu: goto label_242cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242D0Cu;
    // 0x242d0c: 0x0  nop
    ctx->pc = 0x242d0cu;
    // NOP
    // 0x242d10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x242d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x242d14: 0x0  nop
    ctx->pc = 0x242d14u;
    // NOP
    // 0x242d18: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242d1c: 0x0  nop
    ctx->pc = 0x242d1cu;
    // NOP
    // 0x242d20: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242d24: 0x0  nop
    ctx->pc = 0x242d24u;
    // NOP
    // 0x242d28: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242d2c: 0x0  nop
    ctx->pc = 0x242d2cu;
    // NOP
    // 0x242d30: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242d34: 0x0  nop
    ctx->pc = 0x242d34u;
    // NOP
    // 0x242d38: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242d3c: 0x0  nop
    ctx->pc = 0x242d3cu;
    // NOP
}
