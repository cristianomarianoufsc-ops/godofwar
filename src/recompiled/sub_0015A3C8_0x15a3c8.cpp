#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A3C8
// Address: 0x15a3c8 - 0x15a448
void sub_0015A3C8_0x15a3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A3C8_0x15a3c8");
#endif

    ctx->pc = 0x15a3c8u;

    // 0x15a3c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a3cc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x15a3ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a3d4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x15a3d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3d8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x15a3d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3dc: 0x18e00010  blez        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x15A3DCu;
    {
        const bool branch_taken_0x15a3dc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x15A3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3DCu;
            // 0x15a3e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3dc) {
            ctx->pc = 0x15A420u;
            goto label_15a420;
        }
    }
    ctx->pc = 0x15A3E4u;
    // 0x15a3e4: 0x0  nop
    ctx->pc = 0x15a3e4u;
    // NOP
label_15a3e8:
    // 0x15a3e8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x15a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15a3ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15a3ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a3f0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x15a3f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15a3f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a3f8: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x15a3f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x15a3fc: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x15a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x15a400: 0x2403ffd6  addiu       $v1, $zero, -0x2A
    ctx->pc = 0x15a400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x15a404: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x15a404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15a408: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x15a408u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a40c: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x15a40cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a410: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x15a410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x15a414: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x15a414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15a418: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x15A418u;
    {
        const bool branch_taken_0x15a418 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A418u;
            // 0x15a41c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a418) {
            ctx->pc = 0x15A3E8u;
            runtime->cooperativeGuestYield();
            goto label_15a3e8;
        }
    }
    ctx->pc = 0x15A420u;
label_15a420:
    // 0x15a420: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x15a420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a424: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x15a424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a428: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x15a428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a42c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15a42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a430: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15a430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a434: 0xc05689e  jal         func_15A278
    ctx->pc = 0x15A434u;
    SET_GPR_U32(ctx, 31, 0x15A43Cu);
    ctx->pc = 0x15A438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A434u;
            // 0x15a438: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A278u;
    if (runtime->hasFunction(0x15A278u)) {
        auto targetFn = runtime->lookupFunction(0x15A278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A43Cu; }
        if (ctx->pc != 0x15A43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A278_0x15a278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A43Cu; }
        if (ctx->pc != 0x15A43Cu) { return; }
    }
    ctx->pc = 0x15A43Cu;
    // 0x15a43c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a440: 0x3e00008  jr          $ra
    ctx->pc = 0x15A440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A440u;
            // 0x15a444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A3E8u: goto label_15a3e8;
            case 0x15A420u: goto label_15a420;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15A448u;
}
