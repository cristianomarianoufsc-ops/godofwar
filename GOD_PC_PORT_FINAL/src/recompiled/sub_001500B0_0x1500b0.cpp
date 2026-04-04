#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001500B0
// Address: 0x1500b0 - 0x150138
void sub_001500B0_0x1500b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001500B0_0x1500b0");
#endif

    ctx->pc = 0x1500b0u;

    // 0x1500b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1500b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1500b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1500b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1500b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1500b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1500bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1500bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1500c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1500c4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1500c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1500c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1500C8u;
    {
        const bool branch_taken_0x1500c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1500C8u;
            // 0x1500cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500c8) {
            ctx->pc = 0x15010Cu;
            goto label_15010c;
        }
    }
    ctx->pc = 0x1500D0u;
    // 0x1500d0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1500d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1500d4: 0x0  nop
    ctx->pc = 0x1500d4u;
    // NOP
label_1500d8:
    // 0x1500d8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1500d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1500dc: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1500dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1500e0: 0x8605008c  lh          $a1, 0x8C($s0)
    ctx->pc = 0x1500e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1500e4: 0x8606008e  lh          $a2, 0x8E($s0)
    ctx->pc = 0x1500e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 142)));
    // 0x1500e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1500e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1500ec: 0x96070090  lhu         $a3, 0x90($s0)
    ctx->pc = 0x1500ecu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1500f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1500f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1500f4: 0xc05395c  jal         func_14E570
    ctx->pc = 0x1500F4u;
    SET_GPR_U32(ctx, 31, 0x1500FCu);
    ctx->pc = 0x1500F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1500F4u;
            // 0x1500f8: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1500FCu; }
        if (ctx->pc != 0x1500FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1500FCu; }
        if (ctx->pc != 0x1500FCu) { return; }
    }
    ctx->pc = 0x1500FCu;
    // 0x1500fc: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1500fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x150100: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x150100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x150104: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x150104u;
    {
        const bool branch_taken_0x150104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150104u;
            // 0x150108: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150104) {
            ctx->pc = 0x1500D8u;
            runtime->cooperativeGuestYield();
            goto label_1500d8;
        }
    }
    ctx->pc = 0x15010Cu;
label_15010c:
    // 0x15010c: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x15010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x150110: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150110u;
    {
        const bool branch_taken_0x150110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150110u;
            // 0x150114: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150110) {
            ctx->pc = 0x150124u;
            goto label_150124;
        }
    }
    ctx->pc = 0x150118u;
    // 0x150118: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x150118u;
    SET_GPR_U32(ctx, 31, 0x150120u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150120u; }
        if (ctx->pc != 0x150120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150120u; }
        if (ctx->pc != 0x150120u) { return; }
    }
    ctx->pc = 0x150120u;
    // 0x150120: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x150120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_150124:
    // 0x150124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15012c: 0x3e00008  jr          $ra
    ctx->pc = 0x15012Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15012Cu;
            // 0x150130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1500D8u: goto label_1500d8;
            case 0x15010Cu: goto label_15010c;
            case 0x150124u: goto label_150124;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150134u;
    // 0x150134: 0x0  nop
    ctx->pc = 0x150134u;
    // NOP
}
