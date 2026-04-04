#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C948
// Address: 0x22c948 - 0x22c9d0
void sub_0022C948_0x22c948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C948_0x22c948");
#endif

    ctx->pc = 0x22c948u;

    // 0x22c948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22c94c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x22c94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22c950: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22c950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22c954: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22c954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22c958: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22c958u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22c95c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22c95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22c960: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22c960u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x22c964: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x22c964u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x22c968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c96c: 0xae04121c  sw          $a0, 0x121C($s0)
    ctx->pc = 0x22c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 4));
    // 0x22c970: 0xae251218  sw          $a1, 0x1218($s1)
    ctx->pc = 0x22c970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4632), GPR_U32(ctx, 5));
    // 0x22c974: 0xc08b418  jal         func_22D060
    ctx->pc = 0x22C974u;
    SET_GPR_U32(ctx, 31, 0x22C97Cu);
    ctx->pc = 0x22C978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C974u;
            // 0x22c978: 0xae441214  sw          $a0, 0x1214($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D060u;
    if (runtime->hasFunction(0x22D060u)) {
        auto targetFn = runtime->lookupFunction(0x22D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C97Cu; }
        if (ctx->pc != 0x22C97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22d060_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C97Cu; }
        if (ctx->pc != 0x22C97Cu) { return; }
    }
    ctx->pc = 0x22C97Cu;
    // 0x22c97c: 0xc08b296  jal         func_22CA58
    ctx->pc = 0x22C97Cu;
    SET_GPR_U32(ctx, 31, 0x22C984u);
    ctx->pc = 0x22CA58u;
    if (runtime->hasFunction(0x22CA58u)) {
        auto targetFn = runtime->lookupFunction(0x22CA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C984u; }
        if (ctx->pc != 0x22C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022CA58_0x22ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C984u; }
        if (ctx->pc != 0x22C984u) { return; }
    }
    ctx->pc = 0x22C984u;
    // 0x22c984: 0xc08b4e2  jal         func_22D388
    ctx->pc = 0x22C984u;
    SET_GPR_U32(ctx, 31, 0x22C98Cu);
    ctx->pc = 0x22D388u;
    if (runtime->hasFunction(0x22D388u)) {
        auto targetFn = runtime->lookupFunction(0x22D388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C98Cu; }
        if (ctx->pc != 0x22C98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D388_0x22d388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C98Cu; }
        if (ctx->pc != 0x22C98Cu) { return; }
    }
    ctx->pc = 0x22C98Cu;
    // 0x22c98c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22c990: 0xae00121c  sw          $zero, 0x121C($s0)
    ctx->pc = 0x22c990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 0));
    // 0x22c994: 0x8c421228  lw          $v0, 0x1228($v0)
    ctx->pc = 0x22c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4648)));
    // 0x22c998: 0xae201218  sw          $zero, 0x1218($s1)
    ctx->pc = 0x22c998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4632), GPR_U32(ctx, 0));
    // 0x22c99c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C99Cu;
    {
        const bool branch_taken_0x22c99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C99Cu;
            // 0x22c9a0: 0xae401214  sw          $zero, 0x1214($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c99c) {
            ctx->pc = 0x22C9B0u;
            goto label_22c9b0;
        }
    }
    ctx->pc = 0x22C9A4u;
    // 0x22c9a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22c9a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22C9A8u;
    {
        const bool branch_taken_0x22c9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C9A8u;
            // 0x22c9ac: 0x8c421220  lw          $v0, 0x1220($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9a8) {
            ctx->pc = 0x22C9B4u;
            goto label_22c9b4;
        }
    }
    ctx->pc = 0x22C9B0u;
label_22c9b0:
    // 0x22c9b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22c9b4:
    // 0x22c9b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22c9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c9b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22c9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c9bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22c9bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C9C4u;
            // 0x22c9c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C9B0u: goto label_22c9b0;
            case 0x22C9B4u: goto label_22c9b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C9CCu;
    // 0x22c9cc: 0x0  nop
    ctx->pc = 0x22c9ccu;
    // NOP
}
