#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5BA8
// Address: 0x1b5ba8 - 0x1b5c70
void sub_001B5BA8_0x1b5ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5BA8_0x1b5ba8");
#endif

    ctx->pc = 0x1b5ba8u;

    // 0x1b5ba8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b5ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b5bac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b5bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b5bb0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1b5bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1b5bb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bb8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b5bb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bbc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b5bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b5bc0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b5bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b5bc4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b5bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b5bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5bcc: 0xc06d6d8  jal         func_1B5B60
    ctx->pc = 0x1B5BCCu;
    SET_GPR_U32(ctx, 31, 0x1B5BD4u);
    ctx->pc = 0x1B5BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5BCCu;
            // 0x1b5bd0: 0x241200be  addiu       $s2, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B60u;
    if (runtime->hasFunction(0x1B5B60u)) {
        auto targetFn = runtime->lookupFunction(0x1B5B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5BD4u; }
        if (ctx->pc != 0x1B5BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b5b60_0x1b5ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5BD4u; }
        if (ctx->pc != 0x1B5BD4u) { return; }
    }
    ctx->pc = 0x1B5BD4u;
    // 0x1b5bd4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1b5bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b5bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bdc: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x1b5bdcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x1b5be0: 0x1212001a  beq         $s0, $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B5BE0u;
    {
        const bool branch_taken_0x1b5be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1B5BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5BE0u;
            // 0x1b5be4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5be0) {
            ctx->pc = 0x1B5C4Cu;
            goto label_1b5c4c;
        }
    }
    ctx->pc = 0x1B5BE8u;
    // 0x1b5be8: 0x263102bc  addiu       $s1, $s1, 0x2BC
    ctx->pc = 0x1b5be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
    // 0x1b5bec: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1b5becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b5bf0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b5bf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5bf8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B5BF8u;
    {
        const bool branch_taken_0x1b5bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5BF8u;
            // 0x1b5bfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5bf8) {
            ctx->pc = 0x1B5C50u;
            goto label_1b5c50;
        }
    }
    ctx->pc = 0x1B5C00u;
    // 0x1b5c00: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x1b5c00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b5c04: 0x0  nop
    ctx->pc = 0x1b5c04u;
    // NOP
label_1b5c08:
    // 0x1b5c08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b5c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c0c: 0x2131818  mult        $v1, $s0, $s3
    ctx->pc = 0x1b5c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b5c10: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1b5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b5c14: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x1B5C14u;
    SET_GPR_U32(ctx, 31, 0x1B5C1Cu);
    ctx->pc = 0x1B5C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C14u;
            // 0x1b5c18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C1Cu; }
        if (ctx->pc != 0x1B5C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C1Cu; }
        if (ctx->pc != 0x1B5C1Cu) { return; }
    }
    ctx->pc = 0x1B5C1Cu;
    // 0x1b5c1c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5C1Cu;
    {
        const bool branch_taken_0x1b5c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5c1c) {
            ctx->pc = 0x1B5C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C1Cu;
            // 0x1b5c20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5C2Cu;
            goto label_1b5c2c;
        }
    }
    ctx->pc = 0x1B5C24u;
    // 0x1b5c24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B5C24u;
    {
        const bool branch_taken_0x1b5c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C24u;
            // 0x1b5c28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c24) {
            ctx->pc = 0x1B5C50u;
            goto label_1b5c50;
        }
    }
    ctx->pc = 0x1B5C2Cu;
label_1b5c2c:
    // 0x1b5c2c: 0x3a0200bf  xori        $v0, $s0, 0xBF
    ctx->pc = 0x1b5c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)191);
    // 0x1b5c30: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1b5c30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1b5c34: 0x12120005  beq         $s0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5C34u;
    {
        const bool branch_taken_0x1b5c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1B5C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C34u;
            // 0x1b5c38: 0x2131818  mult        $v1, $s0, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c34) {
            ctx->pc = 0x1B5C4Cu;
            goto label_1b5c4c;
        }
    }
    ctx->pc = 0x1B5C3Cu;
    // 0x1b5c3c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1b5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b5c40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5c44: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B5C44u;
    {
        const bool branch_taken_0x1b5c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C44u;
            // 0x1b5c48: 0x24130018  addiu       $s3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c44) {
            ctx->pc = 0x1B5C08u;
            runtime->cooperativeGuestYield();
            goto label_1b5c08;
        }
    }
    ctx->pc = 0x1B5C4Cu;
label_1b5c4c:
    // 0x1b5c4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5c50:
    // 0x1b5c50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b5c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5c54: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b5c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5c58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b5c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5c5c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b5c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5c60: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1b5c60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C68u;
            // 0x1b5c6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5C08u: goto label_1b5c08;
            case 0x1B5C2Cu: goto label_1b5c2c;
            case 0x1B5C4Cu: goto label_1b5c4c;
            case 0x1B5C50u: goto label_1b5c50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5C70u;
}
