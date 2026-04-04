#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8CE0
// Address: 0x1b8ce0 - 0x1b8d88
void sub_001B8CE0_0x1b8ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8CE0_0x1b8ce0");
#endif

    ctx->pc = 0x1b8ce0u;

    // 0x1b8ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b8ce4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b8ce8: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1b8ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1b8cec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b8cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b8cf0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b8cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b8cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8cf8: 0x8e42cba8  lw          $v0, -0x3458($s2)
    ctx->pc = 0x1b8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953896)));
    // 0x1b8cfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b8cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d00: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B8D00u;
    {
        const bool branch_taken_0x1b8d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D00u;
            // 0x1b8d04: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d00) {
            ctx->pc = 0x1B8D48u;
            goto label_1b8d48;
        }
    }
    ctx->pc = 0x1B8D08u;
    // 0x1b8d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d10: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1B8D10u;
    SET_GPR_U32(ctx, 31, 0x1B8D18u);
    ctx->pc = 0x1B8D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D10u;
            // 0x1b8d14: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D18u; }
        if (ctx->pc != 0x1B8D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D18u; }
        if (ctx->pc != 0x1B8D18u) { return; }
    }
    ctx->pc = 0x1B8D18u;
    // 0x1b8d18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b8d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b8d1c: 0x8e46cba8  lw          $a2, -0x3458($s2)
    ctx->pc = 0x1b8d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953896)));
    // 0x1b8d20: 0x8c45cba0  lw          $a1, -0x3460($v0)
    ctx->pc = 0x1b8d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953888)));
    // 0x1b8d24: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1b8d24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
    // 0x1b8d28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d2c: 0xa7b00000  sh          $s0, 0x0($sp)
    ctx->pc = 0x1b8d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x1b8d30: 0x25088cd0  addiu       $t0, $t0, -0x7330
    ctx->pc = 0x1b8d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937808));
    // 0x1b8d34: 0xc0a2c66  jal         func_28B198
    ctx->pc = 0x1B8D34u;
    SET_GPR_U32(ctx, 31, 0x1B8D3Cu);
    ctx->pc = 0x1B8D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D34u;
            // 0x1b8d38: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B198u;
    if (runtime->hasFunction(0x28B198u)) {
        auto targetFn = runtime->lookupFunction(0x28B198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D3Cu; }
        if (ctx->pc != 0x1B8D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B198_0x28b198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D3Cu; }
        if (ctx->pc != 0x1B8D3Cu) { return; }
    }
    ctx->pc = 0x1B8D3Cu;
    // 0x1b8d3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b8d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d40: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8D40u;
    {
        const bool branch_taken_0x1b8d40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d40) {
            ctx->pc = 0x1B8D50u;
            goto label_1b8d50;
        }
    }
    ctx->pc = 0x1B8D48u;
label_1b8d48:
    // 0x1b8d48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8D48u;
    {
        const bool branch_taken_0x1b8d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D48u;
            // 0x1b8d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d48) {
            ctx->pc = 0x1B8D6Cu;
            goto label_1b8d6c;
        }
    }
    ctx->pc = 0x1B8D50u;
label_1b8d50:
    // 0x1b8d50: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8D50u;
    {
        const bool branch_taken_0x1b8d50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d50) {
            ctx->pc = 0x1B8D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D50u;
            // 0x1b8d54: 0x94830002  lhu         $v1, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8D64u;
            goto label_1b8d64;
        }
    }
    ctx->pc = 0x1B8D58u;
    // 0x1b8d58: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1b8d58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1b8d5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b8d60: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x1b8d60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b8d64:
    // 0x1b8d64: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x1b8d64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1b8d68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b8d6c:
    // 0x1b8d6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b8d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8d70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b8d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8d74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b8d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8d78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D7Cu;
            // 0x1b8d80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8D48u: goto label_1b8d48;
            case 0x1B8D50u: goto label_1b8d50;
            case 0x1B8D64u: goto label_1b8d64;
            case 0x1B8D6Cu: goto label_1b8d6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8D84u;
    // 0x1b8d84: 0x0  nop
    ctx->pc = 0x1b8d84u;
    // NOP
}
