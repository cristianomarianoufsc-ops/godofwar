#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE4F0
// Address: 0x1fe4f0 - 0x1fe690
void sub_001FE4F0_0x1fe4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE4F0_0x1fe4f0");
#endif

    ctx->pc = 0x1fe4f0u;

    // 0x1fe4f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fe4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fe4f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fe4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1fe4f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1fe4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1fe4fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe500: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fe500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe504: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1fe504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1fe508: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1fe508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1fe50c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1fe50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1fe510: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1fe510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1fe514: 0x248479b0  addiu       $a0, $a0, 0x79B0
    ctx->pc = 0x1fe514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31152));
    // 0x1fe518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe51c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FE51Cu;
    SET_GPR_U32(ctx, 31, 0x1FE524u);
    ctx->pc = 0x1FE520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE51Cu;
            // 0x1fe520: 0xae530024  sw          $s3, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE524u; }
        if (ctx->pc != 0x1FE524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE524u; }
        if (ctx->pc != 0x1FE524u) { return; }
    }
    ctx->pc = 0x1FE524u;
    // 0x1fe524: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe528: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FE528u;
    {
        const bool branch_taken_0x1fe528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE528u;
            // 0x1fe52c: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe528) {
            ctx->pc = 0x1FE590u;
            goto label_1fe590;
        }
    }
    ctx->pc = 0x1FE530u;
    // 0x1fe530: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1fe530u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe534: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x1fe534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x1fe538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fe538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe53c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fe53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fe540: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fe540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fe544: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe548: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1fe548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1fe54c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1fe54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1fe550: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE558u);
        ctx->pc = 0x1FE554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE550u;
            // 0x1fe554: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE558u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE590u: goto label_1fe590;
            case 0x1FE598u: goto label_1fe598;
            case 0x1FE5F0u: goto label_1fe5f0;
            case 0x1FE5F4u: goto label_1fe5f4;
            case 0x1FE630u: goto label_1fe630;
            case 0x1FE668u: goto label_1fe668;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE558u; }
            if (ctx->pc != 0x1FE558u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE558u;
    // 0x1fe558: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe55c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1fe55cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fe560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fe560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe564: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fe564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fe568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe56c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fe56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fe570: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fe574: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fe574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fe578: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1fe578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fe57c: 0x40f809  jalr        $v0
    ctx->pc = 0x1FE57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE584u);
        ctx->pc = 0x1FE580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE57Cu;
            // 0x1fe580: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FE584u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE590u: goto label_1fe590;
            case 0x1FE598u: goto label_1fe598;
            case 0x1FE5F0u: goto label_1fe5f0;
            case 0x1FE5F4u: goto label_1fe5f4;
            case 0x1FE630u: goto label_1fe630;
            case 0x1FE668u: goto label_1fe668;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FE584u; }
            if (ctx->pc != 0x1FE584u) { return; }
        }
        }
    }
    ctx->pc = 0x1FE584u;
    // 0x1fe584: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE584u;
    {
        const bool branch_taken_0x1fe584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE584u;
            // 0x1fe588: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe584) {
            ctx->pc = 0x1FE598u;
            goto label_1fe598;
        }
    }
    ctx->pc = 0x1FE58Cu;
    // 0x1fe58c: 0x0  nop
    ctx->pc = 0x1fe58cu;
    // NOP
label_1fe590:
    // 0x1fe590: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fe590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe594: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x1fe594u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_1fe598:
    // 0x1fe598: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1fe598u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1fe59c: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x1fe59cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fe5a0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1fe5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1fe5a4: 0xdc82bdf8  ld          $v0, -0x4208($a0)
    ctx->pc = 0x1fe5a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294950392)));
    // 0x1fe5a8: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1fe5a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1fe5ac: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1fe5acu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1fe5b0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1fe5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fe5b4: 0xfc82bdf8  sd          $v0, -0x4208($a0)
    ctx->pc = 0x1fe5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294950392), GPR_U64(ctx, 2));
    // 0x1fe5b8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1fe5b8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1fe5bc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1fe5bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1fe5c0: 0xfe020068  sd          $v0, 0x68($s0)
    ctx->pc = 0x1fe5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 2));
    // 0x1fe5c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fe5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fe5c8: 0x8c42eca4  lw          $v0, -0x135C($v0)
    ctx->pc = 0x1fe5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962340)));
    // 0x1fe5cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fe5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe5d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fe5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fe5d4: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1fe5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1fe5d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE5D8u;
    {
        const bool branch_taken_0x1fe5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE5D8u;
            // 0x1fe5dc: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5d8) {
            ctx->pc = 0x1FE5F0u;
            goto label_1fe5f0;
        }
    }
    ctx->pc = 0x1FE5E0u;
    // 0x1fe5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE5E4u;
    {
        const bool branch_taken_0x1fe5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE5E4u;
            // 0x1fe5e8: 0x43300b  movn        $a2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5e4) {
            ctx->pc = 0x1FE5F4u;
            goto label_1fe5f4;
        }
    }
    ctx->pc = 0x1FE5ECu;
    // 0x1fe5ec: 0x0  nop
    ctx->pc = 0x1fe5ecu;
    // NOP
label_1fe5f0:
    // 0x1fe5f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5f4:
    // 0x1fe5f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fe5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fe5f8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fe5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fe5fc: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1fe5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1fe600: 0x2463e828  addiu       $v1, $v1, -0x17D8
    ctx->pc = 0x1fe600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961192));
    // 0x1fe604: 0x8c540104  lw          $s4, 0x104($v0)
    ctx->pc = 0x1fe604u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1fe608: 0x8e62e3f8  lw          $v0, -0x1C08($s3)
    ctx->pc = 0x1fe608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960120)));
    // 0x1fe60c: 0xacc30180  sw          $v1, 0x180($a2)
    ctx->pc = 0x1fe60cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 384), GPR_U32(ctx, 3));
    // 0x1fe610: 0xacd20184  sw          $s2, 0x184($a2)
    ctx->pc = 0x1fe610u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 388), GPR_U32(ctx, 18));
    // 0x1fe614: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x1fe614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x1fe618: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x1fe618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x1fe61c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE61Cu;
    {
        const bool branch_taken_0x1fe61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE61Cu;
            // 0x1fe620: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe61c) {
            ctx->pc = 0x1FE668u;
            goto label_1fe668;
        }
    }
    ctx->pc = 0x1FE624u;
    // 0x1fe624: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe628: 0x2670e3f8  addiu       $s0, $s3, -0x1C08
    ctx->pc = 0x1fe628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960120));
    // 0x1fe62c: 0x0  nop
    ctx->pc = 0x1fe62cu;
    // NOP
label_1fe630:
    // 0x1fe630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe634: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1fe634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1fe638: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1FE638u;
    SET_GPR_U32(ctx, 31, 0x1FE640u);
    ctx->pc = 0x1FE63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE638u;
            // 0x1fe63c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE640u; }
        if (ctx->pc != 0x1FE640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE640u; }
        if (ctx->pc != 0x1FE640u) { return; }
    }
    ctx->pc = 0x1FE640u;
    // 0x1fe640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe644: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1FE644u;
    SET_GPR_U32(ctx, 31, 0x1FE64Cu);
    ctx->pc = 0x1FE648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE644u;
            // 0x1fe648: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE64Cu; }
        if (ctx->pc != 0x1FE64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE64Cu; }
        if (ctx->pc != 0x1FE64Cu) { return; }
    }
    ctx->pc = 0x1FE64Cu;
    // 0x1fe64c: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1fe64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1fe650: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1fe650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1fe654: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1fe654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1fe658: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1fe658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1fe65c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fe65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fe660: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FE660u;
    {
        const bool branch_taken_0x1fe660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE660u;
            // 0x1fe664: 0x2670e3f8  addiu       $s0, $s3, -0x1C08 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe660) {
            ctx->pc = 0x1FE630u;
            runtime->cooperativeGuestYield();
            goto label_1fe630;
        }
    }
    ctx->pc = 0x1FE668u;
label_1fe668:
    // 0x1fe668: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1fe668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe66c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1fe66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe670: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1fe670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe674: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fe674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe678: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1fe678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe67c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1fe67cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe684: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE684u;
            // 0x1fe688: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE590u: goto label_1fe590;
            case 0x1FE598u: goto label_1fe598;
            case 0x1FE5F0u: goto label_1fe5f0;
            case 0x1FE5F4u: goto label_1fe5f4;
            case 0x1FE630u: goto label_1fe630;
            case 0x1FE668u: goto label_1fe668;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE68Cu;
    // 0x1fe68c: 0x0  nop
    ctx->pc = 0x1fe68cu;
    // NOP
}
