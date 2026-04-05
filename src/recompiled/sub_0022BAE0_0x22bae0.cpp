#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022BAE0
// Address: 0x22bae0 - 0x22bbc8
void sub_0022BAE0_0x22bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BAE0_0x22bae0");
#endif

    ctx->pc = 0x22bae0u;

    // 0x22bae0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22bae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bae8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x22baec: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x22baecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x22baf0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x22baf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x22baf4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22baf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x22baf8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22baf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bafc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x22bafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x22bb00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22bb00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22bb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22bb08: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x22bb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x22bb0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bb10: 0xaea21200  sw          $v0, 0x1200($s5)
    ctx->pc = 0x22bb10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4608), GPR_U32(ctx, 2));
    // 0x22bb14: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_22bb18:
    // 0x22bb18: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x22bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22bb1c: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x22bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x22bb20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BB20u;
    {
        const bool branch_taken_0x22bb20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB20u;
            // 0x22bb24: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb20) {
            ctx->pc = 0x22BB30u;
            goto label_22bb30;
        }
    }
    ctx->pc = 0x22BB28u;
    // 0x22bb28: 0xc04ca08  jal         func_132820
    ctx->pc = 0x22BB28u;
    SET_GPR_U32(ctx, 31, 0x22BB30u);
    ctx->pc = 0x22BB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB28u;
            // 0x22bb2c: 0x80450068  lb          $a1, 0x68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132820u;
    if (runtime->hasFunction(0x132820u)) {
        auto targetFn = runtime->lookupFunction(0x132820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB30u; }
        if (ctx->pc != 0x22BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132820_0x132820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB30u; }
        if (ctx->pc != 0x22BB30u) { return; }
    }
    ctx->pc = 0x22BB30u;
label_22bb30:
    // 0x22bb30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22bb30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22bb34: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x22bb34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x22bb38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22BB38u;
    {
        const bool branch_taken_0x22bb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB38u;
            // 0x22bb3c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb38) {
            ctx->pc = 0x22BB18u;
            runtime->cooperativeGuestYield();
            goto label_22bb18;
        }
    }
    ctx->pc = 0x22BB40u;
    // 0x22bb40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22bb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb44: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_22bb48:
    // 0x22bb48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22bb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb4c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x22bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22bb50: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22bb50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb54: 0x8c740038  lw          $s4, 0x38($v1)
    ctx->pc = 0x22bb54u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x22bb58: 0x8c530024  lw          $s3, 0x24($v0)
    ctx->pc = 0x22bb58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22bb5c: 0x0  nop
    ctx->pc = 0x22bb5cu;
    // NOP
label_22bb60:
    // 0x22bb60: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x22BB60u;
    {
        const bool branch_taken_0x22bb60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB60u;
            // 0x22bb64: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb60) {
            ctx->pc = 0x22BB80u;
            goto label_22bb80;
        }
    }
    ctx->pc = 0x22BB68u;
    // 0x22bb68: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x22bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x22bb6c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x22bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22bb70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BB70u;
    {
        const bool branch_taken_0x22bb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB70u;
            // 0x22bb74: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb70) {
            ctx->pc = 0x22BB80u;
            goto label_22bb80;
        }
    }
    ctx->pc = 0x22BB78u;
    // 0x22bb78: 0xc04ca08  jal         func_132820
    ctx->pc = 0x22BB78u;
    SET_GPR_U32(ctx, 31, 0x22BB80u);
    ctx->pc = 0x22BB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB78u;
            // 0x22bb7c: 0x80450001  lb          $a1, 0x1($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132820u;
    if (runtime->hasFunction(0x132820u)) {
        auto targetFn = runtime->lookupFunction(0x132820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB80u; }
        if (ctx->pc != 0x22BB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132820_0x132820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB80u; }
        if (ctx->pc != 0x22BB80u) { return; }
    }
    ctx->pc = 0x22BB80u;
label_22bb80:
    // 0x22bb80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22bb80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22bb84: 0x2a22004a  slti        $v0, $s1, 0x4A
    ctx->pc = 0x22bb84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x22bb88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x22BB88u;
    {
        const bool branch_taken_0x22bb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bb88) {
            ctx->pc = 0x22BB60u;
            runtime->cooperativeGuestYield();
            goto label_22bb60;
        }
    }
    ctx->pc = 0x22BB90u;
    // 0x22bb90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22bb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22bb94: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x22bb94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x22bb98: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x22BB98u;
    {
        const bool branch_taken_0x22bb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bb98) {
            ctx->pc = 0x22BB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB98u;
            // 0x22bb9c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BB48u;
            runtime->cooperativeGuestYield();
            goto label_22bb48;
        }
    }
    ctx->pc = 0x22BBA0u;
    // 0x22bba0: 0xaea01200  sw          $zero, 0x1200($s5)
    ctx->pc = 0x22bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4608), GPR_U32(ctx, 0));
    // 0x22bba4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x22bba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22bba8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x22bba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22bbac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x22bbacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22bbb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22bbb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22bbb4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x22bbb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bbb8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x22bbb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bbbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x22BBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BBC0u;
            // 0x22bbc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BB18u: goto label_22bb18;
            case 0x22BB30u: goto label_22bb30;
            case 0x22BB48u: goto label_22bb48;
            case 0x22BB60u: goto label_22bb60;
            case 0x22BB80u: goto label_22bb80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22BBC8u;
}
