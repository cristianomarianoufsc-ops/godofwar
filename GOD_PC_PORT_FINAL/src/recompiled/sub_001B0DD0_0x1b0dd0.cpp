#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0DD0
// Address: 0x1b0dd0 - 0x1b0e40
void sub_001B0DD0_0x1b0dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0DD0_0x1b0dd0");
#endif

    ctx->pc = 0x1b0dd0u;

    // 0x1b0dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0dd4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1b0dd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b0dd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b0dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b0ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0de0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b0de4: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x1b0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x1b0de8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b0de8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b0dec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b0decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b0df0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b0df4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0df8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b0dfc: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1b0dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b0e00: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0E00u;
    {
        const bool branch_taken_0x1b0e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E00u;
            // 0x1b0e04: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e00) {
            ctx->pc = 0x1B0E28u;
            goto label_1b0e28;
        }
    }
    ctx->pc = 0x1B0E08u;
    // 0x1b0e08: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x1b0e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1b0e0c: 0x0  nop
    ctx->pc = 0x1b0e0cu;
    // NOP
label_1b0e10:
    // 0x1b0e10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b0e10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b0e14: 0xc054104  jal         func_150410
    ctx->pc = 0x1B0E14u;
    SET_GPR_U32(ctx, 31, 0x1B0E1Cu);
    ctx->pc = 0x1B0E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E14u;
            // 0x1b0e18: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150410u;
    if (runtime->hasFunction(0x150410u)) {
        auto targetFn = runtime->lookupFunction(0x150410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E1Cu; }
        if (ctx->pc != 0x1B0E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150410_0x1504d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0E1Cu; }
        if (ctx->pc != 0x1B0E1Cu) { return; }
    }
    ctx->pc = 0x1B0E1Cu;
    // 0x1b0e1c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1b0e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0e20: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B0E20u;
    {
        const bool branch_taken_0x1b0e20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0e20) {
            ctx->pc = 0x1B0E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E20u;
            // 0x1b0e24: 0x2604ffec  addiu       $a0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0E10u;
            runtime->cooperativeGuestYield();
            goto label_1b0e10;
        }
    }
    ctx->pc = 0x1B0E28u;
label_1b0e28:
    // 0x1b0e28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b0e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0e30: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b0e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b0e34: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E34u;
            // 0x1b0e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0E10u: goto label_1b0e10;
            case 0x1B0E28u: goto label_1b0e28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0E3Cu;
    // 0x1b0e3c: 0x0  nop
    ctx->pc = 0x1b0e3cu;
    // NOP
}
