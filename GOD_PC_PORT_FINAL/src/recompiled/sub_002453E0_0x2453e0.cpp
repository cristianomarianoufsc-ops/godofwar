#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002453E0
// Address: 0x2453e0 - 0x245468
void sub_002453E0_0x2453e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002453E0_0x2453e0");
#endif

    ctx->pc = 0x2453e0u;

    // 0x2453e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2453e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2453e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2453e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2453e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2453e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2453ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2453ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2453f0: 0xc096408  jal         func_259020
    ctx->pc = 0x2453F0u;
    SET_GPR_U32(ctx, 31, 0x2453F8u);
    ctx->pc = 0x2453F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2453F0u;
            // 0x2453f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259020u;
    if (runtime->hasFunction(0x259020u)) {
        auto targetFn = runtime->lookupFunction(0x259020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453F8u; }
        if (ctx->pc != 0x2453F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259020_0x259038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453F8u; }
        if (ctx->pc != 0x2453F8u) { return; }
    }
    ctx->pc = 0x2453F8u;
    // 0x2453f8: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2453f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2453fc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2453fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x245400: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x245400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x245404: 0x24428728  addiu       $v0, $v0, -0x78D8
    ctx->pc = 0x245404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936360));
    // 0x245408: 0x24631d28  addiu       $v1, $v1, 0x1D28
    ctx->pc = 0x245408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7464));
    // 0x24540c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24540cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x245410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245414: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x245414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x245418: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x245418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x24541c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x24541cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x245420: 0xc096402  jal         func_259008
    ctx->pc = 0x245420u;
    SET_GPR_U32(ctx, 31, 0x245428u);
    ctx->pc = 0x245424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245420u;
            // 0x245424: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245428u; }
        if (ctx->pc != 0x245428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245428u; }
        if (ctx->pc != 0x245428u) { return; }
    }
    ctx->pc = 0x245428u;
    // 0x245428: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x245428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x24542c: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x24542cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x245430: 0x24421d08  addiu       $v0, $v0, 0x1D08
    ctx->pc = 0x245430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7432));
    // 0x245434: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245438: 0xc096cbe  jal         func_25B2F8
    ctx->pc = 0x245438u;
    SET_GPR_U32(ctx, 31, 0x245440u);
    ctx->pc = 0x24543Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245438u;
            // 0x24543c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B2F8u;
    if (runtime->hasFunction(0x25B2F8u)) {
        auto targetFn = runtime->lookupFunction(0x25B2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245440u; }
        if (ctx->pc != 0x245440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B2F8_0x25b2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245440u; }
        if (ctx->pc != 0x245440u) { return; }
    }
    ctx->pc = 0x245440u;
    // 0x245440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245444: 0xc096cd0  jal         func_25B340
    ctx->pc = 0x245444u;
    SET_GPR_U32(ctx, 31, 0x24544Cu);
    ctx->pc = 0x245448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245444u;
            // 0x245448: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B340u;
    if (runtime->hasFunction(0x25B340u)) {
        auto targetFn = runtime->lookupFunction(0x25B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24544Cu; }
        if (ctx->pc != 0x24544Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B340_0x25b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24544Cu; }
        if (ctx->pc != 0x24544Cu) { return; }
    }
    ctx->pc = 0x24544Cu;
    // 0x24544c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24544cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245454: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x245454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24545c: 0x3e00008  jr          $ra
    ctx->pc = 0x24545Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24545Cu;
            // 0x245460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245464u;
    // 0x245464: 0x0  nop
    ctx->pc = 0x245464u;
    // NOP
}
