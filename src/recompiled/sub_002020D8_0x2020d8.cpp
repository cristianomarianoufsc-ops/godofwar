#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002020D8
// Address: 0x2020d8 - 0x202150
void sub_002020D8_0x2020d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002020D8_0x2020d8");
#endif

    ctx->pc = 0x2020d8u;

    // 0x2020d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2020d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2020dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2020dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2020e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2020e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2020e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2020e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2020e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2020ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2020ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2020f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2020f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2020f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2020f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2020fc: 0x0  nop
    ctx->pc = 0x2020fcu;
    // NOP
label_202100:
    // 0x202100: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x202100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x202104: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x202104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x202108: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x202108u;
    {
        const bool branch_taken_0x202108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x202108) {
            ctx->pc = 0x20210Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202108u;
            // 0x20210c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202124u;
            goto label_202124;
        }
    }
    ctx->pc = 0x202110u;
    // 0x202110: 0xc080710  jal         func_201C40
    ctx->pc = 0x202110u;
    SET_GPR_U32(ctx, 31, 0x202118u);
    ctx->pc = 0x202114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202110u;
            // 0x202114: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C40u;
    if (runtime->hasFunction(0x201C40u)) {
        auto targetFn = runtime->lookupFunction(0x201C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202118u; }
        if (ctx->pc != 0x202118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00201c40_0x201c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202118u; }
        if (ctx->pc != 0x202118u) { return; }
    }
    ctx->pc = 0x202118u;
    // 0x202118: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x202118u;
    {
        const bool branch_taken_0x202118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202118) {
            ctx->pc = 0x20211Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202118u;
            // 0x20211c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202138u;
            goto label_202138;
        }
    }
    ctx->pc = 0x202120u;
    // 0x202120: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_202124:
    // 0x202124: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x202124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x202128: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x202128u;
    {
        const bool branch_taken_0x202128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202128u;
            // 0x20212c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202128) {
            ctx->pc = 0x202100u;
            runtime->cooperativeGuestYield();
            goto label_202100;
        }
    }
    ctx->pc = 0x202130u;
    // 0x202130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202134: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x202134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_202138:
    // 0x202138: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x202138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20213c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20213cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202144: 0x3e00008  jr          $ra
    ctx->pc = 0x202144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202144u;
            // 0x202148: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202100u: goto label_202100;
            case 0x202124u: goto label_202124;
            case 0x202138u: goto label_202138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20214Cu;
    // 0x20214c: 0x0  nop
    ctx->pc = 0x20214cu;
    // NOP
}
