#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002333A8
// Address: 0x2333a8 - 0x233420
void sub_002333A8_0x2333a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002333A8_0x2333a8");
#endif

    ctx->pc = 0x2333a8u;

    // 0x2333a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2333a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2333ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2333acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2333b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2333b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2333b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2333b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2333b8: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x2333b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2333bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2333bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2333c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2333c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2333c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2333c8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2333c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2333cc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2333ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2333d0:
    // 0x2333d0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x2333D0u;
    SET_GPR_U32(ctx, 31, 0x2333D8u);
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2333D8u; }
        if (ctx->pc != 0x2333D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2333D8u; }
        if (ctx->pc != 0x2333D8u) { return; }
    }
    ctx->pc = 0x2333D8u;
    // 0x2333d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2333d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2333dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2333dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2333e0: 0x3c01467f  lui         $at, 0x467F
    ctx->pc = 0x2333e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18047 << 16));
    // 0x2333e4: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x2333e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x2333e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2333e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2333ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2333ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2333f0: 0x0  nop
    ctx->pc = 0x2333f0u;
    // NOP
    // 0x2333f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2333F4u;
    {
        const bool branch_taken_0x2333f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2333F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2333F4u;
            // 0x2333f8: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333f4) {
            ctx->pc = 0x233404u;
            goto label_233404;
        }
    }
    ctx->pc = 0x2333FCu;
    // 0x2333fc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2333FCu;
    {
        const bool branch_taken_0x2333fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2333fc) {
            ctx->pc = 0x233400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2333FCu;
            // 0x233400: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2333D0u;
            runtime->cooperativeGuestYield();
            goto label_2333d0;
        }
    }
    ctx->pc = 0x233404u;
label_233404:
    // 0x233404: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x233404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x233408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23340c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23340cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233414: 0x3e00008  jr          $ra
    ctx->pc = 0x233414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233414u;
            // 0x233418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2333D0u: goto label_2333d0;
            case 0x233404u: goto label_233404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23341Cu;
    // 0x23341c: 0x0  nop
    ctx->pc = 0x23341cu;
    // NOP
}
