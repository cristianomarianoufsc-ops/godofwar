#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF5E0
// Address: 0x1df5e0 - 0x1df650
void sub_001DF5E0_0x1df5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF5E0_0x1df5e0");
#endif

    ctx->pc = 0x1df5e0u;

    // 0x1df5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df5e4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1df5e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1df5e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df5ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df5f0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1df5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1df5f4: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1df5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1df5f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1df5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1df5fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1df5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1df600: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1df600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1df604: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DF604u;
    {
        const bool branch_taken_0x1df604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF604u;
            // 0x1df608: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df604) {
            ctx->pc = 0x1DF638u;
            goto label_1df638;
        }
    }
    ctx->pc = 0x1DF60Cu;
    // 0x1df60c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df610: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1DF610u;
    {
        const bool branch_taken_0x1df610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df610) {
            ctx->pc = 0x1DF614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF610u;
            // 0x1df614: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF63Cu;
            goto label_1df63c;
        }
    }
    ctx->pc = 0x1DF618u;
    // 0x1df618: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x1df618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1df61c: 0x0  nop
    ctx->pc = 0x1df61cu;
    // NOP
label_1df620:
    // 0x1df620: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1df620u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1df624: 0xc054104  jal         func_150410
    ctx->pc = 0x1DF624u;
    SET_GPR_U32(ctx, 31, 0x1DF62Cu);
    ctx->pc = 0x1DF628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF624u;
            // 0x1df628: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150410u;
    if (runtime->hasFunction(0x150410u)) {
        auto targetFn = runtime->lookupFunction(0x150410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF62Cu; }
        if (ctx->pc != 0x1DF62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150410_0x1504d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF62Cu; }
        if (ctx->pc != 0x1DF62Cu) { return; }
    }
    ctx->pc = 0x1DF62Cu;
    // 0x1df62c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1df62cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df630: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DF630u;
    {
        const bool branch_taken_0x1df630 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df630) {
            ctx->pc = 0x1DF634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF630u;
            // 0x1df634: 0x2604ffec  addiu       $a0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF620u;
            runtime->cooperativeGuestYield();
            goto label_1df620;
        }
    }
    ctx->pc = 0x1DF638u;
label_1df638:
    // 0x1df638: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df63c:
    // 0x1df63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df640: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1df640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1df644: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF644u;
            // 0x1df648: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF620u: goto label_1df620;
            case 0x1DF638u: goto label_1df638;
            case 0x1DF63Cu: goto label_1df63c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF64Cu;
    // 0x1df64c: 0x0  nop
    ctx->pc = 0x1df64cu;
    // NOP
}
