#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011F9B8
// Address: 0x11f9b8 - 0x11fa48
void sub_0011F9B8_0x11f9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F9B8_0x11f9b8");
#endif

    ctx->pc = 0x11f9b8u;

    // 0x11f9b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f9bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11f9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11f9c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11f9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11f9c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11f9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f9c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11f9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11f9cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11f9ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f9d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11f9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11f9d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f9d8: 0x9642462c  lhu         $v0, 0x462C($s2)
    ctx->pc = 0x11f9d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 17964)));
    // 0x11f9dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11F9DCu;
    {
        const bool branch_taken_0x11f9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F9DCu;
            // 0x11f9e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9dc) {
            ctx->pc = 0x11FA28u;
            goto label_11fa28;
        }
    }
    ctx->pc = 0x11F9E4u;
    // 0x11f9e4: 0x2650002c  addiu       $s0, $s2, 0x2C
    ctx->pc = 0x11f9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x11f9e8: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x11f9e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11f9ec: 0x0  nop
    ctx->pc = 0x11f9ecu;
    // NOP
label_11f9f0:
    // 0x11f9f0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x11f9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x11f9f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F9F4u;
    {
        const bool branch_taken_0x11f9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f9f4) {
            ctx->pc = 0x11F9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F9F4u;
            // 0x11f9f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11FA0Cu;
            goto label_11fa0c;
        }
    }
    ctx->pc = 0x11F9FCu;
    // 0x11f9fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11f9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11fa00: 0xc047e92  jal         func_11FA48
    ctx->pc = 0x11FA00u;
    SET_GPR_U32(ctx, 31, 0x11FA08u);
    ctx->pc = 0x11FA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA00u;
            // 0x11fa04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FA48u;
    if (runtime->hasFunction(0x11FA48u)) {
        auto targetFn = runtime->lookupFunction(0x11FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA08u; }
        if (ctx->pc != 0x11FA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011FA48_0x11fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA08u; }
        if (ctx->pc != 0x11FA08u) { return; }
    }
    ctx->pc = 0x11FA08u;
    // 0x11fa08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11fa08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_11fa0c:
    // 0x11fa0c: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x11fa0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x11fa10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FA10u;
    {
        const bool branch_taken_0x11fa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA10u;
            // 0x11fa14: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa10) {
            ctx->pc = 0x11FA28u;
            goto label_11fa28;
        }
    }
    ctx->pc = 0x11FA18u;
    // 0x11fa18: 0x9642462c  lhu         $v0, 0x462C($s2)
    ctx->pc = 0x11fa18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 17964)));
    // 0x11fa1c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11fa1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11fa20: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x11FA20u;
    {
        const bool branch_taken_0x11fa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fa20) {
            ctx->pc = 0x11FA24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA20u;
            // 0x11fa24: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F9F0u;
            runtime->cooperativeGuestYield();
            goto label_11f9f0;
        }
    }
    ctx->pc = 0x11FA28u;
label_11fa28:
    // 0x11fa28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11fa28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fa2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11fa2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fa30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11fa30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fa34: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11fa34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fa38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11fa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FA3Cu;
            // 0x11fa40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F9F0u: goto label_11f9f0;
            case 0x11FA0Cu: goto label_11fa0c;
            case 0x11FA28u: goto label_11fa28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FA44u;
    // 0x11fa44: 0x0  nop
    ctx->pc = 0x11fa44u;
    // NOP
}
