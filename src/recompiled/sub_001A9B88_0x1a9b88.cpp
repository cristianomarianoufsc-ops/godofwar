#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9B88
// Address: 0x1a9b88 - 0x1a9bd8
void sub_001A9B88_0x1a9b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9B88_0x1a9b88");
#endif

    ctx->pc = 0x1a9b88u;

    // 0x1a9b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9b8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9b98: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x1a9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1a9b9c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9B9Cu;
    {
        const bool branch_taken_0x1a9b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B9Cu;
            // 0x1a9ba0: 0x2490007c  addiu       $s0, $a0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b9c) {
            ctx->pc = 0x1A9BC4u;
            goto label_1a9bc4;
        }
    }
    ctx->pc = 0x1A9BA4u;
    // 0x1a9ba4: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x1a9ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1a9ba8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a9bac: 0xac44cac8  sw          $a0, -0x3538($v0)
    ctx->pc = 0x1a9bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 4));
    // 0x1a9bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9bb4: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x1a9bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x1a9bb8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A9BB8u;
    SET_GPR_U32(ctx, 31, 0x1A9BC0u);
    ctx->pc = 0x1A9BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BB8u;
            // 0x1a9bbc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BC0u; }
        if (ctx->pc != 0x1A9BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BC0u; }
        if (ctx->pc != 0x1A9BC0u) { return; }
    }
    ctx->pc = 0x1A9BC0u;
    // 0x1a9bc0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a9bc4:
    // 0x1a9bc4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1a9bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9bc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BD0u;
            // 0x1a9bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9BC4u: goto label_1a9bc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9BD8u;
}
