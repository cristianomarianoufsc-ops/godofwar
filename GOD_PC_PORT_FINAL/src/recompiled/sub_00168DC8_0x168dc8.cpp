#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168DC8
// Address: 0x168dc8 - 0x168f00
void sub_00168DC8_0x168dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168DC8_0x168dc8");
#endif

    ctx->pc = 0x168dc8u;

    // 0x168dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168dd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x168dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x168dd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x168dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168ddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168de0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x168de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x168de4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_168de8:
    // 0x168de8: 0x0  nop
    ctx->pc = 0x168de8u;
    // NOP
    // 0x168dec: 0x0  nop
    ctx->pc = 0x168decu;
    // NOP
    // 0x168df0: 0x0  nop
    ctx->pc = 0x168df0u;
    // NOP
    // 0x168df4: 0x0  nop
    ctx->pc = 0x168df4u;
    // NOP
    // 0x168df8: 0x0  nop
    ctx->pc = 0x168df8u;
    // NOP
    // 0x168dfc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x168DFCu;
    {
        const bool branch_taken_0x168dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x168E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168DFCu;
            // 0x168e00: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dfc) {
            ctx->pc = 0x168DE8u;
            runtime->cooperativeGuestYield();
            goto label_168de8;
        }
    }
    ctx->pc = 0x168E04u;
    // 0x168e04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168e08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x168e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x168e0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_168e10:
    // 0x168e10: 0x0  nop
    ctx->pc = 0x168e10u;
    // NOP
    // 0x168e14: 0x0  nop
    ctx->pc = 0x168e14u;
    // NOP
    // 0x168e18: 0x0  nop
    ctx->pc = 0x168e18u;
    // NOP
    // 0x168e1c: 0x0  nop
    ctx->pc = 0x168e1cu;
    // NOP
    // 0x168e20: 0x0  nop
    ctx->pc = 0x168e20u;
    // NOP
    // 0x168e24: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x168E24u;
    {
        const bool branch_taken_0x168e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x168E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E24u;
            // 0x168e28: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e24) {
            ctx->pc = 0x168E10u;
            runtime->cooperativeGuestYield();
            goto label_168e10;
        }
    }
    ctx->pc = 0x168E2Cu;
    // 0x168e2c: 0x26300360  addiu       $s0, $s1, 0x360
    ctx->pc = 0x168e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    // 0x168e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e34: 0xae300360  sw          $s0, 0x360($s1)
    ctx->pc = 0x168e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 16));
    // 0x168e38: 0xc05a3c0  jal         func_168F00
    ctx->pc = 0x168E38u;
    SET_GPR_U32(ctx, 31, 0x168E40u);
    ctx->pc = 0x168E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168E38u;
            // 0x168e3c: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168F00u;
    if (runtime->hasFunction(0x168F00u)) {
        auto targetFn = runtime->lookupFunction(0x168F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E40u; }
        if (ctx->pc != 0x168E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168F00_0x168f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E40u; }
        if (ctx->pc != 0x168E40u) { return; }
    }
    ctx->pc = 0x168E40u;
    // 0x168e40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x168e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x168e44: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x168e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x168e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x168e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x168e50: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x168e50u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x168e54: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x168e54u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x168e58: 0xc05a5f4  jal         func_1697D0
    ctx->pc = 0x168E58u;
    SET_GPR_U32(ctx, 31, 0x168E60u);
    ctx->pc = 0x168E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168E58u;
            // 0x168e5c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1697D0u;
    if (runtime->hasFunction(0x1697D0u)) {
        auto targetFn = runtime->lookupFunction(0x1697D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E60u; }
        if (ctx->pc != 0x168E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1697d0_0x1697f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E60u; }
        if (ctx->pc != 0x168E60u) { return; }
    }
    ctx->pc = 0x168E60u;
    // 0x168e60: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x168e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x168e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168e68: 0x3c01c61c  lui         $at, 0xC61C
    ctx->pc = 0x168e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50716 << 16));
    // 0x168e6c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x168e6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x168e70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x168e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168e74: 0x3c0148ff  lui         $at, 0x48FF
    ctx->pc = 0x168e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18687 << 16));
    // 0x168e78: 0x3421ffe0  ori         $at, $at, 0xFFE0
    ctx->pc = 0x168e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65504);
    // 0x168e7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x168e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x168e80: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x168e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x168e84: 0xe6200384  swc1        $f0, 0x384($s1)
    ctx->pc = 0x168e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
    // 0x168e88: 0xe6210388  swc1        $f1, 0x388($s1)
    ctx->pc = 0x168e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 904), bits); }
    // 0x168e8c: 0xe62203a8  swc1        $f2, 0x3A8($s1)
    ctx->pc = 0x168e8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 936), bits); }
    // 0x168e90: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168E90u;
    {
        const bool branch_taken_0x168e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x168E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E90u;
            // 0x168e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e90) {
            ctx->pc = 0x168EA0u;
            goto label_168ea0;
        }
    }
    ctx->pc = 0x168E98u;
    // 0x168e98: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x168e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x168e9c: 0x0  nop
    ctx->pc = 0x168e9cu;
    // NOP
label_168ea0:
    // 0x168ea0: 0x8e22039c  lw          $v0, 0x39C($s1)
    ctx->pc = 0x168ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 924)));
    // 0x168ea4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168EA4u;
    {
        const bool branch_taken_0x168ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168ea4) {
            ctx->pc = 0x168EC8u;
            goto label_168ec8;
        }
    }
    ctx->pc = 0x168EACu;
    // 0x168eac: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168EACu;
    {
        const bool branch_taken_0x168eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168EACu;
            // 0x168eb0: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168eac) {
            ctx->pc = 0x168ED4u;
            goto label_168ed4;
        }
    }
    ctx->pc = 0x168EB4u;
    // 0x168eb4: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x168eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x168eb8: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x168eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x168ebc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x168ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x168ec0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168EC0u;
    {
        const bool branch_taken_0x168ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168EC0u;
            // 0x168ec4: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ec0) {
            ctx->pc = 0x168ED4u;
            goto label_168ed4;
        }
    }
    ctx->pc = 0x168EC8u;
label_168ec8:
    // 0x168ec8: 0xc05a5fc  jal         func_1697F0
    ctx->pc = 0x168EC8u;
    SET_GPR_U32(ctx, 31, 0x168ED0u);
    ctx->pc = 0x168ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168EC8u;
            // 0x168ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1697F0u;
    if (runtime->hasFunction(0x1697F0u)) {
        auto targetFn = runtime->lookupFunction(0x1697F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168ED0u; }
        if (ctx->pc != 0x168ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001697F0_0x1697f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168ED0u; }
        if (ctx->pc != 0x168ED0u) { return; }
    }
    ctx->pc = 0x168ED0u;
    // 0x168ed0: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x168ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_168ed4:
    // 0x168ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168ed8: 0xae2203ac  sw          $v0, 0x3AC($s1)
    ctx->pc = 0x168ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 2));
    // 0x168edc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x168edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ee0: 0xae2303a4  sw          $v1, 0x3A4($s1)
    ctx->pc = 0x168ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 3));
    // 0x168ee4: 0xae2003a0  sw          $zero, 0x3A0($s1)
    ctx->pc = 0x168ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
    // 0x168ee8: 0xae2003b0  sw          $zero, 0x3B0($s1)
    ctx->pc = 0x168ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 944), GPR_U32(ctx, 0));
    // 0x168eec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x168eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168ef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x168EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168EF8u;
            // 0x168efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168DE8u: goto label_168de8;
            case 0x168E10u: goto label_168e10;
            case 0x168EA0u: goto label_168ea0;
            case 0x168EC8u: goto label_168ec8;
            case 0x168ED4u: goto label_168ed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168F00u;
}
