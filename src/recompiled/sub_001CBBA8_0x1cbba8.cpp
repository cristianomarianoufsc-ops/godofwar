#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CBBA8
// Address: 0x1cbba8 - 0x1cbc50
void sub_001CBBA8_0x1cbba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBBA8_0x1cbba8");
#endif

    ctx->pc = 0x1cbba8u;

    // 0x1cbba8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1cbba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1cbbac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cbbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cbbb0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1cbbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1cbbb4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1cbbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1cbbb8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1cbbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbbbc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x1cbbbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cbbc0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1cbbc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbbc4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1cbbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1cbbc8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x1cbbc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1cbbcc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1cbbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1cbbd0: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1cbbd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1cbbd4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1cbbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1cbbd8: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x1cbbd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1cbbdc: 0xc072ecc  jal         func_1CBB30
    ctx->pc = 0x1CBBDCu;
    SET_GPR_U32(ctx, 31, 0x1CBBE4u);
    ctx->pc = 0x1CBBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBDCu;
            // 0x1cbbe0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBB30u;
    if (runtime->hasFunction(0x1CBB30u)) {
        auto targetFn = runtime->lookupFunction(0x1CBB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBBE4u; }
        if (ctx->pc != 0x1CBBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBB30_0x1cbb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBBE4u; }
        if (ctx->pc != 0x1CBBE4u) { return; }
    }
    ctx->pc = 0x1CBBE4u;
    // 0x1cbbe4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1cbbe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbbe8: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1cbbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1cbbec: 0xdce6bdf8  ld          $a2, -0x4208($a3)
    ctx->pc = 0x1cbbecu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 4294950392)));
    // 0x1cbbf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbf4: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x1cbbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x1cbbf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cbbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbfc: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1cbbfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cbc00: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x1cbc00u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x1cbc04: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1cbc04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbc08: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1cbc08u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1cbc0c: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x1cbc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x1cbc10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cbc10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbc14: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x1cbc14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1cbc18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cbc18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbc1c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1cbc1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cbc20: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x1cbc20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x1cbc24: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1cbc24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cbc28: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x1cbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x1cbc2c: 0xfce6bdf8  sd          $a2, -0x4208($a3)
    ctx->pc = 0x1cbc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294950392), GPR_U64(ctx, 6));
    // 0x1cbc30: 0xc077f80  jal         func_1DFE00
    ctx->pc = 0x1CBC30u;
    SET_GPR_U32(ctx, 31, 0x1CBC38u);
    ctx->pc = 0x1CBC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC30u;
            // 0x1cbc34: 0xfe230068  sd          $v1, 0x68($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFE00u;
    if (runtime->hasFunction(0x1DFE00u)) {
        auto targetFn = runtime->lookupFunction(0x1DFE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC38u; }
        if (ctx->pc != 0x1CBC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dfe00_0x1dfe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC38u; }
        if (ctx->pc != 0x1CBC38u) { return; }
    }
    ctx->pc = 0x1CBC38u;
    // 0x1cbc38: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1cbc38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cbc3c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1cbc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cbc40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cbc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cbc44: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC44u;
            // 0x1cbc48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CBC4Cu;
    // 0x1cbc4c: 0x0  nop
    ctx->pc = 0x1cbc4cu;
    // NOP
}
