#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021EED8
// Address: 0x21eed8 - 0x21ef70
void sub_0021EED8_0x21eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EED8_0x21eed8");
#endif

    ctx->pc = 0x21eed8u;

    // 0x21eed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21eed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21eedc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21eedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21eee0: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21EEE0u;
    SET_GPR_U32(ctx, 31, 0x21EEE8u);
    ctx->pc = 0x21EEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EEE0u;
            // 0x21eee4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EEE8u; }
        if (ctx->pc != 0x21EEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EEE8u; }
        if (ctx->pc != 0x21EEE8u) { return; }
    }
    ctx->pc = 0x21EEE8u;
    // 0x21eee8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21eeec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21eef0: 0xc462e5b8  lwc1        $f2, -0x1A48($v1)
    ctx->pc = 0x21eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21eef4: 0xc440c64c  lwc1        $f0, -0x39B4($v0)
    ctx->pc = 0x21eef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21eef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21eefc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21eefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ef00: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x21ef00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21ef04: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x21ef04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21ef08: 0xe462e5b8  swc1        $f2, -0x1A48($v1)
    ctx->pc = 0x21ef08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960568), bits); }
    // 0x21ef0c: 0x46031028  max.s       $f0, $f2, $f3
    ctx->pc = 0x21ef0cu;
    ctx->f[0] = std::max(ctx->f[2], ctx->f[3]);
    // 0x21ef10: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x21ef10u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x21ef14: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x21ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x21ef18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x21ef18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21ef1c: 0x248477d0  addiu       $a0, $a0, 0x77D0
    ctx->pc = 0x21ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30672));
    // 0x21ef20: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x21ef20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x21ef24: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x21ef24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x21ef28: 0x70a61b89  pcpyld      $v1, $a1, $a2
    ctx->pc = 0x21ef28u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x21ef2c: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x21ef2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x21ef30: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x21ef30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x21ef34: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x21ef34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x21ef38: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x21ef38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ef3c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x21ef3cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x21ef40: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x21ef40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x21ef44: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x21ef44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x21ef48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x21EF48u;
    {
        const bool branch_taken_0x21ef48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21EF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EF48u;
            // 0x21ef4c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef48) {
            ctx->pc = 0x21EF60u;
            goto label_21ef60;
        }
    }
    ctx->pc = 0x21EF50u;
    // 0x21ef50: 0xc06ef6e  jal         func_1BBDB8
    ctx->pc = 0x21EF50u;
    SET_GPR_U32(ctx, 31, 0x21EF58u);
    ctx->pc = 0x1BBDB8u;
    if (runtime->hasFunction(0x1BBDB8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EF58u; }
        if (ctx->pc != 0x21EF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBDB8_0x1bbdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EF58u; }
        if (ctx->pc != 0x21EF58u) { return; }
    }
    ctx->pc = 0x21EF58u;
    // 0x21ef58: 0xc087bdc  jal         func_21EF70
    ctx->pc = 0x21EF58u;
    SET_GPR_U32(ctx, 31, 0x21EF60u);
    ctx->pc = 0x21EF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EF58u;
            // 0x21ef5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21EF70u;
    if (runtime->hasFunction(0x21EF70u)) {
        auto targetFn = runtime->lookupFunction(0x21EF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EF60u; }
        if (ctx->pc != 0x21EF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EF70_0x21ef70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EF60u; }
        if (ctx->pc != 0x21EF60u) { return; }
    }
    ctx->pc = 0x21EF60u;
label_21ef60:
    // 0x21ef60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21ef60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ef64: 0x3e00008  jr          $ra
    ctx->pc = 0x21EF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EF64u;
            // 0x21ef68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EF60u: goto label_21ef60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21EF6Cu;
    // 0x21ef6c: 0x0  nop
    ctx->pc = 0x21ef6cu;
    // NOP
}
