#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245250
// Address: 0x245250 - 0x2452d8
void sub_00245250_0x245250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245250_0x245250");
#endif

    ctx->pc = 0x245250u;

    // 0x245250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x245254: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x245254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x245258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24525c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245260: 0xc096408  jal         func_259020
    ctx->pc = 0x245260u;
    SET_GPR_U32(ctx, 31, 0x245268u);
    ctx->pc = 0x245264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245260u;
            // 0x245264: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259020u;
    if (runtime->hasFunction(0x259020u)) {
        auto targetFn = runtime->lookupFunction(0x259020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245268u; }
        if (ctx->pc != 0x245268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259020_0x259038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245268u; }
        if (ctx->pc != 0x245268u) { return; }
    }
    ctx->pc = 0x245268u;
    // 0x245268: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x245268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x24526c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x24526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x245270: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x245270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x245274: 0x244287c8  addiu       $v0, $v0, -0x7838
    ctx->pc = 0x245274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936520));
    // 0x245278: 0x24631df8  addiu       $v1, $v1, 0x1DF8
    ctx->pc = 0x245278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7672));
    // 0x24527c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24527cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x245280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245284: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x245284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x245288: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x245288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x24528c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x24528cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x245290: 0xc096402  jal         func_259008
    ctx->pc = 0x245290u;
    SET_GPR_U32(ctx, 31, 0x245298u);
    ctx->pc = 0x245294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245290u;
            // 0x245294: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245298u; }
        if (ctx->pc != 0x245298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245298u; }
        if (ctx->pc != 0x245298u) { return; }
    }
    ctx->pc = 0x245298u;
    // 0x245298: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x245298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x24529c: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x24529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2452a0: 0x24421dd8  addiu       $v0, $v0, 0x1DD8
    ctx->pc = 0x2452a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7640));
    // 0x2452a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2452a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452a8: 0xc096c2e  jal         func_25B0B8
    ctx->pc = 0x2452A8u;
    SET_GPR_U32(ctx, 31, 0x2452B0u);
    ctx->pc = 0x2452ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2452A8u;
            // 0x2452ac: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B0B8u;
    if (runtime->hasFunction(0x25B0B8u)) {
        auto targetFn = runtime->lookupFunction(0x25B0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452B0u; }
        if (ctx->pc != 0x2452B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B0B8_0x25b0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452B0u; }
        if (ctx->pc != 0x2452B0u) { return; }
    }
    ctx->pc = 0x2452B0u;
    // 0x2452b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2452b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452b4: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2452B4u;
    SET_GPR_U32(ctx, 31, 0x2452BCu);
    ctx->pc = 0x2452B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2452B4u;
            // 0x2452b8: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25B100u;
    if (runtime->hasFunction(0x25B100u)) {
        auto targetFn = runtime->lookupFunction(0x25B100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452BCu; }
        if (ctx->pc != 0x2452BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025B100_0x25b100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452BCu; }
        if (ctx->pc != 0x2452BCu) { return; }
    }
    ctx->pc = 0x2452BCu;
    // 0x2452bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2452bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2452c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2452c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2452c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2452c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2452c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2452cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2452CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2452D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2452CCu;
            // 0x2452d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2452D4u;
    // 0x2452d4: 0x0  nop
    ctx->pc = 0x2452d4u;
    // NOP
}
