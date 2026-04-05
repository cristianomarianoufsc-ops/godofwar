#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9780
// Address: 0x1b9780 - 0x1b9828
void sub_001B9780_0x1b9780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9780_0x1b9780");
#endif

    ctx->pc = 0x1b9780u;

    // 0x1b9780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b9780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b9784: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b9784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b9788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b9788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b978c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b978cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9790: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1b9790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b9794: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b9794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b979c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B979Cu;
    {
        const bool branch_taken_0x1b979c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1B97A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B979Cu;
            // 0x1b97a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b979c) {
            ctx->pc = 0x1B97B0u;
            goto label_1b97b0;
        }
    }
    ctx->pc = 0x1B97A4u;
    // 0x1b97a4: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x1b97a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x1b97a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B97A8u;
    {
        const bool branch_taken_0x1b97a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97A8u;
            // 0x1b97ac: 0xae201544  sw          $zero, 0x1544($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97a8) {
            ctx->pc = 0x1B9804u;
            goto label_1b9804;
        }
    }
    ctx->pc = 0x1B97B0u;
label_1b97b0:
    // 0x1b97b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b97b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97b4: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1B97B4u;
    SET_GPR_U32(ctx, 31, 0x1B97BCu);
    ctx->pc = 0x1B97B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97B4u;
            // 0x1b97b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97BCu; }
        if (ctx->pc != 0x1B97BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97BCu; }
        if (ctx->pc != 0x1B97BCu) { return; }
    }
    ctx->pc = 0x1B97BCu;
    // 0x1b97bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B97BCu;
    {
        const bool branch_taken_0x1b97bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97BCu;
            // 0x1b97c0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97bc) {
            ctx->pc = 0x1B97E0u;
            goto label_1b97e0;
        }
    }
    ctx->pc = 0x1B97C4u;
    // 0x1b97c4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b97c8: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b97c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b97cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b97d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b97d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b97d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B97D8u;
    {
        const bool branch_taken_0x1b97d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97D8u;
            // 0x1b97dc: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97d8) {
            ctx->pc = 0x1B97F8u;
            goto label_1b97f8;
        }
    }
    ctx->pc = 0x1B97E0u;
label_1b97e0:
    // 0x1b97e0: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x1b97e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x1b97e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b97e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b97e8: 0x248474c8  addiu       $a0, $a0, 0x74C8
    ctx->pc = 0x1b97e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29896));
    // 0x1b97ec: 0x24a556b0  addiu       $a1, $a1, 0x56B0
    ctx->pc = 0x1b97ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22192));
    // 0x1b97f0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1B97F0u;
    SET_GPR_U32(ctx, 31, 0x1B97F8u);
    ctx->pc = 0x1B97F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97F0u;
            // 0x1b97f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97F8u; }
        if (ctx->pc != 0x1B97F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97F8u; }
        if (ctx->pc != 0x1B97F8u) { return; }
    }
    ctx->pc = 0x1B97F8u;
label_1b97f8:
    // 0x1b97f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b97fc: 0xe6341544  swc1        $f20, 0x1544($s1)
    ctx->pc = 0x1b97fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5444), bits); }
    // 0x1b9800: 0xae22024c  sw          $v0, 0x24C($s1)
    ctx->pc = 0x1b9800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 2));
label_1b9804:
    // 0x1b9804: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9804u;
    SET_GPR_U32(ctx, 31, 0x1B980Cu);
    ctx->pc = 0x1B9808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9804u;
            // 0x1b9808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B980Cu; }
        if (ctx->pc != 0x1B980Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B980Cu; }
        if (ctx->pc != 0x1B980Cu) { return; }
    }
    ctx->pc = 0x1B980Cu;
    // 0x1b980c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b980cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9810: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b9810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9818: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1b9818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b981c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B981Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B981Cu;
            // 0x1b9820: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B97B0u: goto label_1b97b0;
            case 0x1B97E0u: goto label_1b97e0;
            case 0x1B97F8u: goto label_1b97f8;
            case 0x1B9804u: goto label_1b9804;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9824u;
    // 0x1b9824: 0x0  nop
    ctx->pc = 0x1b9824u;
    // NOP
}
