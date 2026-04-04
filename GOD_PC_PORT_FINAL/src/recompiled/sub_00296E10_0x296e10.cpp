#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296E10
// Address: 0x296e10 - 0x296eb8
void sub_00296E10_0x296e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296E10_0x296e10");
#endif

    ctx->pc = 0x296e10u;

    // 0x296e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296e14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296e18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296e1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296e20: 0xc0a648c  jal         func_299230
    ctx->pc = 0x296E20u;
    SET_GPR_U32(ctx, 31, 0x296E28u);
    ctx->pc = 0x296E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296E20u;
            // 0x296e24: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296E28u; }
        if (ctx->pc != 0x296E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296E28u; }
        if (ctx->pc != 0x296E28u) { return; }
    }
    ctx->pc = 0x296E28u;
    // 0x296e28: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x296e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x296e2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x296e2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e30: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x296E30u;
    {
        const bool branch_taken_0x296e30 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x296E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296E30u;
            // 0x296e34: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e30) {
            ctx->pc = 0x296E98u;
            goto label_296e98;
        }
    }
    ctx->pc = 0x296E38u;
    // 0x296e38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296e3c: 0x0  nop
    ctx->pc = 0x296e3cu;
    // NOP
label_296e40:
    // 0x296e40: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x296e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x296e44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296e48: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x296E48u;
    {
        const bool branch_taken_0x296e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296e48) {
            ctx->pc = 0x296E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x296E48u;
            // 0x296e4c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x296E8Cu;
            goto label_296e8c;
        }
    }
    ctx->pc = 0x296E50u;
    // 0x296e50: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x296e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x296e54: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x296e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x296e58: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x296e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x296e5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x296e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x296e60: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x296e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296e64: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296E64u;
    {
        const bool branch_taken_0x296e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x296E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296E64u;
            // 0x296e68: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e64) {
            ctx->pc = 0x296E78u;
            goto label_296e78;
        }
    }
    ctx->pc = 0x296E6Cu;
    // 0x296e6c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x296e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x296e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296e74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x296e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_296e78:
    // 0x296e78: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x296e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x296e7c: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x296E7Cu;
    SET_GPR_U32(ctx, 31, 0x296E84u);
    ctx->pc = 0x296E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296E7Cu;
            // 0x296e80: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296E84u; }
        if (ctx->pc != 0x296E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296E84u; }
        if (ctx->pc != 0x296E84u) { return; }
    }
    ctx->pc = 0x296E84u;
    // 0x296e84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x296E84u;
    {
        const bool branch_taken_0x296e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296E84u;
            // 0x296e88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e84) {
            ctx->pc = 0x296EA4u;
            goto label_296ea4;
        }
    }
    ctx->pc = 0x296E8Cu;
label_296e8c:
    // 0x296e8c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x296e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x296e90: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x296E90u;
    {
        const bool branch_taken_0x296e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296E90u;
            // 0x296e94: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e90) {
            ctx->pc = 0x296E40u;
            runtime->cooperativeGuestYield();
            goto label_296e40;
        }
    }
    ctx->pc = 0x296E98u;
label_296e98:
    // 0x296e98: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x296E98u;
    SET_GPR_U32(ctx, 31, 0x296EA0u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EA0u; }
        if (ctx->pc != 0x296EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296EA0u; }
        if (ctx->pc != 0x296EA0u) { return; }
    }
    ctx->pc = 0x296EA0u;
    // 0x296ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296ea4:
    // 0x296ea4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296ea8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x296EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296EB0u;
            // 0x296eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296E40u: goto label_296e40;
            case 0x296E78u: goto label_296e78;
            case 0x296E8Cu: goto label_296e8c;
            case 0x296E98u: goto label_296e98;
            case 0x296EA4u: goto label_296ea4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296EB8u;
}
