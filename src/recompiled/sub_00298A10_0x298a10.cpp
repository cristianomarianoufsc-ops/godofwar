#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298A10
// Address: 0x298a10 - 0x298aa0
void sub_00298A10_0x298a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298A10_0x298a10");
#endif

    ctx->pc = 0x298a10u;

    // 0x298a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x298a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x298a14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x298a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x298a18: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x298a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x298a1c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x298a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x298a20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298a24: 0x24534aa4  addiu       $s3, $v0, 0x4AA4
    ctx->pc = 0x298a24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19108));
    // 0x298a28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x298a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x298a2c: 0x2471af28  addiu       $s1, $v1, -0x50D8
    ctx->pc = 0x298a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946600));
    // 0x298a30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x298a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x298a34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x298a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x298a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x298a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a44: 0xc0a2480  jal         func_289200
    ctx->pc = 0x298A44u;
    SET_GPR_U32(ctx, 31, 0x298A4Cu);
    ctx->pc = 0x298A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298A44u;
            // 0x298a48: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289200u;
    if (runtime->hasFunction(0x289200u)) {
        auto targetFn = runtime->lookupFunction(0x289200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A4Cu; }
        if (ctx->pc != 0x298A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289200_0x289294(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A4Cu; }
        if (ctx->pc != 0x298A4Cu) { return; }
    }
    ctx->pc = 0x298A4Cu;
    // 0x298a4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x298A4Cu;
    {
        const bool branch_taken_0x298a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298A4Cu;
            // 0x298a50: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a4c) {
            ctx->pc = 0x298A7Cu;
            goto label_298a7c;
        }
    }
    ctx->pc = 0x298A54u;
    // 0x298a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x298a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a58: 0x8e054b64  lw          $a1, 0x4B64($s0)
    ctx->pc = 0x298a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19300)));
    // 0x298a5c: 0xc0a2480  jal         func_289200
    ctx->pc = 0x298A5Cu;
    SET_GPR_U32(ctx, 31, 0x298A64u);
    ctx->pc = 0x298A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298A5Cu;
            // 0x298a60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289200u;
    if (runtime->hasFunction(0x289200u)) {
        auto targetFn = runtime->lookupFunction(0x289200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A64u; }
        if (ctx->pc != 0x298A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289200_0x289294(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A64u; }
        if (ctx->pc != 0x298A64u) { return; }
    }
    ctx->pc = 0x298A64u;
    // 0x298a64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298A64u;
    {
        const bool branch_taken_0x298a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298A64u;
            // 0x298a68: 0x8e054b64  lw          $a1, 0x4B64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a64) {
            ctx->pc = 0x298A7Cu;
            goto label_298a7c;
        }
    }
    ctx->pc = 0x298A6Cu;
    // 0x298a6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a70: 0xc0a2480  jal         func_289200
    ctx->pc = 0x298A70u;
    SET_GPR_U32(ctx, 31, 0x298A78u);
    ctx->pc = 0x298A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298A70u;
            // 0x298a74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289200u;
    if (runtime->hasFunction(0x289200u)) {
        auto targetFn = runtime->lookupFunction(0x289200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A78u; }
        if (ctx->pc != 0x298A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289200_0x289294(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A78u; }
        if (ctx->pc != 0x298A78u) { return; }
    }
    ctx->pc = 0x298A78u;
    // 0x298a78: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x298a78u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_298a7c:
    // 0x298a7c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x298a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x298a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298a84: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x298a84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298a88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298a8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298a94: 0x3e00008  jr          $ra
    ctx->pc = 0x298A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298A94u;
            // 0x298a98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298A7Cu: goto label_298a7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298A9Cu;
    // 0x298a9c: 0x0  nop
    ctx->pc = 0x298a9cu;
    // NOP
}
