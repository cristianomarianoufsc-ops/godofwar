#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B9F8
// Address: 0x14b9f8 - 0x14bb20
void sub_0014B9F8_0x14b9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B9F8_0x14b9f8");
#endif

    ctx->pc = 0x14b9f8u;

    // 0x14b9f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b9fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14ba00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14ba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14ba04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14ba04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14ba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14ba0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14ba0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ba10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ba14: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ba18: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14ba1c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x14ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ba20: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14ba20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14ba24: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14ba28: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14ba28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14ba2c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14ba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ba30: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x14ba30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14ba34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14ba34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba38: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14ba38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba3c: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x14ba3cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x14ba40: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14ba44: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x14ba44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ba4c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x14ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x14ba50: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14ba54: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x14ba54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14ba58: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14BA58u;
    {
        const bool branch_taken_0x14ba58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA58u;
            // 0x14ba5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba58) {
            ctx->pc = 0x14BA8Cu;
            goto label_14ba8c;
        }
    }
    ctx->pc = 0x14BA60u;
    // 0x14ba60: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14ba64: 0x0  nop
    ctx->pc = 0x14ba64u;
    // NOP
label_14ba68:
    // 0x14ba68: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x14ba68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x14ba6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ba6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14ba70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14ba74: 0xc052e32  jal         func_14B8C8
    ctx->pc = 0x14BA74u;
    SET_GPR_U32(ctx, 31, 0x14BA7Cu);
    ctx->pc = 0x14BA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA74u;
            // 0x14ba78: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B8C8u;
    if (runtime->hasFunction(0x14B8C8u)) {
        auto targetFn = runtime->lookupFunction(0x14B8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA7Cu; }
        if (ctx->pc != 0x14BA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14b8c8_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA7Cu; }
        if (ctx->pc != 0x14BA7Cu) { return; }
    }
    ctx->pc = 0x14BA7Cu;
    // 0x14ba7c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x14ba7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14ba80: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14ba80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14ba84: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14BA84u;
    {
        const bool branch_taken_0x14ba84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ba84) {
            ctx->pc = 0x14BA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA84u;
            // 0x14ba88: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BA68u;
            runtime->cooperativeGuestYield();
            goto label_14ba68;
        }
    }
    ctx->pc = 0x14BA8Cu;
label_14ba8c:
    // 0x14ba8c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ba90: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14ba94: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x14ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ba98: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14ba9c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14baa0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14baa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14baa4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14baa8: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x14baa8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14baac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14baacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bab0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x14bab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14bab4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14bab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bab8: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x14bab8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x14babc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x14babcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bac0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x14bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x14bac4: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x14bac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14bac8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x14bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14bacc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x14baccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x14bad0: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x14bad0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14bad4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14BAD4u;
    {
        const bool branch_taken_0x14bad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAD4u;
            // 0x14bad8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bad4) {
            ctx->pc = 0x14BB08u;
            goto label_14bb08;
        }
    }
    ctx->pc = 0x14BADCu;
    // 0x14badc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x14badcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_14bae0:
    // 0x14bae0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x14bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14bae4: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x14bae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14bae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14bae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14baec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14baecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14baf0: 0xc052e52  jal         func_14B948
    ctx->pc = 0x14BAF0u;
    SET_GPR_U32(ctx, 31, 0x14BAF8u);
    ctx->pc = 0x14BAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAF0u;
            // 0x14baf4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B948u;
    if (runtime->hasFunction(0x14B948u)) {
        auto targetFn = runtime->lookupFunction(0x14B948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAF8u; }
        if (ctx->pc != 0x14BAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B948_0x14b948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAF8u; }
        if (ctx->pc != 0x14BAF8u) { return; }
    }
    ctx->pc = 0x14BAF8u;
    // 0x14baf8: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x14baf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14bafc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14bafcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14bb00: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14BB00u;
    {
        const bool branch_taken_0x14bb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bb00) {
            ctx->pc = 0x14BB04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB00u;
            // 0x14bb04: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BAE0u;
            runtime->cooperativeGuestYield();
            goto label_14bae0;
        }
    }
    ctx->pc = 0x14BB08u;
label_14bb08:
    // 0x14bb08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14bb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14bb0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14bb0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14bb10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14bb10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bb18: 0x3e00008  jr          $ra
    ctx->pc = 0x14BB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB18u;
            // 0x14bb1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14BA68u: goto label_14ba68;
            case 0x14BA8Cu: goto label_14ba8c;
            case 0x14BAE0u: goto label_14bae0;
            case 0x14BB08u: goto label_14bb08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14BB20u;
}
