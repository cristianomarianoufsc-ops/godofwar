#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B6C8
// Address: 0x14b6c8 - 0x14b890
void sub_0014B6C8_0x14b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B6C8_0x14b6c8");
#endif

    ctx->pc = 0x14b6c8u;

    // 0x14b6c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b6cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14b6d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14b6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14b6d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14b6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14b6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14b6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b6e0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x14b6e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14b6e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14b6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14b6e8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14B6E8u;
    {
        const bool branch_taken_0x14b6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B6E8u;
            // 0x14b6ec: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6e8) {
            ctx->pc = 0x14B75Cu;
            goto label_14b75c;
        }
    }
    ctx->pc = 0x14B6F0u;
    // 0x14b6f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14b6f4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14b6f8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b6fc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b700: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14b700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14b704: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b70c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14b710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b714: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x14b714u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x14b718: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x14b718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14b71c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b720: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x14b720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x14b724: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x14b724u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x14b728: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B728u;
    {
        const bool branch_taken_0x14b728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B728u;
            // 0x14b72c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b728) {
            ctx->pc = 0x14B75Cu;
            goto label_14b75c;
        }
    }
    ctx->pc = 0x14B730u;
    // 0x14b730: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14b734: 0x0  nop
    ctx->pc = 0x14b734u;
    // NOP
label_14b738:
    // 0x14b738: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x14b738u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x14b73c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b740: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14b740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14b744: 0xc052da0  jal         func_14B680
    ctx->pc = 0x14B744u;
    SET_GPR_U32(ctx, 31, 0x14B74Cu);
    ctx->pc = 0x14B748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B744u;
            // 0x14b748: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B74Cu; }
        if (ctx->pc != 0x14B74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14b680_0x14b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B74Cu; }
        if (ctx->pc != 0x14B74Cu) { return; }
    }
    ctx->pc = 0x14B74Cu;
    // 0x14b74c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14b750: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14b750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14b754: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14B754u;
    {
        const bool branch_taken_0x14b754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b754) {
            ctx->pc = 0x14B758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B754u;
            // 0x14b758: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B738u;
            runtime->cooperativeGuestYield();
            goto label_14b738;
        }
    }
    ctx->pc = 0x14B75Cu;
label_14b75c:
    // 0x14b75c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x14b75cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14b760: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x14b760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x14b764: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14B764u;
    {
        const bool branch_taken_0x14b764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B764u;
            // 0x14b768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b764) {
            ctx->pc = 0x14B7D4u;
            goto label_14b7d4;
        }
    }
    ctx->pc = 0x14B76Cu;
    // 0x14b76c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14b770: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14b774: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14b774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b778: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b77c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14b780: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b784: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b788: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14b78c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x14b78cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x14b790: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x14b790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14b794: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b798: 0xae250014  sw          $a1, 0x14($s1)
    ctx->pc = 0x14b798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 5));
    // 0x14b79c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x14b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x14b7a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B7A0u;
    {
        const bool branch_taken_0x14b7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7A0u;
            // 0x14b7a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b7a0) {
            ctx->pc = 0x14B7D4u;
            goto label_14b7d4;
        }
    }
    ctx->pc = 0x14B7A8u;
    // 0x14b7a8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x14b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14b7ac: 0x0  nop
    ctx->pc = 0x14b7acu;
    // NOP
label_14b7b0:
    // 0x14b7b0: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x14b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x14b7b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14b7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14b7bc: 0xc052da0  jal         func_14B680
    ctx->pc = 0x14B7BCu;
    SET_GPR_U32(ctx, 31, 0x14B7C4u);
    ctx->pc = 0x14B7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7BCu;
            // 0x14b7c0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7C4u; }
        if (ctx->pc != 0x14B7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14b680_0x14b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7C4u; }
        if (ctx->pc != 0x14B7C4u) { return; }
    }
    ctx->pc = 0x14B7C4u;
    // 0x14b7c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14b7c8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14b7c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14b7cc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14B7CCu;
    {
        const bool branch_taken_0x14b7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b7cc) {
            ctx->pc = 0x14B7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7CCu;
            // 0x14b7d0: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B7B0u;
            runtime->cooperativeGuestYield();
            goto label_14b7b0;
        }
    }
    ctx->pc = 0x14B7D4u;
label_14b7d4:
    // 0x14b7d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14b7d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14b7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b7dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x14b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14b7e0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x14b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b7e4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b7e8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x14b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14b7ec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b7f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b7f4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x14b7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14b7f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14b7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7fc: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x14b7fcu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x14b800: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x14b800u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x14b804: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x14b804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x14b808: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x14b808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x14b80c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x14b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b810: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x14b810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x14b814: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x14b814u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14b818: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x14b818u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x14b81c: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x14b81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x14b820: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14b824: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x14b824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14b828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B828u;
    {
        const bool branch_taken_0x14b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B828u;
            // 0x14b82c: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b828) {
            ctx->pc = 0x14B840u;
            goto label_14b840;
        }
    }
    ctx->pc = 0x14B830u;
    // 0x14b830: 0x24820200  addiu       $v0, $a0, 0x200
    ctx->pc = 0x14b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x14b834: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x14b834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x14b838: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B838u;
    {
        const bool branch_taken_0x14b838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B838u;
            // 0x14b83c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b838) {
            ctx->pc = 0x14B858u;
            goto label_14b858;
        }
    }
    ctx->pc = 0x14B840u;
label_14b840:
    // 0x14b840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14b840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b844: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x14b844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x14b848: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x14b848u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x14b84c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x14b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x14b850: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x14b850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x14b854: 0x0  nop
    ctx->pc = 0x14b854u;
    // NOP
label_14b858:
    // 0x14b858: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14b85c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14b860: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14b860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b864: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14b864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b868: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14b868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b86c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b874: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14b874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14b878: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b87c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b880: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x14b880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x14b884: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14b884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b888: 0x3e00008  jr          $ra
    ctx->pc = 0x14B888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B888u;
            // 0x14b88c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B738u: goto label_14b738;
            case 0x14B75Cu: goto label_14b75c;
            case 0x14B7B0u: goto label_14b7b0;
            case 0x14B7D4u: goto label_14b7d4;
            case 0x14B840u: goto label_14b840;
            case 0x14B858u: goto label_14b858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B890u;
}
