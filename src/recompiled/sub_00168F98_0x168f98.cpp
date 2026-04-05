#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168F98
// Address: 0x168f98 - 0x169010
void sub_00168F98_0x168f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168F98_0x168f98");
#endif

    ctx->pc = 0x168f98u;

    // 0x168f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168f9c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x168f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168fa4: 0x24e30360  addiu       $v1, $a3, 0x360
    ctx->pc = 0x168fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 864));
    // 0x168fa8: 0x8ce60360  lw          $a2, 0x360($a3)
    ctx->pc = 0x168fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 864)));
    // 0x168fac: 0x0  nop
    ctx->pc = 0x168facu;
    // NOP
label_168fb0:
    // 0x168fb0: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168FB0u;
    {
        const bool branch_taken_0x168fb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x168FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FB0u;
            // 0x168fb4: 0x24e20360  addiu       $v0, $a3, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fb0) {
            ctx->pc = 0x168FC8u;
            goto label_168fc8;
        }
    }
    ctx->pc = 0x168FB8u;
    // 0x168fb8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x168fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x168fbc: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x168FBCu;
    {
        const bool branch_taken_0x168fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x168fbc) {
            ctx->pc = 0x168FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168FBCu;
            // 0x168fc0: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x168FB0u;
            runtime->cooperativeGuestYield();
            goto label_168fb0;
        }
    }
    ctx->pc = 0x168FC4u;
    // 0x168fc4: 0x24e20360  addiu       $v0, $a3, 0x360
    ctx->pc = 0x168fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 864));
label_168fc8:
    // 0x168fc8: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x168FC8u;
    {
        const bool branch_taken_0x168fc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x168FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FC8u;
            // 0x168fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fc8) {
            ctx->pc = 0x169000u;
            goto label_169000;
        }
    }
    ctx->pc = 0x168FD0u;
    // 0x168fd0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x168fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x168fd4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x168fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x168fd8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x168fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fdc: 0xace2039c  sw          $v0, 0x39C($a3)
    ctx->pc = 0x168fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 924), GPR_U32(ctx, 2));
    // 0x168fe0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x168fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x168fe4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x168fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x168fe8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x168fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x168fec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x168fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x168ff0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x168ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x168ff4: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x168FF4u;
    SET_GPR_U32(ctx, 31, 0x168FFCu);
    ctx->pc = 0x168FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168FF4u;
            // 0x168ff8: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FFCu; }
        if (ctx->pc != 0x168FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FFCu; }
        if (ctx->pc != 0x168FFCu) { return; }
    }
    ctx->pc = 0x168FFCu;
    // 0x168ffc: 0x0  nop
    ctx->pc = 0x168ffcu;
    // NOP
label_169000:
    // 0x169000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169004: 0x3e00008  jr          $ra
    ctx->pc = 0x169004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169004u;
            // 0x169008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168FB0u: goto label_168fb0;
            case 0x168FC8u: goto label_168fc8;
            case 0x169000u: goto label_169000;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16900Cu;
    // 0x16900c: 0x0  nop
    ctx->pc = 0x16900cu;
    // NOP
}
