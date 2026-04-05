#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00120800
// Address: 0x120800 - 0x120888
void sub_00120800_0x120800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120800_0x120800");
#endif

    ctx->pc = 0x120800u;

    // 0x120800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x120800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x120804: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x120804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x120808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12080c: 0x2443dd58  addiu       $v1, $v0, -0x22A8
    ctx->pc = 0x12080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x120810: 0x8c42dd58  lw          $v0, -0x22A8($v0)
    ctx->pc = 0x120810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x120814: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x120814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120818: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x120818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12081c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12081cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x120820: 0xc484036c  lwc1        $f4, 0x36C($a0)
    ctx->pc = 0x120820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x120824: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x120824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x120828: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x120828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12082c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12082cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x120830: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x120830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x120834: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x120834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x120838: 0xc4800370  lwc1        $f0, 0x370($a0)
    ctx->pc = 0x120838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12083c: 0xc4850368  lwc1        $f5, 0x368($a0)
    ctx->pc = 0x12083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x120840: 0xc4830374  lwc1        $f3, 0x374($a0)
    ctx->pc = 0x120840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x120844: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x120844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x120848: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x120848u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x12084c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12084cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x120850: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x120850u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x120854: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x120858: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x120858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12085c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12085cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x120860: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x120860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x120864: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x120868: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x120868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12086c: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12086cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x120870: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x120870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x120874: 0xc0481d0  jal         func_120740
    ctx->pc = 0x120874u;
    SET_GPR_U32(ctx, 31, 0x12087Cu);
    ctx->pc = 0x120740u;
    if (runtime->hasFunction(0x120740u)) {
        auto targetFn = runtime->lookupFunction(0x120740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12087Cu; }
        if (ctx->pc != 0x12087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_120740_0x120800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12087Cu; }
        if (ctx->pc != 0x12087Cu) { return; }
    }
    ctx->pc = 0x12087Cu;
    // 0x12087c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12087cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120880: 0x3e00008  jr          $ra
    ctx->pc = 0x120880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120880u;
            // 0x120884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x120888u;
}
