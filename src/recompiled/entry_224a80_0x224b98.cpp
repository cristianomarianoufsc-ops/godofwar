#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_224a80
// Address: 0x224a80 - 0x224b98
void entry_224a80_0x224b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_224a80_0x224b98");
#endif

    ctx->pc = 0x224a80u;

    // 0x224a80: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x224a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x224a84: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x224a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x224a88: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x224a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x224a8c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x224a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x224a90: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x224a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x224a94: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x224a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x224a98: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x224a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x224a9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x224a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224aa0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x224aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x224aa4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x224aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x224aa8: 0xc04f856  jal         func_13E158
    ctx->pc = 0x224AA8u;
    SET_GPR_U32(ctx, 31, 0x224AB0u);
    ctx->pc = 0x224AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AA8u;
            // 0x224aac: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AB0u; }
        if (ctx->pc != 0x224AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AB0u; }
        if (ctx->pc != 0x224AB0u) { return; }
    }
    ctx->pc = 0x224AB0u;
    // 0x224ab0: 0xc090f2a  jal         func_243CA8
    ctx->pc = 0x224AB0u;
    SET_GPR_U32(ctx, 31, 0x224AB8u);
    ctx->pc = 0x224AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AB0u;
            // 0x224ab4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243CA8u;
    if (runtime->hasFunction(0x243CA8u)) {
        auto targetFn = runtime->lookupFunction(0x243CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AB8u; }
        if (ctx->pc != 0x224AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243ca8_0x243cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AB8u; }
        if (ctx->pc != 0x224AB8u) { return; }
    }
    ctx->pc = 0x224AB8u;
    // 0x224ab8: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x224ab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224abc: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x224ABCu;
    SET_GPR_U32(ctx, 31, 0x224AC4u);
    ctx->pc = 0x224AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224ABCu;
            // 0x224ac0: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AC4u; }
        if (ctx->pc != 0x224AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AC4u; }
        if (ctx->pc != 0x224AC4u) { return; }
    }
    ctx->pc = 0x224AC4u;
    // 0x224ac4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x224AC4u;
    SET_GPR_U32(ctx, 31, 0x224ACCu);
    ctx->pc = 0x224AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AC4u;
            // 0x224ac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224ACCu; }
        if (ctx->pc != 0x224ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224ACCu; }
        if (ctx->pc != 0x224ACCu) { return; }
    }
    ctx->pc = 0x224ACCu;
    // 0x224acc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ad0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x224ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x224ad4: 0x24a58058  addiu       $a1, $a1, -0x7FA8
    ctx->pc = 0x224ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934616));
    // 0x224ad8: 0xc060978  jal         func_1825E0
    ctx->pc = 0x224AD8u;
    SET_GPR_U32(ctx, 31, 0x224AE0u);
    ctx->pc = 0x224ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AD8u;
            // 0x224adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AE0u; }
        if (ctx->pc != 0x224AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AE0u; }
        if (ctx->pc != 0x224AE0u) { return; }
    }
    ctx->pc = 0x224AE0u;
    // 0x224ae0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x224ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x224ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ae8: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x224ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x224aec: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x224AECu;
    SET_GPR_U32(ctx, 31, 0x224AF4u);
    ctx->pc = 0x224AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AECu;
            // 0x224af0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AF4u; }
        if (ctx->pc != 0x224AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AF4u; }
        if (ctx->pc != 0x224AF4u) { return; }
    }
    ctx->pc = 0x224AF4u;
    // 0x224af4: 0xae701194  sw          $s0, 0x1194($s3)
    ctx->pc = 0x224af4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4500), GPR_U32(ctx, 16));
    // 0x224af8: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x224af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x224afc: 0x0  nop
    ctx->pc = 0x224afcu;
    // NOP
label_224b00:
    // 0x224b00: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x224B00u;
    SET_GPR_U32(ctx, 31, 0x224B08u);
    ctx->pc = 0x224B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B00u;
            // 0x224b04: 0x8e641194  lw          $a0, 0x1194($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B08u; }
        if (ctx->pc != 0x224B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B08u; }
        if (ctx->pc != 0x224B08u) { return; }
    }
    ctx->pc = 0x224B08u;
    // 0x224b08: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x224b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x224b0c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x224b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x224b10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x224b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b14: 0x24a56970  addiu       $a1, $a1, 0x6970
    ctx->pc = 0x224b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26992));
    // 0x224b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b1c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x224B1Cu;
    SET_GPR_U32(ctx, 31, 0x224B24u);
    ctx->pc = 0x224B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B1Cu;
            // 0x224b20: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B24u; }
        if (ctx->pc != 0x224B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B24u; }
        if (ctx->pc != 0x224B24u) { return; }
    }
    ctx->pc = 0x224B24u;
    // 0x224b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b28: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x224B28u;
    SET_GPR_U32(ctx, 31, 0x224B30u);
    ctx->pc = 0x224B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B28u;
            // 0x224b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B30u; }
        if (ctx->pc != 0x224B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B30u; }
        if (ctx->pc != 0x224B30u) { return; }
    }
    ctx->pc = 0x224B30u;
    // 0x224b30: 0x8e641194  lw          $a0, 0x1194($s3)
    ctx->pc = 0x224b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4500)));
    // 0x224b34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x224b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x224b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b3c: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x224B3Cu;
    SET_GPR_U32(ctx, 31, 0x224B44u);
    ctx->pc = 0x224B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B3Cu;
            // 0x224b40: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B44u; }
        if (ctx->pc != 0x224B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B44u; }
        if (ctx->pc != 0x224B44u) { return; }
    }
    ctx->pc = 0x224B44u;
    // 0x224b44: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x224b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x224b48: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x224B48u;
    {
        const bool branch_taken_0x224b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224B48u;
            // 0x224b4c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b48) {
            ctx->pc = 0x224B00u;
            runtime->cooperativeGuestYield();
            goto label_224b00;
        }
    }
    ctx->pc = 0x224B50u;
    // 0x224b50: 0xc04f860  jal         func_13E180
    ctx->pc = 0x224B50u;
    SET_GPR_U32(ctx, 31, 0x224B58u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B58u; }
        if (ctx->pc != 0x224B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B58u; }
        if (ctx->pc != 0x224B58u) { return; }
    }
    ctx->pc = 0x224B58u;
    // 0x224b58: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x224b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x224b5c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x224b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224b60: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x224b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x224b64: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x224B64u;
    {
        const bool branch_taken_0x224b64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224B64u;
            // 0x224b68: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b64) {
            ctx->pc = 0x224B74u;
            goto label_224b74;
        }
    }
    ctx->pc = 0x224B6Cu;
    // 0x224b6c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x224B6Cu;
    SET_GPR_U32(ctx, 31, 0x224B74u);
    ctx->pc = 0x224B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B6Cu;
            // 0x224b70: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B74u; }
        if (ctx->pc != 0x224B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B74u; }
        if (ctx->pc != 0x224B74u) { return; }
    }
    ctx->pc = 0x224B74u;
label_224b74:
    // 0x224b74: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x224b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x224b78: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x224b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x224b7c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x224b7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x224b80: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x224b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x224b84: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x224b84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x224b88: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x224b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x224b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x224B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224B8Cu;
            // 0x224b90: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224B00u: goto label_224b00;
            case 0x224B74u: goto label_224b74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224B94u;
    // 0x224b94: 0x0  nop
    ctx->pc = 0x224b94u;
    // NOP
}
