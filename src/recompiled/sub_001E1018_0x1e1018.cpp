#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1018
// Address: 0x1e1018 - 0x1e1078
void sub_001E1018_0x1e1018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1018_0x1e1018");
#endif

    ctx->pc = 0x1e1018u;

    // 0x1e1018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e101c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e1020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1028: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e1028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e102c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e102cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e1030: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e1030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e1034: 0x40f809  jalr        $v0
    ctx->pc = 0x1E1034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E103Cu);
        ctx->pc = 0x1E1038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1034u;
            // 0x1e1038: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E103Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E106Cu: goto label_1e106c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E103Cu; }
            if (ctx->pc != 0x1E103Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E103Cu;
    // 0x1e103c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1E103Cu;
    {
        const bool branch_taken_0x1e103c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e103c) {
            ctx->pc = 0x1E1040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E103Cu;
            // 0x1e1040: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E106Cu;
            goto label_1e106c;
        }
    }
    ctx->pc = 0x1E1044u;
    // 0x1e1044: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e1044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e1048: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e1048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e104c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e1050: 0x40f809  jalr        $v0
    ctx->pc = 0x1E1050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1058u);
        ctx->pc = 0x1E1054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1050u;
            // 0x1e1054: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E1058u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E106Cu: goto label_1e106c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E1058u; }
            if (ctx->pc != 0x1E1058u) { return; }
        }
        }
    }
    ctx->pc = 0x1E1058u;
    // 0x1e1058: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x1e1058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x1e105c: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x1e105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x1e1060: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e1060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e1064: 0xac4301ac  sw          $v1, 0x1AC($v0)
    ctx->pc = 0x1e1064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 3));
    // 0x1e1068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e1068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e106c:
    // 0x1e106c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e106cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1070: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1070u;
            // 0x1e1074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E106Cu: goto label_1e106c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1078u;
}
