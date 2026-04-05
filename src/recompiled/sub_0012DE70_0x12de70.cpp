#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012DE70
// Address: 0x12de70 - 0x12e4c8
void sub_0012DE70_0x12de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DE70_0x12de70");
#endif

    ctx->pc = 0x12de70u;

    // 0x12de70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x12de70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x12de74: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x12de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x12de78: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x12de78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x12de7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12de7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de80: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x12de80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x12de84: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x12de84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x12de88: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x12de88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x12de8c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x12de8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x12de90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12de90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12de94: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x12de94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x12de98: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x12de98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x12de9c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12de9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12dea0: 0xc04c012  jal         func_130048
    ctx->pc = 0x12DEA0u;
    SET_GPR_U32(ctx, 31, 0x12DEA8u);
    ctx->pc = 0x12DEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DEA0u;
            // 0x12dea4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130048u;
    if (runtime->hasFunction(0x130048u)) {
        auto targetFn = runtime->lookupFunction(0x130048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DEA8u; }
        if (ctx->pc != 0x12DEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130048_0x130048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DEA8u; }
        if (ctx->pc != 0x12DEA8u) { return; }
    }
    ctx->pc = 0x12DEA8u;
    // 0x12dea8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12deac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12deacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12deb0: 0x2442c448  addiu       $v0, $v0, -0x3BB8
    ctx->pc = 0x12deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952008));
    // 0x12deb4: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x12deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x12deb8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x12deb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x12debc: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x12debcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x12dec0: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x12dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x12dec4: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x12dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x12dec8: 0xc04bb5e  jal         func_12ED78
    ctx->pc = 0x12DEC8u;
    SET_GPR_U32(ctx, 31, 0x12DED0u);
    ctx->pc = 0x12DECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DEC8u;
            // 0x12decc: 0xae420078  sw          $v0, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ED78u;
    if (runtime->hasFunction(0x12ED78u)) {
        auto targetFn = runtime->lookupFunction(0x12ED78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DED0u; }
        if (ctx->pc != 0x12DED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012ED78_0x12ed78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DED0u; }
        if (ctx->pc != 0x12DED0u) { return; }
    }
    ctx->pc = 0x12DED0u;
    // 0x12ded0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x12ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x12ded4: 0xc04bce6  jal         func_12F398
    ctx->pc = 0x12DED4u;
    SET_GPR_U32(ctx, 31, 0x12DEDCu);
    ctx->pc = 0x12DED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DED4u;
            // 0x12ded8: 0x26440120  addiu       $a0, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F398u;
    if (runtime->hasFunction(0x12F398u)) {
        auto targetFn = runtime->lookupFunction(0x12F398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DEDCu; }
        if (ctx->pc != 0x12DEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F398_0x12f398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DEDCu; }
        if (ctx->pc != 0x12DEDCu) { return; }
    }
    ctx->pc = 0x12DEDCu;
    // 0x12dedc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12dee0: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x12dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x12dee4: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x12dee4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12dee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12deec: 0xae400150  sw          $zero, 0x150($s2)
    ctx->pc = 0x12deecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
    // 0x12def0: 0xae420158  sw          $v0, 0x158($s2)
    ctx->pc = 0x12def0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 2));
    // 0x12def4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x12def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x12def8: 0xae40015c  sw          $zero, 0x15C($s2)
    ctx->pc = 0x12def8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 0));
    // 0x12defc: 0xae420154  sw          $v0, 0x154($s2)
    ctx->pc = 0x12defcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
    // 0x12df00: 0xfa410160  sqc2        $vf1, 0x160($s2)
    ctx->pc = 0x12df00u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12df04: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12df04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12df08: 0xc05e996  jal         func_17A658
    ctx->pc = 0x12DF08u;
    SET_GPR_U32(ctx, 31, 0x12DF10u);
    ctx->pc = 0x12DF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF08u;
            // 0x12df0c: 0x24841520  addiu       $a0, $a0, 0x1520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF10u; }
        if (ctx->pc != 0x12DF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF10u; }
        if (ctx->pc != 0x12DF10u) { return; }
    }
    ctx->pc = 0x12DF10u;
    // 0x12df10: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12df10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12df14: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12df14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df18: 0xc05e996  jal         func_17A658
    ctx->pc = 0x12DF18u;
    SET_GPR_U32(ctx, 31, 0x12DF20u);
    ctx->pc = 0x12DF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF18u;
            // 0x12df1c: 0x24841530  addiu       $a0, $a0, 0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF20u; }
        if (ctx->pc != 0x12DF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF20u; }
        if (ctx->pc != 0x12DF20u) { return; }
    }
    ctx->pc = 0x12DF20u;
    // 0x12df20: 0x42a80b  movn        $s5, $v0, $v0
    ctx->pc = 0x12df20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x12df24: 0x96a40040  lhu         $a0, 0x40($s5)
    ctx->pc = 0x12df24u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x12df28: 0x86a20040  lh          $v0, 0x40($s5)
    ctx->pc = 0x12df28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x12df2c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12DF2Cu;
    {
        const bool branch_taken_0x12df2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF2Cu;
            // 0x12df30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df2c) {
            ctx->pc = 0x12DF64u;
            goto label_12df64;
        }
    }
    ctx->pc = 0x12DF34u;
    // 0x12df34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12df34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12df38:
    // 0x12df38: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x12df38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12df3c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x12df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x12df40: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x12df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x12df44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12DF44u;
    {
        const bool branch_taken_0x12df44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF44u;
            // 0x12df48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df44) {
            ctx->pc = 0x12DF68u;
            goto label_12df68;
        }
    }
    ctx->pc = 0x12DF4Cu;
    // 0x12df4c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x12df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x12df50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12df50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12df54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x12df54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x12df58: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x12df58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12df5c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12DF5Cu;
    {
        const bool branch_taken_0x12df5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF5Cu;
            // 0x12df60: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df5c) {
            ctx->pc = 0x12DF38u;
            runtime->cooperativeGuestYield();
            goto label_12df38;
        }
    }
    ctx->pc = 0x12DF64u;
label_12df64:
    // 0x12df64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12df64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12df68:
    // 0x12df68: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DF68u;
    {
        const bool branch_taken_0x12df68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12df68) {
            ctx->pc = 0x12DF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF68u;
            // 0x12df6c: 0x8e430154  lw          $v1, 0x154($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DF80u;
            goto label_12df80;
        }
    }
    ctx->pc = 0x12DF70u;
    // 0x12df70: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x12df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x12df74: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12df74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x12df78: 0xae420154  sw          $v0, 0x154($s2)
    ctx->pc = 0x12df78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
    // 0x12df7c: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x12df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_12df80:
    // 0x12df80: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x12df80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12df84: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x12df84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12df88: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12df88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12df8c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12df90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DF90u;
    {
        const bool branch_taken_0x12df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF90u;
            // 0x12df94: 0x24160004  addiu       $s6, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df90) {
            ctx->pc = 0x12DFA8u;
            goto label_12dfa8;
        }
    }
    ctx->pc = 0x12DF98u;
    // 0x12df98: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x12df98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12df9c: 0x24170051  addiu       $s7, $zero, 0x51
    ctx->pc = 0x12df9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x12dfa0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x12dfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12dfa4: 0x2416004c  addiu       $s6, $zero, 0x4C
    ctx->pc = 0x12dfa4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_12dfa8:
    // 0x12dfa8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x12dfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x12dfac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DFACu;
    {
        const bool branch_taken_0x12dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DFACu;
            // 0x12dfb0: 0x171100  sll         $v0, $s7, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfac) {
            ctx->pc = 0x12DFC4u;
            goto label_12dfc4;
        }
    }
    ctx->pc = 0x12DFB4u;
    // 0x12dfb4: 0x37de0008  ori         $fp, $fp, 0x8
    ctx->pc = 0x12dfb4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)8);
    // 0x12dfb8: 0x34570002  ori         $s7, $v0, 0x2
    ctx->pc = 0x12dfb8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x12dfbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12dfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12dfc0: 0x36d60050  ori         $s6, $s6, 0x50
    ctx->pc = 0x12dfc0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)80);
label_12dfc4:
    // 0x12dfc4: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x12dfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x12dfc8: 0x240300f5  addiu       $v1, $zero, 0xF5
    ctx->pc = 0x12dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x12dfcc: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x12dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12dfd0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x12dfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x12dfd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12dfd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12dfd8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x12dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12dfdc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x12dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dfe0: 0xb02018  mult        $a0, $a1, $s0
    ctx->pc = 0x12dfe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12dfe4: 0xae45013c  sw          $a1, 0x13C($s2)
    ctx->pc = 0x12dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 5));
    // 0x12dfe8: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x12dfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x12dfec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12dfecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12dff0: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x12dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x12dff4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12dff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12dff8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x12dff8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12dffc: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12DFFCu;
    {
        const bool branch_taken_0x12dffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dffc) {
            ctx->pc = 0x12E000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DFFCu;
            // 0x12e000: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E004u;
            goto label_12e004;
        }
    }
    ctx->pc = 0x12E004u;
label_12e004:
    // 0x12e004: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12e004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12e008: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12e008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12e00c: 0x1812  mflo        $v1
    ctx->pc = 0x12e00cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12e010: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x12e010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12e014: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12e014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12e018: 0x462018  mult        $a0, $v0, $a2
    ctx->pc = 0x12e018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12e01c: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x12e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x12e020: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x12e020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12e024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12e028: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x12e028u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12e02c: 0x1012  mflo        $v0
    ctx->pc = 0x12e02cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x12e030: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x12e030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12e034: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x12e034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
    // 0x12e038: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x12e038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e03c: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x12E03Cu;
    SET_GPR_U32(ctx, 31, 0x12E044u);
    ctx->pc = 0x12E040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E03Cu;
            // 0x12e040: 0xae430144  sw          $v1, 0x144($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E044u; }
        if (ctx->pc != 0x12E044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E044u; }
        if (ctx->pc != 0x12E044u) { return; }
    }
    ctx->pc = 0x12E044u;
    // 0x12e044: 0x8e460144  lw          $a2, 0x144($s2)
    ctx->pc = 0x12e044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x12e048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e04c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e050: 0xae420180  sw          $v0, 0x180($s2)
    ctx->pc = 0x12e050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 2));
    // 0x12e054: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x12E054u;
    SET_GPR_U32(ctx, 31, 0x12E05Cu);
    ctx->pc = 0x12E058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E054u;
            // 0x12e058: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E05Cu; }
        if (ctx->pc != 0x12E05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E05Cu; }
        if (ctx->pc != 0x12E05Cu) { return; }
    }
    ctx->pc = 0x12E05Cu;
    // 0x12e05c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x12E05Cu;
    SET_GPR_U32(ctx, 31, 0x12E064u);
    ctx->pc = 0x12E060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E05Cu;
            // 0x12e060: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E064u; }
        if (ctx->pc != 0x12E064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E064u; }
        if (ctx->pc != 0x12E064u) { return; }
    }
    ctx->pc = 0x12E064u;
    // 0x12e064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e068: 0x8e420140  lw          $v0, 0x140($s2)
    ctx->pc = 0x12e068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x12e06c: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x12e06cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x12e070: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x12e070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x12e074: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x12e074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x12e078: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12e078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12e07c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12E07Cu;
    SET_GPR_U32(ctx, 31, 0x12E084u);
    ctx->pc = 0x12E080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E07Cu;
            // 0x12e080: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E084u; }
        if (ctx->pc != 0x12E084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E084u; }
        if (ctx->pc != 0x12E084u) { return; }
    }
    ctx->pc = 0x12E084u;
    // 0x12e084: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x12e084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x12e088: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12e088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e08c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x12e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x12e090: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x12e090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x12e094: 0x2463f970  addiu       $v1, $v1, -0x690
    ctx->pc = 0x12e094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965616));
    // 0x12e098: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x12e098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x12e09c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x12e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x12e0a0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x12e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x12e0a4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x12E0A4u;
    SET_GPR_U32(ctx, 31, 0x12E0ACu);
    ctx->pc = 0x12E0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0A4u;
            // 0x12e0a8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E0ACu; }
        if (ctx->pc != 0x12E0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E0ACu; }
        if (ctx->pc != 0x12E0ACu) { return; }
    }
    ctx->pc = 0x12E0ACu;
    // 0x12e0ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e0acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0b0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E0B0u;
    {
        const bool branch_taken_0x12e0b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e0b0) {
            ctx->pc = 0x12E0D0u;
            goto label_12e0d0;
        }
    }
    ctx->pc = 0x12E0B8u;
    // 0x12e0b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12e0bc: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12E0BCu;
    {
        const bool branch_taken_0x12e0bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0BCu;
            // 0x12e0c0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0bc) {
            ctx->pc = 0x12E0C8u;
            goto label_12e0c8;
        }
    }
    ctx->pc = 0x12E0C4u;
    // 0x12e0c4: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x12e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_12e0c8:
    // 0x12e0c8: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x12E0C8u;
    SET_GPR_U32(ctx, 31, 0x12E0D0u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E0D0u; }
        if (ctx->pc != 0x12E0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E0D0u; }
        if (ctx->pc != 0x12E0D0u) { return; }
    }
    ctx->pc = 0x12E0D0u;
label_12e0d0:
    // 0x12e0d0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x12E0D0u;
    SET_GPR_U32(ctx, 31, 0x12E0D8u);
    ctx->pc = 0x12E0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0D0u;
            // 0x12e0d4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E0D8u; }
        if (ctx->pc != 0x12E0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E0D8u; }
        if (ctx->pc != 0x12E0D8u) { return; }
    }
    ctx->pc = 0x12E0D8u;
    // 0x12e0d8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E0D8u;
    {
        const bool branch_taken_0x12e0d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0D8u;
            // 0x12e0dc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0d8) {
            ctx->pc = 0x12E0E8u;
            goto label_12e0e8;
        }
    }
    ctx->pc = 0x12E0E0u;
    // 0x12e0e0: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x12E0E0u;
    SET_GPR_U32(ctx, 31, 0x12E0E8u);
    ctx->pc = 0x12E0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0E0u;
            // 0x12e0e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E0E8u; }
        if (ctx->pc != 0x12E0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E0E8u; }
        if (ctx->pc != 0x12E0E8u) { return; }
    }
    ctx->pc = 0x12E0E8u;
label_12e0e8:
    // 0x12e0e8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x12e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x12e0ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12e0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0f0: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x12e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x12e0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0f8: 0xae1e0008  sw          $fp, 0x8($s0)
    ctx->pc = 0x12e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 30));
    // 0x12e0fc: 0xae17000c  sw          $s7, 0xC($s0)
    ctx->pc = 0x12e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 23));
    // 0x12e100: 0xae160010  sw          $s6, 0x10($s0)
    ctx->pc = 0x12e100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
    // 0x12e104: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x12e104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12e108: 0xae06002c  sw          $a2, 0x2C($s0)
    ctx->pc = 0x12e108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
    // 0x12e10c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x12e10cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e110: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x12e110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x12e114: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12e114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e118: 0xc08f7bc  jal         func_23DEF0
    ctx->pc = 0x12E118u;
    SET_GPR_U32(ctx, 31, 0x12E120u);
    ctx->pc = 0x12E11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E118u;
            // 0x12e11c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DEF0u;
    if (runtime->hasFunction(0x23DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x23DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E120u; }
        if (ctx->pc != 0x12E120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DEF0_0x23def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E120u; }
        if (ctx->pc != 0x12E120u) { return; }
    }
    ctx->pc = 0x12E120u;
    // 0x12e120: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x12e120u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e124: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12e124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12e128: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x12e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x12e12c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e130: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12e134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e138: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12e138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e13c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x12e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12e140: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x12e140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x12e144: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x12e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x12e148: 0x40f809  jalr        $v0
    ctx->pc = 0x12E148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E150u);
        ctx->pc = 0x12E14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E148u;
            // 0x12e14c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12E150u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF38u: goto label_12df38;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF80u: goto label_12df80;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12E004u: goto label_12e004;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E240u: goto label_12e240;
            case 0x12E244u: goto label_12e244;
            case 0x12E270u: goto label_12e270;
            case 0x12E290u: goto label_12e290;
            case 0x12E2B0u: goto label_12e2b0;
            case 0x12E368u: goto label_12e368;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E460u: goto label_12e460;
            case 0x12E4B8u: goto label_12e4b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12E150u; }
            if (ctx->pc != 0x12E150u) { return; }
        }
        }
    }
    ctx->pc = 0x12E150u;
    // 0x12e150: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x12e150u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x12e154: 0x2408f7ff  addiu       $t0, $zero, -0x801
    ctx->pc = 0x12e154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x12e158: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x12e158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x12e15c: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x12e15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x12e160: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x12e160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x12e164: 0x3c090002  lui         $t1, 0x2
    ctx->pc = 0x12e164u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2 << 16));
    // 0x12e168: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x12e168u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x12e16c: 0x3c0afffd  lui         $t2, 0xFFFD
    ctx->pc = 0x12e16cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65533 << 16));
    // 0x12e170: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x12e170u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x12e174: 0x240b1000  addiu       $t3, $zero, 0x1000
    ctx->pc = 0x12e174u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x12e178: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12e178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e17c: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x12e17cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12e180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e184: 0xac4500d4  sw          $a1, 0xD4($v0)
    ctx->pc = 0x12e184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 5));
    // 0x12e188: 0x240cefff  addiu       $t4, $zero, -0x1001
    ctx->pc = 0x12e188u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x12e18c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x12e18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x12e190: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x12e190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
    // 0x12e194: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x12e194u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x12e198: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12e198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e19c: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x12e19cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x12e1a0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x12e1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x12e1a4: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x12e1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x12e1a8: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x12e1a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12e1ac: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x12e1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x12e1b0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x12e1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x12e1b4: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x12e1b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x12e1b8: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x12e1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x12e1bc: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x12e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x12e1c0: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x12e1c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12e1c4: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x12e1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x12e1c8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x12e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x12e1cc: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x12e1ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x12e1d0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x12e1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x12e1d4: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x12e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x12e1d8: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x12e1d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12e1dc: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x12e1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x12e1e0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x12e1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x12e1e4: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x12e1e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x12e1e8: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x12e1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x12e1ec: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x12e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x12e1f0: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x12e1f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12e1f4: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x12e1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x12e1f8: 0xc0541a6  jal         func_150698
    ctx->pc = 0x12E1F8u;
    SET_GPR_U32(ctx, 31, 0x12E200u);
    ctx->pc = 0x12E1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E1F8u;
            // 0x12e1fc: 0xfcc20008  sd          $v0, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150698u;
    if (runtime->hasFunction(0x150698u)) {
        auto targetFn = runtime->lookupFunction(0x150698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E200u; }
        if (ctx->pc != 0x12E200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150698_0x150698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E200u; }
        if (ctx->pc != 0x12E200u) { return; }
    }
    ctx->pc = 0x12E200u;
    // 0x12e200: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12e204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12e204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e208: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x12e208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12e20c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x12e20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12e210: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x12e210u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x12e214: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x12e214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x12e218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12e218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e21c: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x12e21cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x12e220: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12e220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e224: 0x8e440140  lw          $a0, 0x140($s2)
    ctx->pc = 0x12e224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x12e228: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x12e228u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12e22c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12e22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12e230: 0x1880001f  blez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12E230u;
    {
        const bool branch_taken_0x12e230 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x12E234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E230u;
            // 0x12e234: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e230) {
            ctx->pc = 0x12E2B0u;
            goto label_12e2b0;
        }
    }
    ctx->pc = 0x12E238u;
    // 0x12e238: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12e238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e23c: 0x0  nop
    ctx->pc = 0x12e23cu;
    // NOP
label_12e240:
    // 0x12e240: 0x8e440184  lw          $a0, 0x184($s2)
    ctx->pc = 0x12e240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
label_12e244:
    // 0x12e244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12e248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e24c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e250: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12E250u;
    SET_GPR_U32(ctx, 31, 0x12E258u);
    ctx->pc = 0x12E254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E250u;
            // 0x12e254: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E258u; }
        if (ctx->pc != 0x12E258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E258u; }
        if (ctx->pc != 0x12E258u) { return; }
    }
    ctx->pc = 0x12E258u;
    // 0x12e258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e25c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e260: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12E260u;
    {
        const bool branch_taken_0x12e260 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12e260) {
            ctx->pc = 0x12E264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E260u;
            // 0x12e264: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E290u;
            goto label_12e290;
        }
    }
    ctx->pc = 0x12E268u;
    // 0x12e268: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12e268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e26c: 0x0  nop
    ctx->pc = 0x12e26cu;
    // NOP
label_12e270:
    // 0x12e270: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12e270u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e274: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12e274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e278: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12e278u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12e27c: 0x0  nop
    ctx->pc = 0x12e27cu;
    // NOP
    // 0x12e280: 0x0  nop
    ctx->pc = 0x12e280u;
    // NOP
    // 0x12e284: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E284u;
    {
        const bool branch_taken_0x12e284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E284u;
            // 0x12e288: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e284) {
            ctx->pc = 0x12E270u;
            runtime->cooperativeGuestYield();
            goto label_12e270;
        }
    }
    ctx->pc = 0x12E28Cu;
    // 0x12e28c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12e28cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12e290:
    // 0x12e290: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x12e290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12e294: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12E294u;
    {
        const bool branch_taken_0x12e294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e294) {
            ctx->pc = 0x12E298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E294u;
            // 0x12e298: 0x8e440184  lw          $a0, 0x184($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E244u;
            runtime->cooperativeGuestYield();
            goto label_12e244;
        }
    }
    ctx->pc = 0x12E29Cu;
    // 0x12e29c: 0x8e420140  lw          $v0, 0x140($s2)
    ctx->pc = 0x12e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x12e2a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12e2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12e2a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x12e2a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12e2a8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x12E2A8u;
    {
        const bool branch_taken_0x12e2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E2A8u;
            // 0x12e2ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2a8) {
            ctx->pc = 0x12E240u;
            runtime->cooperativeGuestYield();
            goto label_12e240;
        }
    }
    ctx->pc = 0x12E2B0u;
label_12e2b0:
    // 0x12e2b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12e2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2b4: 0xae400174  sw          $zero, 0x174($s2)
    ctx->pc = 0x12e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 0));
    // 0x12e2b8: 0xae400170  sw          $zero, 0x170($s2)
    ctx->pc = 0x12e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 0));
    // 0x12e2bc: 0xae40017c  sw          $zero, 0x17C($s2)
    ctx->pc = 0x12e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 0));
    // 0x12e2c0: 0xae400178  sw          $zero, 0x178($s2)
    ctx->pc = 0x12e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 0));
    // 0x12e2c4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x12e2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12e2c8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x12e2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12e2cc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x12e2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12e2d0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x12e2d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e2d4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x12e2d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12e2d8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x12e2d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12e2dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12e2dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e2e0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x12e2e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12e2e4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x12e2e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e2e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12e2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12E2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E2ECu;
            // 0x12e2f0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF38u: goto label_12df38;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF80u: goto label_12df80;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12E004u: goto label_12e004;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E240u: goto label_12e240;
            case 0x12E244u: goto label_12e244;
            case 0x12E270u: goto label_12e270;
            case 0x12E290u: goto label_12e290;
            case 0x12E2B0u: goto label_12e2b0;
            case 0x12E368u: goto label_12e368;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E460u: goto label_12e460;
            case 0x12E4B8u: goto label_12e4b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E2F4u;
    // 0x12e2f4: 0x0  nop
    ctx->pc = 0x12e2f4u;
    // NOP
    // 0x12e2f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12e2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12e2fc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12e300: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12e304: 0x2442c448  addiu       $v0, $v0, -0x3BB8
    ctx->pc = 0x12e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952008));
    // 0x12e308: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x12e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x12e30c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e310: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12e310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12e314: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12e314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12e318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12e31c: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x12e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x12e320: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x12e320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x12e324: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x12e324u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12e328: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12e328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12e32c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12E32Cu;
    {
        const bool branch_taken_0x12e32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E32Cu;
            // 0x12e330: 0x8c91001c  lw          $s1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e32c) {
            ctx->pc = 0x12E368u;
            goto label_12e368;
        }
    }
    ctx->pc = 0x12E334u;
    // 0x12e334: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x12e334u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e338: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12e338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12e33c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x12e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x12e340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e344: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e348: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12e348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e34c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e350: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x12e350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12e354: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x12e354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x12e358: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x12e358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x12e35c: 0x40f809  jalr        $v0
    ctx->pc = 0x12E35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E364u);
        ctx->pc = 0x12E360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E35Cu;
            // 0x12e360: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12E364u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF38u: goto label_12df38;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF80u: goto label_12df80;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12E004u: goto label_12e004;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E240u: goto label_12e240;
            case 0x12E244u: goto label_12e244;
            case 0x12E270u: goto label_12e270;
            case 0x12E290u: goto label_12e290;
            case 0x12E2B0u: goto label_12e2b0;
            case 0x12E368u: goto label_12e368;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E460u: goto label_12e460;
            case 0x12E4B8u: goto label_12e4b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12E364u; }
            if (ctx->pc != 0x12E364u) { return; }
        }
        }
    }
    ctx->pc = 0x12E364u;
    // 0x12e364: 0x0  nop
    ctx->pc = 0x12e364u;
    // NOP
label_12e368:
    // 0x12e368: 0x8e050184  lw          $a1, 0x184($s0)
    ctx->pc = 0x12e368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x12e36c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x12e36cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e370: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12e370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12e374: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x12e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x12e378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e37c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e380: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e384: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x12e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12e388: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x12e388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x12e38c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x12e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x12e390: 0x40f809  jalr        $v0
    ctx->pc = 0x12E390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E398u);
        ctx->pc = 0x12E394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E390u;
            // 0x12e394: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12E398u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF38u: goto label_12df38;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF80u: goto label_12df80;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12E004u: goto label_12e004;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E240u: goto label_12e240;
            case 0x12E244u: goto label_12e244;
            case 0x12E270u: goto label_12e270;
            case 0x12E290u: goto label_12e290;
            case 0x12E2B0u: goto label_12e2b0;
            case 0x12E368u: goto label_12e368;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E460u: goto label_12e460;
            case 0x12E4B8u: goto label_12e4b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12E398u; }
            if (ctx->pc != 0x12E398u) { return; }
        }
        }
    }
    ctx->pc = 0x12E398u;
    // 0x12e398: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E398u;
    {
        const bool branch_taken_0x12e398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E398u;
            // 0x12e39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e398) {
            ctx->pc = 0x12E3A8u;
            goto label_12e3a8;
        }
    }
    ctx->pc = 0x12E3A0u;
    // 0x12e3a0: 0xc08f75e  jal         func_23DD78
    ctx->pc = 0x12E3A0u;
    SET_GPR_U32(ctx, 31, 0x12E3A8u);
    ctx->pc = 0x12E3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3A0u;
            // 0x12e3a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DD78u;
    if (runtime->hasFunction(0x23DD78u)) {
        auto targetFn = runtime->lookupFunction(0x23DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3A8u; }
        if (ctx->pc != 0x12E3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23dd78_0x23ddc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3A8u; }
        if (ctx->pc != 0x12E3A8u) { return; }
    }
    ctx->pc = 0x12E3A8u;
label_12e3a8:
    // 0x12e3a8: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x12e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x12e3ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E3ACu;
    {
        const bool branch_taken_0x12e3ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e3ac) {
            ctx->pc = 0x12E3B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3ACu;
            // 0x12e3b0: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E3C0u;
            goto label_12e3c0;
        }
    }
    ctx->pc = 0x12E3B4u;
    // 0x12e3b4: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x12E3B4u;
    SET_GPR_U32(ctx, 31, 0x12E3BCu);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3BCu; }
        if (ctx->pc != 0x12E3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3BCu; }
        if (ctx->pc != 0x12E3BCu) { return; }
    }
    ctx->pc = 0x12E3BCu;
    // 0x12e3bc: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x12e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_12e3c0:
    // 0x12e3c0: 0xc04bd42  jal         func_12F508
    ctx->pc = 0x12E3C0u;
    SET_GPR_U32(ctx, 31, 0x12E3C8u);
    ctx->pc = 0x12E3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3C0u;
            // 0x12e3c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F508u;
    if (runtime->hasFunction(0x12F508u)) {
        auto targetFn = runtime->lookupFunction(0x12F508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3C8u; }
        if (ctx->pc != 0x12E3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F508_0x12f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3C8u; }
        if (ctx->pc != 0x12E3C8u) { return; }
    }
    ctx->pc = 0x12E3C8u;
    // 0x12e3c8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12e3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3d0: 0x2442c9b8  addiu       $v0, $v0, -0x3648
    ctx->pc = 0x12e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953400));
    // 0x12e3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3d8: 0xc08e4a0  jal         func_239280
    ctx->pc = 0x12E3D8u;
    SET_GPR_U32(ctx, 31, 0x12E3E0u);
    ctx->pc = 0x12E3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3D8u;
            // 0x12e3dc: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239280u;
    if (runtime->hasFunction(0x239280u)) {
        auto targetFn = runtime->lookupFunction(0x239280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3E0u; }
        if (ctx->pc != 0x12E3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239280_0x239280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3E0u; }
        if (ctx->pc != 0x12E3E0u) { return; }
    }
    ctx->pc = 0x12E3E0u;
    // 0x12e3e0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x12e3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x12e3e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E3E4u;
    {
        const bool branch_taken_0x12e3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e3e4) {
            ctx->pc = 0x12E3E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3E4u;
            // 0x12e3e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E3F8u;
            goto label_12e3f8;
        }
    }
    ctx->pc = 0x12E3ECu;
    // 0x12e3ec: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x12E3ECu;
    SET_GPR_U32(ctx, 31, 0x12E3F4u);
    ctx->pc = 0x12E3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3ECu;
            // 0x12e3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3F4u; }
        if (ctx->pc != 0x12E3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3F4u; }
        if (ctx->pc != 0x12E3F4u) { return; }
    }
    ctx->pc = 0x12E3F4u;
    // 0x12e3f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12e3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12e3f8:
    // 0x12e3f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12e3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e3fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x12e3fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12e400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e404: 0x3e00008  jr          $ra
    ctx->pc = 0x12E404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E404u;
            // 0x12e408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF38u: goto label_12df38;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF80u: goto label_12df80;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12E004u: goto label_12e004;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E240u: goto label_12e240;
            case 0x12E244u: goto label_12e244;
            case 0x12E270u: goto label_12e270;
            case 0x12E290u: goto label_12e290;
            case 0x12E2B0u: goto label_12e2b0;
            case 0x12E368u: goto label_12e368;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E460u: goto label_12e460;
            case 0x12E4B8u: goto label_12e4b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E40Cu;
    // 0x12e40c: 0x0  nop
    ctx->pc = 0x12e40cu;
    // NOP
    // 0x12e410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12e414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12e418: 0x8c850184  lw          $a1, 0x184($a0)
    ctx->pc = 0x12e418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x12e41c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x12e41cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12e420: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12e420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12e424: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12E424u;
    {
        const bool branch_taken_0x12e424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E424u;
            // 0x12e428: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e424) {
            ctx->pc = 0x12E460u;
            goto label_12e460;
        }
    }
    ctx->pc = 0x12E42Cu;
    // 0x12e42c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x12e42cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e430: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12e430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12e434: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x12e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x12e438: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e43c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e440: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12e440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e444: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x12e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12e448: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x12e448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12e44c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x12e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x12e450: 0x40f809  jalr        $v0
    ctx->pc = 0x12E450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E458u);
        ctx->pc = 0x12E454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E450u;
            // 0x12e454: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12E458u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF38u: goto label_12df38;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF80u: goto label_12df80;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12E004u: goto label_12e004;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E240u: goto label_12e240;
            case 0x12E244u: goto label_12e244;
            case 0x12E270u: goto label_12e270;
            case 0x12E290u: goto label_12e290;
            case 0x12E2B0u: goto label_12e2b0;
            case 0x12E368u: goto label_12e368;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E460u: goto label_12e460;
            case 0x12E4B8u: goto label_12e4b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12E458u; }
            if (ctx->pc != 0x12E458u) { return; }
        }
        }
    }
    ctx->pc = 0x12E458u;
    // 0x12e458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12e458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e45c: 0x0  nop
    ctx->pc = 0x12e45cu;
    // NOP
label_12e460:
    // 0x12e460: 0x3e00008  jr          $ra
    ctx->pc = 0x12E460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E460u;
            // 0x12e464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF38u: goto label_12df38;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF80u: goto label_12df80;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12E004u: goto label_12e004;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E240u: goto label_12e240;
            case 0x12E244u: goto label_12e244;
            case 0x12E270u: goto label_12e270;
            case 0x12E290u: goto label_12e290;
            case 0x12E2B0u: goto label_12e2b0;
            case 0x12E368u: goto label_12e368;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E460u: goto label_12e460;
            case 0x12E4B8u: goto label_12e4b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E468u;
    // 0x12e468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e46c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12e470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12e470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12e474: 0xc04b9da  jal         func_12E768
    ctx->pc = 0x12E474u;
    SET_GPR_U32(ctx, 31, 0x12E47Cu);
    ctx->pc = 0x12E478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E474u;
            // 0x12e478: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E768u;
    if (runtime->hasFunction(0x12E768u)) {
        auto targetFn = runtime->lookupFunction(0x12E768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E47Cu; }
        if (ctx->pc != 0x12E47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E768_0x12e768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E47Cu; }
        if (ctx->pc != 0x12E47Cu) { return; }
    }
    ctx->pc = 0x12E47Cu;
    // 0x12e47c: 0x8e050184  lw          $a1, 0x184($s0)
    ctx->pc = 0x12e47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x12e480: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x12e480u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12e484: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12e488: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12E488u;
    {
        const bool branch_taken_0x12e488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E488u;
            // 0x12e48c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e488) {
            ctx->pc = 0x12E4B8u;
            goto label_12e4b8;
        }
    }
    ctx->pc = 0x12E490u;
    // 0x12e490: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x12e490u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e494: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x12e494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x12e498: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e49c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e4a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e4a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x12e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12e4a8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x12e4a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x12e4ac: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x12e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x12e4b0: 0x40f809  jalr        $v0
    ctx->pc = 0x12E4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E4B8u);
        ctx->pc = 0x12E4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4B0u;
            // 0x12e4b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12E4B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF38u: goto label_12df38;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF80u: goto label_12df80;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12E004u: goto label_12e004;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E240u: goto label_12e240;
            case 0x12E244u: goto label_12e244;
            case 0x12E270u: goto label_12e270;
            case 0x12E290u: goto label_12e290;
            case 0x12E2B0u: goto label_12e2b0;
            case 0x12E368u: goto label_12e368;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E460u: goto label_12e460;
            case 0x12E4B8u: goto label_12e4b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12E4B8u; }
            if (ctx->pc != 0x12E4B8u) { return; }
        }
        }
    }
    ctx->pc = 0x12E4B8u;
label_12e4b8:
    // 0x12e4b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12e4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12e4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x12E4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4C0u;
            // 0x12e4c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF38u: goto label_12df38;
            case 0x12DF64u: goto label_12df64;
            case 0x12DF68u: goto label_12df68;
            case 0x12DF80u: goto label_12df80;
            case 0x12DFA8u: goto label_12dfa8;
            case 0x12DFC4u: goto label_12dfc4;
            case 0x12E004u: goto label_12e004;
            case 0x12E0C8u: goto label_12e0c8;
            case 0x12E0D0u: goto label_12e0d0;
            case 0x12E0E8u: goto label_12e0e8;
            case 0x12E240u: goto label_12e240;
            case 0x12E244u: goto label_12e244;
            case 0x12E270u: goto label_12e270;
            case 0x12E290u: goto label_12e290;
            case 0x12E2B0u: goto label_12e2b0;
            case 0x12E368u: goto label_12e368;
            case 0x12E3A8u: goto label_12e3a8;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E460u: goto label_12e460;
            case 0x12E4B8u: goto label_12e4b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E4C8u;
}
