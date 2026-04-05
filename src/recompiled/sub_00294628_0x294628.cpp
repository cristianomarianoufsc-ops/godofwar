#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294628
// Address: 0x294628 - 0x294690
void sub_00294628_0x294628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294628_0x294628");
#endif

    ctx->pc = 0x294628u;

    // 0x294628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29462c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294630: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x294634: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29463c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x29463cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x294640: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x294640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x294644: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x294644u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x294648: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294648u;
    {
        const bool branch_taken_0x294648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x294648) {
            ctx->pc = 0x294658u;
            goto label_294658;
        }
    }
    ctx->pc = 0x294650u;
    // 0x294650: 0xc0a648c  jal         func_299230
    ctx->pc = 0x294650u;
    SET_GPR_U32(ctx, 31, 0x294658u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294658u; }
        if (ctx->pc != 0x294658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294658u; }
        if (ctx->pc != 0x294658u) { return; }
    }
    ctx->pc = 0x294658u;
label_294658:
    // 0x294658: 0xc0a4e5c  jal         func_293970
    ctx->pc = 0x294658u;
    SET_GPR_U32(ctx, 31, 0x294660u);
    ctx->pc = 0x29465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294658u;
            // 0x29465c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293970u;
    if (runtime->hasFunction(0x293970u)) {
        auto targetFn = runtime->lookupFunction(0x293970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294660u; }
        if (ctx->pc != 0x294660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293970_0x293980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294660u; }
        if (ctx->pc != 0x294660u) { return; }
    }
    ctx->pc = 0x294660u;
    // 0x294660: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x294660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294664: 0xf  sync
    ctx->pc = 0x294664u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294668: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294668u;
    {
        const bool branch_taken_0x294668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29466Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294668u;
            // 0x29466c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294668) {
            ctx->pc = 0x29467Cu;
            goto label_29467c;
        }
    }
    ctx->pc = 0x294670u;
    // 0x294670: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x294670u;
    SET_GPR_U32(ctx, 31, 0x294678u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294678u; }
        if (ctx->pc != 0x294678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294678u; }
        if (ctx->pc != 0x294678u) { return; }
    }
    ctx->pc = 0x294678u;
    // 0x294678: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x294678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29467c:
    // 0x29467c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29467cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294680: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294688: 0x3e00008  jr          $ra
    ctx->pc = 0x294688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294688u;
            // 0x29468c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294658u: goto label_294658;
            case 0x29467Cu: goto label_29467c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294690u;
}
