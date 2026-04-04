#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106C88
// Address: 0x106c88 - 0x106d50
void sub_00106C88_0x106c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106C88_0x106c88");
#endif

    ctx->pc = 0x106c88u;

    // 0x106c88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x106c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x106c8c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x106c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x106c90: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x106c90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x106c94: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x106c94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x106c98: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x106c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x106c9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x106c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x106ca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106ca4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x106ca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x106ca8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x106ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x106cac: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x106cacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x106cb0: 0x1233001d  beq         $s1, $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x106CB0u;
    {
        const bool branch_taken_0x106cb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x106CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106CB0u;
            // 0x106cb4: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106cb0) {
            ctx->pc = 0x106D28u;
            goto label_106d28;
        }
    }
    ctx->pc = 0x106CB8u;
    // 0x106cb8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x106cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x106cbc: 0x0  nop
    ctx->pc = 0x106cbcu;
    // NOP
label_106cc0:
    // 0x106cc0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x106cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x106cc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106CC4u;
    {
        const bool branch_taken_0x106cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106CC4u;
            // 0x106cc8: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106cc4) {
            ctx->pc = 0x106CD8u;
            goto label_106cd8;
        }
    }
    ctx->pc = 0x106CCCu;
    // 0x106ccc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x106cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x106cd0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x106CD0u;
    {
        const bool branch_taken_0x106cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106cd0) {
            ctx->pc = 0x106CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106CD0u;
            // 0x106cd4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106D20u;
            goto label_106d20;
        }
    }
    ctx->pc = 0x106CD8u;
label_106cd8:
    // 0x106cd8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x106cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x106cdc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x106cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x106ce0: 0x5212000f  beql        $s0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x106CE0u;
    {
        const bool branch_taken_0x106ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x106ce0) {
            ctx->pc = 0x106CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106CE0u;
            // 0x106ce4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106D20u;
            goto label_106d20;
        }
    }
    ctx->pc = 0x106CE8u;
    // 0x106ce8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x106ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x106cec: 0x0  nop
    ctx->pc = 0x106cecu;
    // NOP
label_106cf0:
    // 0x106cf0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x106cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x106cf4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106CF4u;
    {
        const bool branch_taken_0x106cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106cf4) {
            ctx->pc = 0x106CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106CF4u;
            // 0x106cf8: 0xc454001c  lwc1        $f20, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x106CFCu;
            goto label_106cfc;
        }
    }
    ctx->pc = 0x106CFCu;
label_106cfc:
    // 0x106cfc: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x106CFCu;
    SET_GPR_U32(ctx, 31, 0x106D04u);
    ctx->pc = 0x106D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106CFCu;
            // 0x106d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106D04u; }
        if (ctx->pc != 0x106D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106D04u; }
        if (ctx->pc != 0x106D04u) { return; }
    }
    ctx->pc = 0x106D04u;
    // 0x106d04: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x106d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x106d08: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x106d08u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x106d0c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x106d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x106d10: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x106d10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106d14: 0x5612fff6  bnel        $s0, $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x106D14u;
    {
        const bool branch_taken_0x106d14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x106d14) {
            ctx->pc = 0x106D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106D14u;
            // 0x106d18: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106CF0u;
            runtime->cooperativeGuestYield();
            goto label_106cf0;
        }
    }
    ctx->pc = 0x106D1Cu;
    // 0x106d1c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x106d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_106d20:
    // 0x106d20: 0x5633ffe7  bnel        $s1, $s3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x106D20u;
    {
        const bool branch_taken_0x106d20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x106d20) {
            ctx->pc = 0x106D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106D20u;
            // 0x106d24: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106CC0u;
            runtime->cooperativeGuestYield();
            goto label_106cc0;
        }
    }
    ctx->pc = 0x106D28u;
label_106d28:
    // 0x106d28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x106d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106d2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x106d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106d30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x106d30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106d34: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x106d34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106d3c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x106d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x106d40: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x106d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x106d44: 0x3e00008  jr          $ra
    ctx->pc = 0x106D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106D44u;
            // 0x106d48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106CC0u: goto label_106cc0;
            case 0x106CD8u: goto label_106cd8;
            case 0x106CF0u: goto label_106cf0;
            case 0x106CFCu: goto label_106cfc;
            case 0x106D20u: goto label_106d20;
            case 0x106D28u: goto label_106d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106D4Cu;
    // 0x106d4c: 0x0  nop
    ctx->pc = 0x106d4cu;
    // NOP
}
