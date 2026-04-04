#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFCC0
// Address: 0x1bfcc0 - 0x1bfd40
void sub_001BFCC0_0x1bfcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFCC0_0x1bfcc0");
#endif

    ctx->pc = 0x1bfcc0u;

    // 0x1bfcc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bfcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bfcc4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1bfcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1bfcc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bfcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bfccc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1bfcccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1bfcd0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1bfcd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1bfcd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bfcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfcdc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1bfcdcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1bfce0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1bfce0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1bfce4: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x1bfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1bfce8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1bfce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1bfcec: 0x4a0000f  bltz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BFCECu;
    {
        const bool branch_taken_0x1bfcec = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1BFCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFCECu;
            // 0x1bfcf0: 0xae0203e4  sw          $v0, 0x3E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfcec) {
            ctx->pc = 0x1BFD2Cu;
            goto label_1bfd2c;
        }
    }
    ctx->pc = 0x1BFCF4u;
    // 0x1bfcf4: 0xc60003e8  lwc1        $f0, 0x3E8($s0)
    ctx->pc = 0x1bfcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfcf8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1bfcf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfcfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bfcfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bfd00: 0x0  nop
    ctx->pc = 0x1bfd00u;
    // NOP
    // 0x1bfd04: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1BFD04u;
    {
        const bool branch_taken_0x1bfd04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bfd04) {
            ctx->pc = 0x1BFD08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD04u;
            // 0x1bfd08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BFD30u;
            goto label_1bfd30;
        }
    }
    ctx->pc = 0x1BFD0Cu;
    // 0x1bfd0c: 0xc6000178  lwc1        $f0, 0x178($s0)
    ctx->pc = 0x1bfd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfd10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bfd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bfd14: 0x0  nop
    ctx->pc = 0x1bfd14u;
    // NOP
    // 0x1bfd18: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFD18u;
    {
        const bool branch_taken_0x1bfd18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bfd18) {
            ctx->pc = 0x1BFD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD18u;
            // 0x1bfd1c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BFD30u;
            goto label_1bfd30;
        }
    }
    ctx->pc = 0x1BFD20u;
    // 0x1bfd20: 0xc06ff10  jal         func_1BFC40
    ctx->pc = 0x1BFD20u;
    SET_GPR_U32(ctx, 31, 0x1BFD28u);
    ctx->pc = 0x1BFC40u;
    if (runtime->hasFunction(0x1BFC40u)) {
        auto targetFn = runtime->lookupFunction(0x1BFC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD28u; }
        if (ctx->pc != 0x1BFD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFC40_0x1bfc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD28u; }
        if (ctx->pc != 0x1BFD28u) { return; }
    }
    ctx->pc = 0x1BFD28u;
    // 0x1bfd28: 0xe61403e8  swc1        $f20, 0x3E8($s0)
    ctx->pc = 0x1bfd28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1000), bits); }
label_1bfd2c:
    // 0x1bfd2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bfd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bfd30:
    // 0x1bfd30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfd34: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1bfd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bfd38: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD38u;
            // 0x1bfd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFD2Cu: goto label_1bfd2c;
            case 0x1BFD30u: goto label_1bfd30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BFD40u;
}
