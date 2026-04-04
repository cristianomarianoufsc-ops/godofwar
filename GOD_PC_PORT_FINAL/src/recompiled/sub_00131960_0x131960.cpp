#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131960
// Address: 0x131960 - 0x1319d0
void sub_00131960_0x131960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131960_0x131960");
#endif

    ctx->pc = 0x131960u;

label_131960:
    // 0x131960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131964: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131968: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x131968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13196c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13196cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131974: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x131974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x131978: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x131978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x13197c: 0xac8200f8  sw          $v0, 0xF8($a0)
    ctx->pc = 0x13197cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 2));
    // 0x131980: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x131984: 0x8c42ec5c  lw          $v0, -0x13A4($v0)
    ctx->pc = 0x131984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962268)));
    // 0x131988: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13198c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x131990: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x131990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x131994: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x131994u;
    {
        const bool branch_taken_0x131994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131994) {
            ctx->pc = 0x131998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131994u;
            // 0x131998: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1319BCu;
            goto label_1319bc;
        }
    }
    ctx->pc = 0x13199Cu;
    // 0x13199c: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x13199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_1319a0:
    // 0x1319a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1319a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1319a4: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x1319a4u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1319a8: 0xc04c658  jal         func_131960
    ctx->pc = 0x1319A8u;
    SET_GPR_U32(ctx, 31, 0x1319B0u);
    ctx->pc = 0x1319ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1319A8u;
            // 0x1319ac: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131960u;
    runtime->cooperativeGuestYield();
    goto label_131960;
    ctx->pc = 0x1319B0u;
label_1319b0:
    // 0x1319b0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1319B0u;
    {
        const bool branch_taken_0x1319b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1319B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1319B0u;
            // 0x1319b4: 0x2604ffec  addiu       $a0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1319b0) {
            ctx->pc = 0x1319A0u;
            runtime->cooperativeGuestYield();
            goto label_1319a0;
        }
    }
    ctx->pc = 0x1319B8u;
    // 0x1319b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1319b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1319bc:
    // 0x1319bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1319bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1319c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1319c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1319c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1319C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1319C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1319C4u;
            // 0x1319c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131960u: goto label_131960;
            case 0x1319A0u: goto label_1319a0;
            case 0x1319B0u: goto label_1319b0;
            case 0x1319BCu: goto label_1319bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1319CCu;
    // 0x1319cc: 0x0  nop
    ctx->pc = 0x1319ccu;
    // NOP
}
