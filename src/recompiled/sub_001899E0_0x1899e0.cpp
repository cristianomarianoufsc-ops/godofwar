#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001899E0
// Address: 0x1899e0 - 0x189a88
void sub_001899E0_0x1899e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001899E0_0x1899e0");
#endif

    ctx->pc = 0x1899e0u;

    // 0x1899e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1899e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1899e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1899e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1899e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1899e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1899ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1899ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1899f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1899f4: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1899F4u;
    SET_GPR_U32(ctx, 31, 0x1899FCu);
    ctx->pc = 0x1899F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1899F4u;
            // 0x1899f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (runtime->hasFunction(0x18A170u)) {
        auto targetFn = runtime->lookupFunction(0x18A170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1899FCu; }
        if (ctx->pc != 0x1899FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A170_0x18a170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1899FCu; }
        if (ctx->pc != 0x1899FCu) { return; }
    }
    ctx->pc = 0x1899FCu;
    // 0x1899fc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1899FCu;
    {
        const bool branch_taken_0x1899fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1899FCu;
            // 0x189a00: 0x3c050030  lui         $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899fc) {
            ctx->pc = 0x189A70u;
            goto label_189a70;
        }
    }
    ctx->pc = 0x189A04u;
    // 0x189a04: 0x8ca34f20  lw          $v1, 0x4F20($a1)
    ctx->pc = 0x189a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20256)));
    // 0x189a08: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x189a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x189a0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x189a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189a10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x189a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x189a14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189A14u;
    {
        const bool branch_taken_0x189a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189A14u;
            // 0x189a18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a14) {
            ctx->pc = 0x189A24u;
            goto label_189a24;
        }
    }
    ctx->pc = 0x189A1Cu;
    // 0x189a1c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x189a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x189a20: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x189a20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_189a24:
    // 0x189a24: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x189a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x189a28: 0x246200a8  addiu       $v0, $v1, 0xA8
    ctx->pc = 0x189a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
    // 0x189a2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x189a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x189a30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189a34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x189a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x189a38: 0x8ca24f20  lw          $v0, 0x4F20($a1)
    ctx->pc = 0x189a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20256)));
    // 0x189a3c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x189a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189a40: 0x8c45014c  lw          $a1, 0x14C($v0)
    ctx->pc = 0x189a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x189a44: 0x244300a8  addiu       $v1, $v0, 0xA8
    ctx->pc = 0x189a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x189a48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189a4c: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x189a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x189a50: 0x38a50102  xori        $a1, $a1, 0x102
    ctx->pc = 0x189a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)258);
    // 0x189a54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x189a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189a58: 0x5380b  movn        $a3, $zero, $a1
    ctx->pc = 0x189a58u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x189a5c: 0xc09bba0  jal         func_26EE80
    ctx->pc = 0x189A5Cu;
    SET_GPR_U32(ctx, 31, 0x189A64u);
    ctx->pc = 0x189A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189A5Cu;
            // 0x189a60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EE80u;
    if (runtime->hasFunction(0x26EE80u)) {
        auto targetFn = runtime->lookupFunction(0x26EE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189A64u; }
        if (ctx->pc != 0x189A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ee80_0x26eeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189A64u; }
        if (ctx->pc != 0x189A64u) { return; }
    }
    ctx->pc = 0x189A64u;
    // 0x189a64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189A64u;
    {
        const bool branch_taken_0x189a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189A64u;
            // 0x189a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a64) {
            ctx->pc = 0x189A74u;
            goto label_189a74;
        }
    }
    ctx->pc = 0x189A6Cu;
    // 0x189a6c: 0x0  nop
    ctx->pc = 0x189a6cu;
    // NOP
label_189a70:
    // 0x189a70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189a74:
    // 0x189a74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x189a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189a80: 0x3e00008  jr          $ra
    ctx->pc = 0x189A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189A80u;
            // 0x189a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189A24u: goto label_189a24;
            case 0x189A70u: goto label_189a70;
            case 0x189A74u: goto label_189a74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189A88u;
}
