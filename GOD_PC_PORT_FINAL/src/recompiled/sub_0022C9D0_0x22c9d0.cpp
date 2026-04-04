#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C9D0
// Address: 0x22c9d0 - 0x22ca58
void sub_0022C9D0_0x22c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C9D0_0x22c9d0");
#endif

    ctx->pc = 0x22c9d0u;

    // 0x22c9d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22c9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22c9d4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x22c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22c9d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22c9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22c9dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22c9e0: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22c9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x22c9e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22c9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22c9e8: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x22c9e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x22c9ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22c9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22c9f0: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x22c9f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x22c9f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22c9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c9fc: 0xae451218  sw          $a1, 0x1218($s2)
    ctx->pc = 0x22c9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4632), GPR_U32(ctx, 5));
    // 0x22ca00: 0xae24121c  sw          $a0, 0x121C($s1)
    ctx->pc = 0x22ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4636), GPR_U32(ctx, 4));
    // 0x22ca04: 0xc08b418  jal         func_22D060
    ctx->pc = 0x22CA04u;
    SET_GPR_U32(ctx, 31, 0x22CA0Cu);
    ctx->pc = 0x22CA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA04u;
            // 0x22ca08: 0xae641214  sw          $a0, 0x1214($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D060u;
    if (runtime->hasFunction(0x22D060u)) {
        auto targetFn = runtime->lookupFunction(0x22D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CA0Cu; }
        if (ctx->pc != 0x22CA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22d060_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CA0Cu; }
        if (ctx->pc != 0x22CA0Cu) { return; }
    }
    ctx->pc = 0x22CA0Cu;
    // 0x22ca0c: 0xc08b2c6  jal         func_22CB18
    ctx->pc = 0x22CA0Cu;
    SET_GPR_U32(ctx, 31, 0x22CA14u);
    ctx->pc = 0x22CA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA0Cu;
            // 0x22ca10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CB18u;
    if (runtime->hasFunction(0x22CB18u)) {
        auto targetFn = runtime->lookupFunction(0x22CB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CA14u; }
        if (ctx->pc != 0x22CA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022CB18_0x22cb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CA14u; }
        if (ctx->pc != 0x22CA14u) { return; }
    }
    ctx->pc = 0x22CA14u;
    // 0x22ca14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ca18: 0xae20121c  sw          $zero, 0x121C($s1)
    ctx->pc = 0x22ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4636), GPR_U32(ctx, 0));
    // 0x22ca1c: 0x8c421228  lw          $v0, 0x1228($v0)
    ctx->pc = 0x22ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4648)));
    // 0x22ca20: 0xae401218  sw          $zero, 0x1218($s2)
    ctx->pc = 0x22ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4632), GPR_U32(ctx, 0));
    // 0x22ca24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22CA24u;
    {
        const bool branch_taken_0x22ca24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA24u;
            // 0x22ca28: 0xae601214  sw          $zero, 0x1214($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca24) {
            ctx->pc = 0x22CA38u;
            goto label_22ca38;
        }
    }
    ctx->pc = 0x22CA2Cu;
    // 0x22ca2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ca30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22CA30u;
    {
        const bool branch_taken_0x22ca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA30u;
            // 0x22ca34: 0x8c421220  lw          $v0, 0x1220($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca30) {
            ctx->pc = 0x22CA3Cu;
            goto label_22ca3c;
        }
    }
    ctx->pc = 0x22CA38u;
label_22ca38:
    // 0x22ca38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22ca3c:
    // 0x22ca3c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22ca3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ca40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22ca40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ca44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ca44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ca48: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22ca48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ca4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ca50: 0x3e00008  jr          $ra
    ctx->pc = 0x22CA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA50u;
            // 0x22ca54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22CA38u: goto label_22ca38;
            case 0x22CA3Cu: goto label_22ca3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22CA58u;
}
