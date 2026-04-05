#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175890
// Address: 0x175890 - 0x1758f8
void sub_00175890_0x175890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175890_0x175890");
#endif

    ctx->pc = 0x175890u;

    // 0x175890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175894: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x175894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x175898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17589c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1758a0: 0xc05d5f6  jal         func_1757D8
    ctx->pc = 0x1758A0u;
    SET_GPR_U32(ctx, 31, 0x1758A8u);
    ctx->pc = 0x1758A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1758A0u;
            // 0x1758a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1757D8u;
    if (runtime->hasFunction(0x1757D8u)) {
        auto targetFn = runtime->lookupFunction(0x1757D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758A8u; }
        if (ctx->pc != 0x1758A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1757d8_0x175828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758A8u; }
        if (ctx->pc != 0x1758A8u) { return; }
    }
    ctx->pc = 0x1758A8u;
    // 0x1758a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1758a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758ac: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x1758ACu;
    SET_GPR_U32(ctx, 31, 0x1758B4u);
    ctx->pc = 0x1758B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1758ACu;
            // 0x1758b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758B4u; }
        if (ctx->pc != 0x1758B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758B4u; }
        if (ctx->pc != 0x1758B4u) { return; }
    }
    ctx->pc = 0x1758B4u;
    // 0x1758b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1758b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758b8: 0xc05da7e  jal         func_1769F8
    ctx->pc = 0x1758B8u;
    SET_GPR_U32(ctx, 31, 0x1758C0u);
    ctx->pc = 0x1758BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1758B8u;
            // 0x1758bc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1769F8u;
    if (runtime->hasFunction(0x1769F8u)) {
        auto targetFn = runtime->lookupFunction(0x1769F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758C0u; }
        if (ctx->pc != 0x1758C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001769F8_0x1769f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758C0u; }
        if (ctx->pc != 0x1758C0u) { return; }
    }
    ctx->pc = 0x1758C0u;
    // 0x1758c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1758C0u;
    {
        const bool branch_taken_0x1758c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1758c0) {
            ctx->pc = 0x1758C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1758C0u;
            // 0x1758c4: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1758D0u;
            goto label_1758d0;
        }
    }
    ctx->pc = 0x1758C8u;
    // 0x1758c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1758C8u;
    {
        const bool branch_taken_0x1758c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1758CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1758C8u;
            // 0x1758cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758c8) {
            ctx->pc = 0x1758DCu;
            goto label_1758dc;
        }
    }
    ctx->pc = 0x1758D0u;
label_1758d0:
    // 0x1758d0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1758d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1758d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1758d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1758d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1758d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1758dc:
    // 0x1758dc: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1758dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1758e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1758e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1758e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1758e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1758e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1758e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1758ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1758ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1758F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1758ECu;
            // 0x1758f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1758D0u: goto label_1758d0;
            case 0x1758DCu: goto label_1758dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1758F4u;
    // 0x1758f4: 0x0  nop
    ctx->pc = 0x1758f4u;
    // NOP
}
