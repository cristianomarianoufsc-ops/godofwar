#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E9B8
// Address: 0x17e9b8 - 0x17eca8
void sub_0017E9B8_0x17e9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E9B8_0x17e9b8");
#endif

    ctx->pc = 0x17e9b8u;

    // 0x17e9b8: 0x3c07002b  lui         $a3, 0x2B
    ctx->pc = 0x17e9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43 << 16));
    // 0x17e9bc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e9bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e9c0: 0x8ce22cb0  lw          $v0, 0x2CB0($a3)
    ctx->pc = 0x17e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11440)));
    // 0x17e9c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x17e9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e9c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17e9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17e9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17e9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17e9d4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x17e9d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17e9d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e9dc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17e9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17e9e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E9E0u;
    {
        const bool branch_taken_0x17e9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9E0u;
            // 0x17e9e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9e0) {
            ctx->pc = 0x17E9F0u;
            goto label_17e9f0;
        }
    }
    ctx->pc = 0x17E9E8u;
    // 0x17e9e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17E9E8u;
    {
        const bool branch_taken_0x17e9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9E8u;
            // 0x17e9ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9e8) {
            ctx->pc = 0x17EA1Cu;
            goto label_17ea1c;
        }
    }
    ctx->pc = 0x17E9F0u;
label_17e9f0:
    // 0x17e9f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17e9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17e9f4:
    // 0x17e9f4: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x17e9f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17e9f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E9F8u;
    {
        const bool branch_taken_0x17e9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9F8u;
            // 0x17e9fc: 0x24e22cb0  addiu       $v0, $a3, 0x2CB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 11440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9f8) {
            ctx->pc = 0x17EA1Cu;
            goto label_17ea1c;
        }
    }
    ctx->pc = 0x17EA00u;
    // 0x17ea00: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17ea04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ea08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ea0c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x17ea0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17ea10: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17EA10u;
    {
        const bool branch_taken_0x17ea10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ea10) {
            ctx->pc = 0x17EA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA10u;
            // 0x17ea14: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E9F4u;
            runtime->cooperativeGuestYield();
            goto label_17e9f4;
        }
    }
    ctx->pc = 0x17EA18u;
    // 0x17ea18: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17ea18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17ea1c:
    // 0x17ea1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ea20: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EA20u;
    {
        const bool branch_taken_0x17ea20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x17EA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA20u;
            // 0x17ea24: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea20) {
            ctx->pc = 0x17EA30u;
            goto label_17ea30;
        }
    }
    ctx->pc = 0x17EA28u;
    // 0x17ea28: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x17EA28u;
    {
        const bool branch_taken_0x17ea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA28u;
            // 0x17ea2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea28) {
            ctx->pc = 0x17EAB0u;
            goto label_17eab0;
        }
    }
    ctx->pc = 0x17EA30u;
label_17ea30:
    // 0x17ea30: 0x69080  sll         $s2, $a2, 2
    ctx->pc = 0x17ea30u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17ea34: 0x2662c750  addiu       $v0, $s3, -0x38B0
    ctx->pc = 0x17ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952784));
    // 0x17ea38: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17ea3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ea40: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17EA40u;
    {
        const bool branch_taken_0x17ea40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA40u;
            // 0x17ea44: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea40) {
            ctx->pc = 0x17EAA4u;
            goto label_17eaa4;
        }
    }
    ctx->pc = 0x17EA48u;
    // 0x17ea48: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x17ea48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17ea4c: 0x0  nop
    ctx->pc = 0x17ea4cu;
    // NOP
label_17ea50:
    // 0x17ea50: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x17ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x17ea54: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x17ea54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17ea58: 0x24422ce0  addiu       $v0, $v0, 0x2CE0
    ctx->pc = 0x17ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11488));
    // 0x17ea5c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x17ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x17ea60: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x17ea60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17ea64: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x17ea64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17ea68: 0x24632cb0  addiu       $v1, $v1, 0x2CB0
    ctx->pc = 0x17ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11440));
    // 0x17ea6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x17ea70: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x17ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x17ea74: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x17ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x17ea78: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x17ea78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ea7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17ea7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea80: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x17ea80u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17ea84: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x17ea84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17ea88: 0xc04f644  jal         func_13D910
    ctx->pc = 0x17EA88u;
    SET_GPR_U32(ctx, 31, 0x17EA90u);
    ctx->pc = 0x17EA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA88u;
            // 0x17ea8c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA90u; }
        if (ctx->pc != 0x17EA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA90u; }
        if (ctx->pc != 0x17EA90u) { return; }
    }
    ctx->pc = 0x17EA90u;
    // 0x17ea90: 0x2663c750  addiu       $v1, $s3, -0x38B0
    ctx->pc = 0x17ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952784));
    // 0x17ea94: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x17ea94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x17ea98: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17EA98u;
    {
        const bool branch_taken_0x17ea98 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17EA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA98u;
            // 0x17ea9c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea98) {
            ctx->pc = 0x17EA50u;
            runtime->cooperativeGuestYield();
            goto label_17ea50;
        }
    }
    ctx->pc = 0x17EAA0u;
    // 0x17eaa0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_17eaa4:
    // 0x17eaa4: 0x2442c750  addiu       $v0, $v0, -0x38B0
    ctx->pc = 0x17eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952784));
    // 0x17eaa8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17eaac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17eab0:
    // 0x17eab0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17eab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17eab4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17eab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17eab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17eab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eabc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17eabcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17eac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eac4: 0x3e00008  jr          $ra
    ctx->pc = 0x17EAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EAC4u;
            // 0x17eac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E9F0u: goto label_17e9f0;
            case 0x17E9F4u: goto label_17e9f4;
            case 0x17EA1Cu: goto label_17ea1c;
            case 0x17EA30u: goto label_17ea30;
            case 0x17EA50u: goto label_17ea50;
            case 0x17EAA4u: goto label_17eaa4;
            case 0x17EAB0u: goto label_17eab0;
            case 0x17EB00u: goto label_17eb00;
            case 0x17EB80u: goto label_17eb80;
            case 0x17EC70u: goto label_17ec70;
            case 0x17EC88u: goto label_17ec88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EACCu;
    // 0x17eacc: 0x0  nop
    ctx->pc = 0x17eaccu;
    // NOP
    // 0x17ead0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ead4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17ead4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17ead8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17eadc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17eadcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eae0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17eae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17eae8: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x17eae8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17eaec: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x17eaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x17eaf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EAF0u;
    {
        const bool branch_taken_0x17eaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EAF0u;
            // 0x17eaf4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eaf0) {
            ctx->pc = 0x17EB00u;
            goto label_17eb00;
        }
    }
    ctx->pc = 0x17EAF8u;
    // 0x17eaf8: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x17eaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x17eafc: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x17eafcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_17eb00:
    // 0x17eb00: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x17eb00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17eb04: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x17EB04u;
    SET_GPR_U32(ctx, 31, 0x17EB0Cu);
    ctx->pc = 0x17EB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB04u;
            // 0x17eb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB0Cu; }
        if (ctx->pc != 0x17EB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB0Cu; }
        if (ctx->pc != 0x17EB0Cu) { return; }
    }
    ctx->pc = 0x17EB0Cu;
    // 0x17eb0c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x17eb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17eb10: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x17eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x17eb14: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x17eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17eb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17eb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb1c: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x17eb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17eb20: 0xc05ffc0  jal         func_17FF00
    ctx->pc = 0x17EB20u;
    SET_GPR_U32(ctx, 31, 0x17EB28u);
    ctx->pc = 0x17EB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB20u;
            // 0x17eb24: 0xe23823  subu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FF00u;
    if (runtime->hasFunction(0x17FF00u)) {
        auto targetFn = runtime->lookupFunction(0x17FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB28u; }
        if (ctx->pc != 0x17EB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FF00_0x17ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB28u; }
        if (ctx->pc != 0x17EB28u) { return; }
    }
    ctx->pc = 0x17EB28u;
    // 0x17eb28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17eb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17eb2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17eb2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eb30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17eb30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eb34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17eb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eb38: 0x3e00008  jr          $ra
    ctx->pc = 0x17EB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB38u;
            // 0x17eb3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E9F0u: goto label_17e9f0;
            case 0x17E9F4u: goto label_17e9f4;
            case 0x17EA1Cu: goto label_17ea1c;
            case 0x17EA30u: goto label_17ea30;
            case 0x17EA50u: goto label_17ea50;
            case 0x17EAA4u: goto label_17eaa4;
            case 0x17EAB0u: goto label_17eab0;
            case 0x17EB00u: goto label_17eb00;
            case 0x17EB80u: goto label_17eb80;
            case 0x17EC70u: goto label_17ec70;
            case 0x17EC88u: goto label_17ec88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EB40u;
    // 0x17eb40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17eb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17eb44: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x17eb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x17eb48: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x17eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x17eb4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17eb4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb50: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x17eb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x17eb54: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x17eb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x17eb58: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17eb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17eb5c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x17eb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x17eb60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17eb64: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x17eb64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17eb68: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x17eb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x17eb6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EB6Cu;
    {
        const bool branch_taken_0x17eb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB6Cu;
            // 0x17eb70: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb6c) {
            ctx->pc = 0x17EB80u;
            goto label_17eb80;
        }
    }
    ctx->pc = 0x17EB74u;
    // 0x17eb74: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x17eb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x17eb78: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x17eb78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x17eb7c: 0x0  nop
    ctx->pc = 0x17eb7cu;
    // NOP
label_17eb80:
    // 0x17eb80: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17eb84: 0x3c02fedc  lui         $v0, 0xFEDC
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65244 << 16));
    // 0x17eb88: 0x3442ba98  ori         $v0, $v0, 0xBA98
    ctx->pc = 0x17eb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47768);
    // 0x17eb8c: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x17eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x17eb90: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x17eb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x17eb94: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x17eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17eb98: 0x244180b  movn        $v1, $s2, $a0
    ctx->pc = 0x17eb98u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x17eb9c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x17eb9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17eba0: 0x14450039  bne         $v0, $a1, . + 4 + (0x39 << 2)
    ctx->pc = 0x17EBA0u;
    {
        const bool branch_taken_0x17eba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17EBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBA0u;
            // 0x17eba4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eba0) {
            ctx->pc = 0x17EC88u;
            goto label_17ec88;
        }
    }
    ctx->pc = 0x17EBA8u;
    // 0x17eba8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17eba8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17ebac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17ebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebb0: 0x8e05c740  lw          $a1, -0x38C0($s0)
    ctx->pc = 0x17ebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952768)));
    // 0x17ebb4: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x17ebb4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x17ebb8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x17ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x17ebbc: 0x26340008  addiu       $s4, $s1, 0x8
    ctx->pc = 0x17ebbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x17ebc0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x17ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x17ebc4: 0xc060342  jal         func_180D08
    ctx->pc = 0x17EBC4u;
    SET_GPR_U32(ctx, 31, 0x17EBCCu);
    ctx->pc = 0x17EBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBC4u;
            // 0x17ebc8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBCCu; }
        if (ctx->pc != 0x17EBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBCCu; }
        if (ctx->pc != 0x17EBCCu) { return; }
    }
    ctx->pc = 0x17EBCCu;
    // 0x17ebcc: 0x8e05c740  lw          $a1, -0x38C0($s0)
    ctx->pc = 0x17ebccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952768)));
    // 0x17ebd0: 0xc060336  jal         func_180CD8
    ctx->pc = 0x17EBD0u;
    SET_GPR_U32(ctx, 31, 0x17EBD8u);
    ctx->pc = 0x17EBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBD0u;
            // 0x17ebd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD8u;
    if (runtime->hasFunction(0x180CD8u)) {
        auto targetFn = runtime->lookupFunction(0x180CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBD8u; }
        if (ctx->pc != 0x17EBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD8_0x180cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBD8u; }
        if (ctx->pc != 0x17EBD8u) { return; }
    }
    ctx->pc = 0x17EBD8u;
    // 0x17ebd8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x17ebd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ebdc: 0xc05eb30  jal         func_17ACC0
    ctx->pc = 0x17EBDCu;
    SET_GPR_U32(ctx, 31, 0x17EBE4u);
    ctx->pc = 0x17EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBDCu;
            // 0x17ebe0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ACC0u;
    if (runtime->hasFunction(0x17ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x17ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBE4u; }
        if (ctx->pc != 0x17EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17acc0_0x17ace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBE4u; }
        if (ctx->pc != 0x17EBE4u) { return; }
    }
    ctx->pc = 0x17EBE4u;
    // 0x17ebe4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17ebe8: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x17ebe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17ebec: 0x2442d8a8  addiu       $v0, $v0, -0x2758
    ctx->pc = 0x17ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957224));
    // 0x17ebf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ebf4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x17ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x17ebf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17ebf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebfc: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x17ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x17ec00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17ec00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec04: 0xaea3c73c  sw          $v1, -0x38C4($s5)
    ctx->pc = 0x17ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294952764), GPR_U32(ctx, 3));
    // 0x17ec08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x17ec08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec0c: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x17ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x17ec10: 0xc060024  jal         func_180090
    ctx->pc = 0x17EC10u;
    SET_GPR_U32(ctx, 31, 0x17EC18u);
    ctx->pc = 0x17EC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC10u;
            // 0x17ec14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180090u;
    if (runtime->hasFunction(0x180090u)) {
        auto targetFn = runtime->lookupFunction(0x180090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC18u; }
        if (ctx->pc != 0x17EC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180090_0x180090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC18u; }
        if (ctx->pc != 0x17EC18u) { return; }
    }
    ctx->pc = 0x17EC18u;
    // 0x17ec18: 0x4430015  bgezl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17EC18u;
    {
        const bool branch_taken_0x17ec18 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17ec18) {
            ctx->pc = 0x17EC1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC18u;
            // 0x17ec1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EC70u;
            goto label_17ec70;
        }
    }
    ctx->pc = 0x17EC20u;
    // 0x17ec20: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ec24: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x17EC24u;
    SET_GPR_U32(ctx, 31, 0x17EC2Cu);
    ctx->pc = 0x17EC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC24u;
            // 0x17ec28: 0x24840005  addiu       $a0, $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC2Cu; }
        if (ctx->pc != 0x17EC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC2Cu; }
        if (ctx->pc != 0x17EC2Cu) { return; }
    }
    ctx->pc = 0x17EC2Cu;
    // 0x17ec2c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ec30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ec30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ec34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec38: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x17ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17ec3c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x17ec3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec40: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x17EC40u;
    SET_GPR_U32(ctx, 31, 0x17EC48u);
    ctx->pc = 0x17EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC40u;
            // 0x17ec44: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC48u; }
        if (ctx->pc != 0x17EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC48u; }
        if (ctx->pc != 0x17EC48u) { return; }
    }
    ctx->pc = 0x17EC48u;
    // 0x17ec48: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ec4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17ec50: 0xc05d656  jal         func_175958
    ctx->pc = 0x17EC50u;
    SET_GPR_U32(ctx, 31, 0x17EC58u);
    ctx->pc = 0x17EC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC50u;
            // 0x17ec54: 0xa0400004  sb          $zero, 0x4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC58u; }
        if (ctx->pc != 0x17EC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC58u; }
        if (ctx->pc != 0x17EC58u) { return; }
    }
    ctx->pc = 0x17EC58u;
    // 0x17ec58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ec58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17ec5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec60: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x17EC60u;
    SET_GPR_U32(ctx, 31, 0x17EC68u);
    ctx->pc = 0x17EC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC60u;
            // 0x17ec64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC68u; }
        if (ctx->pc != 0x17EC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC68u; }
        if (ctx->pc != 0x17EC68u) { return; }
    }
    ctx->pc = 0x17EC68u;
    // 0x17ec68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17ec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec6c: 0x0  nop
    ctx->pc = 0x17ec6cu;
    // NOP
label_17ec70:
    // 0x17ec70: 0xc05ebba  jal         func_17AEE8
    ctx->pc = 0x17EC70u;
    SET_GPR_U32(ctx, 31, 0x17EC78u);
    ctx->pc = 0x17EC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC70u;
            // 0x17ec74: 0xaea0c73c  sw          $zero, -0x38C4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294952764), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AEE8u;
    if (runtime->hasFunction(0x17AEE8u)) {
        auto targetFn = runtime->lookupFunction(0x17AEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC78u; }
        if (ctx->pc != 0x17EC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AEE8_0x17aee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC78u; }
        if (ctx->pc != 0x17EC78u) { return; }
    }
    ctx->pc = 0x17EC78u;
    // 0x17ec78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec7c: 0xc08f5f4  jal         func_23D7D0
    ctx->pc = 0x17EC7Cu;
    SET_GPR_U32(ctx, 31, 0x17EC84u);
    ctx->pc = 0x17EC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC7Cu;
            // 0x17ec80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D7D0u;
    if (runtime->hasFunction(0x23D7D0u)) {
        auto targetFn = runtime->lookupFunction(0x23D7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC84u; }
        if (ctx->pc != 0x17EC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23d7d0_0x23d800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC84u; }
        if (ctx->pc != 0x17EC84u) { return; }
    }
    ctx->pc = 0x17EC84u;
    // 0x17ec84: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x17ec84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17ec88:
    // 0x17ec88: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x17ec88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17ec8c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x17ec8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17ec90: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x17ec90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ec94: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17ec94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ec98: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x17ec98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ec9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17ec9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17eca0: 0x3e00008  jr          $ra
    ctx->pc = 0x17ECA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ECA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECA0u;
            // 0x17eca4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E9F0u: goto label_17e9f0;
            case 0x17E9F4u: goto label_17e9f4;
            case 0x17EA1Cu: goto label_17ea1c;
            case 0x17EA30u: goto label_17ea30;
            case 0x17EA50u: goto label_17ea50;
            case 0x17EAA4u: goto label_17eaa4;
            case 0x17EAB0u: goto label_17eab0;
            case 0x17EB00u: goto label_17eb00;
            case 0x17EB80u: goto label_17eb80;
            case 0x17EC70u: goto label_17ec70;
            case 0x17EC88u: goto label_17ec88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17ECA8u;
}
