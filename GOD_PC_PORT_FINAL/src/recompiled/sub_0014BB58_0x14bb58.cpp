#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014BB58
// Address: 0x14bb58 - 0x14bc58
void sub_0014BB58_0x14bb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BB58_0x14bb58");
#endif

    ctx->pc = 0x14bb58u;

    // 0x14bb58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14bb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14bb5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14bb60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14bb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14bb64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14bb64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14bb6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14bb6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14bb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14bb74: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bb78: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14bb7c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bb80: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bb84: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14bb88: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bb8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14bb90: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14bb90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x14bb94: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x14bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x14bb98: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x14bb98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x14bb9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14bb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bba0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x14bba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14bba4: 0x0  nop
    ctx->pc = 0x14bba4u;
    // NOP
label_14bba8:
    // 0x14bba8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14bbac: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x14bbacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14bbb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14bbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14bbb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14bbb8: 0xc052e7e  jal         func_14B9F8
    ctx->pc = 0x14BBB8u;
    SET_GPR_U32(ctx, 31, 0x14BBC0u);
    ctx->pc = 0x14BBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBB8u;
            // 0x14bbbc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B9F8u;
    if (runtime->hasFunction(0x14B9F8u)) {
        auto targetFn = runtime->lookupFunction(0x14B9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBC0u; }
        if (ctx->pc != 0x14BBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B9F8_0x14b9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBC0u; }
        if (ctx->pc != 0x14BBC0u) { return; }
    }
    ctx->pc = 0x14BBC0u;
    // 0x14bbc0: 0x1200fff9  beqz        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14BBC0u;
    {
        const bool branch_taken_0x14bbc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBC0u;
            // 0x14bbc4: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbc0) {
            ctx->pc = 0x14BBA8u;
            runtime->cooperativeGuestYield();
            goto label_14bba8;
        }
    }
    ctx->pc = 0x14BBC8u;
    // 0x14bbc8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14bbcc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14bbd0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x14bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14bbd4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bbd8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14bbdc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14bbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14bbe0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14bbe4: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x14bbe4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14bbe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14bbecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbf0: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x14bbf0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x14bbf4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14bbf8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x14bbf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbfc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14bc00: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x14bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x14bc04: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14bc08: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x14bc08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14bc0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14BC0Cu;
    {
        const bool branch_taken_0x14bc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC0Cu;
            // 0x14bc10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc0c) {
            ctx->pc = 0x14BC3Cu;
            goto label_14bc3c;
        }
    }
    ctx->pc = 0x14BC14u;
    // 0x14bc14: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_14bc18:
    // 0x14bc18: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x14bc18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x14bc1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14bc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14bc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14bc24: 0xc052ec8  jal         func_14BB20
    ctx->pc = 0x14BC24u;
    SET_GPR_U32(ctx, 31, 0x14BC2Cu);
    ctx->pc = 0x14BC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC24u;
            // 0x14bc28: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14BB20u;
    if (runtime->hasFunction(0x14BB20u)) {
        auto targetFn = runtime->lookupFunction(0x14BB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC2Cu; }
        if (ctx->pc != 0x14BC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14bb20_0x14bb58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC2Cu; }
        if (ctx->pc != 0x14BC2Cu) { return; }
    }
    ctx->pc = 0x14BC2Cu;
    // 0x14bc2c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x14bc2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14bc30: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14bc30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14bc34: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14BC34u;
    {
        const bool branch_taken_0x14bc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bc34) {
            ctx->pc = 0x14BC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC34u;
            // 0x14bc38: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BC18u;
            runtime->cooperativeGuestYield();
            goto label_14bc18;
        }
    }
    ctx->pc = 0x14BC3Cu;
label_14bc3c:
    // 0x14bc3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14bc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14bc40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14bc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14bc44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14bc44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bc48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14bc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC4Cu;
            // 0x14bc50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14BBA8u: goto label_14bba8;
            case 0x14BC18u: goto label_14bc18;
            case 0x14BC3Cu: goto label_14bc3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14BC54u;
    // 0x14bc54: 0x0  nop
    ctx->pc = 0x14bc54u;
    // NOP
}
