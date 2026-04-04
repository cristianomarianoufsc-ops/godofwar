#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_276db8
// Address: 0x276db8 - 0x276ea8
void entry_276db8_0x276ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_276db8_0x276ea8");
#endif

    ctx->pc = 0x276db8u;

    // 0x276db8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x276db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x276dbc: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x276dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
    // 0x276dc0: 0x254a6f50  addiu       $t2, $t2, 0x6F50
    ctx->pc = 0x276dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28496));
    // 0x276dc4: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x276dc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_276dc8:
    // 0x276dc8: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x276dc8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x276dcc: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x276dccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x276dd0: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x276dd0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x276dd4: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x276dd4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x276dd8: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x276dd8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x276ddc: 0x78cc0040  lq          $t4, 0x40($a2)
    ctx->pc = 0x276ddcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x276de0: 0x78cd0050  lq          $t5, 0x50($a2)
    ctx->pc = 0x276de0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x276de4: 0x78ce0060  lq          $t6, 0x60($a2)
    ctx->pc = 0x276de4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x276de8: 0x78cf0070  lq          $t7, 0x70($a2)
    ctx->pc = 0x276de8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x276dec: 0x78b90000  lq          $t9, 0x0($a1)
    ctx->pc = 0x276decu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x276df0: 0x71194108  paddh       $t0, $t0, $t9
    ctx->pc = 0x276df0u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x276df4: 0x78b90010  lq          $t9, 0x10($a1)
    ctx->pc = 0x276df4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x276df8: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x276df8u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x276dfc: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x276dfcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x276e00: 0x71394908  paddh       $t1, $t1, $t9
    ctx->pc = 0x276e00u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x276e04: 0x78b90020  lq          $t9, 0x20($a1)
    ctx->pc = 0x276e04u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x276e08: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x276e08u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x276e0c: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x276e0cu;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x276e10: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x276e10u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x276e14: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x276e14u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x276e18: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x276e18u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x276e1c: 0x78b90030  lq          $t9, 0x30($a1)
    ctx->pc = 0x276e1cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x276e20: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x276e20u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x276e24: 0x71795908  paddh       $t3, $t3, $t9
    ctx->pc = 0x276e24u;
    SET_GPR_VEC(ctx, 11, PS2_PADDH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 25)));
    // 0x276e28: 0x78b90040  lq          $t9, 0x40($a1)
    ctx->pc = 0x276e28u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x276e2c: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x276e2cu;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x276e30: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x276e30u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x276e34: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x276e34u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x276e38: 0x71996108  paddh       $t4, $t4, $t9
    ctx->pc = 0x276e38u;
    SET_GPR_VEC(ctx, 12, PS2_PADDH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 25)));
    // 0x276e3c: 0x78b90050  lq          $t9, 0x50($a1)
    ctx->pc = 0x276e3cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x276e40: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x276e40u;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x276e44: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x276e44u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x276e48: 0x71b96908  paddh       $t5, $t5, $t9
    ctx->pc = 0x276e48u;
    SET_GPR_VEC(ctx, 13, PS2_PADDH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 25)));
    // 0x276e4c: 0x78b90060  lq          $t9, 0x60($a1)
    ctx->pc = 0x276e4cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x276e50: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x276e50u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x276e54: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x276e54u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x276e58: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x276e58u;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x276e5c: 0x71d97108  paddh       $t6, $t6, $t9
    ctx->pc = 0x276e5cu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 25)));
    // 0x276e60: 0x78b90070  lq          $t9, 0x70($a1)
    ctx->pc = 0x276e60u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x276e64: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x276e64u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x276e68: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x276e68u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x276e6c: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x276e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x276e70: 0x71f97908  paddh       $t7, $t7, $t9
    ctx->pc = 0x276e70u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x276e74: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x276e74u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x276e78: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x276e78u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x276e7c: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x276e7cu;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x276e80: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x276e80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x276e84: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x276e84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x276e88: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x276e88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x276e8c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x276e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x276e90: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x276e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x276e94: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x276E94u;
    {
        const bool branch_taken_0x276e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E94u;
            // 0x276e98: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e94) {
            ctx->pc = 0x276DC8u;
            runtime->cooperativeGuestYield();
            goto label_276dc8;
        }
    }
    ctx->pc = 0x276E9Cu;
    // 0x276e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x276E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276DC8u: goto label_276dc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276EA4u;
    // 0x276ea4: 0x0  nop
    ctx->pc = 0x276ea4u;
    // NOP
}
