#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284950
// Address: 0x284950 - 0x2849b8
void sub_00284950_0x284950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284950_0x284950");
#endif

    ctx->pc = 0x284950u;

    // 0x284950: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x284950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x284954: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x284954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x284958: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x284958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x28495c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x28495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x284960: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x284960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x284964: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x284964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x284968: 0xc0a1186  jal         func_284618
    ctx->pc = 0x284968u;
    SET_GPR_U32(ctx, 31, 0x284970u);
    ctx->pc = 0x28496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284968u;
            // 0x28496c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284970u; }
        if (ctx->pc != 0x284970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284970u; }
        if (ctx->pc != 0x284970u) { return; }
    }
    ctx->pc = 0x284970u;
    // 0x284970: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x284970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x284974: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x284974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x284978: 0xc0a1186  jal         func_284618
    ctx->pc = 0x284978u;
    SET_GPR_U32(ctx, 31, 0x284980u);
    ctx->pc = 0x28497Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284978u;
            // 0x28497c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284980u; }
        if (ctx->pc != 0x284980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284980u; }
        if (ctx->pc != 0x284980u) { return; }
    }
    ctx->pc = 0x284980u;
    // 0x284980: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x284980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x284984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284988: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x284988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28498c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284990: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x284990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x284994: 0xc0a11ae  jal         func_2846B8
    ctx->pc = 0x284994u;
    SET_GPR_U32(ctx, 31, 0x28499Cu);
    ctx->pc = 0x284998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284994u;
            // 0x284998: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846B8u;
    if (runtime->hasFunction(0x2846B8u)) {
        auto targetFn = runtime->lookupFunction(0x2846B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28499Cu; }
        if (ctx->pc != 0x28499Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2846b8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28499Cu; }
        if (ctx->pc != 0x28499Cu) { return; }
    }
    ctx->pc = 0x28499Cu;
    // 0x28499c: 0xc0a113a  jal         func_2844E8
    ctx->pc = 0x28499Cu;
    SET_GPR_U32(ctx, 31, 0x2849A4u);
    ctx->pc = 0x2849A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28499Cu;
            // 0x2849a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2844E8u;
    if (runtime->hasFunction(0x2844E8u)) {
        auto targetFn = runtime->lookupFunction(0x2844E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849A4u; }
        if (ctx->pc != 0x2849A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2844e8_0x284618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2849A4u; }
        if (ctx->pc != 0x2849A4u) { return; }
    }
    ctx->pc = 0x2849A4u;
    // 0x2849a4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2849a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2849a8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2849a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2849ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2849ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2849B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2849ACu;
            // 0x2849b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2849B4u;
    // 0x2849b4: 0x0  nop
    ctx->pc = 0x2849b4u;
    // NOP
}
