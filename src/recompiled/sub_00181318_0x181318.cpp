#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181318
// Address: 0x181318 - 0x1813a8
void sub_00181318_0x181318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181318_0x181318");
#endif

    ctx->pc = 0x181318u;

    // 0x181318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x181318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18131c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18131cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x181320: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x181320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x181324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18132c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x181330: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x181330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x181334: 0x10500014  beq         $v0, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x181334u;
    {
        const bool branch_taken_0x181334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x181338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181334u;
            // 0x181338: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181334) {
            ctx->pc = 0x181388u;
            goto label_181388;
        }
    }
    ctx->pc = 0x18133Cu;
    // 0x18133c: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x18133cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_181340:
    // 0x181340: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x181340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x181344: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x181344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x181348: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x181348u;
    {
        const bool branch_taken_0x181348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181348u;
            // 0x18134c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181348) {
            ctx->pc = 0x181368u;
            goto label_181368;
        }
    }
    ctx->pc = 0x181350u;
    // 0x181350: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x181350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x181354: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x181354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181358: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x181358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18135c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x181360: 0x40f809  jalr        $v0
    ctx->pc = 0x181360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x181368u);
        ctx->pc = 0x181364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181360u;
            // 0x181364: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x181368u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181340u: goto label_181340;
            case 0x181368u: goto label_181368;
            case 0x181388u: goto label_181388;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x181368u; }
            if (ctx->pc != 0x181368u) { return; }
        }
        }
    }
    ctx->pc = 0x181368u;
label_181368:
    // 0x181368: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x181368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18136c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18136cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181370: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x181370u;
    SET_GPR_U32(ctx, 31, 0x181378u);
    ctx->pc = 0x181374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181370u;
            // 0x181374: 0x8c44c7bc  lw          $a0, -0x3844($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181378u; }
        if (ctx->pc != 0x181378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181378u; }
        if (ctx->pc != 0x181378u) { return; }
    }
    ctx->pc = 0x181378u;
    // 0x181378: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x181378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18137c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181380: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x181380u;
    {
        const bool branch_taken_0x181380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x181384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181380u;
            // 0x181384: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181380) {
            ctx->pc = 0x181340u;
            runtime->cooperativeGuestYield();
            goto label_181340;
        }
    }
    ctx->pc = 0x181388u;
label_181388:
    // 0x181388: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x181388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x18138c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x18138cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x181390: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x181390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181394: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x181394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18139c: 0x3e00008  jr          $ra
    ctx->pc = 0x18139Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1813A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18139Cu;
            // 0x1813a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181340u: goto label_181340;
            case 0x181368u: goto label_181368;
            case 0x181388u: goto label_181388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1813A4u;
    // 0x1813a4: 0x0  nop
    ctx->pc = 0x1813a4u;
    // NOP
}
