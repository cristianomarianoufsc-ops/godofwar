#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209FC0
// Address: 0x209fc0 - 0x20a010
void sub_00209FC0_0x209fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209FC0_0x209fc0");
#endif

    ctx->pc = 0x209fc0u;

    // 0x209fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209fc4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x209fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x209fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x209fcc: 0x2442a4f0  addiu       $v0, $v0, -0x5B10
    ctx->pc = 0x209fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943984));
    // 0x209fd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x209fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x209fd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209fdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209fe0: 0xc082810  jal         func_20A040
    ctx->pc = 0x209FE0u;
    SET_GPR_U32(ctx, 31, 0x209FE8u);
    ctx->pc = 0x209FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209FE0u;
            // 0x209fe4: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A040u;
    if (runtime->hasFunction(0x20A040u)) {
        auto targetFn = runtime->lookupFunction(0x20A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FE8u; }
        if (ctx->pc != 0x209FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a040_0x20a0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FE8u; }
        if (ctx->pc != 0x209FE8u) { return; }
    }
    ctx->pc = 0x209FE8u;
    // 0x209fe8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x209fe8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x209fec: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209FECu;
    {
        const bool branch_taken_0x209fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209FECu;
            // 0x209ff0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fec) {
            ctx->pc = 0x20A000u;
            goto label_20a000;
        }
    }
    ctx->pc = 0x209FF4u;
    // 0x209ff4: 0xc0827c0  jal         func_209F00
    ctx->pc = 0x209FF4u;
    SET_GPR_U32(ctx, 31, 0x209FFCu);
    ctx->pc = 0x209FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209FF4u;
            // 0x209ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209F00u;
    if (runtime->hasFunction(0x209F00u)) {
        auto targetFn = runtime->lookupFunction(0x209F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FFCu; }
        if (ctx->pc != 0x209FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_209f00_0x209f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FFCu; }
        if (ctx->pc != 0x209FFCu) { return; }
    }
    ctx->pc = 0x209FFCu;
    // 0x209ffc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x209ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a000:
    // 0x20a000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a008: 0x3e00008  jr          $ra
    ctx->pc = 0x20A008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A008u;
            // 0x20a00c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A000u: goto label_20a000;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A010u;
}
