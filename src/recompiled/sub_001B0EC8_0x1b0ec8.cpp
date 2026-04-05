#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0EC8
// Address: 0x1b0ec8 - 0x1b0fb0
void sub_001B0EC8_0x1b0ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0EC8_0x1b0ec8");
#endif

    ctx->pc = 0x1b0ec8u;

    // 0x1b0ec8: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1b0ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x1b0ecc: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x1b0eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x1b0ed0: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x1b0ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x1b0ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ed8: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x1b0ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x1b0edc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b0edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ee0: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x1b0ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x1b0ee4: 0xc06cb34  jal         func_1B2CD0
    ctx->pc = 0x1B0EE4u;
    SET_GPR_U32(ctx, 31, 0x1B0EECu);
    ctx->pc = 0x1B0EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0EE4u;
            // 0x1b0ee8: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2CD0u;
    if (runtime->hasFunction(0x1B2CD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B2CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EECu; }
        if (ctx->pc != 0x1B0EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b2cd0_0x1b2d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EECu; }
        if (ctx->pc != 0x1B0EECu) { return; }
    }
    ctx->pc = 0x1B0EECu;
    // 0x1b0eec: 0x8e42e57c  lw          $v0, -0x1A84($s2)
    ctx->pc = 0x1b0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960508)));
    // 0x1b0ef0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0EF0u;
    {
        const bool branch_taken_0x1b0ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0EF0u;
            // 0x1b0ef4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ef0) {
            ctx->pc = 0x1B0F14u;
            goto label_1b0f14;
        }
    }
    ctx->pc = 0x1B0EF8u;
    // 0x1b0ef8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b0ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0efc: 0x24425078  addiu       $v0, $v0, 0x5078
    ctx->pc = 0x1b0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20600));
    // 0x1b0f00: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1b0f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1b0f04: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x1b0f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x1b0f08: 0xc0a24d0  jal         func_289340
    ctx->pc = 0x1B0F08u;
    SET_GPR_U32(ctx, 31, 0x1B0F10u);
    ctx->pc = 0x1B0F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F08u;
            // 0x1b0f0c: 0x94510030  lhu         $s1, 0x30($v0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289340u;
    if (runtime->hasFunction(0x289340u)) {
        auto targetFn = runtime->lookupFunction(0x289340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F10u; }
        if (ctx->pc != 0x1B0F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289340_0x28943c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F10u; }
        if (ctx->pc != 0x1B0F10u) { return; }
    }
    ctx->pc = 0x1B0F10u;
    // 0x1b0f10: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1b0f14:
    // 0x1b0f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b0f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f18: 0x24505078  addiu       $s0, $v0, 0x5078
    ctx->pc = 0x1b0f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20600));
    // 0x1b0f1c: 0x240601c4  addiu       $a2, $zero, 0x1C4
    ctx->pc = 0x1b0f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x1b0f20: 0xc0a24d0  jal         func_289340
    ctx->pc = 0x1B0F20u;
    SET_GPR_U32(ctx, 31, 0x1B0F28u);
    ctx->pc = 0x1B0F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F20u;
            // 0x1b0f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289340u;
    if (runtime->hasFunction(0x289340u)) {
        auto targetFn = runtime->lookupFunction(0x289340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F28u; }
        if (ctx->pc != 0x1B0F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289340_0x28943c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F28u; }
        if (ctx->pc != 0x1B0F28u) { return; }
    }
    ctx->pc = 0x1B0F28u;
    // 0x1b0f28: 0x8e42e57c  lw          $v0, -0x1A84($s2)
    ctx->pc = 0x1b0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960508)));
    // 0x1b0f2c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0F2Cu;
    {
        const bool branch_taken_0x1b0f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f2c) {
            ctx->pc = 0x1B0F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F2Cu;
            // 0x1b0f30: 0x82020026  lb          $v0, 0x26($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F4Cu;
            goto label_1b0f4c;
        }
    }
    ctx->pc = 0x1B0F34u;
    // 0x1b0f34: 0xa6110030  sh          $s1, 0x30($s0)
    ctx->pc = 0x1b0f34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 17));
    // 0x1b0f38: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x1b0f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x1b0f3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b0f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f40: 0xc0a24d0  jal         func_289340
    ctx->pc = 0x1B0F40u;
    SET_GPR_U32(ctx, 31, 0x1B0F48u);
    ctx->pc = 0x1B0F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F40u;
            // 0x1b0f44: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289340u;
    if (runtime->hasFunction(0x289340u)) {
        auto targetFn = runtime->lookupFunction(0x289340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F48u; }
        if (ctx->pc != 0x1B0F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289340_0x28943c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F48u; }
        if (ctx->pc != 0x1B0F48u) { return; }
    }
    ctx->pc = 0x1B0F48u;
    // 0x1b0f48: 0x82020026  lb          $v0, 0x26($s0)
    ctx->pc = 0x1b0f48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
label_1b0f4c:
    // 0x1b0f4c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B0F4Cu;
    {
        const bool branch_taken_0x1b0f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F4Cu;
            // 0x1b0f50: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f4c) {
            ctx->pc = 0x1B0F98u;
            goto label_1b0f98;
        }
    }
    ctx->pc = 0x1B0F54u;
    // 0x1b0f54: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b0f58: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b0f5c: 0x8c44cc6c  lw          $a0, -0x3394($v0)
    ctx->pc = 0x1b0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954092)));
    // 0x1b0f60: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b0f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b0f64: 0xc04f87e  jal         func_13E1F8
    ctx->pc = 0x1B0F64u;
    SET_GPR_U32(ctx, 31, 0x1B0F6Cu);
    ctx->pc = 0x1B0F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F64u;
            // 0x1b0f68: 0xac64cb0c  sw          $a0, -0x34F4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953740), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E1F8u;
    if (runtime->hasFunction(0x13E1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13E1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F6Cu; }
        if (ctx->pc != 0x1B0F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e1f8_0x13e2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F6Cu; }
        if (ctx->pc != 0x1B0F6Cu) { return; }
    }
    ctx->pc = 0x1B0F6Cu;
    // 0x1b0f6c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x1b0f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x1b0f70: 0x3463e417  ori         $v1, $v1, 0xE417
    ctx->pc = 0x1b0f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58391);
    // 0x1b0f74: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b0f74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0f78: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0F78u;
    {
        const bool branch_taken_0x1b0f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F78u;
            // 0x1b0f7c: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f78) {
            ctx->pc = 0x1B0F98u;
            goto label_1b0f98;
        }
    }
    ctx->pc = 0x1B0F80u;
    // 0x1b0f80: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b0f84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0f88: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1b0f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1b0f8c: 0xac43cb14  sw          $v1, -0x34EC($v0)
    ctx->pc = 0x1b0f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953748), GPR_U32(ctx, 3));
    // 0x1b0f90: 0xac80cb18  sw          $zero, -0x34E8($a0)
    ctx->pc = 0x1b0f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953752), GPR_U32(ctx, 0));
    // 0x1b0f94: 0x0  nop
    ctx->pc = 0x1b0f94u;
    // NOP
label_1b0f98:
    // 0x1b0f98: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1b0f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1b0f9c: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x1b0f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b0fa0: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x1b0fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b0fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FA4u;
            // 0x1b0fa8: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0F14u: goto label_1b0f14;
            case 0x1B0F4Cu: goto label_1b0f4c;
            case 0x1B0F98u: goto label_1b0f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0FACu;
    // 0x1b0fac: 0x0  nop
    ctx->pc = 0x1b0facu;
    // NOP
}
