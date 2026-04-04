#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5DF0
// Address: 0x1d5df0 - 0x1d5fb0
void sub_001D5DF0_0x1d5df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5DF0_0x1d5df0");
#endif

    ctx->pc = 0x1d5df0u;

    // 0x1d5df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d5df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d5df4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1d5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1d5df8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d5df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d5dfc: 0x2442a430  addiu       $v0, $v0, -0x5BD0
    ctx->pc = 0x1d5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x1d5e00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d5e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d5e04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d5e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d5e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d5e0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d5e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d5e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d5e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5e18: 0xc067cf6  jal         func_19F3D8
    ctx->pc = 0x1D5E18u;
    SET_GPR_U32(ctx, 31, 0x1D5E20u);
    ctx->pc = 0x1D5E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E18u;
            // 0x1d5e1c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    if (runtime->hasFunction(0x19F3D8u)) {
        auto targetFn = runtime->lookupFunction(0x19F3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E20u; }
        if (ctx->pc != 0x1D5E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F3D8_0x19f3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E20u; }
        if (ctx->pc != 0x1D5E20u) { return; }
    }
    ctx->pc = 0x1D5E20u;
    // 0x1d5e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e24: 0xc076856  jal         func_1DA158
    ctx->pc = 0x1D5E24u;
    SET_GPR_U32(ctx, 31, 0x1D5E2Cu);
    ctx->pc = 0x1D5E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E24u;
            // 0x1d5e28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA158u;
    if (runtime->hasFunction(0x1DA158u)) {
        auto targetFn = runtime->lookupFunction(0x1DA158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E2Cu; }
        if (ctx->pc != 0x1D5E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA158_0x1da158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E2Cu; }
        if (ctx->pc != 0x1D5E2Cu) { return; }
    }
    ctx->pc = 0x1D5E2Cu;
    // 0x1d5e2c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1d5e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1d5e30: 0xc076966  jal         func_1DA598
    ctx->pc = 0x1D5E30u;
    SET_GPR_U32(ctx, 31, 0x1D5E38u);
    ctx->pc = 0x1D5E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E30u;
            // 0x1d5e34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA598u;
    if (runtime->hasFunction(0x1DA598u)) {
        auto targetFn = runtime->lookupFunction(0x1DA598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E38u; }
        if (ctx->pc != 0x1D5E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA598_0x1da598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E38u; }
        if (ctx->pc != 0x1D5E38u) { return; }
    }
    ctx->pc = 0x1D5E38u;
    // 0x1d5e38: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1D5E38u;
    SET_GPR_U32(ctx, 31, 0x1D5E40u);
    ctx->pc = 0x1D5E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E38u;
            // 0x1d5e3c: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E40u; }
        if (ctx->pc != 0x1D5E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E40u; }
        if (ctx->pc != 0x1D5E40u) { return; }
    }
    ctx->pc = 0x1D5E40u;
    // 0x1d5e40: 0xc07703a  jal         func_1DC0E8
    ctx->pc = 0x1D5E40u;
    SET_GPR_U32(ctx, 31, 0x1D5E48u);
    ctx->pc = 0x1D5E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E40u;
            // 0x1d5e44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC0E8u;
    if (runtime->hasFunction(0x1DC0E8u)) {
        auto targetFn = runtime->lookupFunction(0x1DC0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E48u; }
        if (ctx->pc != 0x1D5E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC0E8_0x1dc0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E48u; }
        if (ctx->pc != 0x1D5E48u) { return; }
    }
    ctx->pc = 0x1D5E48u;
    // 0x1d5e48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d5e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5e4c: 0x8e05cd5c  lw          $a1, -0x32A4($s0)
    ctx->pc = 0x1d5e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954332)));
    // 0x1d5e50: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x1D5E50u;
    SET_GPR_U32(ctx, 31, 0x1D5E58u);
    ctx->pc = 0x1D5E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E50u;
            // 0x1d5e54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E58u; }
        if (ctx->pc != 0x1D5E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E58u; }
        if (ctx->pc != 0x1D5E58u) { return; }
    }
    ctx->pc = 0x1D5E58u;
    // 0x1d5e58: 0x8e05cd5c  lw          $a1, -0x32A4($s0)
    ctx->pc = 0x1d5e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954332)));
    // 0x1d5e5c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1d5e5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d5e60: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1d5e60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1d5e64: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x1d5e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x1d5e68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5e6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d5e70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d5e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5e74: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d5e78: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1d5e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d5e7c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d5e80: 0x40f809  jalr        $v0
    ctx->pc = 0x1D5E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5E88u);
        ctx->pc = 0x1D5E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E80u;
            // 0x1d5e84: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5E88u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F90u: goto label_1d5f90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E88u; }
            if (ctx->pc != 0x1D5E88u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5E88u;
    // 0x1d5e88: 0x8e05cd5c  lw          $a1, -0x32A4($s0)
    ctx->pc = 0x1d5e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954332)));
    // 0x1d5e8c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1d5e8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d5e90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5e94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d5e98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5e9c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d5ea0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1d5ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1d5ea4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d5ea8: 0x40f809  jalr        $v0
    ctx->pc = 0x1D5EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5EB0u);
        ctx->pc = 0x1D5EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5EA8u;
            // 0x1d5eac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5EB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F90u: goto label_1d5f90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EB0u; }
            if (ctx->pc != 0x1D5EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5EB0u;
    // 0x1d5eb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5eb4: 0xae00cd5c  sw          $zero, -0x32A4($s0)
    ctx->pc = 0x1d5eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954332), GPR_U32(ctx, 0));
    // 0x1d5eb8: 0x8c5001a4  lw          $s0, 0x1A4($v0)
    ctx->pc = 0x1d5eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x1d5ebc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d5ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5ec0: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x1D5EC0u;
    SET_GPR_U32(ctx, 31, 0x1D5EC8u);
    ctx->pc = 0x1D5EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5EC0u;
            // 0x1d5ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EC8u; }
        if (ctx->pc != 0x1D5EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EC8u; }
        if (ctx->pc != 0x1D5EC8u) { return; }
    }
    ctx->pc = 0x1D5EC8u;
    // 0x1d5ec8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1d5ec8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5ecc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5ed0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d5ed4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d5ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ed8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5edc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d5ee0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1d5ee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d5ee4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d5ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d5ee8: 0x40f809  jalr        $v0
    ctx->pc = 0x1D5EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5EF0u);
        ctx->pc = 0x1D5EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5EE8u;
            // 0x1d5eec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5EF0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F90u: goto label_1d5f90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EF0u; }
            if (ctx->pc != 0x1D5EF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5EF0u;
    // 0x1d5ef0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1d5ef0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5ef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5ef8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d5efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d5efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5f04: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d5f08: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1d5f08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1d5f0c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d5f10: 0x40f809  jalr        $v0
    ctx->pc = 0x1D5F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5F18u);
        ctx->pc = 0x1D5F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F10u;
            // 0x1d5f14: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5F18u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F90u: goto label_1d5f90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F18u; }
            if (ctx->pc != 0x1D5F18u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5F18u;
    // 0x1d5f18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5f1c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1d5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d5f20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5F20u;
    {
        const bool branch_taken_0x1d5f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F20u;
            // 0x1d5f24: 0xac4001a4  sw          $zero, 0x1A4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 420), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f20) {
            ctx->pc = 0x1D5F40u;
            goto label_1d5f40;
        }
    }
    ctx->pc = 0x1D5F28u;
    // 0x1d5f28: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1d5f2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d5f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5f30: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1d5f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d5f34: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d5f38: 0x40f809  jalr        $v0
    ctx->pc = 0x1D5F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5F40u);
        ctx->pc = 0x1D5F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F38u;
            // 0x1d5f3c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5F40u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F90u: goto label_1d5f90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F40u; }
            if (ctx->pc != 0x1D5F40u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5F40u;
label_1d5f40:
    // 0x1d5f40: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5f44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5F44u;
    {
        const bool branch_taken_0x1d5f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F44u;
            // 0x1d5f48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f44) {
            ctx->pc = 0x1D5F60u;
            goto label_1d5f60;
        }
    }
    ctx->pc = 0x1D5F4Cu;
    // 0x1d5f4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d5f50: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1d5f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d5f54: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d5f58: 0x40f809  jalr        $v0
    ctx->pc = 0x1D5F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5F60u);
        ctx->pc = 0x1D5F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F58u;
            // 0x1d5f5c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5F60u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F90u: goto label_1d5f90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F60u; }
            if (ctx->pc != 0x1D5F60u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5F60u;
label_1d5f60:
    // 0x1d5f60: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d5f64: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x1d5f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x1d5f68: 0xac40cd58  sw          $zero, -0x32A8($v0)
    ctx->pc = 0x1d5f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954328), GPR_U32(ctx, 0));
    // 0x1d5f6c: 0xc0827f0  jal         func_209FC0
    ctx->pc = 0x1D5F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F74u);
    ctx->pc = 0x1D5F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F6Cu;
            // 0x1d5f70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209FC0u;
    if (runtime->hasFunction(0x209FC0u)) {
        auto targetFn = runtime->lookupFunction(0x209FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F74u; }
        if (ctx->pc != 0x1D5F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209FC0_0x209fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F74u; }
        if (ctx->pc != 0x1D5F74u) { return; }
    }
    ctx->pc = 0x1D5F74u;
    // 0x1d5f74: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1d5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1d5f78: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x1d5f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1d5f7c: 0x2442a770  addiu       $v0, $v0, -0x5890
    ctx->pc = 0x1d5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944624));
    // 0x1d5f80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5F80u;
    {
        const bool branch_taken_0x1d5f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F80u;
            // 0x1d5f84: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f80) {
            ctx->pc = 0x1D5F90u;
            goto label_1d5f90;
        }
    }
    ctx->pc = 0x1D5F88u;
    // 0x1d5f88: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1D5F88u;
    SET_GPR_U32(ctx, 31, 0x1D5F90u);
    ctx->pc = 0x1D5F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F88u;
            // 0x1d5f8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F90u; }
        if (ctx->pc != 0x1D5F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F90u; }
        if (ctx->pc != 0x1D5F90u) { return; }
    }
    ctx->pc = 0x1D5F90u;
label_1d5f90:
    // 0x1d5f90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d5f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5f94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d5f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5f98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5f9c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d5f9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FA4u;
            // 0x1d5fa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F90u: goto label_1d5f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5FACu;
    // 0x1d5fac: 0x0  nop
    ctx->pc = 0x1d5facu;
    // NOP
}
