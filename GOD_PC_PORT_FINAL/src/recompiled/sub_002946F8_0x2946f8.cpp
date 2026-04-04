#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002946F8
// Address: 0x2946f8 - 0x294760
void sub_002946F8_0x2946f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002946F8_0x2946f8");
#endif

    ctx->pc = 0x2946f8u;

    // 0x2946f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2946f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2946fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2946fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294700: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x294704: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29470c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x29470cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x294710: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x294710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x294714: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x294714u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x294718: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294718u;
    {
        const bool branch_taken_0x294718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x294718) {
            ctx->pc = 0x294728u;
            goto label_294728;
        }
    }
    ctx->pc = 0x294720u;
    // 0x294720: 0xc0a648c  jal         func_299230
    ctx->pc = 0x294720u;
    SET_GPR_U32(ctx, 31, 0x294728u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294728u; }
        if (ctx->pc != 0x294728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294728u; }
        if (ctx->pc != 0x294728u) { return; }
    }
    ctx->pc = 0x294728u;
label_294728:
    // 0x294728: 0xc0a4e64  jal         func_293990
    ctx->pc = 0x294728u;
    SET_GPR_U32(ctx, 31, 0x294730u);
    ctx->pc = 0x29472Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294728u;
            // 0x29472c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293990u;
    if (runtime->hasFunction(0x293990u)) {
        auto targetFn = runtime->lookupFunction(0x293990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294730u; }
        if (ctx->pc != 0x294730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293990_0x293a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294730u; }
        if (ctx->pc != 0x294730u) { return; }
    }
    ctx->pc = 0x294730u;
    // 0x294730: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x294730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294734: 0xf  sync
    ctx->pc = 0x294734u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294738: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294738u;
    {
        const bool branch_taken_0x294738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29473Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294738u;
            // 0x29473c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294738) {
            ctx->pc = 0x29474Cu;
            goto label_29474c;
        }
    }
    ctx->pc = 0x294740u;
    // 0x294740: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x294740u;
    SET_GPR_U32(ctx, 31, 0x294748u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294748u; }
        if (ctx->pc != 0x294748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294748u; }
        if (ctx->pc != 0x294748u) { return; }
    }
    ctx->pc = 0x294748u;
    // 0x294748: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x294748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29474c:
    // 0x29474c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29474cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294750: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294758: 0x3e00008  jr          $ra
    ctx->pc = 0x294758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29475Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294758u;
            // 0x29475c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294728u: goto label_294728;
            case 0x29474Cu: goto label_29474c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294760u;
}
