#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CC6E0
// Address: 0x1cc6e0 - 0x1cc740
void sub_001CC6E0_0x1cc6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC6E0_0x1cc6e0");
#endif

    ctx->pc = 0x1cc6e0u;

    // 0x1cc6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cc6e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc6e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cc6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cc6ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cc6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cc6f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cc6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1cc6f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cc6f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc700: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cc700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc704: 0x70072ca9  por         $a1, $zero, $a3
    ctx->pc = 0x1cc704u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x1cc708: 0xc074ce4  jal         func_1D3390
    ctx->pc = 0x1CC708u;
    SET_GPR_U32(ctx, 31, 0x1CC710u);
    ctx->pc = 0x1CC70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC708u;
            // 0x1cc70c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3390u;
    if (runtime->hasFunction(0x1D3390u)) {
        auto targetFn = runtime->lookupFunction(0x1D3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC710u; }
        if (ctx->pc != 0x1CC710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3390_0x1d3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC710u; }
        if (ctx->pc != 0x1CC710u) { return; }
    }
    ctx->pc = 0x1CC710u;
    // 0x1cc710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc714: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cc714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc718: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cc718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc71c: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CC71Cu;
    SET_GPR_U32(ctx, 31, 0x1CC724u);
    ctx->pc = 0x1CC720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC71Cu;
            // 0x1cc720: 0x3047ffff  andi        $a3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (runtime->hasFunction(0x1CC198u)) {
        auto targetFn = runtime->lookupFunction(0x1CC198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC724u; }
        if (ctx->pc != 0x1CC724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC198_0x1cc198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC724u; }
        if (ctx->pc != 0x1CC724u) { return; }
    }
    ctx->pc = 0x1CC724u;
    // 0x1cc724: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cc724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc728: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cc728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc72c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1cc72cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc734: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC734u;
            // 0x1cc738: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC73Cu;
    // 0x1cc73c: 0x0  nop
    ctx->pc = 0x1cc73cu;
    // NOP
}
