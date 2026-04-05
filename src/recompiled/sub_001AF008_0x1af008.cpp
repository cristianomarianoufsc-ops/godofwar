#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF008
// Address: 0x1af008 - 0x1af0a8
void sub_001AF008_0x1af008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF008_0x1af008");
#endif

    ctx->pc = 0x1af008u;

    // 0x1af008: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af00c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1af00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af010: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1af010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1af014: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1af014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af018: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af01c: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1af01cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1af020: 0x261025d0  addiu       $s0, $s0, 0x25D0
    ctx->pc = 0x1af020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9680));
    // 0x1af024: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1af024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af028: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AF028u;
    SET_GPR_U32(ctx, 31, 0x1AF030u);
    ctx->pc = 0x1AF02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF028u;
            // 0x1af02c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF030u; }
        if (ctx->pc != 0x1AF030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF030u; }
        if (ctx->pc != 0x1AF030u) { return; }
    }
    ctx->pc = 0x1AF030u;
    // 0x1af030: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1af030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af034: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x1af034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1af038: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1af038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af03c: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AF03Cu;
    SET_GPR_U32(ctx, 31, 0x1AF044u);
    ctx->pc = 0x1AF040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF03Cu;
            // 0x1af040: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF044u; }
        if (ctx->pc != 0x1AF044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF044u; }
        if (ctx->pc != 0x1AF044u) { return; }
    }
    ctx->pc = 0x1AF044u;
    // 0x1af044: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1af044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af048: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x1af048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1af04c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1af04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af050: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AF050u;
    SET_GPR_U32(ctx, 31, 0x1AF058u);
    ctx->pc = 0x1AF054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF050u;
            // 0x1af054: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF058u; }
        if (ctx->pc != 0x1AF058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF058u; }
        if (ctx->pc != 0x1AF058u) { return; }
    }
    ctx->pc = 0x1AF058u;
    // 0x1af058: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1af058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1af05c: 0x37a4000c  ori         $a0, $sp, 0xC
    ctx->pc = 0x1af05cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x1af060: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1af060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af064: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AF064u;
    SET_GPR_U32(ctx, 31, 0x1AF06Cu);
    ctx->pc = 0x1AF068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF064u;
            // 0x1af068: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF06Cu; }
        if (ctx->pc != 0x1AF06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF06Cu; }
        if (ctx->pc != 0x1AF06Cu) { return; }
    }
    ctx->pc = 0x1AF06Cu;
    // 0x1af06c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1af06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1af070: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1af070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1af074: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1af074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af078: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AF078u;
    SET_GPR_U32(ctx, 31, 0x1AF080u);
    ctx->pc = 0x1AF07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF078u;
            // 0x1af07c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF080u; }
        if (ctx->pc != 0x1AF080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF080u; }
        if (ctx->pc != 0x1AF080u) { return; }
    }
    ctx->pc = 0x1AF080u;
    // 0x1af080: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1af080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1af084: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x1af084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1af088: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1af088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af08c: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1AF08Cu;
    SET_GPR_U32(ctx, 31, 0x1AF094u);
    ctx->pc = 0x1AF090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF08Cu;
            // 0x1af090: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF094u; }
        if (ctx->pc != 0x1AF094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF094u; }
        if (ctx->pc != 0x1AF094u) { return; }
    }
    ctx->pc = 0x1AF094u;
    // 0x1af094: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1af094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af09c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF09Cu;
            // 0x1af0a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF0A4u;
    // 0x1af0a4: 0x0  nop
    ctx->pc = 0x1af0a4u;
    // NOP
}
