#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185848
// Address: 0x185848 - 0x1858e8
void sub_00185848_0x185848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185848_0x185848");
#endif

    ctx->pc = 0x185848u;

    // 0x185848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18584c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x185850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18585c: 0xc05eb30  jal         func_17ACC0
    ctx->pc = 0x18585Cu;
    SET_GPR_U32(ctx, 31, 0x185864u);
    ctx->pc = 0x185860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18585Cu;
            // 0x185860: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ACC0u;
    if (runtime->hasFunction(0x17ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x17ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185864u; }
        if (ctx->pc != 0x185864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17acc0_0x17ace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185864u; }
        if (ctx->pc != 0x185864u) { return; }
    }
    ctx->pc = 0x185864u;
    // 0x185864: 0x2611001c  addiu       $s1, $s0, 0x1C
    ctx->pc = 0x185864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x185868: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x185868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x18586c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18586cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185870: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x185870u;
    SET_GPR_U32(ctx, 31, 0x185878u);
    ctx->pc = 0x185874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185870u;
            // 0x185874: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185878u; }
        if (ctx->pc != 0x185878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185878u; }
        if (ctx->pc != 0x185878u) { return; }
    }
    ctx->pc = 0x185878u;
    // 0x185878: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x185878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18587c: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x18587cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x185880: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x185880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x185884: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x185884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x185888: 0x34630210  ori         $v1, $v1, 0x210
    ctx->pc = 0x185888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)528);
    // 0x18588c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x18588cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x185890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x185890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185894: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x185894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x185898: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x185898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x18589c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x18589cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1858a0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1858a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1858a4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1858a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1858a8: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1858a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1858ac: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1858acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1858b0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1858b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1858b4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1858b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1858b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1858b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1858bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1858bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1858c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1858c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1858c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1858C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1858C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1858C4u;
            // 0x1858c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1858CCu;
    // 0x1858cc: 0x0  nop
    ctx->pc = 0x1858ccu;
    // NOP
    // 0x1858d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1858D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1858D8u;
    // 0x1858d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1858d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1858dc: 0x0  nop
    ctx->pc = 0x1858dcu;
    // NOP
    // 0x1858e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1858e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1858e4: 0x0  nop
    ctx->pc = 0x1858e4u;
    // NOP
}
