#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140878
// Address: 0x140878 - 0x140948
void sub_00140878_0x140878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140878_0x140878");
#endif

    ctx->pc = 0x140878u;

label_140878:
    // 0x140878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14087c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x14087cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x140880: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x140880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x140884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140888: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x140888u;
    SET_GPR_U32(ctx, 31, 0x140890u);
    ctx->pc = 0x14088Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140888u;
            // 0x14088c: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140890u; }
        if (ctx->pc != 0x140890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140890u; }
        if (ctx->pc != 0x140890u) { return; }
    }
    ctx->pc = 0x140890u;
    // 0x140890: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x140890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x140894: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x140894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
    // 0x140898: 0x34421234  ori         $v0, $v0, 0x1234
    ctx->pc = 0x140898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4660);
    // 0x14089c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14089cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1408a0: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1408a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1408a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1408a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1408a8: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x1408A8u;
    SET_GPR_U32(ctx, 31, 0x1408B0u);
    ctx->pc = 0x1408ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1408A8u;
            // 0x1408ac: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408B0u; }
        if (ctx->pc != 0x1408B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408B0u; }
        if (ctx->pc != 0x1408B0u) { return; }
    }
    ctx->pc = 0x1408B0u;
    // 0x1408b0: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1408b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1408b4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1408b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1408b8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1408b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1408bc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1408bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1408c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1408c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1408c4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1408c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1408c8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1408c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1408cc: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x1408ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1408d0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1408d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1408d4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1408d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1408d8: 0x24060061  addiu       $a2, $zero, 0x61
    ctx->pc = 0x1408d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1408dc: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1408dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1408e0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1408e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1408e4: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1408e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x1408e8: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1408e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1408ec: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1408ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1408f0: 0xae05f168  sw          $a1, -0xE98($s0)
    ctx->pc = 0x1408f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 5));
    // 0x1408f4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1408f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1408f8: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x1408F8u;
    SET_GPR_U32(ctx, 31, 0x140900u);
    ctx->pc = 0x1408FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1408F8u;
            // 0x1408fc: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140900u; }
        if (ctx->pc != 0x140900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140900u; }
        if (ctx->pc != 0x140900u) { return; }
    }
    ctx->pc = 0x140900u;
    // 0x140900: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x140900u;
    SET_GPR_U32(ctx, 31, 0x140908u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140908u; }
        if (ctx->pc != 0x140908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140908u; }
        if (ctx->pc != 0x140908u) { return; }
    }
    ctx->pc = 0x140908u;
    // 0x140908: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x140908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14090c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14090cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140910: 0x3e00008  jr          $ra
    ctx->pc = 0x140910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140910u;
            // 0x140914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140878u: goto label_140878;
            case 0x140930u: goto label_140930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140918u;
    // 0x140918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14091c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14091cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140920: 0xc05f9dc  jal         func_17E770
    ctx->pc = 0x140920u;
    SET_GPR_U32(ctx, 31, 0x140928u);
    ctx->pc = 0x17E770u;
    if (runtime->hasFunction(0x17E770u)) {
        auto targetFn = runtime->lookupFunction(0x17E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140928u; }
        if (ctx->pc != 0x140928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e770_0x17e778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140928u; }
        if (ctx->pc != 0x140928u) { return; }
    }
    ctx->pc = 0x140928u;
    // 0x140928: 0xc05021e  jal         func_140878
    ctx->pc = 0x140928u;
    SET_GPR_U32(ctx, 31, 0x140930u);
    ctx->pc = 0x140878u;
    runtime->cooperativeGuestYield();
    goto label_140878;
    ctx->pc = 0x140930u;
label_140930:
    // 0x140930: 0xc04fd92  jal         func_13F648
    ctx->pc = 0x140930u;
    SET_GPR_U32(ctx, 31, 0x140938u);
    ctx->pc = 0x13F648u;
    if (runtime->hasFunction(0x13F648u)) {
        auto targetFn = runtime->lookupFunction(0x13F648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140938u; }
        if (ctx->pc != 0x140938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f648_0x13f6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140938u; }
        if (ctx->pc != 0x140938u) { return; }
    }
    ctx->pc = 0x140938u;
    // 0x140938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14093c: 0x3e00008  jr          $ra
    ctx->pc = 0x14093Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14093Cu;
            // 0x140940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140878u: goto label_140878;
            case 0x140930u: goto label_140930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140944u;
    // 0x140944: 0x0  nop
    ctx->pc = 0x140944u;
    // NOP
}
