#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233038
// Address: 0x233038 - 0x233090
void sub_00233038_0x233038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233038_0x233038");
#endif

    ctx->pc = 0x233038u;

    // 0x233038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23303c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23303cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x233040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x233040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x233044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233048: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x233048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23304c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233050: 0xc060292  jal         func_180A48
    ctx->pc = 0x233050u;
    SET_GPR_U32(ctx, 31, 0x233058u);
    ctx->pc = 0x233054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233050u;
            // 0x233054: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233058u; }
        if (ctx->pc != 0x233058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233058u; }
        if (ctx->pc != 0x233058u) { return; }
    }
    ctx->pc = 0x233058u;
    // 0x233058: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x233058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23305c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x23305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x233060: 0x2442ac00  addiu       $v0, $v0, -0x5400
    ctx->pc = 0x233060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945792));
    // 0x233064: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x233064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x233068: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x233068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x23306c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x23306cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x233070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x233070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233074: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x233074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x233078: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x233078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23307c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23307cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233084: 0x3e00008  jr          $ra
    ctx->pc = 0x233084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233084u;
            // 0x233088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23308Cu;
    // 0x23308c: 0x0  nop
    ctx->pc = 0x23308cu;
    // NOP
}
