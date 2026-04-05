#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE9F8
// Address: 0x1be9f8 - 0x1beab8
void sub_001BE9F8_0x1be9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE9F8_0x1be9f8");
#endif

    ctx->pc = 0x1be9f8u;

    // 0x1be9f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1be9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1be9fc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1be9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1bea00: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1bea00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1bea04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bea08: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1bea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1bea0c: 0x8cb10018  lw          $s1, 0x18($a1)
    ctx->pc = 0x1bea0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1bea10: 0x94b20046  lhu         $s2, 0x46($a1)
    ctx->pc = 0x1bea10u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x1bea14: 0x8e300104  lw          $s0, 0x104($s1)
    ctx->pc = 0x1bea14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1bea18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bea18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bea1c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1bea1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1bea20: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1bea20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1bea24: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEA24u;
    {
        const bool branch_taken_0x1bea24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bea24) {
            ctx->pc = 0x1BEA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA24u;
            // 0x1bea28: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BEA38u;
            goto label_1bea38;
        }
    }
    ctx->pc = 0x1BEA2Cu;
    // 0x1bea2c: 0xc04da64  jal         func_136990
    ctx->pc = 0x1BEA2Cu;
    SET_GPR_U32(ctx, 31, 0x1BEA34u);
    ctx->pc = 0x1BEA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA2Cu;
            // 0x1bea30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA34u; }
        if (ctx->pc != 0x1BEA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA34u; }
        if (ctx->pc != 0x1BEA34u) { return; }
    }
    ctx->pc = 0x1BEA34u;
    // 0x1bea34: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1bea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1bea38:
    // 0x1bea38: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1bea38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1bea3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bea40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bea48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bea48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea4c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1bea4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bea50: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1bea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1bea54: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1bea54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bea58: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1bea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1bea5c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1bea5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bea60: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1bea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1bea64: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1bea64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1bea68: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1bea68u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bea6c: 0xc06faae  jal         func_1BEAB8
    ctx->pc = 0x1BEA6Cu;
    SET_GPR_U32(ctx, 31, 0x1BEA74u);
    ctx->pc = 0x1BEA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA6Cu;
            // 0x1bea70: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAB8u;
    if (runtime->hasFunction(0x1BEAB8u)) {
        auto targetFn = runtime->lookupFunction(0x1BEAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA74u; }
        if (ctx->pc != 0x1BEA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEAB8_0x1beab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA74u; }
        if (ctx->pc != 0x1BEA74u) { return; }
    }
    ctx->pc = 0x1BEA74u;
    // 0x1bea74: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1bea74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bea78: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1bea78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bea7c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1bea7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bea80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bea80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bea84: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA84u;
            // 0x1bea88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BEA38u: goto label_1bea38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BEA8Cu;
    // 0x1bea8c: 0x0  nop
    ctx->pc = 0x1bea8cu;
    // NOP
    // 0x1bea90: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1bea90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1bea94: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bea94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bea98: 0x8c4277bc  lw          $v0, 0x77BC($v0)
    ctx->pc = 0x1bea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30652)));
    // 0x1bea9c: 0x8c635e70  lw          $v1, 0x5E70($v1)
    ctx->pc = 0x1bea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24176)));
    // 0x1beaa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1beaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1beaa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1beaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1beaa8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1beaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1beaac: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1beaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1beab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAB0u;
            // 0x1beab4: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BEA38u: goto label_1bea38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BEAB8u;
}
