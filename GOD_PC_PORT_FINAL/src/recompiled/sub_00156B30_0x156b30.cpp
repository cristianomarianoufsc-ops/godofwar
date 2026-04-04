#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156B30
// Address: 0x156b30 - 0x156bd0
void sub_00156B30_0x156b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156B30_0x156b30");
#endif

    ctx->pc = 0x156b30u;

    // 0x156b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x156b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x156b34: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x156b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x156b38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x156b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x156b3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x156b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b40: 0x267100e0  addiu       $s1, $s3, 0xE0
    ctx->pc = 0x156b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x156b44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x156b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x156b48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156b50: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x156b50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156b54: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x156b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x156b58: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x156b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x156b5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x156b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156b60: 0xc04f824  jal         func_13E090
    ctx->pc = 0x156B60u;
    SET_GPR_U32(ctx, 31, 0x156B68u);
    ctx->pc = 0x156B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B60u;
            // 0x156b64: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B68u; }
        if (ctx->pc != 0x156B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B68u; }
        if (ctx->pc != 0x156B68u) { return; }
    }
    ctx->pc = 0x156B68u;
    // 0x156b68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x156b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b70: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x156B70u;
    SET_GPR_U32(ctx, 31, 0x156B78u);
    ctx->pc = 0x156B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B70u;
            // 0x156b74: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B78u; }
        if (ctx->pc != 0x156B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B78u; }
        if (ctx->pc != 0x156B78u) { return; }
    }
    ctx->pc = 0x156B78u;
    // 0x156b78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x156b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x156b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x156b80: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x156b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x156b84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x156b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b8c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x156B8Cu;
    SET_GPR_U32(ctx, 31, 0x156B94u);
    ctx->pc = 0x156B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156B8Cu;
            // 0x156b90: 0x8ca60004  lw          $a2, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B94u; }
        if (ctx->pc != 0x156B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156B94u; }
        if (ctx->pc != 0x156B94u) { return; }
    }
    ctx->pc = 0x156B94u;
    // 0x156b94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x156b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x156b98: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x156b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x156b9c: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x156b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x156ba0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x156ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x156ba4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x156ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x156ba8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x156ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x156bac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x156bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156bb0: 0xae63011c  sw          $v1, 0x11C($s3)
    ctx->pc = 0x156bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 3));
    // 0x156bb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x156bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156bb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156bb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156bbc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x156bbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x156BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156BC4u;
            // 0x156bc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156BCCu;
    // 0x156bcc: 0x0  nop
    ctx->pc = 0x156bccu;
    // NOP
}
