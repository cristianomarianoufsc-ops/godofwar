#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001697F0
// Address: 0x1697f0 - 0x169be0
void sub_001697F0_0x1697f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001697F0_0x1697f0");
#endif

    ctx->pc = 0x1697f0u;

    // 0x1697f0: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x1697f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
    // 0x1697f4: 0x7fb002e0  sq          $s0, 0x2E0($sp)
    ctx->pc = 0x1697f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 16));
    // 0x1697f8: 0x7fb102d0  sq          $s1, 0x2D0($sp)
    ctx->pc = 0x1697f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 17));
    // 0x1697fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1697fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169800: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x169800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x169804: 0x26020360  addiu       $v0, $s0, 0x360
    ctx->pc = 0x169804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x169808: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x169808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x16980c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16980Cu;
    {
        const bool branch_taken_0x16980c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x169810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16980Cu;
            // 0x169810: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16980c) {
            ctx->pc = 0x169818u;
            goto label_169818;
        }
    }
    ctx->pc = 0x169814u;
    // 0x169814: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x169814u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_169818:
    // 0x169818: 0xc05a48e  jal         func_169238
    ctx->pc = 0x169818u;
    SET_GPR_U32(ctx, 31, 0x169820u);
    ctx->pc = 0x16981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169818u;
            // 0x16981c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169238u;
    if (runtime->hasFunction(0x169238u)) {
        auto targetFn = runtime->lookupFunction(0x169238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169820u; }
        if (ctx->pc != 0x169820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169238_0x169238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169820u; }
        if (ctx->pc != 0x169820u) { return; }
    }
    ctx->pc = 0x169820u;
    // 0x169820: 0xc05a514  jal         func_169450
    ctx->pc = 0x169820u;
    SET_GPR_U32(ctx, 31, 0x169828u);
    ctx->pc = 0x169824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169820u;
            // 0x169824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169450u;
    if (runtime->hasFunction(0x169450u)) {
        auto targetFn = runtime->lookupFunction(0x169450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169828u; }
        if (ctx->pc != 0x169828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169450_0x169450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169828u; }
        if (ctx->pc != 0x169828u) { return; }
    }
    ctx->pc = 0x169828u;
    // 0x169828: 0xc05a5b2  jal         func_1696C8
    ctx->pc = 0x169828u;
    SET_GPR_U32(ctx, 31, 0x169830u);
    ctx->pc = 0x16982Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169828u;
            // 0x16982c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1696C8u;
    if (runtime->hasFunction(0x1696C8u)) {
        auto targetFn = runtime->lookupFunction(0x1696C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169830u; }
        if (ctx->pc != 0x169830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1696c8_0x1697d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169830u; }
        if (ctx->pc != 0x169830u) { return; }
    }
    ctx->pc = 0x169830u;
    // 0x169830: 0x1220003e  beqz        $s1, . + 4 + (0x3E << 2)
    ctx->pc = 0x169830u;
    {
        const bool branch_taken_0x169830 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169830u;
            // 0x169834: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169830) {
            ctx->pc = 0x16992Cu;
            goto label_16992c;
        }
    }
    ctx->pc = 0x169838u;
    // 0x169838: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x169838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x16983c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16983Cu;
    {
        const bool branch_taken_0x16983c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x169840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16983Cu;
            // 0x169840: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16983c) {
            ctx->pc = 0x16984Cu;
            goto label_16984c;
        }
    }
    ctx->pc = 0x169844u;
    // 0x169844: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169844u;
    {
        const bool branch_taken_0x169844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169844u;
            // 0x169848: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169844) {
            ctx->pc = 0x169868u;
            goto label_169868;
        }
    }
    ctx->pc = 0x16984Cu;
label_16984c:
    // 0x16984c: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x16984cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x169850: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x169850u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x169854: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x169854u;
    {
        const bool branch_taken_0x169854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x169854) {
            ctx->pc = 0x169858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169854u;
            // 0x169858: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16986Cu;
            goto label_16986c;
        }
    }
    ctx->pc = 0x16985Cu;
    // 0x16985c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x16985Cu;
    SET_GPR_U32(ctx, 31, 0x169864u);
    ctx->pc = 0x169860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16985Cu;
            // 0x169860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169864u; }
        if (ctx->pc != 0x169864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169864u; }
        if (ctx->pc != 0x169864u) { return; }
    }
    ctx->pc = 0x169864u;
    // 0x169864: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x169864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_169868:
    // 0x169868: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x169868u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
label_16986c:
    // 0x16986c: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x16986cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x169870: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x169870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x169874: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x169874u;
    {
        const bool branch_taken_0x169874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169874u;
            // 0x169878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169874) {
            ctx->pc = 0x1698B0u;
            goto label_1698b0;
        }
    }
    ctx->pc = 0x16987Cu;
    // 0x16987c: 0xc0614c6  jal         func_185318
    ctx->pc = 0x16987Cu;
    SET_GPR_U32(ctx, 31, 0x169884u);
    ctx->pc = 0x169880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16987Cu;
            // 0x169880: 0xfe2300f0  sd          $v1, 0xF0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169884u; }
        if (ctx->pc != 0x169884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169884u; }
        if (ctx->pc != 0x169884u) { return; }
    }
    ctx->pc = 0x169884u;
    // 0x169884: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x169884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16988c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16988cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169890: 0x7e2200b0  sq          $v0, 0xB0($s1)
    ctx->pc = 0x169890u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 2));
    // 0x169894: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x169894u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169898: 0x7e2200c0  sq          $v0, 0xC0($s1)
    ctx->pc = 0x169898u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), GPR_VEC(ctx, 2));
    // 0x16989c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x16989cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1698a0: 0x7e2200d0  sq          $v0, 0xD0($s1)
    ctx->pc = 0x1698a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), GPR_VEC(ctx, 2));
    // 0x1698a4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1698a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1698a8: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x1698A8u;
    SET_GPR_U32(ctx, 31, 0x1698B0u);
    ctx->pc = 0x1698ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1698A8u;
            // 0x1698ac: 0x7e2200e0  sq          $v0, 0xE0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698B0u; }
        if (ctx->pc != 0x1698B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698B0u; }
        if (ctx->pc != 0x1698B0u) { return; }
    }
    ctx->pc = 0x1698B0u;
label_1698b0:
    // 0x1698b0: 0x7a2200b0  lq          $v0, 0xB0($s1)
    ctx->pc = 0x1698b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1698b4: 0x262300b0  addiu       $v1, $s1, 0xB0
    ctx->pc = 0x1698b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1698b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1698b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1698bc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1698bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1698c0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1698c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1698c4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1698c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1698c8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1698c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1698cc: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1698ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1698d0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1698d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1698d4: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1698d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1698d8: 0x86220060  lh          $v0, 0x60($s1)
    ctx->pc = 0x1698d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1698dc: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1698DCu;
    {
        const bool branch_taken_0x1698dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1698E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698DCu;
            // 0x1698e0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698dc) {
            ctx->pc = 0x1698ECu;
            goto label_1698ec;
        }
    }
    ctx->pc = 0x1698E4u;
    // 0x1698e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1698E4u;
    {
        const bool branch_taken_0x1698e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1698E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698E4u;
            // 0x1698e8: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698e4) {
            ctx->pc = 0x169908u;
            goto label_169908;
        }
    }
    ctx->pc = 0x1698ECu;
label_1698ec:
    // 0x1698ec: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1698ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1698f0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1698f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1698f4: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1698F4u;
    {
        const bool branch_taken_0x1698f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1698F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698F4u;
            // 0x1698f8: 0x26230070  addiu       $v1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698f4) {
            ctx->pc = 0x169908u;
            goto label_169908;
        }
    }
    ctx->pc = 0x1698FCu;
    // 0x1698fc: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1698FCu;
    SET_GPR_U32(ctx, 31, 0x169904u);
    ctx->pc = 0x169900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1698FCu;
            // 0x169900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169904u; }
        if (ctx->pc != 0x169904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169904u; }
        if (ctx->pc != 0x169904u) { return; }
    }
    ctx->pc = 0x169904u;
    // 0x169904: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x169904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_169908:
    // 0x169908: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x169908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16990c: 0x7e020240  sq          $v0, 0x240($s0)
    ctx->pc = 0x16990cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 576), GPR_VEC(ctx, 2));
    // 0x169910: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x169910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x169914: 0x7e020250  sq          $v0, 0x250($s0)
    ctx->pc = 0x169914u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 592), GPR_VEC(ctx, 2));
    // 0x169918: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x169918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16991c: 0x7e020260  sq          $v0, 0x260($s0)
    ctx->pc = 0x16991cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), GPR_VEC(ctx, 2));
    // 0x169920: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x169920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x169924: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x169924u;
    {
        const bool branch_taken_0x169924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169924u;
            // 0x169928: 0x7e020270  sq          $v0, 0x270($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 624), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169924) {
            ctx->pc = 0x169980u;
            goto label_169980;
        }
    }
    ctx->pc = 0x16992Cu;
label_16992c:
    // 0x16992c: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x16992cu;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x169930: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x169930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x169934: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x169934u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x169938: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x169938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16993c: 0x4be2233d  vmr32.xyzw  $vf2, $vf4
    ctx->pc = 0x16993cu;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x169940: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x169940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x169944: 0x4be1133d  vmr32.xyzw  $vf1, $vf2
    ctx->pc = 0x169944u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x169948: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x169948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16994c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x16994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169950: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x169950u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169954: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x169954u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169958: 0xfa040020  sqc2        $vf4, 0x20($s0)
    ctx->pc = 0x169958u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16995c: 0xfa030030  sqc2        $vf3, 0x30($s0)
    ctx->pc = 0x16995cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169960: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x169960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169964: 0xfa010240  sqc2        $vf1, 0x240($s0)
    ctx->pc = 0x169964u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 576), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169968: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x169968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16996c: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x16996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169970: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x169970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169974: 0xf8430030  sqc2        $vf3, 0x30($v0)
    ctx->pc = 0x169974u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169978: 0xf8420010  sqc2        $vf2, 0x10($v0)
    ctx->pc = 0x169978u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16997c: 0xf8440020  sqc2        $vf4, 0x20($v0)
    ctx->pc = 0x16997cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_169980:
    // 0x169980: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x169980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x169984: 0xda0b0100  lqc2        $vf11, 0x100($s0)
    ctx->pc = 0x169984u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x169988: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x169988u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16998c: 0xd8890020  lqc2        $vf9, 0x20($a0)
    ctx->pc = 0x16998cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x169990: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x169990u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x169994: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x169994u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x169998: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x169998u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16999c: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x16999cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1699a0: 0xda080030  lqc2        $vf8, 0x30($s0)
    ctx->pc = 0x1699a0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1699a4: 0x4be259bc  vmulax.xyzw $ACC, $vf11, $vf2x
    ctx->pc = 0x1699a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1699a8: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1699a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1699ac: 0x4be248be  vmaddaz.xyzw $ACC, $vf9, $vf2z
    ctx->pc = 0x1699acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1699b0: 0x4be20a8b  vmaddw.xyzw $vf10, $vf1, $vf2w
    ctx->pc = 0x1699b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1699b4: 0x4be359bc  vmulax.xyzw $ACC, $vf11, $vf3x
    ctx->pc = 0x1699b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1699b8: 0xfbaa0100  sqc2        $vf10, 0x100($sp)
    ctx->pc = 0x1699b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1699bc: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1699bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1699c0: 0x4be348be  vmaddaz.xyzw $ACC, $vf9, $vf3z
    ctx->pc = 0x1699c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1699c4: 0x4be3098b  vmaddw.xyzw $vf6, $vf1, $vf3w
    ctx->pc = 0x1699c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1699c8: 0x4be459bc  vmulax.xyzw $ACC, $vf11, $vf4x
    ctx->pc = 0x1699c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1699cc: 0xfba60110  sqc2        $vf6, 0x110($sp)
    ctx->pc = 0x1699ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1699d0: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x1699d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1699d4: 0x4be448be  vmaddaz.xyzw $ACC, $vf9, $vf4z
    ctx->pc = 0x1699d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1699d8: 0x4be4094b  vmaddw.xyzw $vf5, $vf1, $vf4w
    ctx->pc = 0x1699d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1699dc: 0x4be859bc  vmulax.xyzw $ACC, $vf11, $vf8x
    ctx->pc = 0x1699dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1699e0: 0xfba50120  sqc2        $vf5, 0x120($sp)
    ctx->pc = 0x1699e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1699e4: 0x4be838bd  vmadday.xyzw $ACC, $vf7, $vf8y
    ctx->pc = 0x1699e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1699e8: 0x4be848be  vmaddaz.xyzw $ACC, $vf9, $vf8z
    ctx->pc = 0x1699e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1699ec: 0x4be8084b  vmaddw.xyzw $vf1, $vf1, $vf8w
    ctx->pc = 0x1699ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1699f0: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1699f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1699f4: 0xfbaa00c0  sqc2        $vf10, 0xC0($sp)
    ctx->pc = 0x1699f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1699f8: 0xfa060050  sqc2        $vf6, 0x50($s0)
    ctx->pc = 0x1699f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1699fc: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x1699fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x169a00: 0xfa050060  sqc2        $vf5, 0x60($s0)
    ctx->pc = 0x169a00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169a04: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x169a04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169a08: 0xfba600d0  sqc2        $vf6, 0xD0($sp)
    ctx->pc = 0x169a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x169a0c: 0xfba500e0  sqc2        $vf5, 0xE0($sp)
    ctx->pc = 0x169a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169a10: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x169a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169a14: 0xfa0a0040  sqc2        $vf10, 0x40($s0)
    ctx->pc = 0x169a14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x169a18: 0xda050140  lqc2        $vf5, 0x140($s0)
    ctx->pc = 0x169a18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x169a1c: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x169a1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x169a20: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x169a20u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x169a24: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x169a24u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x169a28: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x169a28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169a2c: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x169a2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169a30: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x169a30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169a34: 0x4be2088b  vmaddw.xyzw $vf2, $vf1, $vf2w
    ctx->pc = 0x169a34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169a38: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x169a38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169a3c: 0xfba20180  sqc2        $vf2, 0x180($sp)
    ctx->pc = 0x169a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169a40: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x169a40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169a44: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x169a44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169a48: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x169a48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169a4c: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x169a4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169a50: 0xfba30190  sqc2        $vf3, 0x190($sp)
    ctx->pc = 0x169a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169a54: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x169a54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169a58: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x169a58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169a5c: 0x4be4090b  vmaddw.xyzw $vf4, $vf1, $vf4w
    ctx->pc = 0x169a5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169a60: 0x4be829bc  vmulax.xyzw $ACC, $vf5, $vf8x
    ctx->pc = 0x169a60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169a64: 0xfba401a0  sqc2        $vf4, 0x1A0($sp)
    ctx->pc = 0x169a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x169a68: 0x4be830bd  vmadday.xyzw $ACC, $vf6, $vf8y
    ctx->pc = 0x169a68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169a6c: 0x4be838be  vmaddaz.xyzw $ACC, $vf7, $vf8z
    ctx->pc = 0x169a6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169a70: 0x4be8084b  vmaddw.xyzw $vf1, $vf1, $vf8w
    ctx->pc = 0x169a70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169a74: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x169a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169a78: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x169a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169a7c: 0xfa020080  sqc2        $vf2, 0x80($s0)
    ctx->pc = 0x169a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169a80: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x169a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x169a84: 0xfa030090  sqc2        $vf3, 0x90($s0)
    ctx->pc = 0x169a84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169a88: 0x260301c0  addiu       $v1, $s0, 0x1C0
    ctx->pc = 0x169a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x169a8c: 0xfa0400a0  sqc2        $vf4, 0xA0($s0)
    ctx->pc = 0x169a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x169a90: 0xfa0100b0  sqc2        $vf1, 0xB0($s0)
    ctx->pc = 0x169a90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169a94: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x169a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169a98: 0xfba40160  sqc2        $vf4, 0x160($sp)
    ctx->pc = 0x169a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x169a9c: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x169a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169aa0: 0xda0501c0  lqc2        $vf5, 0x1C0($s0)
    ctx->pc = 0x169aa0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x169aa4: 0xd8660010  lqc2        $vf6, 0x10($v1)
    ctx->pc = 0x169aa4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x169aa8: 0xd8670020  lqc2        $vf7, 0x20($v1)
    ctx->pc = 0x169aa8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x169aac: 0xd8630030  lqc2        $vf3, 0x30($v1)
    ctx->pc = 0x169aacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x169ab0: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x169ab0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x169ab4: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x169ab4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x169ab8: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x169ab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x169abc: 0x4bea29bc  vmulax.xyzw $ACC, $vf5, $vf10x
    ctx->pc = 0x169abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169ac0: 0x4bea30bd  vmadday.xyzw $ACC, $vf6, $vf10y
    ctx->pc = 0x169ac0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169ac4: 0x4bea38be  vmaddaz.xyzw $ACC, $vf7, $vf10z
    ctx->pc = 0x169ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169ac8: 0x4bea1a8b  vmaddw.xyzw $vf10, $vf3, $vf10w
    ctx->pc = 0x169ac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169acc: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x169accu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169ad0: 0xfbaa0200  sqc2        $vf10, 0x200($sp)
    ctx->pc = 0x169ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x169ad4: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x169ad4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169ad8: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x169ad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169adc: 0x4be2188b  vmaddw.xyzw $vf2, $vf3, $vf2w
    ctx->pc = 0x169adcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169ae0: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x169ae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169ae4: 0xfba20210  sqc2        $vf2, 0x210($sp)
    ctx->pc = 0x169ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169ae8: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x169ae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169aec: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x169aecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169af0: 0x4be1184b  vmaddw.xyzw $vf1, $vf3, $vf1w
    ctx->pc = 0x169af0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169af4: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x169af4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169af8: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x169af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169afc: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x169afcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169b00: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x169b00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169b04: 0x4be418cb  vmaddw.xyzw $vf3, $vf3, $vf4w
    ctx->pc = 0x169b04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169b08: 0xfba30230  sqc2        $vf3, 0x230($sp)
    ctx->pc = 0x169b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169b0c: 0xfbaa01c0  sqc2        $vf10, 0x1C0($sp)
    ctx->pc = 0x169b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x169b10: 0xfa0a00c0  sqc2        $vf10, 0xC0($s0)
    ctx->pc = 0x169b10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x169b14: 0xfa0200d0  sqc2        $vf2, 0xD0($s0)
    ctx->pc = 0x169b14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169b18: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x169b18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169b1c: 0xfa0300f0  sqc2        $vf3, 0xF0($s0)
    ctx->pc = 0x169b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169b20: 0xfba201d0  sqc2        $vf2, 0x1D0($sp)
    ctx->pc = 0x169b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169b24: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x169b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169b28: 0xfba301f0  sqc2        $vf3, 0x1F0($sp)
    ctx->pc = 0x169b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169b2c: 0xd8670010  lqc2        $vf7, 0x10($v1)
    ctx->pc = 0x169b2cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x169b30: 0xd8630030  lqc2        $vf3, 0x30($v1)
    ctx->pc = 0x169b30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x169b34: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x169b34u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x169b38: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x169b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x169b3c: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x169b3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x169b40: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x169b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x169b44: 0x4beb29bc  vmulax.xyzw $ACC, $vf5, $vf11x
    ctx->pc = 0x169b44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169b48: 0x4beb38bd  vmadday.xyzw $ACC, $vf7, $vf11y
    ctx->pc = 0x169b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169b4c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x169b4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169b50: 0x4beb1acb  vmaddw.xyzw $vf11, $vf3, $vf11w
    ctx->pc = 0x169b50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169b54: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x169b54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169b58: 0xfbab0280  sqc2        $vf11, 0x280($sp)
    ctx->pc = 0x169b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x169b5c: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x169b5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169b60: 0x4be230be  vmaddaz.xyzw $ACC, $vf6, $vf2z
    ctx->pc = 0x169b60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169b64: 0x4be2188b  vmaddw.xyzw $vf2, $vf3, $vf2w
    ctx->pc = 0x169b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169b68: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x169b68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169b6c: 0xfba20290  sqc2        $vf2, 0x290($sp)
    ctx->pc = 0x169b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169b70: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x169b70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169b74: 0x4be130be  vmaddaz.xyzw $ACC, $vf6, $vf1z
    ctx->pc = 0x169b74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169b78: 0x4be1184b  vmaddw.xyzw $vf1, $vf3, $vf1w
    ctx->pc = 0x169b78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169b7c: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x169b7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169b80: 0xfba102a0  sqc2        $vf1, 0x2A0($sp)
    ctx->pc = 0x169b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169b84: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x169b84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169b88: 0x4be430be  vmaddaz.xyzw $ACC, $vf6, $vf4z
    ctx->pc = 0x169b88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169b8c: 0x4be418cb  vmaddw.xyzw $vf3, $vf3, $vf4w
    ctx->pc = 0x169b8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169b90: 0xfba302b0  sqc2        $vf3, 0x2B0($sp)
    ctx->pc = 0x169b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169b94: 0xfbab0240  sqc2        $vf11, 0x240($sp)
    ctx->pc = 0x169b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x169b98: 0xfa0b0180  sqc2        $vf11, 0x180($s0)
    ctx->pc = 0x169b98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x169b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ba0: 0xfa020190  sqc2        $vf2, 0x190($s0)
    ctx->pc = 0x169ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169ba4: 0xfa0101a0  sqc2        $vf1, 0x1A0($s0)
    ctx->pc = 0x169ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169ba8: 0xfa0301b0  sqc2        $vf3, 0x1B0($s0)
    ctx->pc = 0x169ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 432), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169bac: 0xfba20250  sqc2        $vf2, 0x250($sp)
    ctx->pc = 0x169bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169bb0: 0xfba10260  sqc2        $vf1, 0x260($sp)
    ctx->pc = 0x169bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169bb4: 0xc05a404  jal         func_169010
    ctx->pc = 0x169BB4u;
    SET_GPR_U32(ctx, 31, 0x169BBCu);
    ctx->pc = 0x169BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169BB4u;
            // 0x169bb8: 0xfba30270  sqc2        $vf3, 0x270($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169010u;
    if (runtime->hasFunction(0x169010u)) {
        auto targetFn = runtime->lookupFunction(0x169010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BBCu; }
        if (ctx->pc != 0x169BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_169010_0x169120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BBCu; }
        if (ctx->pc != 0x169BBCu) { return; }
    }
    ctx->pc = 0x169BBCu;
    // 0x169bbc: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x169BBCu;
    {
        const bool branch_taken_0x169bbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169BBCu;
            // 0x169bc0: 0xae00039c  sw          $zero, 0x39C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bbc) {
            ctx->pc = 0x169BC8u;
            goto label_169bc8;
        }
    }
    ctx->pc = 0x169BC4u;
    // 0x169bc4: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x169bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_169bc8:
    // 0x169bc8: 0x7bb002e0  lq          $s0, 0x2E0($sp)
    ctx->pc = 0x169bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x169bcc: 0x7bb102d0  lq          $s1, 0x2D0($sp)
    ctx->pc = 0x169bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x169bd0: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x169bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x169bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x169BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169BD4u;
            // 0x169bd8: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169818u: goto label_169818;
            case 0x16984Cu: goto label_16984c;
            case 0x169868u: goto label_169868;
            case 0x16986Cu: goto label_16986c;
            case 0x1698B0u: goto label_1698b0;
            case 0x1698ECu: goto label_1698ec;
            case 0x169908u: goto label_169908;
            case 0x16992Cu: goto label_16992c;
            case 0x169980u: goto label_169980;
            case 0x169BC8u: goto label_169bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169BDCu;
    // 0x169bdc: 0x0  nop
    ctx->pc = 0x169bdcu;
    // NOP
}
