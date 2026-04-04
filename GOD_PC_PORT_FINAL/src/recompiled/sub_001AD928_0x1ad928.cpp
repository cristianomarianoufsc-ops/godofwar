#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD928
// Address: 0x1ad928 - 0x1ad998
void sub_001AD928_0x1ad928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD928_0x1ad928");
#endif

    ctx->pc = 0x1ad928u;

    // 0x1ad928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ad92c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ad92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ad930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ad938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ad93c: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x1ad93cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ad940: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AD940u;
    {
        const bool branch_taken_0x1ad940 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad940) {
            ctx->pc = 0x1AD944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD940u;
            // 0x1ad944: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD984u;
            goto label_1ad984;
        }
    }
    ctx->pc = 0x1AD948u;
    // 0x1ad948: 0x82220009  lb          $v0, 0x9($s1)
    ctx->pc = 0x1ad948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1ad94c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD94Cu;
    {
        const bool branch_taken_0x1ad94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD94Cu;
            // 0x1ad950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad94c) {
            ctx->pc = 0x1AD980u;
            goto label_1ad980;
        }
    }
    ctx->pc = 0x1AD954u;
    // 0x1ad954: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1ad954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1ad958: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1ad958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1ad95c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1ad95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ad960: 0x40f809  jalr        $v0
    ctx->pc = 0x1AD960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD968u);
        ctx->pc = 0x1AD964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD960u;
            // 0x1ad964: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD968u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD980u: goto label_1ad980;
            case 0x1AD984u: goto label_1ad984;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD968u; }
            if (ctx->pc != 0x1AD968u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD968u;
    // 0x1ad968: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ad968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ad96c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ad96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1ad970: 0x8c44ca20  lw          $a0, -0x35E0($v0)
    ctx->pc = 0x1ad970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953504)));
    // 0x1ad974: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ad974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad978: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1AD978u;
    SET_GPR_U32(ctx, 31, 0x1AD980u);
    ctx->pc = 0x1AD97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD978u;
            // 0x1ad97c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD980u; }
        if (ctx->pc != 0x1AD980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD980u; }
        if (ctx->pc != 0x1AD980u) { return; }
    }
    ctx->pc = 0x1AD980u;
label_1ad980:
    // 0x1ad980: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ad980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad984:
    // 0x1ad984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ad984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad98c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD98Cu;
            // 0x1ad990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD980u: goto label_1ad980;
            case 0x1AD984u: goto label_1ad984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD994u;
    // 0x1ad994: 0x0  nop
    ctx->pc = 0x1ad994u;
    // NOP
}
