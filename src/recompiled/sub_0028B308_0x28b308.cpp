#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B308
// Address: 0x28b308 - 0x28b648
void sub_0028B308_0x28b308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B308_0x28b308");
#endif

    ctx->pc = 0x28b308u;

    // 0x28b308: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28b308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28b30c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28b30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28b310: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x28b310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x28b314: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x28b314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b318: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x28b318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x28b31c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28b31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b320: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x28b320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x28b324: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28b324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b328: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x28b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x28b32c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x28b32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b330: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28b330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28b334: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28b334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b338: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B338u;
    {
        const bool branch_taken_0x28b338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B338u;
            // 0x28b33c: 0xa5980b  movn        $s3, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b338) {
            ctx->pc = 0x28B348u;
            goto label_28b348;
        }
    }
    ctx->pc = 0x28B340u;
    // 0x28b340: 0x128000b8  beqz        $s4, . + 4 + (0xB8 << 2)
    ctx->pc = 0x28B340u;
    {
        const bool branch_taken_0x28b340 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B340u;
            // 0x28b344: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b340) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B348u;
label_28b348:
    // 0x28b348: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x28b348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x28b34c: 0x108000af  beqz        $a0, . + 4 + (0xAF << 2)
    ctx->pc = 0x28B34Cu;
    {
        const bool branch_taken_0x28b34c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b34c) {
            ctx->pc = 0x28B60Cu;
            goto label_28b60c;
        }
    }
    ctx->pc = 0x28B354u;
    // 0x28b354: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x28B354u;
    SET_GPR_U32(ctx, 31, 0x28B35Cu);
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B35Cu; }
        if (ctx->pc != 0x28B35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B35Cu; }
        if (ctx->pc != 0x28B35Cu) { return; }
    }
    ctx->pc = 0x28B35Cu;
    // 0x28b35c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x28b35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x28b360: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x28B360u;
    {
        const bool branch_taken_0x28b360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B360u;
            // 0x28b364: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b360) {
            ctx->pc = 0x28B60Cu;
            goto label_28b60c;
        }
    }
    ctx->pc = 0x28B368u;
    // 0x28b368: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x28b368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x28b36c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x28B36Cu;
    SET_GPR_U32(ctx, 31, 0x28B374u);
    ctx->pc = 0x28B370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B36Cu;
            // 0x28b370: 0x24a55fa0  addiu       $a1, $a1, 0x5FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B374u; }
        if (ctx->pc != 0x28B374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B374u; }
        if (ctx->pc != 0x28B374u) { return; }
    }
    ctx->pc = 0x28B374u;
    // 0x28b374: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x28B374u;
    {
        const bool branch_taken_0x28b374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b374) {
            ctx->pc = 0x28B378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B374u;
            // 0x28b378: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B3E0u;
            goto label_28b3e0;
        }
    }
    ctx->pc = 0x28B37Cu;
    // 0x28b37c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x28b37cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b380: 0x120000a8  beqz        $s0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x28B380u;
    {
        const bool branch_taken_0x28b380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B380u;
            // 0x28b384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b380) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B388u;
    // 0x28b388: 0x2462ff7f  addiu       $v0, $v1, -0x81
    ctx->pc = 0x28b388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967167));
    // 0x28b38c: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x28b38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x28b390: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B390u;
    {
        const bool branch_taken_0x28b390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B390u;
            // 0x28b394: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b390) {
            ctx->pc = 0x28B3A8u;
            goto label_28b3a8;
        }
    }
    ctx->pc = 0x28B398u;
    // 0x28b398: 0x2462ff20  addiu       $v0, $v1, -0xE0
    ctx->pc = 0x28b398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
    // 0x28b39c: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x28b39cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x28b3a0: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x28B3A0u;
    {
        const bool branch_taken_0x28b3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3A0u;
            // 0x28b3a4: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3a0) {
            ctx->pc = 0x28B60Cu;
            goto label_28b60c;
        }
    }
    ctx->pc = 0x28B3A8u;
label_28b3a8:
    // 0x28b3a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B3A8u;
    {
        const bool branch_taken_0x28b3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3A8u;
            // 0x28b3ac: 0x92060001  lbu         $a2, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3a8) {
            ctx->pc = 0x28B3B8u;
            goto label_28b3b8;
        }
    }
    ctx->pc = 0x28B3B0u;
label_28b3b0:
    // 0x28b3b0: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x28B3B0u;
    {
        const bool branch_taken_0x28b3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3B0u;
            // 0x28b3b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3b0) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B3B8u;
label_28b3b8:
    // 0x28b3b8: 0x24c2ffc0  addiu       $v0, $a2, -0x40
    ctx->pc = 0x28b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
    // 0x28b3bc: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x28b3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x28b3c0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28B3C0u;
    {
        const bool branch_taken_0x28b3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3C0u;
            // 0x28b3c4: 0x31a00  sll         $v1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3c0) {
            ctx->pc = 0x28B428u;
            goto label_28b428;
        }
    }
    ctx->pc = 0x28B3C8u;
    // 0x28b3c8: 0x24c2ff80  addiu       $v0, $a2, -0x80
    ctx->pc = 0x28b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x28b3cc: 0x2c42007d  sltiu       $v0, $v0, 0x7D
    ctx->pc = 0x28b3ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x28b3d0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28B3D0u;
    {
        const bool branch_taken_0x28b3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3D0u;
            // 0x28b3d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3d0) {
            ctx->pc = 0x28B42Cu;
            goto label_28b42c;
        }
    }
    ctx->pc = 0x28B3D8u;
    // 0x28b3d8: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x28B3D8u;
    {
        const bool branch_taken_0x28b3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3D8u;
            // 0x28b3dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3d8) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B3E0u;
label_28b3e0:
    // 0x28b3e0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x28b3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x28b3e4: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x28B3E4u;
    SET_GPR_U32(ctx, 31, 0x28B3ECu);
    ctx->pc = 0x28B3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3E4u;
            // 0x28b3e8: 0x24a55fa8  addiu       $a1, $a1, 0x5FA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B3ECu; }
        if (ctx->pc != 0x28B3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B3ECu; }
        if (ctx->pc != 0x28B3ECu) { return; }
    }
    ctx->pc = 0x28B3ECu;
    // 0x28b3ec: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28B3ECu;
    {
        const bool branch_taken_0x28b3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b3ec) {
            ctx->pc = 0x28B3F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3ECu;
            // 0x28b3f0: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B438u;
            goto label_28b438;
        }
    }
    ctx->pc = 0x28B3F4u;
    // 0x28b3f4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x28b3f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b3f8: 0x1200008a  beqz        $s0, . + 4 + (0x8A << 2)
    ctx->pc = 0x28B3F8u;
    {
        const bool branch_taken_0x28b3f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B3F8u;
            // 0x28b3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3f8) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B400u;
    // 0x28b400: 0x2462ff5f  addiu       $v0, $v1, -0xA1
    ctx->pc = 0x28b400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967135));
    // 0x28b404: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x28b404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x28b408: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x28B408u;
    {
        const bool branch_taken_0x28b408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B408u;
            // 0x28b40c: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b408) {
            ctx->pc = 0x28B60Cu;
            goto label_28b60c;
        }
    }
    ctx->pc = 0x28B410u;
    // 0x28b410: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28B410u;
    {
        const bool branch_taken_0x28b410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B410u;
            // 0x28b414: 0x92060001  lbu         $a2, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b410) {
            ctx->pc = 0x28B3B0u;
            runtime->cooperativeGuestYield();
            goto label_28b3b0;
        }
    }
    ctx->pc = 0x28B418u;
    // 0x28b418: 0x24c2ff5f  addiu       $v0, $a2, -0xA1
    ctx->pc = 0x28b418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967135));
    // 0x28b41c: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x28b41cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x28b420: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x28B420u;
    {
        const bool branch_taken_0x28b420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B420u;
            // 0x28b424: 0x31a00  sll         $v1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b420) {
            ctx->pc = 0x28B3B0u;
            runtime->cooperativeGuestYield();
            goto label_28b3b0;
        }
    }
    ctx->pc = 0x28B428u;
label_28b428:
    // 0x28b428: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28b42c:
    // 0x28b42c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x28b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28b430: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x28B430u;
    {
        const bool branch_taken_0x28b430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B430u;
            // 0x28b434: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b430) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B438u;
label_28b438:
    // 0x28b438: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x28b438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x28b43c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x28B43Cu;
    SET_GPR_U32(ctx, 31, 0x28B444u);
    ctx->pc = 0x28B440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B43Cu;
            // 0x28b440: 0x24a55fb0  addiu       $a1, $a1, 0x5FB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B444u; }
        if (ctx->pc != 0x28B444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B444u; }
        if (ctx->pc != 0x28B444u) { return; }
    }
    ctx->pc = 0x28B444u;
    // 0x28b444: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x28B444u;
    {
        const bool branch_taken_0x28b444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b444) {
            ctx->pc = 0x28B60Cu;
            goto label_28b60c;
        }
    }
    ctx->pc = 0x28B44Cu;
    // 0x28b44c: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B44Cu;
    {
        const bool branch_taken_0x28b44c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b44c) {
            ctx->pc = 0x28B450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B44Cu;
            // 0x28b450: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B460u;
            goto label_28b460;
        }
    }
    ctx->pc = 0x28B454u;
    // 0x28b454: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x28b454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x28b458: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x28B458u;
    {
        const bool branch_taken_0x28b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B458u;
            // 0x28b45c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b458) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B460u;
label_28b460:
    // 0x28b460: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x28b460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b464: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28b464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b46c: 0x1280ffd0  beqz        $s4, . + 4 + (-0x30 << 2)
    ctx->pc = 0x28B46Cu;
    {
        const bool branch_taken_0x28b46c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B46Cu;
            // 0x28b470: 0x2480a  movz        $t1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b46c) {
            ctx->pc = 0x28B3B0u;
            runtime->cooperativeGuestYield();
            goto label_28b3b0;
        }
    }
    ctx->pc = 0x28B474u;
    // 0x28b474: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x28b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_28b478:
    // 0x28b478: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x28b478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28b47c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x28b47cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b480: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x28B480u;
    {
        const bool branch_taken_0x28b480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28B484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B480u;
            // 0x28b484: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b480) {
            ctx->pc = 0x28B514u;
            goto label_28b514;
        }
    }
    ctx->pc = 0x28B488u;
    // 0x28b488: 0x28820029  slti        $v0, $a0, 0x29
    ctx->pc = 0x28b488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x28b48c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28B48Cu;
    {
        const bool branch_taken_0x28b48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B48Cu;
            // 0x28b490: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b48c) {
            ctx->pc = 0x28B4C4u;
            goto label_28b4c4;
        }
    }
    ctx->pc = 0x28B494u;
    // 0x28b494: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28B494u;
    {
        const bool branch_taken_0x28b494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B494u;
            // 0x28b498: 0x2882001c  slti        $v0, $a0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)28) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b494) {
            ctx->pc = 0x28B4FCu;
            goto label_28b4fc;
        }
    }
    ctx->pc = 0x28B49Cu;
    // 0x28b49c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B49Cu;
    {
        const bool branch_taken_0x28b49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B49Cu;
            // 0x28b4a0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b49c) {
            ctx->pc = 0x28B4B4u;
            goto label_28b4b4;
        }
    }
    ctx->pc = 0x28B4A4u;
    // 0x28b4a4: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x28B4A4u;
    {
        const bool branch_taken_0x28b4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4A4u;
            // 0x28b4a8: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4a4) {
            ctx->pc = 0x28B52Cu;
            goto label_28b52c;
        }
    }
    ctx->pc = 0x28B4ACu;
    // 0x28b4ac: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x28B4ACu;
    {
        const bool branch_taken_0x28b4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4ACu;
            // 0x28b4b0: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4ac) {
            ctx->pc = 0x28B534u;
            goto label_28b534;
        }
    }
    ctx->pc = 0x28B4B4u;
label_28b4b4:
    // 0x28b4b4: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28B4B4u;
    {
        const bool branch_taken_0x28b4b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4B4u;
            // 0x28b4b8: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4b4) {
            ctx->pc = 0x28B504u;
            goto label_28b504;
        }
    }
    ctx->pc = 0x28B4BCu;
    // 0x28b4bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x28B4BCu;
    {
        const bool branch_taken_0x28b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4BCu;
            // 0x28b4c0: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4bc) {
            ctx->pc = 0x28B534u;
            goto label_28b534;
        }
    }
    ctx->pc = 0x28B4C4u;
label_28b4c4:
    // 0x28b4c4: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x28b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x28b4c8: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28B4C8u;
    {
        const bool branch_taken_0x28b4c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4C8u;
            // 0x28b4cc: 0x28820043  slti        $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4c8) {
            ctx->pc = 0x28B51Cu;
            goto label_28b51c;
        }
    }
    ctx->pc = 0x28B4D0u;
    // 0x28b4d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B4D0u;
    {
        const bool branch_taken_0x28b4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4D0u;
            // 0x28b4d4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4d0) {
            ctx->pc = 0x28B4E8u;
            goto label_28b4e8;
        }
    }
    ctx->pc = 0x28B4D8u;
    // 0x28b4d8: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28B4D8u;
    {
        const bool branch_taken_0x28b4d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4D8u;
            // 0x28b4dc: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4d8) {
            ctx->pc = 0x28B50Cu;
            goto label_28b50c;
        }
    }
    ctx->pc = 0x28B4E0u;
    // 0x28b4e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28B4E0u;
    {
        const bool branch_taken_0x28b4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4E0u;
            // 0x28b4e4: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4e0) {
            ctx->pc = 0x28B534u;
            goto label_28b534;
        }
    }
    ctx->pc = 0x28B4E8u;
label_28b4e8:
    // 0x28b4e8: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x28b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x28b4ec: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28B4ECu;
    {
        const bool branch_taken_0x28b4ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4ECu;
            // 0x28b4f0: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4ec) {
            ctx->pc = 0x28B524u;
            goto label_28b524;
        }
    }
    ctx->pc = 0x28B4F4u;
    // 0x28b4f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28B4F4u;
    {
        const bool branch_taken_0x28b4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4F4u;
            // 0x28b4f8: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4f4) {
            ctx->pc = 0x28B534u;
            goto label_28b534;
        }
    }
    ctx->pc = 0x28B4FCu;
label_28b4fc:
    // 0x28b4fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28B4FCu;
    {
        const bool branch_taken_0x28b4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B4FCu;
            // 0x28b500: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4fc) {
            ctx->pc = 0x28B544u;
            goto label_28b544;
        }
    }
    ctx->pc = 0x28B504u;
label_28b504:
    // 0x28b504: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28B504u;
    {
        const bool branch_taken_0x28b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B504u;
            // 0x28b508: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b504) {
            ctx->pc = 0x28B544u;
            goto label_28b544;
        }
    }
    ctx->pc = 0x28B50Cu;
label_28b50c:
    // 0x28b50c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28B50Cu;
    {
        const bool branch_taken_0x28b50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B50Cu;
            // 0x28b510: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b50c) {
            ctx->pc = 0x28B544u;
            goto label_28b544;
        }
    }
    ctx->pc = 0x28B514u;
label_28b514:
    // 0x28b514: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28B514u;
    {
        const bool branch_taken_0x28b514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B514u;
            // 0x28b518: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b514) {
            ctx->pc = 0x28B544u;
            goto label_28b544;
        }
    }
    ctx->pc = 0x28B51Cu;
label_28b51c:
    // 0x28b51c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28B51Cu;
    {
        const bool branch_taken_0x28b51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B51Cu;
            // 0x28b520: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b51c) {
            ctx->pc = 0x28B544u;
            goto label_28b544;
        }
    }
    ctx->pc = 0x28B524u;
label_28b524:
    // 0x28b524: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28B524u;
    {
        const bool branch_taken_0x28b524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B524u;
            // 0x28b528: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b524) {
            ctx->pc = 0x28B544u;
            goto label_28b544;
        }
    }
    ctx->pc = 0x28B52Cu;
label_28b52c:
    // 0x28b52c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28B52Cu;
    {
        const bool branch_taken_0x28b52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B52Cu;
            // 0x28b530: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b52c) {
            ctx->pc = 0x28B544u;
            goto label_28b544;
        }
    }
    ctx->pc = 0x28B534u;
label_28b534:
    // 0x28b534: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x28b534u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28b538: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x28b538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28b53c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x28b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28b540: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x28b540u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_28b544:
    // 0x28b544: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x28b544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x28b548: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x28b548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28b54c: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x28b54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x28b550: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x28b550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x28b554: 0x24634448  addiu       $v1, $v1, 0x4448
    ctx->pc = 0x28b554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17480));
    // 0x28b558: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28b558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x28b55c: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x28b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x28b560: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x28b560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28b564: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28b564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28b568: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x28b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28b56c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x28b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28b570: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x28b570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x28b574: 0x1040ff8e  beqz        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x28B574u;
    {
        const bool branch_taken_0x28b574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B574u;
            // 0x28b578: 0x8c890000  lw          $t1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b574) {
            ctx->pc = 0x28B3B0u;
            runtime->cooperativeGuestYield();
            goto label_28b3b0;
        }
    }
    ctx->pc = 0x28B57Cu;
    // 0x28b57c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28b580: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28b580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28b584: 0x24425fc0  addiu       $v0, $v0, 0x5FC0
    ctx->pc = 0x28b584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24512));
    // 0x28b588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28b588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28b58c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28b590: 0x800008  jr          $a0
    ctx->pc = 0x28B590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B3B0u: goto label_28b3b0;
            case 0x28B598u: goto label_28b598;
            case 0x28B5A8u: goto label_28b5a8;
            case 0x28B5BCu: goto label_28b5bc;
            case 0x28B5C8u: goto label_28b5c8;
            case 0x28B5F0u: goto label_28b5f0;
            case 0x28B5F4u: goto label_28b5f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28B598u;
label_28b598:
    // 0x28b598: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x28b598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x28b59c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x28b59cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b5a0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x28B5A0u;
    {
        const bool branch_taken_0x28b5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5A0u;
            // 0x28b5a4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5a0) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B5A8u;
label_28b5a8:
    // 0x28b5a8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x28b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x28b5ac: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x28b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28b5b0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x28b5b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28b5b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x28B5B4u;
    {
        const bool branch_taken_0x28b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5B4u;
            // 0x28b5b8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5b4) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B5BCu;
label_28b5bc:
    // 0x28b5bc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x28b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x28b5c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28B5C0u;
    {
        const bool branch_taken_0x28b5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5C0u;
            // 0x28b5c4: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5c0) {
            ctx->pc = 0x28B5D8u;
            goto label_28b5d8;
        }
    }
    ctx->pc = 0x28B5C8u;
label_28b5c8:
    // 0x28b5c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b5cc: 0xf01023  subu        $v0, $a3, $s0
    ctx->pc = 0x28b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x28b5d0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x28b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x28b5d4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x28b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_28b5d8:
    // 0x28b5d8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x28b5d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28b5dc: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x28b5dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x28b5e0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x28b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x28b5e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28b5e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28B5E8u;
    {
        const bool branch_taken_0x28b5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5E8u;
            // 0x28b5ec: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5e8) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B5F0u;
label_28b5f0:
    // 0x28b5f0: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x28b5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_28b5f4:
    // 0x28b5f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28b5f8: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x28b5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x28b5fc: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x28B5FCu;
    {
        const bool branch_taken_0x28b5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5FCu;
            // 0x28b600: 0x2061021  addu        $v0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5fc) {
            ctx->pc = 0x28B478u;
            runtime->cooperativeGuestYield();
            goto label_28b478;
        }
    }
    ctx->pc = 0x28B604u;
    // 0x28b604: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28B604u;
    {
        const bool branch_taken_0x28b604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B604u;
            // 0x28b608: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b604) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B60Cu;
label_28b60c:
    // 0x28b60c: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B60Cu;
    {
        const bool branch_taken_0x28b60c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b60c) {
            ctx->pc = 0x28B610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B60Cu;
            // 0x28b610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B614u;
    // 0x28b614: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x28b614u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b618: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x28b618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x28b61c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x28b61cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b620: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28b620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28b624:
    // 0x28b624: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x28b624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b628: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28b628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b62c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28b62cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b630: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28b630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b634: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x28b634u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28b638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b63c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B63Cu;
            // 0x28b640: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B348u: goto label_28b348;
            case 0x28B3A8u: goto label_28b3a8;
            case 0x28B3B0u: goto label_28b3b0;
            case 0x28B3B8u: goto label_28b3b8;
            case 0x28B3E0u: goto label_28b3e0;
            case 0x28B428u: goto label_28b428;
            case 0x28B42Cu: goto label_28b42c;
            case 0x28B438u: goto label_28b438;
            case 0x28B460u: goto label_28b460;
            case 0x28B478u: goto label_28b478;
            case 0x28B4B4u: goto label_28b4b4;
            case 0x28B4C4u: goto label_28b4c4;
            case 0x28B4E8u: goto label_28b4e8;
            case 0x28B4FCu: goto label_28b4fc;
            case 0x28B504u: goto label_28b504;
            case 0x28B50Cu: goto label_28b50c;
            case 0x28B514u: goto label_28b514;
            case 0x28B51Cu: goto label_28b51c;
            case 0x28B524u: goto label_28b524;
            case 0x28B52Cu: goto label_28b52c;
            case 0x28B534u: goto label_28b534;
            case 0x28B544u: goto label_28b544;
            case 0x28B598u: goto label_28b598;
            case 0x28B5A8u: goto label_28b5a8;
            case 0x28B5BCu: goto label_28b5bc;
            case 0x28B5C8u: goto label_28b5c8;
            case 0x28B5D8u: goto label_28b5d8;
            case 0x28B5F0u: goto label_28b5f0;
            case 0x28B5F4u: goto label_28b5f4;
            case 0x28B60Cu: goto label_28b60c;
            case 0x28B624u: goto label_28b624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28B644u;
    // 0x28b644: 0x0  nop
    ctx->pc = 0x28b644u;
    // NOP
}
