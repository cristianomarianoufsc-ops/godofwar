#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_225898
// Address: 0x225898 - 0x225940
void entry_225898_0x225940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_225898_0x225940");
#endif

    ctx->pc = 0x225898u;

    // 0x225898: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x225898u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22589c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2258a0: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x2258a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x2258a4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2258a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2258a8: 0x24632b20  addiu       $v1, $v1, 0x2B20
    ctx->pc = 0x2258a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11040));
    // 0x2258ac: 0x85280038  lh          $t0, 0x38($t1)
    ctx->pc = 0x2258acu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x2258b0: 0x8c4201c4  lw          $v0, 0x1C4($v0)
    ctx->pc = 0x2258b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x2258b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2258b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2258b8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2258b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2258bc: 0x11040012  beq         $t0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2258BCu;
    {
        const bool branch_taken_0x2258bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x2258C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2258BCu;
            // 0x2258c0: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258bc) {
            ctx->pc = 0x225908u;
            goto label_225908;
        }
    }
    ctx->pc = 0x2258C4u;
    // 0x2258c4: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x2258c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2258c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2258C8u;
    {
        const bool branch_taken_0x2258c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2258c8) {
            ctx->pc = 0x2258CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2258C8u;
            // 0x2258cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2258E0u;
            goto label_2258e0;
        }
    }
    ctx->pc = 0x2258D0u;
    // 0x2258d0: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2258D0u;
    {
        const bool branch_taken_0x2258d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2258d0) {
            ctx->pc = 0x2258D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2258D0u;
            // 0x2258d4: 0xc520003c  lwc1        $f0, 0x3C($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2258F0u;
            goto label_2258f0;
        }
    }
    ctx->pc = 0x2258D8u;
    // 0x2258d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2258D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2258E0u: goto label_2258e0;
            case 0x2258F0u: goto label_2258f0;
            case 0x225908u: goto label_225908;
            case 0x225924u: goto label_225924;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2258E0u;
label_2258e0:
    // 0x2258e0: 0x51020010  beql        $t0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2258E0u;
    {
        const bool branch_taken_0x2258e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2258e0) {
            ctx->pc = 0x2258E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2258E0u;
            // 0x2258e4: 0xc520003c  lwc1        $f0, 0x3C($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x225924u;
            goto label_225924;
        }
    }
    ctx->pc = 0x2258E8u;
    // 0x2258e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2258E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2258E0u: goto label_2258e0;
            case 0x2258F0u: goto label_2258f0;
            case 0x225908u: goto label_225908;
            case 0x225924u: goto label_225924;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2258F0u;
label_2258f0:
    // 0x2258f0: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2258f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2258f4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2258f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2258f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2258f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2258fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2258fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225900: 0x3e00008  jr          $ra
    ctx->pc = 0x225900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225900u;
            // 0x225904: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2258E0u: goto label_2258e0;
            case 0x2258F0u: goto label_2258f0;
            case 0x225908u: goto label_225908;
            case 0x225924u: goto label_225924;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225908u;
label_225908:
    // 0x225908: 0xc520003c  lwc1        $f0, 0x3C($t1)
    ctx->pc = 0x225908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22590c: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x22590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x225910: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x225910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225914: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x225914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x225918: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x225918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22591c: 0x3e00008  jr          $ra
    ctx->pc = 0x22591Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22591Cu;
            // 0x225920: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2258E0u: goto label_2258e0;
            case 0x2258F0u: goto label_2258f0;
            case 0x225908u: goto label_225908;
            case 0x225924u: goto label_225924;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225924u;
label_225924:
    // 0x225924: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x225924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x225928: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x225928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22592c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22592cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x225930: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x225930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225934: 0x3e00008  jr          $ra
    ctx->pc = 0x225934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225934u;
            // 0x225938: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2258E0u: goto label_2258e0;
            case 0x2258F0u: goto label_2258f0;
            case 0x225908u: goto label_225908;
            case 0x225924u: goto label_225924;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22593Cu;
    // 0x22593c: 0x0  nop
    ctx->pc = 0x22593cu;
    // NOP
}
