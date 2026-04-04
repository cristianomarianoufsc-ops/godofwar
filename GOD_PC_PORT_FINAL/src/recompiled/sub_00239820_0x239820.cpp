#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239820
// Address: 0x239820 - 0x2398b0
void sub_00239820_0x239820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239820_0x239820");
#endif

    ctx->pc = 0x239820u;

    // 0x239820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x239824: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x239824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x239828: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x239828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23982c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x239830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239838: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x239838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x23983c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23983cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239840: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x239840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x239844: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x239844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x239848: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x239848u;
    {
        const bool branch_taken_0x239848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x23984Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239848u;
            // 0x23984c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239848) {
            ctx->pc = 0x23987Cu;
            goto label_23987c;
        }
    }
    ctx->pc = 0x239850u;
    // 0x239850: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x239850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x239854: 0x0  nop
    ctx->pc = 0x239854u;
    // NOP
label_239858:
    // 0x239858: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x239858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23985c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x239860: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x239860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239864: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x239864u;
    SET_GPR_U32(ctx, 31, 0x23986Cu);
    ctx->pc = 0x239868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239864u;
            // 0x239868: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23986Cu; }
        if (ctx->pc != 0x23986Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23986Cu; }
        if (ctx->pc != 0x23986Cu) { return; }
    }
    ctx->pc = 0x23986Cu;
    // 0x23986c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x239870: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x239870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239874: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x239874u;
    {
        const bool branch_taken_0x239874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239874u;
            // 0x239878: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239874) {
            ctx->pc = 0x239858u;
            runtime->cooperativeGuestYield();
            goto label_239858;
        }
    }
    ctx->pc = 0x23987Cu;
label_23987c:
    // 0x23987c: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x23987cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x239880: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x239880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x239884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239884u;
    {
        const bool branch_taken_0x239884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239884u;
            // 0x239888: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239884) {
            ctx->pc = 0x239894u;
            goto label_239894;
        }
    }
    ctx->pc = 0x23988Cu;
    // 0x23988c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23988Cu;
    SET_GPR_U32(ctx, 31, 0x239894u);
    ctx->pc = 0x239890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23988Cu;
            // 0x239890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239894u; }
        if (ctx->pc != 0x239894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239894u; }
        if (ctx->pc != 0x239894u) { return; }
    }
    ctx->pc = 0x239894u;
label_239894:
    // 0x239894: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x239894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239898: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x239898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23989c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23989cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2398a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2398a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2398a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2398A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2398A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2398A4u;
            // 0x2398a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239858u: goto label_239858;
            case 0x23987Cu: goto label_23987c;
            case 0x239894u: goto label_239894;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2398ACu;
    // 0x2398ac: 0x0  nop
    ctx->pc = 0x2398acu;
    // NOP
}
