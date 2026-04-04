#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175BA0
// Address: 0x175ba0 - 0x175c08
void sub_00175BA0_0x175ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175BA0_0x175ba0");
#endif

    ctx->pc = 0x175ba0u;

    // 0x175ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175ba4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x175ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x175ba8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x175ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x175bac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x175bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175bb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x175bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x175bb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x175bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175bb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175bbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175bc0: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x175BC0u;
    SET_GPR_U32(ctx, 31, 0x175BC8u);
    ctx->pc = 0x175BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BC0u;
            // 0x175bc4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BC8u; }
        if (ctx->pc != 0x175BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BC8u; }
        if (ctx->pc != 0x175BC8u) { return; }
    }
    ctx->pc = 0x175BC8u;
    // 0x175bc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175bcc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x175bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175bd0: 0xc05d698  jal         func_175A60
    ctx->pc = 0x175BD0u;
    SET_GPR_U32(ctx, 31, 0x175BD8u);
    ctx->pc = 0x175BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BD0u;
            // 0x175bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A60u;
    if (runtime->hasFunction(0x175A60u)) {
        auto targetFn = runtime->lookupFunction(0x175A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BD8u; }
        if (ctx->pc != 0x175BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175a60_0x175a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BD8u; }
        if (ctx->pc != 0x175BD8u) { return; }
    }
    ctx->pc = 0x175BD8u;
    // 0x175bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175bdc: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x175bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x175be0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x175be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175be4: 0xc05db16  jal         func_176C58
    ctx->pc = 0x175BE4u;
    SET_GPR_U32(ctx, 31, 0x175BECu);
    ctx->pc = 0x175BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BE4u;
            // 0x175be8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176C58u;
    if (runtime->hasFunction(0x176C58u)) {
        auto targetFn = runtime->lookupFunction(0x176C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BECu; }
        if (ctx->pc != 0x175BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176C58_0x176c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BECu; }
        if (ctx->pc != 0x175BECu) { return; }
    }
    ctx->pc = 0x175BECu;
    // 0x175bec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175bf0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x175bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175bf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x175bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175bf8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x175bf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175c00: 0x3e00008  jr          $ra
    ctx->pc = 0x175C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175C00u;
            // 0x175c04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175C08u;
}
