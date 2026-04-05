#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245318
// Address: 0x245318 - 0x2453a0
void sub_00245318_0x245318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245318_0x245318");
#endif

    ctx->pc = 0x245318u;

    // 0x245318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24531c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x245320: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x245324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245328: 0xc096408  jal         func_259020
    ctx->pc = 0x245328u;
    SET_GPR_U32(ctx, 31, 0x245330u);
    ctx->pc = 0x24532Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245328u;
            // 0x24532c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259020u;
    if (runtime->hasFunction(0x259020u)) {
        auto targetFn = runtime->lookupFunction(0x259020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245330u; }
        if (ctx->pc != 0x245330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259020_0x259038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245330u; }
        if (ctx->pc != 0x245330u) { return; }
    }
    ctx->pc = 0x245330u;
    // 0x245330: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x245330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x245334: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x245334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x245338: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x245338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x24533c: 0x24428778  addiu       $v0, $v0, -0x7888
    ctx->pc = 0x24533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936440));
    // 0x245340: 0x24631d90  addiu       $v1, $v1, 0x1D90
    ctx->pc = 0x245340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7568));
    // 0x245344: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x245344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x245348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24534c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x24534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x245350: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x245350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x245354: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x245354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x245358: 0xc096402  jal         func_259008
    ctx->pc = 0x245358u;
    SET_GPR_U32(ctx, 31, 0x245360u);
    ctx->pc = 0x24535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245358u;
            // 0x24535c: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245360u; }
        if (ctx->pc != 0x245360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245360u; }
        if (ctx->pc != 0x245360u) { return; }
    }
    ctx->pc = 0x245360u;
    // 0x245360: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x245360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x245364: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x245364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x245368: 0x24421d70  addiu       $v0, $v0, 0x1D70
    ctx->pc = 0x245368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7536));
    // 0x24536c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24536cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245370: 0xc096c76  jal         func_25B1D8
    ctx->pc = 0x245370u;
    SET_GPR_U32(ctx, 31, 0x245378u);
    ctx->pc = 0x245374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245370u;
            // 0x245374: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B1D8u;
    if (runtime->hasFunction(0x25B1D8u)) {
        auto targetFn = runtime->lookupFunction(0x25B1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245378u; }
        if (ctx->pc != 0x245378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B1D8_0x25b1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245378u; }
        if (ctx->pc != 0x245378u) { return; }
    }
    ctx->pc = 0x245378u;
    // 0x245378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24537c: 0xc096c88  jal         func_25B220
    ctx->pc = 0x24537Cu;
    SET_GPR_U32(ctx, 31, 0x245384u);
    ctx->pc = 0x245380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24537Cu;
            // 0x245380: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (runtime->hasFunction(0x25B220u)) {
        auto targetFn = runtime->lookupFunction(0x25B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245384u; }
        if (ctx->pc != 0x245384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B220_0x25b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245384u; }
        if (ctx->pc != 0x245384u) { return; }
    }
    ctx->pc = 0x245384u;
    // 0x245384: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24538c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24538cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245394: 0x3e00008  jr          $ra
    ctx->pc = 0x245394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245394u;
            // 0x245398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24539Cu;
    // 0x24539c: 0x0  nop
    ctx->pc = 0x24539cu;
    // NOP
}
