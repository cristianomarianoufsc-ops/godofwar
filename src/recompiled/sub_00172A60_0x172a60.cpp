#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172A60
// Address: 0x172a60 - 0x172b20
void sub_00172A60_0x172a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172A60_0x172a60");
#endif

    ctx->pc = 0x172a60u;

    // 0x172a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172a64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x172a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x172a68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x172a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x172a6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x172a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x172a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x172a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172a78: 0xc04f824  jal         func_13E090
    ctx->pc = 0x172A78u;
    SET_GPR_U32(ctx, 31, 0x172A80u);
    ctx->pc = 0x172A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172A78u;
            // 0x172a7c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A80u; }
        if (ctx->pc != 0x172A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A80u; }
        if (ctx->pc != 0x172A80u) { return; }
    }
    ctx->pc = 0x172A80u;
    // 0x172a80: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x172a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172a84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a88: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x172A88u;
    SET_GPR_U32(ctx, 31, 0x172A90u);
    ctx->pc = 0x172A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172A88u;
            // 0x172a8c: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A90u; }
        if (ctx->pc != 0x172A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A90u; }
        if (ctx->pc != 0x172A90u) { return; }
    }
    ctx->pc = 0x172A90u;
    // 0x172a90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a94: 0xc05c49c  jal         func_171270
    ctx->pc = 0x172A94u;
    SET_GPR_U32(ctx, 31, 0x172A9Cu);
    ctx->pc = 0x172A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172A94u;
            // 0x172a98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171270u;
    if (runtime->hasFunction(0x171270u)) {
        auto targetFn = runtime->lookupFunction(0x171270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A9Cu; }
        if (ctx->pc != 0x172A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_171270_0x171370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A9Cu; }
        if (ctx->pc != 0x172A9Cu) { return; }
    }
    ctx->pc = 0x172A9Cu;
    // 0x172a9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x172a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172aa0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x172aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x172aa4: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x172aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x172aa8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x172aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x172aac: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x172aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x172ab0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x172ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x172ab4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x172ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x172ab8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x172AB8u;
    {
        const bool branch_taken_0x172ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x172ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172AB8u;
            // 0x172abc: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ab8) {
            ctx->pc = 0x172AF0u;
            goto label_172af0;
        }
    }
    ctx->pc = 0x172AC0u;
    // 0x172ac0: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x172ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x172ac4: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x172ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x172ac8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x172ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x172acc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x172accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172ad0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x172ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x172ad4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x172ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x172ad8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172ae0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x172ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172ae4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x172ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x172ae8: 0xc05c916  jal         func_172458
    ctx->pc = 0x172AE8u;
    SET_GPR_U32(ctx, 31, 0x172AF0u);
    ctx->pc = 0x172AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172AE8u;
            // 0x172aec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172458u;
    if (runtime->hasFunction(0x172458u)) {
        auto targetFn = runtime->lookupFunction(0x172458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AF0u; }
        if (ctx->pc != 0x172AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172458_0x172458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AF0u; }
        if (ctx->pc != 0x172AF0u) { return; }
    }
    ctx->pc = 0x172AF0u;
label_172af0:
    // 0x172af0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x172af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x172af4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x172af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172af8: 0x8c83c314  lw          $v1, -0x3CEC($a0)
    ctx->pc = 0x172af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294951700)));
    // 0x172afc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x172afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172b00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x172b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x172b04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x172b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172b08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x172b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b10: 0xac83c314  sw          $v1, -0x3CEC($a0)
    ctx->pc = 0x172b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294951700), GPR_U32(ctx, 3));
    // 0x172b14: 0x3e00008  jr          $ra
    ctx->pc = 0x172B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B14u;
            // 0x172b18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172AF0u: goto label_172af0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172B1Cu;
    // 0x172b1c: 0x0  nop
    ctx->pc = 0x172b1cu;
    // NOP
}
