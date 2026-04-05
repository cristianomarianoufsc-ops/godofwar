#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014ABF8
// Address: 0x14abf8 - 0x14ad28
void sub_0014ABF8_0x14abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ABF8_0x14abf8");
#endif

    ctx->pc = 0x14abf8u;

    // 0x14abf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14abf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14abfc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14abfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14ac00: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x14ac00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x14ac04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14ac04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac08: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x14ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x14ac0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14ac0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac10: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x14ac10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x14ac14: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14ac14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14ac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x14ac1c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x14ac1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14ac20: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x14ac20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x14ac24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ac28: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x14ac28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x14ac2c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x14AC2Cu;
    {
        const bool branch_taken_0x14ac2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC2Cu;
            // 0x14ac30: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac2c) {
            ctx->pc = 0x14ACFCu;
            goto label_14acfc;
        }
    }
    ctx->pc = 0x14AC34u;
    // 0x14ac34: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x14ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_14ac38:
    // 0x14ac38: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x14ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x14ac3c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x14ac3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ac40: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x14ac40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14ac44: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x14AC44u;
    {
        const bool branch_taken_0x14ac44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC44u;
            // 0x14ac48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac44) {
            ctx->pc = 0x14ACE4u;
            goto label_14ace4;
        }
    }
    ctx->pc = 0x14AC4Cu;
    // 0x14ac4c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14ac50:
    // 0x14ac50: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14ac54: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x14ac54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14ac58: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x14ac58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14ac5c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x14ac5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ac60: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x14ac60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14ac64: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AC64u;
    {
        const bool branch_taken_0x14ac64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x14AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC64u;
            // 0x14ac68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac64) {
            ctx->pc = 0x14AC7Cu;
            goto label_14ac7c;
        }
    }
    ctx->pc = 0x14AC6Cu;
    // 0x14ac6c: 0x8ea20cd0  lw          $v0, 0xCD0($s5)
    ctx->pc = 0x14ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3280)));
    // 0x14ac70: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x14ac70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14ac74: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x14ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x14ac78: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x14ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ac7c:
    // 0x14ac7c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14AC7Cu;
    {
        const bool branch_taken_0x14ac7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC7Cu;
            // 0x14ac80: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac7c) {
            ctx->pc = 0x14ACD0u;
            goto label_14acd0;
        }
    }
    ctx->pc = 0x14AC84u;
    // 0x14ac84: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x14AC84u;
    SET_GPR_U32(ctx, 31, 0x14AC8Cu);
    ctx->pc = 0x14AC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC84u;
            // 0x14ac88: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC8Cu; }
        if (ctx->pc != 0x14AC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC8Cu; }
        if (ctx->pc != 0x14AC8Cu) { return; }
    }
    ctx->pc = 0x14AC8Cu;
    // 0x14ac8c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14AC8Cu;
    {
        const bool branch_taken_0x14ac8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC8Cu;
            // 0x14ac90: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac8c) {
            ctx->pc = 0x14ACD0u;
            goto label_14acd0;
        }
    }
    ctx->pc = 0x14AC94u;
    // 0x14ac94: 0x8ea50cd0  lw          $a1, 0xCD0($s5)
    ctx->pc = 0x14ac94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3280)));
    // 0x14ac98: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14ac9c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x14ac9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x14aca0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14aca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14aca8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14acac: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14acacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14acb0: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14ACB0u;
    {
        const bool branch_taken_0x14acb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14acb0) {
            ctx->pc = 0x14ACB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACB0u;
            // 0x14acb4: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14ACD0u;
            goto label_14acd0;
        }
    }
    ctx->pc = 0x14ACB8u;
    // 0x14acb8: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x14acb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14acbc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x14acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14acc0: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x14acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x14acc4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x14acc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14acc8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14ACC8u;
    {
        const bool branch_taken_0x14acc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACC8u;
            // 0x14accc: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acc8) {
            ctx->pc = 0x14AD00u;
            goto label_14ad00;
        }
    }
    ctx->pc = 0x14ACD0u;
label_14acd0:
    // 0x14acd0: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x14acd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14acd4: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x14acd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14acd8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x14acd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14acdc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x14ACDCu;
    {
        const bool branch_taken_0x14acdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ACE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACDCu;
            // 0x14ace0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acdc) {
            ctx->pc = 0x14AC50u;
            runtime->cooperativeGuestYield();
            goto label_14ac50;
        }
    }
    ctx->pc = 0x14ACE4u;
label_14ace4:
    // 0x14ace4: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x14ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14ace8: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x14ace8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x14acec: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x14acecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14acf0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x14acf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14acf4: 0x5440ffd0  bnel        $v0, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x14ACF4u;
    {
        const bool branch_taken_0x14acf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14acf4) {
            ctx->pc = 0x14ACF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACF4u;
            // 0x14acf8: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AC38u;
            runtime->cooperativeGuestYield();
            goto label_14ac38;
        }
    }
    ctx->pc = 0x14ACFCu;
label_14acfc:
    // 0x14acfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14acfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ad00:
    // 0x14ad00: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x14ad00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14ad04: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x14ad04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ad08: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x14ad08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ad0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14ad0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ad10: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x14ad10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ad14: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x14ad14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ad18: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x14ad18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ad1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ad1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ad20: 0x3e00008  jr          $ra
    ctx->pc = 0x14AD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD20u;
            // 0x14ad24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AC38u: goto label_14ac38;
            case 0x14AC50u: goto label_14ac50;
            case 0x14AC7Cu: goto label_14ac7c;
            case 0x14ACD0u: goto label_14acd0;
            case 0x14ACE4u: goto label_14ace4;
            case 0x14ACFCu: goto label_14acfc;
            case 0x14AD00u: goto label_14ad00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14AD28u;
}
