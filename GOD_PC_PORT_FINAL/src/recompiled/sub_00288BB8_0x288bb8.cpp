#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00288BB8
// Address: 0x288bb8 - 0x288d90
void sub_00288BB8_0x288bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288BB8_0x288bb8");
#endif

    ctx->pc = 0x288bb8u;

    // 0x288bb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x288bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x288bbc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x288bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x288bc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x288bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x288bc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x288bc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288bcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x288bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bd0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x288bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x288bd4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x288bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bd8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x288bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x288bdc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x288bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x288be0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x288be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288be4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x288be4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x288be8: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x288be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x288bec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x288becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x288bf0: 0x3c033e3f  lui         $v1, 0x3E3F
    ctx->pc = 0x288bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15935 << 16));
    // 0x288bf4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x288bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x288bf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x288bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x288bfc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x288bfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x288c00: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x288C00u;
    {
        const bool branch_taken_0x288c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x288C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288C00u;
            // 0x288c04: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c00) {
            ctx->pc = 0x288C20u;
            goto label_288c20;
        }
    }
    ctx->pc = 0x288C08u;
    // 0x288c08: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x288C08u;
    SET_GPR_U32(ctx, 31, 0x288C10u);
    ctx->pc = 0x288C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C08u;
            // 0x288c0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C10u; }
        if (ctx->pc != 0x288C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C10u; }
        if (ctx->pc != 0x288C10u) { return; }
    }
    ctx->pc = 0x288C10u;
    // 0x288c10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288C10u;
    {
        const bool branch_taken_0x288c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288C10u;
            // 0x288c14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c10) {
            ctx->pc = 0x288C24u;
            goto label_288c24;
        }
    }
    ctx->pc = 0x288C18u;
    // 0x288c18: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x288C18u;
    {
        const bool branch_taken_0x288c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288C18u;
            // 0x288c1c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c18) {
            ctx->pc = 0x288D68u;
            goto label_288d68;
        }
    }
    ctx->pc = 0x288C20u;
label_288c20:
    // 0x288c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_288c24:
    // 0x288c24: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288C24u;
    SET_GPR_U32(ctx, 31, 0x288C2Cu);
    ctx->pc = 0x288C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C24u;
            // 0x288c28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C2Cu; }
        if (ctx->pc != 0x288C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C2Cu; }
        if (ctx->pc != 0x288C2Cu) { return; }
    }
    ctx->pc = 0x288C2Cu;
    // 0x288c2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x288c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c34: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288C34u;
    SET_GPR_U32(ctx, 31, 0x288C3Cu);
    ctx->pc = 0x288C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C34u;
            // 0x288c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C3Cu; }
        if (ctx->pc != 0x288C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C3Cu; }
        if (ctx->pc != 0x288C3Cu) { return; }
    }
    ctx->pc = 0x288C3Cu;
    // 0x288c3c: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x288c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x288c40: 0xdc255990  ld          $a1, 0x5990($at)
    ctx->pc = 0x288c40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22928)));
    // 0x288c44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x288c44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c48: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288C48u;
    SET_GPR_U32(ctx, 31, 0x288C50u);
    ctx->pc = 0x288C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C48u;
            // 0x288c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C50u; }
        if (ctx->pc != 0x288C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C50u; }
        if (ctx->pc != 0x288C50u) { return; }
    }
    ctx->pc = 0x288C50u;
    // 0x288c50: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x288c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x288c54: 0xdc255998  ld          $a1, 0x5998($at)
    ctx->pc = 0x288c54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22936)));
    // 0x288c58: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288C58u;
    SET_GPR_U32(ctx, 31, 0x288C60u);
    ctx->pc = 0x288C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C58u;
            // 0x288c5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C60u; }
        if (ctx->pc != 0x288C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C60u; }
        if (ctx->pc != 0x288C60u) { return; }
    }
    ctx->pc = 0x288C60u;
    // 0x288c60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x288c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c64: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288C64u;
    SET_GPR_U32(ctx, 31, 0x288C6Cu);
    ctx->pc = 0x288C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C64u;
            // 0x288c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C6Cu; }
        if (ctx->pc != 0x288C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C6Cu; }
        if (ctx->pc != 0x288C6Cu) { return; }
    }
    ctx->pc = 0x288C6Cu;
    // 0x288c6c: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x288c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x288c70: 0xdc2559a0  ld          $a1, 0x59A0($at)
    ctx->pc = 0x288c70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22944)));
    // 0x288c74: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288C74u;
    SET_GPR_U32(ctx, 31, 0x288C7Cu);
    ctx->pc = 0x288C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C74u;
            // 0x288c78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C7Cu; }
        if (ctx->pc != 0x288C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C7Cu; }
        if (ctx->pc != 0x288C7Cu) { return; }
    }
    ctx->pc = 0x288C7Cu;
    // 0x288c7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x288c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c80: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288C80u;
    SET_GPR_U32(ctx, 31, 0x288C88u);
    ctx->pc = 0x288C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C80u;
            // 0x288c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C88u; }
        if (ctx->pc != 0x288C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C88u; }
        if (ctx->pc != 0x288C88u) { return; }
    }
    ctx->pc = 0x288C88u;
    // 0x288c88: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x288c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x288c8c: 0xdc2559a8  ld          $a1, 0x59A8($at)
    ctx->pc = 0x288c8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22952)));
    // 0x288c90: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288C90u;
    SET_GPR_U32(ctx, 31, 0x288C98u);
    ctx->pc = 0x288C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C90u;
            // 0x288c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C98u; }
        if (ctx->pc != 0x288C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C98u; }
        if (ctx->pc != 0x288C98u) { return; }
    }
    ctx->pc = 0x288C98u;
    // 0x288c98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x288c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c9c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288C9Cu;
    SET_GPR_U32(ctx, 31, 0x288CA4u);
    ctx->pc = 0x288CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C9Cu;
            // 0x288ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CA4u; }
        if (ctx->pc != 0x288CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CA4u; }
        if (ctx->pc != 0x288CA4u) { return; }
    }
    ctx->pc = 0x288CA4u;
    // 0x288ca4: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x288ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x288ca8: 0xdc2559b0  ld          $a1, 0x59B0($at)
    ctx->pc = 0x288ca8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22960)));
    // 0x288cac: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288CACu;
    SET_GPR_U32(ctx, 31, 0x288CB4u);
    ctx->pc = 0x288CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288CACu;
            // 0x288cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CB4u; }
        if (ctx->pc != 0x288CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CB4u; }
        if (ctx->pc != 0x288CB4u) { return; }
    }
    ctx->pc = 0x288CB4u;
    // 0x288cb4: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x288CB4u;
    {
        const bool branch_taken_0x288cb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x288CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288CB4u;
            // 0x288cb8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288cb4) {
            ctx->pc = 0x288CF8u;
            goto label_288cf8;
        }
    }
    ctx->pc = 0x288CBCu;
    // 0x288cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cc0: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288CC0u;
    SET_GPR_U32(ctx, 31, 0x288CC8u);
    ctx->pc = 0x288CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288CC0u;
            // 0x288cc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CC8u; }
        if (ctx->pc != 0x288CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CC8u; }
        if (ctx->pc != 0x288CC8u) { return; }
    }
    ctx->pc = 0x288CC8u;
    // 0x288cc8: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x288cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x288ccc: 0xdc2559b8  ld          $a1, 0x59B8($at)
    ctx->pc = 0x288cccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22968)));
    // 0x288cd0: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288CD0u;
    SET_GPR_U32(ctx, 31, 0x288CD8u);
    ctx->pc = 0x288CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288CD0u;
            // 0x288cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CD8u; }
        if (ctx->pc != 0x288CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CD8u; }
        if (ctx->pc != 0x288CD8u) { return; }
    }
    ctx->pc = 0x288CD8u;
    // 0x288cd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x288cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cdc: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288CDCu;
    SET_GPR_U32(ctx, 31, 0x288CE4u);
    ctx->pc = 0x288CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288CDCu;
            // 0x288ce0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CE4u; }
        if (ctx->pc != 0x288CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CE4u; }
        if (ctx->pc != 0x288CE4u) { return; }
    }
    ctx->pc = 0x288CE4u;
    // 0x288ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ce8: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288CE8u;
    SET_GPR_U32(ctx, 31, 0x288CF0u);
    ctx->pc = 0x288CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288CE8u;
            // 0x288cec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CF0u; }
        if (ctx->pc != 0x288CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CF0u; }
        if (ctx->pc != 0x288CF0u) { return; }
    }
    ctx->pc = 0x288CF0u;
    // 0x288cf0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x288CF0u;
    {
        const bool branch_taken_0x288cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288CF0u;
            // 0x288cf4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288cf0) {
            ctx->pc = 0x288D6Cu;
            goto label_288d6c;
        }
    }
    ctx->pc = 0x288CF8u;
label_288cf8:
    // 0x288cf8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x288cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x288cfc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x288cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x288d00: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288D00u;
    SET_GPR_U32(ctx, 31, 0x288D08u);
    ctx->pc = 0x288D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288D00u;
            // 0x288d04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D08u; }
        if (ctx->pc != 0x288D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D08u; }
        if (ctx->pc != 0x288D08u) { return; }
    }
    ctx->pc = 0x288D08u;
    // 0x288d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x288d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d10: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288D10u;
    SET_GPR_U32(ctx, 31, 0x288D18u);
    ctx->pc = 0x288D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288D10u;
            // 0x288d14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D18u; }
        if (ctx->pc != 0x288D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D18u; }
        if (ctx->pc != 0x288D18u) { return; }
    }
    ctx->pc = 0x288D18u;
    // 0x288d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d1c: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288D1Cu;
    SET_GPR_U32(ctx, 31, 0x288D24u);
    ctx->pc = 0x288D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288D1Cu;
            // 0x288d20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D24u; }
        if (ctx->pc != 0x288D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D24u; }
        if (ctx->pc != 0x288D24u) { return; }
    }
    ctx->pc = 0x288D24u;
    // 0x288d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d28: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288D28u;
    SET_GPR_U32(ctx, 31, 0x288D30u);
    ctx->pc = 0x288D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288D28u;
            // 0x288d2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D30u; }
        if (ctx->pc != 0x288D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D30u; }
        if (ctx->pc != 0x288D30u) { return; }
    }
    ctx->pc = 0x288D30u;
    // 0x288d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x288d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d34: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288D34u;
    SET_GPR_U32(ctx, 31, 0x288D3Cu);
    ctx->pc = 0x288D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288D34u;
            // 0x288d38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D3Cu; }
        if (ctx->pc != 0x288D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D3Cu; }
        if (ctx->pc != 0x288D3Cu) { return; }
    }
    ctx->pc = 0x288D3Cu;
    // 0x288d3c: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x288d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x288d40: 0xdc2559c0  ld          $a1, 0x59C0($at)
    ctx->pc = 0x288d40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22976)));
    // 0x288d44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d48: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288D48u;
    SET_GPR_U32(ctx, 31, 0x288D50u);
    ctx->pc = 0x288D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288D48u;
            // 0x288d4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D50u; }
        if (ctx->pc != 0x288D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D50u; }
        if (ctx->pc != 0x288D50u) { return; }
    }
    ctx->pc = 0x288D50u;
    // 0x288d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d54: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288D54u;
    SET_GPR_U32(ctx, 31, 0x288D5Cu);
    ctx->pc = 0x288D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288D54u;
            // 0x288d58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D5Cu; }
        if (ctx->pc != 0x288D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D5Cu; }
        if (ctx->pc != 0x288D5Cu) { return; }
    }
    ctx->pc = 0x288D5Cu;
    // 0x288d5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d60: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288D60u;
    SET_GPR_U32(ctx, 31, 0x288D68u);
    ctx->pc = 0x288D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288D60u;
            // 0x288d64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D68u; }
        if (ctx->pc != 0x288D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D68u; }
        if (ctx->pc != 0x288D68u) { return; }
    }
    ctx->pc = 0x288D68u;
label_288d68:
    // 0x288d68: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x288d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_288d6c:
    // 0x288d6c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x288d6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288d70: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x288d70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288d74: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x288d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288d78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x288d78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288d7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x288d7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288d80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x288d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288d84: 0x3e00008  jr          $ra
    ctx->pc = 0x288D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D84u;
            // 0x288d88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x288C20u: goto label_288c20;
            case 0x288C24u: goto label_288c24;
            case 0x288CF8u: goto label_288cf8;
            case 0x288D68u: goto label_288d68;
            case 0x288D6Cu: goto label_288d6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x288D8Cu;
    // 0x288d8c: 0x0  nop
    ctx->pc = 0x288d8cu;
    // NOP
}
