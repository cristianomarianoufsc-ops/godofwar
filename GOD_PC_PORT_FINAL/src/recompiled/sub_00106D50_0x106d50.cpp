#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106D50
// Address: 0x106d50 - 0x106e20
void sub_00106D50_0x106d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106D50_0x106d50");
#endif

    ctx->pc = 0x106d50u;

    // 0x106d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x106d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x106d54: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x106d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x106d58: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x106d58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x106d5c: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x106d5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x106d60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x106d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x106d64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x106d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x106d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106d6c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x106d6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x106d70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x106d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x106d74: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x106d74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x106d78: 0x1233001f  beq         $s1, $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x106D78u;
    {
        const bool branch_taken_0x106d78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x106D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106D78u;
            // 0x106d7c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d78) {
            ctx->pc = 0x106DF8u;
            goto label_106df8;
        }
    }
    ctx->pc = 0x106D80u;
    // 0x106d80: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x106d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x106d84: 0x0  nop
    ctx->pc = 0x106d84u;
    // NOP
label_106d88:
    // 0x106d88: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x106d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x106d8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106D8Cu;
    {
        const bool branch_taken_0x106d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106D8Cu;
            // 0x106d90: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d8c) {
            ctx->pc = 0x106DA0u;
            goto label_106da0;
        }
    }
    ctx->pc = 0x106D94u;
    // 0x106d94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x106d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x106d98: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x106D98u;
    {
        const bool branch_taken_0x106d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106d98) {
            ctx->pc = 0x106D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106D98u;
            // 0x106d9c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106DF0u;
            goto label_106df0;
        }
    }
    ctx->pc = 0x106DA0u;
label_106da0:
    // 0x106da0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x106da0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x106da4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x106da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x106da8: 0x52120011  beql        $s0, $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x106DA8u;
    {
        const bool branch_taken_0x106da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x106da8) {
            ctx->pc = 0x106DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106DA8u;
            // 0x106dac: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106DF0u;
            goto label_106df0;
        }
    }
    ctx->pc = 0x106DB0u;
    // 0x106db0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x106db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x106db4: 0x0  nop
    ctx->pc = 0x106db4u;
    // NOP
label_106db8:
    // 0x106db8: 0xe6150050  swc1        $f21, 0x50($s0)
    ctx->pc = 0x106db8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x106dbc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x106dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x106dc0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x106DC0u;
    {
        const bool branch_taken_0x106dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106DC0u;
            // 0x106dc4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dc0) {
            ctx->pc = 0x106DCCu;
            goto label_106dcc;
        }
    }
    ctx->pc = 0x106DC8u;
    // 0x106dc8: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x106dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_106dcc:
    // 0x106dcc: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x106DCCu;
    SET_GPR_U32(ctx, 31, 0x106DD4u);
    ctx->pc = 0x106DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106DCCu;
            // 0x106dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106DD4u; }
        if (ctx->pc != 0x106DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106DD4u; }
        if (ctx->pc != 0x106DD4u) { return; }
    }
    ctx->pc = 0x106DD4u;
    // 0x106dd4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x106dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x106dd8: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x106dd8u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x106ddc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x106ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x106de0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x106de0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106de4: 0x5612fff4  bnel        $s0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x106DE4u;
    {
        const bool branch_taken_0x106de4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x106de4) {
            ctx->pc = 0x106DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106DE4u;
            // 0x106de8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106DB8u;
            runtime->cooperativeGuestYield();
            goto label_106db8;
        }
    }
    ctx->pc = 0x106DECu;
    // 0x106dec: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x106decu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_106df0:
    // 0x106df0: 0x5633ffe5  bnel        $s1, $s3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x106DF0u;
    {
        const bool branch_taken_0x106df0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x106df0) {
            ctx->pc = 0x106DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106DF0u;
            // 0x106df4: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106D88u;
            runtime->cooperativeGuestYield();
            goto label_106d88;
        }
    }
    ctx->pc = 0x106DF8u;
label_106df8:
    // 0x106df8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x106df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106dfc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x106dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106e00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x106e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106e04: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x106e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106e0c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x106e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x106e10: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x106e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x106e14: 0x3e00008  jr          $ra
    ctx->pc = 0x106E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E14u;
            // 0x106e18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106D88u: goto label_106d88;
            case 0x106DA0u: goto label_106da0;
            case 0x106DB8u: goto label_106db8;
            case 0x106DCCu: goto label_106dcc;
            case 0x106DF0u: goto label_106df0;
            case 0x106DF8u: goto label_106df8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106E1Cu;
    // 0x106e1c: 0x0  nop
    ctx->pc = 0x106e1cu;
    // NOP
}
