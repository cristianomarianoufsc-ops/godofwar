#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB360
// Address: 0x1bb360 - 0x1bb4a0
void sub_001BB360_0x1bb360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB360_0x1bb360");
#endif

    ctx->pc = 0x1bb360u;

    // 0x1bb360: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1bb360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1bb364: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bb364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bb368: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1bb368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1bb36c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bb36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bb370: 0x3c17002a  lui         $s7, 0x2A
    ctx->pc = 0x1bb370u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
    // 0x1bb374: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1bb374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1bb378: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1bb378u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb37c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1bb37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1bb380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb384: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1bb384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1bb388: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bb388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb38c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1bb38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1bb390: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1bb390u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb394: 0x8ee3cc40  lw          $v1, -0x33C0($s7)
    ctx->pc = 0x1bb394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954048)));
    // 0x1bb398: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1bb398u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb39c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1bb39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1bb3a0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1bb3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1bb3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb3a8: 0x18600031  blez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1BB3A8u;
    {
        const bool branch_taken_0x1bb3a8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BB3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3A8u;
            // 0x1bb3ac: 0x8c52cc44  lw          $s2, -0x33BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3a8) {
            ctx->pc = 0x1BB470u;
            goto label_1bb470;
        }
    }
    ctx->pc = 0x1BB3B0u;
label_1bb3b0:
    // 0x1bb3b0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1bb3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1bb3b4: 0x128140  sll         $s0, $s2, 5
    ctx->pc = 0x1bb3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1bb3b8: 0x24b15a68  addiu       $s1, $a1, 0x5A68
    ctx->pc = 0x1bb3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 23144));
    // 0x1bb3bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb3c0: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x1bb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1bb3c4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1bb3c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bb3c8: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BB3C8u;
    {
        const bool branch_taken_0x1bb3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BB3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3C8u;
            // 0x1bb3cc: 0x24a25a68  addiu       $v0, $a1, 0x5A68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 23144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3c8) {
            ctx->pc = 0x1BB408u;
            goto label_1bb408;
        }
    }
    ctx->pc = 0x1BB3D0u;
    // 0x1bb3d0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1bb3d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1bb3d4: 0x1456000c  bne         $v0, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x1BB3D4u;
    {
        const bool branch_taken_0x1bb3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x1BB3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3D4u;
            // 0x1bb3d8: 0x24a25a68  addiu       $v0, $a1, 0x5A68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 23144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3d4) {
            ctx->pc = 0x1BB408u;
            goto label_1bb408;
        }
    }
    ctx->pc = 0x1BB3DCu;
    // 0x1bb3dc: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1bb3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1bb3e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bb3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb3e4: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1BB3E4u;
    SET_GPR_U32(ctx, 31, 0x1BB3ECu);
    ctx->pc = 0x1BB3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3E4u;
            // 0x1bb3e8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3ECu; }
        if (ctx->pc != 0x1BB3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3ECu; }
        if (ctx->pc != 0x1BB3ECu) { return; }
    }
    ctx->pc = 0x1BB3ECu;
    // 0x1bb3ec: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1bb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1bb3f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bb3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb3f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1bb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bb3f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1bb3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1bb3fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bb3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bb400: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BB400u;
    {
        const bool branch_taken_0x1bb400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB400u;
            // 0x1bb404: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb400) {
            ctx->pc = 0x1BB440u;
            goto label_1bb440;
        }
    }
    ctx->pc = 0x1BB408u;
label_1bb408:
    // 0x1bb408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb40c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1bb40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bb410: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1bb410u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bb414: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB414u;
    {
        const bool branch_taken_0x1bb414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BB418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB414u;
            // 0x1bb418: 0x26440001  addiu       $a0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb414) {
            ctx->pc = 0x1BB444u;
            goto label_1bb444;
        }
    }
    ctx->pc = 0x1BB41Cu;
    // 0x1bb41c: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x1bb41cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1bb420: 0x14560009  bne         $v0, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB420u;
    {
        const bool branch_taken_0x1bb420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x1BB424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB420u;
            // 0x1bb424: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb420) {
            ctx->pc = 0x1BB448u;
            goto label_1bb448;
        }
    }
    ctx->pc = 0x1BB428u;
    // 0x1bb428: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1bb428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bb42c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bb42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb430: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x1BB430u;
    SET_GPR_U32(ctx, 31, 0x1BB438u);
    ctx->pc = 0x1BB434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB430u;
            // 0x1bb434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB438u; }
        if (ctx->pc != 0x1BB438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB438u; }
        if (ctx->pc != 0x1BB438u) { return; }
    }
    ctx->pc = 0x1BB438u;
    // 0x1bb438: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x1bb438u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb43c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bb43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb440:
    // 0x1bb440: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x1bb440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bb444:
    // 0x1bb444: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bb444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bb448:
    // 0x1bb448: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x1bb448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1bb44c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1bb44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1bb450: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1bb450u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1bb454: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bb454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bb458: 0x39143  sra         $s2, $v1, 5
    ctx->pc = 0x1bb458u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bb45c: 0x8ee2cc40  lw          $v0, -0x33C0($s7)
    ctx->pc = 0x1bb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954048)));
    // 0x1bb460: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1bb460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1bb464: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1bb464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bb468: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1BB468u;
    {
        const bool branch_taken_0x1bb468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB468u;
            // 0x1bb46c: 0x839023  subu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb468) {
            ctx->pc = 0x1BB3B0u;
            runtime->cooperativeGuestYield();
            goto label_1bb3b0;
        }
    }
    ctx->pc = 0x1BB470u;
label_1bb470:
    // 0x1bb470: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1bb470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bb474: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1bb474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb478: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1bb478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bb47c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1bb47cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb480: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1bb480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bb484: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bb484u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb488: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1bb488u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb48c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1bb48cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb490: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1bb490u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb498: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB498u;
            // 0x1bb49c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB3B0u: goto label_1bb3b0;
            case 0x1BB408u: goto label_1bb408;
            case 0x1BB440u: goto label_1bb440;
            case 0x1BB444u: goto label_1bb444;
            case 0x1BB448u: goto label_1bb448;
            case 0x1BB470u: goto label_1bb470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB4A0u;
}
