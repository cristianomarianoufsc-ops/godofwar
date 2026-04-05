#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ffd0
// Address: 0x26ffd0 - 0x270048
void entry_26ffd0_0x270048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ffd0_0x270048");
#endif

    ctx->pc = 0x26ffd0u;

    // 0x26ffd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ffd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26ffd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ffdc: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26FFDCu;
    {
        const bool branch_taken_0x26ffdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FFDCu;
            // 0x26ffe0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffdc) {
            ctx->pc = 0x270034u;
            goto label_270034;
        }
    }
    ctx->pc = 0x26FFE4u;
    // 0x26ffe4: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x26ffe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x26ffe8: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x26FFE8u;
    {
        const bool branch_taken_0x26ffe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FFE8u;
            // 0x26ffec: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffe8) {
            ctx->pc = 0x270034u;
            goto label_270034;
        }
    }
    ctx->pc = 0x26FFF0u;
    // 0x26fff0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26fff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26fff4: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x26fff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26fff8: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x26fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x26fffc: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x26fffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x270000: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x270000u;
    {
        const bool branch_taken_0x270000 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x270004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270000u;
            // 0x270004: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270000) {
            ctx->pc = 0x270038u;
            goto label_270038;
        }
    }
    ctx->pc = 0x270008u;
    // 0x270008: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x270008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x27000c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x27000cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270010: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x270010u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270014: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x270014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x270018: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x270018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27001c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x27001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x270020: 0xe0f809  jalr        $a3
    ctx->pc = 0x270020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x270028u);
        ctx->pc = 0x270024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270020u;
            // 0x270024: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x270028u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x270034u: goto label_270034;
            case 0x270038u: goto label_270038;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x270028u; }
            if (ctx->pc != 0x270028u) { return; }
        }
        }
    }
    ctx->pc = 0x270028u;
    // 0x270028: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x270028u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27002c: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x27002cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270030: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x270030u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270034:
    // 0x270034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_270038:
    // 0x270038: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x270038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27003c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27003cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270040: 0x3e00008  jr          $ra
    ctx->pc = 0x270040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270040u;
            // 0x270044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x270034u: goto label_270034;
            case 0x270038u: goto label_270038;
            default: break;
        }
        return;
    }
    ctx->pc = 0x270048u;
}
