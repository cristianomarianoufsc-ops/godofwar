#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8960
// Address: 0x1a8960 - 0x1a89d8
void sub_001A8960_0x1a8960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8960_0x1a8960");
#endif

    ctx->pc = 0x1a8960u;

    // 0x1a8960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a8964: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a8964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a8968: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a8968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a896c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a896cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8970: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a8970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1a8974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8978: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1a8978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a897c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x1a897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1a8980: 0x10720009  beq         $v1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8980u;
    {
        const bool branch_taken_0x1a8980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A8984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8980u;
            // 0x1a8984: 0x261100b8  addiu       $s1, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8980) {
            ctx->pc = 0x1A89A8u;
            goto label_1a89a8;
        }
    }
    ctx->pc = 0x1A8988u;
    // 0x1a8988: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1a8988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1a898c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8990: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1a8990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1a8994: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1a8994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1a8998: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a8998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a899c: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A899Cu;
    SET_GPR_U32(ctx, 31, 0x1A89A4u);
    ctx->pc = 0x1A89A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A899Cu;
            // 0x1a89a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89A4u; }
        if (ctx->pc != 0x1A89A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89A4u; }
        if (ctx->pc != 0x1A89A4u) { return; }
    }
    ctx->pc = 0x1A89A4u;
    // 0x1a89a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a89a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a89a8:
    // 0x1a89a8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a89ac: 0x10920004  beq         $a0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A89ACu;
    {
        const bool branch_taken_0x1a89ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A89B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89ACu;
            // 0x1a89b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a89ac) {
            ctx->pc = 0x1A89C0u;
            goto label_1a89c0;
        }
    }
    ctx->pc = 0x1A89B4u;
    // 0x1a89b4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x1a89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1a89b8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1a89b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a89bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a89bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a89c0:
    // 0x1a89c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a89c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a89c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a89c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a89c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a89c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a89cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a89ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a89d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89D0u;
            // 0x1a89d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A89A8u: goto label_1a89a8;
            case 0x1A89C0u: goto label_1a89c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A89D8u;
}
