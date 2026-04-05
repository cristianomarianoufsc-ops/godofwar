#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE460
// Address: 0x1ae460 - 0x1ae518
void sub_001AE460_0x1ae460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE460_0x1ae460");
#endif

    ctx->pc = 0x1ae460u;

    // 0x1ae460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae468: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1ae468u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1ae46c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ae46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ae470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae474: 0xc05bc5c  jal         func_16F170
    ctx->pc = 0x1AE474u;
    SET_GPR_U32(ctx, 31, 0x1AE47Cu);
    ctx->pc = 0x1AE478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE474u;
            // 0x1ae478: 0x2624e6b8  addiu       $a0, $s1, -0x1948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F170u;
    if (runtime->hasFunction(0x16F170u)) {
        auto targetFn = runtime->lookupFunction(0x16F170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE47Cu; }
        if (ctx->pc != 0x1AE47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16f170_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE47Cu; }
        if (ctx->pc != 0x1AE47Cu) { return; }
    }
    ctx->pc = 0x1AE47Cu;
    // 0x1ae47c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae480: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1ae480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1ae484: 0x0  nop
    ctx->pc = 0x1ae484u;
    // NOP
label_1ae488:
    // 0x1ae488: 0x2622e6b8  addiu       $v0, $s1, -0x1948
    ctx->pc = 0x1ae488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960824));
    // 0x1ae48c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ae48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae490: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ae490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ae494: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ae494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae498: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x1ae498u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ae49c: 0x28c20400  slti        $v0, $a2, 0x400
    ctx->pc = 0x1ae49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1ae4a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AE4A0u;
    {
        const bool branch_taken_0x1ae4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4A0u;
            // 0x1ae4a4: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4a0) {
            ctx->pc = 0x1AE488u;
            runtime->cooperativeGuestYield();
            goto label_1ae488;
        }
    }
    ctx->pc = 0x1AE4A8u;
    // 0x1ae4a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae4a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae4ac: 0x0  nop
    ctx->pc = 0x1ae4acu;
    // NOP
label_1ae4b0:
    // 0x1ae4b0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1ae4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ae4b4: 0x2630e6b8  addiu       $s0, $s1, -0x1948
    ctx->pc = 0x1ae4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960824));
    // 0x1ae4b8: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1ae4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae4bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ae4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ae4c0: 0x28c50080  slti        $a1, $a2, 0x80
    ctx->pc = 0x1ae4c0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1ae4c4: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x1ae4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ae4c8: 0xac600804  sw          $zero, 0x804($v1)
    ctx->pc = 0x1ae4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2052), GPR_U32(ctx, 0));
    // 0x1ae4cc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ae4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae4d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ae4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ae4d4: 0xac800808  sw          $zero, 0x808($a0)
    ctx->pc = 0x1ae4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2056), GPR_U32(ctx, 0));
    // 0x1ae4d8: 0xa040081d  sb          $zero, 0x81D($v0)
    ctx->pc = 0x1ae4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2077), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae4dc: 0xa040080c  sb          $zero, 0x80C($v0)
    ctx->pc = 0x1ae4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2060), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae4e0: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1AE4E0u;
    {
        const bool branch_taken_0x1ae4e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4E0u;
            // 0x1ae4e4: 0xa040081c  sb          $zero, 0x81C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2076), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4e0) {
            ctx->pc = 0x1AE4B0u;
            runtime->cooperativeGuestYield();
            goto label_1ae4b0;
        }
    }
    ctx->pc = 0x1AE4E8u;
    // 0x1ae4e8: 0x26041604  addiu       $a0, $s0, 0x1604
    ctx->pc = 0x1ae4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5636));
    // 0x1ae4ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae4f0: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1AE4F0u;
    SET_GPR_U32(ctx, 31, 0x1AE4F8u);
    ctx->pc = 0x1AE4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4F0u;
            // 0x1ae4f4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4F8u; }
        if (ctx->pc != 0x1AE4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE4F8u; }
        if (ctx->pc != 0x1AE4F8u) { return; }
    }
    ctx->pc = 0x1AE4F8u;
    // 0x1ae4f8: 0xae00170c  sw          $zero, 0x170C($s0)
    ctx->pc = 0x1ae4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5900), GPR_U32(ctx, 0));
    // 0x1ae4fc: 0xae001704  sw          $zero, 0x1704($s0)
    ctx->pc = 0x1ae4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5892), GPR_U32(ctx, 0));
    // 0x1ae500: 0xae001708  sw          $zero, 0x1708($s0)
    ctx->pc = 0x1ae500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5896), GPR_U32(ctx, 0));
    // 0x1ae504: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ae504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae510: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE510u;
            // 0x1ae514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE488u: goto label_1ae488;
            case 0x1AE4B0u: goto label_1ae4b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE518u;
}
