#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188CA0
// Address: 0x188ca0 - 0x188e80
void sub_00188CA0_0x188ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188CA0_0x188ca0");
#endif

    ctx->pc = 0x188ca0u;

    // 0x188ca0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x188ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x188ca4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x188ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x188ca8: 0x3c17002a  lui         $s7, 0x2A
    ctx->pc = 0x188ca8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
    // 0x188cac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x188cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x188cb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x188cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x188cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cb8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x188cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x188cbc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x188cbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cc0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x188cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x188cc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x188cc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cc8: 0x8ee2c838  lw          $v0, -0x37C8($s7)
    ctx->pc = 0x188cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294953016)));
    // 0x188ccc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x188cccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cd0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x188cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x188cd4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x188cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x188cd8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x188cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x188cdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188CDCu;
    {
        const bool branch_taken_0x188cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188CDCu;
            // 0x188ce0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cdc) {
            ctx->pc = 0x188CECu;
            goto label_188cec;
        }
    }
    ctx->pc = 0x188CE4u;
    // 0x188ce4: 0xc0623c8  jal         func_188F20
    ctx->pc = 0x188CE4u;
    SET_GPR_U32(ctx, 31, 0x188CECu);
    ctx->pc = 0x188F20u;
    if (runtime->hasFunction(0x188F20u)) {
        auto targetFn = runtime->lookupFunction(0x188F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188CECu; }
        if (ctx->pc != 0x188CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188F20_0x188f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188CECu; }
        if (ctx->pc != 0x188CECu) { return; }
    }
    ctx->pc = 0x188CECu;
label_188cec:
    // 0x188cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cf0: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x188cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x188cf4: 0x26704d10  addiu       $s0, $s3, 0x4D10
    ctx->pc = 0x188cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 19728));
    // 0x188cf8: 0xc0a2644  jal         func_289910
    ctx->pc = 0x188CF8u;
    SET_GPR_U32(ctx, 31, 0x188D00u);
    ctx->pc = 0x188CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188CF8u;
            // 0x188cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D00u; }
        if (ctx->pc != 0x188D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D00u; }
        if (ctx->pc != 0x188D00u) { return; }
    }
    ctx->pc = 0x188D00u;
    // 0x188d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d04: 0xc0a2589  jal         func_289624
    ctx->pc = 0x188D04u;
    SET_GPR_U32(ctx, 31, 0x188D0Cu);
    ctx->pc = 0x188D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188D04u;
            // 0x188d08: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D0Cu; }
        if (ctx->pc != 0x188D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D0Cu; }
        if (ctx->pc != 0x188D0Cu) { return; }
    }
    ctx->pc = 0x188D0Cu;
    // 0x188d0c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x188D0Cu;
    {
        const bool branch_taken_0x188d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188d0c) {
            ctx->pc = 0x188D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188D0Cu;
            // 0x188d10: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188D18u;
            goto label_188d18;
        }
    }
    ctx->pc = 0x188D14u;
    // 0x188d14: 0x0  nop
    ctx->pc = 0x188d14u;
    // NOP
label_188d18:
    // 0x188d18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x188d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d1c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x188d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_188d20:
    // 0x188d20: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x188d20u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x188d24: 0x2452c858  addiu       $s2, $v0, -0x37A8
    ctx->pc = 0x188d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953048));
    // 0x188d28: 0x26644d10  addiu       $a0, $s3, 0x4D10
    ctx->pc = 0x188d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 19728));
    // 0x188d2c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x188d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x188d30: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x188D30u;
    SET_GPR_U32(ctx, 31, 0x188D38u);
    ctx->pc = 0x188D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188D30u;
            // 0x188d34: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D38u; }
        if (ctx->pc != 0x188D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D38u; }
        if (ctx->pc != 0x188D38u) { return; }
    }
    ctx->pc = 0x188D38u;
    // 0x188d38: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x188D38u;
    {
        const bool branch_taken_0x188d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188d38) {
            ctx->pc = 0x188D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188D38u;
            // 0x188d3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188D50u;
            goto label_188d50;
        }
    }
    ctx->pc = 0x188D40u;
    // 0x188d40: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x188d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x188d44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x188D44u;
    {
        const bool branch_taken_0x188d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188D44u;
            // 0x188d48: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d44) {
            ctx->pc = 0x188D5Cu;
            goto label_188d5c;
        }
    }
    ctx->pc = 0x188D4Cu;
    // 0x188d4c: 0x0  nop
    ctx->pc = 0x188d4cu;
    // NOP
label_188d50:
    // 0x188d50: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x188d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x188d54: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x188D54u;
    {
        const bool branch_taken_0x188d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188D54u;
            // 0x188d58: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d54) {
            ctx->pc = 0x188D20u;
            runtime->cooperativeGuestYield();
            goto label_188d20;
        }
    }
    ctx->pc = 0x188D5Cu;
label_188d5c:
    // 0x188d5c: 0x26724d10  addiu       $s2, $s3, 0x4D10
    ctx->pc = 0x188d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 19728));
    // 0x188d60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x188d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d64: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x188d64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188d68: 0xae5400a4  sw          $s4, 0xA4($s2)
    ctx->pc = 0x188d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 20));
    // 0x188d6c: 0xae530088  sw          $s3, 0x88($s2)
    ctx->pc = 0x188d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 19));
    // 0x188d70: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x188d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
    // 0x188d74: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x188d74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x188d78: 0xae55009c  sw          $s5, 0x9C($s2)
    ctx->pc = 0x188d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 21));
    // 0x188d7c: 0xc04f856  jal         func_13E158
    ctx->pc = 0x188D7Cu;
    SET_GPR_U32(ctx, 31, 0x188D84u);
    ctx->pc = 0x188D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188D7Cu;
            // 0x188d80: 0xae4000a0  sw          $zero, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D84u; }
        if (ctx->pc != 0x188D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D84u; }
        if (ctx->pc != 0x188D84u) { return; }
    }
    ctx->pc = 0x188D84u;
    // 0x188d84: 0xc04f824  jal         func_13E090
    ctx->pc = 0x188D84u;
    SET_GPR_U32(ctx, 31, 0x188D8Cu);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D8Cu; }
        if (ctx->pc != 0x188D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188D8Cu; }
        if (ctx->pc != 0x188D8Cu) { return; }
    }
    ctx->pc = 0x188D8Cu;
    // 0x188d8c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x188d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x188d90: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x188d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x188d94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d98: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x188D98u;
    SET_GPR_U32(ctx, 31, 0x188DA0u);
    ctx->pc = 0x188D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188D98u;
            // 0x188d9c: 0x34a5e418  ori         $a1, $a1, 0xE418 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DA0u; }
        if (ctx->pc != 0x188DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DA0u; }
        if (ctx->pc != 0x188DA0u) { return; }
    }
    ctx->pc = 0x188DA0u;
    // 0x188da0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x188da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x188da4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x188da4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x188da8: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x188da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x188dac: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x188dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x188db0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188db4: 0x24c62f18  addiu       $a2, $a2, 0x2F18
    ctx->pc = 0x188db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12056));
    // 0x188db8: 0xac624dbc  sw          $v0, 0x4DBC($v1)
    ctx->pc = 0x188db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19900), GPR_U32(ctx, 2));
    // 0x188dbc: 0xc04f5c4  jal         func_13D710
    ctx->pc = 0x188DBCu;
    SET_GPR_U32(ctx, 31, 0x188DC4u);
    ctx->pc = 0x188DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188DBCu;
            // 0x188dc0: 0x34a5e418  ori         $a1, $a1, 0xE418 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D710u;
    if (runtime->hasFunction(0x13D710u)) {
        auto targetFn = runtime->lookupFunction(0x13D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DC4u; }
        if (ctx->pc != 0x188DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13d710_0x13d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DC4u; }
        if (ctx->pc != 0x188DC4u) { return; }
    }
    ctx->pc = 0x188DC4u;
    // 0x188dc4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x188dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x188dc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188dcc: 0xc04f856  jal         func_13E158
    ctx->pc = 0x188DCCu;
    SET_GPR_U32(ctx, 31, 0x188DD4u);
    ctx->pc = 0x188DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188DCCu;
            // 0x188dd0: 0xac624db8  sw          $v0, 0x4DB8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 19896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DD4u; }
        if (ctx->pc != 0x188DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DD4u; }
        if (ctx->pc != 0x188DD4u) { return; }
    }
    ctx->pc = 0x188DD4u;
    // 0x188dd4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x188dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x188dd8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x188dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x188ddc: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x188DDCu;
    {
        const bool branch_taken_0x188ddc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188DDCu;
            // 0x188de0: 0xac62c850  sw          $v0, -0x37B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ddc) {
            ctx->pc = 0x188DECu;
            goto label_188dec;
        }
    }
    ctx->pc = 0x188DE4u;
    // 0x188de4: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x188de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x188de8: 0xac62c850  sw          $v0, -0x37B0($v1)
    ctx->pc = 0x188de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953040), GPR_U32(ctx, 2));
label_188dec:
    // 0x188dec: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x188decu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x188df0: 0x8c71c850  lw          $s1, -0x37B0($v1)
    ctx->pc = 0x188df0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953040)));
    // 0x188df4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x188DF4u;
    SET_GPR_U32(ctx, 31, 0x188DFCu);
    ctx->pc = 0x188DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188DF4u;
            // 0x188df8: 0x2610de10  addiu       $s0, $s0, -0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DFCu; }
        if (ctx->pc != 0x188DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188DFCu; }
        if (ctx->pc != 0x188DFCu) { return; }
    }
    ctx->pc = 0x188DFCu;
    // 0x188dfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e00: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x188e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x188e04: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x188E04u;
    SET_GPR_U32(ctx, 31, 0x188E0Cu);
    ctx->pc = 0x188E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188E04u;
            // 0x188e08: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E0Cu; }
        if (ctx->pc != 0x188E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E0Cu; }
        if (ctx->pc != 0x188E0Cu) { return; }
    }
    ctx->pc = 0x188E0Cu;
    // 0x188e0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x188e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x188e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e18: 0xc05eb5c  jal         func_17AD70
    ctx->pc = 0x188E18u;
    SET_GPR_U32(ctx, 31, 0x188E20u);
    ctx->pc = 0x188E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188E18u;
            // 0x188e1c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AD70u;
    if (runtime->hasFunction(0x17AD70u)) {
        auto targetFn = runtime->lookupFunction(0x17AD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E20u; }
        if (ctx->pc != 0x188E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AD70_0x17ad70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E20u; }
        if (ctx->pc != 0x188E20u) { return; }
    }
    ctx->pc = 0x188E20u;
    // 0x188e20: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x188e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x188e24: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x188e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x188e28: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x188e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x188e2c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x188e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x188e30: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x188e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x188e34: 0xc04f860  jal         func_13E180
    ctx->pc = 0x188E34u;
    SET_GPR_U32(ctx, 31, 0x188E3Cu);
    ctx->pc = 0x188E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188E34u;
            // 0x188e38: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E3Cu; }
        if (ctx->pc != 0x188E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E3Cu; }
        if (ctx->pc != 0x188E3Cu) { return; }
    }
    ctx->pc = 0x188E3Cu;
    // 0x188e3c: 0xc04f860  jal         func_13E180
    ctx->pc = 0x188E3Cu;
    SET_GPR_U32(ctx, 31, 0x188E44u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E44u; }
        if (ctx->pc != 0x188E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E44u; }
        if (ctx->pc != 0x188E44u) { return; }
    }
    ctx->pc = 0x188E44u;
    // 0x188e44: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x188e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x188e48: 0xc05e7bc  jal         func_179EF0
    ctx->pc = 0x188E48u;
    SET_GPR_U32(ctx, 31, 0x188E50u);
    ctx->pc = 0x188E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188E48u;
            // 0x188e4c: 0x24849020  addiu       $a0, $a0, -0x6FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179EF0u;
    if (runtime->hasFunction(0x179EF0u)) {
        auto targetFn = runtime->lookupFunction(0x179EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E50u; }
        if (ctx->pc != 0x188E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_179ef0_0x179f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188E50u; }
        if (ctx->pc != 0x188E50u) { return; }
    }
    ctx->pc = 0x188E50u;
    // 0x188e50: 0xaef3c838  sw          $s3, -0x37C8($s7)
    ctx->pc = 0x188e50u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294953016), GPR_U32(ctx, 19));
    // 0x188e54: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x188e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x188e58: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x188e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x188e5c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x188e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188e60: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x188e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188e64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x188e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188e68: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x188e68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188e6c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x188e6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188e70: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x188e70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188e78: 0x3e00008  jr          $ra
    ctx->pc = 0x188E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188E78u;
            // 0x188e7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188CECu: goto label_188cec;
            case 0x188D18u: goto label_188d18;
            case 0x188D20u: goto label_188d20;
            case 0x188D50u: goto label_188d50;
            case 0x188D5Cu: goto label_188d5c;
            case 0x188DECu: goto label_188dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188E80u;
}
