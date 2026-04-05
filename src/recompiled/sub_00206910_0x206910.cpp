#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00206910
// Address: 0x206910 - 0x206968
void sub_00206910_0x206910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206910_0x206910");
#endif

    ctx->pc = 0x206910u;

    // 0x206910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x206914: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x206914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x206918: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x206918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20691c: 0x24900090  addiu       $s0, $a0, 0x90
    ctx->pc = 0x20691cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x206920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x206924: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x206924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x206928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20692c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x20692Cu;
    SET_GPR_U32(ctx, 31, 0x206934u);
    ctx->pc = 0x206930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20692Cu;
            // 0x206930: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206934u; }
        if (ctx->pc != 0x206934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206934u; }
        if (ctx->pc != 0x206934u) { return; }
    }
    ctx->pc = 0x206934u;
    // 0x206934: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x206934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x206938: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x206938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20693c: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x20693cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x206940: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x206940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x206944: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x206944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x206948: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x206948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x20694c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x20694cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x206950: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x206950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20695c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20695cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x206960: 0x3e00008  jr          $ra
    ctx->pc = 0x206960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206960u;
            // 0x206964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206968u;
}
