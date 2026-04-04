#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_149b60
// Address: 0x149b60 - 0x149c38
void entry_149b60_0x149c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_149b60_0x149c38");
#endif

    ctx->pc = 0x149b60u;

    // 0x149b60: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x149b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x149b64: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x149b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x149b68: 0x3c090030  lui         $t1, 0x30
    ctx->pc = 0x149b68u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)48 << 16));
    // 0x149b6c: 0x2523d9c0  addiu       $v1, $t1, -0x2640
    ctx->pc = 0x149b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957504));
    // 0x149b70: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x149b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x149b74: 0x24080038  addiu       $t0, $zero, 0x38
    ctx->pc = 0x149b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x149b78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x149b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149b80: 0x94450028  lhu         $a1, 0x28($v0)
    ctx->pc = 0x149b80u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x149b84: 0x0  nop
    ctx->pc = 0x149b84u;
    // NOP
label_149b88:
    // 0x149b88: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x149b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x149b8c: 0x2523d9c0  addiu       $v1, $t1, -0x2640
    ctx->pc = 0x149b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957504));
    // 0x149b90: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x149b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x149b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149b98: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x149b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x149b9c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x149b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149ba0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x149ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x149ba4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149ba8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x149ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149bac: 0x0  nop
    ctx->pc = 0x149bacu;
    // NOP
    // 0x149bb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x149BB0u;
    {
        const bool branch_taken_0x149bb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149BB0u;
            // 0x149bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bb0) {
            ctx->pc = 0x149BC0u;
            goto label_149bc0;
        }
    }
    ctx->pc = 0x149BB8u;
    // 0x149bb8: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x149bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x149bbc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x149bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_149bc0:
    // 0x149bc0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x149bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149bc4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x149bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149bc8: 0x0  nop
    ctx->pc = 0x149bc8u;
    // NOP
    // 0x149bcc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x149BCCu;
    {
        const bool branch_taken_0x149bcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149BCCu;
            // 0x149bd0: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bcc) {
            ctx->pc = 0x149BE0u;
            goto label_149be0;
        }
    }
    ctx->pc = 0x149BD4u;
    // 0x149bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149bd8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x149bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x149bdc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x149bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_149be0:
    // 0x149be0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x149be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x149be4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149be8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x149be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149bec: 0x0  nop
    ctx->pc = 0x149becu;
    // NOP
    // 0x149bf0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x149BF0u;
    {
        const bool branch_taken_0x149bf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149BF0u;
            // 0x149bf4: 0x24c30002  addiu       $v1, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bf0) {
            ctx->pc = 0x149C04u;
            goto label_149c04;
        }
    }
    ctx->pc = 0x149BF8u;
    // 0x149bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149bfc: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x149bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x149c00: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x149c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_149c04:
    // 0x149c04: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x149c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149c08: 0x0  nop
    ctx->pc = 0x149c08u;
    // NOP
    // 0x149c0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x149C0Cu;
    {
        const bool branch_taken_0x149c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149C0Cu;
            // 0x149c10: 0x24c30003  addiu       $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c0c) {
            ctx->pc = 0x149C20u;
            goto label_149c20;
        }
    }
    ctx->pc = 0x149C14u;
    // 0x149c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149c18: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x149c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x149c1c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x149c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_149c20:
    // 0x149c20: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x149c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x149c24: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x149c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x149c28: 0x4e1ffd7  bgez        $a3, . + 4 + (-0x29 << 2)
    ctx->pc = 0x149C28u;
    {
        const bool branch_taken_0x149c28 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x149C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149C28u;
            // 0x149c2c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c28) {
            ctx->pc = 0x149B88u;
            runtime->cooperativeGuestYield();
            goto label_149b88;
        }
    }
    ctx->pc = 0x149C30u;
    // 0x149c30: 0x3e00008  jr          $ra
    ctx->pc = 0x149C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149C30u;
            // 0x149c34: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149B88u: goto label_149b88;
            case 0x149BC0u: goto label_149bc0;
            case 0x149BE0u: goto label_149be0;
            case 0x149C04u: goto label_149c04;
            case 0x149C20u: goto label_149c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x149C38u;
}
