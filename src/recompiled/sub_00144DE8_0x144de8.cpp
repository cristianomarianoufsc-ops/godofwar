#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144DE8
// Address: 0x144de8 - 0x144e40
void sub_00144DE8_0x144de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144DE8_0x144de8");
#endif

    ctx->pc = 0x144de8u;

    // 0x144de8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144dec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x144decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x144df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144df4: 0xc051348  jal         func_144D20
    ctx->pc = 0x144DF4u;
    SET_GPR_U32(ctx, 31, 0x144DFCu);
    ctx->pc = 0x144DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DF4u;
            // 0x144df8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144D20u;
    if (runtime->hasFunction(0x144D20u)) {
        auto targetFn = runtime->lookupFunction(0x144D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DFCu; }
        if (ctx->pc != 0x144DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144D20_0x144d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DFCu; }
        if (ctx->pc != 0x144DFCu) { return; }
    }
    ctx->pc = 0x144DFCu;
    // 0x144dfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x144dfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e00: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x144E00u;
    {
        const bool branch_taken_0x144e00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x144E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144E00u;
            // 0x144e04: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e00) {
            ctx->pc = 0x144E2Cu;
            goto label_144e2c;
        }
    }
    ctx->pc = 0x144E08u;
    // 0x144e08: 0xc050ece  jal         func_143B38
    ctx->pc = 0x144E08u;
    SET_GPR_U32(ctx, 31, 0x144E10u);
    ctx->pc = 0x144E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144E08u;
            // 0x144e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143B38u;
    if (runtime->hasFunction(0x143B38u)) {
        auto targetFn = runtime->lookupFunction(0x143B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E10u; }
        if (ctx->pc != 0x144E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143b38_0x143c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E10u; }
        if (ctx->pc != 0x144E10u) { return; }
    }
    ctx->pc = 0x144E10u;
    // 0x144e10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144e10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144e14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144e14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144e18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x144e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x144e1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x144e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x144e20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x144e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x144e24: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x144e24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x144e28: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x144e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_144e2c:
    // 0x144e2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x144e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144e34: 0x3e00008  jr          $ra
    ctx->pc = 0x144E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144E34u;
            // 0x144e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144E2Cu: goto label_144e2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144E3Cu;
    // 0x144e3c: 0x0  nop
    ctx->pc = 0x144e3cu;
    // NOP
}
