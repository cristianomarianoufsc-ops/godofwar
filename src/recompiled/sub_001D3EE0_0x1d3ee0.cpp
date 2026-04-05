#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3EE0
// Address: 0x1d3ee0 - 0x1d3fa0
void sub_001D3EE0_0x1d3ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3EE0_0x1d3ee0");
#endif

    ctx->pc = 0x1d3ee0u;

    // 0x1d3ee0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d3ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d3ee4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d3ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d3ee8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d3ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1d3eec: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x1d3eecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d3ef0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d3ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d3ef4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d3ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ef8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1d3ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1d3efc: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x1d3efcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d3f00: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1d3f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1d3f04: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x1d3f04u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x1d3f08: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1d3f08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1d3f0c: 0x26742880  addiu       $s4, $s3, 0x2880
    ctx->pc = 0x1d3f0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 10368));
    // 0x1d3f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3f14: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d3f14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1d3f18: 0xae602880  sw          $zero, 0x2880($s3)
    ctx->pc = 0x1d3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10368), GPR_U32(ctx, 0));
    // 0x1d3f1c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d3f20: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1d3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d3f24: 0xc074f8a  jal         func_1D3E28
    ctx->pc = 0x1D3F24u;
    SET_GPR_U32(ctx, 31, 0x1D3F2Cu);
    ctx->pc = 0x1D3F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F24u;
            // 0x1d3f28: 0x9444002c  lhu         $a0, 0x2C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3E28u;
    if (runtime->hasFunction(0x1D3E28u)) {
        auto targetFn = runtime->lookupFunction(0x1D3E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F2Cu; }
        if (ctx->pc != 0x1D3F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3E28_0x1d3e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F2Cu; }
        if (ctx->pc != 0x1D3F2Cu) { return; }
    }
    ctx->pc = 0x1D3F2Cu;
    // 0x1d3f2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d3f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d3f34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d3f38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f3c: 0xc074d74  jal         func_1D35D0
    ctx->pc = 0x1D3F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F44u);
    ctx->pc = 0x1D3F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F3Cu;
            // 0x1d3f40: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D35D0u;
    if (runtime->hasFunction(0x1D35D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D35D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F44u; }
        if (ctx->pc != 0x1D3F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D35D0_0x1d35d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F44u; }
        if (ctx->pc != 0x1D3F44u) { return; }
    }
    ctx->pc = 0x1D3F44u;
    // 0x1d3f44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3F44u;
    {
        const bool branch_taken_0x1d3f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F44u;
            // 0x1d3f48: 0x8e622880  lw          $v0, 0x2880($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f44) {
            ctx->pc = 0x1D3F68u;
            goto label_1d3f68;
        }
    }
    ctx->pc = 0x1D3F4Cu;
    // 0x1d3f4c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d3f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d3f50: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3F50u;
    {
        const bool branch_taken_0x1d3f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3f50) {
            ctx->pc = 0x1D3F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F50u;
            // 0x1d3f54: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3F60u;
            goto label_1d3f60;
        }
    }
    ctx->pc = 0x1D3F58u;
    // 0x1d3f58: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d3f5c: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1d3f5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_1d3f60:
    // 0x1d3f60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3F60u;
    {
        const bool branch_taken_0x1d3f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F60u;
            // 0x1d3f64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f60) {
            ctx->pc = 0x1D3F6Cu;
            goto label_1d3f6c;
        }
    }
    ctx->pc = 0x1D3F68u;
label_1d3f68:
    // 0x1d3f68: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1d3f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d3f6c:
    // 0x1d3f6c: 0xc074fb6  jal         func_1D3ED8
    ctx->pc = 0x1D3F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F74u);
    ctx->pc = 0x1D3ED8u;
    if (runtime->hasFunction(0x1D3ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1D3ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F74u; }
        if (ctx->pc != 0x1D3F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d3ed8_0x1d3ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F74u; }
        if (ctx->pc != 0x1D3F74u) { return; }
    }
    ctx->pc = 0x1D3F74u;
    // 0x1d3f74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d3f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f78: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d3f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3f7c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d3f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3f80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d3f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3f84: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1d3f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3f88: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1d3f88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3f90: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1d3f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3f94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F94u;
            // 0x1d3f98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3F60u: goto label_1d3f60;
            case 0x1D3F68u: goto label_1d3f68;
            case 0x1D3F6Cu: goto label_1d3f6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3F9Cu;
    // 0x1d3f9c: 0x0  nop
    ctx->pc = 0x1d3f9cu;
    // NOP
}
