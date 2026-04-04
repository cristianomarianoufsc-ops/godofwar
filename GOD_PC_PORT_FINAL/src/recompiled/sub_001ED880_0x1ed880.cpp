#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED880
// Address: 0x1ed880 - 0x1ed930
void sub_001ED880_0x1ed880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED880_0x1ed880");
#endif

    ctx->pc = 0x1ed880u;

    // 0x1ed880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ed880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ed884: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ed884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ed888: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1ed888u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1ed88c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ed88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ed890: 0x8e25e2a4  lw          $a1, -0x1D5C($s1)
    ctx->pc = 0x1ed890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959780)));
    // 0x1ed894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed898: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ed898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ed89c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed8a0: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1ED8A0u;
    SET_GPR_U32(ctx, 31, 0x1ED8A8u);
    ctx->pc = 0x1ED8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8A0u;
            // 0x1ed8a4: 0x24a50808  addiu       $a1, $a1, 0x808 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8A8u; }
        if (ctx->pc != 0x1ED8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8A8u; }
        if (ctx->pc != 0x1ED8A8u) { return; }
    }
    ctx->pc = 0x1ED8A8u;
    // 0x1ed8a8: 0x26120018  addiu       $s2, $s0, 0x18
    ctx->pc = 0x1ed8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1ed8ac: 0x8e22e2a4  lw          $v0, -0x1D5C($s1)
    ctx->pc = 0x1ed8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959780)));
    // 0x1ed8b0: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x1ed8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1ed8b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ed8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ed8b8: 0x8c46e84c  lw          $a2, -0x17B4($v0)
    ctx->pc = 0x1ed8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1ed8bc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1ed8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ed8c0: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1ed8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1ed8c4: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1ed8c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1ed8c8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1ed8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1ed8cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1ED8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED8D4u);
        ctx->pc = 0x1ED8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8CCu;
            // 0x1ed8d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED8D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8D4u; }
            if (ctx->pc != 0x1ED8D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED8D4u;
    // 0x1ed8d4: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1ed8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1ed8d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ed8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed8dc: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1ed8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ed8e0: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1ED8E0u;
    SET_GPR_U32(ctx, 31, 0x1ED8E8u);
    ctx->pc = 0x1ED8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8E0u;
            // 0x1ed8e4: 0x24a50034  addiu       $a1, $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8E8u; }
        if (ctx->pc != 0x1ED8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8E8u; }
        if (ctx->pc != 0x1ED8E8u) { return; }
    }
    ctx->pc = 0x1ED8E8u;
    // 0x1ed8e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ed8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ed8ec: 0x8e26e2a4  lw          $a2, -0x1D5C($s1)
    ctx->pc = 0x1ed8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959780)));
    // 0x1ed8f0: 0x8c42e270  lw          $v0, -0x1D90($v0)
    ctx->pc = 0x1ed8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959728)));
    // 0x1ed8f4: 0x24030170  addiu       $v1, $zero, 0x170
    ctx->pc = 0x1ed8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1ed8f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed8fc: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x1ed8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x1ed900: 0x8cc40750  lw          $a0, 0x750($a2)
    ctx->pc = 0x1ed900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1872)));
    // 0x1ed904: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1ed904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ed908: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x1ed908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x1ed90c: 0xc07c6a0  jal         func_1F1A80
    ctx->pc = 0x1ED90Cu;
    SET_GPR_U32(ctx, 31, 0x1ED914u);
    ctx->pc = 0x1ED910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED90Cu;
            // 0x1ed910: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1A80u;
    if (runtime->hasFunction(0x1F1A80u)) {
        auto targetFn = runtime->lookupFunction(0x1F1A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED914u; }
        if (ctx->pc != 0x1ED914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f1a80_0x1f1ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED914u; }
        if (ctx->pc != 0x1ED914u) { return; }
    }
    ctx->pc = 0x1ED914u;
    // 0x1ed914: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ed914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed918: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ed918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed91c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ed91cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed924: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED924u;
            // 0x1ed928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED92Cu;
    // 0x1ed92c: 0x0  nop
    ctx->pc = 0x1ed92cu;
    // NOP
}
