#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8FC8
// Address: 0x1f8fc8 - 0x1f9080
void sub_001F8FC8_0x1f8fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8FC8_0x1f8fc8");
#endif

    ctx->pc = 0x1f8fc8u;

    // 0x1f8fc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f8fcc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f8fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f8fd0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1f8fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1f8fd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f8fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f8fd8: 0x8e02e3c8  lw          $v0, -0x1C38($s0)
    ctx->pc = 0x1f8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
    // 0x1f8fdc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f8fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f8fe0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F8FE0u;
    {
        const bool branch_taken_0x1f8fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8FE0u;
            // 0x1f8fe4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fe0) {
            ctx->pc = 0x1F9068u;
            goto label_1f9068;
        }
    }
    ctx->pc = 0x1F8FE8u;
    // 0x1f8fe8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f8fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8fec: 0x8e02e3c8  lw          $v0, -0x1C38($s0)
    ctx->pc = 0x1f8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
label_1f8ff0:
    // 0x1f8ff0: 0x1288c0  sll         $s1, $s2, 3
    ctx->pc = 0x1f8ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1f8ff4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f8ff8: 0x8c440718  lw          $a0, 0x718($v0)
    ctx->pc = 0x1f8ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1816)));
    // 0x1f8ffc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8FFCu;
    {
        const bool branch_taken_0x1f8ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8FFCu;
            // 0x1f9000: 0x8e02e3c8  lw          $v0, -0x1C38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ffc) {
            ctx->pc = 0x1F9010u;
            goto label_1f9010;
        }
    }
    ctx->pc = 0x1F9004u;
    // 0x1f9004: 0xc056eae  jal         func_15BAB8
    ctx->pc = 0x1F9004u;
    SET_GPR_U32(ctx, 31, 0x1F900Cu);
    ctx->pc = 0x15BAB8u;
    if (runtime->hasFunction(0x15BAB8u)) {
        auto targetFn = runtime->lookupFunction(0x15BAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F900Cu; }
        if (ctx->pc != 0x1F900Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BAB8_0x15bab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F900Cu; }
        if (ctx->pc != 0x1F900Cu) { return; }
    }
    ctx->pc = 0x1F900Cu;
    // 0x1f900c: 0x8e02e3c8  lw          $v0, -0x1C38($s0)
    ctx->pc = 0x1f900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
label_1f9010:
    // 0x1f9010: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9014: 0x8c44071c  lw          $a0, 0x71C($v0)
    ctx->pc = 0x1f9014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1820)));
    // 0x1f9018: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9018u;
    {
        const bool branch_taken_0x1f9018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F901Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9018u;
            // 0x1f901c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9018) {
            ctx->pc = 0x1F9028u;
            goto label_1f9028;
        }
    }
    ctx->pc = 0x1F9020u;
    // 0x1f9020: 0xc056eae  jal         func_15BAB8
    ctx->pc = 0x1F9020u;
    SET_GPR_U32(ctx, 31, 0x1F9028u);
    ctx->pc = 0x15BAB8u;
    if (runtime->hasFunction(0x15BAB8u)) {
        auto targetFn = runtime->lookupFunction(0x15BAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9028u; }
        if (ctx->pc != 0x1F9028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BAB8_0x15bab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9028u; }
        if (ctx->pc != 0x1F9028u) { return; }
    }
    ctx->pc = 0x1F9028u;
label_1f9028:
    // 0x1f9028: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1f9028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f902c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1F902Cu;
    {
        const bool branch_taken_0x1f902c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F902Cu;
            // 0x1f9030: 0x8e02e3c8  lw          $v0, -0x1C38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f902c) {
            ctx->pc = 0x1F8FF0u;
            runtime->cooperativeGuestYield();
            goto label_1f8ff0;
        }
    }
    ctx->pc = 0x1F9034u;
    // 0x1f9034: 0x8e04e3c8  lw          $a0, -0x1C38($s0)
    ctx->pc = 0x1f9034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
    // 0x1f9038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f903c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1F903Cu;
    SET_GPR_U32(ctx, 31, 0x1F9044u);
    ctx->pc = 0x1F9040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F903Cu;
            // 0x1f9040: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9044u; }
        if (ctx->pc != 0x1F9044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9044u; }
        if (ctx->pc != 0x1F9044u) { return; }
    }
    ctx->pc = 0x1F9044u;
    // 0x1f9044: 0x8e04e3c8  lw          $a0, -0x1C38($s0)
    ctx->pc = 0x1f9044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
    // 0x1f9048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f904c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1f904cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1f9050: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1F9050u;
    SET_GPR_U32(ctx, 31, 0x1F9058u);
    ctx->pc = 0x1F9054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9050u;
            // 0x1f9054: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9058u; }
        if (ctx->pc != 0x1F9058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9058u; }
        if (ctx->pc != 0x1F9058u) { return; }
    }
    ctx->pc = 0x1F9058u;
    // 0x1f9058: 0x8e02e3c8  lw          $v0, -0x1C38($s0)
    ctx->pc = 0x1f9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
    // 0x1f905c: 0xa0400731  sb          $zero, 0x731($v0)
    ctx->pc = 0x1f905cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1841), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9060: 0x8e02e3c8  lw          $v0, -0x1C38($s0)
    ctx->pc = 0x1f9060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
    // 0x1f9064: 0xa0400730  sb          $zero, 0x730($v0)
    ctx->pc = 0x1f9064u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1840), (uint8_t)GPR_U32(ctx, 0));
label_1f9068:
    // 0x1f9068: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f9068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f906c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f906cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9070: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f9070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9078: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F907Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9078u;
            // 0x1f907c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F8FF0u: goto label_1f8ff0;
            case 0x1F9010u: goto label_1f9010;
            case 0x1F9028u: goto label_1f9028;
            case 0x1F9068u: goto label_1f9068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F9080u;
}
