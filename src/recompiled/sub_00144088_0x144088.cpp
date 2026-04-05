#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144088
// Address: 0x144088 - 0x144138
void sub_00144088_0x144088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144088_0x144088");
#endif

    ctx->pc = 0x144088u;

    // 0x144088: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x144088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14408c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x144090: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x144090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x144094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14409c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14409cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440a0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1440a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1440a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1440a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1440a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1440ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1440acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1440b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1440B0u;
    {
        const bool branch_taken_0x1440b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1440B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1440B0u;
            // 0x1440b4: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440b0) {
            ctx->pc = 0x1440D0u;
            goto label_1440d0;
        }
    }
    ctx->pc = 0x1440B8u;
    // 0x1440b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1440B8u;
    {
        const bool branch_taken_0x1440b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1440B8u;
            // 0x1440bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440b8) {
            ctx->pc = 0x144118u;
            goto label_144118;
        }
    }
    ctx->pc = 0x1440C0u;
label_1440c0:
    // 0x1440c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1440c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440c4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1440c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1440c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1440C8u;
    {
        const bool branch_taken_0x1440c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1440C8u;
            // 0x1440cc: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440c8) {
            ctx->pc = 0x144118u;
            goto label_144118;
        }
    }
    ctx->pc = 0x1440D0u;
label_1440d0:
    // 0x1440d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1440d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440d4: 0xc051010  jal         func_144040
    ctx->pc = 0x1440D4u;
    SET_GPR_U32(ctx, 31, 0x1440DCu);
    ctx->pc = 0x1440D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1440D4u;
            // 0x1440d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144040u;
    if (runtime->hasFunction(0x144040u)) {
        auto targetFn = runtime->lookupFunction(0x144040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1440DCu; }
        if (ctx->pc != 0x1440DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144040_0x144088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1440DCu; }
        if (ctx->pc != 0x1440DCu) { return; }
    }
    ctx->pc = 0x1440DCu;
    // 0x1440dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1440dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1440e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1440e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1440e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1440e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1440e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1440e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1440ec: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1440ECu;
    {
        const bool branch_taken_0x1440ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1440ECu;
            // 0x1440f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440ec) {
            ctx->pc = 0x144118u;
            goto label_144118;
        }
    }
    ctx->pc = 0x1440F4u;
    // 0x1440f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1440f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1440f8:
    // 0x1440f8: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x1440F8u;
    SET_GPR_U32(ctx, 31, 0x144100u);
    ctx->pc = 0x1440FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1440F8u;
            // 0x1440fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144100u; }
        if (ctx->pc != 0x144100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144100u; }
        if (ctx->pc != 0x144100u) { return; }
    }
    ctx->pc = 0x144100u;
    // 0x144100: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x144100u;
    {
        const bool branch_taken_0x144100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144100) {
            ctx->pc = 0x144104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144100u;
            // 0x144104: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1440C0u;
            runtime->cooperativeGuestYield();
            goto label_1440c0;
        }
    }
    ctx->pc = 0x144108u;
    // 0x144108: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x144108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14410c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14410Cu;
    {
        const bool branch_taken_0x14410c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14410c) {
            ctx->pc = 0x144110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14410Cu;
            // 0x144110: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1440F8u;
            runtime->cooperativeGuestYield();
            goto label_1440f8;
        }
    }
    ctx->pc = 0x144114u;
    // 0x144114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144118:
    // 0x144118: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x144118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14411c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14411cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144120: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144124: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x144124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14412c: 0x3e00008  jr          $ra
    ctx->pc = 0x14412Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14412Cu;
            // 0x144130: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1440C0u: goto label_1440c0;
            case 0x1440D0u: goto label_1440d0;
            case 0x1440F8u: goto label_1440f8;
            case 0x144118u: goto label_144118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144134u;
    // 0x144134: 0x0  nop
    ctx->pc = 0x144134u;
    // NOP
}
