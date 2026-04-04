#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243BB8
// Address: 0x243bb8 - 0x243c18
void sub_00243BB8_0x243bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243BB8_0x243bb8");
#endif

    ctx->pc = 0x243bb8u;

    // 0x243bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243bbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x243bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x243bc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x243bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243bc8: 0xc096408  jal         func_259020
    ctx->pc = 0x243BC8u;
    SET_GPR_U32(ctx, 31, 0x243BD0u);
    ctx->pc = 0x243BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243BC8u;
            // 0x243bcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259020u;
    if (runtime->hasFunction(0x259020u)) {
        auto targetFn = runtime->lookupFunction(0x259020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BD0u; }
        if (ctx->pc != 0x243BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259020_0x259038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BD0u; }
        if (ctx->pc != 0x243BD0u) { return; }
    }
    ctx->pc = 0x243BD0u;
    // 0x243bd0: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x243bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x243bd4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x243bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bdc: 0x24429ab0  addiu       $v0, $v0, -0x6550
    ctx->pc = 0x243bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941360));
    // 0x243be0: 0xc096402  jal         func_259008
    ctx->pc = 0x243BE0u;
    SET_GPR_U32(ctx, 31, 0x243BE8u);
    ctx->pc = 0x243BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243BE0u;
            // 0x243be4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BE8u; }
        if (ctx->pc != 0x243BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BE8u; }
        if (ctx->pc != 0x243BE8u) { return; }
    }
    ctx->pc = 0x243BE8u;
    // 0x243be8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x243be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243bec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x243becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bf0: 0x24422170  addiu       $v0, $v0, 0x2170
    ctx->pc = 0x243bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8560));
    // 0x243bf4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x243bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x243bf8: 0xc0966a6  jal         func_259A98
    ctx->pc = 0x243BF8u;
    SET_GPR_U32(ctx, 31, 0x243C00u);
    ctx->pc = 0x243BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243BF8u;
            // 0x243bfc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A98u;
    if (runtime->hasFunction(0x259A98u)) {
        auto targetFn = runtime->lookupFunction(0x259A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C00u; }
        if (ctx->pc != 0x243C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259A98_0x259a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C00u; }
        if (ctx->pc != 0x243C00u) { return; }
    }
    ctx->pc = 0x243C00u;
    // 0x243c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x243c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243c08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x243c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243c10: 0x3e00008  jr          $ra
    ctx->pc = 0x243C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C10u;
            // 0x243c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243C18u;
}
