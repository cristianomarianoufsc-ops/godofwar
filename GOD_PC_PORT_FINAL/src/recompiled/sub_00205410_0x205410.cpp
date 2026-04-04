#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00205410
// Address: 0x205410 - 0x205488
void sub_00205410_0x205410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205410_0x205410");
#endif

    ctx->pc = 0x205410u;

    // 0x205410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205414: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x205414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x205418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20541c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20541cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205420: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x205420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x205424: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x205424u;
    {
        const bool branch_taken_0x205424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205424) {
            ctx->pc = 0x205428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205424u;
            // 0x205428: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205478u;
            goto label_205478;
        }
    }
    ctx->pc = 0x20542Cu;
    // 0x20542c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x20542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x205430: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x205430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x205434: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x205434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x205438: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x205438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x20543c: 0x40f809  jalr        $v0
    ctx->pc = 0x20543Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205444u);
        ctx->pc = 0x205440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20543Cu;
            // 0x205440: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205444u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205478u: goto label_205478;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205444u; }
            if (ctx->pc != 0x205444u) { return; }
        }
        }
    }
    ctx->pc = 0x205444u;
    // 0x205444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x205444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x205448: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x205448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x20544c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x20544cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x205450: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x205450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205454: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x205454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x205458: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x205458u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x20545c: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x20545cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x205460: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x205460u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x205464: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x205464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x205468: 0xc04032c  jal         func_100CB0
    ctx->pc = 0x205468u;
    SET_GPR_U32(ctx, 31, 0x205470u);
    ctx->pc = 0x20546Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205468u;
            // 0x20546c: 0x46006c06  mov.s       $f16, $f13 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100CB0u;
    if (runtime->hasFunction(0x100CB0u)) {
        auto targetFn = runtime->lookupFunction(0x100CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205470u; }
        if (ctx->pc != 0x205470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100CB0_0x100cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205470u; }
        if (ctx->pc != 0x205470u) { return; }
    }
    ctx->pc = 0x205470u;
    // 0x205470: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x205470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x205474: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x205474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_205478:
    // 0x205478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20547c: 0x3e00008  jr          $ra
    ctx->pc = 0x20547Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20547Cu;
            // 0x205480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205478u: goto label_205478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x205484u;
    // 0x205484: 0x0  nop
    ctx->pc = 0x205484u;
    // NOP
}
