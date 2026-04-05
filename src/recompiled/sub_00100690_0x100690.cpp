#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100690
// Address: 0x100690 - 0x1006f8
void sub_00100690_0x100690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100690_0x100690");
#endif

    ctx->pc = 0x100690u;

    // 0x100690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100694: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x100694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x100698: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x100698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10069c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10069cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1006a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1006a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1006a4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1006a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1006a8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1006a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1006ac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1006acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1006b0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1006b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1006b4: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1006B4u;
    {
        const bool branch_taken_0x1006b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1006B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1006B4u;
            // 0x1006b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006b4) {
            ctx->pc = 0x1006E4u;
            goto label_1006e4;
        }
    }
    ctx->pc = 0x1006BCu;
    // 0x1006bc: 0x0  nop
    ctx->pc = 0x1006bcu;
    // NOP
label_1006c0:
    // 0x1006c0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1006c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1006c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1006c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1006c8: 0xc041c02  jal         func_107008
    ctx->pc = 0x1006C8u;
    SET_GPR_U32(ctx, 31, 0x1006D0u);
    ctx->pc = 0x1006CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1006C8u;
            // 0x1006cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107008u;
    if (runtime->hasFunction(0x107008u)) {
        auto targetFn = runtime->lookupFunction(0x107008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006D0u; }
        if (ctx->pc != 0x1006D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107008_0x107008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006D0u; }
        if (ctx->pc != 0x1006D0u) { return; }
    }
    ctx->pc = 0x1006D0u;
    // 0x1006d0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1006d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1006d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1006d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1006d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1006d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1006dc: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1006DCu;
    {
        const bool branch_taken_0x1006dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1006E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1006DCu;
            // 0x1006e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006dc) {
            ctx->pc = 0x1006C0u;
            runtime->cooperativeGuestYield();
            goto label_1006c0;
        }
    }
    ctx->pc = 0x1006E4u;
label_1006e4:
    // 0x1006e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1006e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1006e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1006e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1006ec: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1006ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1006f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1006F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1006F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1006F0u;
            // 0x1006f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1006C0u: goto label_1006c0;
            case 0x1006E4u: goto label_1006e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1006F8u;
}
