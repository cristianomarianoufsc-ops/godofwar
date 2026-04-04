#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3E08
// Address: 0x1b3e08 - 0x1b3ef8
void sub_001B3E08_0x1b3e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3E08_0x1b3e08");
#endif

    ctx->pc = 0x1b3e08u;

    // 0x1b3e08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b3e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b3e0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b3e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b3e10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b3e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b3e14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b3e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b3e1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b3e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3e24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b3e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e28: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b3e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b3e2c: 0x0  nop
    ctx->pc = 0x1b3e2cu;
    // NOP
label_1b3e30:
    // 0x1b3e30: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1b3e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1b3e34: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x1b3e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b3e38: 0x24845288  addiu       $a0, $a0, 0x5288
    ctx->pc = 0x1b3e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21128));
    // 0x1b3e3c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b3e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b3e40: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1B3E40u;
    SET_GPR_U32(ctx, 31, 0x1B3E48u);
    ctx->pc = 0x1B3E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E40u;
            // 0x1b3e44: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E48u; }
        if (ctx->pc != 0x1B3E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E48u; }
        if (ctx->pc != 0x1B3E48u) { return; }
    }
    ctx->pc = 0x1B3E48u;
    // 0x1b3e48: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1b3e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1b3e4c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b3e50: 0x244252a0  addiu       $v0, $v0, 0x52A0
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21152));
    // 0x1b3e54: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1b3e54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3e58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b3e5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b3e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b3e60: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b3e60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3e64: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1b3e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b3e68: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1B3E68u;
    {
        const bool branch_taken_0x1b3e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E68u;
            // 0x1b3e6c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e68) {
            ctx->pc = 0x1B3E30u;
            runtime->cooperativeGuestYield();
            goto label_1b3e30;
        }
    }
    ctx->pc = 0x1B3E70u;
    // 0x1b3e70: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b3e74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b3e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3e78: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3E78u;
    {
        const bool branch_taken_0x1b3e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E78u;
            // 0x1b3e7c: 0x2445cae4  addiu       $a1, $v0, -0x351C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e78) {
            ctx->pc = 0x1B3E9Cu;
            goto label_1b3e9c;
        }
    }
    ctx->pc = 0x1B3E80u;
    // 0x1b3e80: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b3e80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3e84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3E84u;
    {
        const bool branch_taken_0x1b3e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E84u;
            // 0x1b3e88: 0x2602000a  addiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e84) {
            ctx->pc = 0x1B3E9Cu;
            goto label_1b3e9c;
        }
    }
    ctx->pc = 0x1B3E8Cu;
    // 0x1b3e8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3E8Cu;
    {
        const bool branch_taken_0x1b3e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E8Cu;
            // 0x1b3e90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e8c) {
            ctx->pc = 0x1B3E9Cu;
            goto label_1b3e9c;
        }
    }
    ctx->pc = 0x1B3E94u;
    // 0x1b3e94: 0x8203000a  lb          $v1, 0xA($s0)
    ctx->pc = 0x1b3e94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1b3e98: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1b3e98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1b3e9c:
    // 0x1b3e9c: 0xc06cbb0  jal         func_1B2EC0
    ctx->pc = 0x1B3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B3EA4u);
    ctx->pc = 0x1B3EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E9Cu;
            // 0x1b3ea0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2EC0u;
    if (runtime->hasFunction(0x1B2EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B2EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EA4u; }
        if (ctx->pc != 0x1B3EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2EC0_0x1b2ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EA4u; }
        if (ctx->pc != 0x1B3EA4u) { return; }
    }
    ctx->pc = 0x1B3EA4u;
    // 0x1b3ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ea8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3EA8u;
    {
        const bool branch_taken_0x1b3ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ea8) {
            ctx->pc = 0x1B3EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EA8u;
            // 0x1b3eac: 0x2484000a  addiu       $a0, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3EC0u;
            goto label_1b3ec0;
        }
    }
    ctx->pc = 0x1B3EB0u;
    // 0x1b3eb0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1b3eb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3eb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3EB4u;
    {
        const bool branch_taken_0x1b3eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EB4u;
            // 0x1b3eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3eb4) {
            ctx->pc = 0x1B3EC4u;
            goto label_1b3ec4;
        }
    }
    ctx->pc = 0x1B3EBCu;
    // 0x1b3ebc: 0x2484000a  addiu       $a0, $a0, 0xA
    ctx->pc = 0x1b3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
label_1b3ec0:
    // 0x1b3ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3ec4:
    // 0x1b3ec4: 0xc06edfa  jal         func_1BB7E8
    ctx->pc = 0x1B3EC4u;
    SET_GPR_U32(ctx, 31, 0x1B3ECCu);
    ctx->pc = 0x1B3EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EC4u;
            // 0x1b3ec8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7E8u;
    if (runtime->hasFunction(0x1BB7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3ECCu; }
        if (ctx->pc != 0x1B3ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB7E8_0x1bb7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3ECCu; }
        if (ctx->pc != 0x1B3ECCu) { return; }
    }
    ctx->pc = 0x1B3ECCu;
    // 0x1b3ecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3ECCu;
    {
        const bool branch_taken_0x1b3ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3ECCu;
            // 0x1b3ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ecc) {
            ctx->pc = 0x1B3EDCu;
            goto label_1b3edc;
        }
    }
    ctx->pc = 0x1B3ED4u;
    // 0x1b3ed4: 0xc06c8e4  jal         func_1B2390
    ctx->pc = 0x1B3ED4u;
    SET_GPR_U32(ctx, 31, 0x1B3EDCu);
    ctx->pc = 0x1B3ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3ED4u;
            // 0x1b3ed8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2390u;
    if (runtime->hasFunction(0x1B2390u)) {
        auto targetFn = runtime->lookupFunction(0x1B2390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EDCu; }
        if (ctx->pc != 0x1B3EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2390_0x1b2390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3EDCu; }
        if (ctx->pc != 0x1B3EDCu) { return; }
    }
    ctx->pc = 0x1B3EDCu;
label_1b3edc:
    // 0x1b3edc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b3edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3ee0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b3ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3ee4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b3ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3eec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EECu;
            // 0x1b3ef0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3E30u: goto label_1b3e30;
            case 0x1B3E9Cu: goto label_1b3e9c;
            case 0x1B3EC0u: goto label_1b3ec0;
            case 0x1B3EC4u: goto label_1b3ec4;
            case 0x1B3EDCu: goto label_1b3edc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3EF4u;
    // 0x1b3ef4: 0x0  nop
    ctx->pc = 0x1b3ef4u;
    // NOP
}
