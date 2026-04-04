#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CFBD0
// Address: 0x1cfbd0 - 0x1cfc58
void sub_001CFBD0_0x1cfbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFBD0_0x1cfbd0");
#endif

    ctx->pc = 0x1cfbd0u;

    // 0x1cfbd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1cfbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1cfbd4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1cfbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1cfbd8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1cfbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1cfbdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfbe0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cfbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cfbe4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cfbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cfbe8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1cfbe8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfbec: 0x9607006c  lhu         $a3, 0x6C($s0)
    ctx->pc = 0x1cfbecu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cfbf0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1cfbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cfbf4: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CFBF4u;
    SET_GPR_U32(ctx, 31, 0x1CFBFCu);
    ctx->pc = 0x1CFBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFBF4u;
            // 0x1cfbf8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (runtime->hasFunction(0x1CC198u)) {
        auto targetFn = runtime->lookupFunction(0x1CC198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFBFCu; }
        if (ctx->pc != 0x1CFBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC198_0x1cc198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFBFCu; }
        if (ctx->pc != 0x1CFBFCu) { return; }
    }
    ctx->pc = 0x1CFBFCu;
    // 0x1cfbfc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CFBFCu;
    {
        const bool branch_taken_0x1cfbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFBFCu;
            // 0x1cfc00: 0x24020406  addiu       $v0, $zero, 0x406 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbfc) {
            ctx->pc = 0x1CFC30u;
            goto label_1cfc30;
        }
    }
    ctx->pc = 0x1CFC04u;
    // 0x1cfc04: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cfc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1cfc08: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1cfc08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cfc0c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cfc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cfc10: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1cfc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1cfc14: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cfc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cfc18: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cfc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1cfc1c: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1cfc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1cfc20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cfc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc24: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1CFC24u;
    SET_GPR_U32(ctx, 31, 0x1CFC2Cu);
    ctx->pc = 0x1CFC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC24u;
            // 0x1cfc28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC2Cu; }
        if (ctx->pc != 0x1CFC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC2Cu; }
        if (ctx->pc != 0x1CFC2Cu) { return; }
    }
    ctx->pc = 0x1CFC2Cu;
    // 0x1cfc2c: 0x0  nop
    ctx->pc = 0x1cfc2cu;
    // NOP
label_1cfc30:
    // 0x1cfc30: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1cfc30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc38: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x1cfc38u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cfc3c: 0xc0735a0  jal         func_1CD680
    ctx->pc = 0x1CFC3Cu;
    SET_GPR_U32(ctx, 31, 0x1CFC44u);
    ctx->pc = 0x1CFC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC3Cu;
            // 0x1cfc40: 0x70053ca9  por         $a3, $zero, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD680u;
    if (runtime->hasFunction(0x1CD680u)) {
        auto targetFn = runtime->lookupFunction(0x1CD680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC44u; }
        if (ctx->pc != 0x1CFC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD680_0x1cd680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC44u; }
        if (ctx->pc != 0x1CFC44u) { return; }
    }
    ctx->pc = 0x1CFC44u;
    // 0x1cfc44: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1cfc44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cfc48: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1cfc48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cfc4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cfc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cfc50: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC50u;
            // 0x1cfc54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFC30u: goto label_1cfc30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CFC58u;
}
