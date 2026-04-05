#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_289f60
// Address: 0x289f60 - 0x289ff8
void entry_289f60_0x289ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_289f60_0x289ff8");
#endif

    ctx->pc = 0x289f60u;

    // 0x289f60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x289f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x289f64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x289f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x289f68: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x289f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x289f6c: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x289f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
    // 0x289f70: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x289f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x289f74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x289f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f78: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x289f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x289f7c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x289f7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x289f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x289f84: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x289F84u;
    {
        const bool branch_taken_0x289f84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F84u;
            // 0x289f88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f84) {
            ctx->pc = 0x289FD0u;
            goto label_289fd0;
        }
    }
    ctx->pc = 0x289F8Cu;
    // 0x289f8c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x289f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_289f90:
    // 0x289f90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x289f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x289f94: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x289F94u;
    {
        const bool branch_taken_0x289f94 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x289F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F94u;
            // 0x289f98: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f94) {
            ctx->pc = 0x289FC4u;
            goto label_289fc4;
        }
    }
    ctx->pc = 0x289F9Cu;
    // 0x289f9c: 0x0  nop
    ctx->pc = 0x289f9cu;
    // NOP
label_289fa0:
    // 0x289fa0: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x289fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289fa4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x289FA4u;
    {
        const bool branch_taken_0x289fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289fa4) {
            ctx->pc = 0x289FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289FA4u;
            // 0x289fa8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289FBCu;
            goto label_289fbc;
        }
    }
    ctx->pc = 0x289FACu;
    // 0x289fac: 0x280f809  jalr        $s4
    ctx->pc = 0x289FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x289FB4u);
        ctx->pc = 0x289FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289FACu;
            // 0x289fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x289FB4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289F90u: goto label_289f90;
            case 0x289FA0u: goto label_289fa0;
            case 0x289FBCu: goto label_289fbc;
            case 0x289FC4u: goto label_289fc4;
            case 0x289FD0u: goto label_289fd0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x289FB4u; }
            if (ctx->pc != 0x289FB4u) { return; }
        }
        }
    }
    ctx->pc = 0x289FB4u;
    // 0x289fb4: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x289fb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x289fb8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x289fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_289fbc:
    // 0x289fbc: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x289FBCu;
    {
        const bool branch_taken_0x289fbc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x289FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289FBCu;
            // 0x289fc0: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fbc) {
            ctx->pc = 0x289FA0u;
            runtime->cooperativeGuestYield();
            goto label_289fa0;
        }
    }
    ctx->pc = 0x289FC4u;
label_289fc4:
    // 0x289fc4: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x289fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x289fc8: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x289FC8u;
    {
        const bool branch_taken_0x289fc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x289fc8) {
            ctx->pc = 0x289FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289FC8u;
            // 0x289fcc: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289F90u;
            runtime->cooperativeGuestYield();
            goto label_289f90;
        }
    }
    ctx->pc = 0x289FD0u;
label_289fd0:
    // 0x289fd0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x289fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fd4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x289fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289fd8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x289fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289fdc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x289fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289fe0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x289fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289fe4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x289fe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289fec: 0x3e00008  jr          $ra
    ctx->pc = 0x289FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289FECu;
            // 0x289ff0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289F90u: goto label_289f90;
            case 0x289FA0u: goto label_289fa0;
            case 0x289FBCu: goto label_289fbc;
            case 0x289FC4u: goto label_289fc4;
            case 0x289FD0u: goto label_289fd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289FF4u;
    // 0x289ff4: 0x0  nop
    ctx->pc = 0x289ff4u;
    // NOP
}
