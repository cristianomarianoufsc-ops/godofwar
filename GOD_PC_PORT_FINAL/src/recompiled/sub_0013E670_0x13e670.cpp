#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E670
// Address: 0x13e670 - 0x13e6d0
void sub_0013E670_0x13e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E670_0x13e670");
#endif

    ctx->pc = 0x13e670u;

    // 0x13e670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e674: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13e674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13e678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e67c: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x13E67Cu;
    SET_GPR_U32(ctx, 31, 0x13E684u);
    ctx->pc = 0x13E680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E67Cu;
            // 0x13e680: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E684u; }
        if (ctx->pc != 0x13E684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E684u; }
        if (ctx->pc != 0x13E684u) { return; }
    }
    ctx->pc = 0x13E684u;
    // 0x13e684: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E684u;
    {
        const bool branch_taken_0x13e684 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x13E688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E684u;
            // 0x13e688: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e684) {
            ctx->pc = 0x13E69Cu;
            goto label_13e69c;
        }
    }
    ctx->pc = 0x13E68Cu;
    // 0x13e68c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x13e68cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e690: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13e690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13e694: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13E694u;
    {
        const bool branch_taken_0x13e694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E694u;
            // 0x13e698: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e694) {
            ctx->pc = 0x13E6B8u;
            goto label_13e6b8;
        }
    }
    ctx->pc = 0x13E69Cu;
label_13e69c:
    // 0x13e69c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x13e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x13e6a0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x13e6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x13e6a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e6a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e6ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13e6acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13e6b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13e6b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x13e6b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13e6b8:
    // 0x13e6b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13e6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e6bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e6c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13e6c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13e6c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x13e6c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13e6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E6C8u;
            // 0x13e6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E69Cu: goto label_13e69c;
            case 0x13E6B8u: goto label_13e6b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E6D0u;
}
