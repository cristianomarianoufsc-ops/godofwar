#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184348
// Address: 0x184348 - 0x184398
void sub_00184348_0x184348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184348_0x184348");
#endif

    ctx->pc = 0x184348u;

    // 0x184348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18434c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18434cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184350: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x184350u;
    SET_GPR_U32(ctx, 31, 0x184358u);
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184358u; }
        if (ctx->pc != 0x184358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184358u; }
        if (ctx->pc != 0x184358u) { return; }
    }
    ctx->pc = 0x184358u;
    // 0x184358: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x184358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18435c: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x18435cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x184360: 0x34210080  ori         $at, $at, 0x80
    ctx->pc = 0x184360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)128);
    // 0x184364: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x184364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184368: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x184368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18436c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x18436cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x184370: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x184370u;
    {
        const bool branch_taken_0x184370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184370) {
            ctx->pc = 0x184374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x184370u;
            // 0x184374: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x184378u;
            goto label_184378;
        }
    }
    ctx->pc = 0x184378u;
label_184378:
    // 0x184378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18437c: 0x1010  mfhi        $v0
    ctx->pc = 0x18437cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x184380: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18438c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18438cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x184390: 0x3e00008  jr          $ra
    ctx->pc = 0x184390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184390u;
            // 0x184394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184378u: goto label_184378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x184398u;
}
