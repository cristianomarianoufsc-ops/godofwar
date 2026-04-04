#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175978
// Address: 0x175978 - 0x1759d0
void sub_00175978_0x175978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175978_0x175978");
#endif

    ctx->pc = 0x175978u;

    // 0x175978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17597c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x17597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x175980: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175988: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x175988u;
    SET_GPR_U32(ctx, 31, 0x175990u);
    ctx->pc = 0x17598Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175988u;
            // 0x17598c: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175990u; }
        if (ctx->pc != 0x175990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175990u; }
        if (ctx->pc != 0x175990u) { return; }
    }
    ctx->pc = 0x175990u;
    // 0x175990: 0xc08e476  jal         func_2391D8
    ctx->pc = 0x175990u;
    SET_GPR_U32(ctx, 31, 0x175998u);
    ctx->pc = 0x175994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175990u;
            // 0x175994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2391D8u;
    if (runtime->hasFunction(0x2391D8u)) {
        auto targetFn = runtime->lookupFunction(0x2391D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175998u; }
        if (ctx->pc != 0x175998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2391d8_0x2391e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175998u; }
        if (ctx->pc != 0x175998u) { return; }
    }
    ctx->pc = 0x175998u;
    // 0x175998: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x175998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x17599c: 0xae024a64  sw          $v0, 0x4A64($s0)
    ctx->pc = 0x17599cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19044), GPR_U32(ctx, 2));
    // 0x1759a0: 0x2466d8d8  addiu       $a2, $v1, -0x2728
    ctx->pc = 0x1759a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957272));
    // 0x1759a4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1759a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1759a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1759a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1759ac: 0x8c65d8d8  lw          $a1, -0x2728($v1)
    ctx->pc = 0x1759acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957272)));
    // 0x1759b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1759b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1759b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1759b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1759b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1759b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1759bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1759bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1759c0: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1759c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1759c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1759c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1759c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1759C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1759CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1759C8u;
            // 0x1759cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1759D0u;
}
