#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243918
// Address: 0x243918 - 0x243978
void sub_00243918_0x243918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243918_0x243918");
#endif

    ctx->pc = 0x243918u;

    // 0x243918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24391c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x24391cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243920: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x243920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x243924: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x243924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x243928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24392c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24392cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243934: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x243934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x243938: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x243938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24393c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24393Cu;
    {
        const bool branch_taken_0x24393c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24393Cu;
            // 0x243940: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24393c) {
            ctx->pc = 0x243950u;
            goto label_243950;
        }
    }
    ctx->pc = 0x243944u;
    // 0x243944: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x243944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x243948: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x243948u;
    SET_GPR_U32(ctx, 31, 0x243950u);
    ctx->pc = 0x24394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243948u;
            // 0x24394c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243950u; }
        if (ctx->pc != 0x243950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243950u; }
        if (ctx->pc != 0x243950u) { return; }
    }
    ctx->pc = 0x243950u;
label_243950:
    // 0x243950: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x243950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x243954: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x243954u;
    {
        const bool branch_taken_0x243954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243954) {
            ctx->pc = 0x243958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243954u;
            // 0x243958: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243968u;
            goto label_243968;
        }
    }
    ctx->pc = 0x24395Cu;
    // 0x24395c: 0xc067ad2  jal         func_19EB48
    ctx->pc = 0x24395Cu;
    SET_GPR_U32(ctx, 31, 0x243964u);
    ctx->pc = 0x243960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24395Cu;
            // 0x243960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EB48u;
    if (runtime->hasFunction(0x19EB48u)) {
        auto targetFn = runtime->lookupFunction(0x19EB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243964u; }
        if (ctx->pc != 0x243964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_19eb48_0x19eb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243964u; }
        if (ctx->pc != 0x243964u) { return; }
    }
    ctx->pc = 0x243964u;
    // 0x243964: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x243964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243968:
    // 0x243968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24396c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24396cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243970: 0x3e00008  jr          $ra
    ctx->pc = 0x243970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243970u;
            // 0x243974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243950u: goto label_243950;
            case 0x243968u: goto label_243968;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243978u;
}
