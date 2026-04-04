#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001448A0
// Address: 0x1448a0 - 0x1449d0
void sub_001448A0_0x1448a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001448A0_0x1448a0");
#endif

    ctx->pc = 0x1448a0u;

    // 0x1448a0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1448a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1448a4: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1448a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x1448a8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1448a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x1448ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1448acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448b0: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1448b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x1448b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1448b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448b8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1448b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1448bc: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1448bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x1448c0: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1448C0u;
    {
        const bool branch_taken_0x1448c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1448C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1448C0u;
            // 0x1448c4: 0x8e320020  lw          $s2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1448c0) {
            ctx->pc = 0x1449B0u;
            goto label_1449b0;
        }
    }
    ctx->pc = 0x1448C8u;
    // 0x1448c8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1448c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1448cc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1448CCu;
    {
        const bool branch_taken_0x1448cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1448D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1448CCu;
            // 0x1448d0: 0x2413002f  addiu       $s3, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1448cc) {
            ctx->pc = 0x1449B0u;
            goto label_1449b0;
        }
    }
    ctx->pc = 0x1448D4u;
    // 0x1448d4: 0x10530013  beq         $v0, $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1448D4u;
    {
        const bool branch_taken_0x1448d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1448D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1448D4u;
            // 0x1448d8: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1448d4) {
            ctx->pc = 0x144924u;
            goto label_144924;
        }
    }
    ctx->pc = 0x1448DCu;
    // 0x1448dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1448dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448e0: 0x24a517f8  addiu       $a1, $a1, 0x17F8
    ctx->pc = 0x1448e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6136));
    // 0x1448e4: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x1448E4u;
    SET_GPR_U32(ctx, 31, 0x1448ECu);
    ctx->pc = 0x1448E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1448E4u;
            // 0x1448e8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448ECu; }
        if (ctx->pc != 0x1448ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448ECu; }
        if (ctx->pc != 0x1448ECu) { return; }
    }
    ctx->pc = 0x1448ECu;
    // 0x1448ec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1448ECu;
    {
        const bool branch_taken_0x1448ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1448ec) {
            ctx->pc = 0x144928u;
            goto label_144928;
        }
    }
    ctx->pc = 0x1448F4u;
    // 0x1448f4: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x1448f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x1448f8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1448f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1448fc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1448FCu;
    {
        const bool branch_taken_0x1448fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1448fc) {
            ctx->pc = 0x144900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1448FCu;
            // 0x144900: 0x8e510cd4  lw          $s1, 0xCD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3284)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144928u;
            goto label_144928;
        }
    }
    ctx->pc = 0x144904u;
    // 0x144904: 0x50530008  beql        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x144904u;
    {
        const bool branch_taken_0x144904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x144904) {
            ctx->pc = 0x144908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144904u;
            // 0x144908: 0x8e510cd4  lw          $s1, 0xCD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3284)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144928u;
            goto label_144928;
        }
    }
    ctx->pc = 0x14490Cu;
    // 0x14490c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14490cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_144910:
    // 0x144910: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x144910u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144914: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144914u;
    {
        const bool branch_taken_0x144914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x144918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144914u;
            // 0x144918: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144914) {
            ctx->pc = 0x144924u;
            goto label_144924;
        }
    }
    ctx->pc = 0x14491Cu;
    // 0x14491c: 0x5462fffc  bnel        $v1, $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x14491Cu;
    {
        const bool branch_taken_0x14491c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14491c) {
            ctx->pc = 0x144920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14491Cu;
            // 0x144920: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144910u;
            runtime->cooperativeGuestYield();
            goto label_144910;
        }
    }
    ctx->pc = 0x144924u;
label_144924:
    // 0x144924: 0x8e510cd4  lw          $s1, 0xCD4($s2)
    ctx->pc = 0x144924u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3284)));
label_144928:
    // 0x144928: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144928u;
    {
        const bool branch_taken_0x144928 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14492Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144928u;
            // 0x14492c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144928) {
            ctx->pc = 0x144938u;
            goto label_144938;
        }
    }
    ctx->pc = 0x144930u;
    // 0x144930: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x144930u;
    {
        const bool branch_taken_0x144930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144930u;
            // 0x144934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144930) {
            ctx->pc = 0x1449B4u;
            goto label_1449b4;
        }
    }
    ctx->pc = 0x144938u;
label_144938:
    // 0x144938: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14493c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x14493cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x144940: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x144940u;
    SET_GPR_U32(ctx, 31, 0x144948u);
    ctx->pc = 0x144944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144940u;
            // 0x144944: 0x3c12002b  lui         $s2, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144948u; }
        if (ctx->pc != 0x144948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144948u; }
        if (ctx->pc != 0x144948u) { return; }
    }
    ctx->pc = 0x144948u;
    // 0x144948: 0xa3a000ff  sb          $zero, 0xFF($sp)
    ctx->pc = 0x144948u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x14494c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144950:
    // 0x144950: 0xc0a3502  jal         func_28D408
    ctx->pc = 0x144950u;
    SET_GPR_U32(ctx, 31, 0x144958u);
    ctx->pc = 0x144954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144950u;
            // 0x144954: 0x26451800  addiu       $a1, $s2, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D408u;
    if (runtime->hasFunction(0x28D408u)) {
        auto targetFn = runtime->lookupFunction(0x28D408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144958u; }
        if (ctx->pc != 0x144958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D408_0x28d408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144958u; }
        if (ctx->pc != 0x144958u) { return; }
    }
    ctx->pc = 0x144958u;
    // 0x144958: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14495c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14495Cu;
    {
        const bool branch_taken_0x14495c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x144960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14495Cu;
            // 0x144960: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14495c) {
            ctx->pc = 0x1449B0u;
            goto label_1449b0;
        }
    }
    ctx->pc = 0x144964u;
    // 0x144964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144968: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x144968u;
    SET_GPR_U32(ctx, 31, 0x144970u);
    ctx->pc = 0x14496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144968u;
            // 0x14496c: 0x24a51808  addiu       $a1, $a1, 0x1808 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144970u; }
        if (ctx->pc != 0x144970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144970u; }
        if (ctx->pc != 0x144970u) { return; }
    }
    ctx->pc = 0x144970u;
    // 0x144970: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144970u;
    {
        const bool branch_taken_0x144970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144970u;
            // 0x144974: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144970) {
            ctx->pc = 0x144988u;
            goto label_144988;
        }
    }
    ctx->pc = 0x144978u;
    // 0x144978: 0xc0526c4  jal         func_149B10
    ctx->pc = 0x144978u;
    SET_GPR_U32(ctx, 31, 0x144980u);
    ctx->pc = 0x14497Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144978u;
            // 0x14497c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149B10u;
    if (runtime->hasFunction(0x149B10u)) {
        auto targetFn = runtime->lookupFunction(0x149B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144980u; }
        if (ctx->pc != 0x144980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149B10_0x149b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144980u; }
        if (ctx->pc != 0x144980u) { return; }
    }
    ctx->pc = 0x144980u;
    // 0x144980: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x144980u;
    {
        const bool branch_taken_0x144980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144980u;
            // 0x144984: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144980) {
            ctx->pc = 0x1449A8u;
            goto label_1449a8;
        }
    }
    ctx->pc = 0x144988u;
label_144988:
    // 0x144988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14498c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x14498Cu;
    SET_GPR_U32(ctx, 31, 0x144994u);
    ctx->pc = 0x144990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14498Cu;
            // 0x144990: 0x24a51810  addiu       $a1, $a1, 0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144994u; }
        if (ctx->pc != 0x144994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144994u; }
        if (ctx->pc != 0x144994u) { return; }
    }
    ctx->pc = 0x144994u;
    // 0x144994: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144994u;
    {
        const bool branch_taken_0x144994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144994u;
            // 0x144998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144994) {
            ctx->pc = 0x1449A8u;
            goto label_1449a8;
        }
    }
    ctx->pc = 0x14499Cu;
    // 0x14499c: 0xc0511f8  jal         func_1447E0
    ctx->pc = 0x14499Cu;
    SET_GPR_U32(ctx, 31, 0x1449A4u);
    ctx->pc = 0x1449A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14499Cu;
            // 0x1449a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1447E0u;
    if (runtime->hasFunction(0x1447E0u)) {
        auto targetFn = runtime->lookupFunction(0x1447E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1449A4u; }
        if (ctx->pc != 0x1449A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001447E0_0x1447e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1449A4u; }
        if (ctx->pc != 0x1449A4u) { return; }
    }
    ctx->pc = 0x1449A4u;
    // 0x1449a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1449a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1449a8:
    // 0x1449a8: 0x5620ffe9  bnel        $s1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1449A8u;
    {
        const bool branch_taken_0x1449a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1449a8) {
            ctx->pc = 0x1449ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1449A8u;
            // 0x1449ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144950u;
            runtime->cooperativeGuestYield();
            goto label_144950;
        }
    }
    ctx->pc = 0x1449B0u;
label_1449b0:
    // 0x1449b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1449b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1449b4:
    // 0x1449b4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1449b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1449b8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1449b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1449bc: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1449bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1449c0: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1449c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1449c4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1449c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1449c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1449C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1449CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1449C8u;
            // 0x1449cc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144910u: goto label_144910;
            case 0x144924u: goto label_144924;
            case 0x144928u: goto label_144928;
            case 0x144938u: goto label_144938;
            case 0x144950u: goto label_144950;
            case 0x144988u: goto label_144988;
            case 0x1449A8u: goto label_1449a8;
            case 0x1449B0u: goto label_1449b0;
            case 0x1449B4u: goto label_1449b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1449D0u;
}
