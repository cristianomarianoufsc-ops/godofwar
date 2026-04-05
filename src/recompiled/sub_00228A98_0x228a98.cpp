#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228A98
// Address: 0x228a98 - 0x228b18
void sub_00228A98_0x228a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228A98_0x228a98");
#endif

    ctx->pc = 0x228a98u;

    // 0x228a98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x228a9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x228a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x228aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x228aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x228aa8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x228aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x228aac: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x228AACu;
    SET_GPR_U32(ctx, 31, 0x228AB4u);
    ctx->pc = 0x228AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228AACu;
            // 0x228ab0: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228AB4u; }
        if (ctx->pc != 0x228AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228AB4u; }
        if (ctx->pc != 0x228AB4u) { return; }
    }
    ctx->pc = 0x228AB4u;
    // 0x228ab4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x228ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x228ab8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x228ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x228abc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228ac0: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x228ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x228ac4: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x228ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x228ac8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228acc: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x228ACCu;
    {
        const bool branch_taken_0x228acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x228AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228ACCu;
            // 0x228ad0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228acc) {
            ctx->pc = 0x228B04u;
            goto label_228b04;
        }
    }
    ctx->pc = 0x228AD4u;
    // 0x228ad4: 0x0  nop
    ctx->pc = 0x228ad4u;
    // NOP
label_228ad8:
    // 0x228ad8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x228ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x228adc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x228adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ae0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x228ae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228ae4: 0x0  nop
    ctx->pc = 0x228ae4u;
    // NOP
    // 0x228ae8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x228AE8u;
    {
        const bool branch_taken_0x228ae8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228AE8u;
            // 0x228aec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ae8) {
            ctx->pc = 0x228B0Cu;
            goto label_228b0c;
        }
    }
    ctx->pc = 0x228AF0u;
    // 0x228af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x228af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228af4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x228af4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x228af8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x228af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228afc: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x228AFCu;
    {
        const bool branch_taken_0x228afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x228B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228AFCu;
            // 0x228b00: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228afc) {
            ctx->pc = 0x228AD8u;
            runtime->cooperativeGuestYield();
            goto label_228ad8;
        }
    }
    ctx->pc = 0x228B04u;
label_228b04:
    // 0x228b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x228b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_228b0c:
    // 0x228b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228b10: 0x3e00008  jr          $ra
    ctx->pc = 0x228B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228B10u;
            // 0x228b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228AD8u: goto label_228ad8;
            case 0x228B04u: goto label_228b04;
            case 0x228B0Cu: goto label_228b0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x228B18u;
}
