#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002071E8
// Address: 0x2071e8 - 0x207220
void sub_002071E8_0x2071e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002071E8_0x2071e8");
#endif

    ctx->pc = 0x2071e8u;

    // 0x2071e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2071e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2071ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2071ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2071f0: 0xc081c1e  jal         func_207078
    ctx->pc = 0x2071F0u;
    SET_GPR_U32(ctx, 31, 0x2071F8u);
    ctx->pc = 0x207078u;
    if (runtime->hasFunction(0x207078u)) {
        auto targetFn = runtime->lookupFunction(0x207078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2071F8u; }
        if (ctx->pc != 0x2071F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207078_0x207078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2071F8u; }
        if (ctx->pc != 0x2071F8u) { return; }
    }
    ctx->pc = 0x2071F8u;
    // 0x2071f8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2071F8u;
    {
        const bool branch_taken_0x2071f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2071f8) {
            ctx->pc = 0x2071FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2071F8u;
            // 0x2071fc: 0xc4400178  lwc1        $f0, 0x178($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x207208u;
            goto label_207208;
        }
    }
    ctx->pc = 0x207200u;
    // 0x207200: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x207200u;
    {
        const bool branch_taken_0x207200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207200u;
            // 0x207204: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207200) {
            ctx->pc = 0x207210u;
            goto label_207210;
        }
    }
    ctx->pc = 0x207208u;
label_207208:
    // 0x207208: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x207208u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20720c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20720cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_207210:
    // 0x207210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207214: 0x3e00008  jr          $ra
    ctx->pc = 0x207214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207214u;
            // 0x207218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207208u: goto label_207208;
            case 0x207210u: goto label_207210;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20721Cu;
    // 0x20721c: 0x0  nop
    ctx->pc = 0x20721cu;
    // NOP
}
