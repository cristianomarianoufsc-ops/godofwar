#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3D30
// Address: 0x1b3d30 - 0x1b3e08
void sub_001B3D30_0x1b3d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3D30_0x1b3d30");
#endif

    ctx->pc = 0x1b3d30u;

    // 0x1b3d30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b3d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b3d34: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b3d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b3d38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b3d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b3d3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b3d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b3d40: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b3d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b3d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b3d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b3d48: 0xc06cefa  jal         func_1B3BE8
    ctx->pc = 0x1B3D48u;
    SET_GPR_U32(ctx, 31, 0x1B3D50u);
    ctx->pc = 0x1B3D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D48u;
            // 0x1b3d4c: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3BE8u;
    if (runtime->hasFunction(0x1B3BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1B3BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D50u; }
        if (ctx->pc != 0x1B3D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3BE8_0x1b3be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D50u; }
        if (ctx->pc != 0x1B3D50u) { return; }
    }
    ctx->pc = 0x1B3D50u;
    // 0x1b3d50: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1b3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1b3d54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b3d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3d58: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3D58u;
    SET_GPR_U32(ctx, 31, 0x1B3D60u);
    ctx->pc = 0x1B3D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D58u;
            // 0x1b3d5c: 0x2484cac4  addiu       $a0, $a0, -0x353C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953668));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D60u; }
        if (ctx->pc != 0x1B3D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D60u; }
        if (ctx->pc != 0x1B3D60u) { return; }
    }
    ctx->pc = 0x1B3D60u;
    // 0x1b3d60: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1b3d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1b3d64: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b3d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3d68: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3D68u;
    SET_GPR_U32(ctx, 31, 0x1B3D70u);
    ctx->pc = 0x1B3D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D68u;
            // 0x1b3d6c: 0x2484cab0  addiu       $a0, $a0, -0x3550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D70u; }
        if (ctx->pc != 0x1B3D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D70u; }
        if (ctx->pc != 0x1B3D70u) { return; }
    }
    ctx->pc = 0x1B3D70u;
    // 0x1b3d70: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1b3d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1b3d74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b3d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3d78: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3D78u;
    SET_GPR_U32(ctx, 31, 0x1B3D80u);
    ctx->pc = 0x1B3D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D78u;
            // 0x1b3d7c: 0x2484cab8  addiu       $a0, $a0, -0x3548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D80u; }
        if (ctx->pc != 0x1B3D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D80u; }
        if (ctx->pc != 0x1B3D80u) { return; }
    }
    ctx->pc = 0x1B3D80u;
    // 0x1b3d80: 0x2604cb88  addiu       $a0, $s0, -0x3478
    ctx->pc = 0x1b3d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953864));
    // 0x1b3d84: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3D84u;
    SET_GPR_U32(ctx, 31, 0x1B3D8Cu);
    ctx->pc = 0x1B3D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D84u;
            // 0x1b3d88: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D8Cu; }
        if (ctx->pc != 0x1B3D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D8Cu; }
        if (ctx->pc != 0x1B3D8Cu) { return; }
    }
    ctx->pc = 0x1B3D8Cu;
    // 0x1b3d8c: 0xc06c39c  jal         func_1B0E70
    ctx->pc = 0x1B3D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B3D94u);
    ctx->pc = 0x1B3D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D8Cu;
            // 0x1b3d90: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E70u;
    if (runtime->hasFunction(0x1B0E70u)) {
        auto targetFn = runtime->lookupFunction(0x1B0E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D94u; }
        if (ctx->pc != 0x1B3D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0E70_0x1b0e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D94u; }
        if (ctx->pc != 0x1B3D94u) { return; }
    }
    ctx->pc = 0x1B3D94u;
    // 0x1b3d94: 0x8e62cb88  lw          $v0, -0x3478($s3)
    ctx->pc = 0x1b3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953864)));
    // 0x1b3d98: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B3D98u;
    {
        const bool branch_taken_0x1b3d98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B3D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D98u;
            // 0x1b3d9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d98) {
            ctx->pc = 0x1B3DECu;
            goto label_1b3dec;
        }
    }
    ctx->pc = 0x1B3DA0u;
    // 0x1b3da0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1b3da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1b3da4: 0x0  nop
    ctx->pc = 0x1b3da4u;
    // NOP
label_1b3da8:
    // 0x1b3da8: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x1b3da8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1b3dac: 0x261052a8  addiu       $s0, $s0, 0x52A8
    ctx->pc = 0x1b3dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21160));
    // 0x1b3db0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b3db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b3db4: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x1b3db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1b3db8: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3DB8u;
    SET_GPR_U32(ctx, 31, 0x1B3DC0u);
    ctx->pc = 0x1B3DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DB8u;
            // 0x1b3dbc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DC0u; }
        if (ctx->pc != 0x1B3DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DC0u; }
        if (ctx->pc != 0x1B3DC0u) { return; }
    }
    ctx->pc = 0x1B3DC0u;
    // 0x1b3dc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3dc4: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x1B3DC4u;
    SET_GPR_U32(ctx, 31, 0x1B3DCCu);
    ctx->pc = 0x1B3DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DC4u;
            // 0x1b3dc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DCCu; }
        if (ctx->pc != 0x1B3DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DCCu; }
        if (ctx->pc != 0x1B3DCCu) { return; }
    }
    ctx->pc = 0x1B3DCCu;
    // 0x1b3dcc: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b3dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b3dd0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b3dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3dd4: 0xc08b58e  jal         func_22D638
    ctx->pc = 0x1B3DD4u;
    SET_GPR_U32(ctx, 31, 0x1B3DDCu);
    ctx->pc = 0x1B3DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DD4u;
            // 0x1b3dd8: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D638u;
    if (runtime->hasFunction(0x22D638u)) {
        auto targetFn = runtime->lookupFunction(0x22D638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DDCu; }
        if (ctx->pc != 0x1B3DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D638_0x22d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DDCu; }
        if (ctx->pc != 0x1B3DDCu) { return; }
    }
    ctx->pc = 0x1B3DDCu;
    // 0x1b3ddc: 0x8e62cb88  lw          $v0, -0x3478($s3)
    ctx->pc = 0x1b3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953864)));
    // 0x1b3de0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b3de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b3de4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B3DE4u;
    {
        const bool branch_taken_0x1b3de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DE4u;
            // 0x1b3de8: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3de4) {
            ctx->pc = 0x1B3DA8u;
            runtime->cooperativeGuestYield();
            goto label_1b3da8;
        }
    }
    ctx->pc = 0x1B3DECu;
label_1b3dec:
    // 0x1b3dec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b3decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3df0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b3df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3df4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b3df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3df8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b3df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E00u;
            // 0x1b3e04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3DA8u: goto label_1b3da8;
            case 0x1B3DECu: goto label_1b3dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3E08u;
}
