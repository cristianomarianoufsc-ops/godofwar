#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BB00
// Address: 0x18bb00 - 0x18bb78
void sub_0018BB00_0x18bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BB00_0x18bb00");
#endif

    ctx->pc = 0x18bb00u;

    // 0x18bb00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18bb04: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18bb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18bb08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bb0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18bb0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb10: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18bb14: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x18bb14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x18bb18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18bb1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18bb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18bb20: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x18bb20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18bb24: 0x12120008  beq         $s0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18BB24u;
    {
        const bool branch_taken_0x18bb24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x18BB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB24u;
            // 0x18bb28: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb24) {
            ctx->pc = 0x18BB48u;
            goto label_18bb48;
        }
    }
    ctx->pc = 0x18BB2Cu;
    // 0x18bb2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_18bb30:
    // 0x18bb30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb34: 0x8c44c8c0  lw          $a0, -0x3740($v0)
    ctx->pc = 0x18bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953152)));
    // 0x18bb38: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x18BB38u;
    SET_GPR_U32(ctx, 31, 0x18BB40u);
    ctx->pc = 0x18BB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB38u;
            // 0x18bb3c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB40u; }
        if (ctx->pc != 0x18BB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB40u; }
        if (ctx->pc != 0x18BB40u) { return; }
    }
    ctx->pc = 0x18BB40u;
    // 0x18bb40: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18BB40u;
    {
        const bool branch_taken_0x18bb40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x18BB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB40u;
            // 0x18bb44: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb40) {
            ctx->pc = 0x18BB30u;
            runtime->cooperativeGuestYield();
            goto label_18bb30;
        }
    }
    ctx->pc = 0x18BB48u;
label_18bb48:
    // 0x18bb48: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x18bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x18bb4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BB4Cu;
    {
        const bool branch_taken_0x18bb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB4Cu;
            // 0x18bb50: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb4c) {
            ctx->pc = 0x18BB60u;
            goto label_18bb60;
        }
    }
    ctx->pc = 0x18BB54u;
    // 0x18bb54: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x18BB54u;
    SET_GPR_U32(ctx, 31, 0x18BB5Cu);
    ctx->pc = 0x18BB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB54u;
            // 0x18bb58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB5Cu; }
        if (ctx->pc != 0x18BB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB5Cu; }
        if (ctx->pc != 0x18BB5Cu) { return; }
    }
    ctx->pc = 0x18BB5Cu;
    // 0x18bb5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18bb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18bb60:
    // 0x18bb60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18bb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bb64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bb68: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18bb68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bb6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bb70: 0x3e00008  jr          $ra
    ctx->pc = 0x18BB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB70u;
            // 0x18bb74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BB30u: goto label_18bb30;
            case 0x18BB48u: goto label_18bb48;
            case 0x18BB60u: goto label_18bb60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BB78u;
}
