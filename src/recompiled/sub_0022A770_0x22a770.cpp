#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A770
// Address: 0x22a770 - 0x22a810
void sub_0022A770_0x22a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A770_0x22a770");
#endif

    ctx->pc = 0x22a770u;

    // 0x22a770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22a774: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22a774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22a778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a77c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22a77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a780: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22a780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22a784: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22a784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a788: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x22a788u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22a78c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22a78cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a790: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22a790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22a794: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22a794u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x22a798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a79c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22a79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7a0: 0x2131007  srav        $v0, $s3, $s0
    ctx->pc = 0x22a7a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 16) & 0x1F));
    // 0x22a7a4: 0x0  nop
    ctx->pc = 0x22a7a4u;
    // NOP
label_22a7a8:
    // 0x22a7a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22a7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7ac: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x22a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22a7b0: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x22a7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x22a7b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a7b8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x22a7b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x22a7bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22a7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22a7c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A7C0u;
    {
        const bool branch_taken_0x22a7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A7C0u;
            // 0x22a7c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7c0) {
            ctx->pc = 0x22A7E4u;
            goto label_22a7e4;
        }
    }
    ctx->pc = 0x22A7C8u;
    // 0x22a7c8: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x22a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x22a7cc: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x22a7ccu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a7d0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22a7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22a7d4: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x22a7d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a7d8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x22a7d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x22a7dc: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x22A7DCu;
    SET_GPR_U32(ctx, 31, 0x22A7E4u);
    ctx->pc = 0x22A7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A7DCu;
            // 0x22a7e0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A7E4u; }
        if (ctx->pc != 0x22A7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22a750_0x22a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A7E4u; }
        if (ctx->pc != 0x22A7E4u) { return; }
    }
    ctx->pc = 0x22A7E4u;
label_22a7e4:
    // 0x22a7e4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x22a7e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22a7e8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22A7E8u;
    {
        const bool branch_taken_0x22a7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a7e8) {
            ctx->pc = 0x22A7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A7E8u;
            // 0x22a7ec: 0x2131007  srav        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A7A8u;
            runtime->cooperativeGuestYield();
            goto label_22a7a8;
        }
    }
    ctx->pc = 0x22A7F0u;
    // 0x22a7f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22a7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a7f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22a7f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a7f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a7f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a7fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22a7fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a804: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x22a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a808: 0x3e00008  jr          $ra
    ctx->pc = 0x22A808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A808u;
            // 0x22a80c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A7A8u: goto label_22a7a8;
            case 0x22A7E4u: goto label_22a7e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22A810u;
}
