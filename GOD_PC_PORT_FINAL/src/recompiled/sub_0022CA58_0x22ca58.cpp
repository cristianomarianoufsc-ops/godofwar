#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022CA58
// Address: 0x22ca58 - 0x22cb18
void sub_0022CA58_0x22ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CA58_0x22ca58");
#endif

    ctx->pc = 0x22ca58u;

    // 0x22ca58: 0x3c02cafe  lui         $v0, 0xCAFE
    ctx->pc = 0x22ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51966 << 16));
    // 0x22ca5c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22ca5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22ca60: 0x3442bad1  ori         $v0, $v0, 0xBAD1
    ctx->pc = 0x22ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47825);
    // 0x22ca64: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x22ca64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x22ca68: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x22ca68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x22ca6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x22ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22ca70: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x22ca74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22ca74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22ca78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22ca7c: 0xc08b422  jal         func_22D088
    ctx->pc = 0x22CA7Cu;
    SET_GPR_U32(ctx, 31, 0x22CA84u);
    ctx->pc = 0x22CA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA7Cu;
            // 0x22ca80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CA84u; }
        if (ctx->pc != 0x22CA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CA84u; }
        if (ctx->pc != 0x22CA84u) { return; }
    }
    ctx->pc = 0x22CA84u;
    // 0x22ca84: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22ca88: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x22ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x22ca8c: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x22ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22ca90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22ca94: 0x8c4201c4  lw          $v0, 0x1C4($v0)
    ctx->pc = 0x22ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x22ca98: 0xc08b422  jal         func_22D088
    ctx->pc = 0x22CA98u;
    SET_GPR_U32(ctx, 31, 0x22CAA0u);
    ctx->pc = 0x22CA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA98u;
            // 0x22ca9c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CAA0u; }
        if (ctx->pc != 0x22CAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CAA0u; }
        if (ctx->pc != 0x22CAA0u) { return; }
    }
    ctx->pc = 0x22CAA0u;
    // 0x22caa0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x22caa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22caa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22caa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22caa8: 0xc06ec98  jal         func_1BB260
    ctx->pc = 0x22CAA8u;
    SET_GPR_U32(ctx, 31, 0x22CAB0u);
    ctx->pc = 0x22CAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CAA8u;
            // 0x22caac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB260u;
    if (runtime->hasFunction(0x1BB260u)) {
        auto targetFn = runtime->lookupFunction(0x1BB260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CAB0u; }
        if (ctx->pc != 0x22CAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB260_0x1bb260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CAB0u; }
        if (ctx->pc != 0x22CAB0u) { return; }
    }
    ctx->pc = 0x22CAB0u;
    // 0x22cab0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22cab4: 0x0  nop
    ctx->pc = 0x22cab4u;
    // NOP
label_22cab8:
    // 0x22cab8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22cabc: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x22cabcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22cac0: 0xc08b422  jal         func_22D088
    ctx->pc = 0x22CAC0u;
    SET_GPR_U32(ctx, 31, 0x22CAC8u);
    ctx->pc = 0x22CAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CAC0u;
            // 0x22cac4: 0x5d2021  addu        $a0, $v0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CAC8u; }
        if (ctx->pc != 0x22CAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CAC8u; }
        if (ctx->pc != 0x22CAC8u) { return; }
    }
    ctx->pc = 0x22CAC8u;
    // 0x22cac8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x22cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22cacc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22caccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22cad0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22cad0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cad8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22cad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22cadc: 0xc08b422  jal         func_22D088
    ctx->pc = 0x22CADCu;
    SET_GPR_U32(ctx, 31, 0x22CAE4u);
    ctx->pc = 0x22CAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CADCu;
            // 0x22cae0: 0xa3a20030  sb          $v0, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CAE4u; }
        if (ctx->pc != 0x22CAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CAE4u; }
        if (ctx->pc != 0x22CAE4u) { return; }
    }
    ctx->pc = 0x22CAE4u;
    // 0x22cae4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x22cae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22cae8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22CAE8u;
    {
        const bool branch_taken_0x22cae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CAE8u;
            // 0x22caec: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cae8) {
            ctx->pc = 0x22CAB8u;
            runtime->cooperativeGuestYield();
            goto label_22cab8;
        }
    }
    ctx->pc = 0x22CAF0u;
    // 0x22caf0: 0xc08b36c  jal         func_22CDB0
    ctx->pc = 0x22CAF0u;
    SET_GPR_U32(ctx, 31, 0x22CAF8u);
    ctx->pc = 0x22CDB0u;
    if (runtime->hasFunction(0x22CDB0u)) {
        auto targetFn = runtime->lookupFunction(0x22CDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CAF8u; }
        if (ctx->pc != 0x22CAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022CDB0_0x22cdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CAF8u; }
        if (ctx->pc != 0x22CAF8u) { return; }
    }
    ctx->pc = 0x22CAF8u;
    // 0x22caf8: 0xc06cdca  jal         func_1B3728
    ctx->pc = 0x22CAF8u;
    SET_GPR_U32(ctx, 31, 0x22CB00u);
    ctx->pc = 0x1B3728u;
    if (runtime->hasFunction(0x1B3728u)) {
        auto targetFn = runtime->lookupFunction(0x1B3728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB00u; }
        if (ctx->pc != 0x22CB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3728_0x1b3728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB00u; }
        if (ctx->pc != 0x22CB00u) { return; }
    }
    ctx->pc = 0x22CB00u;
    // 0x22cb00: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x22cb00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22cb04: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x22cb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22cb08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22cb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x22CB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB0Cu;
            // 0x22cb10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22CAB8u: goto label_22cab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22CB14u;
    // 0x22cb14: 0x0  nop
    ctx->pc = 0x22cb14u;
    // NOP
}
