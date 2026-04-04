#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9058
// Address: 0x1a9058 - 0x1a90e8
void sub_001A9058_0x1a9058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9058_0x1a9058");
#endif

    ctx->pc = 0x1a9058u;

    // 0x1a9058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a905c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a9060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a906c: 0xc06a3f2  jal         func_1A8FC8
    ctx->pc = 0x1A906Cu;
    SET_GPR_U32(ctx, 31, 0x1A9074u);
    ctx->pc = 0x1A9070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A906Cu;
            // 0x1a9070: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8FC8u;
    if (runtime->hasFunction(0x1A8FC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A8FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9074u; }
        if (ctx->pc != 0x1A9074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8FC8_0x1a8fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9074u; }
        if (ctx->pc != 0x1A9074u) { return; }
    }
    ctx->pc = 0x1A9074u;
    // 0x1a9074: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A9074u;
    {
        const bool branch_taken_0x1a9074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9074) {
            ctx->pc = 0x1A9078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9074u;
            // 0x1a9078: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A90D4u;
            goto label_1a90d4;
        }
    }
    ctx->pc = 0x1A907Cu;
    // 0x1a907c: 0xc06a6e2  jal         func_1A9B88
    ctx->pc = 0x1A907Cu;
    SET_GPR_U32(ctx, 31, 0x1A9084u);
    ctx->pc = 0x1A9080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A907Cu;
            // 0x1a9080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B88u;
    if (runtime->hasFunction(0x1A9B88u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9084u; }
        if (ctx->pc != 0x1A9084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9B88_0x1a9b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9084u; }
        if (ctx->pc != 0x1A9084u) { return; }
    }
    ctx->pc = 0x1A9084u;
    // 0x1a9084: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a9088: 0x8c42cad8  lw          $v0, -0x3528($v0)
    ctx->pc = 0x1a9088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953688)));
    // 0x1a908c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A908Cu;
    {
        const bool branch_taken_0x1a908c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A908Cu;
            // 0x1a9090: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a908c) {
            ctx->pc = 0x1A90A0u;
            goto label_1a90a0;
        }
    }
    ctx->pc = 0x1A9094u;
    // 0x1a9094: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a9094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9098: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9098u;
    {
        const bool branch_taken_0x1a9098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A909Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9098u;
            // 0x1a909c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9098) {
            ctx->pc = 0x1A90BCu;
            goto label_1a90bc;
        }
    }
    ctx->pc = 0x1A90A0u;
label_1a90a0:
    // 0x1a90a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a90a4: 0x8c42cadc  lw          $v0, -0x3524($v0)
    ctx->pc = 0x1a90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953692)));
    // 0x1a90a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A90A8u;
    {
        const bool branch_taken_0x1a90a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90A8u;
            // 0x1a90ac: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90a8) {
            ctx->pc = 0x1A90BCu;
            goto label_1a90bc;
        }
    }
    ctx->pc = 0x1A90B0u;
    // 0x1a90b0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1a90b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1a90b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a90b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a90b8: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x1a90b8u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
label_1a90bc:
    // 0x1a90bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a90bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90c0: 0xc44ccac0  lwc1        $f12, -0x3540($v0)
    ctx->pc = 0x1a90c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a90c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a90c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90c8: 0xc06a43a  jal         func_1A90E8
    ctx->pc = 0x1A90C8u;
    SET_GPR_U32(ctx, 31, 0x1A90D0u);
    ctx->pc = 0x1A90CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90C8u;
            // 0x1a90cc: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A90E8u;
    if (runtime->hasFunction(0x1A90E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A90E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90D0u; }
        if (ctx->pc != 0x1A90D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A90E8_0x1a90e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90D0u; }
        if (ctx->pc != 0x1A90D0u) { return; }
    }
    ctx->pc = 0x1A90D0u;
    // 0x1a90d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a90d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a90d4:
    // 0x1a90d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a90d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a90d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a90d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a90dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A90DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A90E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90DCu;
            // 0x1a90e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A90A0u: goto label_1a90a0;
            case 0x1A90BCu: goto label_1a90bc;
            case 0x1A90D4u: goto label_1a90d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A90E4u;
    // 0x1a90e4: 0x0  nop
    ctx->pc = 0x1a90e4u;
    // NOP
}
