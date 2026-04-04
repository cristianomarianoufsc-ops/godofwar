#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001460C0
// Address: 0x1460c0 - 0x146158
void sub_001460C0_0x1460c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001460C0_0x1460c0");
#endif

    ctx->pc = 0x1460c0u;

    // 0x1460c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1460c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1460c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1460c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1460c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1460c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1460cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1460ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1460d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1460d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1460d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1460d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1460d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1460d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1460dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1460dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1460e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1460e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1460e4: 0xc0526c4  jal         func_149B10
    ctx->pc = 0x1460E4u;
    SET_GPR_U32(ctx, 31, 0x1460ECu);
    ctx->pc = 0x1460E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1460E4u;
            // 0x1460e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149B10u;
    if (runtime->hasFunction(0x149B10u)) {
        auto targetFn = runtime->lookupFunction(0x149B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460ECu; }
        if (ctx->pc != 0x1460ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149B10_0x149b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460ECu; }
        if (ctx->pc != 0x1460ECu) { return; }
    }
    ctx->pc = 0x1460ECu;
    // 0x1460ec: 0x8c530020  lw          $s3, 0x20($v0)
    ctx->pc = 0x1460ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1460f0: 0xc05309e  jal         func_14C278
    ctx->pc = 0x1460F0u;
    SET_GPR_U32(ctx, 31, 0x1460F8u);
    ctx->pc = 0x1460F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1460F0u;
            // 0x1460f4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460F8u; }
        if (ctx->pc != 0x1460F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460F8u; }
        if (ctx->pc != 0x1460F8u) { return; }
    }
    ctx->pc = 0x1460F8u;
    // 0x1460f8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1460f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1460fc: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1460fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x146100: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x146100u;
    {
        const bool branch_taken_0x146100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x146104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146100u;
            // 0x146104: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146100) {
            ctx->pc = 0x146120u;
            goto label_146120;
        }
    }
    ctx->pc = 0x146108u;
    // 0x146108: 0x8e630cdc  lw          $v1, 0xCDC($s3)
    ctx->pc = 0x146108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3292)));
    // 0x14610c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14610Cu;
    {
        const bool branch_taken_0x14610c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14610c) {
            ctx->pc = 0x146110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14610Cu;
            // 0x146110: 0xae620cd8  sw          $v0, 0xCD8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146118u;
            goto label_146118;
        }
    }
    ctx->pc = 0x146114u;
    // 0x146114: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x146114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_146118:
    // 0x146118: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x146118u;
    {
        const bool branch_taken_0x146118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146118u;
            // 0x14611c: 0xae620cdc  sw          $v0, 0xCDC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146118) {
            ctx->pc = 0x146138u;
            goto label_146138;
        }
    }
    ctx->pc = 0x146120u;
label_146120:
    // 0x146120: 0x8e630cd8  lw          $v1, 0xCD8($s3)
    ctx->pc = 0x146120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3288)));
    // 0x146124: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x146124u;
    {
        const bool branch_taken_0x146124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146124) {
            ctx->pc = 0x146128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146124u;
            // 0x146128: 0xae620cdc  sw          $v0, 0xCDC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146130u;
            goto label_146130;
        }
    }
    ctx->pc = 0x14612Cu;
    // 0x14612c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x14612cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_146130:
    // 0x146130: 0xae620cd8  sw          $v0, 0xCD8($s3)
    ctx->pc = 0x146130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3288), GPR_U32(ctx, 2));
    // 0x146134: 0x0  nop
    ctx->pc = 0x146134u;
    // NOP
label_146138:
    // 0x146138: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x146138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14613c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14613cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146144: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x146144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14614c: 0x3e00008  jr          $ra
    ctx->pc = 0x14614Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14614Cu;
            // 0x146150: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146118u: goto label_146118;
            case 0x146120u: goto label_146120;
            case 0x146130u: goto label_146130;
            case 0x146138u: goto label_146138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146154u;
    // 0x146154: 0x0  nop
    ctx->pc = 0x146154u;
    // NOP
}
