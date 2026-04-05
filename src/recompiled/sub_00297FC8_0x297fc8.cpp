#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297FC8
// Address: 0x297fc8 - 0x298058
void sub_00297FC8_0x297fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297FC8_0x297fc8");
#endif

    ctx->pc = 0x297fc8u;

    // 0x297fc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x297fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x297fcc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x297fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x297fd0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x297fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x297fd4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x297fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x297fd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297fdc: 0x24534aa4  addiu       $s3, $v0, 0x4AA4
    ctx->pc = 0x297fdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19108));
    // 0x297fe0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297fe4: 0x2471aa68  addiu       $s1, $v1, -0x5598
    ctx->pc = 0x297fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945384));
    // 0x297fe8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x297fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x297fec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x297fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297ff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ff8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x297ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ffc: 0xc0a2480  jal         func_289200
    ctx->pc = 0x297FFCu;
    SET_GPR_U32(ctx, 31, 0x298004u);
    ctx->pc = 0x298000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297FFCu;
            // 0x298000: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289200u;
    if (runtime->hasFunction(0x289200u)) {
        auto targetFn = runtime->lookupFunction(0x289200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298004u; }
        if (ctx->pc != 0x298004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289200_0x289294(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298004u; }
        if (ctx->pc != 0x298004u) { return; }
    }
    ctx->pc = 0x298004u;
    // 0x298004: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x298004u;
    {
        const bool branch_taken_0x298004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298004u;
            // 0x298008: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298004) {
            ctx->pc = 0x298034u;
            goto label_298034;
        }
    }
    ctx->pc = 0x29800Cu;
    // 0x29800c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29800cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298010: 0x8e054b58  lw          $a1, 0x4B58($s0)
    ctx->pc = 0x298010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19288)));
    // 0x298014: 0xc0a2480  jal         func_289200
    ctx->pc = 0x298014u;
    SET_GPR_U32(ctx, 31, 0x29801Cu);
    ctx->pc = 0x298018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298014u;
            // 0x298018: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289200u;
    if (runtime->hasFunction(0x289200u)) {
        auto targetFn = runtime->lookupFunction(0x289200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29801Cu; }
        if (ctx->pc != 0x29801Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289200_0x289294(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29801Cu; }
        if (ctx->pc != 0x29801Cu) { return; }
    }
    ctx->pc = 0x29801Cu;
    // 0x29801c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29801Cu;
    {
        const bool branch_taken_0x29801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29801Cu;
            // 0x298020: 0x8e054b58  lw          $a1, 0x4B58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29801c) {
            ctx->pc = 0x298034u;
            goto label_298034;
        }
    }
    ctx->pc = 0x298024u;
    // 0x298024: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298028: 0xc0a2480  jal         func_289200
    ctx->pc = 0x298028u;
    SET_GPR_U32(ctx, 31, 0x298030u);
    ctx->pc = 0x29802Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298028u;
            // 0x29802c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289200u;
    if (runtime->hasFunction(0x289200u)) {
        auto targetFn = runtime->lookupFunction(0x289200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298030u; }
        if (ctx->pc != 0x298030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289200_0x289294(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298030u; }
        if (ctx->pc != 0x298030u) { return; }
    }
    ctx->pc = 0x298030u;
    // 0x298030: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x298030u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_298034:
    // 0x298034: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x298034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298038: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x298038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29803c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29803cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298040: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298044: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29804c: 0x3e00008  jr          $ra
    ctx->pc = 0x29804Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29804Cu;
            // 0x298050: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298034u: goto label_298034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298054u;
    // 0x298054: 0x0  nop
    ctx->pc = 0x298054u;
    // NOP
}
