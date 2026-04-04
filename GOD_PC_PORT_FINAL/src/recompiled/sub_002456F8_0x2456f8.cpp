#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002456F8
// Address: 0x2456f8 - 0x245768
void sub_002456F8_0x2456f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002456F8_0x2456f8");
#endif

    ctx->pc = 0x2456f8u;

    // 0x2456f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2456f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2456fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2456fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x245700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x245704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245708: 0xc096408  jal         func_259020
    ctx->pc = 0x245708u;
    SET_GPR_U32(ctx, 31, 0x245710u);
    ctx->pc = 0x24570Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245708u;
            // 0x24570c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259020u;
    if (runtime->hasFunction(0x259020u)) {
        auto targetFn = runtime->lookupFunction(0x259020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245710u; }
        if (ctx->pc != 0x245710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259020_0x259038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245710u; }
        if (ctx->pc != 0x245710u) { return; }
    }
    ctx->pc = 0x245710u;
    // 0x245710: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x245710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x245714: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x245714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x245718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24571c: 0x24428638  addiu       $v0, $v0, -0x79C8
    ctx->pc = 0x24571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936120));
    // 0x245720: 0xc096402  jal         func_259008
    ctx->pc = 0x245720u;
    SET_GPR_U32(ctx, 31, 0x245728u);
    ctx->pc = 0x245724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245720u;
            // 0x245724: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245728u; }
        if (ctx->pc != 0x245728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245728u; }
        if (ctx->pc != 0x245728u) { return; }
    }
    ctx->pc = 0x245728u;
    // 0x245728: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x245728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x24572c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x24572cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x245730: 0x24421ca8  addiu       $v0, $v0, 0x1CA8
    ctx->pc = 0x245730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7336));
    // 0x245734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245738: 0xc096d64  jal         func_25B590
    ctx->pc = 0x245738u;
    SET_GPR_U32(ctx, 31, 0x245740u);
    ctx->pc = 0x24573Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245738u;
            // 0x24573c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B590u;
    if (runtime->hasFunction(0x25B590u)) {
        auto targetFn = runtime->lookupFunction(0x25B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245740u; }
        if (ctx->pc != 0x245740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B590_0x25b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245740u; }
        if (ctx->pc != 0x245740u) { return; }
    }
    ctx->pc = 0x245740u;
    // 0x245740: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245744: 0xc096d76  jal         func_25B5D8
    ctx->pc = 0x245744u;
    SET_GPR_U32(ctx, 31, 0x24574Cu);
    ctx->pc = 0x245748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245744u;
            // 0x245748: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B5D8u;
    if (runtime->hasFunction(0x25B5D8u)) {
        auto targetFn = runtime->lookupFunction(0x25B5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24574Cu; }
        if (ctx->pc != 0x24574Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B5D8_0x25b5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24574Cu; }
        if (ctx->pc != 0x24574Cu) { return; }
    }
    ctx->pc = 0x24574Cu;
    // 0x24574c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24574cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245754: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x245754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24575c: 0x3e00008  jr          $ra
    ctx->pc = 0x24575Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24575Cu;
            // 0x245760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245764u;
    // 0x245764: 0x0  nop
    ctx->pc = 0x245764u;
    // NOP
}
