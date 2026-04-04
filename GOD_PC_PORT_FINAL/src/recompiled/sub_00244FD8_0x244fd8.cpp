#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244FD8
// Address: 0x244fd8 - 0x245080
void sub_00244FD8_0x244fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244FD8_0x244fd8");
#endif

    ctx->pc = 0x244fd8u;

    // 0x244fd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244fdc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x244fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x244fe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x244fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244fe8: 0xc096408  jal         func_259020
    ctx->pc = 0x244FE8u;
    SET_GPR_U32(ctx, 31, 0x244FF0u);
    ctx->pc = 0x244FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244FE8u;
            // 0x244fec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259020u;
    if (runtime->hasFunction(0x259020u)) {
        auto targetFn = runtime->lookupFunction(0x259020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FF0u; }
        if (ctx->pc != 0x244FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259020_0x259038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FF0u; }
        if (ctx->pc != 0x244FF0u) { return; }
    }
    ctx->pc = 0x244FF0u;
    // 0x244ff0: 0x261100a0  addiu       $s1, $s0, 0xA0
    ctx->pc = 0x244ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x244ff4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244ff8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x244ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x244ffc: 0x24428818  addiu       $v0, $v0, -0x77E8
    ctx->pc = 0x244ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936600));
    // 0x245000: 0xc072a5c  jal         func_1CA970
    ctx->pc = 0x245000u;
    SET_GPR_U32(ctx, 31, 0x245008u);
    ctx->pc = 0x245004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245000u;
            // 0x245004: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA970u;
    if (runtime->hasFunction(0x1CA970u)) {
        auto targetFn = runtime->lookupFunction(0x1CA970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245008u; }
        if (ctx->pc != 0x245008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ca970_0x1caae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245008u; }
        if (ctx->pc != 0x245008u) { return; }
    }
    ctx->pc = 0x245008u;
    // 0x245008: 0xc096402  jal         func_259008
    ctx->pc = 0x245008u;
    SET_GPR_U32(ctx, 31, 0x245010u);
    ctx->pc = 0x24500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245008u;
            // 0x24500c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245010u; }
        if (ctx->pc != 0x245010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245010u; }
        if (ctx->pc != 0x245010u) { return; }
    }
    ctx->pc = 0x245010u;
    // 0x245010: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x245010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x245014: 0x260400ac  addiu       $a0, $s0, 0xAC
    ctx->pc = 0x245014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x245018: 0x24421e40  addiu       $v0, $v0, 0x1E40
    ctx->pc = 0x245018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7744));
    // 0x24501c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24501cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245020: 0xc096b70  jal         func_25ADC0
    ctx->pc = 0x245020u;
    SET_GPR_U32(ctx, 31, 0x245028u);
    ctx->pc = 0x245024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245020u;
            // 0x245024: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25ADC0u;
    if (runtime->hasFunction(0x25ADC0u)) {
        auto targetFn = runtime->lookupFunction(0x25ADC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245028u; }
        if (ctx->pc != 0x245028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025ADC0_0x25adc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245028u; }
        if (ctx->pc != 0x245028u) { return; }
    }
    ctx->pc = 0x245028u;
    // 0x245028: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x245028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x24502c: 0xc096bb0  jal         func_25AEC0
    ctx->pc = 0x24502Cu;
    SET_GPR_U32(ctx, 31, 0x245034u);
    ctx->pc = 0x245030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24502Cu;
            // 0x245030: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25AEC0u;
    if (runtime->hasFunction(0x25AEC0u)) {
        auto targetFn = runtime->lookupFunction(0x25AEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245034u; }
        if (ctx->pc != 0x245034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025AEC0_0x25aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245034u; }
        if (ctx->pc != 0x245034u) { return; }
    }
    ctx->pc = 0x245034u;
    // 0x245034: 0x26040118  addiu       $a0, $s0, 0x118
    ctx->pc = 0x245034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x245038: 0xc096bc2  jal         func_25AF08
    ctx->pc = 0x245038u;
    SET_GPR_U32(ctx, 31, 0x245040u);
    ctx->pc = 0x24503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245038u;
            // 0x24503c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25AF08u;
    if (runtime->hasFunction(0x25AF08u)) {
        auto targetFn = runtime->lookupFunction(0x25AF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245040u; }
        if (ctx->pc != 0x245040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025AF08_0x25af08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245040u; }
        if (ctx->pc != 0x245040u) { return; }
    }
    ctx->pc = 0x245040u;
    // 0x245040: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x245040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x245044: 0xc096bd4  jal         func_25AF50
    ctx->pc = 0x245044u;
    SET_GPR_U32(ctx, 31, 0x24504Cu);
    ctx->pc = 0x245048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245044u;
            // 0x245048: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25AF50u;
    if (runtime->hasFunction(0x25AF50u)) {
        auto targetFn = runtime->lookupFunction(0x25AF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24504Cu; }
        if (ctx->pc != 0x24504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025AF50_0x25af50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24504Cu; }
        if (ctx->pc != 0x24504Cu) { return; }
    }
    ctx->pc = 0x24504Cu;
    // 0x24504c: 0x26040128  addiu       $a0, $s0, 0x128
    ctx->pc = 0x24504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x245050: 0xc096be6  jal         func_25AF98
    ctx->pc = 0x245050u;
    SET_GPR_U32(ctx, 31, 0x245058u);
    ctx->pc = 0x245054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245050u;
            // 0x245054: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25AF98u;
    if (runtime->hasFunction(0x25AF98u)) {
        auto targetFn = runtime->lookupFunction(0x25AF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245058u; }
        if (ctx->pc != 0x245058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025AF98_0x25af98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245058u; }
        if (ctx->pc != 0x245058u) { return; }
    }
    ctx->pc = 0x245058u;
    // 0x245058: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24505c: 0xc096bf8  jal         func_25AFE0
    ctx->pc = 0x24505Cu;
    SET_GPR_U32(ctx, 31, 0x245064u);
    ctx->pc = 0x245060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24505Cu;
            // 0x245060: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25AFE0u;
    if (runtime->hasFunction(0x25AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x25AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245064u; }
        if (ctx->pc != 0x245064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025AFE0_0x25afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245064u; }
        if (ctx->pc != 0x245064u) { return; }
    }
    ctx->pc = 0x245064u;
    // 0x245064: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245068: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24506c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24506cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245074: 0x3e00008  jr          $ra
    ctx->pc = 0x245074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245074u;
            // 0x245078: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24507Cu;
    // 0x24507c: 0x0  nop
    ctx->pc = 0x24507cu;
    // NOP
}
