#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_200b48
// Address: 0x200b48 - 0x200bc8
void entry_200b48_0x200bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_200b48_0x200bc8");
#endif

    ctx->pc = 0x200b48u;

    // 0x200b48: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x200b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x200b4c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x200b50: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x200b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200b54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200b5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x200b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x200b60: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x200b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200b64: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x200b64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x200b68: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x200B68u;
    {
        const bool branch_taken_0x200b68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x200b68) {
            ctx->pc = 0x200B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200B68u;
            // 0x200b6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200BB4u;
            goto label_200bb4;
        }
    }
    ctx->pc = 0x200B70u;
    // 0x200b70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x200b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x200b74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200B74u;
    {
        const bool branch_taken_0x200b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200B74u;
            // 0x200b78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b74) {
            ctx->pc = 0x200B88u;
            goto label_200b88;
        }
    }
    ctx->pc = 0x200B7Cu;
    // 0x200b7c: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x200b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x200b80: 0xc04c55c  jal         func_131570
    ctx->pc = 0x200B80u;
    SET_GPR_U32(ctx, 31, 0x200B88u);
    ctx->pc = 0x200B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200B80u;
            // 0x200b84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B88u; }
        if (ctx->pc != 0x200B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B88u; }
        if (ctx->pc != 0x200B88u) { return; }
    }
    ctx->pc = 0x200B88u;
label_200b88:
    // 0x200b88: 0xc04c9da  jal         func_132768
    ctx->pc = 0x200B88u;
    SET_GPR_U32(ctx, 31, 0x200B90u);
    ctx->pc = 0x200B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200B88u;
            // 0x200b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B90u; }
        if (ctx->pc != 0x200B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B90u; }
        if (ctx->pc != 0x200B90u) { return; }
    }
    ctx->pc = 0x200B90u;
    // 0x200b90: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x200b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x200b94: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200B94u;
    {
        const bool branch_taken_0x200b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200B94u;
            // 0x200b98: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b94) {
            ctx->pc = 0x200BA8u;
            goto label_200ba8;
        }
    }
    ctx->pc = 0x200B9Cu;
    // 0x200b9c: 0xc07e6c2  jal         func_1F9B08
    ctx->pc = 0x200B9Cu;
    SET_GPR_U32(ctx, 31, 0x200BA4u);
    ctx->pc = 0x200BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200B9Cu;
            // 0x200ba0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B08u;
    if (runtime->hasFunction(0x1F9B08u)) {
        auto targetFn = runtime->lookupFunction(0x1F9B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200BA4u; }
        if (ctx->pc != 0x200BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9B08_0x1f9b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200BA4u; }
        if (ctx->pc != 0x200BA4u) { return; }
    }
    ctx->pc = 0x200BA4u;
    // 0x200ba4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x200ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_200ba8:
    // 0x200ba8: 0xc080406  jal         func_201018
    ctx->pc = 0x200BA8u;
    SET_GPR_U32(ctx, 31, 0x200BB0u);
    ctx->pc = 0x200BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200BA8u;
            // 0x200bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201018u;
    if (runtime->hasFunction(0x201018u)) {
        auto targetFn = runtime->lookupFunction(0x201018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200BB0u; }
        if (ctx->pc != 0x200BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201018_0x201018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200BB0u; }
        if (ctx->pc != 0x200BB0u) { return; }
    }
    ctx->pc = 0x200BB0u;
    // 0x200bb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x200bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_200bb4:
    // 0x200bb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x200BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200BBCu;
            // 0x200bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200B88u: goto label_200b88;
            case 0x200BA8u: goto label_200ba8;
            case 0x200BB4u: goto label_200bb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200BC4u;
    // 0x200bc4: 0x0  nop
    ctx->pc = 0x200bc4u;
    // NOP
}
