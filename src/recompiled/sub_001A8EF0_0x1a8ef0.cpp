#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8EF0
// Address: 0x1a8ef0 - 0x1a8fc8
void sub_001A8EF0_0x1a8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8EF0_0x1a8ef0");
#endif

    ctx->pc = 0x1a8ef0u;

    // 0x1a8ef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a8ef4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8ef8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a8ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a8efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a8f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a8f04: 0x8c44ca10  lw          $a0, -0x35F0($v0)
    ctx->pc = 0x1a8f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953488)));
    // 0x1a8f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a8f0c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A8F0Cu;
    SET_GPR_U32(ctx, 31, 0x1A8F14u);
    ctx->pc = 0x1A8F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F0Cu;
            // 0x1a8f10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F14u; }
        if (ctx->pc != 0x1A8F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F14u; }
        if (ctx->pc != 0x1A8F14u) { return; }
    }
    ctx->pc = 0x1A8F14u;
    // 0x1a8f14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a8f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f18: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1a8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1a8f1c: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x1a8f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
    // 0x1a8f20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a8f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a8f24: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a8f28: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a8f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a8f2c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8F2Cu;
    {
        const bool branch_taken_0x1a8f2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F2Cu;
            // 0x1a8f30: 0xac91000c  sw          $s1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f2c) {
            ctx->pc = 0x1A8F40u;
            goto label_1a8f40;
        }
    }
    ctx->pc = 0x1A8F34u;
    // 0x1a8f34: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A8F34u;
    {
        const bool branch_taken_0x1a8f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F34u;
            // 0x1a8f38: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f34) {
            ctx->pc = 0x1A8F94u;
            goto label_1a8f94;
        }
    }
    ctx->pc = 0x1A8F3Cu;
    // 0x1a8f3c: 0x0  nop
    ctx->pc = 0x1a8f3cu;
    // NOP
label_1a8f40:
    // 0x1a8f40: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1a8f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1a8f44: 0x8ca32620  lw          $v1, 0x2620($a1)
    ctx->pc = 0x1a8f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9760)));
    // 0x1a8f48: 0x24a22620  addiu       $v0, $a1, 0x2620
    ctx->pc = 0x1a8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 9760));
    // 0x1a8f4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a8f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a8f50: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A8F50u;
    {
        const bool branch_taken_0x1a8f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F50u;
            // 0x1a8f54: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f50) {
            ctx->pc = 0x1A8F94u;
            goto label_1a8f94;
        }
    }
    ctx->pc = 0x1A8F58u;
label_1a8f58:
    // 0x1a8f58: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a8f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a8f5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a8f60: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a8f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8f64: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8F64u;
    {
        const bool branch_taken_0x1a8f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f64) {
            ctx->pc = 0x1A8F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F64u;
            // 0x1a8f68: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A8F88u;
            goto label_1a8f88;
        }
    }
    ctx->pc = 0x1A8F6Cu;
    // 0x1a8f6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a8f70: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1a8f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1a8f74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a8f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a8f78: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1a8f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1a8f7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A8F7Cu;
    {
        const bool branch_taken_0x1a8f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F7Cu;
            // 0x1a8f80: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f7c) {
            ctx->pc = 0x1A8FB0u;
            goto label_1a8fb0;
        }
    }
    ctx->pc = 0x1A8F84u;
    // 0x1a8f84: 0x0  nop
    ctx->pc = 0x1a8f84u;
    // NOP
label_1a8f88:
    // 0x1a8f88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a8f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8f8c: 0x1443fff2  bne         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A8F8Cu;
    {
        const bool branch_taken_0x1a8f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A8F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F8Cu;
            // 0x1a8f90: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f8c) {
            ctx->pc = 0x1A8F58u;
            runtime->cooperativeGuestYield();
            goto label_1a8f58;
        }
    }
    ctx->pc = 0x1A8F94u;
label_1a8f94:
    // 0x1a8f94: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1a8f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1a8f98: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x1a8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
    // 0x1a8f9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a8fa0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1a8fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1a8fa4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a8fa8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1a8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1a8fac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a8facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1a8fb0:
    // 0x1a8fb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a8fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8fb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a8fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FBCu;
            // 0x1a8fc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8F40u: goto label_1a8f40;
            case 0x1A8F58u: goto label_1a8f58;
            case 0x1A8F88u: goto label_1a8f88;
            case 0x1A8F94u: goto label_1a8f94;
            case 0x1A8FB0u: goto label_1a8fb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8FC4u;
    // 0x1a8fc4: 0x0  nop
    ctx->pc = 0x1a8fc4u;
    // NOP
}
