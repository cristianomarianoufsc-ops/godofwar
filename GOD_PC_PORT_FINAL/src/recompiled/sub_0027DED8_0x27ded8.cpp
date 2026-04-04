#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027DED8
// Address: 0x27ded8 - 0x27df30
void sub_0027DED8_0x27ded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DED8_0x27ded8");
#endif

    ctx->pc = 0x27ded8u;

    // 0x27ded8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27ded8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27dedc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x27dedcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27dee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27dee4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x27dee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dee8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27dee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27deec: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x27deecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x27def0: 0x94660028  lhu         $a2, 0x28($v1)
    ctx->pc = 0x27def0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x27def4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x27def4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x27def8: 0x9467002c  lhu         $a3, 0x2C($v1)
    ctx->pc = 0x27def8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x27defc: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x27defcu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27df00: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x27df00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df04: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x27df04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x27df08: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x27df08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x27df0c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27DF0Cu;
    {
        const bool branch_taken_0x27df0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x27df0c) {
            ctx->pc = 0x27DF10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF0Cu;
            // 0x27df10: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x27DF14u;
            goto label_27df14;
        }
    }
    ctx->pc = 0x27DF14u;
label_27df14:
    // 0x27df14: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x27df14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x27df18: 0x1012  mflo        $v0
    ctx->pc = 0x27df18u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x27df1c: 0xc0a088c  jal         func_282230
    ctx->pc = 0x27DF1Cu;
    SET_GPR_U32(ctx, 31, 0x27DF24u);
    ctx->pc = 0x27DF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF1Cu;
            // 0x27df20: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282230u;
    if (runtime->hasFunction(0x282230u)) {
        auto targetFn = runtime->lookupFunction(0x282230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF24u; }
        if (ctx->pc != 0x27DF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282230_0x282270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF24u; }
        if (ctx->pc != 0x27DF24u) { return; }
    }
    ctx->pc = 0x27DF24u;
    // 0x27df24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27df24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27df28: 0x3e00008  jr          $ra
    ctx->pc = 0x27DF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF28u;
            // 0x27df2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DF14u: goto label_27df14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DF30u;
}
