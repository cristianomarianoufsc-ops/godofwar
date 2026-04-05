#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002325E0
// Address: 0x2325e0 - 0x232658
void sub_002325E0_0x2325e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002325E0_0x2325e0");
#endif

    ctx->pc = 0x2325e0u;

    // 0x2325e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2325e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2325e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2325e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2325e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2325e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2325ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2325ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2325f0: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x2325f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2325f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2325f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2325f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2325f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2325fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x232600: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x232600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x232604: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_232608:
    // 0x232608: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x232608u;
    SET_GPR_U32(ctx, 31, 0x232610u);
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232610u; }
        if (ctx->pc != 0x232610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232610u; }
        if (ctx->pc != 0x232610u) { return; }
    }
    ctx->pc = 0x232610u;
    // 0x232610: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x232610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232614: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x232614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x232618: 0x3c01467f  lui         $at, 0x467F
    ctx->pc = 0x232618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18047 << 16));
    // 0x23261c: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x23261cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x232620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x232624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232628: 0x0  nop
    ctx->pc = 0x232628u;
    // NOP
    // 0x23262c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23262Cu;
    {
        const bool branch_taken_0x23262c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23262Cu;
            // 0x232630: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23262c) {
            ctx->pc = 0x23263Cu;
            goto label_23263c;
        }
    }
    ctx->pc = 0x232634u;
    // 0x232634: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x232634u;
    {
        const bool branch_taken_0x232634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232634) {
            ctx->pc = 0x232638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232634u;
            // 0x232638: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232608u;
            runtime->cooperativeGuestYield();
            goto label_232608;
        }
    }
    ctx->pc = 0x23263Cu;
label_23263c:
    // 0x23263c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23263cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232640: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x232640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23264c: 0x3e00008  jr          $ra
    ctx->pc = 0x23264Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23264Cu;
            // 0x232650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232608u: goto label_232608;
            case 0x23263Cu: goto label_23263c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232654u;
    // 0x232654: 0x0  nop
    ctx->pc = 0x232654u;
    // NOP
}
