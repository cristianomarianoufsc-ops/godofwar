#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001319D0
// Address: 0x1319d0 - 0x131a58
void sub_001319D0_0x1319d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001319D0_0x1319d0");
#endif

    ctx->pc = 0x1319d0u;

label_1319d0:
    // 0x1319d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1319d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1319d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1319d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1319d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1319d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1319dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1319dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1319e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1319e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1319e4: 0x111827  nor         $v1, $zero, $s1
    ctx->pc = 0x1319e4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x1319e8: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x1319e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x1319ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1319ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1319f0: 0xac8200f8  sw          $v0, 0xF8($a0)
    ctx->pc = 0x1319f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 2));
    // 0x1319f4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1319f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1319f8: 0x8c42ec5c  lw          $v0, -0x13A4($v0)
    ctx->pc = 0x1319f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962268)));
    // 0x1319fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1319fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131a00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x131a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x131a04: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x131a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x131a08: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x131A08u;
    {
        const bool branch_taken_0x131a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a08) {
            ctx->pc = 0x131A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131A08u;
            // 0x131a0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131A34u;
            goto label_131a34;
        }
    }
    ctx->pc = 0x131A10u;
    // 0x131a10: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x131a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x131a14: 0x0  nop
    ctx->pc = 0x131a14u;
    // NOP
label_131a18:
    // 0x131a18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x131a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a1c: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x131a1cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x131a20: 0xc04c674  jal         func_1319D0
    ctx->pc = 0x131A20u;
    SET_GPR_U32(ctx, 31, 0x131A28u);
    ctx->pc = 0x131A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131A20u;
            // 0x131a24: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319D0u;
    runtime->cooperativeGuestYield();
    goto label_1319d0;
    ctx->pc = 0x131A28u;
label_131a28:
    // 0x131a28: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x131A28u;
    {
        const bool branch_taken_0x131a28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x131A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131A28u;
            // 0x131a2c: 0x2604ffec  addiu       $a0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a28) {
            ctx->pc = 0x131A18u;
            runtime->cooperativeGuestYield();
            goto label_131a18;
        }
    }
    ctx->pc = 0x131A30u;
    // 0x131a30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x131a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_131a34:
    // 0x131a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x131A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131A3Cu;
            // 0x131a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1319D0u: goto label_1319d0;
            case 0x131A18u: goto label_131a18;
            case 0x131A28u: goto label_131a28;
            case 0x131A34u: goto label_131a34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131A44u;
    // 0x131a44: 0x0  nop
    ctx->pc = 0x131a44u;
    // NOP
    // 0x131a48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x131a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a4c: 0x0  nop
    ctx->pc = 0x131a4cu;
    // NOP
    // 0x131a50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x131a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a54: 0x0  nop
    ctx->pc = 0x131a54u;
    // NOP
}
