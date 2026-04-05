#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012B530
// Address: 0x12b530 - 0x12b770
void sub_0012B530_0x12b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B530_0x12b530");
#endif

    ctx->pc = 0x12b530u;

    // 0x12b530: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x12b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x12b534: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x12b534u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x12b538: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x12b538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x12b53c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x12b53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x12b540: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x12b540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x12b544: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12b544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b548: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x12b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x12b54c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12b54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b550: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x12b550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x12b554: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12b554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b558: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x12b558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x12b55c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12b55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12b560: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x12b560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x12b564: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x12b564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x12b568: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x12b568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b56c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x12b56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b570: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x12b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x12b574: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x12b574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x12b578: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x12b578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b57c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12B57Cu;
    {
        const bool branch_taken_0x12b57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B57Cu;
            // 0x12b580: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b57c) {
            ctx->pc = 0x12B610u;
            goto label_12b610;
        }
    }
    ctx->pc = 0x12B584u;
    // 0x12b584: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x12b584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x12b588: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12b588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12b58c: 0x244214f0  addiu       $v0, $v0, 0x14F0
    ctx->pc = 0x12b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5360));
    // 0x12b590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12b594: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b598: 0x400008  jr          $v0
    ctx->pc = 0x12B598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B5A0u: goto label_12b5a0;
            case 0x12B5ACu: goto label_12b5ac;
            case 0x12B5BCu: goto label_12b5bc;
            case 0x12B5C8u: goto label_12b5c8;
            case 0x12B5DCu: goto label_12b5dc;
            case 0x12B5F0u: goto label_12b5f0;
            case 0x12B5FCu: goto label_12b5fc;
            case 0x12B610u: goto label_12b610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B5A0u;
label_12b5a0:
    // 0x12b5a0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12b5a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b5a4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x12B5A4u;
    {
        const bool branch_taken_0x12b5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5A4u;
            // 0x12b5a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5a4) {
            ctx->pc = 0x12B614u;
            goto label_12b614;
        }
    }
    ctx->pc = 0x12B5ACu;
label_12b5ac:
    // 0x12b5ac: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12b5acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b5b0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x12b5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b5b4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12B5B4u;
    {
        const bool branch_taken_0x12b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5B4u;
            // 0x12b5b8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5b4) {
            ctx->pc = 0x12B614u;
            goto label_12b614;
        }
    }
    ctx->pc = 0x12B5BCu;
label_12b5bc:
    // 0x12b5bc: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x12b5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b5c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12B5C0u;
    {
        const bool branch_taken_0x12b5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5C0u;
            // 0x12b5c4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5c0) {
            ctx->pc = 0x12B614u;
            goto label_12b614;
        }
    }
    ctx->pc = 0x12B5C8u;
label_12b5c8:
    // 0x12b5c8: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x12b5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x12b5cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12b5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12b5d0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12b5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b5d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12B5D4u;
    {
        const bool branch_taken_0x12b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5D4u;
            // 0x12b5d8: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5d4) {
            ctx->pc = 0x12B614u;
            goto label_12b614;
        }
    }
    ctx->pc = 0x12B5DCu;
label_12b5dc:
    // 0x12b5dc: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x12b5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x12b5e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12b5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12b5e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12b5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b5e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12B5E8u;
    {
        const bool branch_taken_0x12b5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5E8u;
            // 0x12b5ec: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5e8) {
            ctx->pc = 0x12B614u;
            goto label_12b614;
        }
    }
    ctx->pc = 0x12B5F0u;
label_12b5f0:
    // 0x12b5f0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x12b5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b5f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12B5F4u;
    {
        const bool branch_taken_0x12b5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5F4u;
            // 0x12b5f8: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5f4) {
            ctx->pc = 0x12B614u;
            goto label_12b614;
        }
    }
    ctx->pc = 0x12B5FCu;
label_12b5fc:
    // 0x12b5fc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x12b5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x12b600: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12b600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12b604: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12b604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12b608: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B608u;
    {
        const bool branch_taken_0x12b608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B608u;
            // 0x12b60c: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b608) {
            ctx->pc = 0x12B614u;
            goto label_12b614;
        }
    }
    ctx->pc = 0x12B610u;
label_12b610:
    // 0x12b610: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x12b610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_12b614:
    // 0x12b614: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x12B614u;
    {
        const bool branch_taken_0x12b614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B614u;
            // 0x12b618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b614) {
            ctx->pc = 0x12B6B8u;
            goto label_12b6b8;
        }
    }
    ctx->pc = 0x12B61Cu;
    // 0x12b61c: 0xc04c050  jal         func_130140
    ctx->pc = 0x12B61Cu;
    SET_GPR_U32(ctx, 31, 0x12B624u);
    ctx->pc = 0x12B620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B61Cu;
            // 0x12b620: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B624u; }
        if (ctx->pc != 0x12B624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130140_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B624u; }
        if (ctx->pc != 0x12B624u) { return; }
    }
    ctx->pc = 0x12B624u;
    // 0x12b624: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x12b624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x12b628: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B628u;
    {
        const bool branch_taken_0x12b628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B628u;
            // 0x12b62c: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b628) {
            ctx->pc = 0x12B638u;
            goto label_12b638;
        }
    }
    ctx->pc = 0x12B630u;
    // 0x12b630: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x12b630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x12b634: 0x0  nop
    ctx->pc = 0x12b634u;
    // NOP
label_12b638:
    // 0x12b638: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x12b638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x12b63c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12B63Cu;
    {
        const bool branch_taken_0x12b63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B63Cu;
            // 0x12b640: 0x8e420084  lw          $v0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b63c) {
            ctx->pc = 0x12B6C0u;
            goto label_12b6c0;
        }
    }
    ctx->pc = 0x12B644u;
    // 0x12b644: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x12b644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12b648: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x12b648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12b64c: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x12b64cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x12b650: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x12b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12b654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12b654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b658: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x12b658u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b65c: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x12b65cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x12b660: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x12b660u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b664: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x12b664u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12b668: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x12b668u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b66c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x12b66cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x12b670: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x12b670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x12b674: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x12b674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b678: 0x4be118bd  vmadday.xyzw $ACC, $vf3, $vf1y
    ctx->pc = 0x12b678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12b67c: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x12b67cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b680: 0x4be120be  vmaddaz.xyzw $ACC, $vf4, $vf1z
    ctx->pc = 0x12b680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12b684: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x12b684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b688: 0x4be1108b  vmaddw.xyzw $vf2, $vf2, $vf1w
    ctx->pc = 0x12b688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12b68c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x12b68cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12b690: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x12b690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b694: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x12b694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b698: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x12b698u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12b69c: 0x4a0003bf  vwaitq
    ctx->pc = 0x12b69cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12b6a0: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x12b6a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12b6a4: 0x4a0002ff  vnop
    ctx->pc = 0x12b6a4u;
    // NOP operation, no action needed for VU0
    // 0x12b6a8: 0x4a0002ff  vnop
    ctx->pc = 0x12b6a8u;
    // NOP operation, no action needed for VU0
    // 0x12b6ac: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x12b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12b6b0: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x12b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12b6b4: 0x0  nop
    ctx->pc = 0x12b6b4u;
    // NOP
label_12b6b8:
    // 0x12b6b8: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x12b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x12b6bc: 0x0  nop
    ctx->pc = 0x12b6bcu;
    // NOP
label_12b6c0:
    // 0x12b6c0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x12b6c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12b6c4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12b6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12b6c8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x12b6c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12b6cc: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x12b6ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12b6d0: 0x4a2120c0  vaddx.w     $vf3, $vf4, $vf1x
    ctx->pc = 0x12b6d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12b6d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12b6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b6d8: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x12b6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12b6dc: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x12B6DCu;
    {
        const bool branch_taken_0x12b6dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B6DCu;
            // 0x12b6e0: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6dc) {
            ctx->pc = 0x12B6E8u;
            goto label_12b6e8;
        }
    }
    ctx->pc = 0x12B6E4u;
    // 0x12b6e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12b6e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_12b6e8:
    // 0x12b6e8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x12b6e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12b6ec: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x12b6ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x12b6f0: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x12b6f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12b6f4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x12b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12b6f8: 0x4a222040  vaddx.w     $vf1, $vf4, $vf2x
    ctx->pc = 0x12b6f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b6fc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x12b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x12b700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b704: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x12b704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12b708: 0xfa630000  sqc2        $vf3, 0x0($s3)
    ctx->pc = 0x12b708u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12b70c: 0xfa610010  sqc2        $vf1, 0x10($s3)
    ctx->pc = 0x12b70cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b710: 0x24844650  addiu       $a0, $a0, 0x4650
    ctx->pc = 0x12b710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18000));
    // 0x12b714: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x12b714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b718: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x12b718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12b71c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12b720: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x12b720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12b724: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x12b724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12b728: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x12b728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12b72c: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x12b72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12b730: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x12b730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12b734: 0x68640017  ldl         $a0, 0x17($v1)
    ctx->pc = 0x12b734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x12b738: 0x6c640010  ldr         $a0, 0x10($v1)
    ctx->pc = 0x12b738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x12b73c: 0xb2660027  sdl         $a2, 0x27($s3)
    ctx->pc = 0x12b73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b740: 0xb6660020  sdr         $a2, 0x20($s3)
    ctx->pc = 0x12b740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b744: 0xb267002f  sdl         $a3, 0x2F($s3)
    ctx->pc = 0x12b744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b748: 0xb6670028  sdr         $a3, 0x28($s3)
    ctx->pc = 0x12b748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b74c: 0xb2640037  sdl         $a0, 0x37($s3)
    ctx->pc = 0x12b74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b750: 0xb6640030  sdr         $a0, 0x30($s3)
    ctx->pc = 0x12b750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b754: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x12b754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12b758: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x12b758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12b75c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x12b75cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12b760: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12b760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12b764: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x12b764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12b768: 0x3e00008  jr          $ra
    ctx->pc = 0x12B768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B768u;
            // 0x12b76c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B5A0u: goto label_12b5a0;
            case 0x12B5ACu: goto label_12b5ac;
            case 0x12B5BCu: goto label_12b5bc;
            case 0x12B5C8u: goto label_12b5c8;
            case 0x12B5DCu: goto label_12b5dc;
            case 0x12B5F0u: goto label_12b5f0;
            case 0x12B5FCu: goto label_12b5fc;
            case 0x12B610u: goto label_12b610;
            case 0x12B614u: goto label_12b614;
            case 0x12B638u: goto label_12b638;
            case 0x12B6B8u: goto label_12b6b8;
            case 0x12B6C0u: goto label_12b6c0;
            case 0x12B6E8u: goto label_12b6e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B770u;
}
