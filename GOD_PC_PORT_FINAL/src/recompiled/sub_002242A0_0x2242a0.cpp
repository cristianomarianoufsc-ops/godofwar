#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002242A0
// Address: 0x2242a0 - 0x224308
void sub_002242A0_0x2242a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002242A0_0x2242a0");
#endif

    ctx->pc = 0x2242a0u;

    // 0x2242a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2242a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2242a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2242a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2242a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2242a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2242ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2242acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2242b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2242b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2242b4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2242b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2242b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2242b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2242bc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2242bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2242c0: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x2242c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    // 0x2242c4: 0x0  nop
    ctx->pc = 0x2242c4u;
    // NOP
label_2242c8:
    // 0x2242c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2242c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2242cc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x2242CCu;
    SET_GPR_U32(ctx, 31, 0x2242D4u);
    ctx->pc = 0x2242D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2242CCu;
            // 0x2242d0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2242D4u; }
        if (ctx->pc != 0x2242D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2242D4u; }
        if (ctx->pc != 0x2242D4u) { return; }
    }
    ctx->pc = 0x2242D4u;
    // 0x2242d4: 0xc0913a8  jal         func_244EA0
    ctx->pc = 0x2242D4u;
    SET_GPR_U32(ctx, 31, 0x2242DCu);
    ctx->pc = 0x2242D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2242D4u;
            // 0x2242d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244EA0u;
    if (runtime->hasFunction(0x244EA0u)) {
        auto targetFn = runtime->lookupFunction(0x244EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2242DCu; }
        if (ctx->pc != 0x2242DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244ea0_0x244eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2242DCu; }
        if (ctx->pc != 0x2242DCu) { return; }
    }
    ctx->pc = 0x2242DCu;
    // 0x2242dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2242dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2242e0: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2242E0u;
    {
        const bool branch_taken_0x2242e0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2242E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2242E0u;
            // 0x2242e4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242e0) {
            ctx->pc = 0x2242C8u;
            runtime->cooperativeGuestYield();
            goto label_2242c8;
        }
    }
    ctx->pc = 0x2242E8u;
    // 0x2242e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2242e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2242ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2242ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2242f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2242f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2242f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2242f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2242f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2242f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2242fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2242FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2242FCu;
            // 0x224300: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2242C8u: goto label_2242c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224304u;
    // 0x224304: 0x0  nop
    ctx->pc = 0x224304u;
    // NOP
}
