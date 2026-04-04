#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001aef30
// Address: 0x1aef30 - 0x1af008
void FUN_001aef30_0x1aef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aef30_0x1aef30");
#endif

    ctx->pc = 0x1aef30u;

    // 0x1aef30: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x1aef30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x1aef34: 0x24c325d0  addiu       $v1, $a2, 0x25D0
    ctx->pc = 0x1aef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 9680));
    // 0x1aef38: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1aef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1aef3c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1AEF3Cu;
    {
        const bool branch_taken_0x1aef3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF3Cu;
            // 0x1aef40: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef3c) {
            ctx->pc = 0x1AF000u;
            goto label_1af000;
        }
    }
    ctx->pc = 0x1AEF44u;
    // 0x1aef44: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1aef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1aef48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AEF48u;
    {
        const bool branch_taken_0x1aef48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF48u;
            // 0x1aef4c: 0x24c525d0  addiu       $a1, $a2, 0x25D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 9680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef48) {
            ctx->pc = 0x1AEF6Cu;
            goto label_1aef6c;
        }
    }
    ctx->pc = 0x1AEF50u;
    // 0x1aef50: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1aef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aef54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1aef54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aef58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aef58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aef5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aef5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aef60: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1aef60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1aef64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEF64u;
    {
        const bool branch_taken_0x1aef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF64u;
            // 0x1aef68: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef64) {
            ctx->pc = 0x1AEF78u;
            goto label_1aef78;
        }
    }
    ctx->pc = 0x1AEF6Cu;
label_1aef6c:
    // 0x1aef6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aef6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aef70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aef70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aef74: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1aef74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
label_1aef78:
    // 0x1aef78: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1aef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1aef7c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1aef7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef80: 0x246877d0  addiu       $t0, $v1, 0x77D0
    ctx->pc = 0x1aef80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30672));
    // 0x1aef84: 0x8ce40018  lw          $a0, 0x18($a3)
    ctx->pc = 0x1aef84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1aef88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aef88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1aef8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aef90: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AEF90u;
    {
        const bool branch_taken_0x1aef90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AEF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF90u;
            // 0x1aef94: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef90) {
            ctx->pc = 0x1AEFA8u;
            goto label_1aefa8;
        }
    }
    ctx->pc = 0x1AEF98u;
    // 0x1aef98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aef98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aef9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aef9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aefa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEFA0u;
    {
        const bool branch_taken_0x1aefa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFA0u;
            // 0x1aefa4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefa0) {
            ctx->pc = 0x1AEFACu;
            goto label_1aefac;
        }
    }
    ctx->pc = 0x1AEFA8u;
label_1aefa8:
    // 0x1aefa8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1aefa8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1aefac:
    // 0x1aefac: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x1aefacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1aefb0: 0x24c625d0  addiu       $a2, $a2, 0x25D0
    ctx->pc = 0x1aefb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9680));
    // 0x1aefb4: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x1aefb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1aefb8: 0x712a2389  pcpyld      $a0, $t1, $t2
    ctx->pc = 0x1aefb8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x1aefbc: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x1aefbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1aefc0: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1aefc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1aefc4: 0x71271389  pcpyld      $v0, $t1, $a3
    ctx->pc = 0x1aefc4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
    // 0x1aefc8: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1aefc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1aefcc: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x1aefccu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1aefd0: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1aefd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1aefd4: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x1aefd4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1aefd8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1aefd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1aefdc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1aefdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1aefe0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEFE0u;
    {
        const bool branch_taken_0x1aefe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFE0u;
            // 0x1aefe4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefe0) {
            ctx->pc = 0x1AF000u;
            goto label_1af000;
        }
    }
    ctx->pc = 0x1AEFE8u;
    // 0x1aefe8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x1aefe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1aefec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aefecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aeff0: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AEFF0u;
    {
        const bool branch_taken_0x1aeff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aeff0) {
            ctx->pc = 0x1AEFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFF0u;
            // 0x1aeff4: 0xacc00018  sw          $zero, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AEFF8u;
            goto label_1aeff8;
        }
    }
    ctx->pc = 0x1AEFF8u;
label_1aeff8:
    // 0x1aeff8: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1aeff8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x1aeffc: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x1aeffcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_1af000:
    // 0x1af000: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF000u;
            // 0x1af004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AEF6Cu: goto label_1aef6c;
            case 0x1AEF78u: goto label_1aef78;
            case 0x1AEFA8u: goto label_1aefa8;
            case 0x1AEFACu: goto label_1aefac;
            case 0x1AEFF8u: goto label_1aeff8;
            case 0x1AF000u: goto label_1af000;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF008u;
}
