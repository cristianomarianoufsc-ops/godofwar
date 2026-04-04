#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116DD0
// Address: 0x116dd0 - 0x116e78
void sub_00116DD0_0x116dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116DD0_0x116dd0");
#endif

    ctx->pc = 0x116dd0u;

    // 0x116dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116dd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x116dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x116dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116de0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x116de0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x116de4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x116de4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x116de8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x116de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x116dec: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x116decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x116df0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116DF0u;
    {
        const bool branch_taken_0x116df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116df0) {
            ctx->pc = 0x116E0Cu;
            goto label_116e0c;
        }
    }
    ctx->pc = 0x116DF8u;
    // 0x116df8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x116df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x116dfc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x116DFCu;
    {
        const bool branch_taken_0x116dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116DFCu;
            // 0x116e00: 0xc6150050  lwc1        $f21, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116dfc) {
            ctx->pc = 0x116E1Cu;
            goto label_116e1c;
        }
    }
    ctx->pc = 0x116E04u;
    // 0x116e04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116E04u;
    {
        const bool branch_taken_0x116e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116E04u;
            // 0x116e08: 0xc474001c  lwc1        $f20, 0x1C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e04) {
            ctx->pc = 0x116E1Cu;
            goto label_116e1c;
        }
    }
    ctx->pc = 0x116E0Cu;
label_116e0c:
    // 0x116e0c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x116e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x116e10: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x116E10u;
    {
        const bool branch_taken_0x116e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x116e10) {
            ctx->pc = 0x116E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x116E10u;
            // 0x116e14: 0xc474001c  lwc1        $f20, 0x1C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x116E1Cu;
            goto label_116e1c;
        }
    }
    ctx->pc = 0x116E18u;
    // 0x116e18: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x116e18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_116e1c:
    // 0x116e1c: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x116E1Cu;
    SET_GPR_U32(ctx, 31, 0x116E24u);
    ctx->pc = 0x116E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116E1Cu;
            // 0x116e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116E24u; }
        if (ctx->pc != 0x116E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116E24u; }
        if (ctx->pc != 0x116E24u) { return; }
    }
    ctx->pc = 0x116E24u;
    // 0x116e24: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x116e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x116e28: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x116e28u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x116e2c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x116e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x116e30: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x116e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x116e34: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x116e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116e38: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x116e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x116e3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x116e3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x116e40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x116e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116e44: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x116e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x116e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116e4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x116e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x116e50: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x116e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x116e54: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x116e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x116e58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x116e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116e5c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x116e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x116e60: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x116e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x116e64: 0x3e00008  jr          $ra
    ctx->pc = 0x116E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116E64u;
            // 0x116e68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116E0Cu: goto label_116e0c;
            case 0x116E1Cu: goto label_116e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116E6Cu;
    // 0x116e6c: 0x0  nop
    ctx->pc = 0x116e6cu;
    // NOP
    // 0x116e70: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x116e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x116e74: 0x0  nop
    ctx->pc = 0x116e74u;
    // NOP
}
