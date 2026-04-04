#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021EB70
// Address: 0x21eb70 - 0x21ebf8
void sub_0021EB70_0x21eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EB70_0x21eb70");
#endif

    ctx->pc = 0x21eb70u;

    // 0x21eb70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21eb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21eb74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21eb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eb78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21eb7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21eb80: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21EB80u;
    SET_GPR_U32(ctx, 31, 0x21EB88u);
    ctx->pc = 0x21EB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB80u;
            // 0x21eb84: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB88u; }
        if (ctx->pc != 0x21EB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB88u; }
        if (ctx->pc != 0x21EB88u) { return; }
    }
    ctx->pc = 0x21EB88u;
    // 0x21eb88: 0x8e02e5a0  lw          $v0, -0x1A60($s0)
    ctx->pc = 0x21eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960544)));
    // 0x21eb8c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21EB8Cu;
    {
        const bool branch_taken_0x21eb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB8Cu;
            // 0x21eb90: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb8c) {
            ctx->pc = 0x21EBD0u;
            goto label_21ebd0;
        }
    }
    ctx->pc = 0x21EB94u;
    // 0x21eb94: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21EB94u;
    {
        const bool branch_taken_0x21eb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB94u;
            // 0x21eb98: 0xae02e5a0  sw          $v0, -0x1A60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb94) {
            ctx->pc = 0x21EBE4u;
            goto label_21ebe4;
        }
    }
    ctx->pc = 0x21EB9Cu;
    // 0x21eb9c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21eba0: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21eba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21eba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eba8: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21EBA8u;
    SET_GPR_U32(ctx, 31, 0x21EBB0u);
    ctx->pc = 0x21EBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBA8u;
            // 0x21ebac: 0xac400274  sw          $zero, 0x274($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EBB0u; }
        if (ctx->pc != 0x21EBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EBB0u; }
        if (ctx->pc != 0x21EBB0u) { return; }
    }
    ctx->pc = 0x21EBB0u;
    // 0x21ebb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21ebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ebb4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21ebb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21ebbc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ebc0: 0xac65f1f0  sw          $a1, -0xE10($v1)
    ctx->pc = 0x21ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963696), GPR_U32(ctx, 5));
    // 0x21ebc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21EBC4u;
    {
        const bool branch_taken_0x21ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBC4u;
            // 0x21ebc8: 0xac44e560  sw          $a0, -0x1AA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebc4) {
            ctx->pc = 0x21EBE4u;
            goto label_21ebe4;
        }
    }
    ctx->pc = 0x21EBCCu;
    // 0x21ebcc: 0x0  nop
    ctx->pc = 0x21ebccu;
    // NOP
label_21ebd0:
    // 0x21ebd0: 0xc08bc3e  jal         func_22F0F8
    ctx->pc = 0x21EBD0u;
    SET_GPR_U32(ctx, 31, 0x21EBD8u);
    ctx->pc = 0x22F0F8u;
    if (runtime->hasFunction(0x22F0F8u)) {
        auto targetFn = runtime->lookupFunction(0x22F0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EBD8u; }
        if (ctx->pc != 0x21EBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022F0F8_0x22f0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EBD8u; }
        if (ctx->pc != 0x21EBD8u) { return; }
    }
    ctx->pc = 0x21EBD8u;
    // 0x21ebd8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21EBD8u;
    {
        const bool branch_taken_0x21ebd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBD8u;
            // 0x21ebdc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebd8) {
            ctx->pc = 0x21EBE4u;
            goto label_21ebe4;
        }
    }
    ctx->pc = 0x21EBE0u;
    // 0x21ebe0: 0xae02e5a0  sw          $v0, -0x1A60($s0)
    ctx->pc = 0x21ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960544), GPR_U32(ctx, 2));
label_21ebe4:
    // 0x21ebe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21ebe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ebe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ebe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ebec: 0x3e00008  jr          $ra
    ctx->pc = 0x21EBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBECu;
            // 0x21ebf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EBD0u: goto label_21ebd0;
            case 0x21EBE4u: goto label_21ebe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21EBF4u;
    // 0x21ebf4: 0x0  nop
    ctx->pc = 0x21ebf4u;
    // NOP
}
