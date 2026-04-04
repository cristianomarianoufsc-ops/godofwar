#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203A10
// Address: 0x203a10 - 0x203ae8
void sub_00203A10_0x203a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203A10_0x203a10");
#endif

    ctx->pc = 0x203a10u;

    // 0x203a10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x203a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x203a14: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x203a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x203a18: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x203a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x203a1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x203a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a20: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x203a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x203a24: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x203a24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a28: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x203a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x203a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a30: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x203a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x203a34: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x203a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a38: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x203a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x203a3c: 0x70082ca9  por         $a1, $zero, $t0
    ctx->pc = 0x203a3cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x203a40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203a44: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x203a44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x203a48: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x203a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a4c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x203a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a50: 0x24090000  addiu       $t1, $zero, 0x0
    ctx->pc = 0x203a50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x203a54: 0x240a0000  addiu       $t2, $zero, 0x0
    ctx->pc = 0x203a54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x203a58: 0x712a1b89  pcpyld      $v1, $t1, $t2
    ctx->pc = 0x203a58u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x203a5c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x203a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x203a60: 0x24090000  addiu       $t1, $zero, 0x0
    ctx->pc = 0x203a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x203a64: 0x240a0000  addiu       $t2, $zero, 0x0
    ctx->pc = 0x203a64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x203a68: 0x712a1389  pcpyld      $v0, $t1, $t2
    ctx->pc = 0x203a68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x203a6c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x203a6cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x203a70: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x203a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x203a74: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x203a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x203a78: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x203a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x203a7c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x203a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x203a80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203A80u;
    {
        const bool branch_taken_0x203a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203A80u;
            // 0x203a84: 0x3062004c  andi        $v0, $v1, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a80) {
            ctx->pc = 0x203A90u;
            goto label_203a90;
        }
    }
    ctx->pc = 0x203A88u;
    // 0x203a88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203A88u;
    {
        const bool branch_taken_0x203a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203A88u;
            // 0x203a8c: 0x24c60006  addiu       $a2, $a2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a88) {
            ctx->pc = 0x203A9Cu;
            goto label_203a9c;
        }
    }
    ctx->pc = 0x203A90u;
label_203a90:
    // 0x203a90: 0xc080b3a  jal         func_202CE8
    ctx->pc = 0x203A90u;
    SET_GPR_U32(ctx, 31, 0x203A98u);
    ctx->pc = 0x203A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203A90u;
            // 0x203a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202CE8u;
    if (runtime->hasFunction(0x202CE8u)) {
        auto targetFn = runtime->lookupFunction(0x202CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A98u; }
        if (ctx->pc != 0x203A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202CE8_0x202ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A98u; }
        if (ctx->pc != 0x203A98u) { return; }
    }
    ctx->pc = 0x203A98u;
    // 0x203a98: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x203a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_203a9c:
    // 0x203a9c: 0x7ba80010  lq          $t0, 0x10($sp)
    ctx->pc = 0x203a9cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203aa4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x203aa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x203aa8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x203aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203aac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x203aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ab0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x203ab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ab4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x203ab4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ab8: 0xc080eba  jal         func_203AE8
    ctx->pc = 0x203AB8u;
    SET_GPR_U32(ctx, 31, 0x203AC0u);
    ctx->pc = 0x203ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203AB8u;
            // 0x203abc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203AE8u;
    if (runtime->hasFunction(0x203AE8u)) {
        auto targetFn = runtime->lookupFunction(0x203AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203AC0u; }
        if (ctx->pc != 0x203AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203AE8_0x203ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203AC0u; }
        if (ctx->pc != 0x203AC0u) { return; }
    }
    ctx->pc = 0x203AC0u;
    // 0x203ac0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x203ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x203ac4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x203ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x203ac8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x203ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203acc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x203accu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203ad0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x203ad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203ad4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203ad8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x203ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x203adc: 0x3e00008  jr          $ra
    ctx->pc = 0x203ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203ADCu;
            // 0x203ae0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203A90u: goto label_203a90;
            case 0x203A9Cu: goto label_203a9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203AE4u;
    // 0x203ae4: 0x0  nop
    ctx->pc = 0x203ae4u;
    // NOP
}
