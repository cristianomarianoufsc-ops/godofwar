#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00287E00
// Address: 0x287e00 - 0x288050
void sub_00287E00_0x287e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287E00_0x287e00");
#endif

    ctx->pc = 0x287e00u;

    // 0x287e00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x287e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x287e04: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x287e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x287e08: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x287e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x287e0c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x287e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x287e10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x287e10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e14: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x287e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x287e18: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x287e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x287e1c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x287e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x287e20: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x287e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x287e24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x287e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x287e28: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x287e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e2c: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x287e2cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x287e30: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x287e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x287e34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x287e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x287e38: 0x3c023e3f  lui         $v0, 0x3E3F
    ctx->pc = 0x287e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15935 << 16));
    // 0x287e3c: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x287e3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x287e40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x287e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287e44: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x287e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x287e48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x287E48u;
    {
        const bool branch_taken_0x287e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287E48u;
            // 0x287e4c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e48) {
            ctx->pc = 0x287E70u;
            goto label_287e70;
        }
    }
    ctx->pc = 0x287E50u;
    // 0x287e50: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x287E50u;
    SET_GPR_U32(ctx, 31, 0x287E58u);
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E58u; }
        if (ctx->pc != 0x287E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E58u; }
        if (ctx->pc != 0x287E58u) { return; }
    }
    ctx->pc = 0x287E58u;
    // 0x287e58: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287E58u;
    {
        const bool branch_taken_0x287e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287E58u;
            // 0x287e5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e58) {
            ctx->pc = 0x287E74u;
            goto label_287e74;
        }
    }
    ctx->pc = 0x287E60u;
    // 0x287e60: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x287e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x287e64: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x287e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x287e68: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x287E68u;
    {
        const bool branch_taken_0x287e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287E68u;
            // 0x287e6c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e68) {
            ctx->pc = 0x288028u;
            goto label_288028;
        }
    }
    ctx->pc = 0x287E70u;
label_287e70:
    // 0x287e70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287e74:
    // 0x287e74: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287E74u;
    SET_GPR_U32(ctx, 31, 0x287E7Cu);
    ctx->pc = 0x287E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287E74u;
            // 0x287e78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E7Cu; }
        if (ctx->pc != 0x287E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E7Cu; }
        if (ctx->pc != 0x287E7Cu) { return; }
    }
    ctx->pc = 0x287E7Cu;
    // 0x287e7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x287e7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e80: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x287e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287e84: 0xdc2558b8  ld          $a1, 0x58B8($at)
    ctx->pc = 0x287e84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22712)));
    // 0x287e88: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287E88u;
    SET_GPR_U32(ctx, 31, 0x287E90u);
    ctx->pc = 0x287E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287E88u;
            // 0x287e8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E90u; }
        if (ctx->pc != 0x287E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287E90u; }
        if (ctx->pc != 0x287E90u) { return; }
    }
    ctx->pc = 0x287E90u;
    // 0x287e90: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x287e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287e94: 0xdc2558c0  ld          $a1, 0x58C0($at)
    ctx->pc = 0x287e94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22720)));
    // 0x287e98: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x287E98u;
    SET_GPR_U32(ctx, 31, 0x287EA0u);
    ctx->pc = 0x287E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287E98u;
            // 0x287e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EA0u; }
        if (ctx->pc != 0x287EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EA0u; }
        if (ctx->pc != 0x287EA0u) { return; }
    }
    ctx->pc = 0x287EA0u;
    // 0x287ea0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x287ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ea4: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287EA4u;
    SET_GPR_U32(ctx, 31, 0x287EACu);
    ctx->pc = 0x287EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287EA4u;
            // 0x287ea8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EACu; }
        if (ctx->pc != 0x287EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EACu; }
        if (ctx->pc != 0x287EACu) { return; }
    }
    ctx->pc = 0x287EACu;
    // 0x287eac: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x287eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287eb0: 0xdc2558c8  ld          $a1, 0x58C8($at)
    ctx->pc = 0x287eb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22728)));
    // 0x287eb4: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x287EB4u;
    SET_GPR_U32(ctx, 31, 0x287EBCu);
    ctx->pc = 0x287EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287EB4u;
            // 0x287eb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EBCu; }
        if (ctx->pc != 0x287EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EBCu; }
        if (ctx->pc != 0x287EBCu) { return; }
    }
    ctx->pc = 0x287EBCu;
    // 0x287ebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x287ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ec0: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287EC0u;
    SET_GPR_U32(ctx, 31, 0x287EC8u);
    ctx->pc = 0x287EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287EC0u;
            // 0x287ec4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EC8u; }
        if (ctx->pc != 0x287EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EC8u; }
        if (ctx->pc != 0x287EC8u) { return; }
    }
    ctx->pc = 0x287EC8u;
    // 0x287ec8: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x287ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287ecc: 0xdc2558d0  ld          $a1, 0x58D0($at)
    ctx->pc = 0x287eccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22736)));
    // 0x287ed0: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x287ED0u;
    SET_GPR_U32(ctx, 31, 0x287ED8u);
    ctx->pc = 0x287ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287ED0u;
            // 0x287ed4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287ED8u; }
        if (ctx->pc != 0x287ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287ED8u; }
        if (ctx->pc != 0x287ED8u) { return; }
    }
    ctx->pc = 0x287ED8u;
    // 0x287ed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x287ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287edc: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287EDCu;
    SET_GPR_U32(ctx, 31, 0x287EE4u);
    ctx->pc = 0x287EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287EDCu;
            // 0x287ee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EE4u; }
        if (ctx->pc != 0x287EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EE4u; }
        if (ctx->pc != 0x287EE4u) { return; }
    }
    ctx->pc = 0x287EE4u;
    // 0x287ee4: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x287ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287ee8: 0xdc2558d8  ld          $a1, 0x58D8($at)
    ctx->pc = 0x287ee8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22744)));
    // 0x287eec: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x287EECu;
    SET_GPR_U32(ctx, 31, 0x287EF4u);
    ctx->pc = 0x287EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287EECu;
            // 0x287ef0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EF4u; }
        if (ctx->pc != 0x287EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287EF4u; }
        if (ctx->pc != 0x287EF4u) { return; }
    }
    ctx->pc = 0x287EF4u;
    // 0x287ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x287ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ef8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287EF8u;
    SET_GPR_U32(ctx, 31, 0x287F00u);
    ctx->pc = 0x287EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287EF8u;
            // 0x287efc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F00u; }
        if (ctx->pc != 0x287F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F00u; }
        if (ctx->pc != 0x287F00u) { return; }
    }
    ctx->pc = 0x287F00u;
    // 0x287f00: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x287f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x287f04: 0xdc2558e0  ld          $a1, 0x58E0($at)
    ctx->pc = 0x287f04u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22752)));
    // 0x287f08: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x287F08u;
    SET_GPR_U32(ctx, 31, 0x287F10u);
    ctx->pc = 0x287F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287F08u;
            // 0x287f0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F10u; }
        if (ctx->pc != 0x287F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F10u; }
        if (ctx->pc != 0x287F10u) { return; }
    }
    ctx->pc = 0x287F10u;
    // 0x287f10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x287f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f14: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287F14u;
    SET_GPR_U32(ctx, 31, 0x287F1Cu);
    ctx->pc = 0x287F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287F14u;
            // 0x287f18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F1Cu; }
        if (ctx->pc != 0x287F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F1Cu; }
        if (ctx->pc != 0x287F1Cu) { return; }
    }
    ctx->pc = 0x287F1Cu;
    // 0x287f1c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x287f1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f20: 0x3c023fd3  lui         $v0, 0x3FD3
    ctx->pc = 0x287f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16339 << 16));
    // 0x287f24: 0x34423332  ori         $v0, $v0, 0x3332
    ctx->pc = 0x287f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13106);
    // 0x287f28: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x287f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x287f2c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x287F2Cu;
    {
        const bool branch_taken_0x287f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287F2Cu;
            // 0x287f30: 0x3c023fe9  lui         $v0, 0x3FE9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f2c) {
            ctx->pc = 0x287F8Cu;
            goto label_287f8c;
        }
    }
    ctx->pc = 0x287F34u;
    // 0x287f34: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x287f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x287f38: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x287f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x287f3c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287F3Cu;
    SET_GPR_U32(ctx, 31, 0x287F44u);
    ctx->pc = 0x287F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287F3Cu;
            // 0x287f40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F44u; }
        if (ctx->pc != 0x287F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F44u; }
        if (ctx->pc != 0x287F44u) { return; }
    }
    ctx->pc = 0x287F44u;
    // 0x287f44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x287f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x287f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f4c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287F4Cu;
    SET_GPR_U32(ctx, 31, 0x287F54u);
    ctx->pc = 0x287F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287F4Cu;
            // 0x287f50: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F54u; }
        if (ctx->pc != 0x287F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F54u; }
        if (ctx->pc != 0x287F54u) { return; }
    }
    ctx->pc = 0x287F54u;
    // 0x287f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f5c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287F5Cu;
    SET_GPR_U32(ctx, 31, 0x287F64u);
    ctx->pc = 0x287F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287F5Cu;
            // 0x287f60: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F64u; }
        if (ctx->pc != 0x287F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F64u; }
        if (ctx->pc != 0x287F64u) { return; }
    }
    ctx->pc = 0x287F64u;
    // 0x287f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f68: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287F68u;
    SET_GPR_U32(ctx, 31, 0x287F70u);
    ctx->pc = 0x287F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287F68u;
            // 0x287f6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F70u; }
        if (ctx->pc != 0x287F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F70u; }
        if (ctx->pc != 0x287F70u) { return; }
    }
    ctx->pc = 0x287F70u;
    // 0x287f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f74: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287F74u;
    SET_GPR_U32(ctx, 31, 0x287F7Cu);
    ctx->pc = 0x287F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287F74u;
            // 0x287f78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F7Cu; }
        if (ctx->pc != 0x287F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287F7Cu; }
        if (ctx->pc != 0x287F7Cu) { return; }
    }
    ctx->pc = 0x287F7Cu;
    // 0x287f7c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x287f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x287f80: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x287f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x287f84: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x287F84u;
    {
        const bool branch_taken_0x287f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287f84) {
            ctx->pc = 0x28801Cu;
            goto label_28801c;
        }
    }
    ctx->pc = 0x287F8Cu;
label_287f8c:
    // 0x287f8c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x287f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x287f90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287F90u;
    {
        const bool branch_taken_0x287f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287F90u;
            // 0x287f94: 0x3c02ffe0  lui         $v0, 0xFFE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f90) {
            ctx->pc = 0x287FA8u;
            goto label_287fa8;
        }
    }
    ctx->pc = 0x287F98u;
    // 0x287f98: 0x3411ff48  ori         $s1, $zero, 0xFF48
    ctx->pc = 0x287f98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65352);
    // 0x287f9c: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x287f9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x287fa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x287FA0u;
    {
        const bool branch_taken_0x287fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287fa0) {
            ctx->pc = 0x287FB0u;
            goto label_287fb0;
        }
    }
    ctx->pc = 0x287FA8u;
label_287fa8:
    // 0x287fa8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x287fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x287fac: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x287facu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_287fb0:
    // 0x287fb0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x287fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x287fb4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x287fb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x287fb8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287FB8u;
    SET_GPR_U32(ctx, 31, 0x287FC0u);
    ctx->pc = 0x287FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287FB8u;
            // 0x287fbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FC0u; }
        if (ctx->pc != 0x287FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FC0u; }
        if (ctx->pc != 0x287FC0u) { return; }
    }
    ctx->pc = 0x287FC0u;
    // 0x287fc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fc4: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287FC4u;
    SET_GPR_U32(ctx, 31, 0x287FCCu);
    ctx->pc = 0x287FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287FC4u;
            // 0x287fc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FCCu; }
        if (ctx->pc != 0x287FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FCCu; }
        if (ctx->pc != 0x287FCCu) { return; }
    }
    ctx->pc = 0x287FCCu;
    // 0x287fcc: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x287fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x287fd0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x287fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x287fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fd8: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287FD8u;
    SET_GPR_U32(ctx, 31, 0x287FE0u);
    ctx->pc = 0x287FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287FD8u;
            // 0x287fdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FE0u; }
        if (ctx->pc != 0x287FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FE0u; }
        if (ctx->pc != 0x287FE0u) { return; }
    }
    ctx->pc = 0x287FE0u;
    // 0x287fe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x287fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fe4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x287fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fe8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287FE8u;
    SET_GPR_U32(ctx, 31, 0x287FF0u);
    ctx->pc = 0x287FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287FE8u;
            // 0x287fec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FF0u; }
        if (ctx->pc != 0x287FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287FF0u; }
        if (ctx->pc != 0x287FF0u) { return; }
    }
    ctx->pc = 0x287FF0u;
    // 0x287ff0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x287ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ff4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ff8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x287FF8u;
    SET_GPR_U32(ctx, 31, 0x288000u);
    ctx->pc = 0x287FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287FF8u;
            // 0x287ffc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288000u; }
        if (ctx->pc != 0x288000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288000u; }
        if (ctx->pc != 0x288000u) { return; }
    }
    ctx->pc = 0x288000u;
    // 0x288000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288004: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288004u;
    SET_GPR_U32(ctx, 31, 0x28800Cu);
    ctx->pc = 0x288008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288004u;
            // 0x288008: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28800Cu; }
        if (ctx->pc != 0x28800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28800Cu; }
        if (ctx->pc != 0x28800Cu) { return; }
    }
    ctx->pc = 0x28800Cu;
    // 0x28800c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28800cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288010: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288010u;
    SET_GPR_U32(ctx, 31, 0x288018u);
    ctx->pc = 0x288014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288010u;
            // 0x288014: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288018u; }
        if (ctx->pc != 0x288018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288018u; }
        if (ctx->pc != 0x288018u) { return; }
    }
    ctx->pc = 0x288018u;
    // 0x288018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28801c:
    // 0x28801c: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28801Cu;
    SET_GPR_U32(ctx, 31, 0x288024u);
    ctx->pc = 0x288020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28801Cu;
            // 0x288020: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288024u; }
        if (ctx->pc != 0x288024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288024u; }
        if (ctx->pc != 0x288024u) { return; }
    }
    ctx->pc = 0x288024u;
    // 0x288024: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x288024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_288028:
    // 0x288028: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x288028u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28802c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x28802cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288030: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x288030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288034: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x288034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288038: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x288038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28803c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28803cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288040: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x288040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288044: 0x3e00008  jr          $ra
    ctx->pc = 0x288044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288044u;
            // 0x288048: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x287E70u: goto label_287e70;
            case 0x287E74u: goto label_287e74;
            case 0x287F8Cu: goto label_287f8c;
            case 0x287FA8u: goto label_287fa8;
            case 0x287FB0u: goto label_287fb0;
            case 0x28801Cu: goto label_28801c;
            case 0x288028u: goto label_288028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28804Cu;
    // 0x28804c: 0x0  nop
    ctx->pc = 0x28804cu;
    // NOP
}
