#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f46a0
// Address: 0x1f46a0 - 0x1f4770
void entry_1f46a0_0x1f4770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f46a0_0x1f4770");
#endif

    ctx->pc = 0x1f46a0u;

    // 0x1f46a0: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x1f46a0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x1f46a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f46a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f46a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f46a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f46ac: 0x46106801  sub.s       $f0, $f13, $f16
    ctx->pc = 0x1f46acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[16]);
    // 0x1f46b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f46b4: 0xc441e37c  lwc1        $f1, -0x1C84($v0)
    ctx->pc = 0x1f46b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f46b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f46b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f46bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f46bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f46c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f46c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f46c4: 0x46008301  sub.s       $f12, $f16, $f0
    ctx->pc = 0x1f46c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[16], ctx->f[0]);
    // 0x1f46c8: 0x460c7034  c.lt.s      $f14, $f12
    ctx->pc = 0x1f46c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f46cc: 0x0  nop
    ctx->pc = 0x1f46ccu;
    // NOP
    // 0x1f46d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F46D0u;
    {
        const bool branch_taken_0x1f46d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F46D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F46D0u;
            // 0x1f46d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f46d0) {
            ctx->pc = 0x1F46E0u;
            goto label_1f46e0;
        }
    }
    ctx->pc = 0x1F46D8u;
    // 0x1f46d8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1F46D8u;
    {
        const bool branch_taken_0x1f46d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F46DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F46D8u;
            // 0x1f46dc: 0x46008006  mov.s       $f0, $f16 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f46d8) {
            ctx->pc = 0x1F4760u;
            goto label_1f4760;
        }
    }
    ctx->pc = 0x1F46E0u;
label_1f46e0:
    // 0x1f46e0: 0x46008040  add.s       $f1, $f16, $f0
    ctx->pc = 0x1f46e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[16], ctx->f[0]);
    // 0x1f46e4: 0x46017034  c.lt.s      $f14, $f1
    ctx->pc = 0x1f46e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f46e8: 0x0  nop
    ctx->pc = 0x1f46e8u;
    // NOP
    // 0x1f46ec: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1F46ECu;
    {
        const bool branch_taken_0x1f46ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f46ec) {
            ctx->pc = 0x1F46F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F46ECu;
            // 0x1f46f0: 0x46006b01  sub.s       $f12, $f13, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4710u;
            goto label_1f4710;
        }
    }
    ctx->pc = 0x1F46F4u;
    // 0x1f46f4: 0x460c7001  sub.s       $f0, $f14, $f12
    ctx->pc = 0x1f46f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x1f46f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f46f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f46fc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1f46fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f4700: 0x460c0c01  sub.s       $f16, $f1, $f12
    ctx->pc = 0x1f4700u;
    ctx->f[16] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x1f4704: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1f4704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4708: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F4708u;
    {
        const bool branch_taken_0x1f4708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4708u;
            // 0x1f470c: 0x46000b86  mov.s       $f14, $f1 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4708) {
            ctx->pc = 0x1F4754u;
            goto label_1f4754;
        }
    }
    ctx->pc = 0x1F4710u;
label_1f4710:
    // 0x1f4710: 0x460c7034  c.lt.s      $f14, $f12
    ctx->pc = 0x1f4710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4714: 0x0  nop
    ctx->pc = 0x1f4714u;
    // NOP
    // 0x1f4718: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4718u;
    {
        const bool branch_taken_0x1f4718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4718) {
            ctx->pc = 0x1F471Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4718u;
            // 0x1f471c: 0x46006840  add.s       $f1, $f13, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4728u;
            goto label_1f4728;
        }
    }
    ctx->pc = 0x1F4720u;
    // 0x1f4720: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F4720u;
    {
        const bool branch_taken_0x1f4720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4720u;
            // 0x1f4724: 0x46007006  mov.s       $f0, $f14 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4720) {
            ctx->pc = 0x1F4760u;
            goto label_1f4760;
        }
    }
    ctx->pc = 0x1F4728u;
label_1f4728:
    // 0x1f4728: 0x46017034  c.lt.s      $f14, $f1
    ctx->pc = 0x1f4728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f472c: 0x0  nop
    ctx->pc = 0x1f472cu;
    // NOP
    // 0x1f4730: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4730u;
    {
        const bool branch_taken_0x1f4730 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4730) {
            ctx->pc = 0x1F4734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4730u;
            // 0x1f4734: 0x460c7001  sub.s       $f0, $f14, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4740u;
            goto label_1f4740;
        }
    }
    ctx->pc = 0x1F4738u;
    // 0x1f4738: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4738u;
    {
        const bool branch_taken_0x1f4738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F473Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4738u;
            // 0x1f473c: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4738) {
            ctx->pc = 0x1F4760u;
            goto label_1f4760;
        }
    }
    ctx->pc = 0x1F4740u;
label_1f4740:
    // 0x1f4740: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f4740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4744: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f4744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4748: 0x460c0c01  sub.s       $f16, $f1, $f12
    ctx->pc = 0x1f4748u;
    ctx->f[16] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x1f474c: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x1f474cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x1f4750: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1f4750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1f4754:
    // 0x1f4754: 0x46100403  div.s       $f16, $f0, $f16
    ctx->pc = 0x1f4754u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[16] = ctx->f[0] / ctx->f[16];
    // 0x1f4758: 0xc07d190  jal         func_1F4640
    ctx->pc = 0x1F4758u;
    SET_GPR_U32(ctx, 31, 0x1F4760u);
    ctx->pc = 0x1F4640u;
    if (runtime->hasFunction(0x1F4640u)) {
        auto targetFn = runtime->lookupFunction(0x1F4640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4760u; }
        if (ctx->pc != 0x1F4760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f4640_0x1f46a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4760u; }
        if (ctx->pc != 0x1F4760u) { return; }
    }
    ctx->pc = 0x1F4760u;
label_1f4760:
    // 0x1f4760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4764: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4764u;
            // 0x1f4768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F46E0u: goto label_1f46e0;
            case 0x1F4710u: goto label_1f4710;
            case 0x1F4728u: goto label_1f4728;
            case 0x1F4740u: goto label_1f4740;
            case 0x1F4754u: goto label_1f4754;
            case 0x1F4760u: goto label_1f4760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F476Cu;
    // 0x1f476c: 0x0  nop
    ctx->pc = 0x1f476cu;
    // NOP
}
