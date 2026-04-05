#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00232FE0
// Address: 0x232fe0 - 0x233038
void sub_00232FE0_0x232fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232FE0_0x232fe0");
#endif

    ctx->pc = 0x232fe0u;

    // 0x232fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232fe4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x232fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x232fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x232fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ff0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x232ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232ff8: 0xc060292  jal         func_180A48
    ctx->pc = 0x232FF8u;
    SET_GPR_U32(ctx, 31, 0x233000u);
    ctx->pc = 0x232FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232FF8u;
            // 0x232ffc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233000u; }
        if (ctx->pc != 0x233000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233000u; }
        if (ctx->pc != 0x233000u) { return; }
    }
    ctx->pc = 0x233000u;
    // 0x233000: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x233000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x233004: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x233004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x233008: 0x2442ac78  addiu       $v0, $v0, -0x5388
    ctx->pc = 0x233008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945912));
    // 0x23300c: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x23300cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x233010: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x233010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x233014: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x233014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x233018: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x233018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23301c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x23301cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x233020: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x233020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x233024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23302c: 0x3e00008  jr          $ra
    ctx->pc = 0x23302Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23302Cu;
            // 0x233030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x233034u;
    // 0x233034: 0x0  nop
    ctx->pc = 0x233034u;
    // NOP
}
