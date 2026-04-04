#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023AFE0
// Address: 0x23afe0 - 0x23b088
void sub_0023AFE0_0x23afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AFE0_0x23afe0");
#endif

    ctx->pc = 0x23afe0u;

    // 0x23afe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23afe4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23afe8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23afec: 0x2442fa00  addiu       $v0, $v0, -0x600
    ctx->pc = 0x23afecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965760));
    // 0x23aff0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23aff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23aff4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23aff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aff8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23aff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23affc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x23affcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x23b000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b004: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23b004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b008: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23b008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23b00c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x23b00cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23b010: 0x12120008  beq         $s0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B010u;
    {
        const bool branch_taken_0x23b010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x23B014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B010u;
            // 0x23b014: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b010) {
            ctx->pc = 0x23B034u;
            goto label_23b034;
        }
    }
    ctx->pc = 0x23B018u;
    // 0x23b018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b01c: 0x0  nop
    ctx->pc = 0x23b01cu;
    // NOP
label_23b020:
    // 0x23b020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23b020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b024: 0xc045e74  jal         func_1179D0
    ctx->pc = 0x23B024u;
    SET_GPR_U32(ctx, 31, 0x23B02Cu);
    ctx->pc = 0x23B028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B024u;
            // 0x23b028: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1179D0u;
    if (runtime->hasFunction(0x1179D0u)) {
        auto targetFn = runtime->lookupFunction(0x1179D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B02Cu; }
        if (ctx->pc != 0x23B02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001179D0_0x1179d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B02Cu; }
        if (ctx->pc != 0x23B02Cu) { return; }
    }
    ctx->pc = 0x23B02Cu;
    // 0x23b02c: 0x1612fffc  bne         $s0, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x23B02Cu;
    {
        const bool branch_taken_0x23b02c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x23B030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B02Cu;
            // 0x23b030: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b02c) {
            ctx->pc = 0x23B020u;
            runtime->cooperativeGuestYield();
            goto label_23b020;
        }
    }
    ctx->pc = 0x23B034u;
label_23b034:
    // 0x23b034: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x23b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x23b038: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B038u;
    {
        const bool branch_taken_0x23b038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B038u;
            // 0x23b03c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b038) {
            ctx->pc = 0x23B04Cu;
            goto label_23b04c;
        }
    }
    ctx->pc = 0x23B040u;
    // 0x23b040: 0xc08ec22  jal         func_23B088
    ctx->pc = 0x23B040u;
    SET_GPR_U32(ctx, 31, 0x23B048u);
    ctx->pc = 0x23B044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B040u;
            // 0x23b044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B088u;
    if (runtime->hasFunction(0x23B088u)) {
        auto targetFn = runtime->lookupFunction(0x23B088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B048u; }
        if (ctx->pc != 0x23B048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b088_0x23b0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B048u; }
        if (ctx->pc != 0x23B048u) { return; }
    }
    ctx->pc = 0x23B048u;
    // 0x23b048: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23b048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23b04c:
    // 0x23b04c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23b04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b054: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x23b054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b05c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B05Cu;
            // 0x23b060: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B020u: goto label_23b020;
            case 0x23B034u: goto label_23b034;
            case 0x23B04Cu: goto label_23b04c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B064u;
    // 0x23b064: 0x0  nop
    ctx->pc = 0x23b064u;
    // NOP
    // 0x23b068: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x23b068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x23b06c: 0x0  nop
    ctx->pc = 0x23b06cu;
    // NOP
    // 0x23b070: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23b070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b074: 0x0  nop
    ctx->pc = 0x23b074u;
    // NOP
    // 0x23b078: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x23b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b07c: 0x0  nop
    ctx->pc = 0x23b07cu;
    // NOP
    // 0x23b080: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x23b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b084: 0x0  nop
    ctx->pc = 0x23b084u;
    // NOP
}
