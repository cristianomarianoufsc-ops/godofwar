#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00217CA8
// Address: 0x217ca8 - 0x217d80
void sub_00217CA8_0x217ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217CA8_0x217ca8");
#endif

    ctx->pc = 0x217ca8u;

    // 0x217ca8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x217cac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x217cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x217cb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x217cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x217cb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cb8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x217cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x217cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217cc0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x217cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x217cc4: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x217cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x217cc8: 0x2642ec58  addiu       $v0, $s2, -0x13A8
    ctx->pc = 0x217cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962264));
    // 0x217ccc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x217cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x217cd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x217cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217cd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x217cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217cd8: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x217cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x217cdc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x217CDCu;
    {
        const bool branch_taken_0x217cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217CDCu;
            // 0x217ce0: 0x2642ec58  addiu       $v0, $s2, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217cdc) {
            ctx->pc = 0x217D08u;
            goto label_217d08;
        }
    }
    ctx->pc = 0x217CE4u;
    // 0x217ce4: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x217ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_217ce8:
    // 0x217ce8: 0xc085ef6  jal         func_217BD8
    ctx->pc = 0x217CE8u;
    SET_GPR_U32(ctx, 31, 0x217CF0u);
    ctx->pc = 0x217CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217CE8u;
            // 0x217cec: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217BD8u;
    if (runtime->hasFunction(0x217BD8u)) {
        auto targetFn = runtime->lookupFunction(0x217BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217CF0u; }
        if (ctx->pc != 0x217CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00217BD8_0x217bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217CF0u; }
        if (ctx->pc != 0x217CF0u) { return; }
    }
    ctx->pc = 0x217CF0u;
    // 0x217cf0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x217cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217cf4: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x217CF4u;
    {
        const bool branch_taken_0x217cf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x217cf4) {
            ctx->pc = 0x217CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217CF4u;
            // 0x217cf8: 0x2604ffec  addiu       $a0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217CE8u;
            runtime->cooperativeGuestYield();
            goto label_217ce8;
        }
    }
    ctx->pc = 0x217CFCu;
    // 0x217cfc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x217cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x217d00: 0x2642ec58  addiu       $v0, $s2, -0x13A8
    ctx->pc = 0x217d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962264));
    // 0x217d04: 0x0  nop
    ctx->pc = 0x217d04u;
    // NOP
label_217d08:
    // 0x217d08: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x217d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x217d0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x217d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217d10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x217d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217d14: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x217d14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x217d18: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x217D18u;
    {
        const bool branch_taken_0x217d18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x217d18) {
            ctx->pc = 0x217D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217D18u;
            // 0x217d1c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217D40u;
            goto label_217d40;
        }
    }
    ctx->pc = 0x217D20u;
    // 0x217d20: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x217d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x217d24: 0x0  nop
    ctx->pc = 0x217d24u;
    // NOP
label_217d28:
    // 0x217d28: 0xc085ef6  jal         func_217BD8
    ctx->pc = 0x217D28u;
    SET_GPR_U32(ctx, 31, 0x217D30u);
    ctx->pc = 0x217D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217D28u;
            // 0x217d2c: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217BD8u;
    if (runtime->hasFunction(0x217BD8u)) {
        auto targetFn = runtime->lookupFunction(0x217BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D30u; }
        if (ctx->pc != 0x217D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00217BD8_0x217bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D30u; }
        if (ctx->pc != 0x217D30u) { return; }
    }
    ctx->pc = 0x217D30u;
    // 0x217d30: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x217d30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217d34: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x217D34u;
    {
        const bool branch_taken_0x217d34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x217D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217D34u;
            // 0x217d38: 0x2604ffec  addiu       $a0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d34) {
            ctx->pc = 0x217D28u;
            runtime->cooperativeGuestYield();
            goto label_217d28;
        }
    }
    ctx->pc = 0x217D3Cu;
    // 0x217d3c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x217d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_217d40:
    // 0x217d40: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x217d40u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x217d44: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x217d44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217d48: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x217d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x217d4c: 0xdca2bdf8  ld          $v0, -0x4208($a1)
    ctx->pc = 0x217d4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x217d50: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x217d50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x217d54: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x217d54u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x217d58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x217d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217d5c: 0xfca2bdf8  sd          $v0, -0x4208($a1)
    ctx->pc = 0x217d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 2));
    // 0x217d60: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x217d60u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x217d64: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x217d64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x217d68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x217d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217d6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x217d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217d74: 0xfc820068  sd          $v0, 0x68($a0)
    ctx->pc = 0x217d74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 2));
    // 0x217d78: 0x3e00008  jr          $ra
    ctx->pc = 0x217D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217D78u;
            // 0x217d7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217CE8u: goto label_217ce8;
            case 0x217D08u: goto label_217d08;
            case 0x217D28u: goto label_217d28;
            case 0x217D40u: goto label_217d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217D80u;
}
