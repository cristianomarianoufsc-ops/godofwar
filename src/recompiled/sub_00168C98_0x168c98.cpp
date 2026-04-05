#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168C98
// Address: 0x168c98 - 0x168dc8
void sub_00168C98_0x168c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168C98_0x168c98");
#endif

    ctx->pc = 0x168c98u;

    // 0x168c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168c9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168ca0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x168ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x168ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x168ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168cac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168cb0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x168cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x168cb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_168cb8:
    // 0x168cb8: 0x0  nop
    ctx->pc = 0x168cb8u;
    // NOP
    // 0x168cbc: 0x0  nop
    ctx->pc = 0x168cbcu;
    // NOP
    // 0x168cc0: 0x0  nop
    ctx->pc = 0x168cc0u;
    // NOP
    // 0x168cc4: 0x0  nop
    ctx->pc = 0x168cc4u;
    // NOP
    // 0x168cc8: 0x0  nop
    ctx->pc = 0x168cc8u;
    // NOP
    // 0x168ccc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x168CCCu;
    {
        const bool branch_taken_0x168ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x168CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168CCCu;
            // 0x168cd0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ccc) {
            ctx->pc = 0x168CB8u;
            runtime->cooperativeGuestYield();
            goto label_168cb8;
        }
    }
    ctx->pc = 0x168CD4u;
    // 0x168cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168cd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x168cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x168cdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_168ce0:
    // 0x168ce0: 0x0  nop
    ctx->pc = 0x168ce0u;
    // NOP
    // 0x168ce4: 0x0  nop
    ctx->pc = 0x168ce4u;
    // NOP
    // 0x168ce8: 0x0  nop
    ctx->pc = 0x168ce8u;
    // NOP
    // 0x168cec: 0x0  nop
    ctx->pc = 0x168cecu;
    // NOP
    // 0x168cf0: 0x0  nop
    ctx->pc = 0x168cf0u;
    // NOP
    // 0x168cf4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x168CF4u;
    {
        const bool branch_taken_0x168cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x168CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168CF4u;
            // 0x168cf8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cf4) {
            ctx->pc = 0x168CE0u;
            runtime->cooperativeGuestYield();
            goto label_168ce0;
        }
    }
    ctx->pc = 0x168CFCu;
    // 0x168cfc: 0x26300360  addiu       $s0, $s1, 0x360
    ctx->pc = 0x168cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    // 0x168d00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x168d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x168d04: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x168d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x168d08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x168d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x168d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d10: 0xae300360  sw          $s0, 0x360($s1)
    ctx->pc = 0x168d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 16));
    // 0x168d14: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x168d14u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x168d18: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x168d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x168d1c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x168d1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x168d20: 0xc05a5f4  jal         func_1697D0
    ctx->pc = 0x168D20u;
    SET_GPR_U32(ctx, 31, 0x168D28u);
    ctx->pc = 0x168D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168D20u;
            // 0x168d24: 0x46007406  mov.s       $f16, $f14 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1697D0u;
    if (runtime->hasFunction(0x1697D0u)) {
        auto targetFn = runtime->lookupFunction(0x1697D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D28u; }
        if (ctx->pc != 0x168D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1697d0_0x1697f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D28u; }
        if (ctx->pc != 0x168D28u) { return; }
    }
    ctx->pc = 0x168D28u;
    // 0x168d28: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x168d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x168d2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168d30: 0x3c01c61c  lui         $at, 0xC61C
    ctx->pc = 0x168d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50716 << 16));
    // 0x168d34: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x168d34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x168d38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x168d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168d3c: 0x3c0148ff  lui         $at, 0x48FF
    ctx->pc = 0x168d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18687 << 16));
    // 0x168d40: 0x3421ffe0  ori         $at, $at, 0xFFE0
    ctx->pc = 0x168d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65504);
    // 0x168d44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x168d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x168d48: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x168d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x168d4c: 0xe6200384  swc1        $f0, 0x384($s1)
    ctx->pc = 0x168d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
    // 0x168d50: 0xe6210388  swc1        $f1, 0x388($s1)
    ctx->pc = 0x168d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 904), bits); }
    // 0x168d54: 0xe62203a8  swc1        $f2, 0x3A8($s1)
    ctx->pc = 0x168d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 936), bits); }
    // 0x168d58: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168D58u;
    {
        const bool branch_taken_0x168d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x168D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168D58u;
            // 0x168d5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d58) {
            ctx->pc = 0x168D68u;
            goto label_168d68;
        }
    }
    ctx->pc = 0x168D60u;
    // 0x168d60: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x168d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x168d64: 0x0  nop
    ctx->pc = 0x168d64u;
    // NOP
label_168d68:
    // 0x168d68: 0x8e22039c  lw          $v0, 0x39C($s1)
    ctx->pc = 0x168d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 924)));
    // 0x168d6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168D6Cu;
    {
        const bool branch_taken_0x168d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168d6c) {
            ctx->pc = 0x168D90u;
            goto label_168d90;
        }
    }
    ctx->pc = 0x168D74u;
    // 0x168d74: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168D74u;
    {
        const bool branch_taken_0x168d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168D74u;
            // 0x168d78: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d74) {
            ctx->pc = 0x168D9Cu;
            goto label_168d9c;
        }
    }
    ctx->pc = 0x168D7Cu;
    // 0x168d7c: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x168d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x168d80: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x168d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x168d84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x168d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x168d88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168D88u;
    {
        const bool branch_taken_0x168d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168D88u;
            // 0x168d8c: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d88) {
            ctx->pc = 0x168D9Cu;
            goto label_168d9c;
        }
    }
    ctx->pc = 0x168D90u;
label_168d90:
    // 0x168d90: 0xc05a5fc  jal         func_1697F0
    ctx->pc = 0x168D90u;
    SET_GPR_U32(ctx, 31, 0x168D98u);
    ctx->pc = 0x168D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168D90u;
            // 0x168d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1697F0u;
    if (runtime->hasFunction(0x1697F0u)) {
        auto targetFn = runtime->lookupFunction(0x1697F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D98u; }
        if (ctx->pc != 0x168D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001697F0_0x1697f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D98u; }
        if (ctx->pc != 0x168D98u) { return; }
    }
    ctx->pc = 0x168D98u;
    // 0x168d98: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x168d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_168d9c:
    // 0x168d9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168da0: 0xae2203ac  sw          $v0, 0x3AC($s1)
    ctx->pc = 0x168da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 2));
    // 0x168da4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x168da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168da8: 0xae2303a4  sw          $v1, 0x3A4($s1)
    ctx->pc = 0x168da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 3));
    // 0x168dac: 0xae2003a0  sw          $zero, 0x3A0($s1)
    ctx->pc = 0x168dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
    // 0x168db0: 0xae2003b0  sw          $zero, 0x3B0($s1)
    ctx->pc = 0x168db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 944), GPR_U32(ctx, 0));
    // 0x168db4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x168db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x168DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168DC0u;
            // 0x168dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168CB8u: goto label_168cb8;
            case 0x168CE0u: goto label_168ce0;
            case 0x168D68u: goto label_168d68;
            case 0x168D90u: goto label_168d90;
            case 0x168D9Cu: goto label_168d9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168DC8u;
}
