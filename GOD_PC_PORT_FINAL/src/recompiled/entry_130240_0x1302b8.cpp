#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_130240
// Address: 0x130240 - 0x1302b8
void entry_130240_0x1302b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_130240_0x1302b8");
#endif

    ctx->pc = 0x130240u;

    // 0x130240: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x130240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x130244: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x130244u;
    {
        const bool branch_taken_0x130244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130244u;
            // 0x130248: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130244) {
            ctx->pc = 0x1302A8u;
            goto label_1302a8;
        }
    }
    ctx->pc = 0x13024Cu;
    // 0x13024c: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x13024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x130250: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x130250u;
    {
        const bool branch_taken_0x130250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130250) {
            ctx->pc = 0x130254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130250u;
            // 0x130254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1302ACu;
            goto label_1302ac;
        }
    }
    ctx->pc = 0x130258u;
    // 0x130258: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x130258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x13025c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13025Cu;
    {
        const bool branch_taken_0x13025c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13025c) {
            ctx->pc = 0x130260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13025Cu;
            // 0x130260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1302ACu;
            goto label_1302ac;
        }
    }
    ctx->pc = 0x130264u;
    // 0x130264: 0x84840062  lh          $a0, 0x62($a0)
    ctx->pc = 0x130264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x130268: 0x480000f  bltz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x130268u;
    {
        const bool branch_taken_0x130268 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x13026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130268u;
            // 0x13026c: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130268) {
            ctx->pc = 0x1302A8u;
            goto label_1302a8;
        }
    }
    ctx->pc = 0x130270u;
    // 0x130270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130274: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x130274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x130278: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x130278u;
    {
        const bool branch_taken_0x130278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130278u;
            // 0x13027c: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130278) {
            ctx->pc = 0x130284u;
            goto label_130284;
        }
    }
    ctx->pc = 0x130280u;
label_130280:
    // 0x130280: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x130280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_130284:
    // 0x130284: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x130284u;
    {
        const bool branch_taken_0x130284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x130288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130284u;
            // 0x130288: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130284) {
            ctx->pc = 0x13029Cu;
            goto label_13029c;
        }
    }
    ctx->pc = 0x13028Cu;
    // 0x13028c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13028cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130290: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x130290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x130294: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130294u;
    {
        const bool branch_taken_0x130294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x130298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130294u;
            // 0x130298: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130294) {
            ctx->pc = 0x130280u;
            runtime->cooperativeGuestYield();
            goto label_130280;
        }
    }
    ctx->pc = 0x13029Cu;
label_13029c:
    // 0x13029c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13029Cu;
    {
        const bool branch_taken_0x13029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13029Cu;
            // 0x1302a0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13029c) {
            ctx->pc = 0x1302ACu;
            goto label_1302ac;
        }
    }
    ctx->pc = 0x1302A4u;
    // 0x1302a4: 0x0  nop
    ctx->pc = 0x1302a4u;
    // NOP
label_1302a8:
    // 0x1302a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1302a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1302ac:
    // 0x1302ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1302ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1302ACu;
            // 0x1302b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130280u: goto label_130280;
            case 0x130284u: goto label_130284;
            case 0x13029Cu: goto label_13029c;
            case 0x1302A8u: goto label_1302a8;
            case 0x1302ACu: goto label_1302ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1302B4u;
    // 0x1302b4: 0x0  nop
    ctx->pc = 0x1302b4u;
    // NOP
}
